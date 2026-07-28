// Name: cockpit_pkbitmap.cpp_CPackedBitmap_applyACTPalette_FUN_004f4a00
// Address: 004f4a00
// Address Range: [[004f4a00, 004f4a40]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_applyACTPalette_FUN_004f4a00(CPackedBitmap *this_ptr,char *act_filename)

#include "nocturne.h"

void __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_applyACTPalette_FUN_004f4a00(CPackedBitmap *this_ptr,char *act_filename)

{
  CPackedBitmap *in_stack_0000000c;
  uchar auStack_f8 [248];
  
  cockpit_ckptutil_c_loadACTToIndexedPalette_FUN_0042d3f0(act_filename,&stack0xffffff00);
  cockpit_pkbitmap_cpp_CPackedBitmap_applyPaletteToPackedData_FUN_004f4a50
            (in_stack_0000000c,auStack_f8);
  return;
}
