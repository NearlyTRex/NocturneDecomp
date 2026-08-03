// Name: core_setdir.cpp_FUN_00513e20
// Address: 00513e20
// Address Range: [[00513e20, 00513e7e]]
// Convention: unknown
// Signature: undefined4 core_setdir_cpp_FUN_00513e20(CDemonSet *param_1,int param_2,CVector3f *param_3)

#include "nocturne.h"

uint core_setdir_cpp_FUN_00513e20(CDemonSet *param_1,int param_2,CVector3f *param_3)

{
  int iVar1;
  int iVar2;
  int box_index;
  
  box_index = 0;
  iVar1 = core_setdir_cpp_CDemonSet_findVdirBoxRoot_FUN_00514300(param_1,param_2);
  if (0 < param_1->vdir_box_count) {
    do {
      iVar2 = core_setdir_cpp_CDemonSet_findVdirBoxRoot_FUN_00514300(param_1,box_index);
      if (iVar2 == iVar1) {
        iVar2 = core_setdir_cpp_CDemonSet_isPointInVdirBox_FUN_00513d80(param_1,box_index,param_3);
        if (iVar2 != 0) {
          return 1;
        }
      }
      box_index = box_index + 1;
    } while (box_index < param_1->vdir_box_count);
  }
  return 0;
}
