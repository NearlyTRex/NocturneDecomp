// Name: sound_snddx.cpp_CDirectSoundDevice_hasHardware3D_FUN_005aee20
// Address: 005aee20
// Address Range: [[005aee20, 005aee2f]]
// Convention: __cdecl
// Signature: int __cdecl sound_snddx_cpp_CDirectSoundDevice_hasHardware3D_FUN_005aee20(CDirectSoundDevice *this_ptr)

#include "nocturne.h"

int __cdecl sound_snddx_cpp_CDirectSoundDevice_hasHardware3D_FUN_005aee20(CDirectSoundDevice *this_ptr)

{
  return (uint)(g_DirectSound3DListener != (IDirectSound3DListener *)0x0);
}
