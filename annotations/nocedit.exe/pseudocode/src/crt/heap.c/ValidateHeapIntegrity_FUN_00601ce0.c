// Name: crt_heap.c_ValidateHeapIntegrity_FUN_00601ce0
// Address: 00601ce0
// Address Range: [[00601ce0, 00601de5]]
// Convention: __cdecl
// Signature: void crt_heap.c_ValidateHeapIntegrity_FUN_00601ce0(void * ptr)
// Cross-references:
//   crt_heap.c_AllocateNewHeapBlock_FUN_00609668 (00609668) at 00609706 [UNCONDITIONAL_CALL]
//   crt_heap.c_ResizeBlockInPlace_FUN_006097b8 (006097b8) at 00609960 [UNCONDITIONAL_CALL]
//   crt_memory.c_free_FUN_00601cd0 (00601cd0) at 00601cd5 [UNCONDITIONAL_CALL]
//   crt_memory.c_realloc_implementation_FUN_00601e08 (00601e08) at 00601e81 [UNCONDITIONAL_CALL]
//   crt_process.c_spawnvp_FUN_0060f39c (0060f39c) at 0060f82d [UNCONDITIONAL_CALL]
// Globals:
//   Heap* g_MainHeap = 00000000
//   Heap* g_SecondaryHeap = 00000000
//   undefined4 DAT_00684edc
//   void* PTR_crt_sync.c_EnterCriticalSection_FUN_00602434_00684f00 = 00602434
//   void* PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684f08 = 00602434
//   undefined4 DAT_03f9b210
//   undefined1 DAT_03f9b850
// Function calls:
//   crt_heap.c_CoalesceAndAddFreeBlock_FUN_006094c0
//   crt_sync.c_CriticalSectionStub_FUN_00602434

#include "nocturne.h"

void __cdecl crt_heap_c_ValidateHeapIntegrity_FUN_00601ce0(void *ptr)

{
  Heap *pHVar1;
  Heap *pHVar2;
  ushort in_DS;
  
  if (ptr != (void *)0x0) {
    (*(code *)PTR_crt_sync_c_EnterCriticalSection_FUN_00602434_00684f00)();
    if (((DAT_03f9b210 == (Heap *)0x0) ||
        ((((ptr < DAT_03f9b210 ||
           (pHVar2 = DAT_03f9b210,
           (void *)((int)&DAT_03f9b210->heap_size + DAT_03f9b210->heap_size) <= ptr)) &&
          ((pHVar2 = (Heap *)DAT_03f9b210->heap_base, pHVar2 == (Heap *)0x0 ||
           ((ptr < pHVar2 || ((void *)((int)&pHVar2->heap_size + pHVar2->heap_size) <= ptr)))))) &&
         ((pHVar2 = DAT_03f9b210->next_heap_block, pHVar2 == (Heap *)0x0 ||
          ((ptr < pHVar2 || ((void *)((int)&pHVar2->heap_size + pHVar2->heap_size) <= ptr)))))))) &&
       ((pHVar1 = g_MainHeap, g_SecondaryHeap == (Heap *)0x0 ||
        ((((ptr < g_SecondaryHeap ||
           (pHVar2 = g_SecondaryHeap,
           (void *)((int)&g_SecondaryHeap->heap_size + g_SecondaryHeap->heap_size) <= ptr)) &&
          ((pHVar2 = (Heap *)g_SecondaryHeap->heap_base, pHVar2 == (Heap *)0x0 ||
           ((ptr < pHVar2 || ((void *)((int)&pHVar2->heap_size + pHVar2->heap_size) <= ptr)))))) &&
         ((pHVar2 = g_SecondaryHeap->next_heap_block, pHVar2 == (Heap *)0x0 ||
          ((ptr < pHVar2 || ((void *)((int)&pHVar2->heap_size + pHVar2->heap_size) <= ptr))))))))))
    {
      while (pHVar2 = pHVar1, pHVar2 != (Heap *)0x0) {
        if ((pHVar2 <= ptr) && (ptr < (void *)((int)&pHVar2->heap_size + pHVar2->heap_size)))
        goto LAB_00601d9c;
        pHVar1 = pHVar2->next_heap_block;
      }
    }
    else {
LAB_00601d9c:
      crt_heap_c_CoalesceAndAddFreeBlock_FUN_006094c0(ptr,(HeapBlock *)(uint)in_DS,(ushort)pHVar2);
      if ((pHVar2 < g_SecondaryHeap) && (DAT_00684edc < pHVar2[1].next_heap_block)) {
        DAT_00684edc = pHVar2[1].next_heap_block;
      }
      DAT_03f9b850 = 0;
      DAT_03f9b210 = pHVar2;
    }
    (*(code *)PTR_crt_sync_c_ExitCriticalSection_FUN_00602434_00684f08)();
  }
  return;
}


