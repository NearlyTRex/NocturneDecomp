// Name: cockpit_pkbitmap.cpp_CPackedBitmap_applyACTPalette_FUN_0050fce0
// Address: 0050fce0
// Address Range: [[0050fce0, 0050fd20]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_applyACTPalette_FUN_0050fce0(CPackedBitmap *this_ptr,char *act_filename)

#include "nocturne.h"

void __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_applyACTPalette_FUN_0050fce0(CPackedBitmap *this_ptr,char *act_filename)

{
  CPackedBitmap *in_stack_0000000c;
  uchar auStack_f8 [248];
  
  cockpit_ckptutil_c_loadACTToIndexedPalette_FUN_00435010(act_filename,&stack0xffffff00);
  cockpit_pkbitmap_cpp_CPackedBitmap_applyPaletteToPackedData_FUN_0050fd30
            (in_stack_0000000c,auStack_f8);
  return;
}
