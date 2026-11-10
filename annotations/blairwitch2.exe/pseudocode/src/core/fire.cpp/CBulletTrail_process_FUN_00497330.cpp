// Name: core_fire.cpp_CBulletTrail_process_FUN_00497330
// Address: 00497330
// Address Range: [[00497330, 00497347]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CBulletTrail_process_FUN_00497330(CBulletTrail *this_ptr)

#include "nocturne.h"

void __cdecl core_fire_cpp_CBulletTrail_process_FUN_00497330(CBulletTrail *this_ptr)

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
