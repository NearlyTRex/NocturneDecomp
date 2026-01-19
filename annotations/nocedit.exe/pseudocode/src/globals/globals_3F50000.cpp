#include "nocturne.h"

// =============================================================================
// GLOBAL VARIABLE DEFINITIONS - Range 0x3F50000
// =============================================================================

// CMP3Decoder
CMP3Decoder g_CMP3DecoderInstance;

// CSfxSlot[64]
CSfxSlot g_SfxSlots[64] = {};

// int[8]
int g_ChannelFFTTimestamps[8] = {};

