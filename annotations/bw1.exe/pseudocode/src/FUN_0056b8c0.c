// Name: FUN_0056b8c0
// Address: 0056b8c0
// Address Range: [[0056b8c0, 0056b94f]]
// Convention: unknown
// Signature: void FUN_0056b8c0(undefined4 param_1)

#include "nocturne.h"

void FUN_0056b8c0(uint param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  byte *puVar4;
  int iVar5;
  
  iVar3 = 0;
  puVar4 = &DAT_026bb86c;
  do {
    iVar1 = FUN_005c04e0(puVar4,param_1);
    if (iVar1 == 0) {
      iVar5 = 0x27ae1e4;
      *(uint *)(&DAT_027902bc + iVar3 * 4) = 1;
      iVar1 = 0;
      do {
        iVar2 = FUN_005c04e0(iVar3 * 0x3600 + 0x26bb818,iVar5);
        if (iVar2 == 0) {
          *(uint *)(&DAT_02c5fc1c + iVar1 * 4) = 1;
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
