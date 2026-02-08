#pragma once

// Dependencies
#include "system/basetypes.h"

// Forward declarations
struct SMRGLTextureBasic;

// Function Definition: APIDLL_selectTexture
typedef int APIDLL_selectTexture(struct SMRGLTextureBasic* texture_info, int texture_dimension, void* texture_data, void* palette_data, void* opacity_data);

