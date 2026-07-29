// Name: core_weapon.cpp_CWeapon_process_FUN_00554030
// Address: 00554030
// Address Range: [[00554030, 0055416a]]
// Convention: __cdecl
// Signature: void __cdecl core_weapon_cpp_CWeapon_process_FUN_00554030(CWeapon *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_weapon_cpp_CWeapon_process_FUN_00554030(CWeapon *this_ptr,float delta_time)

{
  UOrientationVector *pUVar1;
  CVector3f *pCVar2;
  float fVar3;
  
  if ((0.0 < this_ptr->fire_cooldown_timer) &&
     (fVar3 = this_ptr->fire_cooldown_timer - delta_time, this_ptr->fire_cooldown_timer = fVar3,
     fVar3 < 0.0)) {
    this_ptr->fire_cooldown_timer = 0.0;
  }
  if (((this_ptr->carried_by_actor == (CDemonActor *)0x0) && (this_ptr->weapon_state == 0)) &&
     (0.0 < this_ptr->sim_timer)) {
    fVar3 = this_ptr->sim_timer - delta_time;
    this_ptr->sim_timer = fVar3;
    if (fVar3 < 0.0) {
      this_ptr->sim_timer = 0.0;
    }
    core_box_cpp_CBox_process_FUN_0041acb0(&this_ptr->physics_box,delta_time);
    (this_ptr->base).location.position.x = (this_ptr->physics_box).position.x;
    (this_ptr->base).location.position.y = (this_ptr->physics_box).position.y;
    (this_ptr->base).location.position.z = (this_ptr->physics_box).position.z;
    pUVar1 = &(this_ptr->base).orient;
    pCVar2 = &(this_ptr->physics_box).orientation;
    if ((CVector3f *)pUVar1 != pCVar2) {
      (pUVar1->vec).x = pCVar2->x;
      (this_ptr->base).orient.vec.y = (this_ptr->physics_box).orientation.y;
      (this_ptr->base).orient.vec.z = (this_ptr->physics_box).orientation.z;
    }
  }
  core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_0040a000(&this_ptr->base);
  if (((this_ptr->carried_by_actor == *(CDemonActor **)(_DAT_01cae0e8 * 4 + 0x1cae0d8)) &&
      (*(int *)(0x01C775EC + 0x244) != 0)) && (this_ptr->can_attach_light != 0)) {
    (*(((this_ptr->base).vtable._uc)->_uc).getGrabber)((CCharacter *)this_ptr);
    if (0.0 < _DAT_01c775e8) {
      core_set_cpp_CDemonSet_addDynamicLight_FUN_0050a970(0x01E57284,(CDemonLight *)&DAT_01c74640)
      ;
      return;
    }
  }
  return;
}
