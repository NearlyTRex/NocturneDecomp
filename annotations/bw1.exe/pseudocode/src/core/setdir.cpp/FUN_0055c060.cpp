// Name: core_setdir.cpp_FUN_0055c060
// Address: 0055c060
// Address Range: [[0055c060, 0055c09f] [0055c0a1, 0055c0ae]]
// Convention: unknown
// Signature: int core_setdir_cpp_FUN_0055c060(CDemonSet *param_1,undefined4 param_2)

#include "nocturne.h"

int core_setdir_cpp_FUN_0055c060(CDemonSet *param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *(int *)&param_1->field_0x15b428) {
    do {
      iVar1 = core_setdir_cpp_FUN_0055b990(param_1,iVar2,param_2);
      if (iVar1 != 0) {
        iVar2 = core_setdir_cpp_CDemonSet_findVdirBoxRoot_FUN_0055c020(param_1,iVar2);
        return iVar2;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)&param_1->field_0x15b428);
  }
  return -1;
}
