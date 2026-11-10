// Name: sound_sndmain.cpp_getRecordingFormat_FUN_00575a4e
// Address: 00575a4e
// Address Range: [[00575a4e, 00575a92]]
// Convention: unknown
// Signature: void sound_sndmain_cpp_getRecordingFormat_FUN_00575a4e(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void sound_sndmain_cpp_getRecordingFormat_FUN_00575a4e(uint *param_1,uint *param_2,uint *param_3,uint *param_4)

{
  if (param_1 != (uint *)0x0) {
    *param_1 = _DAT_00623320;
  }
  if (param_2 != (uint *)0x0) {
    *param_2 = _DAT_00623324;
  }
  if (param_3 != (uint *)0x0) {
    *param_3 = _DAT_00623328;
  }
  if (param_4 == (uint *)0x0) {
    return;
  }
  *param_4 = _DAT_02c81040;
  return;
}
