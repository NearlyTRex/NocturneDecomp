// Name: crt_memory.c_malloc_FUN_006021da
// Address: 006021da
// Address Range: [[006021da, 006021e7]]
// Convention: __watcallStack
// Signature: void * crt_memory.c_malloc_FUN_006021da(SIZE_T size)
// Cross-references:
//   crt_strstream.cpp_strstreambuf_doallocate_FUN_0060bc22 (0060bc22) at 0060bc72 [UNCONDITIONAL_CALL]
//   shape_superopt.cpp_CObj_removeUnusedVertices_FUN_005d44d0 (005d44d0) at 005d44e3 [UNCONDITIONAL_CALL]
//   shape_superopt.cpp_ComplexEdgeListSplit_UnevenCheck_FUN_005ca590 (005ca590) at 005ca5b1 [UNCONDITIONAL_CALL]
//   shape_superopt.cpp_CondCallDebugMallocUnknownString_FUN_005cbe20 (005cbe20) at 005cbe77 [UNCONDITIONAL_CALL]
//   shape_superopt.cpp_EdgeListCheckPlusFreesLarge_FUN_005c84c0 (005c84c0) at 005c8511 [UNCONDITIONAL_CALL]
//   shape_superopt.cpp_FUN_005c7b20 (005c7b20) at 005c7b5e [UNCONDITIONAL_CALL]
//   shape_superopt.cpp_FUN_005c8280 (005c8280) at 005c8295 [UNCONDITIONAL_CALL]
//   shape_superopt.cpp_FUN_005c9500 (005c9500) at 005c961b [UNCONDITIONAL_CALL]
// Function calls:
//   shape_memdbg.cpp_debugAlloc_FUN_0050f1d0

#include "nocturne.h"

void * __watcallStack crt_memory_c_malloc_FUN_006021da(SIZE_T size)

{
  void *pvVar1;
  
  pvVar1 = shape_memdbg_cpp_debugAlloc_FUN_0050f1d0(size);
  return pvVar1;
}


// Assembly code:
// 006021da: MOV EDX,dword ptr [ESP + 0x4]
//   Label: crt_memory.c_malloc_FUN_006021da
//   XREF to: Stack[0x4] (READ)
// 006021de: PUSH EDX
// 006021df: CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1d0
//   XREF to: 0050f1d0 (UNCONDITIONAL_CALL)
// 006021e4: ADD ESP,0x4
// 006021e7: RET
