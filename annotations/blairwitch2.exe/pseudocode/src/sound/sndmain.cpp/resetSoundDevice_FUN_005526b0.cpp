// Name: sound_sndmain.cpp_resetSoundDevice_FUN_005526b0
// Address: 005526b0
// Address Range: [[005526b0, 005526e1]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndmain_cpp_resetSoundDevice_FUN_005526b0(void)

#include "nocturne.h"

int __cdecl sound_sndmain_cpp_resetSoundDevice_FUN_005526b0(void)

{
  int iVar1;
  
  sound_sndmain_cpp_killAllSfx_FUN_005510d0();
  if (g_CSoundDevice_PTR_02648e80 != (CSoundDevice *)0x0) {
    iVar1 = (*g_CSoundDevice_PTR_02648e80->vtable->reset)(g_CSoundDevice_PTR_02648e80);
    if (iVar1 == 0) {
      return 0;
    }
  }
  g_INT_02648e84 = 0;
  sound_sndmain_cpp_freeMixBuffers_FUN_0054cfc0();
  return 1;
}
