// Name: support_trstream.cpp_COutStreamFile_putChar_FUN_005a18c0
// Address: 005a18c0
// Address Range: [[005a18c0, 005a18ea]]
// Convention: __cdecl
// Signature: uint __cdecl support_trstream_cpp_COutStreamFile_putChar_FUN_005a18c0(COutStreamFile *this_ptr,byte param_2)

#include "nocturne.h"

uint __cdecl support_trstream_cpp_COutStreamFile_putChar_FUN_005a18c0(COutStreamFile *this_ptr,byte param_2)

{
  uint uVar1;
  uint character;
  
  if (this_ptr->file != (_FILE *)0x0) {
    character = (uint)param_2;
    uVar1 = _fputc(character,this_ptr->file);
    if (uVar1 == character) {
      return uVar1 ^ character;
    }
  }
  return 0xfffffffe;
}
