// Name: crt_heap.c_GetBlockSize_FUN_0056afc0
// Address: 0056afc0
// Address Range: [[0056afc0, 0056afce]]
// Convention: __cdecl
// Signature: ulong __cdecl crt_heap_c_GetBlockSize_FUN_0056afc0(void *ptr)

#include "nocturne.h"

ulong __cdecl GetBlockSize(void *ptr)

{
  return (*(uint *)((int)ptr + -4) & 0xfffffffe) - 4;
}
