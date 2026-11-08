// Name: FUN_0047ab80
// Address: 0047ab80
// Address Range: [[0047ab80, 0047abca]]
// Convention: unknown
// Signature: void FUN_0047ab80(int param_1)

#include "nocturne.h"

void FUN_0047ab80(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x138);
  iVar2 = *(int *)(param_1 + 0x134);
  if (iVar1 < iVar2) {
    FUN_0047ab10(param_1,iVar1,iVar2);
    *(uint *)(param_1 + 0x134) = *(uint *)(param_1 + 0x138);
    return;
  }
  if (iVar1 <= iVar2) {
    return;
  }
  FUN_0047ab10(param_1,iVar2,iVar1);
  *(uint *)(param_1 + 0x138) = *(uint *)(param_1 + 0x134);
  return;
}
