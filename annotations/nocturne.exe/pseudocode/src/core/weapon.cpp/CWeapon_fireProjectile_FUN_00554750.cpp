// Name: core_weapon.cpp_CWeapon_fireProjectile_FUN_00554750
// Address: 00554750
// Address Range: [[00554750, 0055477f] [00554781, 00554903]]
// Convention: unknown
// Signature: void core_weapon_cpp_CWeapon_fireProjectile_FUN_00554750(CDemonActor *param_1)

#include "nocturne.h"

void core_weapon_cpp_CWeapon_fireProjectile_FUN_00554750(CDemonActor *param_1)

{
  int iVar1;
  CVector3f *input_local_point;
  CDemonActor *pCVar2;
  uint local_e8;
  uint local_e4;
  uint local_e0;
  float local_dc;
  float local_d8;
  float local_d4;
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
  float local_88;
  float local_84;
  float local_80;
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
  byte local_34 [12];
  CVector3f local_28;
  uint local_1c;
  uint local_18;
  float local_14;
  
  iVar1 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_00461090(DAT_005ae704);
  if (iVar1 != 0) {
    return;
  }
  input_local_point = (CVector3f *)(*((param_1->vtable)._ub)->initializeInEditor)(param_1);
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240(param_1,&local_28,input_local_point);
  local_14 = param_1[2].orient_matrix.m[0].y;
  local_1c = 0;
  local_18 = 0;
  core_actor_cpp_CDemonActor_transformVector_FUN_0040a200(param_1,local_34,&local_1c);
  core_setcolid_cpp_CDemonSet_init_FUN_00511750(0x01E57284);
  core_setcolid_cpp_CDemonSet_ignore_FUN_00511780(0x01E57284,param_1);
  pCVar2 = (CDemonActor *)param_1[2].orient_matrix.m[2].z;
  if (pCVar2 != (CDemonActor *)0x0) {
    core_setcolid_cpp_CDemonSet_ignore_FUN_00511780(0x01E57284,pCVar2);
  }
  core_fire_cpp_SLaserInfo_ctor_FUN_0048b6b0(&local_94);
  local_8c = 1;
  local_88 = param_1[2].orient_matrix.m[1].y;
  local_84 = param_1[2].orient_matrix.m[1].z;
  local_80 = param_1[2].orient_matrix.m[2].x;
  local_94 = 0x3f800000;
  pCVar2 = core_actor_cpp_castToClassHash_FUN_0040d890
                     ((CDemonActor *)param_1[2].orient_matrix.m[2].z,
                      g_CHeroActorType_01cae0ec.name_hash);
  local_d0 = (uint)(pCVar2 != (CDemonActor *)0x0);
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
  core_fire_cpp_FUN_0048b6f0(0x01C08D04,&local_28,local_34,&local_e8,0);
  core_setcolid_cpp_CDemonSet_init_FUN_00511750(0x01E57284);
  return;
}
