// Name: sound_sndmain.cpp_CSfxSample_lock_FUN_00523ba0
// Address: 00523ba0
// Address Range: [[00523ba0, 00523ca1]]
// Convention: unknown
// Signature: short * sound_sndmain_cpp_CSfxSample_lock_FUN_00523ba0(CSfxSample *param_1,int param_2,int param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

short * sound_sndmain_cpp_CSfxSample_lock_FUN_00523ba0(CSfxSample *param_1,int param_2,int param_3)

{
  int iVar1;
  short *psVar2;
  
  if (param_1->locked_length != 0) {
    g_CHAR_PTR_01cc4800 = "..\\sound\\sndmain.cpp";
    g_INT_01cc4804 = 0x74d;
    core_main_c_FUN_004c8440("SfxSample::lock - already locked!");
  }
  if ((param_2 < 0) || (param_1->streaming_buffer_size < param_2 + param_3)) {
    g_CHAR_PTR_01cc4800 = "..\\sound\\sndmain.cpp";
    g_INT_01cc4804 = 0x752;
    core_main_c_FUN_004c8440("SfxSample::lock - invalid region");
  }
  if (param_1->buffer_id == 0) {
    if (param_1->sample_data == (short *)0x0) {
      g_CHAR_PTR_01cc4800 = "..\\sound\\sndmain.cpp";
      g_INT_01cc4804 = 0x759;
      core_main_c_FUN_004c8440("SfxSample::lock - nothing allocated!");
    }
    iVar1 = sound_sndmain_cpp_CSfxSample_getBytesPerFrame_FUN_00525c40(param_1);
    psVar2 = (short *)(iVar1 * param_2 + (int)param_1->sample_data);
  }
  else {
    if (_DAT_02dc8318 == (int *)0x0) {
      return (short *)0x0;
    }
    psVar2 = (short *)(**(code **)(*_DAT_02dc8318 + 0x34))
                                (_DAT_02dc8318,param_1->buffer_id,param_2,param_3,param_1);
  }
  if (psVar2 != (short *)0x0) {
    param_1->locked_length = param_3;
    param_1->locked_offset = param_2;
  }
  return psVar2;
}
