// Name: core_flashlit.cpp_FUN_004ba6ae
// Address: 004ba6ae
// Address Range: [[004ba6ae, 004ba72f]]
// Convention: unknown
// Signature: void core_flashlit_cpp_FUN_004ba6ae(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_flashlit_cpp_FUN_004ba6ae(void)

{
  bool bVar1;
  undefined3 extraout_var;
  SNotesSection *this_ptr;
  int iVar2;
  
  if (DAT_0061d2e4 != 0) {
    core_fldnotes_cpp_STextView_setRect_FUN_004bb270(&g_STextViewInstance,0x60,0x40,0x1eb,0x1b8);
    iVar2 = 0;
    core_fldnotes_cpp_STextView_reset_FUN_004bb1c0(&g_STextViewInstance);
    DAT_0061d2e4 = 0;
    DAT_01cc4270 = 0;
    if (0 < _DAT_01cc4470) {
      this_ptr = SNotesSection_ARRAY_01cc4474;
      while( true ) {
        bVar1 = core_fldnotes_cpp_SNotesSection_layout_FUN_004bc130(this_ptr,0x1cc7cd4);
        if (CONCAT31(extraout_var,bVar1) == 0) break;
        iVar2 = iVar2 + 1;
        this_ptr = this_ptr + 1;
        if (_DAT_01cc4470 <= iVar2) {
          return;
        }
      }
    }
  }
  return;
}
