// Name: engine_ncursfx.cpp_FUN_004ee740
// Address: 004ee740
// Address Range: [[004ee740, 004ee8a5]]
// Convention: unknown
// Signature: void engine_ncursfx_cpp_FUN_004ee740(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void engine_ncursfx_cpp_FUN_004ee740(void)

{
  int iVar1;
  int in_stack_00000004;
  
  engine_alphabit_cpp_CAlphaBitmap_display_FUN_0040e710();
  if (*(int *)(in_stack_00000004 + 0x25c) != 0) {
    if (*(int *)(in_stack_00000004 + 0x25c) != 2) {
      engine_3d_c_setBlendMode_FUN_004083c0(1);
      iVar1 = *(int *)(in_stack_00000004 + 600) >> 0x1f;
      engine_alphabit_cpp_CAlphaBitmap_display_FUN_0040e710
                (in_stack_00000004 + 0xa0 +
                 ((int)((*(int *)(in_stack_00000004 + 600) + iVar1 * -0x10000) -
                       (uint)(iVar1 << 0xf < 0)) >> 0x10) * 0x14,_DAT_01bd1d8c + -0xd,
                 _DAT_01bd1d90 + -0xc,0x8000);
      engine_3d_c_setBlendMode_FUN_004083c0(0);
    }
    iVar1 = 7;
    *(int *)(in_stack_00000004 + 600) = *(int *)(in_stack_00000004 + 600) + _DAT_01bd1d80 * 0x20;
    if (*(int *)(in_stack_00000004 + 0x25c) == 2) {
      iVar1 = 0xf;
    }
    if (iVar1 * 0x10000 <= *(int *)(in_stack_00000004 + 600)) {
      *(uint *)(in_stack_00000004 + 0x25c) = 0;
      *(uint *)(in_stack_00000004 + 600) = 0;
      return;
    }
  }
  return;
}
