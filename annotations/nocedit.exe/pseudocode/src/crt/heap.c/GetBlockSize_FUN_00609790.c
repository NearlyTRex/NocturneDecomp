// Name: crt_heap.c_GetBlockSize_FUN_00609790
// Address: 00609790
// Address Range: [[00609790, 0060979e]]
// Convention: __cdecl
// Signature: ulong __cdecl crt_heap_c_GetBlockSize_FUN_00609790(void *ptr)

#include "nocturne.h"

ulong __cdecl crt_heap_c_GetBlockSize_FUN_00609790(void *ptr)

{
  return (*(uint *)((int)ptr + -4) & 0xfffffffe) - 4;
}
