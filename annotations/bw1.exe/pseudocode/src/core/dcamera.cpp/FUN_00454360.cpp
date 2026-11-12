// Name: core_dcamera.cpp_FUN_00454360
// Address: 00454360
// Address Range: [[00454360, 0045442e]]
// Convention: unknown
// Signature: int core_dcamera_cpp_FUN_00454360(int param_1,int *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int core_dcamera_cpp_FUN_00454360(int param_1,int *param_2)

{
  uint uVar1;
  CVector3i *end_pos;
  int extraout_EDX;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  
  fVar2 = (float10)((float)(param_2[1] - *(int *)(param_1 + 0x170)) * _DAT_005fe604);
  fVar3 = (float10)((float)(*param_2 - *(int *)(param_1 + 0x16c)) * _DAT_005fe604);
  fVar4 = (float10)((float)(param_2[2] - *(int *)(param_1 + 0x174)) * _DAT_005fe604);
  fVar2 = SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2) * (float10)_DAT_005d7a07;
  round();
  uVar1 = core_dcamera_cpp_sampleFogAlongRay_FUN_0044c840
                    ((SFogGrid *)0x1480e2c,(CVector3i *)(extraout_EDX + 0x16c),end_pos,
                     (int)ROUND(fVar2));
  uVar1 = uVar1 * 0xff >> 0xe;
  if (0xff < uVar1) {
    return 0xffff;
  }
  return uVar1 << 8;
}
