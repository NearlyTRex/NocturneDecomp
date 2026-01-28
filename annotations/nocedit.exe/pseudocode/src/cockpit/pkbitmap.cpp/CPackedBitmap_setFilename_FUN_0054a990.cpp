// Name: cockpit_pkbitmap.cpp_CPackedBitmap_setFilename_FUN_0054a990
// Address: 0054a990
// Address Range: [[0054a990, 0054a9ac]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_setFilename_FUN_0054a990(CPackedBitmap *this_ptr,char *filename)

#include "nocturne.h"

void __cdecl
cockpit_pkbitmap_cpp_CPackedBitmap_setFilename_FUN_0054a990(CPackedBitmap *this_ptr,char *filename)

{
  crt_string_c_strncpy_FUN_00600f40(this_ptr->filename,filename,0x13);
  this_ptr->filename[0x13] = '\0';
  return;
}
