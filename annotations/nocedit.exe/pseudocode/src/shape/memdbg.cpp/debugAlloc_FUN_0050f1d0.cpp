// Name: shape_memdbg.cpp_debugAlloc_FUN_0050f1d0
// Address: 0050f1d0
// Address Range: [[0050f1d0, 0050f1e4]]
// Convention: __cdecl
// Signature: void * shape_memdbg.cpp_debugAlloc_FUN_0050f1d0(int size)
// Cross-references:
//   crt_memory.c_malloc_FUN_006021da (006021da) at 006021df [UNCONDITIONAL_CALL]
//   shape_superopt.cpp_CObj_FUN_005d3960 (005d3960) at 005d3b2b [UNCONDITIONAL_CALL]
//   shape_superopt.cpp_CObj_FUN_005d4160 (005d4160) at 005d4257 [UNCONDITIONAL_CALL]
//   shape_superopt.cpp_CObj_FUN_005d44d0 (005d44d0) at 005d4613 [UNCONDITIONAL_CALL]
//   shape_superopt.cpp_CObj_FUN_005d46f0 (005d46f0) at 005d475b [UNCONDITIONAL_CALL]
//   shape_superopt.cpp_CObj_FUN_005d47b0 (005d47b0) at 005d4d90 [UNCONDITIONAL_CALL]
//   shape_superopt.cpp_COptimize_FUN_005d76e0 (005d76e0) at 005d7724 [UNCONDITIONAL_CALL]
//   shape_superopt.cpp_FUN_005c9500 (005c9500) at 005c97f1 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_unknown_0067d200
// Function calls:
//   shape_memdbg.cpp_debugMalloc_FUN_0050f250

#include "nocturne.h"

void * __cdecl shape_memdbg_cpp_debugAlloc_FUN_0050f1d0(int size)

{
  void *pvVar1;
  
  pvVar1 = shape_memdbg_cpp_debugMalloc_FUN_0050f250(size,"(unknown)",0);
  return pvVar1;
}


// Assembly code:
// 0050f1d0: PUSH 0x0
//   Label: shape_memdbg.cpp_debugAlloc_FUN_0050f1d0
// 0050f1d2: PUSH 0x67d200
//   XREF to: 0067d200 (DATA)
// 0050f1d7: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 0050f1db: PUSH EDX
// 0050f1dc: CALL shape_memdbg.cpp_debugMalloc_FUN_0050f250
//   XREF to: 0050f250 (UNCONDITIONAL_CALL)
// 0050f1e1: ADD ESP,0xc
// 0050f1e4: RET
