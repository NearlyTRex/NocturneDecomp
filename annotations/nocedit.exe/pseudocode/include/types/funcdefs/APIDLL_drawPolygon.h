#pragma once

// Dependencies
#include "system/basetypes.h"

// Forward declarations
struct SRenderVertex;

// Function Definition: APIDLL_drawPolygon
typedef int APIDLL_drawPolygon(struct SRenderVertex* vertices, int vertex_count, int render_flags);

