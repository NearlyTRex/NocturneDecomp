// Name: crt_heap.c_heapWalk_FUN_006012d0
// Address: 006012d0
// Address Range: [[006012d0, 00601372]]
// Convention: __cdecl
// Signature: int crt_heap.c_heapWalk_FUN_006012d0(HeapState * heap_state_ptr, Heap * heap_ptr)
// Cross-references:
//   crt_heap.c_heapCheck_FUN_00601374 (00601374) at 00601387 [UNCONDITIONAL_CALL]
//   crt_watcom.c_heapchk_FUN_00600ad0 (00600ad0) at 00600b1d [UNCONDITIONAL_CALL]
// Globals:
//   Heap* g_MainHeap = 00000000

#include "nocturne.h"

int __cdecl crt_heap_c_heapWalk_FUN_006012d0(HeapState *heap_state_ptr,Heap *heap_ptr)

{
  Heap *pHVar1;
  Heap *pHVar2;
  short in_DS;
  
  if (heap_ptr == (Heap *)0x0) {
    return 1;
  }
  pHVar1 = (Heap *)heap_state_ptr->current_block_ptr;
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


// Assembly code:
// 006012d0: PUSH EBX
//   Label: crt_heap.c_heapWalk_FUN_006012d0
// 006012d1: PUSH EBP
// 006012d2: MOV ECX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 006012d6: MOV EAX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 006012da: TEST EAX,EAX
// 006012dc: JNZ 0x006012e6
//   XREF to: 006012e6 (CONDITIONAL_JUMP)
// 006012de: MOV EAX,0x1
// 006012e3: POP EBP
// 006012e4: POP EBX
// 006012e5: RET
// 006012e6: MOV EDX,dword ptr [ECX]
//   Label: LAB_006012e6
// 006012e8: TEST EDX,EDX
// 006012ea: JNZ 0x006012f1
//   XREF to: 006012f1 (CONDITIONAL_JUMP)
// 006012ec: LEA EDX,[EAX + 0x2c]
// 006012ef: JMP 0x00601326
//   XREF to: 00601326 (UNCONDITIONAL_JUMP)
// 006012f1: MOV EAX,[0x00684ed4]
//   Label: LAB_006012f1
//   XREF to: 00684ed4 (READ)
// 006012f6: CMP dword ptr [EAX + 0x8],0x0
// 006012fa: JZ 0x00601311
//   XREF to: 00601311 (CONDITIONAL_JUMP)
// 006012fc: CMP EAX,EDX
//   Label: LAB_006012fc
// 006012fe: JA 0x00601308
//   XREF to: 00601308 (CONDITIONAL_JUMP)
// 00601300: MOV EBX,dword ptr [EAX]
// 00601302: ADD EBX,EAX
// 00601304: CMP EBX,EDX
// 00601306: JA 0x00601311
//   XREF to: 00601311 (CONDITIONAL_JUMP)
// 00601308: MOV EAX,dword ptr [EAX + 0x8]
//   Label: LAB_00601308
// 0060130b: CMP dword ptr [EAX + 0x8],0x0
// 0060130f: JNZ 0x006012fc
//   XREF to: 006012fc (CONDITIONAL_JUMP)
// 00601311: MOV EBX,dword ptr [EDX]
//   Label: LAB_00601311
// 00601313: AND BL,0xfe
// 00601316: ADD EBX,EDX
// 00601318: CMP EBX,EDX
// 0060131a: JA 0x00601324
//   XREF to: 00601324 (CONDITIONAL_JUMP)
// 0060131c: MOV EAX,0x3
// 00601321: POP EBP
// 00601322: POP EBX
// 00601323: RET
// 00601324: MOV EDX,EBX
//   Label: LAB_00601324
// 00601326: CMP dword ptr [EDX],-0x1
//   Label: LAB_00601326
// 00601329: JNZ 0x0060134f
//   XREF to: 0060134f (CONDITIONAL_JUMP)
// 0060132b: MOV EBP,dword ptr [EAX + 0x8]
// 0060132e: TEST EBP,EBP
// 00601330: JNZ 0x00601348
//   XREF to: 00601348 (CONDITIONAL_JUMP)
// 00601332: MOV word ptr [ECX + 0x4],0x0
// 00601338: MOV dword ptr [ECX + 0xa],EBP
// 0060133b: MOV dword ptr [ECX + 0x6],EBP
// 0060133e: MOV EAX,0x4
// 00601343: MOV dword ptr [ECX],EBP
// 00601345: POP EBP
// 00601346: POP EBX
// 00601347: RET
// 00601348: MOV EAX,EBP
//   Label: LAB_00601348
// 0060134a: LEA EDX,[EBP + 0x2c]
// 0060134d: JMP 0x00601326
//   XREF to: 00601326 (UNCONDITIONAL_JUMP)
// 0060134f: MOV dword ptr [ECX + 0xa],0x1
//   Label: LAB_0060134f
// 00601356: MOV word ptr [ECX + 0x4],DS
// 00601359: MOV dword ptr [ECX],EDX
// 0060135b: MOV EAX,dword ptr [EDX]
// 0060135d: AND AL,0xfe
// 0060135f: MOV dword ptr [ECX + 0x6],EAX
// 00601362: TEST byte ptr [EDX],0x1
// 00601365: JZ 0x0060136e
//   XREF to: 0060136e (CONDITIONAL_JUMP)
// 00601367: MOV dword ptr [ECX + 0xa],0x0
// 0060136e: XOR EAX,EAX
//   Label: LAB_0060136e
// 00601370: POP EBP
// 00601371: POP EBX
// 00601372: RET
