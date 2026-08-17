// Name: crt_exit.c_FinalExitHandler_FUN_0056fd00
// Address: 0056fd00
// Address Range: [[0056fd00, 0056fd25]]
// Convention: __cdecl
// Signature: void __cdecl crt_exit_c_FinalExitHandler_FUN_0056fd00(int exit_code)

#include "nocturne.h"

void __cdecl FinalExitHandler(int exit_code)

{
  int unaff_EBX;
  
  (*(code *)PTR_crt_unknown_c_ExitHookStub_FUN_0056fcd0_005c2054)();
  (*(code *)PTR_crt_unknown_c_ExitHookStub_FUN_0056fcd0_005c2058)();
  if (DAT_005c1d94 != (code *)0x0) {
    (*DAT_005c1d94)();
  }
                    /* WARNING: Subroutine does not return */
  ExitProcess(unaff_EBX);
}
