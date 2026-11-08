// Name: FUN_0049f380
// Address: 0049f380
// Address Range: [[0049f380, 0049f407]]
// Convention: unknown
// Signature: void FUN_0049f380(int param_1)

#include "nocturne.h"

void FUN_0049f380(int param_1)

{
  byte *puVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
    if (param_1 == 2) {
      puVar1 = &DAT_005fd984 + iVar2;
    }
    else if (param_1 == 3) {
      puVar1 = &DAT_005fda14 + iVar2;
    }
    else if (param_1 == 4) {
      puVar1 = &DAT_005fdaa4 + iVar2;
    }
    else if (param_1 == 5) {
      puVar1 = &DAT_005fdb34 + iVar2;
    }
    else {
      puVar1 = &DAT_005fd8f4 + iVar2;
    }
    FUN_0046e5e0(DAT_005f2afc,puVar1);
    iVar2 = iVar2 + 0x18;
  } while (iVar2 != 0x90);
  return;
}
