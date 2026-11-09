// Name: engine_ncursfx.cpp_CMouse_render_FUN_00510250
// Address: 00510250
// Address Range: [[00510250, 005103b5]]
// Convention: __cdecl
// Signature: void __cdecl engine_ncursfx_cpp_CMouse_render_FUN_00510250(CMouse *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_ncursfx_cpp_CMouse_render_FUN_00510250(CMouse *this_ptr)

{
  int iVar1;
  CMouse *this_ptr_00;
  
  if (*(int *)&this_ptr->field_0x25c == 1) {
    iVar1 = *(int *)&this_ptr->field_0x258 >> 0x1f;
    this_ptr_00 = (CMouse *)
                  (&this_ptr->field_0x14 +
                  ((int)((*(int *)&this_ptr->field_0x258 + iVar1 * -0x10000) -
                        (uint)(iVar1 << 0xf < 0)) >> 0x10) * 0x14);
  }
  else {
    this_ptr_00 = this_ptr;
    if (*(int *)&this_ptr->field_0x25c == 2) {
      iVar1 = *(int *)&this_ptr->field_0x258 >> 0x1f;
      this_ptr_00 = (CMouse *)
                    (&this_ptr->field_0x12c +
                    ((int)((*(int *)&this_ptr->field_0x258 + iVar1 * -0x10000) -
                          (uint)(iVar1 << 0xf < 0)) >> 0x10) * 0x14);
    }
  }
  engine_alphabit_cpp_CAlphaBitmap_display_FUN_0040d900
            ((CAlphaBitmap *)this_ptr_00,_DAT_01c2a37c + -0xd,_DAT_01c2a380 + -0xc,0xffff);
  if (*(int *)&this_ptr->field_0x25c != 0) {
    if (*(int *)&this_ptr->field_0x25c != 2) {
      engine_3d_c_FUN_00406df0(1);
      iVar1 = *(int *)&this_ptr->field_0x258 >> 0x1f;
      engine_alphabit_cpp_CAlphaBitmap_display_FUN_0040d900
                ((CAlphaBitmap *)
                 (&this_ptr->field_0xa0 +
                 ((int)((*(int *)&this_ptr->field_0x258 + iVar1 * -0x10000) -
                       (uint)(iVar1 << 0xf < 0)) >> 0x10) * 0x14),_DAT_01c2a37c + -0xd,
                 _DAT_01c2a380 + -0xc,0x8000);
      engine_3d_c_FUN_00406df0(0);
    }
    iVar1 = 7;
    *(int *)&this_ptr->field_0x258 = *(int *)&this_ptr->field_0x258 + _DAT_01c2a370 * 0x20;
    if (*(int *)&this_ptr->field_0x25c == 2) {
      iVar1 = 0xf;
    }
    if (iVar1 * 0x10000 <= *(int *)&this_ptr->field_0x258) {
      *(uint *)&this_ptr->field_0x25c = 0;
      *(uint *)&this_ptr->field_0x258 = 0;
      return;
    }
  }
  return;
}
