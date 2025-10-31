// Name: crt_stdio.c_InitializeConsoleHandles_FUN_0060cdbc
// Address: 0060cdbc
// Address Range: [[0060cdbc, 0060ce2c]]
// Convention: __watcallRegister
// Signature: void crt_stdio.c_InitializeConsoleHandles_FUN_0060cdbc(void)
// Cross-references:
//   crt_stdio.c_GetConsoleInputHandle_FUN_0060ce30 (0060ce30) at 0060ce30 [UNCONDITIONAL_CALL]
//   crt_stdio.c_GetConsoleOutputHandle_FUN_0060ce3c (0060ce3c) at 0060ce3c [UNCONDITIONAL_CALL]
// Globals:
//   CreateFileA* PTR_CreateFileA_00611510 = 00211c6a
//   TerminatedCString s_conin_00659698
//   TerminatedCString s_conout_006596a0
//   ENTER_CRITICAL_SECTION_BY_INDEX_FUNC* PTR_crt_sync.c_EnterCriticalSection_FUN_00602434_00684ee8 = 00602434
//   EXIT_CRITICAL_SECTION_BY_INDEX_FUNC* PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684eec = 00602434
//   HANDLE g_ConsoleInputHandle = ffffffff
//   HANDLE g_ConsoleOutputHandle = ffffffff
// Function calls:
//   CreateFileA
//   crt_sync.c_CriticalSectionStub_FUN_00602434

#include "nocturne.h"

void crt_stdio_c_InitializeConsoleHandles_FUN_0060cdbc(void)

{
  (*PTR_crt_sync_c_EnterCriticalSection_FUN_00602434_00684ee8)(0);
  if (g_ConsoleInputHandle == (HANDLE)0xffffffff) {
    g_ConsoleInputHandle =
         (*PTR_CreateFileA_00611510)
                   ("conin$",0x80000000,1,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,(HANDLE)0x0);
  }
  if (g_ConsoleOutputHandle == (HANDLE)0xffffffff) {
    g_ConsoleOutputHandle =
         (*PTR_CreateFileA_00611510)
                   ("conout$",0x40000000,2,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,(HANDLE)0x0);
  }
  (*PTR_crt_sync_c_ExitCriticalSection_FUN_00602434_00684eec)(0);
  return;
}


// Assembly code:
// 0060cdbc: PUSH 0x0
//   Label: crt_stdio.c_InitializeConsoleHandles_FUN_0060cdbc
// 0060cdbe: CALL dword ptr [PTR_crt_sync.c_EnterCriticalSection_FUN_00602434_00684ee8]
//   XREF to: 00602434 (COMPUTED_CALL)
//   XREF to: 00684ee8 (READ)
// 0060cdc4: MOV EDX,dword ptr [0x006854fc]
//   XREF to: 006854fc (READ)
// 0060cdca: ADD ESP,0x4
// 0060cdcd: CMP EDX,-0x1
// 0060cdd0: JNZ 0x0060cdf5
//   XREF to: 0060cdf5 (CONDITIONAL_JUMP)
// 0060cdd2: PUSH 0x0
// 0060cdd4: PUSH 0x80
// 0060cdd9: PUSH 0x3
// 0060cddb: PUSH 0x0
// 0060cddd: PUSH 0x1
// 0060cddf: PUSH 0x80000000
// 0060cde4: PUSH 0x659698
//   XREF to: 00659698 (DATA)
// 0060cde9: CALL dword ptr CS:[0x611510]
//   XREF to: EXTERNAL:0000004f (COMPUTED_CALL)
//   XREF to: 00611510 (READ)
// 0060cdf0: MOV [0x006854fc],EAX
//   XREF to: 006854fc (WRITE)
// 0060cdf5: CMP dword ptr [0x00685500],-0x1
//   Label: LAB_0060cdf5
//   XREF to: 00685500 (READ)
// 0060cdfc: JNZ 0x0060ce21
//   XREF to: 0060ce21 (CONDITIONAL_JUMP)
// 0060cdfe: PUSH 0x0
// 0060ce00: PUSH 0x80
// 0060ce05: PUSH 0x3
// 0060ce07: PUSH 0x0
// 0060ce09: PUSH 0x2
// 0060ce0b: PUSH 0x40000000
// 0060ce10: PUSH 0x6596a0
//   XREF to: 006596a0 (DATA)
// 0060ce15: CALL dword ptr CS:[0x611510]
//   XREF to: EXTERNAL:0000004f (COMPUTED_CALL)
//   XREF to: 00611510 (READ)
// 0060ce1c: MOV [0x00685500],EAX
//   XREF to: 00685500 (WRITE)
// 0060ce21: PUSH 0x0
//   Label: LAB_0060ce21
// 0060ce23: CALL dword ptr [PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684eec]
//   XREF to: 00602434 (COMPUTED_CALL)
//   XREF to: 00684eec (READ)
// 0060ce29: ADD ESP,0x4
// 0060ce2c: RET
