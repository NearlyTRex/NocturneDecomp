// Name: crt_signal.c_consoleCtrlHandler_FUN_005715d0
// Address: 005715d0
// Address Range: [[005715d0, 0057162e]]
// Convention: __stdcall
// Signature: BOOL __stdcall crt_signal_c_consoleCtrlHandler_FUN_005715d0(DWORD dwCtrlType)

#include "nocturne.h"

BOOL __stdcall consoleCtrlHandler(DWORD dwCtrlType)

{
  SIGNAL_HANDLER_TYPE SVar1;
  
  if (dwCtrlType == 0) {
    SVar1 = getSignalHandler(4);
    if (SVar1 == 0) {
      return 0;
    }
    processSignal(4);
  }
  else {
    if (dwCtrlType != 1) {
      return 0;
    }
    SVar1 = getSignalHandler(7);
    if (SVar1 == 0) {
      return 0;
    }
    processSignal(7);
  }
  if ((SVar1 != 2) && (SVar1 != 3)) {
    return 1;
  }
  return 0;
}
