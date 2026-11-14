// Name: support_codec.cpp_CInStreamPipe_fillBuffer_FUN_00444020
// Address: 00444020
// Address Range: [[00444020, 0044411a]]
// Convention: __cdecl
// Signature: undefined4 __cdecl support_codec_cpp_CInStreamPipe_fillBuffer_FUN_00444020(CInStreamPipe *this_ptr)

#include "nocturne.h"

uint __cdecl support_codec_cpp_CInStreamPipe_fillBuffer_FUN_00444020(CInStreamPipe *this_ptr)

{
  int iVar1;
  COutStreamMemory local_24;
  
  this_ptr->position = 0;
  this_ptr->buffer_length = 0;
  if (this_ptr->codec_finished != 0) {
    return 0xffffffff;
  }
  support_trstream_cpp_COutStreamMemory_ctorOpen_FUN_005a1ad0
            (&local_24,this_ptr->buffer,this_ptr->buffer_size);
  iVar1 = (**(code **)((int)this_ptr->codec->vtable + 8))
                    (this_ptr->codec,this_ptr->source,&local_24);
  if (iVar1 != 0) {
    if (iVar1 == 1) {
      iVar1 = (**(code **)((int)this_ptr->codec->vtable + 0xc))(this_ptr->codec,&local_24);
      if (iVar1 == 0) goto LAB_004440c6;
      if (iVar1 == 1) {
        this_ptr->codec_finished = 1;
      }
    }
    iVar1 = support_trstream_cpp_COutStreamMemory_tell_FUN_005a1d10(&local_24);
    if (iVar1 < 0) {
      support_trstream_cpp_COutStreamMemory_dtor_FUN_005a1b60(&local_24,0);
      return 0xfffffffe;
    }
    if (iVar1 == 0) {
      support_trstream_cpp_COutStreamMemory_dtor_FUN_005a1b60(&local_24,0);
      return 0xffffffff;
    }
    this_ptr->buffer_length = iVar1;
    support_trstream_cpp_COutStreamMemory_dtor_FUN_005a1b60(&local_24,0);
    return 0;
  }
LAB_004440c6:
  support_trstream_cpp_COutStreamMemory_dtor_FUN_005a1b60(&local_24,0);
  return 0xfffffffe;
}
