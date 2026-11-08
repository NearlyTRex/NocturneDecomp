// Name: FUN_004af120
// Address: 004af120
// Address Range: [[004af120, 004af165]]
// Convention: unknown
// Signature: void FUN_004af120(void)

#include "nocturne.h"

void FUN_004af120(void)

{
  int iVar1;
  int iVar2;
  byte local_6c [100];
  
  iVar1 = 0x1c576a8;
  iVar2 = 0;
  do {
    iVar2 = iVar2 + 1;
    FUN_005bfb40(local_6c,"leaf%d.kfm",iVar2);
    FUN_00468950(iVar1,local_6c);
    FUN_004688e0(iVar1);
    iVar1 = iVar1 + 0x17c;
  } while (iVar2 < 4);
  return;
}
