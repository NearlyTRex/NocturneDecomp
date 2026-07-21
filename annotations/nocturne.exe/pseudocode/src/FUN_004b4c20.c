// Name: FUN_004b4c20
// Address: 004b4c20
// Address Range: [[004b4c20, 004b4c2f] [004b4c36, 004b4c5f]]
// Convention: unknown
// Signature: undefined4 FUN_004b4c20(int param_1,undefined4 param_2,int param_3)

#include "nocturne.h"

uint FUN_004b4c20(int param_1,uint param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  
  if (param_3 == 0) {
    uVar1 = core_motion_cpp_CMotionController_getMotionList_FUN_004e1890
                      (param_1 + 0x150,"GETGRABBED",0);
    iVar2 = core_motion_cpp_CMotionList_findStateIndex_FUN_004e10a0(uVar1);
    if (iVar2 < 0) {
      return 0;
    }
  }
  return 1;
}
