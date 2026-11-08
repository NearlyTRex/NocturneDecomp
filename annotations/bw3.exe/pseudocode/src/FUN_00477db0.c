// Name: FUN_00477db0
// Address: 00477db0
// Address Range: [[00477db0, 00477dcd]]
// Convention: unknown
// Signature: void FUN_00477db0(int param_1)

#include "nocturne.h"

void FUN_00477db0(int param_1)

{
  uint uVar1;
  uint uVar2;
  uint *unaff_ESI;
  
  uVar1 = *(uint *)(param_1 + 0x20);
  uVar2 = *(uint *)(param_1 + 0x24);
  *unaff_ESI = *(uint *)(param_1 + 0x1c);
  unaff_ESI[1] = uVar1;
  unaff_ESI[2] = uVar2;
  return;
}
