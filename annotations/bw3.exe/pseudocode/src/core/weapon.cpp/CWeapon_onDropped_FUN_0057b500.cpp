// Name: core_weapon.cpp_CWeapon_onDropped_FUN_0057b500
// Address: 0057b500
// Address Range: [[0057b500, 0057b5a9]]
// Convention: __cdecl
// Signature: void __cdecl core_weapon_cpp_CWeapon_onDropped_FUN_0057b500(CWeapon *this_ptr,CVector3f *drop_position)

#include "nocturne.h"

void __cdecl core_weapon_cpp_CWeapon_onDropped_FUN_0057b500(CWeapon *this_ptr,CVector3f *drop_position)

{
  CVector3f *pCVar1;
  byte bVar2;
  float afStackY_1010 [1016];
  CVector3f *in_stack_ffffffd8;
  float in_stack_ffffffdc;
  float fStack_20;
  CVector3f *pCStack_1c;
  uint auStack_18 [2];
  
  bVar2 = 0;
  this_ptr->carried_by_actor = (CDemonActor *)0x0;
  core_weapon_cpp_FUN_0057ba10(this_ptr);
  if (drop_position != (CVector3f *)0x0) {
    core_dirmat_cpp_FUN_0045b870(&(this_ptr->physics_box).rotation_matrix,drop_position);
    pCVar1 = &(this_ptr->physics_box).linear_velocity_local;
    *(uint *)(&stack0xffffffdc + (uint)bVar2 * -8) = auStack_18[(uint)bVar2 * -2];
    *(uint *)((int)&stack0xffffffe0 + ((uint)bVar2 * -2 + (uint)bVar2 * -2) * 4) =
         auStack_18[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 1];
    if (pCVar1 != (CVector3f *)&stack0xffffffd8) {
      pCVar1->x = (float)pCStack_1c;
      (this_ptr->physics_box).linear_velocity_local.y = in_stack_ffffffdc;
      (this_ptr->physics_box).linear_velocity_local.z = fStack_20;
    }
    pCVar1 = &(this_ptr->physics_box).linear_velocity;
    in_stack_ffffffd8 = pCStack_1c;
    if (pCVar1 != drop_position) {
      pCVar1->x = drop_position->x;
      (this_ptr->physics_box).linear_velocity.y = drop_position->y;
      (this_ptr->physics_box).linear_velocity.z = drop_position->z;
    }
  }
  (*(((this_ptr->base).vtable._uc)->_uc).kill)
            ((CCharacter *)this_ptr,0,in_stack_ffffffd8,in_stack_ffffffdc);
  this_ptr->sim_timer = 5.0;
  return;
}
