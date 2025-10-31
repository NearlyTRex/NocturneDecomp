// Name: crt_heap.c_InsertHeapBlockInOrder_FUN_006095f0
// Address: 006095f0
// Address Range: [[006095f0, 00609666]]
// Convention: __cdecl
// Signature: HeapBlock * crt_heap.c_InsertHeapBlockInOrder_FUN_006095f0(HeapBlock * new_block)
// Cross-references:
//   crt_heap.c_AllocateNewHeapBlock_FUN_00609668 (00609668) at 006096e0 [UNCONDITIONAL_CALL]
// Globals:
//   Heap* g_MainHeap = 00000000

#include "nocturne.h"

HeapBlock * __cdecl crt_heap_c_InsertHeapBlockInOrder_FUN_006095f0(HeapBlock *new_block)

{
  uchar *puVar1;
  HeapBlock *pHVar2;
  HeapBlock *pHVar3;
  HeapBlock *pHVar4;
  
  pHVar3 = (HeapBlock *)g_MainHeap;
  pHVar4 = (HeapBlock *)0x0;
  if (g_MainHeap != (Heap *)0x0) {
    do {
      pHVar2 = pHVar3;
      pHVar3 = pHVar2;
      if (new_block < pHVar2) break;
      pHVar3 = pHVar2->next;
      pHVar4 = pHVar2;
    } while (pHVar3 != (HeapBlock *)0x0);
  }
  new_block->prev = pHVar4;
  new_block->next = pHVar3;
  if (pHVar4 == (HeapBlock *)0x0) {
    g_MainHeap = (Heap *)new_block;
  }
  else {
    pHVar4->next = new_block;
  }
  if (pHVar3 != (HeapBlock *)0x0) {
    pHVar3->prev = new_block;
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


// Assembly code:
// 006095f0: PUSH EBX
//   Label: crt_heap.c_InsertHeapBlockInOrder_FUN_006095f0
// 006095f1: MOV EDX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 006095f5: MOV EAX,[0x00684ed4]
//   XREF to: 00684ed4 (READ)
// 006095fa: XOR EBX,EBX
// 006095fc: TEST EAX,EAX
// 006095fe: JZ 0x0060960d
//   XREF to: 0060960d (CONDITIONAL_JUMP)
// 00609600: CMP EDX,EAX
//   Label: LAB_00609600
// 00609602: JC 0x0060960d
//   XREF to: 0060960d (CONDITIONAL_JUMP)
// 00609604: MOV EBX,EAX
// 00609606: MOV EAX,dword ptr [EAX + 0x8]
// 00609609: TEST EAX,EAX
// 0060960b: JNZ 0x00609600
//   XREF to: 00609600 (CONDITIONAL_JUMP)
// 0060960d: MOV dword ptr [EDX + 0x4],EBX
//   Label: LAB_0060960d
// 00609610: MOV dword ptr [EDX + 0x8],EAX
// 00609613: TEST EBX,EBX
// 00609615: JZ 0x0060961c
//   XREF to: 0060961c (CONDITIONAL_JUMP)
// 00609617: MOV dword ptr [EBX + 0x8],EDX
// 0060961a: JMP 0x00609622
//   XREF to: 00609622 (UNCONDITIONAL_JUMP)
// 0060961c: MOV dword ptr [0x00684ed4],EDX
//   Label: LAB_0060961c
//   XREF to: 00684ed4 (WRITE)
// 00609622: TEST EAX,EAX
//   Label: LAB_00609622
// 00609624: JZ 0x00609629
//   XREF to: 00609629 (CONDITIONAL_JUMP)
// 00609626: MOV dword ptr [EAX + 0x4],EDX
// 00609629: LEA EBX,[EDX + 0x20]
//   Label: LAB_00609629
// 0060962c: ADD EDX,0x2c
// 0060962f: MOV dword ptr [EDX + -0xc],0x0
// 00609636: MOV dword ptr [EDX + -0x1c],0x0
// 0060963d: MOV dword ptr [EDX + -0x14],0x0
// 00609644: MOV dword ptr [EDX + -0x10],0x0
// 0060964b: MOV dword ptr [EDX + -0x8],EBX
// 0060964e: MOV EAX,dword ptr [EDX + -0x2c]
// 00609651: MOV dword ptr [EDX + -0x4],EBX
// 00609654: SUB EAX,0x2c
// 00609657: MOV dword ptr [EDX + -0x20],EBX
// 0060965a: MOV dword ptr [EDX],EAX
// 0060965c: MOV dword ptr [EDX + EAX*0x1],0xffffffff
// 00609663: MOV EAX,EDX
// 00609665: POP EBX
// 00609666: RET
