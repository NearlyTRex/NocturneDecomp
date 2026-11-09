// Name: core_setdir.cpp_FUN_0053a760
// Address: 0053a760
// Address Range: [[0053a760, 0053a7a5]]
// Convention: unknown
// Signature: int core_setdir_cpp_FUN_0053a760(CDemonSet *param_1,undefined4 param_2)

#include "nocturne.h"

int core_setdir_cpp_FUN_0053a760(CDemonSet *param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *(int *)&param_1->field_0x15b424) {
    do {
      iVar1 = core_setdir_cpp_FUN_0053a090(param_1,iVar2,param_2);
      if (iVar1 != 0) {
        iVar2 = core_setdir_cpp_FUN_0053a720(param_1,iVar2);
        return iVar2;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)&param_1->field_0x15b424);
  }
  return -1;
}
