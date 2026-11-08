// Name: FUN_0052fea0
// Address: 0052fea0
// Address Range: [[0052fea0, 005301ce]]
// Convention: unknown
// Signature: void FUN_0052fea0(int param_1)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0052fea0(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  byte bVar6;
  float afStackY_106c [1012];
  uint *puVar7;
  uint local_84;
  float local_78;
  float local_74;
  uint local_6c;
  float local_60;
  float local_5c;
  uint local_58;
  float local_54;
  float local_50 [5];
  int local_3c;
  int local_38;
  int local_34;
  float local_30;
  float afStack_2c [5];
  int local_18;
  int local_14;
  
  bVar6 = 0;
  iVar5 = *(int *)(0x01E65CD0 + 0x18);
  local_14 = 0x1cb3950;
  if (iVar5 != 0) {
    uVar3 = FUN_00547890(iVar5 + 0x2b4);
    iVar4 = FUN_00540e80(uVar3,"?Bip01 Head" + 1,0);
    afStack_2c[3] = 0.338;
    local_18 = iVar5 + 0x1134 + iVar4 * 0x30;
    afStack_2c[4] = 0.75;
    afStack_2c[2] = 0.0;
    FUN_00591530(afStack_2c + 2,local_18);
    puVar7 = &stack0xffffff7c;
    local_84 = local_6c;
    *(float *)((int)&stack0xffffff80 + (uint)bVar6 * 0xfffffffe * 4) =
         local_50[(uint)bVar6 * 0xfffffffe + 0xfffffffa];
    *(float *)(&stack0xffffff84 + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
         local_50[(uint)bVar6 * 0xfffffffe + (uint)bVar6 * 0xfffffffe + 0xfffffffb];
    FUN_00408d70(iVar5,puVar7);
    iVar4 = local_18;
    local_54 = local_30;
    local_50[(uint)bVar6 * -2] = afStack_2c[(uint)bVar6 * -2];
    afStack_2c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + -8] =
         afStack_2c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
    FUN_00591de0(iVar4);
    local_5c = 0.0;
    local_58 = 0;
    local_78 = local_50[2];
    *(float *)((int)&stack0xffffff8c + (uint)bVar6 * -8) = afStack_2c[(uint)bVar6 * -2 + -6];
    *(float *)((int)&stack0xffffff90 + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
         afStack_2c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + -5];
    _DAT_01cb560c = 0;
    local_60 = local_78 + (float)_DAT_005e5922;
    local_5c = local_74 + *(float *)(iVar5 + 0x34);
    if (&stack0x00000000 != (byte *)0x1cb39a8) {
      _DAT_01cb3954 = local_54;
      _DAT_01cb3958 = local_50[0];
      _DAT_01cb395c = local_50[1];
    }
    FUN_00449280(local_14 + 0x10,&local_60);
    *(uint *)(local_14 + 0x140) = 0x42280000;
    *(uint *)(local_14 + 0x38) = 0x41d00000;
    FUN_0044d570(local_14,0x3f800000);
    if (&stack0x00000000 != (byte *)0x1fc7890) {
      _DAT_01fc783c = local_54;
      _DAT_01fc7840 = local_50[0];
      _DAT_01fc7844 = local_50[1];
    }
    FUN_0044a020(local_14,0);
    DAT_0061b5b8 = 0;
    FUN_0052d0e0(param_1,*(uint *)(local_14 + 0x140),0);
    DAT_0061b5b8 = 1;
    FUN_005332f0(param_1,0xffffffff);
    FUN_0052dc10(param_1,1);
    FUN_005332f0(param_1,1);
    iVar4 = 0;
    iVar5 = param_1;
    if (0 < *(int *)(param_1 + 0x15f6f8)) {
      do {
        (**(code **)(*(int *)(*(int *)(iVar5 + 0x15f6fc) + 0x2b0) + 0x18))
                  (*(int *)(iVar5 + 0x15f6fc));
        FUN_0046b920(DAT_0060b280,1);
        iVar4 = iVar4 + 1;
        iVar5 = iVar5 + 4;
      } while (iVar4 < *(int *)(param_1 + 0x15f6f8));
    }
    FUN_004c9440(0x01CB8284);
    FUN_0049c780(0x01C3DEB4);
    FUN_0044a2d0(local_14,1);
    local_3c = (int)ROUND(local_54 * _DAT_005fb210);
    local_38 = (int)ROUND(local_50[0] * _DAT_005fb210);
    local_34 = (int)ROUND(local_50[1] * _DAT_005fb210);
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
                 ((int)((iVar5 + (iVar5 >> 0x1f) * -0x80) - (uint)((iVar5 >> 0x1f) << 6 < 0)) >> 7)
                 + iVar4 * 0x80 + *(int *)(0x02661F80 + 0x24) * 0x8000);
    return;
  }
  return;
}
