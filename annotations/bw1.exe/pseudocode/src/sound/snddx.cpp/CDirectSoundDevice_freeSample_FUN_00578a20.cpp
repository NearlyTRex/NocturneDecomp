// Name: sound_snddx.cpp_CDirectSoundDevice_freeSample_FUN_00578a20
// Address: 00578a20
// Address Range: [[00578a20, 00578a7a]]
// Convention: __cdecl
// Signature: void __cdecl sound_snddx_cpp_CDirectSoundDevice_freeSample_FUN_00578a20(CDirectSoundDevice *this_ptr,int buffer_id)

#include "nocturne.h"

void __cdecl sound_snddx_cpp_CDirectSoundDevice_freeSample_FUN_00578a20(CDirectSoundDevice *this_ptr,int buffer_id)

{
  IDirectSoundBuffer *this_ptr_00;
  
  this_ptr_00 = g_IDirectSoundBuffer_PTR_ARRAY_02c81dc4[buffer_id * 6];
  if (this_ptr_00 != (IDirectSoundBuffer *)0x0) {
    (*this_ptr_00->vtable->Release)((IUnknown *)this_ptr_00);
    g_IDirectSoundBuffer_PTR_ARRAY_02c81dc4[buffer_id * 6] = (IDirectSoundBuffer *)0x0;
  }
  g_IDirectSoundBuffer_PTR_ARRAY_02c81dc4[buffer_id * 6 + 2] = (IDirectSoundBuffer *)0x0;
  g_IDirectSoundBuffer_PTR_ARRAY_02c81dc4[buffer_id * 6 + 3] = (IDirectSoundBuffer *)0x0;
  g_IDirectSoundBuffer_PTR_ARRAY_02c81dc4[buffer_id * 6 + 4] = (IDirectSoundBuffer *)0x0;
  g_IDirectSoundBuffer_PTR_ARRAY_02c81dc4[buffer_id * 6 + 5] = (IDirectSoundBuffer *)0x0;
  return;
}
