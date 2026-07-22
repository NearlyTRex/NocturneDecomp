// Name: core_charactr.cpp_CCharacter_setWalkTarget_FUN_00428ab0
// Address: 00428ab0
// Address Range: [[00428ab0, 00428b5e]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_setWalkTarget_FUN_00428ab0(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_setWalkTarget_FUN_00428ab0(int param_1,int param_2,uint param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    if (((*(int *)(param_1 + 0x25a8) != 0) && (*(int *)(param_1 + 0x2598) != 0)) &&
       (*(char *)(param_1 + 0x23b0) != '\0')) {
      uVar1 = core_motion_cpp_CMotionController_getMotionList_FUN_004e1890
                        (param_1 + 0x150,"STAND",0);
      iVar2 = core_motion_cpp_CMotionList_findStateIndex_FUN_004e10a0(uVar1);
      if (-1 < iVar2) {
        core_motion_cpp_CMotionController_setDesiredStateByName_FUN_004e1740
                  (param_1 + 0x150,"STAND",1);
      }
    }
    *(uint *)(param_1 + 0x25a8) = 0;
  }
  else {
    *(uint *)(param_1 + 0x25a8) = 1;
  }
  *(int *)(param_1 + 0x2598) = param_2;
  *(uint *)(param_1 + 0x259c) = param_3;
  *(uint *)(param_1 + 0x25a0) = param_4;
  (**(code **)(*(int *)(param_1 + 0x14c) + 0x130))(param_1,0xbf800000);
  return;
}
