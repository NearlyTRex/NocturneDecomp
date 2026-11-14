// Name: core_flashlit.cpp_FUN_004ba630
// Address: 004ba630
// Address Range: [[004ba630, 004ba6a7]]
// Convention: unknown
// Signature: undefined4 core_flashlit_cpp_FUN_004ba630(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint core_flashlit_cpp_FUN_004ba630(void)

{
  int iVar1;
  SNotesSection *this_ptr;
  int iVar2;
  
  core_fldnotes_cpp_STextView_setRect_FUN_004bb270(&g_STextViewInstance,0x60,0x40,0x1eb,0x1b8);
  iVar2 = 0;
  core_fldnotes_cpp_STextView_reset_FUN_004bb1c0(&g_STextViewInstance);
  DAT_0061d2e4 = 0;
  DAT_01cc4270 = 0;
  if (0 < _DAT_01cc4470) {
    this_ptr = SNotesSection_ARRAY_01cc4474;
    do {
      iVar1 = core_fldnotes_cpp_SNotesSection_layout_FUN_004bc130(this_ptr,&g_STextViewInstance);
      if (iVar1 == 0) {
        return 0;
      }
      iVar2 = iVar2 + 1;
      this_ptr = this_ptr + 1;
    } while (iVar2 < _DAT_01cc4470);
  }
  return 1;
}
