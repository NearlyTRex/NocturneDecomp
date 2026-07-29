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
  byte *puVar4;
  int iVar5;
  double local_338;
  byte auStack_330 [400];
  byte auStack_1a0 [400];
  
  if (_DAT_02dc921c == (int *)0x0) {
    local_338 = 0.05;
  }
  else {
    _DAT_02dc9238 =
         ((int)((_DAT_02dc9228 + (_DAT_02dc9228 >> 0x1f) * -8) -
               (uint)((_DAT_02dc9228 >> 0x1f) << 2 < 0)) >> 3) * _DAT_02dc9234 * _DAT_02dc9230;
    local_338 = ((double)_DAT_02dc9234 / (double)_DAT_02dc922c) * 0.5;
    iVar5 = 0;
    _DAT_02dc9240 = 0;
    if (0 < _DAT_02dc923c) {
      do {
        iVar1 = sound_snddx_cpp_fillStreamBuffer_FUN_00529c10();
        if (iVar1 == 0) goto LAB_0052a05b;
        iVar5 = iVar5 + 1;
      } while (iVar5 < _DAT_02dc923c);
    }
  }
  iVar5 = sound_sndmain_cpp_startSoundThread_FUN_005286d0(local_338);
  if (iVar5 != 0) {
    if (_DAT_02dc921c == (int *)0x0) {
      return 1;
    }
    uVar2 = (**(code **)(*_DAT_02dc921c + 0x34))(_DAT_02dc921c,0);
    if (uVar2 == 0) {
      uVar2 = (**(code **)(*_DAT_02dc921c + 0x30))(_DAT_02dc921c,0,0,1);
      if (uVar2 == 0) {
        return 1;
      }
      pcVar3 = sound_snddx_cpp_getDirectSoundErrorString_FUN_00529a90(uVar2);
      _sprintf(auStack_330,"DirectSux: Unable to %s.  (%s)","Play the secondary buffer",
                 pcVar3);
      puVar4 = auStack_330;
    }
    else {
      pcVar3 = sound_snddx_cpp_getDirectSoundErrorString_FUN_00529a90(uVar2);
      _sprintf(auStack_1a0,"DirectSux: Unable to %s.  (%s)","Position secondary buffer to 0",
                 pcVar3);
      puVar4 = auStack_1a0;
    }
    sound_sndmain_cpp_FUN_00529980(puVar4);
  }
LAB_0052a05b:
  (*((this_ptr->base).vtable)->reset)(&this_ptr->base);
  return 0;
}
