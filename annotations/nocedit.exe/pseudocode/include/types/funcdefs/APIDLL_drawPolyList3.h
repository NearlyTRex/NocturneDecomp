#pragma once

// Dependencies
#include "system/basetypes.h"

// Forward declarations
struct SRenderVertex;
struct STrianglePackedIndices;

// Function Definition: APIDLL_drawPolyList3
typedef int APIDLL_drawPolyList3(struct SRenderVertex* vertex_buffer, struct STrianglePackedIndices* polygons, int polygon_count, int render_flags);

