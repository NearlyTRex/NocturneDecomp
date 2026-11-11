// Name: support_trstream.cpp_CInStreamMemory_seek_FUN_0057d710
// Address: 0057d710
// Address Range: [[0057d710, 0057d73f] [0057d743, 0057d75f]]
// Convention: __cdecl
// Signature: longlong __cdecl support_trstream_cpp_CInStreamMemory_seek_FUN_0057d710(CInStreamMemory *this_ptr,int param_2,uint param_3)

#include "nocturne.h"

longlong __cdecl support_trstream_cpp_CInStreamMemory_seek_FUN_0057d710(CInStreamMemory *this_ptr,int param_2,uint param_3)

{
  if (this_ptr->data == (char *)0x0) {
    return CONCAT44(this_ptr,0xfffffffe);
  }
  if (param_3 != 0) {
    if (param_3 < 2) {
      param_2 = param_2 + this_ptr->position;
    }
    else {
      if (param_3 != 2) {
        return ZEXT48(this_ptr) << 0x20;
      }
      param_2 = param_2 + this_ptr->size;
    }
  }
  if ((-1 < param_2) && (param_2 <= this_ptr->size)) {
    this_ptr->position = param_2;
    return CONCAT44(this_ptr,1);
  }
  return ZEXT48(this_ptr) << 0x20;
}
