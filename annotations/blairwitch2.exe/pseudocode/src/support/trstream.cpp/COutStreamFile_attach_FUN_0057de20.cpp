// Name: support_trstream.cpp_COutStreamFile_attach_FUN_0057de20
// Address: 0057de20
// Address Range: [[0057de20, 0057de3f]]
// Convention: __cdecl
// Signature: void __cdecl support_trstream_cpp_COutStreamFile_attach_FUN_0057de20(COutStreamFile *this_ptr,int param_2)

#include "nocturne.h"

void __cdecl support_trstream_cpp_COutStreamFile_attach_FUN_0057de20(COutStreamFile *this_ptr,int param_2)

{
  (**(code **)((int)this_ptr->vtable + 0x18))(this_ptr);
  this_ptr->file = (_FILE *)param_2;
  (**(code **)((int)this_ptr->vtable + 0x14))(this_ptr);
  return;
}
