// Name: unkafter_2d.cpp_FUN_005b0148
// Address: 005b0148
// Address Range: [[005b0148, 005b01c4]]
// Convention: unknown
// Signature: undefined4 unkafter_2d_cpp_FUN_005b0148(undefined4 param_1)

#include "nocturne.h"

uint unkafter_2d_cpp_FUN_005b0148(uint param_1)

{
  code *pcVar1;
  int iVar2;
  
  pcVar1 = (code *)unkafter_asgaya_cpp_FUN_005afed4(param_1);
  switch(param_1) {
  case 1:
    break;
  case 2:
    unkafter_2d_cpp_FUN_005b0048(0x8c);
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
    return 0xffffffff;
  }
  if (pcVar1 == (code *)0x2) {
    FUN_005a5fb8();
  }
switchD_005b0161_caseD_3:
  if (((pcVar1 != (code *)0x1) && (pcVar1 != (code *)0x2)) && (pcVar1 != (code *)0x3)) {
    unkafter_asgaya_cpp_FUN_005afe80(param_1,2);
    (*pcVar1)(param_1);
  }
  iVar2 = unkafter_asgaya_cpp_FUN_005affa0();
  if (iVar2 != 0) {
    return 0;
  }
  unkafter_asgaya_cpp_FUN_005b0004();
  return 0;
}
