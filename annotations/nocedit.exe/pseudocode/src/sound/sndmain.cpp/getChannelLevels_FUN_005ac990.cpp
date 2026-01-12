// Name: sound_sndmain.cpp_getChannelLevels_FUN_005ac990
// Address: 005ac990
// Address Range: [[005ac990, 005aca8f]]
// Convention: __cdecl
// Signature: void sound_sndmain.cpp_getChannelLevels_FUN_005ac990(int channel, float * out_peak, float * out_average)

#include "nocturne.h"

void __cdecl
sound_sndmain_cpp_getChannelLevels_FUN_005ac990(int channel,float *out_peak,float *out_average)

{
  int iVar1;
  float *pfVar2;
  float unaff_EBP;
  float fStack_14;
  
  if ((g_ChannelPrimaryBuffers[channel] == (void *)0x0) || (g_MixBufferSize < 1)) {
    if (out_peak != (float *)0x0) {
      *out_peak = 0.0;
    }
    if (out_average != (float *)0x0) {
      *out_average = 0.0;
    }
  }
  pfVar2 = g_ChannelPrimaryBuffers[channel];
  sound_sndmain_cpp_lockSound_FUN_005abd30();
  iVar1 = 0;
  if (0 < g_MixBufferSize) {
    do {
      unaff_EBP = ABS(*pfVar2);
      pfVar2 = pfVar2 + 1;
      if (fStack_14 < unaff_EBP) {
        fStack_14 = unaff_EBP;
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < g_MixBufferSize);
  }
  sound_sndmain_cpp_unlockSound_FUN_005abdc0();
  fStack_14 = fStack_14 / (float)g_MixBufferSize;
  if (1.0 < unaff_EBP) {
    unaff_EBP = 1.0;
  }
  if (1.0 < fStack_14) {
    fStack_14 = 1.0;
  }
  if (out_peak != (float *)0x0) {
    *out_peak = unaff_EBP;
  }
  if (out_average != (float *)0x0) {
    *out_average = fStack_14;
    return;
  }
  return;
}
