// Name: crt_unknown.c_FUN_005bb007
// Address: 005bb007
// Address Range: [[005bb007, 005bb045]]
// Convention: unknown
// Signature: void crt_unknown_c_FUN_005bb007(undefined4 param_1,undefined4 param_2)

#include "nocturne.h"

void FUN_005bb007(uint param_1,uint param_2)

{
  int iVar1;
  ushort in_DS;
  
  iVar1 = FUN_005c2120(param_1,in_DS);
  if (iVar1 != 0) {
    FUN_005c2154(param_2);
    return;
  }
  FUN_005c1be0(param_1,param_2);
  return;
}
