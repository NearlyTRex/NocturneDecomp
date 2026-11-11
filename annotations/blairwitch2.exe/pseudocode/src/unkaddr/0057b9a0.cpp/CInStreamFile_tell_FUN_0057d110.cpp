// Name: unkaddr_0057b9a0.cpp_CInStreamFile_tell_FUN_0057d110
// Address: 0057d110
// Address Range: [[0057d110, 0057d123]]
// Convention: __cdecl
// Signature: undefined4 __cdecl unkaddr_0057b9a0_cpp_CInStreamFile_tell_FUN_0057d110(CInStreamFile *this_ptr)

#include "nocturne.h"

uint __cdecl unkaddr_0057b9a0_cpp_CInStreamFile_tell_FUN_0057d110(CInStreamFile *this_ptr)

{
  if (this_ptr->file_handle == (HANDLE)0x0) {
    return 0xffffffff;
  }
  return this_ptr->position;
}
