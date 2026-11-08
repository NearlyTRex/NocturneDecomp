// Name: FUN_0047ac10
// Address: 0047ac10
// Address Range: [[0047ac10, 0047ac5c]]
// Convention: unknown
// Signature: void FUN_0047ac10(int param_1)

#include "nocturne.h"

void FUN_0047ac10(int param_1)

{
  byte *puVar1;
  byte uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  uVar4 = 0x01C25594;
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
    FUN_0047fc30(uVar4,param_1 + iVar6);
    *puVar1 = uVar2;
  }
  return;
}
