// Name: core_stranger.cpp_CStranger_tryThrowDynamite_FUN_00591410
// Address: 00591410
// Address Range: [[00591410, 00591470]]
// Convention: __cdecl
// Signature: int __cdecl core_stranger_cpp_CStranger_tryThrowDynamite_FUN_00591410(CStranger *this_ptr)

#include "nocturne.h"

int __cdecl core_stranger_cpp_CStranger_tryThrowDynamite_FUN_00591410(CStranger *this_ptr)

{
  int iVar1;
  float fVar2;
  uint uVar3;
  
  iVar1 = *(int *)&this_ptr->field_0x2628;
  if (((iVar1 == 0) ||
      (uVar3 = (**(code **)(*(int *)(iVar1 + 0x154) + 0x74))(iVar1), (uVar3 & 4) == 0)) &&
     ((this_ptr->weapon == (CWeapon *)0x0 || (this_ptr->weapon->weapon_type != WEAPON_TYPE_DYNAMITE)
      ))) {
    return 0;
  }
  fVar2 = 0x41200000;
  *(uint *)&this_ptr->field_0x1ff5c = 3;
  this_ptr->aim_speed_factor = fVar2;
  return 1;
}
