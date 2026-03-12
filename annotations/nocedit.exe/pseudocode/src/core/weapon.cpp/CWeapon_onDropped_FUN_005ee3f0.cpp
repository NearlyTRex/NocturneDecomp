// Name: core_weapon.cpp_CWeapon_onDropped_FUN_005ee3f0
// Address: 005ee3f0
// Address Range: [[005ee3f0, 005ee480]]
// Convention: __cdecl
// Signature: void __cdecl core_weapon_cpp_CWeapon_onDropped_FUN_005ee3f0(CWeapon *this_ptr,CVector3f *drop_position)

#include "nocturne.h"

void __cdecl core_weapon_cpp_CWeapon_onDropped_FUN_005ee3f0(CWeapon *this_ptr,CVector3f *drop_position)

{
  CVector3f *pCVar3;
  CVector3f *pCVar2;
  CVector3f local_14;
  CVector3f *pCVar1;
  
  this_ptr->carried_by_actor = (CDemonActor *)0x0;
  core_weapon_cpp_CWeapon_setupPhysicsBox_FUN_005ee740(this_ptr);
  if (drop_position != (CVector3f *)0x0) {
    pCVar2 = core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030
                       (&(this_ptr->physics_box).rotation_matrix,&local_14,drop_position);
    pCVar1 = &(this_ptr->physics_box).linear_velocity_local;
    if (pCVar1 != pCVar2) {
      pCVar1->x = pCVar2->x;
      (this_ptr->physics_box).linear_velocity_local.y = pCVar2->y;
      (this_ptr->physics_box).linear_velocity_local.z = pCVar2->z;
    }
    pCVar3 = &(this_ptr->physics_box).linear_velocity;
    if (pCVar3 != drop_position) {
      pCVar3->x = drop_position->x;
      (this_ptr->physics_box).linear_velocity.y = drop_position->y;
      (this_ptr->physics_box).linear_velocity.z = drop_position->z;
    }
  }
  (*(((this_ptr->base).vtable._uw)->_uw).setWeaponState)(this_ptr,0);
  this_ptr->sim_timer = 5.0;
  return;
}
