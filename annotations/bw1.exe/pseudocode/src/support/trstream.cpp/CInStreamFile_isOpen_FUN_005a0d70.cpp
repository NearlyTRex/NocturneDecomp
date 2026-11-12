// Name: support_trstream.cpp_CInStreamFile_isOpen_FUN_005a0d70
// Address: 005a0d70
// Address Range: [[005a0d70, 005a0d80]]
// Convention: __cdecl
// Signature: bool __cdecl support_trstream_cpp_CInStreamFile_isOpen_FUN_005a0d70(CInStreamFile *this_ptr)

#include "nocturne.h"

bool __cdecl support_trstream_cpp_CInStreamFile_isOpen_FUN_005a0d70(CInStreamFile *this_ptr)

{
  return this_ptr->file_handle != (HANDLE)0x0;
}
