// Name: core_flashlit.cpp_relayoutSectionsIfDirty_FUN_004ba6b0
// Address: 004ba6b0
// Address Range: [[004ba6b0, 004ba72f]]
// Convention: __cdecl
// Signature: void __cdecl core_flashlit_cpp_relayoutSectionsIfDirty_FUN_004ba6b0(void)

#include "nocturne.h"

void __cdecl core_flashlit_cpp_relayoutSectionsIfDirty_FUN_004ba6b0(void)

{
  int iVar1;
  SNotesSection *this_ptr;
  int iVar2;
  
  if (g_INT_0061d2e4 != 0) {
    core_fldnotes_cpp_STextView_setRect_FUN_004bb270(&g_STextViewInstance,0x60,0x40,0x1eb,0x1b8);
    iVar2 = 0;
    core_fldnotes_cpp_STextView_reset_FUN_004bb1c0(&g_STextViewInstance);
    g_INT_0061d2e4 = 0;
    g_CHAR_ARRAY_01cc4270[0] = '\0';
    if (0 < g_INT_01cc4470) {
      this_ptr = SNotesSection_ARRAY_01cc4474;
      while( true ) {
        iVar1 = core_fldnotes_cpp_SNotesSection_layout_FUN_004bc130(this_ptr,&g_STextViewInstance);
        if (iVar1 == 0) break;
        iVar2 = iVar2 + 1;
        this_ptr = this_ptr + 1;
        if (g_INT_01cc4470 <= iVar2) {
          return;
        }
      }
    }
  }
  return;
}
