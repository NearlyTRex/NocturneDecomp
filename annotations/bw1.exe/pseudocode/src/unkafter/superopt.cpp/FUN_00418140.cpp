// Name: unkafter_superopt.cpp_FUN_00418140
// Address: 00418140
// Address Range: [[00418140, 0041821d]]
// Convention: unknown
// Signature: void unkafter_superopt_cpp_FUN_00418140(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void unkafter_superopt_cpp_FUN_00418140(int param_1)

{
  int iVar1;
  int iVar2;
  
  engine_special_cpp_clearScreen_FUN_0057dc40();
  engine_alphabit_cpp_CAlphaBitmap_display_FUN_0040d4b0((CAlphaBitmap *)(param_1 + 4),0,0,0xffff);
  iVar1 = param_1;
  for (iVar2 = 0; iVar2 < *(int *)(param_1 + 0x20) + 1; iVar2 = iVar2 + 1) {
    if (*(int *)(iVar1 + 0x98) == 1) {
      engine_alphabit_cpp_CAlphaBitmap_display_FUN_0040d4b0
                ((CAlphaBitmap *)(iVar2 * 0x2c + param_1 + 0x70),*(int *)(iVar1 + 0x88),
                 *(int *)(iVar1 + 0x8c),0xffff);
    }
    iVar1 = iVar1 + 0x2c;
  }
  if (*(int *)(param_1 + 0x34) != 0) {
    engine_alphabit_cpp_CAlphaBitmap_display_FUN_0040d4b0
              (CAlphaBitmap_ARRAY_007c39d4 + 4,_DAT_01c4353c - *(int *)(param_1 + 0x918),
               _DAT_01c43540 - *(int *)(param_1 + 0x92c),0xffff);
  }
  iVar1 = *(int *)(param_1 + 0x18);
  engine_alphabit_cpp_CAlphaBitmap_display_FUN_0040d4b0
            (CAlphaBitmap_ARRAY_007c39d4 + iVar1,
             _DAT_01c4353c - *(int *)(param_1 + 0x908 + iVar1 * 4),
             _DAT_01c43540 - *(int *)(param_1 + 0x91c + iVar1 * 4),0xffff);
  return;
}
