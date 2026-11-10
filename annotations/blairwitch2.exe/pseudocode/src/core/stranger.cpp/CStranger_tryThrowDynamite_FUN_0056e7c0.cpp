// Name: core_stranger.cpp_CStranger_tryThrowDynamite_FUN_0056e7c0
// Address: 0056e7c0
// Address Range: [[0056e7c0, 0056e820]]
// Convention: __cdecl
// Signature: int __cdecl core_stranger_cpp_CStranger_tryThrowDynamite_FUN_0056e7c0(CStranger *this_ptr)

#include "nocturne.h"

int __cdecl core_stranger_cpp_CStranger_tryThrowDynamite_FUN_0056e7c0(CStranger *this_ptr)

{
  int iVar1;
  float fVar2;
  uint uVar3;
  
  iVar1 = *(int *)&this_ptr->field_0x2698;
  if (((iVar1 == 0) ||
      (uVar3 = (**(code **)(*(int *)(iVar1 + 0x2b0) + 0x7c))(iVar1), (uVar3 & 4) == 0)) &&
     ((this_ptr->weapon == (CWeapon *)0x0 || (this_ptr->weapon->weapon_type != WEAPON_TYPE_DYNAMITE)
      ))) {
    return 0;
  }
  fVar2 = 0x41200000;
  this_ptr->action_pending = 3;
  this_ptr->aim_speed_factor = fVar2;
  return 1;
}
