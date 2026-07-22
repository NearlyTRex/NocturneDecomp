// Name: core_charactr.cpp_CCharacter_getDeathState_FUN_00428710
// Address: 00428710
// Address Range: [[00428710, 00428770]]
// Convention: __cdecl
// Signature: undefined4 __cdecl core_charactr_cpp_CCharacter_getDeathState_FUN_00428710(int param_1)

#include "nocturne.h"

uint __cdecl core_charactr_cpp_CCharacter_getDeathState_FUN_00428710(int param_1)

{
  uint uVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x70) == 2) {
    return 2;
  }
  uVar1 = core_motion_cpp_CMotionController_getCurrentStateName_FUN_004e18a0
                    (param_1 + 0x150,&FLOAT_0057a04a,3);
  iVar2 = _strnicmp(uVar1);
  if (iVar2 == 0) {
    return 1;
  }
  uVar1 = core_motion_cpp_CMotionController_getCurrentStateName_FUN_004e18a0
                    (param_1 + 0x150,"DEAD");
  iVar2 = _stricmp(uVar1);
  if (iVar2 == 0) {
    return 2;
  }
  return 0;
}
