// Name: sound_sndmain.cpp_setSoundMuted_FUN_00573600
// Address: 00573600
// Address Range: [[00573600, 00573611]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndmain_cpp_setSoundMuted_FUN_00573600(int muted)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl sound_sndmain_cpp_setSoundMuted_FUN_00573600(int muted)

{
  int iVar1;
  
  _DAT_02c8065c = muted;
  if (muted == 0) {
    return 0;
  }
  sound_sndmain_cpp_FUN_00573b00();
  if (_DAT_02c80650 != (int *)0x0) {
    iVar1 = (**(code **)(*_DAT_02c80650 + 8))(_DAT_02c80650);
    if (iVar1 == 0) {
      return 0;
    }
  }
  _DAT_02c80654 = 0;
  sound_sndmain_cpp_FUN_0056f630();
  return 1;
}
