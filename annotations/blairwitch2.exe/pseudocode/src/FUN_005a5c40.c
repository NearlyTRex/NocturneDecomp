// Name: FUN_005a5c40
// Address: 005a5c40
// Address Range: [[005a5c40, 005a5d02]]
// Convention: unknown
// Signature: void FUN_005a5c40(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005a5c40(int param_1,float param_2)

{
  int iVar1;
  byte bVar2;
  float afStackY_1024 [1016];
  float *pfVar3;
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
  
  bVar2 = 0;
  iVar1 = FUN_0059daa0(param_1 + 0x10af8,"Death");
  if (iVar1 == 0) {
    iVar1 = FUN_0059daa0(param_1 + 0x10af8,"Animation");
    if (iVar1 == 0) {
      (**(code **)(*(int *)(param_1 + 0x2b0) + 0x17c))(param_1);
    }
  }
  fStack_30 = *(float *)(param_1 + 0x11354) * _DAT_005f0622;
  fStack_2c = *(float *)(param_1 + 0x11358) * _DAT_005f0622;
  fStack_28 = *(float *)(param_1 + 0x1135c) * _DAT_005f0622;
  fStack_3c = fStack_30;
  *(uint *)((int)&stack0xffffffc8 + (uint)bVar2 * -8) =
       *(uint *)((int)&stack0xffffffd4 + (uint)bVar2 * -8);
  *(uint *)((int)&stack0xffffffcc + (uint)bVar2 * -8 + (uint)bVar2 * -8) =
       *(uint *)((int)&stack0xffffffd8 + (uint)bVar2 * -8 + (uint)bVar2 * -8);
  pfVar3 = &stack0xffffffdc;
  param_1 = param_1 + 0x2d0c;
  fStack_18 = fStack_3c * param_2;
  fStack_14 = fStack_38 * param_2;
  fStack_10 = fStack_34 * param_2;
  fStack_24 = fStack_3c * param_2;
  *(uint *)((int)&stack0xffffffe0 + (uint)bVar2 * 0xfffffffe * 4) =
       *(uint *)((int)&stack0xffffffec + (uint)bVar2 * -8);
  *(uint *)(&stack0xffffffe4 + (uint)bVar2 * -8 + (uint)bVar2 * -8) =
       *(uint *)((int)&stack0xfffffff0 + (uint)bVar2 * -8 + (uint)bVar2 * -8);
  FUN_005b1890(param_1,pfVar3);
  return;
}
