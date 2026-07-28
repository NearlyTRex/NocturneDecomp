// Name: crt_signal.c_processSignal_FUN_005717d8
// Address: 005717d8
// Address Range: [[005717d8, 00571854]]
// Convention: __watcallStack
// Signature: int __watcallStack crt_signal_c_processSignal_FUN_005717d8(int signal_number)

#include "nocturne.h"

int __watcallStack processSignal(int signal_number)

{
  code *pcVar1;
  int iVar2;
  
  pcVar1 = (code *)getSignalHandler(signal_number);
  switch(signal_number) {
  case 1:
    break;
  case 2:
    raiseFPE(0x8c);
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
    goto switchD_005717f1_caseD_3;
  default:
    return -1;
  }
  if (pcVar1 == (code *)0x2) {
    reportAbnormalTermination();
  }
switchD_005717f1_caseD_3:
  if (((pcVar1 != (code *)0x1) && (pcVar1 != (code *)0x2)) && (pcVar1 != (code *)0x3)) {
    setSignalHandler(signal_number,2);
    (*pcVar1)(signal_number);
  }
  iVar2 = FUN_00571630();
  if (iVar2 != 0) {
    return 0;
  }
  unregisterConsoleHandler();
  return 0;
}
