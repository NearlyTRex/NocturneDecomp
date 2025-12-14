// Name: crt_exit.c_ExitProcess_FUN_00602700
// Address: 00602700
// Address Range: [[00602700, 00602745]]
// Convention: __cdecl
// Signature: void crt_exit.c_ExitProcess_FUN_00602700(int exit_code)

#include "nocturne.h"

void __cdecl crt_exit_c_ExitProcess_FUN_00602700(int exit_code)

{
  UINT unaff_retaddr;
  
  if (g_EmergencyExitFlag == 0) {
    crt_exception_c_RemoveExceptionHandler_FUN_0060abf4();
    crt_exit_c_ProcessExitHandlers_FUN_0060ac88('\0','\x0f');
    (*PTR_crt_sync_c_CriticalSectionCleanup_FUN_00602434_00684f20)();
  }
  else if (g_SpecialExitHandler != (code *)0x0) {
    (*g_SpecialExitHandler)();
  }
  (*PTR_ExitProcess_00611534)(unaff_retaddr);
  return;
}
