// Name: crt_startup.c_ExitApplication_FUN_0060b534
// Address: 0060b534
// Address Range: [[0060b534, 0060b55f]]
// Convention: __cdecl
// Signature: void __cdecl crt_startup_c_ExitApplication_FUN_0060b534(int exit_code)

#include "nocturne.h"

void __cdecl ExitApplication(int exit_code)

{
  (*PTR_crt_exit_c_ExitHookStub_FUN_0060b530_00685478)();
  if ((char)g_EmergencyExitFlag == '\0') {
    ProcessExitHandlers('\x10',0xff);
  }
  FinalExitHandler(exit_code);
  return;
}
