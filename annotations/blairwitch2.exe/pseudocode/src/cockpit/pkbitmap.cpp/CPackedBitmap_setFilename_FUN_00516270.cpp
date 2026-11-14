// Name: cockpit_pkbitmap.cpp_CPackedBitmap_setFilename_FUN_00516270
// Address: 00516270
// Address Range: [[00516270, 0051628c]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_setFilename_FUN_00516270(CPackedBitmap *this_ptr,char *filename)

#include "nocturne.h"

void __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_setFilename_FUN_00516270(CPackedBitmap *this_ptr,char *filename)

{
  _strncpy(this_ptr->filename,filename,0x13);
  this_ptr->filename[0x13] = '\0';
  return;
}
