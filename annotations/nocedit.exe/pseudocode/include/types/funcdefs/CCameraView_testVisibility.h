#pragma once

// Dependencies
#include "system/basetypes.h"

// Forward declarations
struct CDemonCamera;
struct CVector3i;

// Function Definition: CCameraView_testVisibility
typedef int CCameraView_testVisibility(struct CDemonCamera* this_ptr, struct CVector3i* corners);

