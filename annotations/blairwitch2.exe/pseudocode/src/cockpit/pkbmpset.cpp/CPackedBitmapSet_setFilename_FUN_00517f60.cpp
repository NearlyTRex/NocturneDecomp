// Name: cockpit_pkbmpset.cpp_CPackedBitmapSet_setFilename_FUN_00517f60
// Address: 00517f60
// Address Range: [[00517f60, 00517f7f]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_pkbmpset_cpp_CPackedBitmapSet_setFilename_FUN_00517f60(CPackedBitmapSet *this_ptr,char *filename)

#include "nocturne.h"

void __cdecl cockpit_pkbmpset_cpp_CPackedBitmapSet_setFilename_FUN_00517f60(CPackedBitmapSet *this_ptr,char *filename)

{
  _strncpy((char *)(this_ptr + 8),filename,0x13);
  this_ptr[0x1b] = (CPackedBitmapSet)0x0;
  return;
}
