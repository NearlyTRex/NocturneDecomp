// Name: core_flashlit.cpp_FUN_004a1dd0
// Address: 004a1dd0
// Address Range: [[004a1dd0, 004a1e52]]
// Convention: unknown
// Signature: void core_flashlit_cpp_FUN_004a1dd0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void core_flashlit_cpp_FUN_004a1dd0(void)

{
  int iVar1;
  SNotesSection *this_ptr;
  int iVar2;
  
  if (DAT_00616014 == 0) {
    return;
  }
  core_fldnotes_cpp_STextView_setRect_FUN_004a2890(&g_STextViewInstance,0x60,0x40,0x1eb,0x1b8);
  iVar2 = 0;
  core_fldnotes_cpp_STextView_reset_FUN_004a27e0(&g_STextViewInstance);
  DAT_01cab7f0 = 0;
  if (0 < _DAT_01cab9f0) {
    this_ptr = SNotesSection_ARRAY_01cab9f4;
    do {
      iVar1 = core_fldnotes_cpp_SNotesSection_layout_FUN_004a3740(this_ptr,&g_STextViewInstance);
      if (iVar1 == 0) {
        return;
      }
      iVar2 = iVar2 + 1;
      this_ptr = this_ptr + 1;
    } while (iVar2 < _DAT_01cab9f0);
  }
  DAT_00616014 = 0;
  return;
}
