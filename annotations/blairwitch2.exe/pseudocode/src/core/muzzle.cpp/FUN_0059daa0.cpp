// Name: core_muzzle.cpp_FUN_0059daa0
// Address: 0059daa0
// Address Range: [[0059daa0, 0059dade]]
// Convention: unknown
// Signature: undefined4 core_muzzle_cpp_FUN_0059daa0(int param_1,char *param_2)

#include "nocturne.h"

uint core_muzzle_cpp_FUN_0059daa0(int param_1,char *param_2)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x834) != 0) {
    iVar1 = _strcmp
                      (param_2,(char *)((*(int *)(param_1 + 0x840) + -1) * 0x19 + param_1));
    if (iVar1 == 0) {
      return 1;
    }
  }
  return 0;
}
