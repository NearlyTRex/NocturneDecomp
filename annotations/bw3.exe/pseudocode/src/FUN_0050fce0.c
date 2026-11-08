// Name: FUN_0050fce0
// Address: 0050fce0
// Address Range: [[0050fce0, 0050fd20]]
// Convention: unknown
// Signature: undefined4 FUN_0050fce0(undefined4 param_1,undefined4 param_2)

#include "nocturne.h"

uint FUN_0050fce0(uint param_1,uint param_2)

{
  uint uVar1;
  byte auStack_100 [256];
  
  FUN_00435010(param_2,auStack_100);
  uVar1 = FUN_0050fd30(param_1,auStack_100);
  return uVar1;
}
