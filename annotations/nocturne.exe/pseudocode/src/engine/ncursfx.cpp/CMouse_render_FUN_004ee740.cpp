// Name: engine_ncursfx.cpp_CMouse_render_FUN_004ee740
// Address: 004ee740
// Address Range: [[004ee740, 004ee8a5]]
// Convention: unknown
// Signature: void engine_ncursfx_cpp_CMouse_render_FUN_004ee740(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void engine_ncursfx_cpp_CMouse_render_FUN_004ee740(void)

{
  int iVar1;
  CAlphaBitmap *in_stack_00000004;
  CAlphaBitmap *this_ptr;
  
  if (in_stack_00000004[0x1e].opa == (char *)0x1) {
    iVar1 = (int)in_stack_00000004[0x1e].raw >> 0x1f;
    this_ptr = in_stack_00000004 +
               ((int)(in_stack_00000004[0x1e].raw + (iVar1 * -0x10000 - (uint)(iVar1 << 0xf < 0)))
               >> 0x10) + 1;
  }
  else {
    this_ptr = in_stack_00000004;
    if (in_stack_00000004[0x1e].opa == (char *)0x2) {
      iVar1 = (int)in_stack_00000004[0x1e].raw >> 0x1f;
      this_ptr = in_stack_00000004 +
                 ((int)(in_stack_00000004[0x1e].raw + (iVar1 * -0x10000 - (uint)(iVar1 << 0xf < 0)))
                 >> 0x10) + 0xf;
    }
  }
  engine_alphabit_cpp_CAlphaBitmap_display_FUN_0040e710
            (this_ptr,_DAT_01bd1d8c + -0xd,_DAT_01bd1d90 + -0xc,0xffff);
  if (in_stack_00000004[0x1e].opa != (char *)0x0) {
    if (in_stack_00000004[0x1e].opa != (char *)0x2) {
      engine_3d_c_setBlendMode_FUN_004083c0(1);
      iVar1 = (int)in_stack_00000004[0x1e].raw >> 0x1f;
      engine_alphabit_cpp_CAlphaBitmap_display_FUN_0040e710
                (in_stack_00000004 +
                 ((int)(in_stack_00000004[0x1e].raw + (iVar1 * -0x10000 - (uint)(iVar1 << 0xf < 0)))
                 >> 0x10) + 8,_DAT_01bd1d8c + -0xd,_DAT_01bd1d90 + -0xc,0x8000);
      engine_3d_c_setBlendMode_FUN_004083c0(0);
    }
    iVar1 = 7;
    in_stack_00000004[0x1e].raw = in_stack_00000004[0x1e].raw + _DAT_01bd1d80 * 0x20;
    if (in_stack_00000004[0x1e].opa == (char *)0x2) {
      iVar1 = 0xf;
    }
    if (iVar1 * 0x10000 <= (int)in_stack_00000004[0x1e].raw) {
      in_stack_00000004[0x1e].opa = (char *)0x0;
      in_stack_00000004[0x1e].raw = (char *)0x0;
      return;
    }
  }
  return;
}
