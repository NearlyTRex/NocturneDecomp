// Name: crt_unknown.c_processSignal_FUN_005b0148
// Address: 005b0148
// Address Range: [[005b0148, 005b01c4]]
// Convention: __watcallStack
// Signature: int __watcallStack crt_unknown_c_processSignal_FUN_005b0148(int signal_number)

#include "nocturne.h"

int __watcallStack processSignal(int signal_number)

{
  code *pcVar1;
  int iVar2;
  
  pcVar1 = (code *)FUN_005afed4(signal_number);
  switch(signal_number) {
  case 1:
    break;
  case 2:
    FUN_005b0048(0x8c);
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
    goto switchD_005b0161_caseD_3;
  default:
    return -1;
  }
  if (pcVar1 == (code *)0x2) {
    FUN_005a5fb8();
  }
switchD_005b0161_caseD_3:
  if (((pcVar1 != (code *)0x1) && (pcVar1 != (code *)0x2)) && (pcVar1 != (code *)0x3)) {
    FUN_005afe80(signal_number,2);
    (*pcVar1)(signal_number);
  }
  iVar2 = FUN_005affa0();
  if (iVar2 != 0) {
    return 0;
  }
  FUN_005b0004();
  return 0;
}
