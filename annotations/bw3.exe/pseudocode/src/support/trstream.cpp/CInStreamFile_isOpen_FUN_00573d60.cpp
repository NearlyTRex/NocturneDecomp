// Name: support_trstream.cpp_CInStreamFile_isOpen_FUN_00573d60
// Address: 00573d60
// Address Range: [[00573d60, 00573d70]]
// Convention: __cdecl
// Signature: bool __cdecl support_trstream_cpp_CInStreamFile_isOpen_FUN_00573d60(CInStreamFile *this_ptr)

#include "nocturne.h"

bool __cdecl support_trstream_cpp_CInStreamFile_isOpen_FUN_00573d60(CInStreamFile *this_ptr)

{
  return this_ptr->file_handle != (HANDLE)0x0;
}
