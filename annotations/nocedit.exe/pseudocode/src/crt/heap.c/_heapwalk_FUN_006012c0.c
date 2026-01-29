// Name: crt_heap.c__heapwalk_FUN_006012c0
// Address: 006012c0
// Address Range: [[006012c0, 006012cd]]
// Convention: __cdecl
// Signature: int __cdecl crt_heap_c__heapwalk_FUN_006012c0(void *heap_state_ptr)

#include "nocturne.h"

int __cdecl _heapwalk(void *heap_state_ptr)

{
  int iVar1;
  
  iVar1 = heapCheck(heap_state_ptr);
  return iVar1;
}
