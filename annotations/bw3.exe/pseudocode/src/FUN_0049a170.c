// Name: FUN_0049a170
// Address: 0049a170
// Address Range: [[0049a170, 0049a1b5]]
// Convention: unknown
// Signature: void FUN_0049a170(void)

#include "nocturne.h"

void FUN_0049a170(void)

{
  int iVar1;
  int iVar2;
  byte local_6c [100];
  
  iVar1 = 0x1c73c88;
  iVar2 = 0;
  do {
    iVar2 = iVar2 + 1;
    FUN_005a28c0(local_6c,"leaf%d.kfm",iVar2);
    FUN_004625f0(iVar1,local_6c);
    FUN_00462580(iVar1);
    iVar1 = iVar1 + 0x17c;
  } while (iVar2 < 4);
  return;
}
