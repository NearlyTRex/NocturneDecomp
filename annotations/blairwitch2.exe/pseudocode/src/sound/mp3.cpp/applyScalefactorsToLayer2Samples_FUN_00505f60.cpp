// Name: sound_mp3.cpp_applyScalefactorsToLayer2Samples_FUN_00505f60
// Address: 00505f60
// Address Range: [[00505f60, 00505fb7]]
// Convention: unknown
// Signature: void sound_mp3_cpp_applyScalefactorsToLayer2Samples_FUN_00505f60(int param_1,int param_2,int param_3)

#include "nocturne.h"

void sound_mp3_cpp_applyScalefactorsToLayer2Samples_FUN_00505f60(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  float *pfVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = 0;
  iVar1 = *(int *)(param_3 + 0x10);
  do {
    iVar5 = 0;
    if (0 < iVar1) {
      piVar4 = (int *)(param_2 + iVar6);
      pfVar3 = (float *)(param_1 + iVar6);
      do {
        iVar2 = *piVar4;
        piVar4 = piVar4 + 0x60;
        iVar5 = iVar5 + 1;
        *pfVar3 = *pfVar3 * (float)*(double *)(&DAT_00619030 + iVar2 * 8);
        pfVar3 = pfVar3 + 0x60;
      } while (iVar5 < iVar1);
    }
    iVar6 = iVar6 + 4;
  } while (iVar6 != 0x80);
  return;
}
