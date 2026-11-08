// Name: FUN_00556be0
// Address: 00556be0
// Address Range: [[00556be0, 00556c07]]
// Convention: unknown
// Signature: undefined4 FUN_00556be0(undefined4 param_1)

#include "nocturne.h"

uint FUN_00556be0(uint param_1)

{
  int iVar1;
  
  iVar1 = FUN_00552f10(param_1,1);
  if (iVar1 == 0) {
    return 0;
  }
  FUN_00555270(iVar1);
  FUN_00556fd0();
  return 1;
}
