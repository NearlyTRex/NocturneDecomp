// Name: crt_heap.c__heapwalk_FUN_00566b90
// Address: 00566b90
// Address Range: [[00566b90, 00566b9d]]
// Convention: __cdecl
// Signature: int __cdecl crt_heap_c__heapwalk_FUN_00566b90(_heapinfo *heap_info)

#include "nocturne.h"

int __cdecl _heapwalk(_heapinfo *heap_info)

{
  int iVar1;
  
  iVar1 = heapCheck(heap_info);
  return iVar1;
}
