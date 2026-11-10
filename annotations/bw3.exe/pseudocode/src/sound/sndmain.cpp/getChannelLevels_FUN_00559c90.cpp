// Name: sound_sndmain.cpp_getChannelLevels_FUN_00559c90
// Address: 00559c90
// Address Range: [[00559c90, 00559d8f]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_getChannelLevels_FUN_00559c90(int param_1,float *param_2,float *param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl sound_sndmain_cpp_getChannelLevels_FUN_00559c90(int param_1,float *param_2,float *param_3)

{
  float fVar1;
  int iVar2;
  float *pfVar3;
  float fStack_20;
  float fStack_1c;
  
  if ((*(int *)(param_1 * 4 + 0x2cf32cc) == 0) || (_DAT_02cf329c < 1)) {
    if (param_2 != (float *)0x0) {
      *param_2 = 0.0;
    }
    if (param_3 != (float *)0x0) {
      *param_3 = 0.0;
    }
  }
  pfVar3 = *(float **)(param_1 * 4 + 0x2cf32cc);
  fStack_20 = 0.0;
  fStack_1c = 0.0;
  sound_sndmain_cpp_lockSound_FUN_00558e90();
  iVar2 = 0;
  if (0 < _DAT_02cf329c) {
    do {
      fVar1 = ABS(*pfVar3);
      pfVar3 = pfVar3 + 1;
      fStack_20 = fStack_20 + fVar1;
      if (fStack_1c < fVar1) {
        fStack_1c = fVar1;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < _DAT_02cf329c);
  }
  sound_sndmain_cpp_FUN_00556fd0();
  fStack_20 = fStack_20 / (float)_DAT_02cf329c;
  if (1.0 < fStack_1c) {
    fStack_1c = 1.0;
  }
  if (1.0 < fStack_20) {
    fStack_20 = 1.0;
  }
  if (param_2 != (float *)0x0) {
    *param_2 = fStack_1c;
  }
  if (param_3 != (float *)0x0) {
    *param_3 = fStack_20;
    return;
  }
  return;
}
