// Name: sound_sndwav.cpp_CWavInDevice_start_FUN_005582f0
// Address: 005582f0
// Address Range: [[005582f0, 005583d1]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndwav_cpp_CWavInDevice_start_FUN_005582f0(CWavInDevice *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl sound_sndwav_cpp_CWavInDevice_start_FUN_005582f0(CWavInDevice *this_ptr)

{
  int iVar1;
  MMRESULT MVar2;
  int iVar3;
  int buffer_index;
  
  buffer_index = 0;
  if (0 < _DAT_0264b260) {
    iVar3 = 0;
    do {
      memset(*(void **)(iVar3 + 0x264b15c),0,0x20);
      **(uint **)(iVar3 + 0x264b15c) = *(uint *)(&DAT_0264b1fc + iVar3);
      *(int *)(*(int *)(iVar3 + 0x264b15c) + 0xc) = buffer_index;
      *(int *)(*(int *)(iVar3 + 0x264b15c) + 4) =
           ((int)((_DAT_0264b24c + (_DAT_0264b24c >> 0x1f) * -8) -
                 (uint)((_DAT_0264b24c >> 0x1f) << 2 < 0)) >> 3) * _DAT_0264b25c * _DAT_0264b250;
      iVar1 = sound_sndwav_cpp_writeWavInBuffer_FUN_00558190(buffer_index);
      if (iVar1 == 0) {
        (*((this_ptr->base).vtable)->reset)(&this_ptr->base);
        return 0;
      }
      buffer_index = buffer_index + 1;
      iVar3 = iVar3 + 4;
    } while (buffer_index < _DAT_0264b260);
  }
  _DAT_0264b274 = _DAT_0264b260 + -1;
  _DAT_0264b278 = _DAT_0264b25c;
  MVar2 = waveInStart(_DAT_0264b108);
  if (MVar2 == 0) {
    return 1;
  }
  sound_sndmain_cpp_FUN_005549c0("waveInStart failed!");
  (*((this_ptr->base).vtable)->reset)(&this_ptr->base);
  return 0;
}
