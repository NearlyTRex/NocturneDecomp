// Name: core_netgame.cpp_FUN_004edd30
// Address: 004edd30
// Address Range: [[004edd30, 004ede28]]
// Convention: unknown
// Signature: void core_netgame_cpp_FUN_004edd30(undefined4 *param_1,undefined4 *param_2)

#include "nocturne.h"

void core_netgame_cpp_FUN_004edd30(uint *param_1,uint *param_2)

{
  int iVar1;
  uint *puVar2;
  byte bVar3;
  uint uStack_88;
  uint uStack_84;
  uint uStack_80;
  uint uStack_7c;
  uint uStack_78;
  uint local_74;
  uint local_70;
  byte local_6c [4];
  ushort local_68;
  uint local_64;
  uint local_60;
  uint local_5c;
  uint local_58;
  uint local_54;
  uint local_50;
  uint local_4c;
  uint local_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  uint local_28;
  uint local_24;
  uint local_20;
  uint local_1c;
  uint local_18;
  uint local_14;
  
  bVar3 = 0;
  uStack_88 = *param_1;
  uStack_84 = param_1[1];
  uStack_80 = param_1[2];
  uStack_7c = param_1[3];
  uStack_78 = param_1[4];
  local_74 = param_1[5];
  local_70 = param_1[6];
  core_netgame_cpp_FUN_004edfb0(local_6c,param_1 + 7);
  local_68 = *(ushort *)(param_1 + 8);
  local_64 = param_1[9];
  local_60 = param_1[10];
  local_5c = param_1[0xb];
  local_58 = param_1[0xc];
  local_54 = param_1[0xd];
  local_50 = param_1[0xe];
  local_4c = param_1[0xf];
  local_48 = param_1[0x10];
  local_44 = param_1[0x11];
  local_40 = param_1[0x12];
  local_3c = param_1[0x13];
  local_38 = param_1[0x14];
  local_34 = param_1[0x15];
  local_30 = param_1[0x16];
  local_2c = param_1[0x17];
  local_28 = param_1[0x18];
  local_24 = param_1[0x19];
  local_20 = param_1[0x1a];
  local_1c = param_1[0x1b];
  local_18 = param_1[0x1c];
  local_14 = param_1[0x1d];
  puVar2 = param_2;
  for (iVar1 = 0x1e; iVar1 != 0; iVar1 = iVar1 + -1) {
    *param_1 = *puVar2;
    puVar2 = puVar2 + (uint)bVar3 * -2 + 1;
    param_1 = param_1 + (uint)bVar3 * -2 + 1;
  }
  puVar2 = &uStack_88;
  for (iVar1 = 0x1e; iVar1 != 0; iVar1 = iVar1 + -1) {
    *param_2 = *puVar2;
    puVar2 = puVar2 + (uint)bVar3 * -2 + 1;
    param_2 = param_2 + (uint)bVar3 * -2 + 1;
  }
  return;
}
