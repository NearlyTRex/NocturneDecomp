// Name: sound_snddx.cpp_CDirectSoundDevice_hasHardware3D_FUN_0052aa40
// Address: 0052aa40
// Address Range: [[0052aa40, 0052aa4f]]
// Convention: __cdecl
// Signature: int __cdecl sound_snddx_cpp_CDirectSoundDevice_hasHardware3D_FUN_0052aa40(CDirectSoundDevice *this_ptr)

#include "nocturne.h"

int __cdecl sound_snddx_cpp_CDirectSoundDevice_hasHardware3D_FUN_0052aa40(CDirectSoundDevice *this_ptr)

{
  return (uint)(g_DirectSound3DListener != (IDirectSound3DListener *)0x0);
}
