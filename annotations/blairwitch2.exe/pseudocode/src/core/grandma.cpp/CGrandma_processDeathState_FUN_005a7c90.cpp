// Name: core_grandma.cpp_CGrandma_processDeathState_FUN_005a7c90
// Address: 005a7c90
// Address Range: [[005a7c90, 005a7ca6]]
// Convention: __cdecl
// Signature: void __cdecl core_grandma_cpp_CGrandma_processDeathState_FUN_005a7c90(CGrandma *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_grandma_cpp_CGrandma_processDeathState_FUN_005a7c90(CGrandma *this_ptr,float delta_time)

{
  core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
            ((CMotionController *)&this_ptr->field_0x2b4,0,1);
  return;
}
