// Name: sound_sndmain.cpp_getChannelLevels_FUN_005293f0
// Address: 005293f0
// Address Range: [[005293f0, 005294ef]]
// Convention: unknown
// Signature: void sound_sndmain_cpp_getChannelLevels_FUN_005293f0(int param_1,float *param_2,float *param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void sound_sndmain_cpp_getChannelLevels_FUN_005293f0(int param_1,float *param_2,float *param_3)

{
  float fVar1;
  int iVar2;
  float *pfVar3;
  float local_20;
  float local_1c;
  
  if ((*(int *)(param_1 * 4 + 0x2dc8360) == 0) || (_DAT_02dc8330 < 1)) {
    if (param_2 != (float *)0x0) {
      *param_2 = 0.0;
    }
    if (param_3 != (float *)0x0) {
      *param_3 = 0.0;
    }
  }
  pfVar3 = *(float **)(param_1 * 4 + 0x2dc8360);
  local_20 = 0.0;
  local_1c = 0.0;
  sound_sndmain_cpp_lockSound_FUN_00528800();
  iVar2 = 0;
  if (0 < _DAT_02dc8330) {
    do {
      fVar1 = ABS(*pfVar3);
      pfVar3 = pfVar3 + 1;
      local_20 = local_20 + fVar1;
      if (local_1c < fVar1) {
        local_1c = fVar1;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < _DAT_02dc8330);
  }
  sound_sndmain_cpp_unlockSound_FUN_00528890();
  local_20 = local_20 / (float)_DAT_02dc8330;
  if (1.0 < local_1c) {
    local_1c = 1.0;
  }
  if (1.0 < local_20) {
    local_20 = 1.0;
  }
  if (param_2 != (float *)0x0) {
    *param_2 = local_1c;
  }
  if (param_3 != (float *)0x0) {
    *param_3 = local_20;
    return;
  }
  return;
}
