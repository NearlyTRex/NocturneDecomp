// Name: FUN_005a4c00
// Address: 005a4c00
// Address Range: [[005a4c00, 005a4c4e]]
// Convention: unknown
// Signature: void FUN_005a4c00(int param_1)

#include "nocturne.h"

void FUN_005a4c00(int param_1)

{
  uint uVar1;
  uint uVar2;
  
  FUN_005a4870(param_1);
  uVar1 = FUN_00547890(param_1 + 0x2b4);
  uVar2 = FUN_00540e80(uVar1,"Bip01 gun1",1);
  *(uint *)(param_1 + 0x11858) = uVar2;
  uVar1 = FUN_00540e80(uVar1,"Bip01 gun12",1);
  *(uint *)(param_1 + 0x1185c) = uVar1;
  return;
}
