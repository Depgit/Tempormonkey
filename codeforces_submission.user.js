// ==UserScript==
// @name         submission
// @name:useless
// @namespace    http://tampermonkey.net/
// @version      0.1
// @description  show your accepted submissions on your sidebar
// @author       pi07
// @match        https://codeforces.com/*
// @grant        none
// ==/UserScript==

(function() {
    'use strict';
    if ($ === undefined) {
        return ;
    }
    var sideElement = $('.personal-sidebar')[0];
    if(sideElement !== undefined){
        var handle = sideElement.getElementsByClassName('rated-user')[0].innerText;
        console.log(handle);
            fetch(`https://codeforces.com/api/user.status?handle=${handle}`)
            .then(res =>res.json())
            .then(data => {
                console.log(data)
                // for(var i in data){console.log(i)}
                var result = data['result']
                console.log(result)
                var ct=0;
                for(var i in result){
                    if(result[i]['verdict']==='OK'){
                        ct++;
                    }
                }
                sideElement.getElementsByClassName('nav-links')[0].getElementsByTagName('li')[3].getElementsByTagName('a')[0].innerText = "Submissions("+ct+")";
            })
    }
})();
