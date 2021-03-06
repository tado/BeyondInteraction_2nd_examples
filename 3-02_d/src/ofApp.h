#pragma once

#include "ofMain.h"

class ofApp : public ofBaseApp{
	
public:
    void setup();
    void update(){};
    void draw();
    void keyPressed(int key);
    void keyReleased(int key);
    void mouseMoved(int x, int y );
    void mouseDragged(int x, int y, int button);
    void mousePressed(int x, int y, int button);
    void mouseReleased(int x, int y, int button);
    void windowResized(int w, int h);
    void audioReceived 	(float * input, int bufferSize, int nChannels); 
	
    ofSoundStream soundStream;
    int bufSize; //バッファーサイズ
    float *left; //左チャンネルのサンプル
    float *right; //右チャンネルのサンプル
};
