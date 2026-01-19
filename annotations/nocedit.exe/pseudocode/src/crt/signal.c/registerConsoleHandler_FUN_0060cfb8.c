// Name: crt_signal.c_registerConsoleHandler_FUN_0060cfb8
// Address: 0060cfb8
// Address Range: [[0060cfb8, 0060cfe1]]
// Convention: __watcallRegister
// Signature: BOOL crt_signal.c_registerConsoleHandler_FUN_0060cfb8(void)

#include "nocturne.h"

BOOL crt_signal_c_registerConsoleHandler_FUN_0060cfb8(void)

{
  BOOL BVar1;
  
  if (g_ConsoleHandlerRegistered == 0) {
    BVar1 = (*g_SetConsoleCtrlHandlerFunc)(crt_signal_c_consoleCtrlHandler_FUN_0060cf20,1);
    if (BVar1 != 0) {
      g_ConsoleHandlerRegistered = 1;
    }
  }
  return (uint)g_ConsoleHandlerRegistered;
}
