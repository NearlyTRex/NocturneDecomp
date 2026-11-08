// Name: FUN_005b6270
// Address: 005b6270
// Address Range: [[005b6270, 005b62a9]]
// Convention: unknown
// Signature: void FUN_005b6270(int param_1)

#include "nocturne.h"

void FUN_005b6270(int param_1)

{
  uint uVar1;
  uint uVar2;
  uint *unaff_ESI;
  
  uVar1 = *(uint *)(param_1 + 0x1c);
  uVar2 = *(uint *)(param_1 + 0x2c);
  *unaff_ESI = *(uint *)(param_1 + 0xc);
  unaff_ESI[1] = uVar1;
  unaff_ESI[2] = uVar2;
  return;
}
