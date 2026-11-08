// Name: FUN_00478fb0
// Address: 00478fb0
// Address Range: [[00478fb0, 00478ffb]]
// Convention: unknown
// Signature: undefined4 FUN_00478fb0(undefined4 param_1,undefined4 param_2)

#include "nocturne.h"

uint FUN_00478fb0(uint param_1,uint param_2)

{
  int iVar1;
  byte local_214 [516];
  uint local_10;
  
  FUN_00478e20(local_214,param_1,param_2);
  iVar1 = FUN_00478e90(local_214);
  if (iVar1 != 0) {
    return local_10;
  }
  return 0xffffffff;
}
