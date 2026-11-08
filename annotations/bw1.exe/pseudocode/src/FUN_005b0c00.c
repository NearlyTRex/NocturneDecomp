// Name: FUN_005b0c00
// Address: 005b0c00
// Address Range: [[005b0c00, 005b11bf]]
// Convention: unknown
// Signature: void FUN_005b0c00(int param_1,float *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005b0c00(int param_1,float *param_2)

{
  int *piVar1;
  byte bVar2;
  float afStackY_1104 [1006];
  byte auStack_144 [4];
  uint local_140;
  uint local_13c;
  uint local_138;
  uint local_134;
  uint local_130;
  uint local_12c;
  uint local_128;
  uint local_124;
  uint local_120;
  float local_11c;
  float local_118 [2];
  int local_110;
  int local_10c;
  int local_108;
  float local_104;
  float local_100 [4];
  float local_f0;
  int local_ec;
  int local_e8;
  int local_e4;
  float local_e0;
  float local_dc [4];
  float local_cc;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  float local_b8 [4];
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  int local_98;
  int local_94;
  int local_90;
  float local_8c;
  float local_88 [4];
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40 [4];
  float local_30;
  int local_2c;
  int local_28;
  int local_24;
  float local_1c;
  float local_18;
  float local_14;
  
  bVar2 = 0;
  local_14 = 0x3E4CCCCD;
  local_50 = *param_2 + 0x3E4CCCCD;
  local_1c = 0x3E4CCCCD;
  local_48 = param_2[2];
  local_4c = param_2[1] + 0x3E4CCCCD;
  local_dc[2] = local_50 * *(float *)(param_1 + 0x27b8);
  local_dc[3] = local_4c * *(float *)(param_1 + 0x27b8);
  local_cc = local_48 * *(float *)(param_1 + 0x27b8);
  if (local_100 + 2 != &local_c8) {
    local_100[2] = local_dc[2];
    local_100[3] = local_dc[3];
    local_f0 = local_cc;
  }
  local_110 = (int)ROUND(local_100[2] * _DAT_00607fb0);
  local_10c = (int)ROUND(local_100[3] * _DAT_00607fb0);
  local_108 = (int)ROUND(local_f0 * _DAT_00607fb0);
  local_c8 = local_dc[2];
  local_c4 = local_dc[3];
  local_c0 = local_cc;
  local_40[2] = local_50;
  local_40[3] = local_4c;
  local_30 = local_48;
  FUN_00580173(*DAT_00612560,&local_110);
  local_18 = 0x3E4CCCCD;
  local_11c = -0x3E4CCCCD + *param_2;
  local_118[1] = param_2[2];
  local_118[0] = param_2[1] + 0x3E4CCCCD;
  local_104 = -0x3E4CCCCD + *param_2;
  local_100[(uint)bVar2 * -2] = local_118[(uint)bVar2 * -2];
  local_100[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 1] =
       local_118[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 1];
  local_8c = local_104 * *(float *)(param_1 + 0x27b8);
  local_88[0] = local_100[0] * *(float *)(param_1 + 0x27b8);
  local_88[1] = local_100[1] * *(float *)(param_1 + 0x27b8);
  local_a4 = local_8c;
  local_b8[(uint)bVar2 * -2 + 6] = local_88[(uint)bVar2 * -2];
  local_b8[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 7] =
       local_88[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 1];
  if (local_100 + 2 != local_b8 + 5) {
    local_100[2] = local_a4;
    local_100[3] = local_a0;
    local_f0 = local_9c;
  }
  local_2c = (int)ROUND(local_100[2] * _DAT_00607fb0);
  local_28 = (int)ROUND(local_100[3] * _DAT_00607fb0);
  local_24 = (int)ROUND(local_f0 * _DAT_00607fb0);
  FUN_00580173(*DAT_00612560 + 0x30,&local_2c);
  local_a8 = param_2[2];
  local_b8[2] = -0x3E4CCCCD + *param_2;
  local_b8[3] = param_2[1] + -0x3E4CCCCD;
  local_88[2] = -0x3E4CCCCD + *param_2;
  local_88[(uint)bVar2 * -2 + 3] = local_b8[(uint)bVar2 * -2 + 3];
  local_88[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 4] =
       local_b8[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 4];
  local_68 = local_88[2] * *(float *)(param_1 + 0x27b8);
  local_64 = local_88[3] * *(float *)(param_1 + 0x27b8);
  local_60 = local_78 * *(float *)(param_1 + 0x27b8);
  local_5c = local_68;
  local_88[(uint)bVar2 * -2 + 0xc] = local_88[(uint)bVar2 * -2 + 9];
  local_88[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 0xd] =
       local_88[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 10];
  if (local_100 + 2 != local_88 + 0xb) {
    local_100[2] = local_5c;
    local_100[3] = local_58;
    local_f0 = local_54;
  }
  local_ec = (int)ROUND(local_100[2] * _DAT_00607fb0);
  local_e8 = (int)ROUND(local_100[3] * _DAT_00607fb0);
  local_e4 = (int)ROUND(local_f0 * _DAT_00607fb0);
  FUN_00580173(*DAT_00612560 + 0x60,&local_ec);
  local_dc[1] = param_2[2];
  local_e0 = 0x3E4CCCCD + *param_2;
  local_dc[0] = param_2[1] + -0x3E4CCCCD;
  local_bc = 0x3E4CCCCD + *param_2;
  local_b8[(uint)bVar2 * -2] = local_dc[(uint)bVar2 * -2];
  local_b8[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 1] =
       local_dc[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 1];
  local_74 = local_bc * *(float *)(param_1 + 0x27b8);
  local_70 = local_b8[0] * *(float *)(param_1 + 0x27b8);
  local_6c = local_b8[1] * *(float *)(param_1 + 0x27b8);
  local_44 = local_74;
  local_40[(uint)bVar2 * -2] = local_88[(uint)bVar2 * -2 + 6];
  local_40[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 1] =
       local_88[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 7];
  if (local_100 + 2 != &local_44) {
    local_100[2] = local_44;
    local_100[3] = local_40[0];
    local_f0 = local_40[1];
  }
  local_98 = (int)ROUND(local_100[2] * _DAT_00607fb0);
  local_94 = (int)ROUND(local_100[3] * _DAT_00607fb0);
  local_90 = (int)ROUND(local_f0 * _DAT_00607fb0);
  FUN_00580173(*DAT_00612560 + 0x90,&local_98);
  piVar1 = DAT_00612560;
  *(uint *)(*DAT_00612560 + 0x20) = 0xffff;
  *(uint *)(*piVar1 + 0x24) = 0;
  *(uint *)(*piVar1 + 0x28) = 0;
  *(uint *)(*piVar1 + 0x50) = 0xffff;
  *(uint *)(*piVar1 + 0x54) = 0;
  *(uint *)(*piVar1 + 0x58) = 0;
  *(uint *)(*piVar1 + 0x80) = 0xffff;
  *(uint *)(*piVar1 + 0x84) = 0;
  *(uint *)(*piVar1 + 0x88) = 0;
  *(uint *)(*piVar1 + 0xb0) = 0xffff;
  *(uint *)(*piVar1 + 0xb4) = 0;
  *(uint *)(*piVar1 + 0xb8) = 0;
  *(uint *)(*piVar1 + 0x2c) = 0x4000;
  *(uint *)(*piVar1 + 0x5c) = 0x4000;
  *(uint *)(*piVar1 + 0x8c) = 0x4000;
  *(uint *)(*piVar1 + 0xbc) = 0x4000;
  *(uint *)(*piVar1 + 0x18) = 0x80000;
  *(uint *)(*piVar1 + 0x1c) = 0xf80000;
  *(uint *)(*piVar1 + 0x48) = 0xf80000;
  *(uint *)(*piVar1 + 0x4c) = 0xf80000;
  *(uint *)(*piVar1 + 0x78) = 0xf80000;
  *(uint *)(*piVar1 + 0x7c) = 0x80000;
  *(uint *)(*piVar1 + 0xa8) = 0x80000;
  *(uint *)(*piVar1 + 0xac) = 0x80000;
  local_140 = 4;
  local_130 = 0;
  local_134 = 0;
  local_138 = 0;
  local_13c = 0;
  local_12c = 0;
  local_120 = 3;
  local_128 = 1;
  local_124 = 2;
  FUN_00484f00(piVar1,&DAT_0062609c);
  FUN_00483dd0(DAT_00612560,1);
  FUN_00482e30(DAT_00612560,auStack_144);
  FUN_00483dd0(DAT_00612560,0);
  return;
}
