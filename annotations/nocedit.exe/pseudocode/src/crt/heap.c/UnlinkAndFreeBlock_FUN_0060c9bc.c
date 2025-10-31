// Name: crt_heap.c_UnlinkAndFreeBlock_FUN_0060c9bc
// Address: 0060c9bc
// Address Range: [[0060c9bc, 0060c9ed]]
// Convention: __cdecl
// Signature: void crt_heap.c_UnlinkAndFreeBlock_FUN_0060c9bc(HeapBlock * block)
// Cross-references:
//   crt_heap.c_CompactHeapBlocks_FUN_0060c920 (0060c920) at 0060c943 [UNCONDITIONAL_CALL]
// Globals:
//   Heap* g_MainHeap = 00000000
// Function calls:
//   crt_heap.c_VirtualFreeBlock_FUN_0060c95c

#include "nocturne.h"

void __cdecl crt_heap_c_UnlinkAndFreeBlock_FUN_0060c9bc(HeapBlock *block)

{
  HeapBlock *pHVar1;
  HeapBlock *pHVar2;
  HeapBlock *pHVar3;
  int iVar4;
  
  pHVar1 = block->prev;
  pHVar2 = block->next;
  iVar4 = crt_heap_c_VirtualFreeBlock_FUN_0060c95c(block);
  if (iVar4 == 0) {
    pHVar3 = pHVar2;
    if (pHVar1 != (HeapBlock *)0x0) {
      pHVar1->next = pHVar2;
      pHVar3 = (HeapBlock *)g_MainHeap;
    }
    g_MainHeap = (Heap *)pHVar3;
    if (pHVar2 != (HeapBlock *)0x0) {
      pHVar2->prev = pHVar1;
    }
  }
  return;
}


// Assembly code:
// 0060c9bc: PUSH EBX
//   Label: crt_heap.c_UnlinkAndFreeBlock_FUN_0060c9bc
// 0060c9bd: PUSH ESI
// 0060c9be: MOV EAX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 0060c9c2: PUSH EAX
// 0060c9c3: MOV ESI,dword ptr [EAX + 0x4]
// 0060c9c6: MOV EBX,dword ptr [EAX + 0x8]
// 0060c9c9: CALL crt_heap.c_VirtualFreeBlock_FUN_0060c95c
//   XREF to: 0060c95c (UNCONDITIONAL_CALL)
// 0060c9ce: ADD ESP,0x4
// 0060c9d1: TEST EAX,EAX
// 0060c9d3: JNZ 0x0060c9eb
//   XREF to: 0060c9eb (CONDITIONAL_JUMP)
// 0060c9d5: TEST ESI,ESI
// 0060c9d7: JNZ 0x0060c9e1
//   XREF to: 0060c9e1 (CONDITIONAL_JUMP)
// 0060c9d9: MOV dword ptr [0x00684ed4],EBX
//   XREF to: 00684ed4 (WRITE)
// 0060c9df: JMP 0x0060c9e4
//   XREF to: 0060c9e4 (UNCONDITIONAL_JUMP)
// 0060c9e1: MOV dword ptr [ESI + 0x8],EBX
//   Label: LAB_0060c9e1
// 0060c9e4: TEST EBX,EBX
//   Label: LAB_0060c9e4
// 0060c9e6: JZ 0x0060c9eb
//   XREF to: 0060c9eb (CONDITIONAL_JUMP)
// 0060c9e8: MOV dword ptr [EBX + 0x4],ESI
// 0060c9eb: POP ESI
//   Label: LAB_0060c9eb
// 0060c9ec: POP EBX
// 0060c9ed: RET
