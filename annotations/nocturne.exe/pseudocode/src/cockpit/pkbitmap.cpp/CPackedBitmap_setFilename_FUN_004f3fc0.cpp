// Name: cockpit_pkbitmap.cpp_CPackedBitmap_setFilename_FUN_004f3fc0
// Address: 004f3fc0
// Address Range: [[004f3fc0, 004f3fdc]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_setFilename_FUN_004f3fc0(CPackedBitmap *this_ptr,char *filename)

#include "nocturne.h"

void __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_setFilename_FUN_004f3fc0(CPackedBitmap *this_ptr,char *filename)

{
  _strncpy(this_ptr->filename,filename,0x13);
  this_ptr->filename[0x13] = '\0';
  return;
}
