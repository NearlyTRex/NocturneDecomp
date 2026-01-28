// Name: core_weapon.cpp_CWeapon_FUN_005ee9f0
// Address: 005ee9f0
// Address Range: [[005ee9f0, 005eea5c]]
// Convention: __cdecl
// Signature: void __cdecl core_weapon_cpp_CWeapon_FUN_005ee9f0(CWeapon *this_ptr)

#include "nocturne.h"

void __cdecl core_weapon_cpp_CWeapon_FUN_005ee9f0(CWeapon *this_ptr)

{
  CActorPropertyList *in_stack_00000008;
  
  core_actor_cpp_CDemonActor_getPropertyList_FUN_0040d290(&this_ptr->base,in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e3b0(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e640(in_stack_00000008);
  if (this_ptr->weapon_state != 0) {
    return;
  }
  core_actor_cpp_CActorPropertyList_FUN_0040e160(in_stack_00000008);
  return;
}
