// Name: core_script.cpp_FUN_00562860
// Address: 00562860
// Address Range: [[00562860, 00562885]]
// Convention: unknown
// Signature: void core_script_cpp_FUN_00562860(void)

#include "nocturne.h"

/* Signature: byte core_script.cpp_FUN_00562860(uint param_1, uint param_2) */

void core_script_cpp_FUN_00562860(void)

{
  int iVar1;
  
  iVar1 = core_script_cpp_FUN_005627f0();
  if (iVar1 == 0) {
    return;
  }
  core_motion_cpp_CMotionController_getMotionList_FUN_0052dce0((CMotionController *)(iVar1 + 0x158))
  ;
  return;
}
