// Name: crt_heap.c_free_FUN_10005b30
// Address: 10005b30
// Address Range: [[10005b30, 10005b47]]
// Convention: __cdecl
// Signature: void __cdecl crt_heap_c_free_FUN_10005b30(void *block)

#include "nocturne.h"

void __cdecl free(void *block)

{
  if (block != (void *)0x0) {
    HeapFree(DAT_10241974,0,block);
  }
  return;
}
