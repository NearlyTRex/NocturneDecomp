// Name: FUN_005503f0
// Address: 005503f0
// Address Range: [[005503f0, 0055044e]]
// Convention: unknown
// Signature: void FUN_005503f0(void)

#include "nocturne.h"

void FUN_005503f0(void)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0x272af5c;
  iVar1 = 0;
  do {
    if (*(int *)(&DAT_02802f5c + iVar1) == 0) {
      FUN_00548370(iVar2);
    }
    iVar1 = iVar1 + 4;
    iVar2 = iVar2 + 0x3600;
  } while (iVar1 != 0x100);
  iVar2 = 0x280305c;
  iVar1 = 0;
  do {
    if (*(int *)(&DAT_02cd28bc + iVar1) == 0) {
      FUN_00547b90(iVar2,1);
    }
    iVar1 = iVar1 + 4;
    iVar2 = iVar2 + 0x1ec9c;
  } while (iVar1 != 0xa0);
  return;
}
