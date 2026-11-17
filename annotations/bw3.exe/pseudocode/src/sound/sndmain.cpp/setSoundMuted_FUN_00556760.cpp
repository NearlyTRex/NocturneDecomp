// Name: sound_sndmain.cpp_setSoundMuted_FUN_00556760
// Address: 00556760
// Address Range: [[00556760, 00556771]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndmain_cpp_setSoundMuted_FUN_00556760(int muted)

#include "nocturne.h"

int __cdecl sound_sndmain_cpp_setSoundMuted_FUN_00556760(int muted)

{
  int iVar1;
  
  g_INT_02cf3290 = muted;
  if (muted == 0) {
    return 0;
  }
  sound_sndmain_cpp_killAllSfx_FUN_00556c60();
  if (g_CSoundDevice_PTR_02cf3280 != (CSoundDevice *)0x0) {
    iVar1 = (*g_CSoundDevice_PTR_02cf3280->vtable->reset)(g_CSoundDevice_PTR_02cf3280);
    if (iVar1 == 0) {
      return 0;
    }
  }
  g_INT_02cf3284 = 0;
  sound_sndmain_cpp_freeMixBuffers_FUN_00552b30();
  return 1;
}
