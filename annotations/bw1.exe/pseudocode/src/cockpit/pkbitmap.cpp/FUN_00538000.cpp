// Name: cockpit_pkbitmap.cpp_FUN_00538000
// Address: 00538000
// Address Range: [[00538000, 00538040]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_pkbitmap_cpp_FUN_00538000(CPackedBitmap *this_ptr,char *act_filename)

#include "nocturne.h"

void __cdecl cockpit_pkbitmap_cpp_FUN_00538000(CPackedBitmap *this_ptr,char *act_filename)

{
  CPackedBitmap *in_stack_0000000c;
  uchar auStack_f8 [248];
  
  cockpit_ckptutil_c_loadACTToIndexedPalette_FUN_00437400(act_filename,&stack0xffffff00);
  cockpit_pkbitmap_cpp_CPackedBitmap_applyPaletteToPackedData_FUN_00538050
            (in_stack_0000000c,auStack_f8);
  return;
}
