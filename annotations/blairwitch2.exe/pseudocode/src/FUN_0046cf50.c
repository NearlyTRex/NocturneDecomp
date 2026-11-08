// Name: FUN_0046cf50
// Address: 0046cf50
// Address Range: [[0046cf50, 0046cfd9]]
// Convention: unknown
// Signature: void FUN_0046cf50(int param_1)

#include "nocturne.h"

void FUN_0046cf50(int param_1)

{
  uint uVar1;
  
  FUN_0044fd00(param_1 + 0x2b4);
  *(uint *)(param_1 + 0x448) = 0;
  *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x454);
  *(uint *)(param_1 + 0x24) = *(uint *)(param_1 + 0x458);
  *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x45c);
  uVar1 = FUN_0040cf60(*(uint *)(param_1 + 0x43c),*(uint *)(param_1 + 0x440));
  *(uint *)(param_1 + 0x438) = uVar1;
  FUN_0044fd70(0x1bd3848,"stalrock.kfm");
  FUN_0044fd00(0x1bd3848);
  *(uint *)(param_1 + 0x494) = 0;
  return;
}
