#include "gitTestApp.h"
#include "poApplication.h"
#include "poCamera.h"

poObject *createObjectForID(uint uid) {
	return new gitTestApp();
}

void setupApplication() {
	applicationCreateWindow(0, WINDOW_TYPE_NORMAL, "gitTest", 100, 100, 1024, 768);
}

void cleanupApplication() {
}

gitTestApp::gitTestApp() {
	addModifier(new poCamera2D(poColor::black));
}

gitTestApp::~gitTestApp() {
}

void gitTestApp::eventHandler(poEvent *event) {
	
}

void gitTestApp::messageHandler(const std::string &msg, const poDictionary& dict) {
	
}
