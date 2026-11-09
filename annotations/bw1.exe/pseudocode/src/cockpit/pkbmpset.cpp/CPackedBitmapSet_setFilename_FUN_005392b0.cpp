// Name: cockpit_pkbmpset.cpp_CPackedBitmapSet_setFilename_FUN_005392b0
// Address: 005392b0
// Address Range: [[005392b0, 005392cf]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_pkbmpset_cpp_CPackedBitmapSet_setFilename_FUN_005392b0(CPackedBitmapSet *this_ptr,char *filename)

#include "nocturne.h"

void __cdecl cockpit_pkbmpset_cpp_CPackedBitmapSet_setFilename_FUN_005392b0(CPackedBitmapSet *this_ptr,char *filename)

{
  _strncpy((char *)(this_ptr + 8),filename,0x13);
  this_ptr[0x1b] = (CPackedBitmapSet)0x0;
  return;
}
