// Name: core_weapon.cpp_CWeapon_FUN_005ee340
// Address: 005ee340
// Address Range: [[005ee340, 005ee3dd]]
// Convention: __cdecl
// Signature: int core_weapon.cpp_CWeapon_FUN_005ee340(CWeapon * this_ptr)

#include "nocturne.h"

int __cdecl core_weapon_cpp_CWeapon_FUN_005ee340(CWeapon *this_ptr)

{
  int iVar1;
  int iVar2;
  CDemonActor *in_stack_00000008;
  
  iVar2._0_1_ = this_ptr->carried_by_actor;
  iVar2._1_1_ = this_ptr->unk3[0];
  iVar2._2_1_ = this_ptr->unk3[1];
  iVar2._3_1_ = this_ptr->unk3[2];
  if (((((iVar2 == 0) && (this_ptr->weapon_state == 0)) && (*(int *)(this_ptr->unk3 + 599) != 0)) &&
      ((float)0.5 <
       SQRT(*(float *)(this_ptr->unk3 + 0x57) * *(float *)(this_ptr->unk3 + 0x57) +
            *(float *)(this_ptr->unk3 + 0x4f) * *(float *)(this_ptr->unk3 + 0x4f) +
            *(float *)(this_ptr->unk3 + 0x53) * *(float *)(this_ptr->unk3 + 0x53)))) ||
     (iVar1._0_1_ = this_ptr->carried_by_actor, iVar1._1_1_ = this_ptr->unk3[0],
     iVar1._2_1_ = this_ptr->unk3[1], iVar1._3_1_ = this_ptr->unk3[2], iVar1 != 0)) {
    return 0;
  }
  iVar2 = core_actor_cpp_isOfClass_FUN_0040c6d0(in_stack_00000008,"CIcePick");
  if (iVar2 == 0) {
    iVar2 = core_actor_cpp_isOfClass_FUN_0040c6d0(in_stack_00000008,"CHero");
    if (iVar2 != 0) {
      return 2;
    }
    if ((this_ptr->weapon_state != 0) && (this_ptr->weapon_state != 3)) {
      return 0;
    }
  }
  return 3;
}
