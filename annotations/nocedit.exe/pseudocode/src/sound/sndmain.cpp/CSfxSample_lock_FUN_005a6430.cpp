// Name: sound_sndmain.cpp_CSfxSample_lock_FUN_005a6430
// Address: 005a6430
// Address Range: [[005a6430, 005a6530]]
// Convention: __cdecl
// Signature: void * __cdecl sound_sndmain_cpp_CSfxSample_lock_FUN_005a6430(CSfxSample *this_ptr,int lock_offset,int lock_length)

#include "nocturne.h"

void * __cdecl sound_sndmain_cpp_CSfxSample_lock_FUN_005a6430(CSfxSample *this_ptr,int lock_offset,int lock_length)

{
  int iVar1;
  short *psVar2;
  
  if (this_ptr->locked_length != 0) {
    g_CurrentFilename = "..\\sound\\sndmain.cpp";
    g_CurrentLineNumber = 1875;
    core_main_c_displayErrorAndQuit_FUN_00506f10("SfxSample::lock - already locked!");
  }
  if ((lock_offset < 0) || (this_ptr->streaming_buffer_size < lock_offset + lock_length)) {
    g_CurrentFilename = "..\\sound\\sndmain.cpp";
    g_CurrentLineNumber = 1880;
    core_main_c_displayErrorAndQuit_FUN_00506f10("SfxSample::lock - invalid region");
  }
  if (this_ptr->buffer_id == 0) {
    if (this_ptr->sample_data == (short *)0x0) {
      g_CurrentFilename = "..\\sound\\sndmain.cpp";
      g_CurrentLineNumber = 1887;
      core_main_c_displayErrorAndQuit_FUN_00506f10("SfxSample::lock - nothing allocated!");
    }
    iVar1 = sound_sndmain_cpp_CSfxSample_getBytesPerFrame_FUN_005a8550(this_ptr);
    psVar2 = (short *)(iVar1 * lock_offset + (int)this_ptr->sample_data);
  }
  else {
    if (g_CSoundDevicePtr == (CSoundDevice *)0x0) {
      return (void *)0x0;
    }
    psVar2 = (short *)(*g_CSoundDevicePtr->vtable->lockSample)
                                (g_CSoundDevicePtr,this_ptr->buffer_id,lock_offset,lock_length);
  }
  if (psVar2 != (short *)0x0) {
    this_ptr->locked_length = lock_length;
    this_ptr->locked_offset = lock_offset;
  }
  return psVar2;
}
