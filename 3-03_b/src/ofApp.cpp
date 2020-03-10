#include "testApp.h"

void testApp::setup(){
    //画面の設定
    ofBackground(0, 0, 0);
    ofSetCircleResolution(32);
    ofEnableAlphaBlending();
    ofSetFrameRate(60);
}

void testApp::update(){
}

void testApp::draw(){
    myBall.draw(); //myBallのdraw()メソッドを実行
}

void testApp::keyPressed(int key){
    
}

void testApp::keyReleased(int key){
    
}

void testApp::mouseMoved(int x, int y ){
    
}

void testApp::mouseDragged(int x, int y, int button){
    
}

void testApp::mousePressed(int x, int y, int button){
    
}

void testApp::mouseReleased(int x, int y, int button){
    
}

void testApp::windowResized(int w, int h){
    
}

void testApp::gotMessage(ofMessage msg){
    
}

void testApp::dragEvent(ofDragInfo dragInfo){ 
    
}