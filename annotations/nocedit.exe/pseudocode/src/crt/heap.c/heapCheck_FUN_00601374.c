// Name: crt_heap.c_heapCheck_FUN_00601374
// Address: 00601374
// Address Range: [[00601374, 0060139a]]
// Convention: __cdecl
// Signature: int crt_heap.c_heapCheck_FUN_00601374(void * heap_state_ptr)
// Cross-references:
//   crt_heap.c_heapCheckWrapper_FUN_006012c0 (006012c0) at 006012c5 [UNCONDITIONAL_CALL]
// Globals:
//   Heap* g_MainHeap = 00000000
//   void* PTR_crt_sync.c_EnterCriticalSection_FUN_00602434_00684f00 = 00602434
//   void* PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684f08 = 00602434
// Function calls:
//   crt_heap.c_heapWalk_FUN_006012d0
//   crt_sync.c_CriticalSectionStub_FUN_00602434

#include "nocturne.h"

int __cdecl crt_heap_c_heapCheck_FUN_00601374(void *heap_state_ptr)

{
  int iVar1;
  
  (*(code *)PTR_crt_sync_c_EnterCriticalSection_FUN_00602434_00684f00)();
  iVar1 = crt_heap_c_heapWalk_FUN_006012d0((HeapState *)heap_state_ptr,g_MainHeap);
  (*(code *)PTR_crt_sync_c_ExitCriticalSection_FUN_00602434_00684f08)();
  return iVar1;
}


// Assembly code:
// 00601374: PUSH EBX
//   Label: crt_heap.c_heapCheck_FUN_00601374
// 00601375: CALL dword ptr [PTR_crt_sync.c_EnterCriticalSection_FUN_00602434_00684f00]
//   XREF to: 00602434 (COMPUTED_CALL)
//   XREF to: 00684f00 (READ)
// 0060137b: MOV EDX,dword ptr [0x00684ed4]
//   XREF to: 00684ed4 (READ)
// 00601381: PUSH EDX
// 00601382: MOV EBX,dword ptr [ESP + 0xc]
// 00601386: PUSH EBX
// 00601387: CALL crt_heap.c_heapWalk_FUN_006012d0
//   XREF to: 006012d0 (UNCONDITIONAL_CALL)
// 0060138c: ADD ESP,0x8
// 0060138f: MOV EBX,EAX
// 00601391: CALL dword ptr [PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684f08]
//   XREF to: 00602434 (COMPUTED_CALL)
//   XREF to: 00684f08 (READ)
// 00601397: MOV EAX,EBX
// 00601399: POP EBX
// 0060139a: RET
