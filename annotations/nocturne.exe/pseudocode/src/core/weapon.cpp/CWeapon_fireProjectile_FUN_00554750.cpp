// Name: core_weapon.cpp_CWeapon_fireProjectile_FUN_00554750
// Address: 00554750
// Address Range: [[00554750, 0055477f] [00554781, 00554903]]
// Convention: unknown
// Signature: void core_weapon_cpp_CWeapon_fireProjectile_FUN_00554750(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_weapon_cpp_CWeapon_fireProjectile_FUN_00554750(int param_1)

{
  int iVar1;
  uint uVar2;
  uint local_e8;
  uint local_e4;
  uint local_e0;
  uint local_dc;
  uint local_d8;
  uint local_d4;
  uint local_d0;
  uint local_cc;
  uint local_c8;
  uint local_c4;
  uint local_c0;
  uint local_bc;
  uint local_b8;
  uint local_b4;
  uint local_b0;
  uint local_ac;
  uint local_a8;
  uint local_a4;
  uint local_a0;
  uint local_9c;
  uint local_98;
  uint local_94;
  uint local_90;
  uint local_8c;
  uint local_88;
  uint local_84;
  uint local_80;
  uint local_7c;
  uint local_78;
  uint local_74;
  uint local_70;
  uint local_6c;
  uint local_68;
  uint local_64;
  uint local_60;
  uint local_5c;
  uint local_58;
  uint local_54;
  uint local_50;
  uint local_4c;
  uint local_48;
  uint local_44;
  byte local_40 [12];
  byte local_34 [12];
  byte local_28 [12];
  uint local_1c;
  uint local_18;
  uint local_14;
  
  iVar1 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_00461090(DAT_005ae704);
  if (iVar1 != 0) {
    return;
  }
  uVar2 = (**(code **)(*(int *)(param_1 + 0x14c) + 0xd8))(param_1,local_40);
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240(param_1,local_28,uVar2);
  local_14 = *(uint *)(param_1 + 0x2e0);
  local_1c = 0;
  local_18 = 0;
  core_actor_cpp_CDemonActor_transformVector_FUN_0040a200(param_1,local_34,&local_1c);
  core_setcolid_cpp_CDemonSet_init_FUN_00511750(0x01E57284);
  core_setcolid_cpp_CDemonSet_ignore_FUN_00511780(0x01E57284,param_1);
  if (*(int *)(param_1 + 0x2fc) != 0) {
    core_setcolid_cpp_CDemonSet_ignore_FUN_00511780(0x01E57284,*(int *)(param_1 + 0x2fc));
  }
  core_fire_cpp_SLaserInfo_ctor_FUN_0048b6b0(&local_94);
  local_8c = 1;
  local_88 = *(uint *)(param_1 + 0x2ec);
  local_84 = *(uint *)(param_1 + 0x2f0);
  local_80 = *(uint *)(param_1 + 0x2f4);
  local_94 = 0x3f800000;
  iVar1 = core_actor_cpp_castToClassHash_FUN_0040d890
                    (*(uint *)(param_1 + 0x2fc),_DAT_01cae124);
  local_d0 = (uint)(iVar1 != 0);
  local_e8 = local_94;
  local_e4 = local_90;
  local_e0 = local_8c;
  local_dc = local_88;
  local_d8 = local_84;
  local_d4 = local_80;
  local_c8 = local_74;
  local_c4 = local_70;
  local_c0 = local_6c;
  local_bc = local_68;
  local_b8 = local_64;
  local_b4 = local_60;
  local_b0 = local_5c;
  local_ac = local_58;
  local_a8 = local_54;
  local_a4 = local_50;
  local_a0 = local_4c;
  local_9c = local_48;
  local_98 = local_44;
  local_78 = 1;
  local_cc = 1;
  local_7c = local_d0;
  FUN_0048b6f0(0x01C08D04,local_28,local_34,&local_e8,0);
  core_setcolid_cpp_CDemonSet_init_FUN_00511750(0x01E57284);
  return;
}
