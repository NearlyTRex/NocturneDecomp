// Name: FUN_00493070
// Address: 00493070
// Address Range: [[00493070, 004930ba]]
// Convention: unknown
// Signature: void FUN_00493070(int param_1)

#include "nocturne.h"

void FUN_00493070(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x138);
  iVar2 = *(int *)(param_1 + 0x134);
  if (iVar1 < iVar2) {
    FUN_00493000(param_1,iVar1,iVar2);
    *(uint *)(param_1 + 0x134) = *(uint *)(param_1 + 0x138);
    return;
  }
  if (iVar1 <= iVar2) {
    return;
  }
  FUN_00493000(param_1,iVar2,iVar1);
  *(uint *)(param_1 + 0x138) = *(uint *)(param_1 + 0x134);
  return;
}
