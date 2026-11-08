// Name: FUN_0058aa30
// Address: 0058aa30
// Address Range: [[0058aa30, 0058ace3]]
// Convention: unknown
// Signature: void FUN_0058aa30(int param_1,undefined4 param_2,int param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0058aa30(int param_1,uint param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  byte bVar3;
  float afStackY_107c [1002];
  float local_c0;
  byte local_bc [40];
  float local_94;
  float local_90 [4];
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float afStack_6c [4];
  float local_5c;
  float local_58;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  int local_18;
  
  bVar3 = 0;
  local_18 = FUN_0040cf60(0x41200000,0x41a00000);
  *(int *)(param_1 + 0x20) = local_18;
  local_18 = FUN_0040cf60(0x40000000,*(uint *)(param_1 + 0x34));
  *(uint *)(param_1 + 0x24) = 1;
  *(uint *)(param_1 + 0x28) = param_2;
  *(int *)(param_1 + 0x2c) = local_18;
  FUN_00476d20(&DAT_01fc9c68);
  afStack_6c[2] = local_34;
  afStack_6c[(uint)bVar3 * -2 + 3] = afStack_6c[(uint)bVar3 * -2 + 0xf];
  afStack_6c[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 4] =
       afStack_6c[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 0x10];
  FUN_00476d40(&DAT_01fc9c68);
  local_90[2] = local_70;
  local_90[(uint)bVar3 * -2 + 3] = afStack_6c[(uint)bVar3 * -2];
  local_90[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 4] =
       afStack_6c[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1];
  local_24 = (local_90[2] - afStack_6c[2]) * (float)_DAT_005ee5b2;
  local_1c = 0.0;
  if (0.0 < local_24) {
    local_1c = local_24;
  }
  local_28 = local_90[3] - afStack_6c[3];
  if (local_1c < local_28) {
    local_1c = local_28;
  }
  local_20 = (local_80 - local_5c) * (float)_DAT_005ee5b2;
  if (local_1c < local_20) {
    local_1c = local_20;
  }
  FUN_00449280(local_bc,param_1 + 0x14);
  local_74 = local_1c;
  local_7c = 0.0;
  local_78 = 0.0;
  FUN_00449530(local_bc,local_90 + 5);
  local_40 = local_58;
  afStack_6c[(uint)bVar3 * -2 + 0xc] = afStack_6c[(uint)bVar3 * -2 + 6];
  afStack_6c[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 0xd] =
       afStack_6c[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 7];
  local_4c = local_40 + *(float *)(param_1 + 8);
  local_48 = local_3c + *(float *)(param_1 + 0xc);
  local_44 = local_38 + *(float *)(param_1 + 0x10);
  local_94 = local_4c;
  local_90[(uint)bVar3 * -2] = afStack_6c[(uint)bVar3 * -2 + 9];
  local_90[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1] =
       afStack_6c[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 10];
  if (local_90 + 5 != &local_94) {
    local_7c = local_94;
    local_78 = local_90[0];
    local_74 = local_90[1];
  }
  if (param_3 != 0) {
    FUN_0049e6e0(0x01C3DEB4,local_90 + 5,local_1c,0,0);
  }
  uVar1 = 0x01C38BC0;
  local_18 = _DAT_01fc8a20;
  local_c0 = (float)_DAT_01fc8a20 * (float)_DAT_005ee5ba;
  *(float *)(param_1 + 0x30) = local_c0;
  iVar2 = FUN_0048e340(uVar1,"BnoLightningFlash" + 1);
  if (iVar2 == 0) {
    local_c0 = local_c0 + _DAT_005ee5c2;
    if (1.0 < local_c0) {
      local_c0 = 1.0;
    }
    FUN_00441e80(0x1fc7838,local_c0);
    if (param_3 == 0) {
      return;
    }
  }
  else if (param_3 == 0) {
    return;
  }
  FUN_0055ae50(0x0264B290,param_1,"light?.wav",local_90 + 5);
  return;
}
