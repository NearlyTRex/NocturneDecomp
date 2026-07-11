// Name: FUN_0046f250
// Address: 0046f250
// Address Range: [[0046f250, 0046f29a]]
// Convention: unknown
// Signature: void FUN_0046f250(int param_1)

#include "nocturne.h"

void FUN_0046f250(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x138);
  iVar2 = *(int *)(param_1 + 0x134);
  if (iVar1 < iVar2) {
    FUN_0046f1e0(param_1,iVar1,iVar2);
    *(uint *)(param_1 + 0x134) = *(uint *)(param_1 + 0x138);
    return;
  }
  if (iVar1 <= iVar2) {
    return;
  }
  FUN_0046f1e0(param_1,iVar2,iVar1);
  *(uint *)(param_1 + 0x138) = *(uint *)(param_1 + 0x134);
  return;
}
