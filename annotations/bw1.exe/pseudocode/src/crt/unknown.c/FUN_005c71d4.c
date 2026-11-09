// Name: crt_unknown.c_FUN_005c71d4
// Address: 005c71d4
// Address Range: [[005c71d4, 005c721d]]
// Convention: unknown
// Signature: undefined4 crt_unknown_c_FUN_005c71d4(undefined4 param_1,undefined4 param_2)

#include "nocturne.h"

uint FUN_005c71d4(uint param_1,uint param_2)

{
  int iVar1;
  ushort in_DS;
  byte auStack_8 [4];
  
  (*(code *)PTR_crt_unknown_c_FUN_005c50d4_00626618)();
  iVar1 = FUN_005c7018(in_DS,param_1,param_2,auStack_8);
  if (iVar1 == 0) {
    (*(code *)PTR_crt_unknown_c_FUN_005c50d4_00626620)();
    return param_1;
  }
  (*(code *)PTR_crt_unknown_c_FUN_005c50d4_00626620)();
  return 0;
}
