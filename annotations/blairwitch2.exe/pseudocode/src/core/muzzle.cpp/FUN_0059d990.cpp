// Name: core_muzzle.cpp_FUN_0059d990
// Address: 0059d990
// Address Range: [[0059d990, 0059d9e6]]
// Convention: unknown
// Signature: undefined4 core_muzzle_cpp_FUN_0059d990(char *param_1,char *param_2)

#include "nocturne.h"

uint core_muzzle_cpp_FUN_0059d990(char *param_1,char *param_2)

{
  int iVar1;
  char *str2;
  int iVar2;
  
  if ((*(int *)(param_1 + 0x834) != 0) && (iVar2 = 0, str2 = param_1, 0 < *(int *)(param_1 + 0x834))
     ) {
    do {
      iVar1 = _strcmp(param_2,str2);
      iVar2 = iVar2 + 1;
      if (iVar1 == 0) {
        *(int *)(param_1 + 0x83c) = iVar2;
        return 1;
      }
      str2 = str2 + 0x19;
    } while (iVar2 < *(int *)(param_1 + 0x834));
  }
  return 0;
}
