// Name: core_firestff.cpp_CFirestaff_fire_FUN_004a4d00
// Address: 004a4d00
// Address Range: [[004a4d00, 004a4db6]]
// Convention: __cdecl
// Signature: int __cdecl core_firestff_cpp_CFirestaff_fire_FUN_004a4d00(CFirestaff *this_ptr)

#include "nocturne.h"

int __cdecl core_firestff_cpp_CFirestaff_fire_FUN_004a4d00(CFirestaff *this_ptr)

{
  CSound *this_ptr_00;
  int iVar1;
  CVector3f CStack_18;
  
  CStack_18.x = (this_ptr->base).base.location.position.x;
  CStack_18.z = (this_ptr->base).base.location.position.z;
  CStack_18.y = (this_ptr->base).base.location.position.y + -4.0f;
  iVar1 = core_weapon_cpp_CWeapon_fire_FUN_0057b880(&this_ptr->base);
  if (iVar1 != 0) {
    core_fire_cpp_CFireEffect_createRing_FUN_004a3f70
              (g_CFireEffect_PTR_005fc5a0,&CStack_18,0,
               (CCharacter *)(this_ptr->base).carried_by_actor);
    this_ptr_00 = g_CSound_PTR_006045f8;
    (this_ptr->base).fire_cooldown_timer = 1.0;
    core_sound_cpp_CSound_playActorSound_FUN_005609d0
              (this_ptr_00,(CDemonActor *)this_ptr,"wp_firestaff.wav",&CStack_18);
    return 1;
  }
  core_sound_cpp_CSound_playActorSound_FUN_005609d0
            (g_CSound_PTR_006045f8,(CDemonActor *)this_ptr,"wp_nomana.wav",&CStack_18);
  (this_ptr->base).fire_cooldown_timer = 1.0;
  return 0;
}
