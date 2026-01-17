#pragma once

// Dependencies
#include "system/basetypes.h"

// Function Definition: APIDLL_drawPolyList
typedef int (*APIDLL_drawPolyList)(void* vertex_buffer, void** polygons, int polygon_count, int render_flags);

