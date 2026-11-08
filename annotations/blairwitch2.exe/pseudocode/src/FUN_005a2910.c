// Name: FUN_005a2910
// Address: 005a2910
// Address Range: [[005a2910, 005a2a87]]
// Convention: unknown
// Signature: void FUN_005a2910(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005a2910(int param_1,float param_2)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  byte bVar4;
  float afStackY_1024 [1016];
  float *pfVar5;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  
  bVar4 = 0;
  iVar2 = FUN_0059daa0(param_1 + 0x10af8,"Death");
  if ((iVar2 == 0) || (iVar2 = FUN_0059daa0(param_1 + 0x10af8,"Animation"), iVar2 == 0)) {
    (**(code **)(*(int *)(param_1 + 0x2b0) + 0x17c))(param_1);
  }
  iVar2 = FUN_005035c0(param_1 + 0x2b4);
  if ((*(int *)(iVar2 + 0x24) == 1) ||
     (iVar2 = FUN_005035c0(param_1 + 0x2b4), *(int *)(iVar2 + 0x24) == 6)) {
    if (*(char *)(param_1 + 0x11741) == '\0') {
      FUN_00551050(*(uint *)(param_1 + 0x11848));
    }
    else {
      fVar1 = *(float *)(param_1 + 0x11840) - param_2;
      *(float *)(param_1 + 0x11840) = fVar1;
      if (fVar1 <= 0.0) {
        *(uint *)(param_1 + 0x11840) = *(uint *)(param_1 + 0x11844);
        uVar3 = (**(code **)(*(int *)(param_1 + 0x2b0) + 0x34))(param_1,param_1 + 0x11741);
        *(uint *)(param_1 + 0x11848) = uVar3;
      }
    }
  }
  else {
    FUN_00551050(*(uint *)(param_1 + 0x11848));
  }
  fStack_30 = *(float *)(param_1 + 0x11354) * _DAT_005f000f;
  fStack_2c = *(float *)(param_1 + 0x11358) * _DAT_005f000f;
  fStack_28 = *(float *)(param_1 + 0x1135c) * _DAT_005f000f;
  fStack_3c = fStack_30;
  *(uint *)((int)&stack0xffffffc8 + (uint)bVar4 * -8) =
       *(uint *)((int)&stack0xffffffd4 + (uint)bVar4 * -8);
  *(uint *)((int)&stack0xffffffcc + (uint)bVar4 * -8 + (uint)bVar4 * -8) =
       *(uint *)((int)&stack0xffffffd8 + (uint)bVar4 * -8 + (uint)bVar4 * -8);
  pfVar5 = &stack0xffffffdc;
  param_1 = param_1 + 0x2d0c;
  fStack_18 = fStack_3c * param_2;
  fStack_14 = fStack_38 * param_2;
  fStack_10 = fStack_34 * param_2;
  fStack_24 = fStack_3c * param_2;
  *(uint *)((int)&stack0xffffffe0 + (uint)bVar4 * 0xfffffffe * 4) =
       *(uint *)((int)&stack0xffffffec + (uint)bVar4 * -8);
  *(uint *)(&stack0xffffffe4 + (uint)bVar4 * -8 + (uint)bVar4 * -8) =
       *(uint *)((int)&stack0xfffffff0 + (uint)bVar4 * -8 + (uint)bVar4 * -8);
  FUN_005b1890(param_1,pfVar5);
  return;
}