// Assembly code:
// 00601ce0: PUSH EBX
//   Label: crt_heap.c_ValidateHeapIntegrity_FUN_00601ce0
// 00601ce1: PUSH ESI
// 00601ce2: PUSH EDI
// 00601ce3: MOV EDI,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 00601ce7: TEST EDI,EDI
// 00601ce9: JZ 0x00601de2
//   XREF to: 00601de2 (CONDITIONAL_JUMP)
// 00601cef: CALL dword ptr [PTR_crt_sync.c_EnterCriticalSection_FUN_00602434_00684f00]
//   XREF to: 00602434 (COMPUTED_CALL)
//   XREF to: 00684f00 (READ)
// 00601cf5: MOV ESI,dword ptr [0x03f9b210]
//   XREF to: 03f9b210 (READ)
// 00601cfb: TEST ESI,ESI
// 00601cfd: JZ 0x00601d3f
//   XREF to: 00601d3f (CONDITIONAL_JUMP)
// 00601cff: CMP ESI,EDI
// 00601d01: JA 0x00601d0f
//   XREF to: 00601d0f (CONDITIONAL_JUMP)
// 00601d03: MOV EAX,dword ptr [ESI]
// 00601d05: ADD EAX,ESI
// 00601d07: CMP EAX,EDI
// 00601d09: JA 0x00601d9c
//   XREF to: 00601d9c (CONDITIONAL_JUMP)
// 00601d0f: MOV EDX,ESI
//   Label: LAB_00601d0f
// 00601d11: MOV ESI,dword ptr [ESI + 0x4]
// 00601d14: TEST ESI,ESI
// 00601d16: JZ 0x00601d28
//   XREF to: 00601d28 (CONDITIONAL_JUMP)
// 00601d18: CMP ESI,EDI
// 00601d1a: JA 0x00601d28
//   XREF to: 00601d28 (CONDITIONAL_JUMP)
// 00601d1c: MOV EAX,dword ptr [ESI]
// 00601d1e: ADD EAX,ESI
// 00601d20: CMP EAX,EDI
// 00601d22: JA 0x00601d9c
//   XREF to: 00601d9c (CONDITIONAL_JUMP)
// 00601d28: MOV ESI,dword ptr [EDX + 0x8]
//   Label: LAB_00601d28
// 00601d2b: TEST ESI,ESI
// 00601d2d: JZ 0x00601d3f
//   XREF to: 00601d3f (CONDITIONAL_JUMP)
// 00601d2f: CMP ESI,EDI
// 00601d31: JA 0x00601d3f
//   XREF to: 00601d3f (CONDITIONAL_JUMP)
// 00601d33: MOV EAX,dword ptr [ESI]
// 00601d35: ADD EAX,ESI
// 00601d37: CMP EAX,EDI
// 00601d39: JA 0x00601d9c
//   XREF to: 00601d9c (CONDITIONAL_JUMP)
// 00601d3f: MOV ESI,dword ptr [0x00684ed8]
//   Label: LAB_00601d3f
//   XREF to: 00684ed8 (READ)
// 00601d45: TEST ESI,ESI
// 00601d47: JZ 0x00601d7d
//   XREF to: 00601d7d (CONDITIONAL_JUMP)
// 00601d49: CMP ESI,EDI
// 00601d4b: JA 0x00601d55
//   XREF to: 00601d55 (CONDITIONAL_JUMP)
// 00601d4d: MOV EAX,dword ptr [ESI]
// 00601d4f: ADD EAX,ESI
// 00601d51: CMP EAX,EDI
// 00601d53: JA 0x00601d9c
//   XREF to: 00601d9c (CONDITIONAL_JUMP)
// 00601d55: MOV EDX,ESI
//   Label: LAB_00601d55
// 00601d57: MOV ESI,dword ptr [ESI + 0x4]
// 00601d5a: TEST ESI,ESI
// 00601d5c: JZ 0x00601d6a
//   XREF to: 00601d6a (CONDITIONAL_JUMP)
// 00601d5e: CMP ESI,EDI
// 00601d60: JA 0x00601d6a
//   XREF to: 00601d6a (CONDITIONAL_JUMP)
// 00601d62: MOV EAX,dword ptr [ESI]
// 00601d64: ADD EAX,ESI
// 00601d66: CMP EAX,EDI
// 00601d68: JA 0x00601d9c
//   XREF to: 00601d9c (CONDITIONAL_JUMP)
// 00601d6a: MOV ESI,dword ptr [EDX + 0x8]
//   Label: LAB_00601d6a
// 00601d6d: TEST ESI,ESI
// 00601d6f: JZ 0x00601d7d
//   XREF to: 00601d7d (CONDITIONAL_JUMP)
// 00601d71: CMP ESI,EDI
// 00601d73: JA 0x00601d7d
//   XREF to: 00601d7d (CONDITIONAL_JUMP)
// 00601d75: MOV EAX,dword ptr [ESI]
// 00601d77: ADD EAX,ESI
// 00601d79: CMP EAX,EDI
// 00601d7b: JA 0x00601d9c
//   XREF to: 00601d9c (CONDITIONAL_JUMP)
// 00601d7d: MOV ESI,dword ptr [0x00684ed4]
//   Label: LAB_00601d7d
//   XREF to: 00684ed4 (READ)
// 00601d83: TEST ESI,ESI
// 00601d85: JZ 0x00601ddc
//   XREF to: 00601ddc (CONDITIONAL_JUMP)
// 00601d87: CMP ESI,EDI
//   Label: LAB_00601d87
// 00601d89: JA 0x00601d93
//   XREF to: 00601d93 (CONDITIONAL_JUMP)
// 00601d8b: MOV EAX,dword ptr [ESI]
// 00601d8d: ADD EAX,ESI
// 00601d8f: CMP EAX,EDI
// 00601d91: JA 0x00601d9c
//   XREF to: 00601d9c (CONDITIONAL_JUMP)
// 00601d93: MOV ESI,dword ptr [ESI + 0x8]
//   Label: LAB_00601d93
// 00601d96: TEST ESI,ESI
// 00601d98: JNZ 0x00601d87
//   XREF to: 00601d87 (CONDITIONAL_JUMP)
// 00601d9a: JMP 0x00601ddc
//   XREF to: 00601ddc (UNCONDITIONAL_JUMP)
// 00601d9c: MOV EAX,0x684ed4
//   Label: LAB_00601d9c
//   XREF to: 00684ed4 (DATA)
// 00601da1: MOV DX,DS
// 00601da3: AND EDX,0xffff
// 00601da9: MOV EBX,ESI
// 00601dab: MOV EAX,EDI
// 00601dad: CALL crt_heap.c_CoalesceAndAddFreeBlock_FUN_006094c0
//   XREF to: 006094c0 (UNCONDITIONAL_CALL)
// 00601db2: MOV EDX,dword ptr [0x00684ed8]
//   XREF to: 00684ed8 (READ)
// 00601db8: MOV dword ptr [0x03f9b210],ESI
//   XREF to: 03f9b210 (WRITE)
// 00601dbe: CMP ESI,EDX
// 00601dc0: JNC 0x00601dd4
//   XREF to: 00601dd4 (CONDITIONAL_JUMP)
// 00601dc2: MOV EBX,dword ptr [0x00684edc]
//   XREF to: 00684edc (READ)
// 00601dc8: MOV EAX,dword ptr [ESI + 0x14]
// 00601dcb: CMP EAX,EBX
// 00601dcd: JBE 0x00601dd4
//   XREF to: 00601dd4 (CONDITIONAL_JUMP)
// 00601dcf: MOV [0x00684edc],EAX
//   XREF to: 00684edc (WRITE)
// 00601dd4: XOR AH,AH
//   Label: LAB_00601dd4
// 00601dd6: MOV byte ptr [0x03f9b850],AH
//   XREF to: 03f9b850 (WRITE)
// 00601ddc: CALL dword ptr [PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684f08]
//   Label: LAB_00601ddc
//   XREF to: 00602434 (COMPUTED_CALL)
//   XREF to: 00684f08 (READ)
// 00601de2: POP EDI
//   Label: LAB_00601de2
// 00601de3: POP ESI
// 00601de4: POP EBX
// 00601de5: RET
