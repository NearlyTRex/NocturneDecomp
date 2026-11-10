// Name: core_gabriela.cpp_CGabriella_tryThrowObject_FUN_004c9eb0
// Address: 004c9eb0
// Address Range: [[004c9eb0, 004c9ee2]]
// Convention: __cdecl
// Signature: int __cdecl core_gabriela_cpp_CGabriella_tryThrowObject_FUN_004c9eb0(CGabriella *this_ptr)

#include "nocturne.h"

int __cdecl core_gabriela_cpp_CGabriella_tryThrowObject_FUN_004c9eb0(CGabriella *this_ptr)

{
  *(uint *)&this_ptr->field_0x1ff78 = 0;
  if (*(int *)&this_ptr->field_0x25b0 == 0) {
    return 0;
  }
  core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
            ((CMotionController *)&this_ptr->field_0x158,5,1);
  return 1;
}
