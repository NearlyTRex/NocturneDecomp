// Name: unkaddr_0059f520.cpp_CInStreamFile_tell_FUN_005a0d50
// Address: 005a0d50
// Address Range: [[005a0d50, 005a0d63]]
// Convention: __cdecl
// Signature: undefined4 __cdecl unkaddr_0059f520_cpp_CInStreamFile_tell_FUN_005a0d50(CInStreamFile *this_ptr)

#include "nocturne.h"

uint __cdecl unkaddr_0059f520_cpp_CInStreamFile_tell_FUN_005a0d50(CInStreamFile *this_ptr)

{
  if (this_ptr->file_handle == (HANDLE)0x0) {
    return 0xffffffff;
  }
  return this_ptr->position;
}
