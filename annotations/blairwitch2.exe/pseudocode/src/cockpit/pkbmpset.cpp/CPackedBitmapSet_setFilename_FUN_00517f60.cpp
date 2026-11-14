// Name: cockpit_pkbmpset.cpp_CPackedBitmapSet_setFilename_FUN_00517f60
// Address: 00517f60
// Address Range: [[00517f60, 00517f7f]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_pkbmpset_cpp_CPackedBitmapSet_setFilename_FUN_00517f60(CPackedBitmapSet *this_ptr,char *filename)

#include "nocturne.h"

void __cdecl cockpit_pkbmpset_cpp_CPackedBitmapSet_setFilename_FUN_00517f60(CPackedBitmapSet *this_ptr,char *filename)

{
  _strncpy(this_ptr->filename,filename,0x13);
  this_ptr->filename[0x13] = '\0';
  return;
}
