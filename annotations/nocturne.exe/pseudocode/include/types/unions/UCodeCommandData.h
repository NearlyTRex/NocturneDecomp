#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/structs/SClipPlane.h"

// Union: UCodeCommandData
#pragma pack(push, 1)
typedef union UCodeCommandData {
    char texture_name[16];
    SClipPlane clipping_plane;
} UCodeCommandData;
#pragma pack(pop)

