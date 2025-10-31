// Name: crt_memory.c_malloc_FUN_00601bb0
// Address: 00601bb0
// Address Range: [[00601bb0, 00601bbd]]
// Convention: __cdecl
// Signature: void * crt_memory.c_malloc_FUN_00601bb0(ulong size)
// Cross-references:
//   crt_env.c_putenv_internal_FUN_0060ee80 (0060ee80) at 0060efec [UNCONDITIONAL_CALL]
//   crt_env.c_updateEnvironTable_FUN_0060f04c (0060f04c) at 0060f126 [UNCONDITIONAL_CALL]
//   crt_io.c_getcwd_FUN_00608d20 (00608d20) at 00608d61 [UNCONDITIONAL_CALL]
//   crt_io.c_realpath_FUN_00601140 (00601140) at 0060115d [UNCONDITIONAL_CALL]
//   crt_iostream.cpp_streambuf_allocBuffer_FUN_0060d790 (0060d790) at 0060d795 [UNCONDITIONAL_CALL]
//   crt_memory.c_calloc_FUN_0060ca90 (0060ca90) at 0060ca9b [UNCONDITIONAL_CALL]
//   crt_process.c_build_cmdline_FUN_00610258 (00610258) at 006102d5 [UNCONDITIONAL_CALL]
//   crt_process.c_build_file_info_env_FUN_0060ffd0 (0060ffd0) at 00610005 [UNCONDITIONAL_CALL]
//   crt_process.c_spawnvp_FUN_0060f39c (0060f39c) at 0060f3fd [UNCONDITIONAL_CALL]
//   crt_startup.c_GetModuleFileNameCompat_FUN_0060a560 (0060a560) at 0060a599 [UNCONDITIONAL_CALL]
//   crt_stdio.c_AllocateFileStruct_FUN_006092f0 (006092f0) at 00609331 [UNCONDITIONAL_CALL]
//   crt_stdio.c_InitializeFileBuffer_FUN_006027e0 (006027e0) at 00602820 [UNCONDITIONAL_CALL]
//   crt_string.c_strdup_FUN_0060a610 (0060a610) at 0060a62d [UNCONDITIONAL_CALL]
//   crt_string.c_wcsdup_FUN_0060a660 (0060a660) at 0060a678 [UNCONDITIONAL_CALL]
//   crt_unknown.c_FUN_0060c640 (0060c640) at 0060c645 [UNCONDITIONAL_CALL]
//   crt_unknown.c_FUN_0060e4f0 (0060e4f0) at 0060e547 [UNCONDITIONAL_CALL]
//   crt_unknown.c_FUN_0060fb40 (0060fb40) at 0060fb90 [UNCONDITIONAL_CALL]
//   crt_unknown.c_FUN_0060fcf4 (0060fcf4) at 0060fd67 [UNCONDITIONAL_CALL]
//   crt_unknown.c_FUN_006107f0 (006107f0) at 00610828 [UNCONDITIONAL_CALL]
//   crt_unknown.c_FUN_00610900 (00610900) at 0061092b [UNCONDITIONAL_CALL]
//   crt_unknown.c_staticInit_FUN_00608f20 (00608f20) at 00608f5b [UNCONDITIONAL_CALL]
//   shape_memdbg.cpp_debugCalloc_FUN_0050f350 (0050f350) at 0050f3ab [UNCONDITIONAL_CALL]
//   shape_memdbg.cpp_debugMalloc_FUN_0050f250 (0050f250) at 0050f2a3 [UNCONDITIONAL_CALL]
//   shape_superopt.cpp_FUN_005d2320 (005d2320) at 005d2344 [UNCONDITIONAL_CALL]
//   shape_superopt.cpp_UnableToAllocateRamForObject_FUN_005d2500 (005d2500) at 005d2516 [UNCONDITIONAL_CALL]
// Function calls:
//   crt_heap.c_InternalHeapAlloc_FUN_00601bc0

#include "nocturne.h"

void * __cdecl crt_memory_c_malloc_FUN_00601bb0(ulong size)

{
  void *pvVar1;
  
  pvVar1 = crt_heap_c_InternalHeapAlloc_FUN_00601bc0(size);
  return pvVar1;
}


// Assembly code:
// 00601bb0: MOV EDX,dword ptr [ESP + 0x4]
//   Label: crt_memory.c_malloc_FUN_00601bb0
//   XREF to: Stack[0x4] (READ)
// 00601bb4: PUSH EDX
// 00601bb5: CALL crt_heap.c_InternalHeapAlloc_FUN_00601bc0
//   XREF to: 00601bc0 (UNCONDITIONAL_CALL)
// 00601bba: ADD ESP,0x4
// 00601bbd: RET
