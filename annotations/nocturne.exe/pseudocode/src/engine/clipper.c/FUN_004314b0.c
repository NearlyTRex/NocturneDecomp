// Name: FUN_004314b0
// Address: 004314b0
// Address Range: [[004314b0, 004314fe]]
// Convention: unknown
// Signature: undefined * FUN_004314b0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte * FUN_004314b0(void)

{
  int iVar1;
  
  if (0xb < DAT_00767b38) {
    _DAT_01cc4800 = "..\\engine\\clipper.c";
    _DAT_01cc4804 = 0x5e;
    FUN_004c8440("Ran out of clipped verts!");
  }
  iVar1 = DAT_00767b38 * 0x30;
  DAT_00767b38 = DAT_00767b38 + 1;
  return &DAT_007678f8 + iVar1;
}
