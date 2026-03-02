#pragma once

// Dependencies
#include "system/basetypes.h"

// Forward declarations
struct SMRGLPrimitiveTriangle;
struct SRenderVertex;

// Function Definition: APIDLL_drawPolyList
typedef int APIDLL_drawPolyList(struct SRenderVertex* vertex_buffer, struct SMRGLPrimitiveTriangle** polygons, int polygon_count, int render_flags);

