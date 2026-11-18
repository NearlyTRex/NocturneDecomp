// Name: crt_exit.c_ExitProcess_FUN_005674b0
// Address: 005674b0
// Address Range: [[005674b0, 005674f5]]
// Convention: __cdecl
// Signature: void __cdecl crt_exit_c_ExitProcess_FUN_005674b0(int exit_code)

#include "nocturne.h"

void __cdecl ExitProcess(int exit_code)

{
  UINT unaff_retaddr;
  
  if (g_EmergencyExitFlag == 0) {
    RemoveExceptionHandler();
    ProcessExitHandlers('\0','\x0f');
    (*(code *)PTR_crt_sync_c_CriticalSectionStub_FUN_005671e4_005c1af8)();
  }
  else if (g_SpecialExitHandler != (byte *)0x0) {
    (*(code *)g_SpecialExitHandler)(0,0xff);
  }
                    /* WARNING: Subroutine does not return */
  ExitProcess(unaff_retaddr);
}
