// Name: core_muzzle.cpp_FUN_0059e0a0
// Address: 0059e0a0
// Address Range: [[0059e0a0, 0059e0e6]]
// Convention: unknown
// Signature: int * core_muzzle_cpp_FUN_0059e0a0(int *param_1,int param_2)

#include "nocturne.h"

int * core_muzzle_cpp_FUN_0059e0a0(int *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  
  if (((*param_1 != 0) && (param_1[0xf1] != 0)) && (iVar1 = 0, piVar2 = param_1, 0 < param_1[0xf1]))
  {
    do {
      if (param_2 == piVar2[1]) {
        return param_1 + iVar1 * 0xf + 1;
      }
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 0xf;
    } while (iVar1 < param_1[0xf1]);
  }
  return (int *)0x0;
}
