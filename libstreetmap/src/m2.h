#pragma once
#include <string>
#include "graphics.h"
#include "StreetsDatabaseAPI.h"
#include "m1.h"
#include "m3.h"
// Draws the map. You can assume your load_map (string map_name)
// function is called before this function in the unit tests.
// Your main () program should do the same.
void draw_map();
void tour(void (*drawscreen_ptr) (void));
//Draws the screen, continuously triggered in draw_map()
void drawscreen();

//Draws street lines, street names and indications of oneway
void drawsegments();

//Draw features part, features are separated into different functions to show
//different layers
void drawfeatures_greenspace();

void drawfeatures_building();

void drawfeatures_park_beach_golfcourse();

void drawfeatures_island();

void drawfeatures_lake_shoreline();

void drawfeatures_river_stream();

//General draw feature function that takes in the id of feature then determine
//if its closed/open. Draws it accordingly
void drawafeature(unsigned i);

//Draws all POIs as yellow dots and show their names
void showPOI();

//Function to highlight a certain intersection/POI when user clicks on it
void act(float x, float y, t_event_buttonPressed event);

//Function to detect search button pressed then perform searh on POIs or streets
void search(void (*drawscreen) (void));

//Draws name on a street given its id
void drawStreetName(unsigned ID);

//finds the center position of a street
LatLon findCenterPoint(unsigned streetID) ;

//Draws the compass on screen. Called at the end of drawscreen()
void drawcompass();

void highlightsegments(vector<unsigned> segids);

void draw_positions(LatLon clickposition);

void find_a_way(void (*drawscreen_ptr) (void)) ;

void guide(void (*drawscreen_ptr) (void));

vector<double> find_path_segment_length(vector<vector<unsigned>> path_segment);