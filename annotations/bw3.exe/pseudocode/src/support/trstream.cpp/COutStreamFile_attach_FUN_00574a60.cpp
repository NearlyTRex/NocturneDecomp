// Name: support_trstream.cpp_COutStreamFile_attach_FUN_00574a60
// Address: 00574a60
// Address Range: [[00574a60, 00574a7f]]
// Convention: __cdecl
// Signature: void __cdecl support_trstream_cpp_COutStreamFile_attach_FUN_00574a60(COutStreamFile *this_ptr,int param_2)

#include "nocturne.h"

void __cdecl support_trstream_cpp_COutStreamFile_attach_FUN_00574a60(COutStreamFile *this_ptr,int param_2)

{
  (**(code **)((int)(this_ptr->base).vtable + 0x18))(this_ptr);
  this_ptr->file = (_FILE *)param_2;
  (**(code **)((int)(this_ptr->base).vtable + 0x14))(this_ptr);
  return;
}
