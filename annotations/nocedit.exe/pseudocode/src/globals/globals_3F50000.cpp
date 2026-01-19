#include "nocturne.h"

// =============================================================================
// GLOBAL VARIABLE DEFINITIONS - Range 0x3F50000
// =============================================================================

CMP3Decoder g_CMP3DecoderInstance;
int g_ChannelFFTTimestamps[8] = {};
CSfxSlot g_SfxSlots[64] = {};

