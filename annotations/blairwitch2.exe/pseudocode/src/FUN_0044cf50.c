// Name: FUN_0044cf50
// Address: 0044cf50
// Address Range: [[0044cf50, 0044cf80]]
// Convention: unknown
// Signature: void FUN_0044cf50(int param_1)

#include "nocturne.h"

void FUN_0044cf50(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x1cc0) * *(int *)(param_1 + 0x1cc4);
  iVar2 = iVar1 >> 0x1f;
  FUN_00492670((int)((iVar1 + iVar2 * -8) - (uint)(iVar2 << 2 < 0)) >> 3);
  return;
}
