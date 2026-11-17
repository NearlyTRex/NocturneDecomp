// Name: crt_unknown.c_FUN_005c4f48
// Address: 005c4f48
// Address Range: [[005c4f48, 005c4f71]]
// Convention: unknown
// Signature: byte crt_unknown_c_FUN_005c4f48(void)

#include "nocturne.h"

byte FUN_005c4f48(void)

{
  BOOL BVar1;
  
  if (g_ConsoleHandlerRegistered == 0) {
    BVar1 = SetConsoleCtrlHandler(FUN_005c4eb0,1);
    if (BVar1 != 0) {
      g_ConsoleHandlerRegistered = 1;
    }
  }
  return g_ConsoleHandlerRegistered;
}
