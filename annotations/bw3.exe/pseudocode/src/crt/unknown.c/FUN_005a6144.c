// Name: crt_unknown.c_FUN_005a6144
// Address: 005a6144
// Address Range: [[005a6144, 005a6182]]
// Convention: unknown
// Signature: void crt_unknown_c_FUN_005a6144(undefined4 param_1,undefined4 param_2)

#include "nocturne.h"

void FUN_005a6144(uint param_1,uint param_2)

{
  int iVar1;
  ushort in_DS;
  
  iVar1 = FUN_005ad290(param_1,in_DS);
  if (iVar1 != 0) {
    FUN_005ad2c4(param_2);
    return;
  }
  FUN_005acda0(param_1,param_2);
  return;
}
