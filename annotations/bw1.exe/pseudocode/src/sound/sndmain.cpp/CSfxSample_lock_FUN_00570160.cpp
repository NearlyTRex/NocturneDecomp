// Name: sound_sndmain.cpp_CSfxSample_lock_FUN_00570160
// Address: 00570160
// Address Range: [[00570160, 0057025e]]
// Convention: __cdecl
// Signature: void * __cdecl sound_sndmain_cpp_CSfxSample_lock_FUN_00570160(CSfxSample *this_ptr,int lock_offset,int lock_length)

#include "nocturne.h"

void * __cdecl sound_sndmain_cpp_CSfxSample_lock_FUN_00570160(CSfxSample *this_ptr,int lock_offset,int lock_length)

{
  int iVar1;
  void *pvVar2;
  
  if (this_ptr->locked_length != 0) {
    g_CHAR_PTR_01d1d400 = "..\\sound\\sndmain.cpp";
    g_INT_01d1d404 = 0x89a;
    core_main_c_displayErrorAndQuit_FUN_005030e0("SfxSample::lock - already locked!");
  }
  if ((lock_offset < 0) || (this_ptr->streaming_buffer_size < lock_offset + lock_length)) {
    g_CHAR_PTR_01d1d400 = "..\\sound\\sndmain.cpp";
    g_INT_01d1d404 = 0x89f;
    core_main_c_displayErrorAndQuit_FUN_005030e0("SfxSample::lock - invalid region");
  }
  if (this_ptr->buffer_id == 0) {
    if (this_ptr->sample_data == (short *)0x0) {
      g_CHAR_PTR_01d1d400 = "..\\sound\\sndmain.cpp";
      g_INT_01d1d404 = 0x8a6;
      core_main_c_displayErrorAndQuit_FUN_005030e0("SfxSample::lock - nothing allocated!");
    }
    iVar1 = sound_sndmain_cpp_CSfxSample_framesToBytes_FUN_00572400(this_ptr,lock_offset);
    pvVar2 = (void *)(iVar1 + (int)this_ptr->sample_data);
  }
  else {
    if (g_CSoundDevicePtr == (CSoundDevice *)0x0) {
      return (void *)0x0;
    }
    pvVar2 = (*g_CSoundDevicePtr->vtable->lockSample)
                       (g_CSoundDevicePtr,this_ptr->buffer_id,lock_offset,lock_length);
  }
  if (pvVar2 != (void *)0x0) {
    this_ptr->locked_length = lock_length;
    this_ptr->locked_offset = lock_offset;
  }
  return pvVar2;
}
