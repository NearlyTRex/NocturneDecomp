// Name: core_union.cpp_CUnion_processDeathState_FUN_005a4e60
// Address: 005a4e60
// Address Range: [[005a4e60, 005a4e80]]
// Convention: __cdecl
// Signature: void __cdecl core_union_cpp_CUnion_processDeathState_FUN_005a4e60(CUnion *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_union_cpp_CUnion_processDeathState_FUN_005a4e60(CUnion *this_ptr,float delta_time)

{
  *(uint *)&this_ptr->field_0x342c = 0;
  core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
            ((CMotionController *)&this_ptr->field_0x2b4,6,1);
  return;
}
