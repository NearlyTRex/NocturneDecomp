#pragma once

// Dependencies
#include "system/basetypes.h"

// Forward declarations
struct SMRGLHeaderExtended;

// Function Definition: MRGLBlockHandlerFunc
typedef struct SMRGLHeaderExtended* (*MRGLBlockHandlerFunc)(struct SMRGLHeaderExtended* block);

