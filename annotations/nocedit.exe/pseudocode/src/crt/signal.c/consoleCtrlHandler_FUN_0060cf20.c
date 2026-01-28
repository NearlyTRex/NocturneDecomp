// Name: crt_signal.c_consoleCtrlHandler_FUN_0060cf20
// Address: 0060cf20
// Address Range: [[0060cf20, 0060cf7e]]
// Convention: __stdcall
// Signature: BOOL __stdcall crt_signal_c_consoleCtrlHandler_FUN_0060cf20(DWORD dwCtrlType)

#include "nocturne.h"

BOOL __stdcall crt_signal_c_consoleCtrlHandler_FUN_0060cf20(DWORD dwCtrlType)

{
  SIGNAL_HANDLER_TYPE SVar1;
  
  if (dwCtrlType == 0) {
    SVar1 = crt_signal_c_getSignalHandler_FUN_0060ceb4(4);
    if (SVar1 == 0) {
      return 0;
    }
    crt_signal_c_processSignal_FUN_0060d128(4);
  }
  else {
    if (dwCtrlType != 1) {
      return 0;
    }
    SVar1 = crt_signal_c_getSignalHandler_FUN_0060ceb4(7);
    if (SVar1 == 0) {
      return 0;
    }
    crt_signal_c_processSignal_FUN_0060d128(7);
  }
  if ((SVar1 != 2) && (SVar1 != 3)) {
    return 1;
  }
  return 0;
}
