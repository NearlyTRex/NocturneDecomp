// Name: FUN_004a3280
// Address: 004a3280
// Address Range: [[004a3280, 004a32bc]]
// Convention: unknown
// Signature: void FUN_004a3280(int param_1)

#include "nocturne.h"

void FUN_004a3280(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00480d20(param_1 + 0x148);
  *(byte *)(iVar1 + -0x108) = 0;
  *(uint *)(iVar1 + -4) = 0;
  *(uint *)(iVar1 + -8) = 0xffffffff;
  *(uint *)(iVar1 + 0x10) = 0xffffffff;
  *(byte *)(iVar1 + -0x148) = 0;
  return;
}
