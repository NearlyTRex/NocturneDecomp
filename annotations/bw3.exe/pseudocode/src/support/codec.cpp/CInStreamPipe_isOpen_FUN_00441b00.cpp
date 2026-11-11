// Name: support_codec.cpp_CInStreamPipe_isOpen_FUN_00441b00
// Address: 00441b00
// Address Range: [[00441b00, 00441b26]]
// Convention: __cdecl
// Signature: undefined4 __cdecl support_codec_cpp_CInStreamPipe_isOpen_FUN_00441b00(CInStreamPipe *this_ptr)

#include "nocturne.h"

uint __cdecl support_codec_cpp_CInStreamPipe_isOpen_FUN_00441b00(CInStreamPipe *this_ptr)

{
  int *piVar1;
  uint uVar2;
  
  if (((this_ptr->buffer != (char *)0x0) && (this_ptr->codec != (CCodec *)0x0)) &&
     (piVar1 = this_ptr->source, piVar1 != (int *)0x0)) {
    uVar2 = (**(code **)(*piVar1 + 0x1c))(piVar1);
    return uVar2;
  }
  return 0;
}
