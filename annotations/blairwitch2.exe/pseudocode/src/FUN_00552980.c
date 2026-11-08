// Name: FUN_00552980
// Address: 00552980
// Address Range: [[00552980, 00552a93]]
// Convention: unknown
// Signature: int FUN_00552980(void)

#include "nocturne.h"

int FUN_00552980(void)

{
  int iVar1;
  int iVar2;
  byte auStack_580 [264];
  int local_478;
  byte local_468 [256];
  int local_368;
  int local_354;
  byte local_350 [256];
  int local_250;
  byte local_238 [264];
  int local_130;
  byte local_120 [256];
  int local_20;
  int local_10;
  int local_c;
  
  iVar1 = FUN_00552890();
  if (iVar1 < 1) {
    return -1;
  }
  iVar2 = 0;
  if (0 < iVar1) {
    do {
      FUN_00552920(iVar2,auStack_580);
      if (1 < local_478) {
        return iVar2;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar1);
  }
  iVar2 = 0;
  if (0 < iVar1) {
    do {
      FUN_00552920(iVar2,local_238);
      if (0 < local_130) {
        return iVar2;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar1);
  }
  iVar2 = 0;
  if (0 < iVar1) {
    do {
      FUN_00552920(iVar2,local_120);
      if (((local_20 == 1) && (local_10 != 0)) && (local_c == 0)) {
        return iVar2;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar1);
  }
  iVar2 = 0;
  if (0 < iVar1) {
    do {
      FUN_00552920(iVar2,local_468);
      if ((local_368 == 1) && (local_354 == 0)) {
        return iVar2;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar1);
  }
  iVar2 = 0;
  if (0 < iVar1) {
    do {
      FUN_00552920(iVar2,local_350);
      if (local_250 == 0) {
        return iVar2;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar1);
  }
  return 0;
}
