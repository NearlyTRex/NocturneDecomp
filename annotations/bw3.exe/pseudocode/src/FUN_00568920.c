// Name: FUN_00568920
// Address: 00568920
// Address Range: [[00568920, 00568941]]
// Convention: unknown
// Signature: void FUN_00568920(undefined4 param_1)

#include "nocturne.h"

void FUN_00568920(uint param_1)

{
  int iVar1;
  
  iVar1 = FUN_0041efe0(param_1);
  *(uint *)(iVar1 + 0x154) = 0x5e4ef4;
  *(uint *)(iVar1 + 0x6e8) = 0;
  return;
}
