// Name: crt_heap.c_CompactHeapBlocks_FUN_0060c920
// Address: 0060c920
// Address Range: [[0060c920, 0060c95b]]
// Convention: __cdecl
// Signature: void crt_heap.c_CompactHeapBlocks_FUN_0060c920(void)
// Cross-references:
//   crt_heap.c_SystemAllocWrapper_FUN_00609718 (00609718) at 00609718 [UNCONDITIONAL_CALL]
//   crt_unknown.c_staticFinal_FUN_0060a4cc (0060a4cc) at 0060a510 [UNCONDITIONAL_CALL]
// Globals:
//   Heap* g_MainHeap = 00000000
//   void* PTR_crt_sync.c_EnterCriticalSection_FUN_00602434_00684f00 = 00602434
//   void* PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684f08 = 00602434
// Function calls:
//   crt_heap.c_UnlinkAndFreeBlock_FUN_0060c9bc
//   crt_sync.c_CriticalSectionStub_FUN_00602434

#include "nocturne.h"

void __cdecl crt_heap_c_CompactHeapBlocks_FUN_0060c920(void)

{
  HeapBlock *pHVar1;
  HeapBlock *block;
  
  (*(code *)PTR_crt_sync_c_EnterCriticalSection_FUN_00602434_00684f00)();
  pHVar1 = (HeapBlock *)g_MainHeap;
  while (block = pHVar1, block != (HeapBlock *)0x0) {
    pHVar1 = block->next;
    if (block->size - 0x2c == **(int **)(block->free_list_area + 4)) {
      crt_heap_c_UnlinkAndFreeBlock_FUN_0060c9bc(block);
    }
  }
  (*(code *)PTR_crt_sync_c_ExitCriticalSection_FUN_00602434_00684f08)();
  return;
}


// Assembly code:
// 0060c920: PUSH EBX
//   Label: crt_heap.c_CompactHeapBlocks_FUN_0060c920
// 0060c921: PUSH ESI
// 0060c922: CALL dword ptr [PTR_crt_sync.c_EnterCriticalSection_FUN_00602434_00684f00]
//   XREF to: 00602434 (COMPUTED_CALL)
//   XREF to: 00684f00 (READ)
// 0060c928: MOV EAX,[0x00684ed4]
//   XREF to: 00684ed4 (READ)
// 0060c92d: TEST EAX,EAX
// 0060c92f: JZ 0x0060c951
//   XREF to: 0060c951 (CONDITIONAL_JUMP)
// 0060c931: MOV EDX,dword ptr [EAX]
//   Label: LAB_0060c931
// 0060c933: MOV ECX,dword ptr [EAX + 0x24]
// 0060c936: SUB EDX,0x2c
// 0060c939: MOV ESI,dword ptr [ECX]
// 0060c93b: MOV EBX,dword ptr [EAX + 0x8]
// 0060c93e: CMP EDX,ESI
// 0060c940: JNZ 0x0060c94b
//   XREF to: 0060c94b (CONDITIONAL_JUMP)
// 0060c942: PUSH EAX
// 0060c943: CALL crt_heap.c_UnlinkAndFreeBlock_FUN_0060c9bc
//   XREF to: 0060c9bc (UNCONDITIONAL_CALL)
// 0060c948: ADD ESP,0x4
// 0060c94b: MOV EAX,EBX
//   Label: LAB_0060c94b
// 0060c94d: TEST EBX,EBX
// 0060c94f: JNZ 0x0060c931
//   XREF to: 0060c931 (CONDITIONAL_JUMP)
// 0060c951: CALL dword ptr [PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684f08]
//   Label: LAB_0060c951
//   XREF to: 00602434 (COMPUTED_CALL)
//   XREF to: 00684f08 (READ)
// 0060c957: XOR EAX,EAX
// 0060c959: POP ESI
// 0060c95a: POP EBX
// 0060c95b: RET
