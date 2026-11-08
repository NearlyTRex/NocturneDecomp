// Name: FUN_004893f0
// Address: 004893f0
// Address Range: [[004893f0, 00489489]]
// Convention: unknown
// Signature: undefined4 FUN_004893f0(int param_1,undefined4 *param_2,undefined4 param_3,int param_4)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_004893f0(int param_1,uint *param_2,uint param_3,int param_4)

{
  byte bVar1;
  float10 fVar2;
  int aiStackY_1008 [1011];
  uint uVar3;
  int iVar4;
  uint uStack_20;
  int iStack_14;
  
  bVar1 = 0;
  iVar4 = *(int *)(param_1 + 0xcde4);
  if (iVar4 != 0) {
    (**(code **)(*(int *)(iVar4 + 0x154) + 0x100))(iVar4,param_2,param_3,param_4);
    if (0.0 < *(float *)(param_4 + 4)) {
      fVar2 = (float10)*(float *)(param_4 + 4) * (float10)_DAT_005bdc4f * (float10)_DAT_005bdc57;
      FUN_005a3120(0);
      iVar4 = (int)ROUND(fVar2);
      uVar3 = 0;
      uStack_20 = *param_2;
      iStack_14 = iVar4;
      *(uint *)((int)&stack0xffffffe4 + (uint)bVar1 * 0xfffffffe * 4) =
           param_2[(uint)bVar1 * -2 + 1];
      *(uint *)(&stack0xffffffe8 + (uint)bVar1 * -8 + (uint)bVar1 * -8) =
           (param_2 + (uint)bVar1 * -2 + 1)[(uint)bVar1 * -2 + 1];
      FUN_004ce9c0(0x01D22E44,&stack0xffffffe0,uVar3,iVar4);
      return 1;
    }
  }
  return 0;
}
