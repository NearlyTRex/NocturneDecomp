#pragma once

// Dependencies
#include "system/basetypes.h"

// Forward declarations
struct SHardwareEdge;

// Function Definition: RenderScanlineFunc
typedef void RenderScanlineFunc(struct SHardwareEdge* left, struct SHardwareEdge* right, int scanline_y);

