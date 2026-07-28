// Name: core_fire.cpp_CBulletTrail_process_FUN_004856a0
// Address: 004856a0
// Address Range: [[004856a0, 004856b7]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CBulletTrail_process_FUN_004856a0(CBulletTrail *this_ptr)

#include "nocturne.h"

void __cdecl core_fire_cpp_CBulletTrail_process_FUN_004856a0(CBulletTrail *this_ptr)

{
  int iVar1;
  
  iVar1 = this_ptr->frames_remaining + -1;
  this_ptr->frames_remaining = iVar1;
  if (-1 < iVar1) {
    return;
  }
  this_ptr->frames_remaining = 0;
  return;
}
