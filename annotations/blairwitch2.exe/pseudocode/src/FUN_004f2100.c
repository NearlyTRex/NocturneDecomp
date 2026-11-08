// Name: FUN_004f2100
// Address: 004f2100
// Address Range: [[004f2100, 004f2117]]
// Convention: unknown
// Signature: void FUN_004f2100(undefined4 param_1)

#include "nocturne.h"

void FUN_004f2100(uint param_1)

{
  int iVar1;
  
  iVar1 = FUN_005180b0(param_1);
  *(uint *)(iVar1 + 0x2b0) = 0x5fa034;
  return;
}
