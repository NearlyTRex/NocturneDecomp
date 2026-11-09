// Name: core_dcamera.cpp_FUN_004504b0
// Address: 004504b0
// Address Range: [[004504b0, 0045057e]]
// Convention: unknown
// Signature: int core_dcamera_cpp_FUN_004504b0(int param_1,int *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int core_dcamera_cpp_FUN_004504b0(int param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  uint extraout_ECX;
  int extraout_EDX;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  
  fVar3 = (float10)((float)(param_2[1] - *(int *)(param_1 + 0x170)) * _DAT_005ddfc4);
  fVar4 = (float10)((float)(*param_2 - *(int *)(param_1 + 0x16c)) * _DAT_005ddfc4);
  fVar5 = (float10)((float)(param_2[2] - *(int *)(param_1 + 0x174)) * _DAT_005ddfc4);
  fVar3 = SQRT(fVar5 * fVar5 + fVar4 * fVar4 + fVar3 * fVar3) * (float10)_DAT_005ba06e;
  round();
  iVar1 = core_dcamera_cpp_sampleFogAlongRay_FUN_00448980
                    (0x149d6dc,extraout_EDX + 0x16c,extraout_ECX,(int)ROUND(fVar3));
  uVar2 = (uint)(iVar1 * 0xff) >> 0xe;
  if (0xff < uVar2) {
    return 0xffff;
  }
  return uVar2 << 8;
}
