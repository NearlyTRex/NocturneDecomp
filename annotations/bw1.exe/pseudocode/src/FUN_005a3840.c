// Name: FUN_005a3840
// Address: 005a3840
// Address Range: [[005a3840, 005a3860]]
// Convention: unknown
// Signature: void FUN_005a3840(int param_1)

#include "nocturne.h"

void FUN_005a3840(int param_1)

{
  uint uVar1;
  uint uVar2;
  uint *unaff_ESI;
  
  uVar1 = *(uint *)(param_1 + 0x864);
  uVar2 = *(uint *)(param_1 + 0x868);
  *unaff_ESI = *(uint *)(param_1 + 0x860);
  unaff_ESI[1] = uVar1;
  unaff_ESI[2] = uVar2;
  return;
}
