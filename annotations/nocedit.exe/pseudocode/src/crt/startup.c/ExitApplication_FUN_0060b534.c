// Name: crt_startup.c_ExitApplication_FUN_0060b534
// Address: 0060b534
// Address Range: [[0060b534, 0060b55f]]
// Convention: __cdecl
// Signature: void crt_startup.c_ExitApplication_FUN_0060b534(int exit_code)

#include "nocturne.h"

void __cdecl crt_startup_c_ExitApplication_FUN_0060b534(int exit_code)

{
  (*PTR_crt_exit_c_ExitHookStub_FUN_0060b530_00685478)();
  if ((char)g_EmergencyExitFlag == '\0') {
    crt_exit_c_ProcessExitHandlers_FUN_0060ac88('\x10',0xff);
  }
  crt_exit_c_FinalExitHandler_FUN_0060b560(exit_code);
  return;
}
