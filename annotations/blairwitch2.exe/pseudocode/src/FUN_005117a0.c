// Name: FUN_005117a0
// Address: 005117a0
// Address Range: [[005117a0, 0051197c]]
// Convention: unknown
// Signature: void FUN_005117a0(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005117a0(int param_1,float param_2)

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
  if (1.0 <= *(float *)(param_1 + 0x25080)) {
    return;
  }
  iVar3 = FUN_005035c0(param_1 + 0x2b4);
  iVar3 = *(int *)(iVar3 + 0x24);
  if ((iVar3 == 1) || (iVar3 == 2)) {
    if ((iVar3 == 2) &&
       ((fVar2 = param_2 / _DAT_005fa918 + *(float *)(param_1 + 0x25080),
        *(float *)(param_1 + 0x25080) = fVar2, 1.0 <= fVar2 && (*(int *)(param_1 + 0x24450) != 0))))
    {
      FUN_004fc200(0x01D182F0,*(int *)(param_1 + 0x24450));
      uVar5 = 0x01D182F0;
      *(uint *)(param_1 + 0x24450) = 0;
      FUN_004fc7b0(uVar5,param_1,1);
    }
  }
  else {
    iVar4 = FUN_0048e340(0x01C38BC0,param_1 + 0x24348);
    if (iVar4 != 0) {
      FUN_00503620(param_1 + 0x2b4,1,1);
      if (*(char *)(param_1 + 0x243ec) != '\0') {
        (**(code **)(*(int *)(param_1 + 0x2b0) + 0x34))(param_1,param_1 + 0x243ec);
        *(byte *)(param_1 + 0x243ec) = 0;
      }
    }
  }
  fStack_30 = param_2;
  *(uint *)(param_1 + 0x2510) = 0;
  *(uint *)(param_1 + 0x250c) = *(uint *)(param_1 + 0x2510);
  *(uint *)(param_1 + 0x2508) = *(uint *)(param_1 + 0x250c);
  while (0.0 < fStack_30) {
    uVar5 = FUN_005030c0(param_1 + 0x2b4,&stack0xffffffd0);
    FUN_0042aa00(param_1,uVar5);
  }
  if (iVar3 != 0) {
    FUN_00408cf0(param_1,param_1 + 0x2508);
    pfVar1 = (float *)(param_1 + 0x20);
    fStack_2c = fStack_20;
    (&stack0xffffffd8)[(uint)bVar6 * 0xfffffffe] =
         (float)*(uint *)(&stack0xffffffe4 + (uint)bVar6 * -8);
    *(uint *)((int)&stack0xffffffdc + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
         *(uint *)(&stack0xffffffe8 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
    *pfVar1 = *pfVar1 + fStack_2c;
    *(float *)(param_1 + 0x24) = *(float *)(param_1 + 0x24) + fStack_28;
    *(float *)(param_1 + 0x28) = *(float *)(param_1 + 0x28) + fStack_24;
    iVar3 = *(int *)(param_1 + 0x24450);
    if (iVar3 != 0) {
      *(float *)(iVar3 + 0x20) = *pfVar1;
      *(uint *)(iVar3 + 0x24) = *(uint *)(param_1 + 0x24);
      *(uint *)(iVar3 + 0x28) = *(uint *)(param_1 + 0x28);
      *(uint *)(iVar3 + 0x2c) = *(uint *)(param_1 + 0x2c);
    }
  }
  FUN_00544f00(param_1 + 0x2b4);
  FUN_00429e90(param_1,param_2);
  return;
}
