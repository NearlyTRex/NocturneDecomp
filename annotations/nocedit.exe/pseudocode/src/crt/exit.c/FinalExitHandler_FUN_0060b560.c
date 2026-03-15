// Name: crt_exit.c_FinalExitHandler_FUN_0060b560
// Address: 0060b560
// Address Range: [[0060b560, 0060b585]]
// Convention: __cdecl
// Signature: void __cdecl crt_exit_c_FinalExitHandler_FUN_0060b560(int exit_code)

#include "nocturne.h"

void __cdecl FinalExitHandler(int exit_code)

{
  int unaff_EBX;
  
  (*PTR_crt_exit_c_ExitHookStub_FUN_0060b530_00685478)();
  (*PTR_crt_exit_c_ExitHookStub_FUN_0060b530_0068547c)();
  if (PTR_006852c4 != (void *)0x0) {
    (*PTR_006852c4)();
  }
                    /* WARNING: Subroutine does not return */
  ExitProcess(unaff_EBX);
}
