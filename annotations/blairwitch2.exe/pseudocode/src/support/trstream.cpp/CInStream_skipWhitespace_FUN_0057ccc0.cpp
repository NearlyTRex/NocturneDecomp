// Name: support_trstream.cpp_CInStream_skipWhitespace_FUN_0057ccc0
// Address: 0057ccc0
// Address Range: [[0057ccc0, 0057cd2d]]
// Convention: __cdecl
// Signature: int __cdecl support_trstream_cpp_CInStream_skipWhitespace_FUN_0057ccc0(CInStream *this_ptr)

#include "nocturne.h"

int __cdecl support_trstream_cpp_CInStream_skipWhitespace_FUN_0057ccc0(CInStream *this_ptr)

{
  int iVar1;
  char cStack_8;
  
  iVar1 = (**(code **)((int)this_ptr->vtable + 4))(this_ptr);
  while( true ) {
    if (iVar1 < 0) {
      return iVar1;
    }
    cStack_8 = (char)iVar1;
    if (((&DAT_0061ed94)[(byte)(cStack_8 + 1)] & 2) == 0) break;
    iVar1 = (**(code **)((int)this_ptr->vtable + 4))(this_ptr);
    if (iVar1 == -1) {
      return 0;
    }
  }
  iVar1 = (**(code **)((int)this_ptr->vtable + 8))(this_ptr,iVar1);
  if (iVar1 != 0) {
    return 0;
  }
  return -2;
}
