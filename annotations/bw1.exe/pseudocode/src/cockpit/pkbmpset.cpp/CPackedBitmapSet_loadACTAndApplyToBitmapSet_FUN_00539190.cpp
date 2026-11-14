// Name: cockpit_pkbmpset.cpp_CPackedBitmapSet_loadACTAndApplyToBitmapSet_FUN_00539190
// Address: 00539190
// Address Range: [[00539190, 005391d0]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_pkbmpset_cpp_CPackedBitmapSet_loadACTAndApplyToBitmapSet_FUN_00539190(CPackedBitmapSet *this_ptr,char *act_filename)

#include "nocturne.h"

void __cdecl cockpit_pkbmpset_cpp_CPackedBitmapSet_loadACTAndApplyToBitmapSet_FUN_00539190(CPackedBitmapSet *this_ptr,char *act_filename)

{
  CPackedBitmapSet *in_stack_0000000c;
  char acStack_f8 [248];
  
  cockpit_ckptutil_c_loadACTToIndexedPalette_FUN_00437400(act_filename,&stack0xffffff00);
  cockpit_pkbmpset_cpp_CPackedBitmapSet_applyPaletteToAllBitmaps_FUN_005391e0
            (in_stack_0000000c,acStack_f8);
  return;
}
