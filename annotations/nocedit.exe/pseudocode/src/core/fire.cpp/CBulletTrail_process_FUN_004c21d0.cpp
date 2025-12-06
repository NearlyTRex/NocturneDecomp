// Name: core_fire.cpp_CBulletTrail_process_FUN_004c21d0
// Address: 004c21d0
// Address Range: [[004c21d0, 004c21e7]]
// Convention: __cdecl
// Signature: void core_fire.cpp_CBulletTrail_process_FUN_004c21d0(CBulletTrail * this_ptr)

#include "nocturne.h"

void __cdecl core_fire_cpp_CBulletTrail_process_FUN_004c21d0(CBulletTrail *this_ptr)

{
  int iVar1;
  
  iVar1 = *(int *)(this_ptr->field0_0x0 + 0x20) + -1;
  *(int *)(this_ptr->field0_0x0 + 0x20) = iVar1;
  if (-1 < iVar1) {
    return;
  }
  this_ptr->field0_0x0[0x20] = '\0';
  this_ptr->field0_0x0[0x21] = '\0';
  this_ptr->field0_0x0[0x22] = '\0';
  this_ptr->field0_0x0[0x23] = '\0';
  return;
}
