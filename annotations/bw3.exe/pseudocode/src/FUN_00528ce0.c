// Name: FUN_00528ce0
// Address: 00528ce0
// Address Range: [[00528ce0, 00528d16]]
// Convention: unknown
// Signature: int FUN_00528ce0(int param_1)

#include "nocturne.h"

int FUN_00528ce0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00481f20(param_1 + 0x34);
  *(uint *)(iVar1 + -8) = 0;
  *(uint *)(iVar1 + -4) = 0;
  *(uint *)(iVar1 + -0x14) = 0;
  *(uint *)(iVar1 + -0x10) = 0;
  *(uint *)(iVar1 + -0xc) = 0;
  return iVar1 + -0x34;
}
