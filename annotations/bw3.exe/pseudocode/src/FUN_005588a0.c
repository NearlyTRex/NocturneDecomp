// Name: FUN_005588a0
// Address: 005588a0
// Address Range: [[005588a0, 005588fd]]
// Convention: unknown
// Signature: int FUN_005588a0(void)

#include "nocturne.h"

int FUN_005588a0(void)

{
  int iVar1;
  int iVar2;
  
  if (-1 < DAT_00604254) {
    return DAT_00604254;
  }
  FUN_00558e90();
  FUN_00556fd0();
  DAT_00604254 = 0;
  iVar2 = 0;
  do {
    iVar1 = FUN_0055e590(iVar2,DAT_00604254 * 0x108 + 0x2cf3428);
    if (iVar1 == 0) {
      return DAT_00604238;
    }
    DAT_00604254 = DAT_00604254 + 1;
    iVar2 = iVar2 + 1;
  } while (DAT_00604254 < 8);
  return DAT_00604238;
}
