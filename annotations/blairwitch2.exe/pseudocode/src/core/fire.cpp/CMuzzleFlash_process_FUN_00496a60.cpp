// Name: core_fire.cpp_CMuzzleFlash_process_FUN_00496a60
// Address: 00496a60
// Address Range: [[00496a60, 00496a8f]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CMuzzleFlash_process_FUN_00496a60(CMuzzleFlash *this_ptr)

#include "nocturne.h"

void __cdecl core_fire_cpp_CMuzzleFlash_process_FUN_00496a60(CMuzzleFlash *this_ptr)

{
  int iVar1;
  
  iVar1 = *(int *)this_ptr + -1;
  *(int *)this_ptr = iVar1;
  if (iVar1 < 0) {
    *(uint *)this_ptr = 0;
    return;
  }
  if (iVar1 != 1) {
    return;
  }
  core_fire_cpp_CFireEffect_createDefaultSmoke_FUN_0049ccd0
            (0x01C3DEB4,(CVector3f *)&this_ptr->field_0x4);
  return;
}
