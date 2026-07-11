// Name: FUN_00528320
// Address: 00528320
// Address Range: [[00528320, 00528409]]
// Convention: unknown
// Signature: int FUN_00528320(void)

#include "nocturne.h"

int FUN_00528320(void)

{
  int iVar1;
  int iVar2;
  byte auStack_468 [256];
  int local_368;
  int local_358;
  int local_354;
  byte local_350 [256];
  int local_250;
  byte local_238 [264];
  int local_130;
  byte local_120 [256];
  int local_20;
  int local_c;
  
  iVar1 = FUN_00528230();
  if (iVar1 < 1) {
    return -1;
  }
  iVar2 = 0;
  if (0 < iVar1) {
    do {
      FUN_005282c0(iVar2,local_238);
      if (local_130 != 0) {
        return iVar2;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar1);
  }
  iVar2 = 0;
  if (0 < iVar1) {
    do {
      FUN_005282c0(iVar2,auStack_468);
      if (((local_368 == 1) && (local_358 != 0)) && (local_354 == 0)) {
        return iVar2;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar1);
  }
  iVar2 = 0;
  if (0 < iVar1) {
    do {
      FUN_005282c0(iVar2,local_120);
      if ((local_20 == 1) && (local_c == 0)) {
        return iVar2;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar1);
  }
  iVar2 = 0;
  if (0 < iVar1) {
    do {
      FUN_005282c0(iVar2,local_350);
      if (local_250 == 0) {
        return iVar2;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar1);
  }
  return 0;
}
