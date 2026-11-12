// Name: core_flashlit.cpp_FUN_004a82ee
// Address: 004a82ee
// Address Range: [[004a82ee, 004a836f]]
// Convention: unknown
// Signature: void core_flashlit_cpp_FUN_004a82ee(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_flashlit_cpp_FUN_004a82ee(void)

{
  bool bVar1;
  undefined3 extraout_var;
  SNotesSection *this_ptr;
  int iVar2;
  
  if (DAT_005fe374 != 0) {
    core_fldnotes_cpp_STextView_setRect_FUN_004a8eb0(&g_STextViewInstance,0x60,0x40,0x1eb,0x1b8);
    iVar2 = 0;
    core_fldnotes_cpp_STextView_reset_FUN_004a8e00(&g_STextViewInstance);
    DAT_005fe374 = 0;
    DAT_01d0d010 = 0;
    if (0 < _DAT_01d0d210) {
      this_ptr = SNotesSection_ARRAY_01d0d214;
      while( true ) {
        bVar1 = core_fldnotes_cpp_SNotesSection_layout_FUN_004a9d90(this_ptr,0x1d19d30);
        if (CONCAT31(extraout_var,bVar1) == 0) break;
        iVar2 = iVar2 + 1;
        this_ptr = this_ptr + 1;
        if (_DAT_01d0d210 <= iVar2) {
          return;
        }
      }
    }
  }
  return;
}
