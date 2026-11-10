// Name: cockpit_pkbmpset.cpp_CPackedBitmapSet_setFilename_FUN_005392b0
// Address: 005392b0
// Address Range: [[005392b0, 005392cf]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_pkbmpset_cpp_CPackedBitmapSet_setFilename_FUN_005392b0(CPackedBitmapSet *this_ptr,char *filename)

#include "nocturne.h"

void __cdecl cockpit_pkbmpset_cpp_CPackedBitmapSet_setFilename_FUN_005392b0(CPackedBitmapSet *this_ptr,char *filename)

{
  _strncpy(this_ptr->filename,filename,0x13);
  this_ptr->filename[0x13] = '\0';
  return;
}
