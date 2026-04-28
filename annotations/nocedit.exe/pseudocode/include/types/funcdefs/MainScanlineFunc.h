#pragma once

// Dependencies
#include "system/basetypes.h"

// Forward declarations
struct SSoftwareEdge;

// Function Definition: MainScanlineFunc
typedef void MainScanlineFunc(struct SSoftwareEdge* left, struct SSoftwareEdge* right, int scanline_y);

