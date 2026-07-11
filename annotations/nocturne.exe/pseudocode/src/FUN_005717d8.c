// Name: FUN_005717d8
// Address: 005717d8
// Address Range: [[005717d8, 00571854]]
// Convention: unknown
// Signature: undefined4 FUN_005717d8(undefined4 param_1)

#include "nocturne.h"

uint FUN_005717d8(uint param_1)

{
  code *pcVar1;
  int iVar2;
  
  pcVar1 = (code *)FUN_00571564(param_1);
  switch(param_1) {
  case 1:
    break;
  case 2:
    FUN_005716d8(0x8c);
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
    return 0xffffffff;
  }
  if (pcVar1 == (code *)0x2) {
    FUN_00566f98();
  }
switchD_005717f1_caseD_3:
  if (((pcVar1 != (code *)0x1) && (pcVar1 != (code *)0x2)) && (pcVar1 != (code *)0x3)) {
    FUN_00571510(param_1,2);
    (*pcVar1)(param_1);
  }
  iVar2 = FUN_00571630();
  if (iVar2 != 0) {
    return 0;
  }
  FUN_00571694();
  return 0;
}
