// Name: cockpit_pkbitmap.cpp_FUN_00516cb0
// Address: 00516cb0
// Address Range: [[00516cb0, 00516cf0]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_pkbitmap_cpp_FUN_00516cb0(CPackedBitmap *this_ptr,char *act_filename)

#include "nocturne.h"

void __cdecl cockpit_pkbitmap_cpp_FUN_00516cb0(CPackedBitmap *this_ptr,char *act_filename)

{
  CPackedBitmap *in_stack_0000000c;
  uchar auStack_f8 [248];
  
  cockpit_ckptutil_c_loadACTToIndexedPalette_FUN_0042c6f0(act_filename,&stack0xffffff00);
  cockpit_pkbitmap_cpp_CPackedBitmap_applyPaletteToPackedData_FUN_00516d00
            (in_stack_0000000c,auStack_f8);
  return;
}
