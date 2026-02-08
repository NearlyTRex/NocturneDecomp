// Name: crt_heap.c__heapwalk_FUN_006012c0
// Address: 006012c0
// Address Range: [[006012c0, 006012cd]]
// Convention: __cdecl
// Signature: int __cdecl crt_heap_c__heapwalk_FUN_006012c0(_heapinfo *heap_info)

#include "nocturne.h"

int __cdecl _heapwalk(_heapinfo *heap_info)

{
  int iVar1;
  
  iVar1 = heapCheck(heap_info);
  return iVar1;
}
