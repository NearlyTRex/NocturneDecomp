// Name: FUN_004b1c10
// Address: 004b1c10
// Address Range: [[004b1c10, 004b1c3d]]
// Convention: unknown
// Signature: int FUN_004b1c10(int param_1)

#include "nocturne.h"

int FUN_004b1c10(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00468860(param_1 + 4);
  iVar1 = FUN_0041da00(iVar1 + 0x17c);
  *(uint *)(iVar1 + 0x25c) = 0;
  return iVar1 + -0x180;
}
