// Name: sound_sndmain.cpp_getChannelLevels_FUN_005ac990
// Address: 005ac990
// Address Range: [[005ac990, 005aca8f]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_getChannelLevels_FUN_005ac990(int channel,float *out_peak,float *out_average)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_getChannelLevels_FUN_005ac990(int channel,float *out_peak,float *out_average)

{
  int iVar2;
  float *pfVar3;
  float local_20;
  float local_1c;
  float fVar1;
  
  if ((g_ChannelPrimaryBuffers[channel] == (float *)0x0) || (g_MixBufferSize < 1)) {
    if (out_peak != (float *)0x0) {
      *out_peak = 0.0;
    }
    if (out_average != (float *)0x0) {
      *out_average = 0.0;
    }
  }
  pfVar3 = g_ChannelPrimaryBuffers[channel];
  local_20 = 0.0;
  local_1c = 0.0;
  sound_sndmain_cpp_lockSound_FUN_005abd30();
  iVar2 = 0;
  if (0 < g_MixBufferSize) {
    do {
      fVar1 = ABS(*pfVar3);
      pfVar3 = pfVar3 + 1;
      local_20 = local_20 + fVar1;
      if (local_1c < fVar1) {
        local_1c = fVar1;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < g_MixBufferSize);
  }
  sound_sndmain_cpp_unlockSound_FUN_005abdc0();
  local_20 = local_20 / (float)g_MixBufferSize;
  if (1.0 < local_1c) {
    local_1c = 1.0;
  }
  if (1.0 < local_20) {
    local_20 = 1.0;
  }
  if (out_peak != (float *)0x0) {
    *out_peak = local_1c;
  }
  if (out_average != (float *)0x0) {
    *out_average = local_20;
    return;
  }
  return;
}
