// Name: core_weapon.cpp_CWeapon_fireProjectile_FUN_005ee830
// Address: 005ee830
// Address Range: [[005ee830, 005ee85f] [005ee861, 005ee9e3]]
// Convention: __cdecl
// Signature: void __cdecl core_weapon_cpp_CWeapon_fireProjectile_FUN_005ee830(CWeapon *this_ptr)

#include "nocturne.h"

void __cdecl core_weapon_cpp_CWeapon_fireProjectile_FUN_005ee830(CWeapon *this_ptr)

{
  int iVar1;
  CVector3f *input_local_point;
  CHero *pCVar2;
  SLaserInfo local_e8;
  SLaserInfo local_94;
  CVector3f local_40;
  CVector3f local_34;
  CVector3f local_28;
  CVector3f local_1c;
  
  iVar1 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr2);
  if (iVar1 != 0) {
    return;
  }
  input_local_point = (*(((this_ptr->base).vtable._uw)->_uw).getMuzzlePoint)(this_ptr,&local_40);
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
            (&this_ptr->base,&local_28,input_local_point);
  local_1c.z = this_ptr->bolt_velocity;
  local_1c.x = 0.0;
  local_1c.y = 0.0;
  core_actor_cpp_CDemonActor_transformVector_FUN_00408e80(&this_ptr->base,&local_34,&local_1c);
  core_setcolid_cpp_CDemonSet_init_FUN_00574180(g_CDemonSetPtr);
  core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0(g_CDemonSetPtr,&this_ptr->base);
  if (this_ptr->carried_by_actor != (CDemonActor *)0x0) {
    core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0(g_CDemonSetPtr,this_ptr->carried_by_actor);
  }
  core_fire_cpp_SLaserInfo_ctor_FUN_004c81f0(&local_94);
  local_94.laser_type = 1;
  local_94.color.r = (this_ptr->muzzle_flash_color).r;
  local_94.color.g = (this_ptr->muzzle_flash_color).g;
  local_94.color.b = (this_ptr->muzzle_flash_color).b;
  local_94.intensity = 1.0;
  pCVar2 = (CHero *)core_actor_cpp_castToClassHash_FUN_0040c790
                              (this_ptr->carried_by_actor,g_CHeroClassInfo.name_hash);
  local_e8.is_hero_weapon = (int)(pCVar2 != (CHero *)0x0);
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
  core_fire_cpp_CFireEffect_traceLaser_FUN_004c8230
            (g_CFireEffectPtr,&local_28,&local_34,&local_e8,0);
  core_setcolid_cpp_CDemonSet_init_FUN_00574180(g_CDemonSetPtr);
  return;
}
