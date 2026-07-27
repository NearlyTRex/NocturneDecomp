// Name: core_werewolf.cpp_CWerewolf_renderEyeGlow_FUN_005570b0
// Address: 005570b0
// Address Range: [[005570b0, 0055769d]]
// Convention: __cdecl
// Signature: void __cdecl core_werewolf_cpp_CWerewolf_renderEyeGlow_FUN_005570b0(int param_1,float *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_werewolf_cpp_CWerewolf_renderEyeGlow_FUN_005570b0(int param_1,float *param_2)

{
  float *pfVar1;
  int *piVar2;
  byte auStack_11c [4];
  uint local_118;
  uint local_114;
  uint local_110;
  uint local_10c;
  uint local_108;
  uint local_104;
  uint local_100;
  uint local_fc;
  uint local_f8;
  float local_f4;
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e4;
  float local_e0;
  float local_dc;
  float local_d8;
  uint local_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  int local_c4;
  int local_c0;
  int local_bc;
  float local_b8;
  float local_b4;
  uint local_b0;
  float local_ac;
  float local_a8;
  uint local_a4;
  float local_a0;
  float local_9c;
  uint local_98;
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  float local_80;
  int local_7c;
  int local_78;
  int local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  int local_4c;
  int local_48;
  int local_44;
  float local_40;
  float local_3c;
  float local_38;
  int local_34;
  int local_30;
  int local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  local_28 = 0.2f;
  local_24 = 0.2f;
  local_ac = 0.2f;
  local_a4 = 0;
  local_a8 = 0.2f;
  local_e8 = *param_2 + 0.2f;
  local_e4 = param_2[1] + 0.2f;
  local_e0 = param_2[2];
  pfVar1 = (float *)(param_1 + 0x2614);
  local_d0 = local_e8 * *pfVar1;
  local_cc = local_e4 * *pfVar1;
  local_c8 = local_e0 * *pfVar1;
  if (&local_58 != &local_d0) {
    local_58 = local_d0;
    local_54 = local_cc;
    local_50 = local_c8;
  }
  local_4c = (int)ROUND(local_58 * _DAT_005a42d0);
  local_48 = (int)ROUND(local_54 * _DAT_005a42d0);
  local_44 = (int)ROUND(local_50 * _DAT_005a42d0);
  engine_special_cpp_transformAndProjectPoint_FUN_0053075c(*DAT_005ae704,&local_4c);
  local_a0 = -0.2f;
  local_20 = 0.2f;
  local_98 = 0;
  local_9c = 0.2f;
  local_64 = *param_2 + local_a0;
  local_60 = param_2[1] + 0.2f;
  local_5c = param_2[2];
  pfVar1 = (float *)(param_1 + 0x2614);
  local_70 = local_64 * *pfVar1;
  local_6c = local_60 * *pfVar1;
  local_68 = local_5c * *pfVar1;
  if (&local_58 != &local_70) {
    local_58 = local_70;
    local_54 = local_6c;
    local_50 = local_68;
  }
  local_7c = (int)ROUND(local_58 * _DAT_005a42d0);
  local_78 = (int)ROUND(local_54 * _DAT_005a42d0);
  local_74 = (int)ROUND(local_50 * _DAT_005a42d0);
  local_1c = local_a0;
  engine_special_cpp_transformAndProjectPoint_FUN_0053075c(*DAT_005ae704 + 0x30,&local_7c);
  local_b4 = -0.2f;
  local_b8 = -0.2f;
  local_b0 = 0;
  local_40 = *param_2 + local_b8;
  local_3c = param_2[1] + local_b4;
  local_38 = param_2[2];
  pfVar1 = (float *)(param_1 + 0x2614);
  local_94 = local_40 * *pfVar1;
  local_90 = local_3c * *pfVar1;
  local_8c = local_38 * *pfVar1;
  if (&local_58 != &local_94) {
    local_58 = local_94;
    local_54 = local_90;
    local_50 = local_8c;
  }
  local_34 = (int)ROUND(local_58 * _DAT_005a42d0);
  local_30 = (int)ROUND(local_54 * _DAT_005a42d0);
  local_2c = (int)ROUND(local_50 * _DAT_005a42d0);
  local_1c = local_b8;
  local_18 = local_b4;
  engine_special_cpp_transformAndProjectPoint_FUN_0053075c(*DAT_005ae704 + 0x60,&local_34);
  local_d8 = -0.2f;
  local_14 = 0.2f;
  local_dc = 0.2f;
  local_d4 = 0;
  local_f4 = *param_2 + 0.2f;
  local_f0 = param_2[1] + local_d8;
  local_ec = param_2[2];
  pfVar1 = (float *)(param_1 + 0x2614);
  local_88 = local_f4 * *pfVar1;
  local_84 = local_f0 * *pfVar1;
  local_80 = local_ec * *pfVar1;
  if (&local_58 != &local_88) {
    local_58 = local_88;
    local_54 = local_84;
    local_50 = local_80;
  }
  local_c4 = (int)ROUND(local_58 * _DAT_005a42d0);
  local_c0 = (int)ROUND(local_54 * _DAT_005a42d0);
  local_bc = (int)ROUND(local_50 * _DAT_005a42d0);
  local_18 = local_d8;
  engine_special_cpp_transformAndProjectPoint_FUN_0053075c(*DAT_005ae704 + 0x90,&local_c4);
  piVar2 = DAT_005ae704;
  *(uint *)(*DAT_005ae704 + 0x20) = 0xffff;
  *(uint *)(*piVar2 + 0x24) = 0;
  *(uint *)(*piVar2 + 0x28) = 0;
  *(uint *)(*piVar2 + 0x50) = 0xffff;
  *(uint *)(*piVar2 + 0x54) = 0;
  *(uint *)(*piVar2 + 0x58) = 0;
  *(uint *)(*piVar2 + 0x80) = 0xffff;
  *(uint *)(*piVar2 + 0x84) = 0;
  *(uint *)(*piVar2 + 0x88) = 0;
  *(uint *)(*piVar2 + 0xb0) = 0xffff;
  *(uint *)(*piVar2 + 0xb4) = 0;
  *(uint *)(*piVar2 + 0xb8) = 0;
  *(uint *)(*piVar2 + 0x2c) = 0x4000;
  *(uint *)(*piVar2 + 0x5c) = 0x4000;
  *(uint *)(*piVar2 + 0x8c) = 0x4000;
  *(uint *)(*piVar2 + 0xbc) = 0x4000;
  *(uint *)(*piVar2 + 0x18) = 0x80000;
  *(uint *)(*piVar2 + 0x1c) = 0xf80000;
  *(uint *)(*piVar2 + 0x48) = 0xf80000;
  *(uint *)(*piVar2 + 0x4c) = 0xf80000;
  *(uint *)(*piVar2 + 0x78) = 0xf80000;
  *(uint *)(*piVar2 + 0x7c) = 0x80000;
  *(uint *)(*piVar2 + 0xa8) = 0x80000;
  *(uint *)(*piVar2 + 0xac) = 0x80000;
  local_118 = 4;
  local_108 = 0;
  local_10c = 0;
  local_110 = 0;
  local_114 = 0;
  local_104 = 0;
  local_f8 = 3;
  local_100 = 1;
  local_fc = 2;
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_00461eb0(piVar2,&DAT_005c1618);
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_00461000(DAT_005ae704,1);
  engine_drender_cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_00460080(DAT_005ae704,auStack_11c);
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_00461000(DAT_005ae704,0);
  return;
}
