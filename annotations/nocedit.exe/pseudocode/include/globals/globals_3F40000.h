#pragma once

// Type dependencies
#include "system/basetypes.h"
#include "types/classes/CDemonActorType.h"
#include "types/classes/CMP3Decoder.h"
#include "types/classes/CSlew.h"

// =============================================================================
// GLOBAL VARIABLES - Range 0x3F40000
// =============================================================================

// CDemonActorType
extern CDemonActorType g_CSmileyClassInfo;

// CMP3Decoder
extern CMP3Decoder g_CMP3DecoderInstance;

// CSlew
extern CSlew g_CSlewInstance;

// int[12]
extern int g_SmileyIndices[12];

