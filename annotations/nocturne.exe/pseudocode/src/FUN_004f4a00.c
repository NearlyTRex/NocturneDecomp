// Name: FUN_004f4a00
// Address: 004f4a00
// Address Range: [[004f4a00, 004f4a40]]
// Convention: unknown
// Signature: undefined4 FUN_004f4a00(undefined4 param_1,undefined4 param_2)

#include "nocturne.h"

uint FUN_004f4a00(uint param_1,uint param_2)

{
  uint uVar1;
  byte auStack_100 [256];
  
  FUN_0042d3f0(param_2,auStack_100);
  uVar1 = FUN_004f4a50(param_1,auStack_100);
  return uVar1;
}
