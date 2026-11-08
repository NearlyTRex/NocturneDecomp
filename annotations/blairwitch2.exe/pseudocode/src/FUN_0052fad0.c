// Name: FUN_0052fad0
// Address: 0052fad0
// Address Range: [[0052fad0, 0052fe9a]]
// Convention: unknown
// Signature: void FUN_0052fad0(int param_1)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0052fad0(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  byte bVar6;
  float afStackY_1060 [1009];
  uint *puVar7;
  uint local_84;
  uint local_80;
  uint local_7c;
  uint local_78;
  uint local_6c;
  float local_60;
  float local_5c;
  float local_54;
  float local_48;
  int local_3c;
  int local_38;
  int local_34;
  float local_30;
  float local_2c;
  uint local_28;
  float local_24;
  float local_20 [2];
  int local_18;
  int local_14;
  
  bVar6 = 0;
  iVar5 = *(int *)(_DAT_01cedef4 * 4 + 0x1cedee4);
  local_14 = 0x1cb3950;
  uVar3 = FUN_00547890(iVar5 + 0x2b4);
  iVar4 = FUN_00540e80(uVar3,"@Bip01 Head" + 1,0);
  local_80 = 0x3ead0e56;
  local_18 = iVar5 + 0x1134 + iVar4 * 0x30;
  local_7c = 0x3f400000;
  local_84 = 0;
  FUN_00591530(&stack0xffffff7c,local_18);
  puVar7 = &stack0xffffff88;
  local_78 = local_6c;
  *(uint *)((int)&stack0xffffff8c + (uint)bVar6 * 0xfffffffe * 4) =
       *(uint *)(&stack0xffffff98 + (uint)bVar6 * -8);
  *(uint *)(&stack0xffffff90 + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
       *(uint *)(&stack0xffffff9c + (uint)bVar6 * -8 + (uint)bVar6 * -8);
  FUN_00408d70(iVar5,puVar7);
  iVar4 = local_18;
  local_24 = local_54;
  local_20[(uint)bVar6 * -2] = *(float *)(&stack0xffffffb0 + (uint)bVar6 * -8);
  local_20[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
       *(float *)(&stack0xffffffb4 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
  FUN_00591de0(iVar4);
  local_2c = 0.0;
  local_28 = 0;
  local_60 = local_48;
  *(uint *)((int)&stack0xffffffa4 + (uint)bVar6 * -8) =
       *(uint *)(&stack0xffffffbc + (uint)bVar6 * -8);
  *(float *)(&stack0xffffffa8 + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
       local_20[(uint)bVar6 * -2 + (uint)bVar6 * -2 + -8];
  _DAT_01cb560c = 0;
  local_30 = local_60 + (float)_DAT_005e590a;
  local_2c = local_5c + *(float *)(iVar5 + 0x34);
  if (&stack0x00000000 != (byte *)0x1cb3978) {
    _DAT_01cb3954 = local_24;
    _DAT_01cb3958 = local_20[0];
    _DAT_01cb395c = local_20[1];
  }
  FUN_00449280(local_14 + 0x10,&local_30);
  *(uint *)(local_14 + 0x140) = 0x42000000;
  *(uint *)(local_14 + 0x38) = 0x41800000;
  FUN_0044d570(local_14,0x3f800000);
  uVar3 = _DAT_01c37788;
  if (&stack0x00000000 != (byte *)0x1fc7860) {
    _DAT_01fc783c = local_24;
    _DAT_01fc7840 = local_20[0];
    _DAT_01fc7844 = local_20[1];
  }
  if (*(int *)(0x01CB6900 + 0x234) != 0) {
    _DAT_01c37788 = 0;
    FUN_0046afb0(DAT_0060b280,&local_24);
    FUN_0046b4b0(DAT_0060b280,0x42000000);
    FUN_0046b030(DAT_0060b280,&local_30);
    _DAT_01fc9c68 = 1;
    FUN_0055b254();
    FUN_0052d0e0(0x01E661B8,0x461c3f9a,0);
    _DAT_01c37788 = uVar3;
    _DAT_01fc9c68 = 0;
    return;
  }
  FUN_0044a020(local_14,0);
  iVar5 = local_14;
  FUN_0044ab60(local_14);
  iVar4 = 0;
  DAT_0061b5b8 = 0;
  FUN_0052d0e0(param_1,*(uint *)(iVar5 + 0x140),0);
  DAT_0061b5b8 = 1;
  FUN_005332f0(param_1,0xffffffff);
  FUN_0052dc10(param_1,1);
  FUN_005332f0(param_1,1);
  iVar5 = param_1;
  if (0 < *(int *)(param_1 + 0x15f6f8)) {
    do {
      (**(code **)(*(int *)(*(int *)(iVar5 + 0x15f6fc) + 0x2b0) + 0x18))(*(int *)(iVar5 + 0x15f6fc))
      ;
      FUN_0046b920(DAT_0060b280,1);
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + 4;
    } while (iVar4 < *(int *)(param_1 + 0x15f6f8));
  }
  FUN_004c9440(0x01CB8284);
  FUN_0049c780(0x01C3DEB4);
  FUN_0044a2d0(local_14,1);
  local_3c = (int)ROUND(local_24 * _DAT_005fb210);
  local_38 = (int)ROUND(local_20[0] * _DAT_005fb210);
  local_34 = (int)ROUND(local_20[1] * _DAT_005fb210);
  FUN_00530980(param_1,0,0,0,0,0);
  iVar5 = FUN_005311e0(param_1,&local_3c,0);
  iVar4 = FUN_0049eb50(0x01C3DEB4);
  if (DAT_006141bc < 0xf1) {
    iVar1 = -*(int *)(local_14 + 0x1cc0);
    iVar2 = -*(int *)(local_14 + 0x1cc4);
  }
  else {
    iVar1 = *(int *)(local_14 + 0x1cc0) * -2;
    iVar2 = *(int *)(local_14 + 0x1cc4) * -2;
  }
  FUN_0044d600(local_14,(DAT_006141b8 + iVar1) / 2,(DAT_006141bc + iVar2) / 2,
               ((int)((iVar5 + (iVar5 >> 0x1f) * -0x80) - (uint)((iVar5 >> 0x1f) << 6 < 0)) >> 7) +
               iVar4 * 0x80 + *(int *)(0x02661F80 + 0x24) * 0x8000);
  return;
}
