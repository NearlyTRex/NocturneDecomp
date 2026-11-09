// Name: core_manpuz.cpp_FUN_004e7580
// Address: 004e7580
// Address Range: [[004e7580, 004e75fd]]
// Convention: __cdecl
// Signature: void __cdecl core_manpuz_cpp_FUN_004e7580(CMansionPuzzleCircle *this_ptr,int reflector_index,float delta_time)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_manpuz_cpp_FUN_004e7580(CMansionPuzzleCircle *this_ptr,int reflector_index,float delta_time)

{
  float fVar1;
  int iVar2;
  
  iVar2 = reflector_index * 0x60;
  if (*(int *)(&this_ptr->field_0x74c + *(int *)(&this_ptr->field_0x14f8 + iVar2) * 100) == 0) {
    fVar1 = delta_time / _DAT_005f98cc + *(float *)(&this_ptr->field_0x14b4 + iVar2);
    *(float *)(&this_ptr->field_0x14b4 + iVar2) = fVar1;
    if (1.0 < fVar1) {
      *(uint *)(&this_ptr->field_0x14b4 + iVar2) = 0x3f800000;
      return;
    }
  }
  else {
    fVar1 = *(float *)(&this_ptr->field_0x14b4 + iVar2) - delta_time / _DAT_005f98cc;
    *(float *)(&this_ptr->field_0x14b4 + iVar2) = fVar1;
    if (fVar1 < 0.0) {
      *(uint *)(&this_ptr->field_0x14b4 + iVar2) = 0;
      return;
    }
  }
  return;
}
