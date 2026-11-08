// Name: FUN_00552dc0
// Address: 00552dc0
// Address Range: [[00552dc0, 00552e37]]
// Convention: unknown
// Signature: int FUN_00552dc0(void)

#include "nocturne.h"

int FUN_00552dc0(void)

{
  int iVar1;
  int iVar2;
  byte auStack_218 [256];
  int local_118;
  byte local_110 [256];
  int local_10;
  
  iVar1 = FUN_00552d00();
  if (iVar1 < 1) {
    return -1;
  }
  iVar2 = 0;
  if (0 < iVar1) {
    do {
      FUN_00552d60(iVar2,local_110);
      if (local_10 == 1) {
        return iVar2;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar1);
  }
  iVar2 = 0;
  if (0 < iVar1) {
    do {
      FUN_00552d60(iVar2,auStack_218);
      if (local_118 == 0) {
        return iVar2;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar1);
  }
  return 0;
}
