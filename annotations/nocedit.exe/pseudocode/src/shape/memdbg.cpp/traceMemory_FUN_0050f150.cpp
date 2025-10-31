// Name: shape_memdbg.cpp_traceMemory_FUN_0050f150
// Address: 0050f150
// Address Range: [[0050f150, 0050f172]]
// Convention: __cdecl
// Signature: void shape_memdbg.cpp_traceMemory_FUN_0050f150(char * format, ...)
// Cross-references:
//   shape_memdbg.cpp_debugCalloc_FUN_0050f350 (0050f350) at 0050f3e1 [UNCONDITIONAL_CALL]
//   shape_memdbg.cpp_debugFree_FUN_0050f460 (0050f460) at 0050f4a3 [UNCONDITIONAL_CALL]
//   shape_memdbg.cpp_debugMalloc_FUN_0050f250 (0050f250) at 0050f32a [UNCONDITIONAL_CALL]
//   shape_memdbg.cpp_debugRealloc_FUN_0050f540 (0050f540) at 0050f588 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_memdbg_txt_0067d1f0
//   BOOL g_MemoryTraceInitialized
// Function calls:
//   crt_io.c_deleteFile_FUN_005ff9d0

#include "nocturne.h"

void __cdecl shape_memdbg_cpp_traceMemory_FUN_0050f150(char *format,...)

{
  if (g_MemoryTraceInitialized != 0) {
    return;
  }
  crt_io_c_deleteFile_FUN_005ff9d0("memdbg.txt");
  g_MemoryTraceInitialized = 1;
  return;
}


// Assembly code:
// 0050f150: CMP dword ptr [0x02f0d92c],0x0
//   Label: shape_memdbg.cpp_traceMemory_FUN_0050f150
//   XREF to: 02f0d92c (READ)
// 0050f157: JZ 0x0050f15a
//   XREF to: 0050f15a (CONDITIONAL_JUMP)
// 0050f159: RET
// 0050f15a: PUSH 0x67d1f0
//   Label: LAB_0050f15a
//   XREF to: 0067d1f0 (DATA)
// 0050f15f: CALL crt_io.c_deleteFile_FUN_005ff9d0
//   XREF to: 005ff9d0 (UNCONDITIONAL_CALL)
// 0050f164: MOV ECX,0x1
// 0050f169: ADD ESP,0x4
// 0050f16c: MOV dword ptr [0x02f0d92c],ECX
//   XREF to: 02f0d92c (WRITE)
// 0050f172: RET
