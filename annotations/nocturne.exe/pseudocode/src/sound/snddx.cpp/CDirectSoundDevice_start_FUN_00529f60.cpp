// Name: sound_snddx.cpp_CDirectSoundDevice_start_FUN_00529f60
// Address: 00529f60
// Address Range: [[00529f60, 0052a0c1]]
// Convention: __cdecl
// Signature: int __cdecl sound_snddx_cpp_CDirectSoundDevice_start_FUN_00529f60(CDirectSoundDevice *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl sound_snddx_cpp_CDirectSoundDevice_start_FUN_00529f60(CDirectSoundDevice *this_ptr)

{
  int iVar1;
  uint uVar2;
  char *pcVar3;
  int iVar4;
  double local_338;
  char acStack_330 [400];
  char acStack_1a0 [400];
  
  if (_DAT_02dc921c == (int *)0x0) {
    local_338 = 0.05;
  }
  else {
    _DAT_02dc9238 =
         ((int)((_DAT_02dc9228 + (_DAT_02dc9228 >> 0x1f) * -8) -
               (uint)((_DAT_02dc9228 >> 0x1f) << 2 < 0)) >> 3) * _DAT_02dc9234 * _DAT_02dc9230;
    local_338 = ((double)_DAT_02dc9234 / (double)_DAT_02dc922c) * 0.5;
    iVar4 = 0;
    _DAT_02dc9240 = 0;
    if (0 < _DAT_02dc923c) {
      do {
        iVar1 = sound_snddx_cpp_fillStreamBuffer_FUN_00529c10();
        if (iVar1 == 0) goto LAB_0052a05b;
        iVar4 = iVar4 + 1;
      } while (iVar4 < _DAT_02dc923c);
    }
  }
  iVar4 = sound_sndmain_cpp_startSoundThread_FUN_005286d0(local_338);
  if (iVar4 != 0) {
    if (_DAT_02dc921c == (int *)0x0) {
      return 1;
    }
    uVar2 = (**(code **)(*_DAT_02dc921c + 0x34))(_DAT_02dc921c,0);
    if (uVar2 == 0) {
      uVar2 = (**(code **)(*_DAT_02dc921c + 0x30))(_DAT_02dc921c,0,0,1);
      if (uVar2 == 0) {
        return 1;
      }
      sound_snddx_cpp_getDirectSoundErrorString_FUN_00529a90(uVar2);
      _sprintf(acStack_330,"DirectSux: Unable to %s.  (%s)");
      pcVar3 = acStack_330;
    }
    else {
      sound_snddx_cpp_getDirectSoundErrorString_FUN_00529a90(uVar2);
      _sprintf(acStack_1a0,"DirectSux: Unable to %s.  (%s)");
      pcVar3 = acStack_1a0;
    }
    sound_sndmain_cpp_FUN_00529980(pcVar3);
  }
LAB_0052a05b:
  (*((this_ptr->base).vtable)->reset)(&this_ptr->base);
  return 0;
}
