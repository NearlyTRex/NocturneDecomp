#pragma once

// Dependencies
#include "system/basetypes.h"

// Forward declarations
struct SRenderVertex;

// Function Definition: APIDLL_drawPolyList2
typedef int APIDLL_drawPolyList2(struct SRenderVertex* vertex_buffer, ushort** polygons, int polygon_count, int render_flags);

