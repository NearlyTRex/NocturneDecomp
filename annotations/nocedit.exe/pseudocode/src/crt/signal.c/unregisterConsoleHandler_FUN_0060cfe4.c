// Name: crt_signal.c_unregisterConsoleHandler_FUN_0060cfe4
// Address: 0060cfe4
// Address Range: [[0060cfe4, 0060d018]]
// Convention: unknown
// Signature: undefined crt_signal.c_unregisterConsoleHandler_FUN_0060cfe4()

#include "nocturne.h"

bool crt_signal_c_unregisterConsoleHandler_FUN_0060cfe4(void)

{
  BOOL BVar1;
  
  if (g_ConsoleHandlerRegistered) {
    BVar1 = (*g_SetConsoleCtrlHandlerFunc)(crt_signal_c_consoleCtrlHandler_FUN_0060cf20,0);
    if (BVar1 != 0) {
      g_ConsoleHandlerRegistered = false;
    }
  }
  return g_ConsoleHandlerRegistered == false;
}
