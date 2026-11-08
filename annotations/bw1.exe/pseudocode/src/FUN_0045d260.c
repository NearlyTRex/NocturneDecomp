// Name: FUN_0045d260
// Address: 0045d260
// Address Range: [[0045d260, 0045d29e]]
// Convention: unknown
// Signature: void FUN_0045d260(int param_1)

#include "nocturne.h"

void FUN_0045d260(int param_1)

{
  uint uVar1;
  int iVar2;
  
  FUN_00408850(param_1);
  iVar2 = 0x01D2C900;
  *(uint *)(param_1 + 0xf8) = 0;
  uVar1 = *(uint *)(iVar2 + 0x1008);
  *(uint *)(param_1 + 0x184) = 0;
  *(uint *)(param_1 + 0x1f0) = 1;
  *(uint *)(param_1 + 0xfc) = uVar1;
  return;
}
