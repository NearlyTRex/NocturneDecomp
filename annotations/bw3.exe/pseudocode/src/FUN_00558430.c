// Name: FUN_00558430
// Address: 00558430
// Address Range: [[00558430, 005584bd]]
// Convention: unknown
// Signature: int FUN_00558430(void)

#include "nocturne.h"

int FUN_00558430(void)

{
  int iVar1;
  int iVar2;
  
  if (-1 < DAT_00604238) {
    return DAT_00604238;
  }
  FUN_00558e90();
  FUN_00556fd0();
  DAT_00604238 = 0;
  iVar2 = 0;
  do {
    iVar1 = FUN_0055e4a0(iVar2,DAT_00604238 * 0x118 + 0x2cf29c0);
    if (iVar1 == 0) break;
    DAT_00604238 = DAT_00604238 + 1;
    iVar2 = iVar2 + 1;
  } while (DAT_00604238 < 8);
  iVar2 = 0;
  while ((DAT_00604238 < 8 &&
         (iVar1 = FUN_0055d3c0(iVar2,DAT_00604238 * 0x118 + 0x2cf29c0), iVar1 != 0))) {
    DAT_00604238 = DAT_00604238 + 1;
    iVar2 = iVar2 + 1;
  }
  return DAT_00604238;
}
