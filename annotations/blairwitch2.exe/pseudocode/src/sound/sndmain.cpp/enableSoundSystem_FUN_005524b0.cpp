// Name: sound_sndmain.cpp_enableSoundSystem_FUN_005524b0
// Address: 005524b0
// Address Range: [[005524b0, 005526a2]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndmain_cpp_enableSoundSystem_FUN_005524b0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl sound_sndmain_cpp_enableSoundSystem_FUN_005524b0(void)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = sound_sndmain_cpp_isSoundSystemActive_FUN_00552b10();
  if (uVar2 == 0) {
    return 0;
  }
  iVar3 = sound_sndmain_cpp_isSoundMuted_FUN_00550bc0();
  if (iVar3 != 0) {
    iVar3 = sound_sndmain_cpp_resetSoundDevice_FUN_005526b0();
    return iVar3;
  }
  iVar3 = sound_sndmain_cpp_isSoundBusy_FUN_00552b20();
  if (iVar3 != 0) {
    return 1;
  }
  sound_sndmain_cpp_lockSound_FUN_005532f0();
  iVar3 = sound_sndmain_cpp_setSoundOutputMode_FUN_005526f0(DAT_0061bc98,DAT_0061bc9c,DAT_0061bca0);
  if (iVar3 != 0) {
    if ((0 < _DAT_02648e9c) && (iVar3 = 0, 0 < DAT_0061bc9c)) {
      iVar4 = 0;
      do {
        puVar1 = (uint *)(iVar4 + 0x2648ec8);
        iVar4 = iVar4 + 4;
        iVar3 = iVar3 + 1;
        memset((void *)*puVar1,0,_DAT_02648e98 * _DAT_02648e9c * 4);
      } while (iVar3 < DAT_0061bc9c);
    }
    _DAT_02648e90 = 0;
    _DAT_02648e94 = 0;
    (**(code **)(*_DAT_02648e80 + 0x1c))
              (_DAT_02648e80,*(uint *)(&DAT_02648428 + _DAT_026484b8 * 8),
               *(uint *)(_DAT_026484b8 * 8 + 0x264842c),
               *(uint *)(&DAT_02648438 + _DAT_026484b8 * 8),
               *(uint *)(_DAT_026484b8 * 8 + 0x264843c),
               *(uint *)(&DAT_02648448 + _DAT_026484b8 * 8),
               *(uint *)(_DAT_026484b8 * 8 + 0x264844c));
    (**(code **)(*_DAT_02648e80 + 0x20))
              (_DAT_02648e80,*(uint *)(_DAT_026484b8 * 4 + 0x2648470),
               *(uint *)(_DAT_026484b8 * 4 + 0x2648478),
               *(uint *)(_DAT_026484b8 * 4 + 0x2648480),
               *(uint *)(_DAT_026484b8 * 4 + 0x2648488),
               *(uint *)(_DAT_026484b8 * 4 + 0x2648490),
               *(uint *)(_DAT_026484b8 * 4 + 0x2648498),
               *(uint *)(_DAT_026484b8 * 4 + 0x26484a0),
               *(uint *)(_DAT_026484b8 * 4 + 0x26484a8),
               *(uint *)(_DAT_026484b8 * 4 + 0x26484b0));
    (**(code **)(*_DAT_02648e80 + 0x24))
              (_DAT_02648e80,*(uint *)(_DAT_026484b8 * 4 + 0x2648458),
               *(uint *)(_DAT_026484b8 * 4 + 0x2648460),
               *(uint *)(_DAT_026484b8 * 4 + 0x2648468));
    (**(code **)(*_DAT_02648e80 + 0x28))(_DAT_02648e80,DAT_0061bcb4);
    (**(code **)(*_DAT_02648e80 + 0x2c))(_DAT_02648e80,_DAT_02649000,_DAT_02649004,_DAT_02649008);
    _DAT_02649020 = wincore_winrun_cpp_getTime_FUN_0058e9e0();
    iVar3 = (**(code **)(*_DAT_02648e80 + 4))(_DAT_02648e80);
    if (iVar3 != 0) {
      _DAT_02648e84 = 1;
      sound_sndmain_cpp_unlockSound_FUN_00551440();
      return 1;
    }
  }
  sound_sndmain_cpp_unlockSound_FUN_00551440();
  return 0;
}
