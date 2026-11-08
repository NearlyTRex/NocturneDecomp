// Name: FUN_005cd3b8
// Address: 005cd3b8
// Address Range: [[005cd3b8, 005cd434]]
// Convention: unknown
// Signature: undefined4 FUN_005cd3b8(undefined4 param_1)

#include "nocturne.h"

uint FUN_005cd3b8(uint param_1)

{
  code *pcVar1;
  int iVar2;
  
  pcVar1 = (code *)FUN_005cd144(param_1);
  switch(param_1) {
  case 1:
    break;
  case 2:
    FUN_005cd2b8(0x8c);
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
    goto switchD_005cd3d1_caseD_3;
  default:
    return 0xffffffff;
  }
  if (pcVar1 == (code *)0x2) {
    FUN_005c3148();
  }
switchD_005cd3d1_caseD_3:
  if (((pcVar1 != (code *)0x1) && (pcVar1 != (code *)0x2)) && (pcVar1 != (code *)0x3)) {
    FUN_005cd0f0(param_1,2);
    (*pcVar1)(param_1);
  }
  iVar2 = FUN_005cd210();
  if (iVar2 != 0) {
    return 0;
  }
  FUN_005cd274();
  return 0;
}
