// Name: support_trstream.cpp_COutStreamFile_attach_FUN_005a1a70
// Address: 005a1a70
// Address Range: [[005a1a70, 005a1a8f]]
// Convention: __cdecl
// Signature: void __cdecl support_trstream_cpp_COutStreamFile_attach_FUN_005a1a70(COutStreamFile *this_ptr,int param_2)

#include "nocturne.h"

void __cdecl support_trstream_cpp_COutStreamFile_attach_FUN_005a1a70(COutStreamFile *this_ptr,int param_2)

{
  (**(code **)((int)this_ptr->vtable + 0x18))(this_ptr);
  this_ptr->file = (_FILE *)param_2;
  (**(code **)((int)this_ptr->vtable + 0x14))(this_ptr);
  return;
}
