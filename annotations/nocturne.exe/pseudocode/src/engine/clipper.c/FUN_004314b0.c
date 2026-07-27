// Name: engine_clipper.c_FUN_004314b0
// Address: 004314b0
// Address Range: [[004314b0, 004314fe]]
// Convention: unknown
// Signature: undefined * engine_clipper_c_FUN_004314b0(void)

#include "nocturne.h"

byte * engine_clipper_c_FUN_004314b0(void)

{
  int iVar1;
  
  if (0xb < DAT_00767b38) {
    PTR_01cc4800 = "..\\engine\\clipper.c";
    INT_01cc4804 = 0x5e;
    core_main_c_FUN_004c8440("Ran out of clipped verts!");
  }
  iVar1 = DAT_00767b38 * 0x30;
  DAT_00767b38 = DAT_00767b38 + 1;
  return &DAT_007678f8 + iVar1;
}
