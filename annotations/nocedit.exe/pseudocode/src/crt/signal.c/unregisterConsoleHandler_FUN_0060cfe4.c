// Name: crt_signal.c_unregisterConsoleHandler_FUN_0060cfe4
// Address: 0060cfe4
// Address Range: [[0060cfe4, 0060d018]]
// Convention: unknown
// Signature: bool crt_signal_c_unregisterConsoleHandler_FUN_0060cfe4(void)

#include "nocturne.h"

bool unregisterConsoleHandler(void)

{
  BOOL BVar1;
  
  if (g_ConsoleHandlerRegistered != 0) {
    BVar1 = (*g_SetConsoleCtrlHandlerFunc)(consoleCtrlHandler,0);
    if (BVar1 != 0) {
      g_ConsoleHandlerRegistered = 0;
    }
  }
  return g_ConsoleHandlerRegistered == 0;
}
