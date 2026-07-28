// Name: core_stranger.cpp_FUN_00540a70
// Address: 00540a70
// Address Range: [[00540a70, 00540a85]]
// Convention: unknown
// Signature: int core_stranger_cpp_FUN_00540a70(void)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int core_stranger_cpp_FUN_00540a70(void)

{
  SMotion *pSVar1;
  int in_stack_00000004;
  
  pSVar1 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660
                     ((CMotionController *)(in_stack_00000004 + 0x150));
  return pSVar1->state_index;
}
