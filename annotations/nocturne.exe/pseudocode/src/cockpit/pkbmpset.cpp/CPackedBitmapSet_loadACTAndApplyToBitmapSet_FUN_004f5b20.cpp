// Name: cockpit_pkbmpset.cpp_CPackedBitmapSet_loadACTAndApplyToBitmapSet_FUN_004f5b20
// Address: 004f5b20
// Address Range: [[004f5b20, 004f5b60]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_pkbmpset_cpp_CPackedBitmapSet_loadACTAndApplyToBitmapSet_FUN_004f5b20(CPackedBitmapSet *this_ptr,char *act_filename)

#include "nocturne.h"

void __cdecl cockpit_pkbmpset_cpp_CPackedBitmapSet_loadACTAndApplyToBitmapSet_FUN_004f5b20(CPackedBitmapSet *this_ptr,char *act_filename)

{
  CPackedBitmapSet *in_stack_0000000c;
  char acStack_f8 [248];
  
  cockpit_ckptutil_c_loadACTToIndexedPalette_FUN_0042d3f0(act_filename,&stack0xffffff00);
  cockpit_pkbmpset_cpp_CPackedBitmapSet_applyPaletteToAllBitmaps_FUN_004f5b70
            (in_stack_0000000c,acStack_f8);
  return;
}
