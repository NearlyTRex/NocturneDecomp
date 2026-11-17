// Name: crt_unknown.c_FUN_005cd274
// Address: 005cd274
// Address Range: [[005cd274, 005cd2a8]]
// Convention: unknown
// Signature: bool crt_unknown_c_FUN_005cd274(void)

#include "nocturne.h"

bool FUN_005cd274(void)

{
  BOOL BVar1;
  
  if (g_ConsoleHandlerRegistered != 0) {
    BVar1 = SetConsoleCtrlHandler(FUN_005cd1b0,0);
    if (BVar1 != 0) {
      g_ConsoleHandlerRegistered = 0;
    }
  }
  return g_ConsoleHandlerRegistered == 0;
}
