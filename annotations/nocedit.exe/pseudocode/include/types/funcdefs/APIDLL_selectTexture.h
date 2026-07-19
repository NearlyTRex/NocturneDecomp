#pragma once

// Dependencies
#include "system/basetypes.h"

// Forward declarations
struct SMRGLTextureBasic;

// Function Definition: APIDLL_selectTexture
typedef int APIDLL_selectTexture(struct SMRGLTextureBasic* texture_info, int texture_dimension, uchar* texture_data, uchar* palette_data, uchar* opacity_data);

