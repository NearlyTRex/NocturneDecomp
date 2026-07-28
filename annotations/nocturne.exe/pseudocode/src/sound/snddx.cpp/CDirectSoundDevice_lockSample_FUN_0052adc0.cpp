// Name: sound_snddx.cpp_CDirectSoundDevice_lockSample_FUN_0052adc0
// Address: 0052adc0
// Address Range: [[0052adc0, 0052ae85]]
// Convention: unknown
// Signature: int sound_snddx_cpp_CDirectSoundDevice_lockSample_FUN_0052adc0(undefined4 param_1,int param_2,int param_3,int param_4,CSfxSample *param_5)

#include "nocturne.h"

int sound_snddx_cpp_CDirectSoundDevice_lockSample_FUN_0052adc0(uint param_1,int param_2,int param_3,int param_4,CSfxSample *param_5)

{
  uint error_code;
  char *pcVar1;
  int *piStack_1b8;
  int iStack_1b4;
  int iStack_1b0;
  int *piStack_1ac;
  int *piStack_1a8;
  int *piStack_1a4;
  int *piStack_1a0;
  
  if (((0 < param_2) && (param_2 < 0x19)) && (*(int *)(&DAT_02dc9244 + param_2 * 4) != 0)) {
    piStack_1a0 = (int *)0x52adfa;
    iStack_1b4 = sound_sndmain_cpp_CSfxSample_getBytesPerFrame_FUN_00525c40(param_5);
    piStack_1a0 = &param_5->streaming_slot_index;
    piStack_1a4 = &param_5->stream_read_position;
    piStack_1a8 = &param_5->buffer_id;
    piStack_1ac = &param_5->streaming_buffer_size;
    iStack_1b0 = param_4 * iStack_1b4;
    iStack_1b4 = iStack_1b4 * param_3;
    piStack_1b8 = *(int **)(&DAT_02dc9244 + param_2 * 4);
    error_code = (**(code **)(*piStack_1b8 + 0x2c))();
    if (error_code == 0) {
      return param_5->streaming_buffer_size;
    }
    pcVar1 = sound_snddx_cpp_getDirectSoundErrorString_FUN_00529a90(error_code);
    _sprintf(&piStack_1b8,"DirectSux: Unable to %s.  (%s)","Lock hw sample buffer",
               pcVar1);
    sound_sndmain_cpp_FUN_00529980(&piStack_1b8);
    return 0;
  }
  return 0;
}
