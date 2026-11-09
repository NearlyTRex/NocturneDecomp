// Name: sound_sndwav.cpp_CWavInDevice_poll_FUN_005587b0
// Address: 005587b0
// Address Range: [[005587b0, 0055893f]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndwav_cpp_CWavInDevice_poll_FUN_005587b0(CWavInDevice *this_ptr,short *output_buffer,int num_samples)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl sound_sndwav_cpp_CWavInDevice_poll_FUN_005587b0(CWavInDevice *this_ptr,short *output_buffer,int num_samples)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  
  iVar3 = _DAT_0264b250 *
          ((int)((_DAT_0264b24c + (_DAT_0264b24c >> 0x1f) * -8) -
                (uint)((_DAT_0264b24c >> 0x1f) << 2 < 0)) >> 3);
  iVar4 = 0;
  bVar5 = _DAT_0264b24c == 0x10;
  while( true ) {
    if (*(int *)(&DAT_0264b1fc + _DAT_0264b274 * 4) == 0) {
      return -1;
    }
    iVar1 = ((_DAT_0264b25c - _DAT_0264b278) * _DAT_0264b26c) / _DAT_0264b254;
    if (num_samples < iVar1) {
      iVar1 = num_samples;
    }
    if (0 < iVar1) {
      sound_sndmain_cpp_resampleAndConvertAudio_FUN_00551dc0
                (_DAT_0264b24c,_DAT_0264b250,_DAT_0264b254,(uint)bVar5,
                 (short *)(_DAT_0264b278 * iVar3 + *(int *)(&DAT_0264b1fc + _DAT_0264b274 * 4)),
                 _DAT_0264b264,_DAT_0264b268,_DAT_0264b26c,_DAT_0264b270,output_buffer,iVar1);
      output_buffer = (short *)((int)output_buffer + iVar3 * iVar1);
      num_samples = num_samples - iVar1;
      _DAT_0264b278 = _DAT_0264b278 + (_DAT_0264b254 * iVar1) / _DAT_0264b26c;
      iVar4 = iVar4 + iVar1;
    }
    if (num_samples < 1) {
      return iVar4;
    }
    iVar1 = _DAT_0264b274 + 1;
    if (_DAT_0264b260 <= iVar1) {
      iVar1 = 0;
    }
    iVar2 = *(int *)(iVar1 * 4 + 0x264b15c);
    if (iVar2 == 0) {
      return -1;
    }
    if ((*(byte *)(iVar2 + 0x10) & 1) == 0) {
      return iVar4;
    }
    iVar2 = sound_sndwav_cpp_writeWavInBuffer_FUN_00558190(iVar1);
    if (iVar2 == 0) break;
    _DAT_0264b278 = 0;
    _DAT_0264b274 = iVar1;
  }
  sound_sndmain_cpp_FUN_005549c0("WavInDevice::poll - queueWavInBuffer failed");
  return -1;
}
