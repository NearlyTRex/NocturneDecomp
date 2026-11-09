// Name: core_flamecan.cpp_CFlameCan_ignite_FUN_004a08d0
// Address: 004a08d0
// Address Range: [[004a08d0, 004a091f]]
// Convention: __cdecl
// Signature: void __cdecl core_flamecan_cpp_CFlameCan_ignite_FUN_004a08d0(CFlameCan *this_ptr)

#include "nocturne.h"

void __cdecl core_flamecan_cpp_CFlameCan_ignite_FUN_004a08d0(CFlameCan *this_ptr)

{
  int iVar1;
  
  *(uint *)&this_ptr->field_0x430 = 1;
  iVar1 = 0;
  do {
    iVar1 = iVar1 + 1;
    core_fire_cpp_FUN_0049d090
              (0x01C3DEB4,(CVector3f *)&this_ptr->field_0x4bc,(CVector3f *)0x0,0x4000,0x4000,0,
               0xffff);
  } while (iVar1 < 5);
  *(uint *)&this_ptr->field_0x7ac = 1;
  return;
}
