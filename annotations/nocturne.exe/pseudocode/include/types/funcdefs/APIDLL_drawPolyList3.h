#pragma once

// Dependencies
#include "system/basetypes.h"

// Forward declarations
struct SRenderVertex;

// Function Definition: APIDLL_drawPolyList3
typedef int APIDLL_drawPolyList3(struct SRenderVertex* vertex_buffer, ushort* polygons, int polygon_count, int render_flags);

