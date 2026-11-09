// Name: core_set.cpp_FUN_005557a0
// Address: 005557a0
// Address Range: [[005557a0, 00555828]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_FUN_005557a0(CDemonSet *this_ptr,CVector3f *position)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_set_cpp_FUN_005557a0(CDemonSet *this_ptr,CVector3f *position)

{
  uint uVar1;
  uint uVar2;
  int local_10;
  int local_c;
  int local_8;
  
  if (position == (CVector3f *)0x0) {
    *(uint *)&this_ptr->field_0x161670 = 0;
    return;
  }
  local_10 = (int)ROUND(*(float *)position * _DAT_00605000);
  local_c = (int)ROUND(*(float *)&position->field_0x4 * _DAT_00605000);
  local_8 = (int)ROUND(*(float *)&position->field_0x8 * _DAT_00605000);
  core_set_cpp_CDemonSet_lightVertexColor_FUN_00552710
            (this_ptr,(CVector3i *)&local_10,(CVector3i *)0x0,0,0);
  uVar1 = DAT_00629034;
  *(uint *)&this_ptr->field_0x161670 = 1;
  uVar2 = DAT_0062903c;
  *(uint *)&this_ptr->field_0x161674 = uVar1;
  *(uint *)&this_ptr->field_0x16167c = uVar2;
  *(uint *)&this_ptr->field_0x161678 = DAT_00629038;
  return;
}
