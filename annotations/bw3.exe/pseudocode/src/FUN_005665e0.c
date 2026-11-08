// Name: FUN_005665e0
// Address: 005665e0
// Address Range: [[005665e0, 00566621]]
// Convention: unknown
// Signature: void FUN_005665e0(int param_1)

#include "nocturne.h"

void FUN_005665e0(int param_1)

{
  FUN_005a28f0(param_1,0,0x1dc8);
  *(ushort *)(param_1 + 0x200) = 0x100;
  *(uint *)(param_1 + 0x208) = 0;
  *(ushort *)(param_1 + 0x204) = 1;
  *(byte *)(param_1 + 0x208) = *(byte *)(param_1 + 0x208) | 1;
  return;
}
