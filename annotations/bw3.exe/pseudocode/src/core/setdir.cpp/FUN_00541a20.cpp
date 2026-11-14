// Name: core_setdir.cpp_FUN_00541a20
// Address: 00541a20
// Address Range: [[00541a20, 00541a5f] [00541a61, 00541a6e]]
// Convention: unknown
// Signature: int core_setdir_cpp_FUN_00541a20(CDemonSet *param_1,undefined4 param_2)

#include "nocturne.h"

int core_setdir_cpp_FUN_00541a20(CDemonSet *param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < param_1->vdir_box_count) {
    do {
      iVar1 = core_setdir_cpp_FUN_00541350(param_1,iVar2,param_2);
      if (iVar1 != 0) {
        iVar2 = core_setdir_cpp_CDemonSet_findVdirBoxRoot_FUN_005419e0(param_1,iVar2);
        return iVar2;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < param_1->vdir_box_count);
  }
  return -1;
}
