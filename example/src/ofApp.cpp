#include "ofApp.h"

void ofApp::setup() {

	ofxPCA pca;

	vector<ofVec3f> points;
	for (int i = 0; i < 10; i++) {
		points.push_back(ofVec3f(ofRandom(1), ofRandom(1), ofRandom(1)));
	}

	ofxPCAResult result = pca.analyze(points);

	cout << result.eigenvalues[0] << endl;
	ofVec3f ev1 = result.eigenvectors[0];
	cout << ev1.x << "\t" << ev1.y << "\t" << ev1.z << endl;
}

void ofApp::update() {

}

void ofApp::draw() {

}
