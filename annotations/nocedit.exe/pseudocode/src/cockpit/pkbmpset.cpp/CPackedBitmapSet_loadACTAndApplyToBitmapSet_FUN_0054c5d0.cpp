// Name: cockpit_pkbmpset.cpp_CPackedBitmapSet_loadACTAndApplyToBitmapSet_FUN_0054c5d0
// Address: 0054c5d0
// Address Range: [[0054c5d0, 0054c610]]
// Convention: __cdecl
// Signature: void cockpit_pkbmpset.cpp_CPackedBitmapSet_loadACTAndApplyToBitmapSet_FUN_0054c5d0(CPackedBitmapSet * this_ptr, char * act_filename)

#include "nocturne.h"

void __cdecl
cockpit_pkbmpset_cpp_CPackedBitmapSet_loadACTAndApplyToBitmapSet_FUN_0054c5d0
          (CPackedBitmapSet *this_ptr,char *act_filename)

{
  BADSPACEBASE *in_ESP;
  char acStack_fc [252];
  
  cockpit_ckptutil_c_loadACTToIndexedPalette_FUN_00431a30(act_filename,&stack0xffffff00);
  cockpit_pkbmpset_cpp_CPackedBitmapSet_applyPaletteToAllBitmaps_FUN_0054c620
            ((CPackedBitmapSet *)act_filename,acStack_fc);
  return;
}
