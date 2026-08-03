// Name: sound_sndmain.cpp_CSfxSample_lock_FUN_00523ba0
// Address: 00523ba0
// Address Range: [[00523ba0, 00523ca1]]
// Convention: __cdecl
// Signature: void * __cdecl sound_sndmain_cpp_CSfxSample_lock_FUN_00523ba0(CSfxSample *this_ptr,int lock_offset,int lock_length)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void * __cdecl sound_sndmain_cpp_CSfxSample_lock_FUN_00523ba0(CSfxSample *this_ptr,int lock_offset,int lock_length)

{
  int iVar1;
  short *psVar2;
  
  if (this_ptr->locked_length != 0) {
    g_CHAR_PTR_01cc4800 = "..\\sound\\sndmain.cpp";
    g_INT_01cc4804 = 0x74d;
    core_main_c_FUN_004c8440("SfxSample::lock - already locked!");
  }
  if ((lock_offset < 0) || (this_ptr->streaming_buffer_size < lock_offset + lock_length)) {
    g_CHAR_PTR_01cc4800 = "..\\sound\\sndmain.cpp";
    g_INT_01cc4804 = 0x752;
    core_main_c_FUN_004c8440("SfxSample::lock - invalid region");
  }
  if (this_ptr->buffer_id == 0) {
    if (this_ptr->sample_data == (short *)0x0) {
      g_CHAR_PTR_01cc4800 = "..\\sound\\sndmain.cpp";
      g_INT_01cc4804 = 0x759;
      core_main_c_FUN_004c8440("SfxSample::lock - nothing allocated!");
    }
    iVar1 = sound_sndmain_cpp_CSfxSample_getBytesPerFrame_FUN_00525c40(this_ptr);
    psVar2 = (short *)(iVar1 * lock_offset + (int)this_ptr->sample_data);
  }
  else {
    if (_DAT_02dc8318 == (int *)0x0) {
      return (void *)0x0;
    }
    psVar2 = (short *)(**(code **)(*_DAT_02dc8318 + 0x34))
                                (_DAT_02dc8318,this_ptr->buffer_id,lock_offset,lock_length,this_ptr)
    ;
  }
  if (psVar2 != (short *)0x0) {
    this_ptr->locked_length = lock_length;
    this_ptr->locked_offset = lock_offset;
  }
  return psVar2;
}
