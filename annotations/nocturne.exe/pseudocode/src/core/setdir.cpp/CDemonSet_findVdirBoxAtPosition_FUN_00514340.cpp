// Name: core_setdir.cpp_CDemonSet_findVdirBoxAtPosition_FUN_00514340
// Address: 00514340
// Address Range: [[00514340, 00514385]]
// Convention: unknown
// Signature: int core_setdir_cpp_CDemonSet_findVdirBoxAtPosition_FUN_00514340(CDemonSet *param_1,CVector3f *param_2)

#include "nocturne.h"

int core_setdir_cpp_CDemonSet_findVdirBoxAtPosition_FUN_00514340(CDemonSet *param_1,CVector3f *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < param_1->vdir_box_count) {
    do {
      iVar1 = core_setdir_cpp_CDemonSet_isPointInVdirBox_FUN_00513d80(param_1,iVar2,param_2);
      if (iVar1 != 0) {
        iVar2 = core_setdir_cpp_CDemonSet_findVdirBoxRoot_FUN_00514300(param_1,iVar2);
        return iVar2;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < param_1->vdir_box_count);
  }
  return -1;
}
