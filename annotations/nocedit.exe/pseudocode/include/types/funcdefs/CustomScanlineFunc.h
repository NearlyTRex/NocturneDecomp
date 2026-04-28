#pragma once

// Dependencies
#include "system/basetypes.h"

// Forward declarations
struct SSoftwareEdge;

// Function Definition: CustomScanlineFunc
typedef void CustomScanlineFunc(int scanline_y, struct SSoftwareEdge* right, struct SSoftwareEdge* left);

