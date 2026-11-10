// Name: sound_sndmain.cpp_setSoundMuted_FUN_00550bd0
// Address: 00550bd0
// Address Range: [[00550bd0, 00550be1]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndmain_cpp_setSoundMuted_FUN_00550bd0(int muted)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl sound_sndmain_cpp_setSoundMuted_FUN_00550bd0(int muted)

{
  int iVar1;
  
  _DAT_02648e8c = muted;
  if (muted == 0) {
    return 0;
  }
  sound_sndmain_cpp_killAllSfx_FUN_005510d0();
  if (_DAT_02648e80 != (int *)0x0) {
    iVar1 = (**(code **)(*_DAT_02648e80 + 8))(_DAT_02648e80);
    if (iVar1 == 0) {
      return 0;
    }
  }
  _DAT_02648e84 = 0;
  sound_sndmain_cpp_freeMixBuffers_FUN_0054cfc0();
  return 1;
}
