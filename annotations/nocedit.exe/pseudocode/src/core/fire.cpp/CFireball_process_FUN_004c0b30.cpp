// Name: core_fire.cpp_CFireball_process_FUN_004c0b30
// Address: 004c0b30
// Address Range: [[004c0b30, 004c0d7e]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CFireball_process_FUN_004c0b30(CFireball *this_ptr)

#include "nocturne.h"

void __cdecl core_fire_cpp_CFireball_process_FUN_004c0b30(CFireball *this_ptr)

{
  int iVar1;
  longlong lVar2;
  CFireEffect *this_ptr_00;
  CDemonSet *this_ptr_01;
  int iVar3;
  int iVar4;
  SDamageInfo SStack_54;
  float local_18;
  uint local_14;
  
  if (this_ptr->first_update_flag == 0) {
    this_ptr->first_update_flag = 1;
    this_ptr->spawn_timer = 0;
  }
  else {
    lVar2 = (longlong)this_ptr->fade_rate * (longlong)g_GlobalDeltaTimeInt;
    iVar3 = this_ptr->timer - ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10);
    this_ptr->timer = iVar3;
    if (iVar3 < 0) {
      (this_ptr->base).lifetime_remaining = 0.0;
      this_ptr->timer = 0;
    }
  }
  core_particle_cpp_CParticle_process_FUN_00545760(&this_ptr->base);
  iVar3 = g_GlobalDeltaTimeInt / 2;
  this_ptr->rotation_angle1 =
       this_ptr->rotation_angle1 +
       ((int)((g_GlobalDeltaTimeInt + (g_GlobalDeltaTimeInt >> 0x1f) * -4) -
             (uint)((g_GlobalDeltaTimeInt >> 0x1f) << 1 < 0)) >> 2);
  this_ptr->rotation_angle2 = this_ptr->rotation_angle2 + iVar3;
  if (this_ptr->lighting_active == 0) {
    core_dglobe_cpp_CDemonGlobe_setColor_FUN_00471310(&this_ptr->light_globe,(CColor3f *)this_ptr);
    iVar3 = this_ptr->timer;
    (this_ptr->light_globe).intensity_multiplier = iVar3;
    iVar3 = (iVar3 + (iVar3 >> 0x1f) * -0x100) - (uint)((iVar3 >> 0x1f) << 7 < 0);
    iVar4 = iVar3 >> 0x1f;
    (this_ptr->light_globe).intensity.bytes[0] =
         (uchar)((int)(((iVar3 >> 8) + iVar4 * -4) - (uint)(iVar4 << 1 < 0)) >> 2);
    core_dglobe_cpp_CDemonGlobe_precomputeAttenuation_FUN_00471360(&this_ptr->light_globe,8.0);
    this_ptr_01 = g_CDemonSetPtr;
    (this_ptr->light_globe).corona_mode = 0;
    core_set_cpp_CDemonSet_FUN_0056d110(this_ptr_01);
    iVar3 = this_ptr->spawn_timer + g_GlobalDeltaTimeInt;
    this_ptr->spawn_timer = iVar3;
    this_ptr_00 = g_CFireEffectPtr;
    if (0x1000 < iVar3) {
      this_ptr->spawn_timer = iVar3 + -0x1000;
      core_fire_cpp_CFireEffect_createSmokeParticle_FUN_004c7b20
                (this_ptr_00,(CVector3f *)this_ptr,2.0,(CVector3f *)0x0,0xffff);
      core_fire_cpp_CFireEffect_FUN_004c79d0(g_CFireEffectPtr);
      core_fire_cpp_CFireEffect_FUN_004c79d0(g_CFireEffectPtr);
      core_fire_cpp_CFireEffect_FUN_004c79d0(g_CFireEffectPtr);
      core_fire_cpp_CFireEffect_FUN_004c79d0(g_CFireEffectPtr);
    }
  }
  if (this_ptr->lighting_active == 0) {
    local_18 = 20.0;
    local_14 = 0x40800000;
  }
  else if (this_ptr->lighting_active == 2) {
    local_18 = 5.0;
    local_14 = 0x3f800000;
  }
  else {
    local_18 = 5.0;
    local_14 = 0x3f800000;
  }
  iVar4 = 0;
  iVar3 = 0;
  while( true ) {
    if (g_CDemonSetPtr->character_count <= iVar3) break;
    iVar1 = *(int *)((int)g_CDemonSetPtr->characters + iVar4);
    core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0(&SStack_54);
    SStack_54.damage_amount = local_18;
    iVar4 = iVar4 + 4;
    iVar3 = iVar3 + 1;
    (**(code **)(*(int *)(iVar1 + 0x154) + 0x114))(iVar1,this_ptr,local_14,&SStack_54);
  }
  return;
}
