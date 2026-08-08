#pragma once

// Dependencies
#include "system/basetypes.h"

// Forward declarations
struct SInputFace;
struct SRenderVertex;

// Function Definition: APIDLL_drawPolyList2
typedef int APIDLL_drawPolyList2(struct SRenderVertex* vertex_buffer, struct SInputFace** polygons, int polygon_count, int render_flags);

