// Name: FUN_00549210
// Address: 00549210
// Address Range: [[00549210, 0054929f]]
// Convention: unknown
// Signature: void FUN_00549210(undefined4 param_1)

#include "nocturne.h"

void FUN_00549210(uint param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  byte *puVar4;
  int iVar5;
  
  iVar3 = 0;
  puVar4 = &DAT_020cfa64;
  do {
    iVar1 = FUN_005b8130(puVar4,param_1);
    if (iVar1 == 0) {
      iVar5 = 0x219529c;
      *(uint *)(&DAT_02177ff4 + iVar3 * 4) = 1;
      iVar1 = 0;
      do {
        iVar2 = FUN_005b8130(iVar3 * 0x2ac0 + 0x20cfa10,iVar5);
        if (iVar2 == 0) {
          *(uint *)(&DAT_02628554 + iVar1 * 4) = 1;
          return;
        }
        iVar1 = iVar1 + 1;
        iVar5 = iVar5 + 0x1e01c;
      } while (iVar1 < 0x28);
      return;
    }
    iVar3 = iVar3 + 1;
    puVar4 = puVar4 + 0x2ac0;
  } while (iVar3 < 0x40);
  return;
}
