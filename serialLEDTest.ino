/*
 *Works with Arduino sketch 'pdxMap'
 *and arduino 8 LED sheild
 */

import processing.serial.*;

Serial myPort;
int a = 200;

void setup(){  
  println(Serial.list());
  myPort = new Serial(this, Serial.list()[2], 9600);
  myPort.buffer(1);
  size(400, 400);
  background(51);
  noLoop();  // Makes draw() only run once
}

void draw() {
  fill(a,0,0);
  rect(0,0,width/4, height/2);
  rect(100,0,width/4, height/2);
  rect(200,0,width/4, height/2);
  rect(300,0,width/4, height/2);
  rect(0,200,width/4, height/2);
  rect(100,200,width/4, height/2);
  rect(200,200,width/4, height/2);
  rect(300,200,width/4, height/2);
}

void mousePressed() {
  println("Coordinates: " + mouseX +"," + mouseY);
  mouseAction();
    }

void mouseAction(){
  if( mouseX > 0 && mouseX < 100){
   if( mouseY > 0 && mouseY < 200){
    println("square 1");
    myPort.write(4); 
   }
  }
  if( mouseX > 100 && mouseX < 200){
   if( mouseY > 0 && mouseY < 200){
    println("square 2");
    myPort.write(3); 
   }
  }
  if( mouseX > 200 && mouseX < 300){
   if( mouseY > 0 && mouseY < 200){
    println("square 3");
    myPort.write(2); 
   }
  }
  if( mouseX > 300 && mouseX < 400){
   if( mouseY > 0 && mouseY < 200){
    println("square 4");
    myPort.write(1); 
   }
  }
  if( mouseX > 0 && mouseX < 100){
   if( mouseY > 200 && mouseY < 400){
    println("square 5");
    myPort.write(8); 
   }
  }
  if( mouseX > 100 && mouseX < 200){
   if( mouseY > 200 && mouseY < 400){
    println("square 6");
    myPort.write(7); 
   }
  }
  if( mouseX > 200 && mouseX < 300){
   if( mouseY > 200 && mouseY < 400){
    println("square 7");
    myPort.write(6); 
   }
  }
  if( mouseX > 300 && mouseX < 400){
   if( mouseY > 200 && mouseY < 400){
    println("square 8");
    myPort.write(5); 
   }
  }
}
