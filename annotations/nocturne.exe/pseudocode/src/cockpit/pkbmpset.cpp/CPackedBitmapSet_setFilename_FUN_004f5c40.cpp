// Name: cockpit_pkbmpset.cpp_CPackedBitmapSet_setFilename_FUN_004f5c40
// Address: 004f5c40
// Address Range: [[004f5c40, 004f5c5f]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_pkbmpset_cpp_CPackedBitmapSet_setFilename_FUN_004f5c40(CPackedBitmapSet *this_ptr,char *filename)

#include "nocturne.h"

void __cdecl cockpit_pkbmpset_cpp_CPackedBitmapSet_setFilename_FUN_004f5c40(CPackedBitmapSet *this_ptr,char *filename)

{
  _strncpy(this_ptr->filename,filename,0x13);
  this_ptr->filename[0x13] = '\0';
  return;
}
