// Name: FUN_00472ab0
// Address: 00472ab0
// Address Range: [[00472ab0, 00472aed]]
// Convention: unknown
// Signature: undefined4 FUN_00472ab0(undefined4 param_1,undefined4 param_2)

#include "nocturne.h"

uint FUN_00472ab0(uint param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = FUN_00460c70(&DAT_005d1b4e,param_2,&DAT_005d1b4b);
  if (iVar1 == 0) {
    return 0;
  }
  FUN_004728d0(param_1,iVar1);
  FUN_005b89c0(iVar1);
  return 1;
}
