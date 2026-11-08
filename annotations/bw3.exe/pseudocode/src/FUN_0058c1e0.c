// Name: FUN_0058c1e0
// Address: 0058c1e0
// Address Range: [[0058c1e0, 0058c312]]
// Convention: unknown
// Signature: undefined4 FUN_0058c1e0(int param_1,undefined4 *param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0058c1e0(int param_1,uint *param_2)

{
  int iVar1;
  float fVar2;
  byte bVar3;
  float afStackY_106c [1014];
  float *pfVar4;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  uint uStack_60;
  float afStack_5c [5];
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  uint uStack_30;
  float fStack_24;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  
  bVar3 = 0;
  iVar1 = param_1 + 0x158;
  fStack_c = (float)FUN_004fc350(iVar1,5);
  if (fStack_c <= 0.0) {
    return 0;
  }
  FUN_0054dcc0(iVar1,*(uint *)(param_1 + 0xd0ec));
  fStack_84 = fStack_24;
  *(float *)((int)&stack0xffffff80 + (uint)bVar3 * -8) = afStack_5c[(uint)bVar3 * 0xfffffffe + 0xf];
  *(float *)((int)&stack0xffffff84 + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
       afStack_5c[(uint)bVar3 * 0xfffffffe + (uint)bVar3 * 0xfffffffe + 0x10];
  FUN_0054dcc0(iVar1,*(uint *)(param_1 + 0xd0f0));
  fVar2 = fStack_84;
  fStack_3c = afStack_5c[2];
  afStack_5c[(uint)bVar3 * 0xfffffffe + 9] = afStack_5c[(uint)bVar3 * 0xfffffffe + 3];
  afStack_5c[(uint)bVar3 * 0xfffffffe + (uint)bVar3 * 0xfffffffe + 10] =
       afStack_5c[(uint)bVar3 * 0xfffffffe + (uint)bVar3 * 0xfffffffe + 4];
  fStack_18 = fVar2 + fStack_3c;
  fStack_14 = fStack_80 + fStack_38;
  fStack_10 = fStack_7c + fStack_34;
  fStack_48 = fVar2 + fStack_3c;
  afStack_5c[(uint)bVar3 * 0xfffffffe + 6] = afStack_5c[(uint)bVar3 * 0xfffffffe + 0x12];
  afStack_5c[(uint)bVar3 * 0xfffffffe + (uint)bVar3 * 0xfffffffe + 7] =
       afStack_5c[(uint)bVar3 * 0xfffffffe + (uint)bVar3 * 0xfffffffe + 0x13];
  pfVar4 = &stack0xffffff94;
  fStack_78 = fStack_48 * _DAT_005d88f3;
  fStack_74 = fStack_44 * _DAT_005d88f3;
  fStack_70 = fStack_40 * _DAT_005d88f3;
  fStack_6c = fStack_48 * _DAT_005d88f3;
  *(uint *)((int)&stack0xffffff98 + (uint)bVar3 * 0xfffffffe * 4) =
       *(uint *)((int)&stack0xffffff8c + (uint)bVar3 * -8);
  *(uint *)(&stack0xffffff9c + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
       *(uint *)((int)&stack0xffffff90 + (uint)bVar3 * -8 + (uint)bVar3 * -8);
  FUN_00408b80(param_1,pfVar4);
  uStack_60 = uStack_30;
  *(float *)((int)afStack_5c + (uint)bVar3 * -8) = afStack_5c[(uint)bVar3 * 0xfffffffe + 0xc];
  afStack_5c[(uint)bVar3 * 0xfffffffe + (uint)bVar3 * 0xfffffffe + 1] =
       afStack_5c[(uint)bVar3 * 0xfffffffe + (uint)bVar3 * 0xfffffffe + 0xd];
  if (&uStack_60 != param_2) {
    *param_2 = uStack_60;
    param_2[1] = afStack_5c[0];
    param_2[2] = afStack_5c[1];
  }
  return 1;
}
