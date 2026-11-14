// Name: core_fire.cpp_CFireball_process_FUN_00495960
// Address: 00495960
// Address Range: [[00495960, 00495bae]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CFireball_process_FUN_00495960(CFireball *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_fire_cpp_CFireball_process_FUN_00495960(CFireball *this_ptr)

{
  CDemonGlobe *this_ptr_00;
  int iVar1;
  longlong lVar2;
  CFireEffect *this_ptr_01;
  CDemonSet *this_ptr_02;
  int iVar3;
  int iVar4;
  SDamageInfo SStack_54;
  float fStack_18;
  uint uStack_14;
  
  if (this_ptr->first_update_flag == 0) {
    this_ptr->first_update_flag = 1;
    this_ptr->spawn_timer = 0;
  }
  else {
    lVar2 = (longlong)this_ptr->fade_rate * (longlong)_DAT_01c2a370;
    iVar3 = this_ptr->timer - ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10);
    this_ptr->timer = iVar3;
    if (iVar3 < 0) {
      (this_ptr->base).lifetime_remaining = 0.0;
      this_ptr->timer = 0;
    }
  }
  core_particle_cpp_FUN_00510ef0(this_ptr);
  iVar3 = _DAT_01c2a370 / 2;
  this_ptr->rotation_angle1 =
       this_ptr->rotation_angle1 +
       ((int)((_DAT_01c2a370 + (_DAT_01c2a370 >> 0x1f) * -4) -
             (uint)((_DAT_01c2a370 >> 0x1f) << 1 < 0)) >> 2);
  this_ptr->rotation_angle2 = this_ptr->rotation_angle2 + iVar3;
  if (this_ptr->lighting_active == 0) {
    this_ptr_00 = &this_ptr->light_globe;
    core_dglobe_cpp_CDemonGlobe_setPosition_FUN_00448810(this_ptr_00,(CVector3f *)this_ptr);
    iVar3 = this_ptr->timer;
    (this_ptr->light_globe).intensity_multiplier = iVar3;
    iVar3 = (iVar3 + (iVar3 >> 0x1f) * -0x100) - (uint)((iVar3 >> 0x1f) << 7 < 0);
    iVar4 = iVar3 >> 0x1f;
    (this_ptr->light_globe).intensity.bytes[0] =
         (uchar)((int)(((iVar3 >> 8) + iVar4 * -4) - (uint)(iVar4 << 1 < 0)) >> 2);
    core_dglobe_cpp_CDemonGlobe_precomputeAttenuation_FUN_00448860(this_ptr_00,8.0);
    this_ptr_02 = g_CDemonSetPtr;
    (this_ptr->light_globe).corona_mode = 0;
    core_set_cpp_CDemonSet_addCoronaGlobe_FUN_005306b0(this_ptr_02,this_ptr_00);
    iVar3 = this_ptr->spawn_timer + _DAT_01c2a370;
    this_ptr->spawn_timer = iVar3;
    this_ptr_01 = 0x01C3DEB4;
    if (0x1000 < iVar3) {
      this_ptr->spawn_timer = iVar3 + -0x1000;
      core_fire_cpp_CFireEffect_createSmokeParticle_FUN_0049d230
                (this_ptr_01,(CVector3f *)this_ptr,2.0,(CVector3f *)0x0,0xffff);
      core_fire_cpp_CFireEffect_createSpark_FUN_0049d090
                (0x01C3DEB4,(CVector3f *)this_ptr,(CVector3f *)0x0,0x20000,0x10000,0,0xffff);
      core_fire_cpp_CFireEffect_createSpark_FUN_0049d090
                (0x01C3DEB4,(CVector3f *)this_ptr,(CVector3f *)0x0,0x20000,0x10000,0,0xffff);
      core_fire_cpp_CFireEffect_createSpark_FUN_0049d090
                (0x01C3DEB4,(CVector3f *)this_ptr,(CVector3f *)0x0,0x20000,0x10000,0,0xffff);
      core_fire_cpp_CFireEffect_createSpark_FUN_0049d090
                (0x01C3DEB4,(CVector3f *)this_ptr,(CVector3f *)0x0,0x20000,0x10000,0,0xffff);
    }
  }
  if (this_ptr->lighting_active == 0) {
    fStack_18 = 20.0;
    uStack_14 = 0x40800000;
  }
  else if (this_ptr->lighting_active == 2) {
    fStack_18 = 5.0;
    uStack_14 = 0x3f800000;
  }
  else {
    fStack_18 = 5.0;
    uStack_14 = 0x3f800000;
  }
  iVar4 = 0;
  iVar3 = 0;
  while( true ) {
    if (g_CDemonSetPtr->character_count <= iVar3) break;
    iVar1 = *(int *)((int)g_CDemonSetPtr->characters + iVar4);
    core_charactr_cpp_SDamageInfo_ctor_FUN_004222d0(&SStack_54);
    SStack_54.damage_amount = fStack_18;
    iVar4 = iVar4 + 4;
    iVar3 = iVar3 + 1;
    (**(code **)(*(int *)(iVar1 + 0x2b0) + 0x108))(iVar1,this_ptr,uStack_14,&SStack_54);
  }
  return;
}
