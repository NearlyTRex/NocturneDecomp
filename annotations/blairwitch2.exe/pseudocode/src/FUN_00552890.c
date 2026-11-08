// Name: FUN_00552890
// Address: 00552890
// Address Range: [[00552890, 0055291d]]
// Convention: unknown
// Signature: int FUN_00552890(void)

#include "nocturne.h"

int FUN_00552890(void)

{
  int iVar1;
  int iVar2;
  
  if (-1 < DAT_0061bca8) {
    return DAT_0061bca8;
  }
  FUN_005532f0();
  FUN_00551440();
  DAT_0061bca8 = 0;
  iVar2 = 0;
  do {
    iVar1 = FUN_00558940(iVar2,DAT_0061bca8 * 0x118 + 0x26485c0);
    if (iVar1 == 0) break;
    DAT_0061bca8 = DAT_0061bca8 + 1;
    iVar2 = iVar2 + 1;
  } while (DAT_0061bca8 < 8);
  iVar2 = 0;
  while ((DAT_0061bca8 < 8 &&
         (iVar1 = FUN_00557860(iVar2,DAT_0061bca8 * 0x118 + 0x26485c0), iVar1 != 0))) {
    DAT_0061bca8 = DAT_0061bca8 + 1;
    iVar2 = iVar2 + 1;
  }
  return DAT_0061bca8;
}
