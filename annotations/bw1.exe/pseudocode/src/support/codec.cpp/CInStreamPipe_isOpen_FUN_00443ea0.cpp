// Name: support_codec.cpp_CInStreamPipe_isOpen_FUN_00443ea0
// Address: 00443ea0
// Address Range: [[00443ea0, 00443ec6]]
// Convention: __cdecl
// Signature: int __cdecl support_codec_cpp_CInStreamPipe_isOpen_FUN_00443ea0(CInStreamPipe *this_ptr)

#include "nocturne.h"

int __cdecl support_codec_cpp_CInStreamPipe_isOpen_FUN_00443ea0(CInStreamPipe *this_ptr)

{
  int *piVar1;
  int iVar2;
  
  if (((this_ptr->buffer != (char *)0x0) && (this_ptr->codec != (CCodec *)0x0)) &&
     (piVar1 = this_ptr->source, piVar1 != (int *)0x0)) {
    iVar2 = (**(code **)(*piVar1 + 0x1c))(piVar1);
    return iVar2;
  }
  return 0;
}
