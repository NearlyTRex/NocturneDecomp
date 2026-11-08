// Name: FUN_00532af0
// Address: 00532af0
// Address Range: [[00532af0, 00532ccc]]
// Convention: unknown
// Signature: void FUN_00532af0(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00532af0(int param_1,float param_2)

{
  float *pfVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  byte bVar6;
  float afStackY_1014 [1014];
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  
  bVar6 = 0;
  if (1.0 <= *(float *)(param_1 + 0x207f0)) {
    return;
  }
  iVar3 = FUN_00524770(param_1 + 0x158);
  iVar3 = *(int *)(iVar3 + 0x24);
  if ((iVar3 == 1) || (iVar3 == 2)) {
    if ((iVar3 == 2) &&
       ((fVar2 = param_2 / _DAT_00604608 + *(float *)(param_1 + 0x207f0),
        *(float *)(param_1 + 0x207f0) = fVar2, 1.0 <= fVar2 && (*(int *)(param_1 + 0x1fbc0) != 0))))
    {
      FUN_0051b160(0x01D2C900,*(int *)(param_1 + 0x1fbc0));
      uVar5 = 0x01D2C900;
      *(uint *)(param_1 + 0x1fbc0) = 0;
      FUN_0051b740(uVar5,param_1,1);
    }
  }
  else {
    iVar4 = FUN_004a6c30(0x01C51D80,param_1 + 0x1fab8);
    if (iVar4 != 0) {
      FUN_005247c0(param_1 + 0x158,1,1);
      if (*(char *)(param_1 + 0x1fb5c) != '\0') {
        (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))(param_1,param_1 + 0x1fb5c);
        *(byte *)(param_1 + 0x1fb5c) = 0;
      }
    }
  }
  fStack_30 = param_2;
  *(uint *)(param_1 + 0x24a4) = 0;
  *(uint *)(param_1 + 0x24a0) = *(uint *)(param_1 + 0x24a4);
  *(uint *)(param_1 + 0x249c) = *(uint *)(param_1 + 0x24a0);
  while (0.0 < fStack_30) {
    uVar5 = FUN_00524270(param_1 + 0x158,&stack0xffffffd0);
    FUN_00434a80(param_1,uVar5);
  }
  if (iVar3 != 0) {
    FUN_00408ac0(param_1,param_1 + 0x249c);
    pfVar1 = (float *)(param_1 + 0x20);
    fStack_2c = fStack_20;
    (&stack0xffffffd8)[(uint)bVar6 * 0xfffffffe] =
         (float)*(uint *)(&stack0xffffffe4 + (uint)bVar6 * -8);
    *(uint *)((int)&stack0xffffffdc + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
         *(uint *)(&stack0xffffffe8 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
    *pfVar1 = *pfVar1 + fStack_2c;
    *(float *)(param_1 + 0x24) = *(float *)(param_1 + 0x24) + fStack_28;
    *(float *)(param_1 + 0x28) = *(float *)(param_1 + 0x28) + fStack_24;
    iVar3 = *(int *)(param_1 + 0x1fbc0);
    if (iVar3 != 0) {
      *(float *)(iVar3 + 0x20) = *pfVar1;
      *(uint *)(iVar3 + 0x24) = *(uint *)(param_1 + 0x24);
      *(uint *)(iVar3 + 0x28) = *(uint *)(param_1 + 0x28);
      *(uint *)(iVar3 + 0x2c) = *(uint *)(param_1 + 0x2c);
    }
  }
  FUN_005675a0(param_1 + 0x158);
  FUN_00433e80(param_1,param_2);
  return;
}
