// Name: FUN_0054b030
// Address: 0054b030
// Address Range: [[0054b030, 0054b055]]
// Convention: unknown
// Signature: undefined4 FUN_0054b030(undefined4 param_1,undefined4 param_2)

#include "nocturne.h"

uint FUN_0054b030(uint param_1,uint param_2)

{
  uint uVar1;
  
  if (*(int *)(0x01C775EC + 0x204) == 0) {
    return 0;
  }
  uVar1 = FUN_00554260(param_1,param_2);
  return uVar1;
}
