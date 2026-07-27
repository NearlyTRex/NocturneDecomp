// Name: core_gore.cpp_CBloodSplat_initWallSplat_FUN_004aea00
// Address: 004aea00
// Address Range: [[004aea00, 004aead2]]
// Convention: __cdecl
// Signature: void __cdecl core_gore_cpp_CBloodSplat_initWallSplat_FUN_004aea00(undefined4 *param_1,float *param_2,float *param_3)

#include "nocturne.h"

void __cdecl core_gore_cpp_CBloodSplat_initWallSplat_FUN_004aea00(uint *param_1,float *param_2,float *param_3)

{
  float10 fVar1;
  uint uVar2;
  uint uVar3;
  
  param_1[4] = 1;
  if ((float *)(param_1 + 1) != param_2) {
    param_1[1] = *param_2;
    param_1[2] = param_2[1];
    param_1[3] = param_2[2];
  }
  uVar3 = 0x4aea44;
  fVar1 = (float10)atan2
                             ((float10)param_3[1],
                              SQRT((float10)*param_3 * (float10)*param_3 +
                                   (float10)param_3[2] * (float10)param_3[2]));
  param_1[8] = 0;
  param_1[6] = (float)-fVar1;
  uVar2 = 0x4aea5a;
  fVar1 = (float10)atan2((float10)*param_3,(float10)param_3[2]);
  param_1[7] = (float)fVar1;
  uVar2 = core_actor_cpp_getRandomInt_FUN_0040de00(0,3,uVar2,uVar3);
  param_1[10] = uVar2;
  param_1[9] = 0;
  param_1[0xb] = (int)ROUND(*param_2 * 256.0f);
  param_1[0xc] = (int)ROUND(param_2[1] * 256.0f);
  param_1[0xd] = (int)ROUND(param_2[2] * 256.0f);
  param_1[0xe] = (int)ROUND(*param_3 * 65536.0f);
  param_1[0xf] = (int)ROUND(param_3[1] * 65536.0f);
  param_1[0x10] = (int)ROUND(param_3[2] * 65536.0f);
  *param_1 = 0;
  param_1[5] = param_2;
  return;
}
