// Name: crt_heap.c_GetBlockSize_FUN_00609790
// Address: 00609790
// Address Range: [[00609790, 0060979e]]
// Convention: __cdecl
// Signature: ulong crt_heap.c_GetBlockSize_FUN_00609790(void * ptr)
// Cross-references:
//   crt_memory.c_realloc_implementation_FUN_00601e08 (00601e08) at 00601e3b [UNCONDITIONAL_CALL]

#include "nocturne.h"

ulong __cdecl crt_heap_c_GetBlockSize_FUN_00609790(void *ptr)

{
  return (*(uint *)((int)ptr + -4) & 0xfffffffe) - 4;
}


// Assembly code:
// 00609790: MOV EAX,dword ptr [ESP + 0x4]
//   Label: crt_heap.c_GetBlockSize_FUN_00609790
//   XREF to: Stack[0x4] (READ)
// 00609794: SUB EAX,0x4
// 00609797: MOV EAX,dword ptr [EAX]
// 00609799: AND AL,0xfe
// 0060979b: SUB EAX,0x4
// 0060979e: RET
