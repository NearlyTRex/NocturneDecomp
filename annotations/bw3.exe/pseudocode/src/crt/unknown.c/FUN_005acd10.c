// Name: crt_unknown.c_FUN_005acd10
// Address: 005acd10
// Address Range: [[005acd10, 005acd9f]]
// Convention: unknown
// Signature: int crt_unknown_c_FUN_005acd10(byte *param_1,byte *param_2,int param_3)

#include "nocturne.h"

int FUN_005acd10(byte *param_1,byte *param_2,int param_3)

{
  int iVar1;
  
  while (((param_3 != 0 && (iVar1 = unkafter_asgaya_cpp_FUN_005af2a0(param_1), iVar1 == 0)) &&
         (iVar1 = unkafter_asgaya_cpp_FUN_005af2a0(param_2), iVar1 == 0))) {
    iVar1 = unkafter_asgaya_cpp_FUN_005af6a0(param_1,param_2);
    if (iVar1 != 0) {
      return iVar1;
    }
    param_1 = (byte *)FUN_005aca00(param_1);
    param_3 = param_3 + -1;
    param_2 = (byte *)FUN_005aca00(param_2);
  }
  if ((param_3 != 0) &&
     ((iVar1 = unkafter_asgaya_cpp_FUN_005af2a0(param_1), iVar1 != 0 ||
      (iVar1 = unkafter_asgaya_cpp_FUN_005af2a0(param_2), iVar1 != 0)))) {
    return (uint)*param_1 - (uint)*param_2;
  }
  return 0;
}
