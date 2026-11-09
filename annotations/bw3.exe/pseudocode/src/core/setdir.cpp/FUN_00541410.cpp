// Name: core_setdir.cpp_FUN_00541410
// Address: 00541410
// Address Range: [[00541410, 0054146e]]
// Convention: unknown
// Signature: undefined4 core_setdir_cpp_FUN_00541410(CDemonSet *param_1,int param_2,undefined4 param_3)

#include "nocturne.h"

uint core_setdir_cpp_FUN_00541410(CDemonSet *param_1,int param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  int box_index;
  
  box_index = 0;
  iVar1 = core_setdir_cpp_CDemonSet_findVdirBoxRoot_FUN_005419e0(param_1,param_2);
  if (0 < *(int *)&param_1->field_0x15b428) {
    do {
      iVar2 = core_setdir_cpp_CDemonSet_findVdirBoxRoot_FUN_005419e0(param_1,box_index);
      if (iVar2 == iVar1) {
        iVar2 = core_setdir_cpp_FUN_00541350(param_1,box_index,param_3);
        if (iVar2 != 0) {
          return 1;
        }
      }
      box_index = box_index + 1;
    } while (box_index < *(int *)&param_1->field_0x15b428);
  }
  return 0;
}
