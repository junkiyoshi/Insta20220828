#include "ofApp.h"	

//--------------------------------------------------------------
void ofApp::setup() {

	ofSetFrameRate(60);
	ofSetWindowTitle("openFrameworks");

	ofBackground(255);
	ofSetColor(0);
	ofSetLineWidth(2);
}

//--------------------------------------------------------------
void ofApp::update() {

	ofSeedRandom(39);
}

//--------------------------------------------------------------
void ofApp::draw() {

	ofTranslate(ofGetWindowSize() * 0.5);

	int size = 45;

	for (int x = size * -7; x <= size * 7; x += size) {

		for (int y = size * -7; y <= size * 7; y += size) {

			ofPushMatrix();
			ofTranslate(x, y);

			int param = ofMap(ofNoise(ofRandom(1000), ofGetFrameNum() * 0.0015), 0, 1, 0, 4);

			switch (param) {
			case 0:

				ofNoFill();
				ofSetColor(0);
				ofDrawLine(size * -0.45, 0, 0, 0);
				ofDrawLine(0, 0, 0, size * -0.45);

				ofFill();
				ofSetColor(255);
				ofDrawCircle(0, 0, size * 0.08);

				ofNoFill();
				ofSetColor(0);
				ofDrawCircle(0, 0, size * 0.08);

				break;
			case 1:

				ofNoFill();
				ofSetColor(0);
				ofDrawLine(0, size * -0.45, 0, 0);
				ofDrawLine(0, 0, size * 0.45, 0);

				ofFill();
				ofSetColor(255);
				ofDrawCircle(0, 0, size * 0.08);

				ofNoFill();
				ofSetColor(0);
				ofDrawCircle(0, 0, size * 0.08);

				break;
			case 2:

				ofNoFill();
				ofSetColor(0);
				ofDrawLine(size * 0.45, 0, 0, 0);
				ofDrawLine(0, 0, 0, size * 0.45);

				ofFill();
				ofSetColor(255);
				ofDrawCircle(0, 0, size * 0.08);

				ofNoFill();
				ofSetColor(0);
				ofDrawCircle(0, 0, size * 0.08);

				break;
			case 3:
			
				ofNoFill();
				ofSetColor(0);
				ofDrawLine(0, size * 0.45, 0, 0);
				ofDrawLine(0, 0, -size * 0.45, 0);

				ofFill();
				ofSetColor(255);
				ofDrawCircle(0, 0, size * 0.08);

				ofNoFill();
				ofSetColor(0);
				ofDrawCircle(0, 0, size * 0.08);

				break;
			}

			ofPopMatrix();
		}
	}
	
}

//--------------------------------------------------------------
int main() {

	ofSetupOpenGL(720, 720, OF_WINDOW);
	ofRunApp(new ofApp());
}