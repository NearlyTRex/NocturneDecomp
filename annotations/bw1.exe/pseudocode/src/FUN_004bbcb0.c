// Name: FUN_004bbcb0
// Address: 004bbcb0
// Address Range: [[004bbcb0, 004bbcec]]
// Convention: unknown
// Signature: void FUN_004bbcb0(int param_1)

#include "nocturne.h"

void FUN_004bbcb0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00499380(param_1 + 0x148);
  *(byte *)(iVar1 + -0x108) = 0;
  *(uint *)(iVar1 + -4) = 0;
  *(uint *)(iVar1 + -8) = 0xffffffff;
  *(uint *)(iVar1 + 0x10) = 0xffffffff;
  *(byte *)(iVar1 + -0x148) = 0;
  return;
}
