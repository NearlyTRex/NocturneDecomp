// Name: FUN_004e7240
// Address: 004e7240
// Address Range: [[004e7240, 004e72d6]]
// Convention: unknown
// Signature: void FUN_004e7240(int *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004e7240(int *param_1)

{
  int iVar1;
  int iVar2;
  
  FUN_004e72e0(param_1);
  iVar1 = FUN_005c08d0(*param_1 * param_1[1] * 4);
  param_1[9] = iVar1;
  if (iVar1 == 0) {
    _DAT_01d1d400 = "..\\core\\ground.cpp";
    _DAT_01d1d404 = 0xd5;
    FUN_005030e0("CGround::init - Out of memory");
  }
  iVar2 = FUN_005c0f32(0x6d64);
  iVar1 = 0;
  if (iVar2 != 0) {
    iVar1 = FUN_005960b0(iVar2);
  }
  param_1[10] = iVar1;
  if (iVar1 != 0) {
    return;
  }
  _DAT_01d1d400 = "..\\core\\ground.cpp";
  _DAT_01d1d404 = 0xda;
  FUN_005030e0("CGround::init - Out of memory2");
  return;
}
