// Name: FUN_00460aa0
// Address: 00460aa0
// Address Range: [[00460aa0, 00460aeb]]
// Convention: unknown
// Signature: undefined4 FUN_00460aa0(undefined4 param_1,undefined4 param_2)

#include "nocturne.h"

uint FUN_00460aa0(uint param_1,uint param_2)

{
  int iVar1;
  byte local_214 [516];
  uint local_10;
  
  FUN_00460910(local_214,param_1,param_2);
  iVar1 = FUN_00460980(local_214);
  if (iVar1 != 0) {
    return local_10;
  }
  return 0xffffffff;
}
