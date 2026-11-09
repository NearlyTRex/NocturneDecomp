// Name: core_setdir.cpp_FUN_0053a150
// Address: 0053a150
// Address Range: [[0053a150, 0053a1ae]]
// Convention: unknown
// Signature: undefined4 core_setdir_cpp_FUN_0053a150(CDemonSet *param_1,int param_2,undefined4 param_3)

#include "nocturne.h"

uint core_setdir_cpp_FUN_0053a150(CDemonSet *param_1,int param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  int box_index;
  
  box_index = 0;
  iVar1 = core_setdir_cpp_FUN_0053a720(param_1,param_2);
  if (0 < *(int *)&param_1->field_0x15b424) {
    do {
      iVar2 = core_setdir_cpp_FUN_0053a720(param_1,box_index);
      if (iVar2 == iVar1) {
        iVar2 = core_setdir_cpp_FUN_0053a090(param_1,box_index,param_3);
        if (iVar2 != 0) {
          return 1;
        }
      }
      box_index = box_index + 1;
    } while (box_index < *(int *)&param_1->field_0x15b424);
  }
  return 0;
}
