// Name: FUN_0047bc10
// Address: 0047bc10
// Address Range: [[0047bc10, 0047bc5a]]
// Convention: unknown
// Signature: void FUN_0047bc10(int param_1)

#include "nocturne.h"

void FUN_0047bc10(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x138);
  iVar2 = *(int *)(param_1 + 0x134);
  if (iVar1 < iVar2) {
    FUN_0047bba0(param_1,iVar1,iVar2);
    *(uint *)(param_1 + 0x134) = *(uint *)(param_1 + 0x138);
    return;
  }
  if (iVar1 <= iVar2) {
    return;
  }
  FUN_0047bba0(param_1,iVar2,iVar1);
  *(uint *)(param_1 + 0x138) = *(uint *)(param_1 + 0x134);
  return;
}
