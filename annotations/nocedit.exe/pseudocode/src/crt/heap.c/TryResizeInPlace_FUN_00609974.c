// Name: crt_heap.c_TryResizeInPlace_FUN_00609974
// Address: 00609974
// Address Range: [[00609974, 006099bd]]
// Convention: __cdecl
// Signature: void * crt_heap.c_TryResizeInPlace_FUN_00609974(void * ptr, ulong new_size)
// Cross-references:
//   crt_memory.c_realloc_implementation_FUN_00601e08 (00601e08) at 00601e47 [UNCONDITIONAL_CALL]
// Globals:
//   Heap* g_MainHeap = 00000000
//   void* PTR_crt_sync.c_EnterCriticalSection_FUN_00602434_00684f00 = 00602434
//   void* PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684f08 = 00602434
// Function calls:
//   crt_heap.c_ResizeBlockInPlace_FUN_006097b8
//   crt_sync.c_CriticalSectionStub_FUN_00602434

#include "nocturne.h"

void * __cdecl crt_heap_c_TryResizeInPlace_FUN_00609974(void *ptr,ulong new_size)

{
  int iVar1;
  ulong *in_ECX;
  ushort in_DS;
  
  (*(code *)PTR_crt_sync_c_EnterCriticalSection_FUN_00602434_00684f00)();
  iVar1 = crt_heap_c_ResizeBlockInPlace_FUN_006097b8
                    (in_DS,(void *)CONCAT22((short)(new_size >> 0x10),in_DS),(ulong)ptr,in_ECX);
  if (iVar1 == 0) {
    (*(code *)PTR_crt_sync_c_ExitCriticalSection_FUN_00602434_00684f08)();
    return ptr;
  }
  (*(code *)PTR_crt_sync_c_ExitCriticalSection_FUN_00602434_00684f08)();
  return (void *)0x0;
}


// Assembly code:
// 00609974: PUSH EBX
//   Label: crt_heap.c_TryResizeInPlace_FUN_00609974
// 00609975: SUB ESP,0x4
// 00609978: CALL dword ptr [PTR_crt_sync.c_EnterCriticalSection_FUN_00602434_00684f00]
//   XREF to: 00602434 (COMPUTED_CALL)
//   XREF to: 00684f00 (READ)
// 0060997e: MOV EAX,ESP
// 00609980: PUSH EAX
// 00609981: MOV EDX,dword ptr [ESP + 0x14]
// 00609985: PUSH EDX
// 00609986: MOV EBX,dword ptr [ESP + 0x14]
// 0060998a: PUSH EBX
// 0060998b: MOV EAX,0x684ed4
//   XREF to: 00684ed4 (DATA)
// 00609990: MOV DX,DS
// 00609992: XOR EAX,EAX
// 00609994: MOV AX,DX
// 00609997: PUSH EAX
// 00609998: CALL crt_heap.c_ResizeBlockInPlace_FUN_006097b8
//   XREF to: 006097b8 (UNCONDITIONAL_CALL)
// 0060999d: ADD ESP,0x10
// 006099a0: TEST EAX,EAX
// 006099a2: JNZ 0x006099b1
//   XREF to: 006099b1 (CONDITIONAL_JUMP)
// 006099a4: CALL dword ptr [PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684f08]
//   XREF to: 00602434 (COMPUTED_CALL)
//   XREF to: 00684f08 (READ)
// 006099aa: MOV EAX,EBX
// 006099ac: ADD ESP,0x4
// 006099af: POP EBX
// 006099b0: RET
// 006099b1: CALL dword ptr [PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684f08]
//   Label: LAB_006099b1
//   XREF to: 00602434 (COMPUTED_CALL)
//   XREF to: 00684f08 (READ)
// 006099b7: XOR EAX,EAX
// 006099b9: ADD ESP,0x4
// 006099bc: POP EBX
// 006099bd: RET
