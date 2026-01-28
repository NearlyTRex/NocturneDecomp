// Name: sound_snddx.cpp_CDirectSoundDevice_freeSample_FUN_005af190
// Address: 005af190
// Address Range: [[005af190, 005af21c]]
// Convention: __cdecl
// Signature: void __cdecl sound_snddx_cpp_CDirectSoundDevice_freeSample_FUN_005af190 (CDirectSoundDevice *this_ptr,int buffer_id)

#include "nocturne.h"

void __cdecl
sound_snddx_cpp_CDirectSoundDevice_freeSample_FUN_005af190
          (CDirectSoundDevice *this_ptr,int buffer_id)

{
  IDirectSoundBuffer *this_ptr_00;
  
  if ((((buffer_id < 1) || (0x18 < buffer_id)) ||
      (g_DirectSoundSampleBuffers[buffer_id] == (IDirectSoundBuffer *)0x0)) ||
     (g_DirectSoundBufferMetadata[buffer_id].field0_0x0 < 1)) {
    g_CurrentFilename = "..\\sound\\snddx.cpp";
    g_CurrentLineNumber = 0x2b1;
    core_main_c_displayErrorAndQuit_FUN_00506f10("DirectSoundDevice::freeSample - Invalid handle: %d",buffer_id);
  }
  this_ptr_00 = g_DirectSoundSampleBuffers[buffer_id];
  if (this_ptr_00 != (IDirectSoundBuffer *)0x0) {
    (*this_ptr_00->vtable->Release)((IUnknown *)this_ptr_00);
    g_DirectSoundSampleBuffers[buffer_id] = (IDirectSoundBuffer *)0x0;
  }
  g_DirectSoundBufferMetadata[buffer_id].field0_0x0 = 0;
  return;
}
