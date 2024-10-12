#define MAINPREFIX z
#define PREFIX aftb
#define MOD_NAME Aim For The Bushes
#define AUTHOR "DartRuffian"

#define REQUIRED_VERSION 2.16
#define REQUIRED_CBA_VERSION {3,17,0}
#define REQUIRED_ACE_VERSION {3,17,1}

#include "script_version.hpp"

#define VERSION     MAJOR.MINOR
#define VERSION_STR MAJOR.MINOR.PATCH.BUILD
#define VERSION_AR  MAJOR,MINOR,PATCH,BUILD

#ifndef COMPONENT_BEAUTIFIED
    #define COMPONENT_BEAUTIFIED COMPONENT
#endif
#ifdef SUBCOMPONENT
    #ifndef SUBCOMPONENT_BEAUTIFIED
        #define SUBCOMPONENT_BEAUTIFIED SUBCOMPONENT
    #endif
    #define COMPONENT_NAME QUOTE(MOD_NAME - COMPONENT_BEAUTIFIED (SUBCOMPONENT_BEAUTIFIED))
#else
    #define COMPONENT_NAME QUOTE(MOD_NAME - COMPONENT_BEAUTIFIED)
#endif