// Name: crt_signal.c_registerConsoleHandler_FUN_0060cfb8
// Address: 0060cfb8
// Address Range: [[0060cfb8, 0060cfe1]]
// Convention: __watcallRegister
// Signature: bool crt_signal.c_registerConsoleHandler_FUN_0060cfb8(void)

#include "nocturne.h"

bool crt_signal_c_registerConsoleHandler_FUN_0060cfb8(void)

{
  BOOL BVar1;
  
  if (!g_ConsoleHandlerRegistered) {
    BVar1 = (*PTR_SetConsoleCtrlHandler_0061160c)(crt_signal_c_consoleCtrlHandler_FUN_0060cf20,1);
    if (BVar1 != 0) {
      g_ConsoleHandlerRegistered = true;
    }
  }
  return g_ConsoleHandlerRegistered;
}
