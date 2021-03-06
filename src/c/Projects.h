#pragma once

#include <pebble.h>
#include "CustomFunctions.h"
//the current list of all the projects
typedef struct proj
{
    char** projects;
    char** projectIDs;
    char** indentation;
    int length;
} ProjectStruct;

ProjectStruct* createEmptyProjectList();
ProjectStruct* createProjectList(char** projects, char** projectIDs, char** indentation, int length);
void destroyProjectList(ProjectStruct* ps);
void unSerializeProjectsString(ProjectStruct* projectList, char* projectNamesString, char* projectIDsString, char* projectIndentationString);