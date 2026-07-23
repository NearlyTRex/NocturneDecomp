// Name: sound_sndmain.cpp_CSfxSlot_updatePlaybackPos_FUN_00525870
// Address: 00525870
// Address Range: [[00525870, 00525a76]]
// Convention: unknown
// Signature: void sound_sndmain_cpp_CSfxSlot_updatePlaybackPos_FUN_00525870(int param_1,undefined4 param_2,undefined4 param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void sound_sndmain_cpp_CSfxSlot_updatePlaybackPos_FUN_00525870(int param_1,uint param_2,uint param_3)

{
  int iVar1;
  double dVar2;
  double dVar3;
  ulonglong local_28;
  
  if (*(int *)(param_1 + 0x74) == 0) {
    _DAT_01cc4800 = "..\\sound\\sndmain.cpp";
    _DAT_01cc4804 = 0xbaf;
    FUN_004c8440();
  }
  if ((__BITCAST_DOUBLE(CONCAT44(param_3,param_2)) < 0.0) ||
     ((double)*(int *)(*(int *)(param_1 + 0x74) + 0x138) < __BITCAST_DOUBLE(CONCAT44(param_3,param_2)))) {
    _DAT_01cc4800 = "..\\sound\\sndmain.cpp";
    _DAT_01cc4804 = 0xbb5;
    FUN_004c8440();
  }
  local_28 = __BITCAST_DOUBLE(CONCAT44(param_3,param_2)) - *(double *)(param_1 + 0x118);
  if (local_28 < 0.0) {
    local_28 = (double)*(int *)(*(int *)(param_1 + 0x74) + 0x138) + local_28;
  }
  if ((local_28 < 0.0) ||
     ((double)*(int *)(*(int *)(param_1 + 0x74) + 0x138) + 0.001 < local_28)) {
    _DAT_01cc4800 = "..\\sound\\sndmain.cpp";
    _DAT_01cc4804 = 0xbc3;
    FUN_004c8440("SfxSlot::updatePlaybackPos - stepped too much: %f-%f=%f, sample=%d (%s)",param_2,param_3,
                 *(uint *)(param_1 + 0x118),*(uint *)(param_1 + 0x11c),
                 (uint)local_28,local_28._4_4_,
                 *(uint *)(*(int *)(param_1 + 0x74) + 0x138),*(int *)(param_1 + 0x74));
  }
  if ((*(double *)(param_1 + 0x60) != *(double *)(param_1 + 0x118)) ||
     (__BITCAST_DOUBLE(CONCAT44(param_3,param_2)) < *(double *)(param_1 + 0x60))) {
    *(double *)(param_1 + 0x60) = *(double *)(param_1 + 0x60) + local_28;
  }
  else {
    *(uint *)(param_1 + 0x60) = param_2;
    *(uint *)(param_1 + 100) = param_3;
  }
  if (*(double *)(param_1 + 0x60) < 0.0) {
    *(uint *)(param_1 + 0x60) = 0;
    *(uint *)(param_1 + 100) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x74);
  if ((-1 < *(int *)(iVar1 + 0x110)) &&
     (dVar2 = (double)*(int *)(iVar1 + 0x110), dVar2 <= *(double *)(param_1 + 0x60))) {
    if (*(int *)(iVar1 + 0x124) == 0) {
      *(double *)(param_1 + 0x60) = dVar2;
    }
    else {
      dVar3 = (double)floor(*(double *)(param_1 + 0x60) / dVar2);
      *(double *)(param_1 + 0x60) = *(double *)(param_1 + 0x60) - dVar3 * dVar2;
    }
  }
  *(uint *)(param_1 + 0x118) = param_2;
  *(uint *)(param_1 + 0x11c) = param_3;
  return;
}
