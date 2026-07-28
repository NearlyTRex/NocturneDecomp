// Name: crt_signal.c_registerConsoleHandler_FUN_00571668
// Address: 00571668
// Address Range: [[00571668, 00571691]]
// Convention: __watcallRegister
// Signature: BOOL __watcallRegister crt_signal_c_registerConsoleHandler_FUN_00571668(void)

#include "nocturne.h"

BOOL __watcallRegister registerConsoleHandler(void)

{
  BOOL BVar1;
  
  if (DAT_005c2140 == 0) {
    BVar1 = SetConsoleCtrlHandler(consoleCtrlHandler,1);
    if (BVar1 != 0) {
      DAT_005c2140 = 1;
    }
  }
  return (uint)DAT_005c2140;
}
