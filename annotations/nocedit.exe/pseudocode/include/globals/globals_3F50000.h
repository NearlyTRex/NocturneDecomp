#pragma once

// Type dependencies
#include "system/basetypes.h"
#include "types/classes/CMP3Decoder.h"
#include "types/classes/CSfxSlot.h"

// =============================================================================
// GLOBAL VARIABLES - Range 0x3F50000
// =============================================================================

// CMP3Decoder
extern CMP3Decoder g_CMP3DecoderInstance;

// CSfxSlot[64]
extern CSfxSlot g_SfxSlots[64];

// char[15360]
extern char g_SfxStreamReadBuffer[15360];

// char[220]
extern char g_SoundTestErrorBuffer[220];

// float
extern float g_SoundReferenceVolumeDistance;

// int
extern int g_ShutdownInProgress;

// int[8]
extern int g_ChannelFFTTimestamps[8];

// uchar
extern uchar g_GlobalMP3DecoderInitialized;
extern uchar g_GlobalMP3DecoderInitializedOther;

