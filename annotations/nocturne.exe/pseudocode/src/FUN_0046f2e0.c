// Name: FUN_0046f2e0
// Address: 0046f2e0
// Address Range: [[0046f2e0, 0046f32c]]
// Convention: unknown
// Signature: void FUN_0046f2e0(int param_1)

#include "nocturne.h"

void FUN_0046f2e0(int param_1)

{
  byte *puVar1;
  byte uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  uVar4 = 0x01BCD074;
  iVar3 = *(int *)(param_1 + 0x134);
  iVar6 = *(int *)(param_1 + 0x138);
  if (iVar6 != iVar3) {
    iVar5 = iVar3;
    if (iVar3 < iVar6) {
      iVar5 = iVar6;
      iVar6 = iVar3;
    }
    puVar1 = (byte *)(param_1 + iVar5);
    uVar2 = *puVar1;
    *puVar1 = 0;
    FUN_00472d10(uVar4,param_1 + iVar6);
    *puVar1 = uVar2;
  }
  return;
}
