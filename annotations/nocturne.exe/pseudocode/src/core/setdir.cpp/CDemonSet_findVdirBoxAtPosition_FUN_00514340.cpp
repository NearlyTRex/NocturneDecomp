// Name: core_setdir.cpp_CDemonSet_findVdirBoxAtPosition_FUN_00514340
// Address: 00514340
// Address Range: [[00514340, 00514385]]
// Convention: unknown
// Signature: undefined4 core_setdir_cpp_CDemonSet_findVdirBoxAtPosition_FUN_00514340(int param_1,undefined4 param_2)

#include "nocturne.h"

uint core_setdir_cpp_CDemonSet_findVdirBoxAtPosition_FUN_00514340(int param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x15b028)) {
    do {
      iVar1 = core_setdir_cpp_CDemonSet_isPointInVdirBox_FUN_00513d80(param_1,iVar3,param_2);
      if (iVar1 != 0) {
        uVar2 = core_setdir_cpp_CDemonSet_findVdirBoxRoot_FUN_00514300(param_1,iVar3);
        return uVar2;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(param_1 + 0x15b028));
  }
  return 0xffffffff;
}
