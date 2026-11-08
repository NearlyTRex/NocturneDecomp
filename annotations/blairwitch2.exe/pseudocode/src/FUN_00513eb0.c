// Name: FUN_00513eb0
// Address: 00513eb0
// Address Range: [[00513eb0, 00513f20]]
// Convention: unknown
// Signature: void FUN_00513eb0(int param_1)

#include "nocturne.h"

void FUN_00513eb0(int param_1)

{
  uint uVar1;
  
  FUN_005b77c0(param_1 + 0x9c70,0x7f,40000);
  *(uint *)(param_1 + 0x138bc) = 0;
  *(uint *)(param_1 + 0x138c8) = 0;
  *(uint *)(param_1 + 0x138c4) = *(uint *)(param_1 + 0x138c8);
  *(uint *)(param_1 + 0x138c0) = *(uint *)(param_1 + 0x138c4);
  *(uint *)(param_1 + 0x138c0) = 0x7149f2ca;
  *(uint *)(param_1 + 0x138d4) = 0;
  *(uint *)(param_1 + 0x138d0) = *(uint *)(param_1 + 0x138d4);
  *(uint *)(param_1 + 0x138cc) = *(uint *)(param_1 + 0x138d0);
  uVar1 = FUN_005b849c();
  *(uint *)(param_1 + 0x138d8) = uVar1 & 0x3fff;
  return;
}
