// Name: core_stranger.cpp_FUN_00540a70
// Address: 00540a70
// Address Range: [[00540a70, 00540a85]]
// Convention: unknown
// Signature: undefined4 core_stranger_cpp_FUN_00540a70(void)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint core_stranger_cpp_FUN_00540a70(void)

{
  int iVar1;
  int in_stack_00000004;
  
  iVar1 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660(in_stack_00000004 + 0x150)
  ;
  return *(uint *)(iVar1 + 0x24);
}
