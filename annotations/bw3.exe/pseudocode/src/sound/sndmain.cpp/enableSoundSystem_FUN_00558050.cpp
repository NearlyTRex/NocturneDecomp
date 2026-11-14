// Name: sound_sndmain.cpp_enableSoundSystem_FUN_00558050
// Address: 00558050
// Address Range: [[00558050, 00558242]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndmain_cpp_enableSoundSystem_FUN_00558050(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl sound_sndmain_cpp_enableSoundSystem_FUN_00558050(void)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = sound_sndmain_cpp_isSoundSystemActive_FUN_005586b0();
  if (uVar2 == 0) {
    return 0;
  }
  iVar3 = sound_sndmain_cpp_isSoundMuted_FUN_00556750();
  if (iVar3 != 0) {
    iVar3 = sound_sndmain_cpp_resetSoundDevice_FUN_00558250();
    return iVar3;
  }
  iVar3 = sound_sndmain_cpp_isSoundBusy_FUN_005586c0();
  if (iVar3 != 0) {
    return 1;
  }
  sound_sndmain_cpp_lockSound_FUN_00558e90();
  iVar3 = sound_sndmain_cpp_setSoundOutputMode_FUN_00558290(DAT_00604228,DAT_0060422c,DAT_00604230);
  if (iVar3 != 0) {
    if ((0 < _DAT_02cf32a0) && (iVar3 = 0, 0 < DAT_0060422c)) {
      iVar4 = 0;
      do {
        puVar1 = (uint *)(iVar4 + 0x2cf32cc);
        iVar4 = iVar4 + 4;
        iVar3 = iVar3 + 1;
        memset((void *)*puVar1,0,_DAT_02cf329c * _DAT_02cf32a0 * 4);
      } while (iVar3 < DAT_0060422c);
    }
    _DAT_02cf3294 = 0;
    _DAT_02cf3298 = 0;
    (**(code **)(*_DAT_02cf3280 + 0x1c))
              (_DAT_02cf3280,*(uint *)(&DAT_02cf2828 + _DAT_02cf28b8 * 8),
               *(uint *)(_DAT_02cf28b8 * 8 + 0x2cf282c),
               *(uint *)(&DAT_02cf2838 + _DAT_02cf28b8 * 8),
               *(uint *)(_DAT_02cf28b8 * 8 + 0x2cf283c),
               *(uint *)(&DAT_02cf2848 + _DAT_02cf28b8 * 8),
               *(uint *)(_DAT_02cf28b8 * 8 + 0x2cf284c));
    (**(code **)(*_DAT_02cf3280 + 0x20))
              (_DAT_02cf3280,*(uint *)(_DAT_02cf28b8 * 4 + 0x2cf2870),
               *(uint *)(_DAT_02cf28b8 * 4 + 0x2cf2878),
               *(uint *)(_DAT_02cf28b8 * 4 + 0x2cf2880),
               *(uint *)(_DAT_02cf28b8 * 4 + 0x2cf2888),
               *(uint *)(_DAT_02cf28b8 * 4 + 0x2cf2890),
               *(uint *)(_DAT_02cf28b8 * 4 + 0x2cf2898),
               *(uint *)(_DAT_02cf28b8 * 4 + 0x2cf28a0),
               *(uint *)(_DAT_02cf28b8 * 4 + 0x2cf28a8),
               *(uint *)(_DAT_02cf28b8 * 4 + 0x2cf28b0));
    (**(code **)(*_DAT_02cf3280 + 0x24))
              (_DAT_02cf3280,*(uint *)(_DAT_02cf28b8 * 4 + 0x2cf2858),
               *(uint *)(_DAT_02cf28b8 * 4 + 0x2cf2860),
               *(uint *)(_DAT_02cf28b8 * 4 + 0x2cf2868));
    (**(code **)(*_DAT_02cf3280 + 0x28))(_DAT_02cf3280,DAT_00604240);
    (**(code **)(*_DAT_02cf3280 + 0x2c))(_DAT_02cf3280,_DAT_02cf3400,_DAT_02cf3404,_DAT_02cf3408);
    _DAT_02cf3420 = wincore_winrun_cpp_getTime_FUN_005806a0();
    iVar3 = (**(code **)(*_DAT_02cf3280 + 4))(_DAT_02cf3280);
    if (iVar3 != 0) {
      _DAT_02cf3284 = 1;
      sound_sndmain_cpp_unlockSound_FUN_00556fd0();
      return 1;
    }
  }
  sound_sndmain_cpp_unlockSound_FUN_00556fd0();
  return 0;
}
