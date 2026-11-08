// Name: FUN_00552d00
// Address: 00552d00
// Address Range: [[00552d00, 00552d5d]]
// Convention: unknown
// Signature: int FUN_00552d00(void)

#include "nocturne.h"

int FUN_00552d00(void)

{
  int iVar1;
  int iVar2;
  
  if (-1 < DAT_0061bcc8) {
    return DAT_0061bcc8;
  }
  FUN_005532f0();
  FUN_00551440();
  DAT_0061bcc8 = 0;
  iVar2 = 0;
  do {
    iVar1 = FUN_00558a30(iVar2,DAT_0061bcc8 * 0x108 + 0x2649028);
    if (iVar1 == 0) {
      return DAT_0061bca8;
    }
    DAT_0061bcc8 = DAT_0061bcc8 + 1;
    iVar2 = iVar2 + 1;
  } while (DAT_0061bcc8 < 8);
  return DAT_0061bca8;
}
