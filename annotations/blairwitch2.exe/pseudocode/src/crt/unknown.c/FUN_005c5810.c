// Name: crt_unknown.c_FUN_005c5810
// Address: 005c5810
// Address Range: [[005c5810, 005c587e]]
// Convention: unknown
// Signature: undefined4 crt_unknown_c_FUN_005c5810(undefined4 param_1,int param_2)

#include "nocturne.h"

uint FUN_005c5810(uint param_1,int param_2)

{
  int iVar1;
  byte auStack_8 [4];
  
  FUN_005c0e30(param_2,auStack_8);
  iVar1 = FUN_005c0e50(auStack_8);
  auStack_8[iVar1] = 0;
  while( true ) {
    iVar1 = FUN_005c4260(param_1);
    if (iVar1 != 0) break;
    iVar1 = FUN_005c5c70(param_1,auStack_8);
    if (iVar1 == 0) break;
    param_1 = FUN_005c0e00(param_1);
  }
  iVar1 = FUN_005c4260(param_1);
  if ((iVar1 != 0) && (param_2 != 0)) {
    param_1 = 0;
  }
  return param_1;
}
