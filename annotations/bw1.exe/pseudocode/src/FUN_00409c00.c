// Name: FUN_00409c00
// Address: 00409c00
// Address Range: [[00409c00, 00409c34]]
// Convention: unknown
// Signature: void FUN_00409c00(undefined4 param_1,undefined4 param_2,undefined4 param_3)

#include "nocturne.h"

void FUN_00409c00(uint param_1,uint param_2,uint param_3)

{
  int iVar1;
  
  iVar1 = FUN_004c0970(param_1);
  if (iVar1 != 0) {
    return;
  }
  FUN_004e64d0(0x01CD0E3C,param_1,param_2,param_3,0);
  return;
}
