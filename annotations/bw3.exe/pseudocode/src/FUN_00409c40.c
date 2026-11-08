// Name: FUN_00409c40
// Address: 00409c40
// Address Range: [[00409c40, 00409c74]]
// Convention: unknown
// Signature: void FUN_00409c40(undefined4 param_1,undefined4 param_2,undefined4 param_3)

#include "nocturne.h"

void FUN_00409c40(uint param_1,uint param_2,uint param_3)

{
  int iVar1;
  
  iVar1 = FUN_004ae6c0(param_1);
  if (iVar1 != 0) {
    return;
  }
  FUN_004cee30(0x01D22E44,param_1,param_2,param_3,0);
  return;
}
