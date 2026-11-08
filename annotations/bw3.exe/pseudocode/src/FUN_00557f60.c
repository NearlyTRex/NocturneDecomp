// Name: FUN_00557f60
// Address: 00557f60
// Address Range: [[00557f60, 0055800d]]
// Convention: unknown
// Signature: void FUN_00557f60(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00557f60(void)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
    FUN_00556c90(iVar2,0x3f800000);
    FUN_00556db0(iVar2,1);
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x20);
  FUN_00556c90(1,_DAT_005e4840 * (float)_DAT_005d3aa2);
  FUN_00557140(0x3f800000);
  FUN_00557020(0,0,0,0,0,0);
  FUN_00557080(0x3f800000,0,0,0,0x3f800000,0,0,0,0x3f800000);
  FUN_00557100(0,0,0);
  uVar1 = FUN_00558840();
  FUN_00558640(uVar1);
  uVar1 = FUN_00558b10();
  FUN_005589e0(uVar1);
  return;
}
