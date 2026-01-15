// Name: cockpit_pkbmpset.cpp_CPackedBitmapSet_setFilename_FUN_0054c6f0
// Address: 0054c6f0
// Address Range: [[0054c6f0, 0054c70f]]
// Convention: __cdecl
// Signature: void cockpit_pkbmpset.cpp_CPackedBitmapSet_setFilename_FUN_0054c6f0(CPackedBitmapSet * this_ptr, char * filename)

#include "nocturne.h"

void __cdecl
cockpit_pkbmpset_cpp_CPackedBitmapSet_setFilename_FUN_0054c6f0
          (CPackedBitmapSet *this_ptr,char *filename)

{
  crt_string_c_strncpy_FUN_00600f40(this_ptr->filename,filename,0x13);
  this_ptr->filename[0x13] = '\0';
  return;
}
