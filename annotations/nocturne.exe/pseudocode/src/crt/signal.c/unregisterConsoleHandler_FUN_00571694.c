// Name: crt_signal.c_unregisterConsoleHandler_FUN_00571694
// Address: 00571694
// Address Range: [[00571694, 005716c8]]
// Convention: unknown
// Signature: bool crt_signal_c_unregisterConsoleHandler_FUN_00571694(void)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

bool unregisterConsoleHandler(void)

{
  BOOL BVar1;
  
  if (DAT_005c2140 != '\0') {
    BVar1 = SetConsoleCtrlHandler(consoleCtrlHandler,0);
    if (BVar1 != 0) {
      DAT_005c2140 = '\0';
    }
  }
  return DAT_005c2140 == '\0';
}
