// Name: crt_memory.c_realloc_FUN_00601df0
// Address: 00601df0
// Address Range: [[00601df0, 00601e04]]
// Convention: __cdecl
// Signature: void * crt_memory.c_realloc_FUN_00601df0(void * ptr, ulong new_size)
// Cross-references:
//   crt_env.c_updateEnvironTable_FUN_0060f04c (0060f04c) at 0060f182 [UNCONDITIONAL_CALL]
//   crt_io.c_register_handle_FUN_00608990 (00608990) at 006089e2 [UNCONDITIONAL_CALL]
//   crt_sync.c_allocate_critical_section_FUN_00609f24 (00609f24) at 00609f82 [UNCONDITIONAL_CALL]
//   crt_tls.c_getThreadLocalData_FUN_0060caf8 (0060caf8) at 0060cb2f [UNCONDITIONAL_CALL]
//   crt_unknown.c_FUN_0060e4f0 (0060e4f0) at 0060e55a [UNCONDITIONAL_CALL]
//   crt_unknown.c_FUN_0060fcf4 (0060fcf4) at 0060fe29 [UNCONDITIONAL_CALL]
//   crt_unknown.c_SetStdHandleToSomething_FUN_00608a1c (00608a1c) at 00608a90 [UNCONDITIONAL_CALL]
//   shape_memdbg.cpp_debugRealloc_FUN_0050f540 (0050f540) at 0050f5ec [UNCONDITIONAL_CALL]
//   shape_superopt.cpp_CObj_addPolygons_FUN_005d2410 (005d2410) at 005d243c [UNCONDITIONAL_CALL]
//   shape_superopt.cpp_CObj_addVertices_FUN_005d2580 (005d2580) at 005d259d [UNCONDITIONAL_CALL]
//   shape_superopt.cpp_CObj_removePolygon_FUN_005d2f50 (005d2f50) at 005d2f8d [UNCONDITIONAL_CALL]
//   shape_superopt.cpp_CObj_removeUnusedVertices_FUN_005d44d0 (005d44d0) at 005d46b4 [UNCONDITIONAL_CALL]
//   shape_superopt.cpp_CObj_removeVertex_FUN_005d3140 (005d3140) at 005d317f [UNCONDITIONAL_CALL]
//   shape_superopt.cpp_COptimize_FUN_005d76e0 (005d76e0) at 005d76f2 [UNCONDITIONAL_CALL]
//   shape_superopt.cpp_CondCallDebugMallocUnknownString_FUN_005cbe20 (005cbe20) at 005cbe46 [UNCONDITIONAL_CALL]
//   shape_superopt.cpp_FUN_005c7a90 (005c7a90) at 005c7ae9 [UNCONDITIONAL_CALL]
// Function calls:
//   crt_memory.c_realloc_implementation_FUN_00601e08

#include "nocturne.h"

void * __cdecl crt_memory_c_realloc_FUN_00601df0(void *ptr,ulong new_size)

{
  void *pvVar1;
  
  pvVar1 = crt_memory_c_realloc_implementation_FUN_00601e08(ptr,new_size);
  return pvVar1;
}


// Assembly code:
// 00601df0: PUSH EBX
//   Label: crt_memory.c_realloc_FUN_00601df0
// 00601df1: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 00601df5: PUSH EDX
// 00601df6: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 00601dfa: PUSH EBX
// 00601dfb: CALL crt_memory.c_realloc_implementation_FUN_00601e08
//   XREF to: 00601e08 (UNCONDITIONAL_CALL)
// 00601e00: ADD ESP,0x8
// 00601e03: POP EBX
// 00601e04: RET
