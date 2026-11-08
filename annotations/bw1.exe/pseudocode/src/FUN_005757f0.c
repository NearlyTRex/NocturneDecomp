// Name: FUN_005757f0
// Address: 005757f0
// Address Range: [[005757f0, 00575867]]
// Convention: unknown
// Signature: int FUN_005757f0(void)

#include "nocturne.h"

int FUN_005757f0(void)

{
  int iVar1;
  int iVar2;
  byte auStack_218 [256];
  int local_118;
  byte local_110 [256];
  int local_10;
  
  iVar1 = FUN_00575730();
  if (iVar1 < 1) {
    return -1;
  }
  iVar2 = 0;
  if (0 < iVar1) {
    do {
      FUN_00575790(iVar2,local_110);
      if (local_10 == 1) {
        return iVar2;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar1);
  }
  iVar2 = 0;
  if (0 < iVar1) {
    do {
      FUN_00575790(iVar2,auStack_218);
      if (local_118 == 0) {
        return iVar2;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar1);
  }
  return 0;
}
