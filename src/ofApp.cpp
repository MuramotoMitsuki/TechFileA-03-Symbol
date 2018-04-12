#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(255, 255, 255);
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    ofSetColor(255, 0, 0);
    ofDrawCircle(300, 300, 100);
    
    ofSetColor(0, 255, 0);
    ofDrawCircle(300, 300, 50);
    
    ofSetColor(0, 0, 255);
    ofDrawTriangle(250, 250, 350, 250, 300, 200);
    
    ofSetColor(255, 255, 0);
    ofDrawTriangle(250, 350, 350, 350, 300, 400);
    
    ofSetColor(255, 0, 255);
    ofDrawTriangle(250, 250, 250, 350, 200, 300);
    
    ofSetColor(0, 255, 255);
    ofDrawTriangle(350, 250, 350, 350, 400, 300);
    
    ofSetColor(0, 0, 255);
    ofDrawTriangle(200, 200, 400, 200, 300, 100);
    
    ofSetColor(255, 0, 255);
    ofDrawTriangle(200, 200, 200, 400, 100, 300);
    
     ofSetColor(0, 255, 255);
    ofDrawTriangle(400, 200, 400, 400, 500, 300);
    
    ofSetColor(255, 255, 0);
    ofDrawTriangle(200, 400, 400, 400, 300, 500);
    
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
