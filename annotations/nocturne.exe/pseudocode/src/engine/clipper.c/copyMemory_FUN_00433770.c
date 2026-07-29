// Name: engine_clipper.c_copyMemory_FUN_00433770
// Address: 00433770
// Address Range: [[00433770, 00433790]]
// Convention: __cdecl
// Signature: void __cdecl engine_clipper_c_copyMemory_FUN_00433770(void *dest_ptr,void *src_ptr,int byte_count)

#include "nocturne.h"

void __cdecl engine_clipper_c_copyMemory_FUN_00433770(void *dest_ptr,void *src_ptr,int byte_count)

{
  uint uVar1;
  
  for (uVar1 = (uint)byte_count >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(uint *)dest_ptr = *(uint *)src_ptr;
    src_ptr = (uint *)((int)src_ptr + 4);
    dest_ptr = (uint *)((int)dest_ptr + 4);
  }
  for (uVar1 = byte_count & 3; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(byte *)dest_ptr = *(byte *)src_ptr;
    src_ptr = (uint *)((int)src_ptr + 1);
    dest_ptr = (uint *)((int)dest_ptr + 1);
  }
  return;
}
