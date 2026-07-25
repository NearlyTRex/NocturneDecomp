// Name: FUN_0043ab40
// Address: 0043ab40
// Address Range: [[0043ab40, 0043ab50]]
// Convention: unknown
// Signature: undefined4 FUN_0043ab40(void)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint FUN_0043ab40(void)

{
  int iVar1;
  
  iVar1 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660();
  return *(uint *)(iVar1 + 0x24);
}
