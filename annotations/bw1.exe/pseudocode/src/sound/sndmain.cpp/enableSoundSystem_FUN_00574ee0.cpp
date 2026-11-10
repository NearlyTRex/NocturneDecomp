// Name: sound_sndmain.cpp_enableSoundSystem_FUN_00574ee0
// Address: 00574ee0
// Address Range: [[00574ee0, 005750d2]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndmain_cpp_enableSoundSystem_FUN_00574ee0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl sound_sndmain_cpp_enableSoundSystem_FUN_00574ee0(void)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = sound_sndmain_cpp_isSoundSystemActive_FUN_00575540();
  if (uVar2 == 0) {
    return 0;
  }
  iVar3 = sound_sndmain_cpp_isSoundMuted_FUN_005735f0();
  if (iVar3 != 0) {
    iVar3 = sound_sndmain_cpp_resetSoundDevice_FUN_005750e0();
    return iVar3;
  }
  iVar3 = sound_sndmain_cpp_isSoundBusy_FUN_00575550();
  if (iVar3 != 0) {
    return 1;
  }
  sound_sndmain_cpp_lockSound_FUN_00575d20();
  iVar3 = sound_sndmain_cpp_setSoundOutputMode_FUN_00575120(DAT_006232e8,DAT_006232ec,DAT_006232f0);
  if (iVar3 != 0) {
    if ((0 < _DAT_02c8066c) && (iVar3 = 0, 0 < DAT_006232ec)) {
      iVar4 = 0;
      do {
        puVar1 = (uint *)(iVar4 + 0x2c80698);
        iVar4 = iVar4 + 4;
        iVar3 = iVar3 + 1;
        memset((void *)*puVar1,0,_DAT_02c80668 * _DAT_02c8066c * 4);
      } while (iVar3 < DAT_006232ec);
    }
    _DAT_02c80660 = 0;
    _DAT_02c80664 = 0;
    (**(code **)(*_DAT_02c80650 + 0x1c))
              (_DAT_02c80650,*(uint *)(&DAT_02c7fbf8 + _DAT_02c7fc88 * 8),
               *(uint *)(_DAT_02c7fc88 * 8 + 0x2c7fbfc),
               *(uint *)(&DAT_02c7fc08 + _DAT_02c7fc88 * 8),
               *(uint *)(_DAT_02c7fc88 * 8 + 0x2c7fc0c),
               *(uint *)(&DAT_02c7fc18 + _DAT_02c7fc88 * 8),
               *(uint *)(_DAT_02c7fc88 * 8 + 0x2c7fc1c));
    (**(code **)(*_DAT_02c80650 + 0x20))
              (_DAT_02c80650,*(uint *)(_DAT_02c7fc88 * 4 + 0x2c7fc40),
               *(uint *)(_DAT_02c7fc88 * 4 + 0x2c7fc48),
               *(uint *)(_DAT_02c7fc88 * 4 + 0x2c7fc50),
               *(uint *)(_DAT_02c7fc88 * 4 + 0x2c7fc58),
               *(uint *)(_DAT_02c7fc88 * 4 + 0x2c7fc60),
               *(uint *)(_DAT_02c7fc88 * 4 + 0x2c7fc68),
               *(uint *)(_DAT_02c7fc88 * 4 + 0x2c7fc70),
               *(uint *)(_DAT_02c7fc88 * 4 + 0x2c7fc78),
               *(uint *)(_DAT_02c7fc88 * 4 + 0x2c7fc80));
    (**(code **)(*_DAT_02c80650 + 0x24))
              (_DAT_02c80650,*(uint *)(_DAT_02c7fc88 * 4 + 0x2c7fc28),
               *(uint *)(_DAT_02c7fc88 * 4 + 0x2c7fc30),
               *(uint *)(_DAT_02c7fc88 * 4 + 0x2c7fc38));
    (**(code **)(*_DAT_02c80650 + 0x28))(_DAT_02c80650,DAT_00623304);
    (**(code **)(*_DAT_02c80650 + 0x2c))(_DAT_02c80650,_DAT_02c807d0,_DAT_02c807d4,_DAT_02c807d8);
    _DAT_02c807f0 = wincore_winrun_cpp_getTime_FUN_005b2420();
    iVar3 = (**(code **)(*_DAT_02c80650 + 4))(_DAT_02c80650);
    if (iVar3 != 0) {
      _DAT_02c80654 = 1;
      sound_sndmain_cpp_FUN_00573e70();
      return 1;
    }
  }
  sound_sndmain_cpp_FUN_00573e70();
  return 0;
}
