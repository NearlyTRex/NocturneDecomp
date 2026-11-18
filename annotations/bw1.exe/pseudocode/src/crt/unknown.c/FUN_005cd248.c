// Name: crt_unknown.c_FUN_005cd248
// Address: 005cd248
// Address Range: [[005cd248, 005cd271]]
// Convention: unknown
// Signature: byte crt_unknown_c_FUN_005cd248(void)

#include "nocturne.h"

byte FUN_005cd248(void)

{
  BOOL BVar1;
  
  if (g_ConsoleHandlerRegistered == 0) {
    BVar1 = SetConsoleCtrlHandler(FUN_005cd1b0,1);
    if (BVar1 != 0) {
      g_ConsoleHandlerRegistered = 1;
    }
  }
  return g_ConsoleHandlerRegistered;
}
