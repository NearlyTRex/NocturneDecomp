// Name: core_fire.cpp_FUN_0049fce0
// Address: 0049fce0
// Address Range: [[0049fce0, 0049fde9]]
// Convention: unknown
// Signature: void core_fire_cpp_FUN_0049fce0(undefined4 *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_fire_cpp_FUN_0049fce0(uint *param_1,uint *param_2,uint param_3,uint param_4)

{
  float fVar1;
  uint *puVar2;
  uint *puVar3;
  int iVar4;
  float10 fVar5;
  float10 fVar6;
  
  if (param_1 + 1 != param_2) {
    param_1[1] = *param_2;
    param_1[2] = param_2[1];
    param_1[3] = param_2[2];
  }
  fVar1 = (float)core_setcolid_cpp_FUN_0053bc80(g_CDemonSetPtr,param_1 + 1,0);
  core_setcolid_cpp_CDemonSet_init_FUN_0053ebe0(g_CDemonSetPtr);
  if ((float)param_1[2] - fVar1 < 1.0) {
    param_1[2] = fVar1 + 1.0;
  }
  *param_1 = param_3;
  param_1[0xb] = param_4;
  puVar3 = param_1 + 0xc;
  iVar4 = 0;
  puVar2 = param_1;
  do {
    if (puVar3 != param_1 + 1) {
      *puVar3 = param_1[1];
      puVar3[1] = param_1[2];
      puVar3[2] = param_1[3];
    }
    fVar5 = (float10)fcos((float10)iVar4 * (float10)_DAT_005c0900);
    fVar6 = (float10)fsin((float10)iVar4 * (float10)_DAT_005c0900);
    puVar3 = puVar3 + 3;
    puVar2[0x3d] = 0;
    iVar4 = iVar4 + 1;
    puVar2[0x3c] = (float)fVar5;
    puVar2[0x3e] = (float)fVar6;
    puVar2 = puVar2 + 3;
  } while (iVar4 < 0x10);
  param_1[0x6c] = 0x3d4ccccd;
  param_1[0x6d] = 0;
  param_1[0x78] = 0;
  param_1[5] = 0x40000000;
  return;
}
