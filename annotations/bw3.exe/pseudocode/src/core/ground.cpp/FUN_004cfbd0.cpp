// Name: FUN_004cfbd0
// Address: 004cfbd0
// Address Range: [[004cfbd0, 004cfc66]]
// Convention: unknown
// Signature: void FUN_004cfbd0(int *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004cfbd0(int *param_1)

{
  int iVar1;
  int iVar2;
  
  FUN_004cfc70(param_1);
  iVar1 = FUN_005a3650(*param_1 * param_1[1] * 4);
  param_1[9] = iVar1;
  if (iVar1 == 0) {
    _DAT_01d71de0 = "..\\core\\ground.cpp";
    _DAT_01d71de4 = 0xd5;
    FUN_004e4330("CGround::init - Out of memory");
  }
  iVar2 = FUN_005a3cb2(0x6d64);
  iVar1 = 0;
  if (iVar2 != 0) {
    iVar1 = FUN_005690a0(iVar2);
  }
  param_1[10] = iVar1;
  if (iVar1 != 0) {
    return;
  }
  _DAT_01d71de0 = "..\\core\\ground.cpp";
  _DAT_01d71de4 = 0xda;
  FUN_004e4330("CGround::init - Out of memory2");
  return;
}
