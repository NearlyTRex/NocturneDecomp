// Name: support_trstream.cpp_CInStreamFile_peekChar_FUN_005a0b70
// Address: 005a0b70
// Address Range: [[005a0b70, 005a0b9d]]
// Convention: __cdecl
// Signature: int __cdecl support_trstream_cpp_CInStreamFile_peekChar_FUN_005a0b70(CInStreamFile *this_ptr)

#include "nocturne.h"

int __cdecl support_trstream_cpp_CInStreamFile_peekChar_FUN_005a0b70(CInStreamFile *this_ptr)

{
  uint uVar1;
  
  uVar1 = support_trstream_cpp_CInStreamFile_readByteAt_FUN_005a0ba0(this_ptr,this_ptr->position);
  if (-1 < (int)uVar1) {
    if ((this_ptr->binary_mode != 0) || (uVar1 != 0xd)) {
      return uVar1;
    }
    uVar1 = 10;
  }
  return uVar1;
}
