// Name: core_fire.cpp_CBulletTrail_process_FUN_0049ad00
// Address: 0049ad00
// Address Range: [[0049ad00, 0049ad17]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CBulletTrail_process_FUN_0049ad00(CBulletTrail *this_ptr)

#include "nocturne.h"

void __cdecl core_fire_cpp_CBulletTrail_process_FUN_0049ad00(CBulletTrail *this_ptr)

{
  int iVar1;
  
  iVar1 = *(int *)&this_ptr->field_0x20 + -1;
  *(int *)&this_ptr->field_0x20 = iVar1;
  if (-1 < iVar1) {
    return;
  }
  *(uint *)&this_ptr->field_0x20 = 0;
  return;
}
