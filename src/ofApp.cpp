#include "ofApp.h"
#include "math.h"

int disp = 650;//画面の大きさ
float rangeh = 110.0, rangem = 180.0, ranges = 250;//中心からの距離
float hrad, mrad, srad;//ラジアン
float hx = disp / 2.0, hy = disp / 2.0;
int hour, minute, sec;

//--------------------------------------------------------------
void ofApp::setup(){
	ofBackground(0, 0, 0);
	ofSetCircleResolution(64);
}

//--------------------------------------------------------------
void ofApp::update(){
	hour = ofGetHours() % 12;
	minute = ofGetMinutes();
	sec = ofGetSeconds();

	hrad= (atan(1.0) * 4.0 * ((360 * hour / 12.0) * -1) / 180.0) + 90.0;
	mrad = (atan(1.0) * 4.0 * ((360 * (minute - 15) / 60.0) * -1) / 180.0)+ 90.0;
	srad = (atan(1.0) * 4.0 * ((360 * (sec - 15) / 60.0) * -1) / 180.0) + 90.0;
}

//--------------------------------------------------------------
void ofApp::draw(){
	ofSetColor(255);
	ofCircle(sin(hrad) * rangeh + hx, cos(hrad) * rangeh + hy, 30);// 時間円の描画
	ofCircle(sin(mrad) * rangem + hx, cos(mrad) * rangem + hy, 30);// 分円の描画
	ofCircle(sin(srad) * ranges + hx, cos(srad) * ranges + hy, 30);// 秒円の描画
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
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
