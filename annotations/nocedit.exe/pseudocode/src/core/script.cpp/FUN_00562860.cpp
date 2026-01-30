// Name: core_script.cpp_FUN_00562860
// Address: 00562860
// Address Range: [[00562860, 00562885]]
// Convention: __cdecl
// Signature: void __cdecl core_script_cpp_FUN_00562860(int param_1,int param_2)

#include "nocturne.h"

void __cdecl core_script_cpp_FUN_00562860(int param_1,int param_2)

{
  CHero *pCVar1;
  
  pCVar1 = core_script_cpp_FUN_005627f0(param_1,param_2);
  if (pCVar1 == (CHero *)0x0) {
    return;
  }
  core_motion_cpp_CMotionController_getMotionList_FUN_0052dce0
            (&(pCVar1->base).model.motion_controller);
  return;
}
