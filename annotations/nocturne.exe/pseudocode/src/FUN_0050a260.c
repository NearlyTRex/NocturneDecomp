// Name: FUN_0050a260
// Address: 0050a260
// Address Range: [[0050a260, 0050a636]]
// Convention: unknown
// Signature: void FUN_0050a260(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0050a260(int param_1)

{
  int iVar1;
  int iVar2;
  byte *puVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int local_5c;
  int local_58;
  int local_54;
  byte local_50 [12];
  uint local_44;
  uint local_40;
  uint local_3c;
  float local_38;
  float local_34;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  uint local_18;
  byte *local_14;
  
  iVar6 = *(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8);
  local_14 = &DAT_01c74640;
  uVar4 = FUN_0051e0a0(iVar6 + 0x150);
  iVar5 = FUN_005179d0(uVar4,"@Bip01 Head" + 1,0);
  iVar5 = iVar6 + 0xfd0 + iVar5 * 0x30;
  local_40 = 0x3ead0e56;
  local_44 = 0;
  local_3c = 0x3f400000;
  uVar4 = FUN_0055a8b0(local_50,&local_44,iVar5);
  FUN_0040a240(iVar6,&local_2c,uVar4);
  FUN_0055b180(iVar5,&local_38);
  local_18 = 0;
  local_20 = local_38 + (float)_DAT_00590582;
  _DAT_01c762fc = 0;
  local_1c = local_34 + *(float *)(iVar6 + 0x34);
  if (&stack0x00000000 != (byte *)0x1c74770) {
    _DAT_01c74744 = local_2c;
    _DAT_01c74748 = local_28;
    _DAT_01c7474c = local_24;
  }
  FUN_0044d7a0(local_14 + 0x110,&local_20);
  *(uint *)(local_14 + 0x100) = 0x42000000;
  *(uint *)(local_14 + 0x138) = 0x42000000;
  FUN_00452080(local_14,0x3f800000);
  puVar3 = local_14;
  uVar4 = _DAT_01c02594;
  if (&stack0x00000000 != (byte *)0x1fb8638) {
    _DAT_01fb860c = local_2c;
    _DAT_01fb8610 = local_28;
    _DAT_01fb8614 = local_24;
  }
  if (*(int *)(0x01C775EC + 0x218) == 0) {
    FUN_0044e470(local_14,0);
    FUN_0044efb0(puVar3);
    DAT_005be378 = 0;
    FUN_00507c80(param_1,*(uint *)(puVar3 + 0x100),0);
    DAT_005be378 = 1;
    FUN_0050d2d0(param_1,0xffffffff);
    FUN_00508750(param_1,1);
    iVar5 = 0;
    FUN_0050d2d0(param_1,1);
    iVar6 = param_1;
    if (0 < *(int *)(param_1 + 0x15f2fc)) {
      do {
        (**(code **)(*(int *)(*(int *)(iVar6 + 0x15f300) + 0x14c) + 8))(*(int *)(iVar6 + 0x15f300));
        iVar5 = iVar5 + 1;
        FUN_00461050(DAT_005ae704,1);
        iVar6 = iVar6 + 4;
      } while (iVar5 < *(int *)(param_1 + 0x15f2fc));
    }
    FUN_004afe00(0x01C78C7C);
    FUN_0048a650(0x01C08D04);
    FUN_0044e720(local_14,1);
    local_5c = (int)ROUND(local_2c * _DAT_005a18f0);
    local_58 = (int)ROUND(local_28 * _DAT_005a18f0);
    local_54 = (int)ROUND(local_24 * _DAT_005a18f0);
    FUN_0050adc0(param_1,0,0,0,0,0);
    iVar6 = FUN_0050b5c0(param_1,&local_5c,0);
    iVar5 = FUN_0048c8a0(0x01C08D04);
    if (DAT_005b7620 < 0xf1) {
      iVar1 = -*(int *)(local_14 + 0x1cc0);
      iVar2 = -*(int *)(local_14 + 0x1cc4);
    }
    else {
      iVar1 = *(int *)(local_14 + 0x1cc0) * -2;
      iVar2 = *(int *)(local_14 + 0x1cc4) * -2;
    }
    if (*(float *)(*(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8) + 0x1f5a0) <= 0.0) {
      FUN_0052ee70();
      return;
    }
    FUN_00452110(local_14,(DAT_005b761c + iVar1) / 2,(DAT_005b7620 + iVar2) / 2,
                 ((int)((iVar6 + (iVar6 >> 0x1f) * -0x80) - (uint)((iVar6 >> 0x1f) << 6 < 0)) >> 7)
                 + iVar5 * 0x80 + *(int *)(0x02DDF9F0 + 0x24) * 0x8000);
    return;
  }
  _DAT_01c02594 = 0;
  FUN_00460700(DAT_005ae704,&local_2c);
  FUN_00460c00(DAT_005ae704,0x42000000);
  FUN_00460780(DAT_005ae704,&local_20);
  _DAT_01fba938 = 1;
  FUN_0052eed4();
  FUN_00507c80(0x01E57284,0x461c3f9a,0);
  _DAT_01fba938 = 0;
  _DAT_01c02594 = uVar4;
  return;
}
