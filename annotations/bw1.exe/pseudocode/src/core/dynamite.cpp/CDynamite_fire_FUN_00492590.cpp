// Name: core_dynamite.cpp_CDynamite_fire_FUN_00492590
// Address: 00492590
// Address Range: [[00492590, 004925fd]]
// Convention: __cdecl
// Signature: int __cdecl core_dynamite_cpp_CDynamite_fire_FUN_00492590(CDynamite *this_ptr)

#include "nocturne.h"

int __cdecl core_dynamite_cpp_CDynamite_fire_FUN_00492590(CDynamite *this_ptr)

{
  int iVar1;
  
  iVar1 = core_weapon_cpp_CWeapon_fire_FUN_005adde0((CWeapon *)this_ptr);
  if (iVar1 == 0) {
    return 0;
  }
  core_fire_cpp_CFireEffect_createToss_FUN_004b6e60
            (0x01C57074,(CVector3f *)&this_ptr->field_0x20,
             (UOrientationVector *)&this_ptr->field_0x30,(CVector3f *)&this_ptr->field_0x57c,
             *(float *)&this_ptr->field_0x578,*(uint *)&this_ptr->field_0x588);
  *(uint *)&this_ptr->field_0x588 = 0;
  *(uint *)&this_ptr->field_0x578 = 0xbf800000;
  *(uint *)&this_ptr->field_0x584 = 0;
  *(uint *)&this_ptr->field_0x580 = *(uint *)&this_ptr->field_0x584;
  *(uint *)&this_ptr->field_0x57c = *(uint *)&this_ptr->field_0x580;
  return 1;
}
