// Name: FUN_0047a0a0
// Address: 0047a0a0
// Address Range: [[0047a0a0, 0047a10d]]
// Convention: unknown
// Signature: undefined4 FUN_0047a0a0(int param_1)

#include "nocturne.h"

uint FUN_0047a0a0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0058a290(param_1);
  if (iVar1 == 0) {
    return 0;
  }
  FUN_0049e560(0x01C3DEB4,param_1 + 0x20,param_1 + 0x30,(uint *)(param_1 + 0x6d8),
               *(uint *)(param_1 + 0x6d4),*(uint *)(param_1 + 0x6e4));
  *(uint *)(param_1 + 0x6e4) = 0;
  *(uint *)(param_1 + 0x6d4) = 0xbf800000;
  *(uint *)(param_1 + 0x6e0) = 0;
  *(uint *)(param_1 + 0x6dc) = *(uint *)(param_1 + 0x6e0);
  *(uint *)(param_1 + 0x6d8) = *(uint *)(param_1 + 0x6dc);
  return 1;
}
