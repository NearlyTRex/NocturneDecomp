// Name: crt_unknown.c_FUN_005aa044
// Address: 005aa044
// Address Range: [[005aa044, 005aa08d]]
// Convention: unknown
// Signature: undefined4 crt_unknown_c_FUN_005aa044(undefined4 param_1,undefined4 param_2)

#include "nocturne.h"

uint FUN_005aa044(uint param_1,uint param_2)

{
  int iVar1;
  ushort in_DS;
  byte auStack_8 [4];
  
  (*(code *)PTR_crt_unknown_c_FUN_005a7f44_006079bc)();
  iVar1 = FUN_005a9e88(in_DS,param_1,param_2,auStack_8);
  if (iVar1 == 0) {
    (*(code *)PTR_crt_unknown_c_FUN_005a7f44_006079c4)();
    return param_1;
  }
  (*(code *)PTR_crt_unknown_c_FUN_005a7f44_006079c4)();
  return 0;
}
