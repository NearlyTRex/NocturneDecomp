// Name: crt_exit.c_ExitProcess_FUN_005674b0
// Address: 005674b0
// Address Range: [[005674b0, 005674f5]]
// Convention: __cdecl
// Signature: void __cdecl crt_exit_c_ExitProcess_FUN_005674b0(int exit_code)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl ExitProcess(int exit_code)

{
  UINT unaff_retaddr;
  
  if (_DAT_02de4e30 == 0) {
    RemoveExceptionHandler();
    ProcessExitHandlers('\0','\x0f');
    (*(code *)PTR_crt_sync_c_CriticalSectionStub_FUN_005671e4_005c1af8)();
  }
  else if (DAT_005c1b04 != (code *)0x0) {
    (*DAT_005c1b04)(0,0xff);
  }
                    /* WARNING: Subroutine does not return */
  ExitProcess(unaff_retaddr);
}
