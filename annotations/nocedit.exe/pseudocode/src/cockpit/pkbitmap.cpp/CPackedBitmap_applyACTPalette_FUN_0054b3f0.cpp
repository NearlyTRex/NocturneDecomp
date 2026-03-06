// Name: cockpit_pkbitmap.cpp_CPackedBitmap_applyACTPalette_FUN_0054b3f0
// Address: 0054b3f0
// Address Range: [[0054b3f0, 0054b430]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_applyACTPalette_FUN_0054b3f0(CPackedBitmap *this_ptr,char *act_filename)

#include "nocturne.h"

void __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_applyACTPalette_FUN_0054b3f0(CPackedBitmap *this_ptr,char *act_filename)

{
  uchar auStack_100 [256];
  
  cockpit_ckptutil_c_loadACTToIndexedPalette_FUN_00431a30(act_filename,auStack_100);
  cockpit_pkbitmap_cpp_CPackedBitmap_applyPaletteToPackedData_FUN_0054b440(this_ptr,auStack_100);
  return;
}
