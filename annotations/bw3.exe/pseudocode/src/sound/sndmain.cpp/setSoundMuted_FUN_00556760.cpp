// Name: sound_sndmain.cpp_setSoundMuted_FUN_00556760
// Address: 00556760
// Address Range: [[00556760, 00556771]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndmain_cpp_setSoundMuted_FUN_00556760(int muted)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl sound_sndmain_cpp_setSoundMuted_FUN_00556760(int muted)

{
  int iVar1;
  
  _DAT_02cf3290 = muted;
  if (muted == 0) {
    return 0;
  }
  sound_sndmain_cpp_FUN_00556c60();
  if (_DAT_02cf3280 != (int *)0x0) {
    iVar1 = (**(code **)(*_DAT_02cf3280 + 8))(_DAT_02cf3280);
    if (iVar1 == 0) {
      return 0;
    }
  }
  _DAT_02cf3284 = 0;
  sound_sndmain_cpp_FUN_00552b30();
  return 1;
}
