/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   intersectionInfo.h
 * Author: linyanna
 *
 * Created on January 27, 2016, 10:03 PM
 */

#ifndef INTERSECTIONINFO_H
#define INTERSECTIONINFO_H
#include <vector>
#include <string>
using namespace std;

class intersectionInfo {
public:
    intersectionInfo();
    intersectionInfo(double distfromsource_, unsigned previd_);
    virtual ~intersectionInfo();
    double distfrmsource;
    unsigned previd;
    unsigned id;
    bool visited;
    unsigned v;
    bool modified;
    double score;
private:
};

#endif /* INTERSECTIONINFO_H */

