// Name: support_newmsg.cpp_FUN_005445c0
// Address: 005445c0
// Address Range: [[005445c0, 00544725]]
// Convention: unknown
// Signature: void support_newmsg_cpp_FUN_005445c0(void)

#include "nocturne.h"

void support_newmsg_cpp_FUN_005445c0(void)

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
  engine_alphabit_cpp_CAlphaBitmap_display_FUN_00410950
            (this_ptr,g_MouseX + -0xd,g_MouseY + -0xc,0xffff);
  if (in_stack_00000004[0x1e].opa != (char *)0x0) {
    if (in_stack_00000004[0x1e].opa != (char *)0x2) {
      engine_3d_c_setBlendMode_FUN_00406dd0(1);
      iVar1 = (int)in_stack_00000004[0x1e].raw >> 0x1f;
      engine_alphabit_cpp_CAlphaBitmap_display_FUN_00410950
                (in_stack_00000004 +
                 ((int)(in_stack_00000004[0x1e].raw + (iVar1 * -0x10000 - (uint)(iVar1 << 0xf < 0)))
                 >> 0x10) + 8,g_MouseX + -0xd,g_MouseY + -0xc,0x8000);
      engine_3d_c_setBlendMode_FUN_00406dd0(0);
    }
    iVar1 = 7;
    in_stack_00000004[0x1e].raw = in_stack_00000004[0x1e].raw + g_GlobalDeltaTimeInt * 0x20;
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
