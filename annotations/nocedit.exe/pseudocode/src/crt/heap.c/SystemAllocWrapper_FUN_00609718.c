// Name: crt_heap.c_SystemAllocWrapper_FUN_00609718
// Address: 00609718
// Address Range: [[00609718, 0060972a]]
// Convention: __cdecl
// Signature: void * crt_heap.c_SystemAllocWrapper_FUN_00609718(ulong size)
// Cross-references:
//   crt_heap.c_InternalHeapAlloc_FUN_00601bc0 (00601bc0) at 00601c82 [UNCONDITIONAL_CALL]
// Function calls:
//   crt_heap.c_AllocateNewHeapBlock_FUN_00609668
//   crt_heap.c_CompactHeapBlocks_FUN_0060c920

#include "nocturne.h"

void * __cdecl crt_heap_c_SystemAllocWrapper_FUN_00609718(ulong size)

{
  void *pvVar1;
  uint in_stack_00000008;
  
  crt_heap_c_CompactHeapBlocks_FUN_0060c920();
  pvVar1 = (void *)crt_heap_c_AllocateNewHeapBlock_FUN_00609668(in_stack_00000008);
  return pvVar1;
}


// Assembly code:
// 00609718: CALL crt_heap.c_CompactHeapBlocks_FUN_0060c920
//   Label: crt_heap.c_SystemAllocWrapper_FUN_00609718
//   XREF to: 0060c920 (UNCONDITIONAL_CALL)
// 0060971d: MOV EDX,dword ptr [ESP + 0x4]
//   XREF to: Stack[0x4] (READ)
// 00609721: PUSH EDX
// 00609722: CALL crt_heap.c_AllocateNewHeapBlock_FUN_00609668
//   XREF to: 00609668 (UNCONDITIONAL_CALL)
// 00609727: ADD ESP,0x4
// 0060972a: RET
