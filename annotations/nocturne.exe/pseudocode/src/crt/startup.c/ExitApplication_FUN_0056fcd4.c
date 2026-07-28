// Name: crt_startup.c_ExitApplication_FUN_0056fcd4
// Address: 0056fcd4
// Address Range: [[0056fcd4, 0056fcff]]
// Convention: __cdecl
// Signature: void __cdecl crt_startup_c_ExitApplication_FUN_0056fcd4(int exit_code)

#include "nocturne.h"

void __cdecl ExitApplication(int exit_code)

{
  (*(code *)PTR_FUN_005c2054)();
  if (DAT_02de4e30 == '\0') {
    ProcessExitHandlers('\x10',0xff);
  }
  FinalExitHandler(exit_code);
  return;
}
