//
// stars.cpp
// solarsystem
//
#include "stars.hpp"

#define PI 3.1415926535

Star::Star(GLfloat radius, GLfloat distance,
           GLfloat speed, GLfloat selfSpeed,
           Star* parentStar) {
               // todo:
}

void Star::drawStar() {
    // todo:
}

void Star::update(long timeSpan) {
    // todo:
}

Planet::Planet(GLfloat radius, GLfloat distance,
               GLfloat speed, GLfloat selfSpeed,
               Star* parentStar, GLfloat rgbColor[3]) :
Star(radius, distance, speed, selfSpeed, parentStar) {
                   // todo:
}

void Planet::drawPlanet() {
    // todo:
}

LightPlanet::LightPlanet(GLfloat radius, GLfloat distance, GLfloat speed,
                         GLfloat selfSpeed, Star* parentStar, GLfloat rgbColor[3]) :
Planet(radius, distance, speed, selfSpeed, parentStar, rgbColor) {
    // todo:
}

void LightPlanet::drawLight() {
    // todo:
}