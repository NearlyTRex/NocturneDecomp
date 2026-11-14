// Name: support_trstream.cpp_CInStreamFile_isOpen_FUN_0057d130
// Address: 0057d130
// Address Range: [[0057d130, 0057d140]]
// Convention: __cdecl
// Signature: bool __cdecl support_trstream_cpp_CInStreamFile_isOpen_FUN_0057d130(CInStreamFile *this_ptr)

#include "nocturne.h"

bool __cdecl support_trstream_cpp_CInStreamFile_isOpen_FUN_0057d130(CInStreamFile *this_ptr)

{
  return this_ptr->file_handle != (HANDLE)0x0;
}
