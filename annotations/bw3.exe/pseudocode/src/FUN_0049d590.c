// Name: FUN_0049d590
// Address: 0049d590
// Address Range: [[0049d590, 0049d8ad]]
// Convention: unknown
// Signature: void FUN_0049d590(undefined4 *param_1,undefined4 *param_2,float param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0049d590(uint *param_1,uint *param_2,float param_3)

{
  uint uVar1;
  float fVar2;
  uint *puVar3;
  uint *puVar4;
  byte bVar5;
  float afStackY_1060 [1015];
  float local_78;
  uint local_74;
  uint local_70;
  float local_6c;
  uint local_68;
  uint local_64;
  float local_60;
  uint local_5c;
  float local_58;
  float local_54;
  uint local_50;
  float local_4c;
  float local_48;
  uint local_44;
  uint local_40;
  float local_3c;
  uint local_38;
  float local_34;
  float local_30;
  uint local_2c;
  float local_28;
  float local_24;
  uint local_20;
  uint local_1c;
  float local_18;
  float local_14;
  
  bVar5 = 0;
  if (param_1 + 3 != param_2) {
    param_1[3] = *param_2;
    param_1[4] = param_2[1];
    param_1[5] = param_2[2];
  }
  FUN_0049d980(param_1);
  *param_1 = 1;
  uVar1 = 0x01ED78C8;
  param_1[1] = 0;
  param_1[2] = 0x3dcccccd;
  local_14 = (float)FUN_0053bc80(uVar1,param_1 + 3,0);
  param_1[4] = local_14;
  puVar3 = param_1;
  do {
    local_18 = -param_3;
    local_14 = (float)FUN_0040ce40(local_18,param_3);
    puVar3[7] = local_14 * (float)_DAT_005c0768 + (float)param_1[3];
    puVar3[8] = param_1[4];
    local_14 = (float)FUN_0040ce40(local_18,param_3);
    puVar4 = puVar3 + 3;
    puVar3[9] = local_14 * (float)_DAT_005c0768 + (float)param_1[5];
    puVar3 = puVar4;
  } while (puVar4 != param_1 + 9);
  local_38 = param_1[4];
  local_3c = (float)param_1[3] + local_18;
  local_34 = (float)param_1[5] + local_18;
  local_78 = (float)param_1[3] + local_18;
  *(uint *)((int)&stack0xffffff8c + (uint)bVar5 * -8) =
       *(uint *)((int)&stack0xffffffc8 + (uint)bVar5 * -8);
  *(uint *)((int)&stack0xffffff90 + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
       *(uint *)((int)&stack0xffffffcc + (uint)bVar5 * -8 + (uint)bVar5 * -8);
  if ((float *)(param_1 + 0x10) != &stack0xffffff88) {
    param_1[0x10] = local_78;
    param_1[0x11] = local_74;
    param_1[0x12] = local_70;
  }
  local_2c = param_1[4];
  local_30 = (float)param_1[3] + param_3;
  local_28 = (float)param_1[5] + -param_3;
  local_6c = (float)param_1[3] + param_3;
  *(uint *)((int)&stack0xffffff98 + (uint)bVar5 * -8) =
       *(uint *)((int)&stack0xffffffd4 + (uint)bVar5 * -8);
  *(uint *)((int)&stack0xffffff9c + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
       *(uint *)((int)&stack0xffffffd8 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
  if ((float *)(param_1 + 0x13) != &stack0xffffff94) {
    param_1[0x13] = local_6c;
    param_1[0x14] = local_68;
    param_1[0x15] = local_64;
  }
  local_5c = param_1[4];
  local_60 = (float)param_1[3] + param_3;
  local_58 = (float)param_1[5] + param_3;
  local_24 = (float)param_1[3] + param_3;
  *(uint *)((int)&stack0xffffffe0 + (uint)bVar5 * -8) =
       *(uint *)((int)&stack0xffffffa4 + (uint)bVar5 * -8);
  *(uint *)((int)&stack0xffffffe4 + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
       *(uint *)((int)&stack0xffffffa8 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
  if ((float *)(param_1 + 0x16) != &stack0xffffffdc) {
    param_1[0x16] = local_24;
    param_1[0x17] = local_20;
    param_1[0x18] = local_1c;
  }
  local_50 = param_1[4];
  local_54 = (float)param_1[3] + -param_3;
  local_4c = (float)param_1[5] + param_3;
  local_48 = (float)param_1[3] + -param_3;
  *(uint *)((int)&stack0xffffffbc + (uint)bVar5 * -8) =
       *(uint *)((int)&stack0xffffffb0 + (uint)bVar5 * -8);
  *(uint *)((int)&stack0xffffffc0 + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
       *(uint *)((int)&stack0xffffffb4 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
  if ((float *)(param_1 + 0x19) != &stack0xffffffb8) {
    param_1[0x19] = local_48;
    param_1[0x1a] = local_44;
    param_1[0x1b] = local_40;
  }
  local_14 = (float)FUN_0053bc80(0x01ED78C8,param_1 + 0x10,0);
  uVar1 = 0x01ED78C8;
  param_1[0x11] = local_14 + (float)_DAT_005c0770;
  local_14 = (float)FUN_0053bc80(uVar1,param_1 + 0x13,0);
  uVar1 = 0x01ED78C8;
  param_1[0x14] = local_14 + (float)_DAT_005c0770;
  local_14 = (float)FUN_0053bc80(uVar1,param_1 + 0x16,0);
  uVar1 = 0x01ED78C8;
  param_1[0x17] = local_14 + (float)_DAT_005c0770;
  fVar2 = (float)FUN_0053bc80(uVar1,param_1 + 0x19,0);
  param_1[0x1a] = fVar2 + (float)_DAT_005c0770;
  if (1.0 < ABS((float)param_1[0x11] - (float)param_1[4])) {
    param_1[0x11] = param_1[4];
  }
  if (1.0 < ABS((float)param_1[0x14] - (float)param_1[4])) {
    param_1[0x14] = param_1[4];
  }
  if (1.0 < ABS((float)param_1[0x17] - (float)param_1[4])) {
    param_1[0x17] = param_1[4];
  }
  if (ABS((float)param_1[0x1a] - (float)param_1[4]) <= 1.0) {
    return;
  }
  param_1[0x1a] = param_1[4];
  return;
}
