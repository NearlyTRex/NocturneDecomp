// Name: core_flashlit.cpp_FUN_004a8270
// Address: 004a8270
// Address Range: [[004a8270, 004a82e7]]
// Convention: unknown
// Signature: undefined4 core_flashlit_cpp_FUN_004a8270(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint core_flashlit_cpp_FUN_004a8270(void)

{
  int iVar1;
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
      iVar1 = core_fldnotes_cpp_SNotesSection_layout_FUN_004a9d90(this_ptr,&g_STextViewInstance);
      if (iVar1 == 0) {
        return 0;
      }
      iVar2 = iVar2 + 1;
      this_ptr = this_ptr + 1;
    } while (iVar2 < _DAT_01d0d210);
  }
  return 1;
}
