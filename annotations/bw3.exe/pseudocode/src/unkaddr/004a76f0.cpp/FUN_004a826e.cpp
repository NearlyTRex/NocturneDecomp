// Name: unkaddr_004a76f0.cpp_FUN_004a826e
// Address: 004a826e
// Address Range: [[004a826e, 004a82e7]]
// Convention: unknown
// Signature: undefined4 unkaddr_004a76f0_cpp_FUN_004a826e(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint unkaddr_004a76f0_cpp_FUN_004a826e(void)

{
  bool bVar1;
  undefined3 extraout_var;
  SNotesSection *this_ptr;
  int iVar2;
  
  core_fldnotes_cpp_STextView_setRect_FUN_004a8eb0(&g_STextViewInstance,0x60,0x40,0x1eb,0x1b8);
  iVar2 = 0;
  core_fldnotes_cpp_STextView_reset_FUN_004a8e00(&g_STextViewInstance);
  DAT_005fe374 = 0;
  DAT_01d0d010 = 0;
  if (0 < _DAT_01d0d210) {
    this_ptr = SNotesSection_ARRAY_01d0d214;
    do {
      bVar1 = core_fldnotes_cpp_SNotesSection_layout_FUN_004a9d90(this_ptr,0x1d19d30);
      if (CONCAT31(extraout_var,bVar1) == 0) {
        return 0;
      }
      iVar2 = iVar2 + 1;
      this_ptr = this_ptr + 1;
    } while (iVar2 < _DAT_01d0d210);
  }
  return 1;
}
