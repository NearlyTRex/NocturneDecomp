// Name: core_crossbow.cpp_CCrossbow_process_FUN_0043cfd0
// Address: 0043cfd0
// Address Range: [[0043cfd0, 0043d093]]
// Convention: __cdecl
// Signature: void __cdecl core_crossbow_cpp_CCrossbow_process_FUN_0043cfd0(CCrossbow *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_crossbow_cpp_CCrossbow_process_FUN_0043cfd0(CCrossbow *this_ptr,float delta_time)

{
  CVector3f *pCVar1;
  CVector3f aCStack_1c [2];
  
  core_weapon_cpp_CWeapon_process_FUN_00554030(&this_ptr->base,delta_time);
  pCVar1 = (CVector3f *)(*(((this_ptr->base).base.vtable._uc)->_uc).canWalk)((CCharacter *)this_ptr)
  ;
  pCVar1 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                     ((CDemonActor *)this_ptr,aCStack_1c,pCVar1);
  (this_ptr->bolt_flame).base.location.position.x = pCVar1->x;
  (this_ptr->bolt_flame).base.location.position.y = pCVar1->y;
  (this_ptr->bolt_flame).base.location.position.z = pCVar1->z;
  if (((((this_ptr->base).weapon_state != WEAPON_STATE_IN_HAND) || ((this_ptr->base).ammo_count < 1)
       ) || ((this_ptr->base).ammo_type != 5)) || (0.0 < (this_ptr->base).fire_cooldown_timer)) {
    core_flame_cpp_CFlame_FUN_0048df10(&this_ptr->bolt_flame);
    this_ptr->flame_active = 0;
  }
  else {
    this_ptr->flame_active = 1;
  }
  core_flame_cpp_CFlame_process_FUN_0048d0c0(&this_ptr->bolt_flame,delta_time);
  (this_ptr->base).base.is_transparent = this_ptr->flame_active;
  return;
}
