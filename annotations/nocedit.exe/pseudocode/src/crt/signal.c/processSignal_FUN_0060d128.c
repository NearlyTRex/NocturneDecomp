// Name: crt_signal.c_processSignal_FUN_0060d128
// Address: 0060d128
// Address Range: [[0060d128, 0060d1a4]]
// Convention: __watcallStack
// Signature: int __watcallStack crt_signal_c_processSignal_FUN_0060d128(int signal_number)

#include "nocturne.h"

int __watcallStack crt_signal_c_processSignal_FUN_0060d128(int signal_number)

{
  code *pcVar1;
  int iVar2;
  
  pcVar1 = (code *)crt_signal_c_getSignalHandler_FUN_0060ceb4(signal_number);
  switch(signal_number) {
  case 1:
    break;
  case 2:
    crt_signal_c_raiseFPE_FUN_0060d028(0x8c);
    return 0;
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
  case 9:
  case 10:
  case 0xb:
  case 0xc:
    goto switchD_0060d141_caseD_c;
  default:
    return -1;
  }
  if (pcVar1 == (code *)0x2) {
    crt_startup_c_reportAbnormalTermination_FUN_00601628();
  }
switchD_0060d141_caseD_c:
  if (((pcVar1 != (code *)0x1) && (pcVar1 != (code *)0x2)) && (pcVar1 != (code *)0x3)) {
    crt_signal_c_setSignalHandler_FUN_0060ce60(signal_number,2);
    (*pcVar1)();
  }
  iVar2 = crt_unknown_c_FUN_0060cf80();
  if (iVar2 != 0) {
    return 0;
  }
  crt_signal_c_unregisterConsoleHandler_FUN_0060cfe4();
  return 0;
}
