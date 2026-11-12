// Name: sound_sndmain.cpp_getChannelLevels_FUN_005540f0
// Address: 005540f0
// Address Range: [[005540f0, 005541ef]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_getChannelLevels_FUN_005540f0(int channel,float *out_peak,float *out_average)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl sound_sndmain_cpp_getChannelLevels_FUN_005540f0(int channel,float *out_peak,float *out_average)

{
  float fVar1;
  int iVar2;
  float *pfVar3;
  float fStack_20;
  float fStack_1c;
  
  if ((*(int *)(channel * 4 + 0x2648ec8) == 0) || (_DAT_02648e98 < 1)) {
    if (out_peak != (float *)0x0) {
      *out_peak = 0.0;
    }
    if (out_average != (float *)0x0) {
      *out_average = 0.0;
    }
  }
  pfVar3 = *(float **)(channel * 4 + 0x2648ec8);
  fStack_20 = 0.0;
  fStack_1c = 0.0;
  sound_sndmain_cpp_lockSound_FUN_005532f0();
  iVar2 = 0;
  if (0 < _DAT_02648e98) {
    do {
      fVar1 = ABS(*pfVar3);
      pfVar3 = pfVar3 + 1;
      fStack_20 = fStack_20 + fVar1;
      if (fStack_1c < fVar1) {
        fStack_1c = fVar1;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < _DAT_02648e98);
  }
  sound_sndmain_cpp_FUN_00551440();
  fStack_20 = fStack_20 / (float)_DAT_02648e98;
  if (1.0 < fStack_1c) {
    fStack_1c = 1.0;
  }
  if (1.0 < fStack_20) {
    fStack_20 = 1.0;
  }
  if (out_peak != (float *)0x0) {
    *out_peak = fStack_1c;
  }
  if (out_average != (float *)0x0) {
    *out_average = fStack_20;
    return;
  }
  return;
}
