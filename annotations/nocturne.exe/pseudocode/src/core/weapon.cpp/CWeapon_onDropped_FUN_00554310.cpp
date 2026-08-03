// Name: core_weapon.cpp_CWeapon_onDropped_FUN_00554310
// Address: 00554310
// Address Range: [[00554310, 005543a0]]
// Convention: __cdecl
// Signature: void __cdecl core_weapon_cpp_CWeapon_onDropped_FUN_00554310(CWeapon *this_ptr,CVector3f *drop_position)

#include "nocturne.h"

void __cdecl core_weapon_cpp_CWeapon_onDropped_FUN_00554310(CWeapon *this_ptr,CVector3f *drop_position)

{
  CVector3f *pCVar1;
  CVector3f *pCVar2;
  CVector3f *in_stack_ffffffec;
  float in_stack_fffffff0;
  
  this_ptr->carried_by_actor = (CDemonActor *)0x0;
  core_weapon_cpp_CWeapon_setupPhysicsBox_FUN_00554660(this_ptr);
  if (drop_position != (CVector3f *)0x0) {
    pCVar2 = core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_0044daa0
                       (&(this_ptr->physics_box).rotation_matrix,(CVector3f *)&stack0xffffffec,
                        drop_position);
    pCVar1 = &(this_ptr->physics_box).linear_velocity_local;
    if (pCVar1 != pCVar2) {
      pCVar1->x = pCVar2->x;
      (this_ptr->physics_box).linear_velocity_local.y = pCVar2->y;
      (this_ptr->physics_box).linear_velocity_local.z = pCVar2->z;
    }
    pCVar1 = &(this_ptr->physics_box).linear_velocity;
    if (pCVar1 != drop_position) {
      pCVar1->x = drop_position->x;
      (this_ptr->physics_box).linear_velocity.y = drop_position->y;
      (this_ptr->physics_box).linear_velocity.z = drop_position->z;
    }
  }
  (*(((this_ptr->base).vtable._uc)->_uc).kill)
            ((CCharacter *)this_ptr,0,in_stack_ffffffec,in_stack_fffffff0);
  this_ptr->sim_timer = 5.0;
  return;
}
