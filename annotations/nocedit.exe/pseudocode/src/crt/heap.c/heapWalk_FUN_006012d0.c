// Name: crt_heap.c_heapWalk_FUN_006012d0
// Address: 006012d0
// Address Range: [[006012d0, 00601372]]
// Convention: __cdecl
// Signature: int crt_heap.c_heapWalk_FUN_006012d0(HeapState * heap_state_ptr, Heap * heap_ptr)

#include "nocturne.h"

int __cdecl crt_heap_c_heapWalk_FUN_006012d0(HeapState *heap_state_ptr,Heap *heap_ptr)

{
  Heap *pHVar1;
  Heap *pHVar2;
  short in_DS;
  
  if (heap_ptr == (Heap *)0x0) {
    return 1;
  }
  pHVar1 = heap_state_ptr->current_block_ptr;
  if (pHVar1 == (Heap *)0x0) {
    pHVar2 = (Heap *)&heap_ptr[3].next_heap_block;
  }
  else {
    pHVar2 = g_MainHeap->next_heap_block;
    heap_ptr = g_MainHeap;
    while ((pHVar2 != (Heap *)0x0 &&
           ((pHVar1 < heap_ptr ||
            ((Heap *)((int)&heap_ptr->heap_size + heap_ptr->heap_size) <= pHVar1))))) {
      heap_ptr = heap_ptr->next_heap_block;
      pHVar2 = heap_ptr->next_heap_block;
    }
    pHVar2 = (Heap *)((int)&pHVar1->heap_size + (pHVar1->heap_size & 0xfffffffeU));
    if (pHVar2 <= pHVar1) {
      return 3;
    }
  }
  while( true ) {
    if (pHVar2->heap_size != -1) {
      heap_state_ptr->allocation_status = 1;
      heap_state_ptr->segment_selector = in_DS;
      heap_state_ptr->current_block_ptr = pHVar2;
      heap_state_ptr->block_size = pHVar2->heap_size & 0xfffffffe;
      if ((pHVar2->heap_size & 1) != 0) {
        heap_state_ptr->allocation_status = 0;
      }
      return 0;
    }
    heap_ptr = heap_ptr->next_heap_block;
    if (heap_ptr == (Heap *)0x0) break;
    pHVar2 = (Heap *)&heap_ptr[3].next_heap_block;
  }
  heap_state_ptr->segment_selector = 0;
  heap_state_ptr->allocation_status = 0;
  heap_state_ptr->block_size = 0;
  heap_state_ptr->current_block_ptr = (void *)0x0;
  return 4;
}
