// Name: sound_sndmain.cpp_CSfxSlot_computeDistancesToSpeakers_FUN_005244b0
// Address: 005244b0
// Address Range: [[005244b0, 0052451c]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_CSfxSlot_computeDistancesToSpeakers_FUN_005244b0(int param_1)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_CSfxSlot_computeDistancesToSpeakers_FUN_005244b0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  
  iVar3 = 0;
  if (0 < DAT_005bea68) {
    iVar2 = 0;
    iVar1 = param_1;
    do {
      fVar4 = (float10)*(double *)(param_1 + 4) - (float10)*(double *)(&DAT_02dc83d8 + iVar2);
      fVar5 = (float10)*(double *)(param_1 + 0xc) - (float10)*(double *)(&DAT_02dc8418 + iVar2);
      fVar6 = (float10)*(double *)(param_1 + 0x14) - (float10)*(double *)(&DAT_02dc8458 + iVar2);
      iVar2 = iVar2 + 8;
      iVar3 = iVar3 + 1;
      *(float *)(iVar1 + 0x7c) = (float)SQRT(fVar6 * fVar6 + fVar5 * fVar5 + fVar4 * fVar4);
      iVar1 = iVar1 + 4;
    } while (iVar3 < DAT_005bea68);
  }
  return;
}
