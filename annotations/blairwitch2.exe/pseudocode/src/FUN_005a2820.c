// Name: FUN_005a2820
// Address: 005a2820
// Address Range: [[005a2820, 005a2895]]
// Convention: unknown
// Signature: void FUN_005a2820(int param_1)

#include "nocturne.h"

void FUN_005a2820(int param_1)

{
  int iVar1;
  int iVar2;
  
  FUN_0059e6a0(param_1);
  iVar1 = FUN_00547890(param_1 + 0x2b4);
  iVar2 = FUN_00540e80(iVar1,"Bip01 L Finger0",1);
  *(int *)(param_1 + 0x11854) = iVar2;
  *(uint *)(param_1 + 0x11850) = *(uint *)(iVar1 + 0x1d21c + iVar2 * 0x24);
  iVar1 = FUN_005b8c30(param_1 + 0x2514,"SM_TWIG.DFM");
  if (iVar1 != 0) {
    return;
  }
  *(uint *)(param_1 + 0x11388) = 6;
  return;
}
