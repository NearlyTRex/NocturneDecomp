// Name: cockpit_pkbitmap.cpp_applyACTPaletteToBitmap_FUN_0054b3f0
// Address: 0054b3f0
// Address Range: [[0054b3f0, 0054b430]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_pkbitmap_cpp_applyACTPaletteToBitmap_FUN_0054b3f0 (char *act_filename,CPackedBitmap *bitmap_ptr)

#include "nocturne.h"

void __cdecl
cockpit_pkbitmap_cpp_applyACTPaletteToBitmap_FUN_0054b3f0
          (char *act_filename,CPackedBitmap *bitmap_ptr)

{
  uchar auStack_100 [256];
  
  cockpit_ckptutil_c_loadACTToIndexedPalette_FUN_00431a30(bitmap_ptr->filename,(char *)auStack_100);
  cockpit_pkbitmap_cpp_CPackedBitmap_applyPaletteToPackedData_FUN_0054b440
            ((CPackedBitmap *)act_filename,auStack_100);
  return;
}
