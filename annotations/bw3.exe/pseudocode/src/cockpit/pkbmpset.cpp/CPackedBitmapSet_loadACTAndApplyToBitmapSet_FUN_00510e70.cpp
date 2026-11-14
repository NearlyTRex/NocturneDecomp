// Name: cockpit_pkbmpset.cpp_CPackedBitmapSet_loadACTAndApplyToBitmapSet_FUN_00510e70
// Address: 00510e70
// Address Range: [[00510e70, 00510eb0]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_pkbmpset_cpp_CPackedBitmapSet_loadACTAndApplyToBitmapSet_FUN_00510e70(CPackedBitmapSet *this_ptr,char *act_filename)

#include "nocturne.h"

void __cdecl cockpit_pkbmpset_cpp_CPackedBitmapSet_loadACTAndApplyToBitmapSet_FUN_00510e70(CPackedBitmapSet *this_ptr,char *act_filename)

{
  CPackedBitmapSet *in_stack_0000000c;
  char acStack_f8 [248];
  
  cockpit_ckptutil_c_loadACTToIndexedPalette_FUN_00435010(act_filename,&stack0xffffff00);
  cockpit_pkbmpset_cpp_CPackedBitmapSet_applyPaletteToAllBitmaps_FUN_00510ec0
            (in_stack_0000000c,acStack_f8);
  return;
}
