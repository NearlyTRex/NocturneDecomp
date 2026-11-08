// Name: FUN_0045f490
// Address: 0045f490
// Address Range: [[0045f490, 0045f4c0]]
// Convention: unknown
// Signature: void FUN_0045f490(int param_1)

#include "nocturne.h"

void FUN_0045f490(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x1cc0) * *(int *)(param_1 + 0x1cc4);
  iVar2 = iVar1 >> 0x1f;
  FUN_00495ec0((int)((iVar1 + iVar2 * -8) - (uint)(iVar2 << 2 < 0)) >> 3);
  return;
}
