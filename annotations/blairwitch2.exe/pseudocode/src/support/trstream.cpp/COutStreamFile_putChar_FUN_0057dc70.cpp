// Name: support_trstream.cpp_COutStreamFile_putChar_FUN_0057dc70
// Address: 0057dc70
// Address Range: [[0057dc70, 0057dc9a]]
// Convention: __cdecl
// Signature: uint __cdecl support_trstream_cpp_COutStreamFile_putChar_FUN_0057dc70(COutStreamFile *this_ptr,byte character)

#include "nocturne.h"

uint __cdecl support_trstream_cpp_COutStreamFile_putChar_FUN_0057dc70(COutStreamFile *this_ptr,byte character)

{
  uint uVar1;
  uint character_00;
  
  if (this_ptr->file != (_FILE *)0x0) {
    character_00 = (uint)character;
    uVar1 = _fputc(character_00,this_ptr->file);
    if (uVar1 == character_00) {
      return uVar1 ^ character_00;
    }
  }
  return 0xfffffffe;
}
