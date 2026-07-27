// Name: core_setdir.cpp_FUN_00513e20
// Address: 00513e20
// Address Range: [[00513e20, 00513e7e]]
// Convention: unknown
// Signature: undefined4 core_setdir_cpp_FUN_00513e20(int param_1,undefined4 param_2,undefined4 param_3)

#include "nocturne.h"

uint core_setdir_cpp_FUN_00513e20(int param_1,uint param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar1 = core_setdir_cpp_CDemonSet_findVdirBoxRoot_FUN_00514300(param_1,param_2);
  if (0 < *(int *)(param_1 + 0x15b028)) {
    do {
      iVar2 = core_setdir_cpp_CDemonSet_findVdirBoxRoot_FUN_00514300(param_1,iVar3);
      if (iVar2 == iVar1) {
        iVar2 = core_setdir_cpp_CDemonSet_isPointInVdirBox_FUN_00513d80(param_1,iVar3,param_3);
        if (iVar2 != 0) {
          return 1;
        }
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(param_1 + 0x15b028));
  }
  return 0;
}
