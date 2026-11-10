// Name: cockpit_pkbitmap.cpp_CPackedBitmap_setFilename_FUN_0050f2a0
// Address: 0050f2a0
// Address Range: [[0050f2a0, 0050f2bc]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_setFilename_FUN_0050f2a0(CPackedBitmap *this_ptr,char *filename)

#include "nocturne.h"

void __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_setFilename_FUN_0050f2a0(CPackedBitmap *this_ptr,char *filename)

{
  _strncpy(this_ptr->filename,filename,0x13);
  this_ptr->filename[0x13] = '\0';
  return;
}
