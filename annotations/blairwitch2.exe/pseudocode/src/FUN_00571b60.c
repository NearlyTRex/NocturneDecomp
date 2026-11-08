// Name: FUN_00571b60
// Address: 00571b60
// Address Range: [[00571b60, 00571bc4]]
// Convention: unknown
// Signature: void FUN_00571b60(int param_1)

#include "nocturne.h"

void FUN_00571b60(int param_1)

{
  uint uVar1;
  uint uVar2;
  
  FUN_00510510(param_1);
  uVar1 = FUN_00547890(param_1 + 0x2b4);
  uVar2 = FUN_00540e80(uVar1,"Bip01 L Hand",1);
  *(uint *)(param_1 + 0x24348) = uVar2;
  uVar1 = FUN_00540e80(uVar1,"Bip01 R Hand",1);
  *(uint *)(param_1 + 0x261c) = 0;
  *(uint *)(param_1 + 0x2434c) = uVar1;
  *(uint *)(param_1 + 0x2618) = *(uint *)(param_1 + 0x24348);
  return;
}
