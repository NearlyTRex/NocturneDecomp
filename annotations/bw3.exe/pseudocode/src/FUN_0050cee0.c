// Name: FUN_0050cee0
// Address: 0050cee0
// Address Range: [[0050cee0, 0050cf50]]
// Convention: unknown
// Signature: void FUN_0050cee0(int param_1)

#include "nocturne.h"

void FUN_0050cee0(int param_1)

{
  uint uVar1;
  
  FUN_005a28f0(param_1 + 0x9c70,0x7f,40000);
  *(uint *)(param_1 + 0x138bc) = 0;
  *(uint *)(param_1 + 0x138c8) = 0;
  *(uint *)(param_1 + 0x138c4) = *(uint *)(param_1 + 0x138c8);
  *(uint *)(param_1 + 0x138c0) = *(uint *)(param_1 + 0x138c4);
  *(uint *)(param_1 + 0x138c0) = 0x7149f2ca;
  *(uint *)(param_1 + 0x138d4) = 0;
  *(uint *)(param_1 + 0x138d0) = *(uint *)(param_1 + 0x138d4);
  *(uint *)(param_1 + 0x138cc) = *(uint *)(param_1 + 0x138d0);
  uVar1 = FUN_005a35cc();
  *(uint *)(param_1 + 0x138d8) = uVar1 & 0x3fff;
  return;
}
