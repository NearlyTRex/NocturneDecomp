// Name: FUN_00555530
// Address: 00555530
// Address Range: [[00555530, 00555742]]
// Convention: unknown
// Signature: void FUN_00555530(int param_1,undefined4 param_2,undefined4 param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00555530(int param_1,uint param_2,uint param_3)

{
  double dVar1;
  double dVar2;
  int iVar3;
  ulonglong local_28;
  
  if (*(int *)(param_1 + 0x68) == 0) {
    _DAT_01d71de0 = "..\\sound\\sndmain.cpp";
    _DAT_01d71de4 = 0xd36;
    FUN_004e4330();
  }
  if ((__BITCAST_DOUBLE(CONCAT44(param_3,param_2)) < 0.0) ||
     ((double)*(int *)(*(int *)(param_1 + 0x68) + 0x164) < __BITCAST_DOUBLE(CONCAT44(param_3,param_2)))) {
    _DAT_01d71de0 = "..\\sound\\sndmain.cpp";
    _DAT_01d71de4 = 0xd3c;
    FUN_004e4330();
  }
  local_28 = __BITCAST_DOUBLE(CONCAT44(param_3,param_2)) - *(double *)(param_1 + 0x10c);
  if (local_28 < 0.0) {
    local_28 = (double)*(int *)(*(int *)(param_1 + 0x68) + 0x164) + local_28;
  }
  if ((local_28 < 0.0) ||
     ((double)*(int *)(*(int *)(param_1 + 0x68) + 0x164) + _DAT_005d34ba < local_28)) {
    _DAT_01d71de0 = "..\\sound\\sndmain.cpp";
    _DAT_01d71de4 = 0xd4a;
    FUN_004e4330("SfxSlot::updatePlaybackPos - stepped too much: %f-%f=%f, sample=%d (%s)",param_2,param_3,
                 *(uint *)(param_1 + 0x10c),*(uint *)(param_1 + 0x110),
                 (uint)local_28,local_28._4_4_,
                 *(uint *)(*(int *)(param_1 + 0x68) + 0x164),*(int *)(param_1 + 0x68));
  }
  if ((*(double *)(param_1 + 0x50) != *(double *)(param_1 + 0x10c)) ||
     (__BITCAST_DOUBLE(CONCAT44(param_3,param_2)) < *(double *)(param_1 + 0x50))) {
    *(double *)(param_1 + 0x50) = *(double *)(param_1 + 0x50) + local_28;
  }
  else {
    *(uint *)(param_1 + 0x50) = param_2;
    *(uint *)(param_1 + 0x54) = param_3;
  }
  if (*(double *)(param_1 + 0x50) < 0.0) {
    *(uint *)(param_1 + 0x50) = 0;
    *(uint *)(param_1 + 0x54) = 0;
  }
  if ((-1 < *(int *)(*(int *)(param_1 + 0x68) + 0x110)) &&
     ((double)*(int *)(*(int *)(param_1 + 0x68) + 0x110) <= *(double *)(param_1 + 0x50))) {
    iVar3 = FUN_00555b80();
    if (iVar3 == 0) {
      *(double *)(param_1 + 0x50) = (double)*(int *)(*(int *)(param_1 + 0x68) + 0x110);
    }
    else {
      dVar1 = (double)*(int *)(*(int *)(param_1 + 0x68) + 0x110);
      dVar2 = (double)FUN_005a3600(*(double *)(param_1 + 0x50) / dVar1);
      *(double *)(param_1 + 0x50) = *(double *)(param_1 + 0x50) - dVar2 * dVar1;
    }
  }
  *(uint *)(param_1 + 0x10c) = param_2;
  *(uint *)(param_1 + 0x110) = param_3;
  return;
}
