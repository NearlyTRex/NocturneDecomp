#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/structs/SMpegLayer3ScalefactorGranule.h"

// Structure: SMpegScalefactorBandData
// Ghidra size: 0x1f0 (496 bytes)
#pragma pack(push, 1)
typedef struct SMpegScalefactorBandData {
    SMpegLayer3ScalefactorGranule granules[2]; // 0x0
} SMpegScalefactorBandData;
#pragma pack(pop)

