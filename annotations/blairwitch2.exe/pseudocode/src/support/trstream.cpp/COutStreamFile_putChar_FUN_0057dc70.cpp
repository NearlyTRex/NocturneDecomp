// Name: support_trstream.cpp_COutStreamFile_putChar_FUN_0057dc70
// Address: 0057dc70
// Address Range: [[0057dc70, 0057dc9a]]
// Convention: __cdecl
// Signature: uint __cdecl support_trstream_cpp_COutStreamFile_putChar_FUN_0057dc70(COutStreamFile *this_ptr,byte param_2)

#include "nocturne.h"

uint __cdecl support_trstream_cpp_COutStreamFile_putChar_FUN_0057dc70(COutStreamFile *this_ptr,byte param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (this_ptr->file != (_FILE *)0x0) {
    uVar2 = (uint)param_2;
    uVar1 = _fputc(uVar2,this_ptr->file);
    if (uVar1 == uVar2) {
      return uVar1 ^ uVar2;
    }
  }
  return 0xfffffffe;
}
