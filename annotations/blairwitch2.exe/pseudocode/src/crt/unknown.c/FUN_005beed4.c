// Name: crt_unknown.c_FUN_005beed4
// Address: 005beed4
// Address Range: [[005beed4, 005bef1d]]
// Convention: unknown
// Signature: undefined4 crt_unknown_c_FUN_005beed4(undefined4 param_1,undefined4 param_2)

#include "nocturne.h"

uint FUN_005beed4(uint param_1,uint param_2)

{
  int iVar1;
  ushort in_DS;
  byte auStack_8 [4];
  
  (*(code *)PTR_crt_unknown_c_FUN_005bce04_0061f2c0)();
  iVar1 = FUN_005bed18(in_DS,param_1,param_2,auStack_8);
  if (iVar1 == 0) {
    (*(code *)PTR_crt_unknown_c_FUN_005bce04_0061f2c8)();
    return param_1;
  }
  (*(code *)PTR_crt_unknown_c_FUN_005bce04_0061f2c8)();
  return 0;
}
