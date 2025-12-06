// Name: cockpit_pkbitmap.cpp_applyACTPaletteToBitmap_FUN_0054b3f0
// Address: 0054b3f0
// Address Range: [[0054b3f0, 0054b430]]
// Convention: __cdecl
// Signature: void cockpit_pkbitmap.cpp_applyACTPaletteToBitmap_FUN_0054b3f0(char * act_filename, CPackedBitmap * bitmap_ptr)

#include "nocturne.h"

void __cdecl
cockpit_pkbitmap_cpp_applyACTPaletteToBitmap_FUN_0054b3f0
          (char *act_filename,CPackedBitmap *bitmap_ptr)

{
  BADSPACEBASE *in_ESP;
  uchar auStack_fc [252];
  
  cockpit_ckptutil_c_loadACTToIndexedPalette_FUN_00431a30(bitmap_ptr->filename,&stack0xffffff00);
  cockpit_pkbitmap_cpp_CPackedBitmap_applyPaletteToPackedData_FUN_0054b440(bitmap_ptr,auStack_fc);
  return;
}
