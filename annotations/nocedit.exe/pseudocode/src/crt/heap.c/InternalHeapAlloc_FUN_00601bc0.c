// Name: crt_heap.c_InternalHeapAlloc_FUN_00601bc0
// Address: 00601bc0
// Address Range: [[00601bc0, 00601ccd]]
// Convention: __cdecl
// Signature: void * crt_heap.c_InternalHeapAlloc_FUN_00601bc0(ulong size)
// Cross-references:
//   crt_memory.c_malloc_FUN_00601bb0 (00601bb0) at 00601bb5 [UNCONDITIONAL_CALL]
//   crt_memory.c_realloc_implementation_FUN_00601e08 (00601e08) at 00601e56 [UNCONDITIONAL_CALL]
//   crt_process.c_build_cmdline_FUN_00610258 (00610258) at 006102c8 [UNCONDITIONAL_CALL]
//   crt_process.c_spawnvp_FUN_0060f39c (0060f39c) at 0060f4f3 [UNCONDITIONAL_CALL]
//   crt_unknown.c_staticInit_FUN_00608f20 (00608f20) at 00608f4d [UNCONDITIONAL_CALL]
// Globals:
//   Heap* g_MainHeap = 00000000
//   Heap* g_SecondaryHeap = 00000000
//   undefined4 DAT_00684edc
//   void* PTR_crt_sync.c_EnterCriticalSection_FUN_00602434_00684f00 = 00602434
//   void* PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684f08 = 00602434
//   undefined1 DAT_03f9b850
// Function calls:
//   crt_heap.c_AllocateFromFreeList_FUN_00609410
//   crt_heap.c_AllocatorFallbackStub_FUN_00609780
//   crt_heap.c_SystemAllocWrapper_FUN_00609718
//   crt_sync.c_CriticalSectionStub_FUN_00602434

#include "nocturne.h"

void * __cdecl crt_heap_c_InternalHeapAlloc_FUN_00601bc0(ulong size)

{
  Heap *pHVar1;
  bool bVar2;
  void *pvVar3;
  int iVar4;
  Heap *pHVar5;
  ushort in_DS;
  void *pvVar6;
  Heap *local_24;
  
  if ((size == 0) || (0xffffffd4 < size)) {
    return (void *)0x0;
  }
  local_24 = (Heap *)(size + 0xb & 0xfffffff8);
  if (local_24 < (Heap *)0x10) {
    local_24 = (Heap *)0x10;
  }
  (*(code *)PTR_crt_sync_c_EnterCriticalSection_FUN_00602434_00684f00)();
  pvVar6 = (void *)0x0;
  bVar2 = false;
  while( true ) {
    while( true ) {
      if (DAT_00684edc < local_24) {
        pHVar5 = g_SecondaryHeap;
        if (g_SecondaryHeap == (Heap *)0x0) {
          DAT_00684edc = g_SecondaryHeap;
          pHVar5 = g_MainHeap;
        }
      }
      else {
        DAT_00684edc = (Heap *)0x0;
        pHVar5 = g_MainHeap;
      }
      for (; pHVar5 != (Heap *)0x0; pHVar5 = pHVar5->next_heap_block) {
        pHVar1 = pHVar5[1].next_heap_block;
        g_SecondaryHeap = pHVar5;
        if ((size <= pHVar1) &&
           (pvVar6 = crt_heap_c_AllocateFromFreeList_FUN_00609410
                               (size,(HeapBlock *)(uint)in_DS,(ushort)pvVar6), pvVar6 != (void *)0x0
           )) goto LAB_00601cb0;
        if (DAT_00684edc < pHVar1) {
          DAT_00684edc = pHVar1;
        }
      }
      if ((bVar2) ||
         (pvVar3 = crt_heap_c_SystemAllocWrapper_FUN_00609718(size), pvVar3 == (void *)0x0)) break;
      bVar2 = true;
    }
    iVar4 = crt_heap_c_AllocatorFallbackStub_FUN_00609780(size);
    if (iVar4 == 0) break;
    bVar2 = false;
  }
LAB_00601cb0:
  DAT_03f9b850 = 0;
  (*(code *)PTR_crt_sync_c_ExitCriticalSection_FUN_00602434_00684f08)();
  return pvVar6;
}


