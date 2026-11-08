// Name: FUN_00594a30
// Address: 00594a30
// Address Range: [[00594a30, 00594aaa]]
// Convention: unknown
// Signature: void FUN_00594a30(int param_1)

#include "nocturne.h"

void FUN_00594a30(int param_1)

{
  uint uVar1;
  uint uVar2;
  
  FUN_00531720(param_1);
  uVar1 = FUN_00569f30(param_1 + 0x158);
  uVar2 = FUN_005634f0(uVar1,"Bip01 L Hand",1);
  *(uint *)(param_1 + 0x1fab8) = uVar2;
  uVar1 = FUN_005634f0(uVar1,"Bip01 R Hand",1);
  *(uint *)(param_1 + 0x25ac) = 0;
  *(uint *)(param_1 + 0x2624) = 0;
  *(uint *)(param_1 + 0x1fabc) = uVar1;
  *(uint *)(param_1 + 0x25a8) = *(uint *)(param_1 + 0x1fab8);
  *(uint *)(param_1 + 0x2620) = *(uint *)(param_1 + 0x1fabc);
  return;
}
