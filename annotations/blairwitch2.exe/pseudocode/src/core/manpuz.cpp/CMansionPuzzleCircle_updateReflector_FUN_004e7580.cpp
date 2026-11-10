// Name: core_manpuz.cpp_CMansionPuzzleCircle_updateReflector_FUN_004e7580
// Address: 004e7580
// Address Range: [[004e7580, 004e75fd]]
// Convention: __cdecl
// Signature: void __cdecl core_manpuz_cpp_CMansionPuzzleCircle_updateReflector_FUN_004e7580(CMansionPuzzleCircle *this_ptr,int reflector_index,float delta_time)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_manpuz_cpp_CMansionPuzzleCircle_updateReflector_FUN_004e7580(CMansionPuzzleCircle *this_ptr,int reflector_index,float delta_time)

{
  float fVar1;
  
  if (*(int *)(this_ptr->panels + *(int *)&this_ptr->reflectors[reflector_index].field_0x5c) == 0) {
    fVar1 = delta_time / _DAT_005f98cc + *(float *)&this_ptr->reflectors[reflector_index].field_0x18
    ;
    *(float *)&this_ptr->reflectors[reflector_index].field_0x18 = fVar1;
    if (1.0 < fVar1) {
      *(uint *)&this_ptr->reflectors[reflector_index].field_0x18 = 0x3f800000;
      return;
    }
  }
  else {
    fVar1 = *(float *)&this_ptr->reflectors[reflector_index].field_0x18 - delta_time / _DAT_005f98cc
    ;
    *(float *)&this_ptr->reflectors[reflector_index].field_0x18 = fVar1;
    if (fVar1 < 0.0) {
      *(uint *)&this_ptr->reflectors[reflector_index].field_0x18 = 0;
      return;
    }
  }
  return;
}
