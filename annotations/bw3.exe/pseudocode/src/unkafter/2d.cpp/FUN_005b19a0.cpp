// Name: unkafter_2d.cpp_FUN_005b19a0
// Address: 005b19a0
// Address Range: [[005b19a0, 005b1a19]]
// Convention: unknown
// Signature: int unkafter_2d_cpp_FUN_005b19a0(undefined2 *param_1,char *param_2,int param_3)

#include "nocturne.h"

int unkafter_2d_cpp_FUN_005b19a0(ushort *param_1,char *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (param_1 == (ushort *)0x0) {
    while ((iVar1 = iVar2, *param_2 != '\0' &&
           (iVar1 = unkafter_asgaya_cpp_FUN_005ae560(0,param_2,2), iVar1 != -1))) {
      param_2 = (char *)FUN_005aca00(param_2);
      iVar2 = iVar2 + 1;
    }
  }
  else {
    for (; iVar1 = iVar2, param_3 != 0; param_3 = param_3 + -1) {
      if (*param_2 == '\0') {
        *param_1 = 0;
        return iVar2;
      }
      iVar1 = unkafter_asgaya_cpp_FUN_005ae560(param_1,param_2,2);
      if (iVar1 == -1) {
        return -1;
      }
      param_2 = (char *)FUN_005aca00(param_2);
      param_1 = param_1 + 1;
      iVar2 = iVar2 + 1;
    }
  }
  return iVar1;
}
