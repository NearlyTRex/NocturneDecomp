// Name: sound_sndmain.cpp_CSfxSample_lock_FUN_0054daf0
// Address: 0054daf0
// Address Range: [[0054daf0, 0054dbee]]
// Convention: __cdecl
// Signature: void * __cdecl sound_sndmain_cpp_CSfxSample_lock_FUN_0054daf0(CSfxSample *this_ptr,int lock_offset,int lock_length)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void * __cdecl sound_sndmain_cpp_CSfxSample_lock_FUN_0054daf0(CSfxSample *this_ptr,int lock_offset,int lock_length)

{
  int iVar1;
  void *pvVar2;
  
  if (this_ptr->locked_length != 0) {
    _DAT_01d046a0 = "..\\sound\\sndmain.cpp";
    _DAT_01d046a4 = 0x89a;
    core_main_c_FUN_004e4500("SfxSample::lock - already locked!");
  }
  if ((lock_offset < 0) || (this_ptr->streaming_buffer_size < lock_offset + lock_length)) {
    _DAT_01d046a0 = "..\\sound\\sndmain.cpp";
    _DAT_01d046a4 = 0x89f;
    core_main_c_FUN_004e4500("SfxSample::lock - invalid region");
  }
  if (this_ptr->buffer_id == 0) {
    if (this_ptr->sample_data == (short *)0x0) {
      _DAT_01d046a0 = "..\\sound\\sndmain.cpp";
      _DAT_01d046a4 = 0x8a6;
      core_main_c_FUN_004e4500("SfxSample::lock - nothing allocated!");
    }
    iVar1 = sound_sndmain_cpp_CSfxSample_framesToBytes_FUN_0054fd90(this_ptr,lock_offset);
    pvVar2 = (void *)(iVar1 + (int)this_ptr->sample_data);
  }
  else {
    if (_DAT_02648e80 == (int *)0x0) {
      return (void *)0x0;
    }
    pvVar2 = (void *)(**(code **)(*_DAT_02648e80 + 0x38))
                               (_DAT_02648e80,this_ptr->buffer_id,lock_offset,lock_length);
  }
  if (pvVar2 != (void *)0x0) {
    this_ptr->locked_length = lock_length;
    this_ptr->locked_offset = lock_offset;
  }
  return pvVar2;
}
