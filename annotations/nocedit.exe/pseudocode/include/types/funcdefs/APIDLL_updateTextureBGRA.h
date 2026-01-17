#pragma once

// Dependencies
#include "system/basetypes.h"

// Forward declarations
struct SMRGLTextureBasic;

// Function Definition: APIDLL_updateTextureBGRA
typedef int (*APIDLL_updateTextureBGRA)(struct SMRGLTextureBasic* tex, int dimension, int flags);

