// Name: core_dracbrid.cpp_FUN_00486320
// Address: 00486320
// Address Range: [[00486320, 0048635e]]
// Convention: __cdecl
// Signature: int __cdecl core_dracbrid_cpp_FUN_00486320(void)

#include "nocturne.h"

int __cdecl core_dracbrid_cpp_FUN_00486320(void)

{
  SMotion *pSVar1;
  int in_stack_00000004;
  
  if (*(int *)(in_stack_00000004 + 0x70) == 2) {
    return 2;
  }
  pSVar1 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                     ((CMotionController *)(in_stack_00000004 + 0x158));
  switch(pSVar1->state_index) {
  case 7:
  case 10:
    return 1;
  default:
    return 0;
  case 0x10:
  case 0x11:
    return 2;
  }
}
