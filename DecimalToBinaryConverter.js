"use strict"

let binary = [];
let number = parseInt(prompt("Enter number : "));

for(let i=0;number>=1;i++){
    
    binary.push(number%2);
    number = parseInt(number/2);
    
}

console.log(binary.reverse());
