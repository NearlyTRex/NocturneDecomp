// Name: FUN_00550450
// Address: 00550450
// Address Range: [[00550450, 005504df]]
// Convention: unknown
// Signature: void FUN_00550450(undefined4 param_1)

#include "nocturne.h"

void FUN_00550450(uint param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  byte *puVar4;
  int iVar5;
  
  iVar3 = 0;
  puVar4 = &DAT_0272e50c;
  do {
    iVar1 = FUN_005a3260(puVar4,param_1);
    if (iVar1 == 0) {
      iVar5 = 0x2820e84;
      *(uint *)(&DAT_02802f5c + iVar3 * 4) = 1;
      iVar1 = 0;
      do {
        iVar2 = FUN_005a3260(iVar3 * 0x3600 + 0x272e4b8,iVar5);
        if (iVar2 == 0) {
          *(uint *)(&DAT_02cd28bc + iVar1 * 4) = 1;
          return;
        }
        iVar1 = iVar1 + 1;
        iVar5 = iVar5 + 0x1ec9c;
      } while (iVar1 < 0x28);
      return;
    }
    iVar3 = iVar3 + 1;
    puVar4 = puVar4 + 0x3600;
  } while (iVar3 < 0x40);
  return;
}
