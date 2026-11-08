// Name: FUN_0056b860
// Address: 0056b860
// Address Range: [[0056b860, 0056b8be]]
// Convention: unknown
// Signature: void FUN_0056b860(void)

#include "nocturne.h"

void FUN_0056b860(void)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0x26b82bc;
  iVar1 = 0;
  do {
    if (*(int *)(&DAT_027902bc + iVar1) == 0) {
      FUN_005637d0(iVar2);
    }
    iVar1 = iVar1 + 4;
    iVar2 = iVar2 + 0x3600;
  } while (iVar1 != 0x100);
  iVar2 = 0x27903bc;
  iVar1 = 0;
  do {
    if (*(int *)(&DAT_02c5fc1c + iVar1) == 0) {
      FUN_00562f70(iVar2,1);
    }
    iVar1 = iVar1 + 4;
    iVar2 = iVar2 + 0x1ec9c;
  } while (iVar1 != 0xa0);
  return;
}
