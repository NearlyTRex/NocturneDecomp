#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/structs/SClipPlane.h"

// Union: UCodeCommandData
typedef union UCodeCommandData {
    char texture_name[16];
    SClipPlane clipping_plane;
} UCodeCommandData;

