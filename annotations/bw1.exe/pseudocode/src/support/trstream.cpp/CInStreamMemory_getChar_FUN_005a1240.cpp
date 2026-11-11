// Name: support_trstream.cpp_CInStreamMemory_getChar_FUN_005a1240
// Address: 005a1240
// Address Range: [[005a1240, 005a1281]]
// Convention: __cdecl
// Signature: uint __cdecl support_trstream_cpp_CInStreamMemory_getChar_FUN_005a1240(CInStreamMemory *this_ptr)

#include "nocturne.h"

uint __cdecl support_trstream_cpp_CInStreamMemory_getChar_FUN_005a1240(CInStreamMemory *this_ptr)

{
  byte bVar1;
  int iVar2;
  
  iVar2 = this_ptr->position;
  if (this_ptr->size <= iVar2) {
    return 0xffffffff;
  }
  if (this_ptr->data == (char *)0x0) {
    return 0xfffffffe;
  }
  bVar1 = this_ptr->data[iVar2];
  this_ptr->position = iVar2 + 1;
  return (uint)bVar1;
}