// Assembly code:
// 00601bc0: PUSH EBX
//   Label: crt_heap.c_InternalHeapAlloc_FUN_00601bc0
// 00601bc1: PUSH ESI
// 00601bc2: PUSH EDI
// 00601bc3: PUSH ES
// 00601bc4: PUSH FS
// 00601bc6: PUSH GS
// 00601bc8: PUSH EBP
// 00601bc9: SUB ESP,0xc
// 00601bcc: MOV EBP,dword ptr [ESP + 0x2c]
//   XREF to: Stack[0x4] (READ)
// 00601bd0: TEST EBP,EBP
// 00601bd2: JZ 0x00601bd9
//   XREF to: 00601bd9 (CONDITIONAL_JUMP)
// 00601bd4: CMP EBP,-0x2c
// 00601bd7: JBE 0x00601be0
//   XREF to: 00601be0 (CONDITIONAL_JUMP)
// 00601bd9: XOR EAX,EAX
//   Label: LAB_00601bd9
// 00601bdb: JMP 0x00601cc1
//   XREF to: 00601cc1 (UNCONDITIONAL_JUMP)
// 00601be0: LEA EAX,[EBP + 0xb]
//   Label: LAB_00601be0
// 00601be3: AND AL,0xf8
// 00601be5: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 00601be9: CMP EAX,0x10
// 00601bec: JNC 0x00601bf6
//   XREF to: 00601bf6 (CONDITIONAL_JUMP)
// 00601bee: MOV dword ptr [ESP + 0x4],0x10
//   XREF to: Stack[-0x24] (WRITE)
// 00601bf6: CALL dword ptr [PTR_crt_sync.c_EnterCriticalSection_FUN_00602434_00684f00]
//   Label: LAB_00601bf6
//   XREF to: 00602434 (COMPUTED_CALL)
//   XREF to: 00684f00 (READ)
// 00601bfc: XOR ECX,ECX
// 00601bfe: XOR AH,AH
// 00601c00: MOV dword ptr [ESP],ECX
// 00601c03: MOV byte ptr [ESP + 0x8],AH
// 00601c07: MOV EAX,dword ptr [ESP + 0x4]
//   Label: LAB_00601c07
// 00601c0b: CMP EAX,dword ptr [0x00684edc]
//   XREF to: 00684edc (READ)
// 00601c11: JBE 0x00601c2b
//   XREF to: 00601c2b (CONDITIONAL_JUMP)
// 00601c13: MOV ESI,dword ptr [0x00684ed8]
//   XREF to: 00684ed8 (READ)
// 00601c19: TEST ESI,ESI
// 00601c1b: JNZ 0x00601c39
//   XREF to: 00601c39 (CONDITIONAL_JUMP)
// 00601c1d: MOV dword ptr [0x00684edc],ESI
//   XREF to: 00684edc (WRITE)
// 00601c23: MOV ESI,dword ptr [0x00684ed4]
//   XREF to: 00684ed4 (READ)
// 00601c29: JMP 0x00601c39
//   XREF to: 00601c39 (UNCONDITIONAL_JUMP)
// 00601c2b: XOR EDI,EDI
//   Label: LAB_00601c2b
// 00601c2d: MOV ESI,dword ptr [0x00684ed4]
//   XREF to: 00684ed4 (READ)
// 00601c33: MOV dword ptr [0x00684edc],EDI
//   XREF to: 00684edc (WRITE)
// 00601c39: TEST ESI,ESI
//   Label: LAB_00601c39
// 00601c3b: JZ 0x00601c7a
//   XREF to: 00601c7a (CONDITIONAL_JUMP)
// 00601c3d: MOV EDI,dword ptr [ESI + 0x14]
// 00601c40: MOV dword ptr [0x00684ed8],ESI
//   XREF to: 00684ed8 (WRITE)
// 00601c46: CMP EDI,EBP
// 00601c48: JC 0x00601c67
//   XREF to: 00601c67 (CONDITIONAL_JUMP)
// 00601c4a: MOV EAX,0x684ed4
//   XREF to: 00684ed4 (DATA)
// 00601c4f: MOV DX,DS
// 00601c51: AND EDX,0xffff
// 00601c57: MOV EBX,ESI
// 00601c59: MOV EAX,EBP
// 00601c5b: CALL crt_heap.c_AllocateFromFreeList_FUN_00609410
//   XREF to: 00609410 (UNCONDITIONAL_CALL)
// 00601c60: MOV dword ptr [ESP],EAX
// 00601c63: TEST EAX,EAX
// 00601c65: JNZ 0x00601cb0
//   XREF to: 00601cb0 (CONDITIONAL_JUMP)
// 00601c67: CMP EDI,dword ptr [0x00684edc]
//   Label: LAB_00601c67
//   XREF to: 00684edc (READ)
// 00601c6d: JBE 0x00601c75
//   XREF to: 00601c75 (CONDITIONAL_JUMP)
// 00601c6f: MOV dword ptr [0x00684edc],EDI
//   XREF to: 00684edc (WRITE)
// 00601c75: MOV ESI,dword ptr [ESI + 0x8]
//   Label: LAB_00601c75
// 00601c78: JMP 0x00601c39
//   XREF to: 00601c39 (UNCONDITIONAL_JUMP)
// 00601c7a: CMP byte ptr [ESP + 0x8],0x0
//   Label: LAB_00601c7a
// 00601c7f: JNZ 0x00601c8e
//   XREF to: 00601c8e (CONDITIONAL_JUMP)
// 00601c81: PUSH EBP
// 00601c82: CALL crt_heap.c_SystemAllocWrapper_FUN_00609718
//   XREF to: 00609718 (UNCONDITIONAL_CALL)
// 00601c87: ADD ESP,0x4
// 00601c8a: TEST EAX,EAX
// 00601c8c: JNZ 0x00601ca6
//   XREF to: 00601ca6 (CONDITIONAL_JUMP)
// 00601c8e: PUSH EBP
//   Label: LAB_00601c8e
// 00601c8f: CALL crt_heap.c_AllocatorFallbackStub_FUN_00609780
//   XREF to: 00609780 (UNCONDITIONAL_CALL)
// 00601c94: ADD ESP,0x4
// 00601c97: TEST EAX,EAX
// 00601c99: JZ 0x00601cb0
//   XREF to: 00601cb0 (CONDITIONAL_JUMP)
// 00601c9b: XOR BL,BL
// 00601c9d: MOV byte ptr [ESP + 0x8],BL
// 00601ca1: JMP 0x00601c07
//   XREF to: 00601c07 (UNCONDITIONAL_JUMP)
// 00601ca6: MOV byte ptr [ESP + 0x8],0x1
//   Label: LAB_00601ca6
// 00601cab: JMP 0x00601c07
//   XREF to: 00601c07 (UNCONDITIONAL_JUMP)
// 00601cb0: XOR BH,BH
//   Label: LAB_00601cb0
// 00601cb2: MOV byte ptr [0x03f9b850],BH
//   XREF to: 03f9b850 (WRITE)
// 00601cb8: CALL dword ptr [PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684f08]
//   XREF to: 00602434 (COMPUTED_CALL)
//   XREF to: 00684f08 (READ)
// 00601cbe: MOV EAX,dword ptr [ESP]
// 00601cc1: ADD ESP,0xc
//   Label: LAB_00601cc1
// 00601cc4: POP EBP
// 00601cc5: POP GS
// 00601cc7: POP FS
// 00601cc9: POP ES
// 00601cca: POP EDI
// 00601ccb: POP ESI
// 00601ccc: POP EBX
// 00601ccd: RET
