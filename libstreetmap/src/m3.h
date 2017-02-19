#pragma once
#include <vector>
#include <string>
#include <algorithm>
#include <queue>
#define INFINITYY 99999999999999999
#define UNKNOWN 9999999
using namespace std;
// Returns a path (route) between the start intersection and the end 
// intersection, if one exists. If no path exists, this routine returns 
// an empty (size == 0) vector. If more than one path exists, the path 
// with the shortest travel time is returned. The path is returned as a vector 
// of street segment ids; traversing these street segments, in the given order,
// would take one from the start to the end intersection.
vector<unsigned> find_path_between_intersections(unsigned 
                   intersect_id_start, unsigned intersect_id_end);


// Returns the time required to travel along the path specified, in minutes. 
// The path is passed in as a vector of street segment ids, and this function 
// can assume the vector either forms a legal path or has size == 0.
// The travel time is the sum of the length/speed-limit of each street 
// segment, plus 15 seconds per turn implied by the path. A turn occurs
// when two consecutive street segments have different street IDs.
double compute_path_travel_time(const vector<unsigned>& path);

unsigned shortestfromto(unsigned fm, unsigned t2);
unsigned theothernodeid(unsigned thisnodeid, unsigned segmentid);

unsigned stidbetween(unsigned interid1, unsigned interid2);


// Returns the shortest travel time path (vector of street segments) from 
// the start intersection to a point of interest with the specified name.
// The path will begin on the specified intersection, and end on the 
// intersection that is closest (in Euclidean distance) to the point of 
// interest.
// If no such path exists, returns an empty (size == 0) vector.
vector<unsigned> find_path_to_point_of_interest (unsigned 
                   intersect_id_start, string point_of_interest_name);