// Name: core_flamecan.cpp_CFlameCan_ignite_FUN_004a7110
// Address: 004a7110
// Address Range: [[004a7110, 004a715f]]
// Convention: __cdecl
// Signature: void __cdecl core_flamecan_cpp_CFlameCan_ignite_FUN_004a7110(CFlameCan *this_ptr)

#include "nocturne.h"

void __cdecl core_flamecan_cpp_CFlameCan_ignite_FUN_004a7110(CFlameCan *this_ptr)

{
  int iVar1;
  
  *(uint *)&this_ptr->field_0x2d4 = 1;
  iVar1 = 0;
  do {
    iVar1 = iVar1 + 1;
    core_fire_cpp_CFireEffect_createSpark_FUN_004a23c0
              (0x01C73654,(CVector3f *)&this_ptr->field_0x360,(CVector3f *)0x0,0x4000,0x4000,0,
               0xffff);
  } while (iVar1 < 5);
  *(uint *)&this_ptr->field_0x4f4 = 1;
  return;
}
