// Name: crt_unknown.c_FUN_00607958
// Address: 00607958
// Address Range: [[00607958, 006079b0]]
// Convention: unknown
// Signature: undefined4 crt_unknown_c_FUN_00607958(int param_1,int param_2,undefined4 param_3)

#include "nocturne.h"

uint FUN_00607958(int param_1,int param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  
  if ((*(int *)(param_1 + 0x20) == 0) && (*(int *)(param_2 + 0x20) == 0)) {
    if (*(int *)(param_2 + 0x10) < *(int *)(param_1 + 0x10)) {
      return 1;
    }
    if (*(int *)(param_1 + 0x10) < *(int *)(param_2 + 0x10)) {
      return 0;
    }
  }
  iVar1 = FUN_00607858(param_1,param_3);
  iVar2 = FUN_00607858(param_2,param_3);
  if (iVar1 <= iVar2) {
    return 0;
  }
  return 1;
}
