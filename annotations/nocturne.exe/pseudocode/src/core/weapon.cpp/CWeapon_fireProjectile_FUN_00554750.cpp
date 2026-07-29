// Name: core_weapon.cpp_CWeapon_fireProjectile_FUN_00554750
// Address: 00554750
// Address Range: [[00554750, 0055477f] [00554781, 00554903]]
// Convention: unknown
// Signature: void core_weapon_cpp_CWeapon_fireProjectile_FUN_00554750(CCharacter *param_1)

#include "nocturne.h"

void core_weapon_cpp_CWeapon_fireProjectile_FUN_00554750(CCharacter *param_1)

{
  int iVar1;
  CVector3f *input_local_point;
  CDemonActor *pCVar2;
  SLaserInfo local_e8;
  SLaserInfo local_94;
  CVector3f local_34;
  CVector3f local_28;
  CVector3f local_1c;
  
  iVar1 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_00461090(DAT_005ae704);
  if (iVar1 != 0) {
    return;
  }
  input_local_point = (CVector3f *)(*(((param_1->base).vtable._uc)->_uc).canWalk)(param_1);
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
            (&param_1->base,&local_28,input_local_point);
  local_1c.z = (param_1->model).transformed_vertices[0x1a].x;
  local_1c.x = 0.0;
  local_1c.y = 0.0;
  core_actor_cpp_CDemonActor_transformVector_FUN_0040a200(&param_1->base,&local_34,&local_1c);
  core_setcolid_cpp_CDemonSet_init_FUN_00511750(0x01E57284);
  core_setcolid_cpp_CDemonSet_ignore_FUN_00511780(0x01E57284,&param_1->base);
  pCVar2 = (CDemonActor *)(param_1->model).transformed_vertices[0x1c].y;
  if (pCVar2 != (CDemonActor *)0x0) {
    core_setcolid_cpp_CDemonSet_ignore_FUN_00511780(0x01E57284,pCVar2);
  }
  core_fire_cpp_SLaserInfo_ctor_FUN_0048b6b0(&local_94);
  local_94.laser_type = 1;
  local_94.color.r = (int)(param_1->model).transformed_vertices[0x1b].x;
  local_94.color.g = (int)(param_1->model).transformed_vertices[0x1b].y;
  local_94.color.b = (int)(param_1->model).transformed_vertices[0x1b].z;
  local_94.intensity = 1.0;
  pCVar2 = core_actor_cpp_castToClassHash_FUN_0040d890
                     ((CDemonActor *)(param_1->model).transformed_vertices[0x1c].y,
                      g_CHeroActorType_01cae0ec.name_hash);
  local_e8.is_hero_weapon = (int)(pCVar2 != (CDemonActor *)0x0);
  local_e8.intensity = local_94.intensity;
  local_e8.beam_width = local_94.beam_width;
  local_e8.laser_type = local_94.laser_type;
  local_e8.color.r = local_94.color.r;
  local_e8.color.g = local_94.color.g;
  local_e8.color.b = local_94.color.b;
  local_e8.local_origin.x = local_94.local_origin.x;
  local_e8.local_origin.y = local_94.local_origin.y;
  local_e8.local_origin.z = local_94.local_origin.z;
  local_e8.local_hit_position.x = local_94.local_hit_position.x;
  local_e8.local_hit_position.y = local_94.local_hit_position.y;
  local_e8.local_hit_position.z = local_94.local_hit_position.z;
  local_e8.local_normal.x = local_94.local_normal.x;
  local_e8.local_normal.y = local_94.local_normal.y;
  local_e8.local_normal.z = local_94.local_normal.z;
  local_e8.incidence_angle = local_94.incidence_angle;
  local_e8.reflectivity = local_94.reflectivity;
  local_e8.stored_angle = local_94.stored_angle;
  local_e8.transparency = local_94.transparency;
  local_94.is_damaging = 1;
  local_e8.is_damaging = 1;
  local_94.is_hero_weapon = local_e8.is_hero_weapon;
  core_fire_cpp_FUN_0048b6f0(0x01C08D04,&local_28,&local_34,&local_e8,0);
  core_setcolid_cpp_CDemonSet_init_FUN_00511750(0x01E57284);
  return;
}
