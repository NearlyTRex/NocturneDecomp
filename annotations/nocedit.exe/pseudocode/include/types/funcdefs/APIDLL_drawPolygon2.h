#pragma once

// Dependencies
#include "system/basetypes.h"

// Forward declarations
struct SRenderVertex;

// Function Definition: APIDLL_drawPolygon2
typedef int APIDLL_drawPolygon2(struct SRenderVertex** vertex_array, int vertex_count, int render_flags);

