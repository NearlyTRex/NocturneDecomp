// Name: support_trstream.cpp_CInStreamMemory_seek_FUN_005a1360
// Address: 005a1360
// Address Range: [[005a1360, 005a138f] [005a1393, 005a13af]]
// Convention: __cdecl
// Signature: longlong __cdecl support_trstream_cpp_CInStreamMemory_seek_FUN_005a1360(CInStreamMemory *this_ptr,int offset,uint origin)

#include "nocturne.h"

longlong __cdecl support_trstream_cpp_CInStreamMemory_seek_FUN_005a1360(CInStreamMemory *this_ptr,int offset,uint origin)

{
  if (this_ptr->data == (char *)0x0) {
    return CONCAT44(this_ptr,0xfffffffe);
  }
  if (origin != 0) {
    if (origin < 2) {
      offset = offset + this_ptr->position;
    }
    else {
      if (origin != 2) {
        return ZEXT48(this_ptr) << 0x20;
      }
      offset = offset + this_ptr->size;
    }
  }
  if ((-1 < offset) && (offset <= this_ptr->size)) {
    this_ptr->position = offset;
    return CONCAT44(this_ptr,1);
  }
  return ZEXT48(this_ptr) << 0x20;
}
