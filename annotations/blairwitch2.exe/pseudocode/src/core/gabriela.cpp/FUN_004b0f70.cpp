// Name: core_gabriela.cpp_FUN_004b0f70
// Address: 004b0f70
// Address Range: [[004b0f70, 004b0fa2]]
// Convention: __cdecl
// Signature: int __cdecl core_gabriela_cpp_FUN_004b0f70(CGabriella *this_ptr)

#include "nocturne.h"

int __cdecl core_gabriela_cpp_FUN_004b0f70(CGabriella *this_ptr)

{
  *(uint *)&this_ptr->field_0x25608 = 0;
  if (*(int *)&this_ptr->field_0x2620 == 0) {
    return 0;
  }
  core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
            ((CMotionController *)&this_ptr->field_0x2b4,5,1);
  return 1;
}
