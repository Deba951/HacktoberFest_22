var ran1 = Math.floor(Math.random() *6) + 1;
var ran2 = Math.floor(Math.random() *6) + 1;

if(ran1 === ran2){
    document.querySelector("h1").innerHTML = "DRAW!";
}
else if (ran1>=ran2){
    document.querySelector("h1").innerHTML = "PLAYER 1 WINS !";
}
else{
    document.querySelector("h1").innerHTML = "PLAYER 2 WINS !";
}

var Img1 = "images/dice" + ran1 + ".png";
var Img2 = "images/dice" + ran2 + ".png";

document.querySelector(".img1").setAttribute("src",Img1);
document.querySelector(".img2").setAttribute("src",Img2);