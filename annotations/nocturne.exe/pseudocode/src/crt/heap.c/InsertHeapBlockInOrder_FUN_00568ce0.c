// Name: crt_heap.c_InsertHeapBlockInOrder_FUN_00568ce0
// Address: 00568ce0
// Address Range: [[00568ce0, 00568d56]]
// Convention: __cdecl
// Signature: HeapBlock * __cdecl crt_heap_c_InsertHeapBlockInOrder_FUN_00568ce0(HeapBlock *new_block)

#include "nocturne.h"

HeapBlock * __cdecl InsertHeapBlockInOrder(HeapBlock *new_block)

{
  uchar *puVar1;
  HeapBlock *pHVar2;
  HeapBlock *pHVar3;
  
  pHVar3 = (HeapBlock *)0x0;
  for (pHVar2 = DAT_005c1680; (pHVar2 != (HeapBlock *)0x0 && (pHVar2 <= new_block));
      pHVar2 = pHVar2->next) {
    pHVar3 = pHVar2;
  }
  new_block->prev = pHVar3;
  new_block->next = pHVar2;
  if (pHVar3 == (HeapBlock *)0x0) {
    DAT_005c1680 = new_block;
  }
  else {
    pHVar3->next = new_block;
  }
  if (pHVar2 != (HeapBlock *)0x0) {
    pHVar2->prev = new_block;
  }
  puVar1 = new_block->free_list_area;
  pHVar3 = new_block + 1;
  new_block->free_list_area[0] = '\0';
  new_block->free_list_area[1] = '\0';
  new_block->free_list_area[2] = '\0';
  new_block->free_list_area[3] = '\0';
  new_block->largest_free = 0;
  new_block->alloc_count = 0;
  new_block->free_count = 0;
  *(uchar **)(new_block->free_list_area + 4) = puVar1;
  new_block->data_area = puVar1;
  new_block->heap_info = (uint)puVar1;
  pHVar3->size = new_block->size - 0x2c;
  puVar1 = pHVar3[-1].free_list_area + (new_block->size - 0x20);
  puVar1[0] = 0xff;
  puVar1[1] = 0xff;
  puVar1[2] = 0xff;
  puVar1[3] = 0xff;
  return pHVar3;
}
