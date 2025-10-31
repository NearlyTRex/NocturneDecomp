// Name: shape_memdbg.cpp_traceFile_FUN_0050f180
// Address: 0050f180
// Address Range: [[0050f180, 0050f1a2]]
// Convention: __cdecl
// Signature: void shape_memdbg.cpp_traceFile_FUN_0050f180(char * format, ...)
// Cross-references:
//   shape_memdbg.cpp_CLeakChecker_dtor_FUN_0050fbc0 (0050fbc0) at 0050fc09 [UNCONDITIONAL_CALL]
//   shape_memdbg.cpp_closeFile_FUN_0050f9b0 (0050f9b0) at 0050fb88 [UNCONDITIONAL_CALL]
//   shape_memdbg.cpp_openFile_FUN_0050f7a0 (0050f7a0) at 0050f8f8 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_memdbg_txt_0067d1f0
//   BOOL g_TraceFileInitialized
// Function calls:
//   crt_io.c_deleteFile_FUN_005ff9d0

#include "nocturne.h"

void __cdecl shape_memdbg_cpp_traceFile_FUN_0050f180(char *format,...)

{
  if (g_TraceFileInitialized != 0) {
    return;
  }
  crt_io_c_deleteFile_FUN_005ff9d0("memdbg.txt");
  g_TraceFileInitialized = 1;
  return;
}


// Assembly code:
// 0050f180: CMP dword ptr [0x02f0d930],0x0
//   Label: shape_memdbg.cpp_traceFile_FUN_0050f180
//   XREF to: 02f0d930 (READ)
// 0050f187: JZ 0x0050f18a
//   XREF to: 0050f18a (CONDITIONAL_JUMP)
// 0050f189: RET
// 0050f18a: PUSH 0x67d1f0
//   Label: LAB_0050f18a
//   XREF to: 0067d1f0 (DATA)
// 0050f18f: CALL crt_io.c_deleteFile_FUN_005ff9d0
//   XREF to: 005ff9d0 (UNCONDITIONAL_CALL)
// 0050f194: MOV ECX,0x1
// 0050f199: ADD ESP,0x4
// 0050f19c: MOV dword ptr [0x02f0d930],ECX
//   XREF to: 02f0d930 (WRITE)
// 0050f1a2: RET
