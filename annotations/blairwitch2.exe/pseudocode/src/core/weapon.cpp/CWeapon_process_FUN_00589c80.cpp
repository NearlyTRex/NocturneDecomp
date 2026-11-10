// Name: core_weapon.cpp_CWeapon_process_FUN_00589c80
// Address: 00589c80
// Address Range: [[00589c80, 00589d58]]
// Convention: __cdecl
// Signature: void __cdecl core_weapon_cpp_CWeapon_process_FUN_00589c80(CWeapon *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_weapon_cpp_CWeapon_process_FUN_00589c80(CWeapon *this_ptr,float delta_time)

{
  UOrientationVector *pUVar1;
  CVector3f *pCVar2;
  float fVar3;
  
  if ((0.0 < this_ptr->fire_cooldown_timer) &&
     (fVar3 = this_ptr->fire_cooldown_timer - delta_time, this_ptr->fire_cooldown_timer = fVar3,
     fVar3 < 0.0)) {
    this_ptr->fire_cooldown_timer = 0.0;
  }
  if (((this_ptr->carried_by_actor == (CDemonActor *)0x0) &&
      (this_ptr->weapon_state == WEAPON_STATE_LYING_AROUND)) && (0.0 < this_ptr->sim_timer)) {
    fVar3 = this_ptr->sim_timer - delta_time;
    this_ptr->sim_timer = fVar3;
    if (fVar3 < 0.0) {
      this_ptr->sim_timer = 0.0;
    }
    core_box_cpp_CBox_process_FUN_005b2290(&this_ptr->physics_box,delta_time);
    *(float *)&(this_ptr->base).field_0x20 = (this_ptr->physics_box).position.x;
    *(float *)&(this_ptr->base).field_0x24 = (this_ptr->physics_box).position.y;
    pUVar1 = &(this_ptr->base).orient;
    *(float *)&(this_ptr->base).field_0x28 = (this_ptr->physics_box).position.z;
    pCVar2 = &(this_ptr->physics_box).orientation;
    if ((CVector3f *)pUVar1 != pCVar2) {
      (pUVar1->vec).x = pCVar2->x;
      (this_ptr->base).orient.vec.y = (this_ptr->physics_box).orientation.y;
      (this_ptr->base).orient.vec.z = (this_ptr->physics_box).orientation.z;
    }
  }
  core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408ae0(&this_ptr->base);
  return;
}
