// Name: engine_clipper.c_copyMemory_FUN_00437200
// Address: 00437200
// MANUAL RECONSTRUCTION
// Address Range: [[00437200, 00437220]]
// Convention: __cdecl
// Signature: void __cdecl engine_clipper_c_copyMemory_FUN_00437200(void *dest_ptr,void *src_ptr,int byte_count)

#include "nocturne.h"

void __cdecl engine_clipper_c_copyMemory_FUN_00437200(void *dest_ptr,void *src_ptr,int byte_count)

{
  memcpy(dest_ptr, src_ptr, byte_count);
  return;
}
