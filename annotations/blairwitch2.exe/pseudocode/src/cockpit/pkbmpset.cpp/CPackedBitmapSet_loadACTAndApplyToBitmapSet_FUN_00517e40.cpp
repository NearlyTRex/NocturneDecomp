// Name: cockpit_pkbmpset.cpp_CPackedBitmapSet_loadACTAndApplyToBitmapSet_FUN_00517e40
// Address: 00517e40
// Address Range: [[00517e40, 00517e80]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_pkbmpset_cpp_CPackedBitmapSet_loadACTAndApplyToBitmapSet_FUN_00517e40(CPackedBitmapSet *this_ptr,char *act_filename)

#include "nocturne.h"

void __cdecl cockpit_pkbmpset_cpp_CPackedBitmapSet_loadACTAndApplyToBitmapSet_FUN_00517e40(CPackedBitmapSet *this_ptr,char *act_filename)

{
  CPackedBitmapSet *in_stack_0000000c;
  char acStack_f8 [248];
  
  cockpit_ckptutil_c_loadACTToIndexedPalette_FUN_0042c6f0(act_filename,&stack0xffffff00);
  cockpit_pkbmpset_cpp_CPackedBitmapSet_applyPaletteToAllBitmaps_FUN_00517e90
            (in_stack_0000000c,acStack_f8);
  return;
}
