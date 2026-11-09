// Name: sound_sndwav.cpp_CWavInDevice_poll_FUN_0057b1e0
// Address: 0057b1e0
// Address Range: [[0057b1e0, 0057b36f]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndwav_cpp_CWavInDevice_poll_FUN_0057b1e0(CWavInDevice *this_ptr,short *output_buffer,int num_samples)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl sound_sndwav_cpp_CWavInDevice_poll_FUN_0057b1e0(CWavInDevice *this_ptr,short *output_buffer,int num_samples)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  
  iVar3 = _DAT_02c82a20 *
          ((int)((_DAT_02c82a1c + (_DAT_02c82a1c >> 0x1f) * -8) -
                (uint)((_DAT_02c82a1c >> 0x1f) << 2 < 0)) >> 3);
  iVar4 = 0;
  bVar5 = _DAT_02c82a1c == 0x10;
  while( true ) {
    if (*(int *)(&DAT_02c829cc + _DAT_02c82a44 * 4) == 0) {
      return -1;
    }
    iVar1 = ((_DAT_02c82a2c - _DAT_02c82a48) * _DAT_02c82a3c) / _DAT_02c82a24;
    if (num_samples < iVar1) {
      iVar1 = num_samples;
    }
    if (0 < iVar1) {
      sound_sndmain_cpp_resampleAndConvertAudio_FUN_005747f0
                (_DAT_02c82a1c,_DAT_02c82a20,_DAT_02c82a24,(uint)bVar5,
                 (short *)(_DAT_02c82a48 * iVar3 + *(int *)(&DAT_02c829cc + _DAT_02c82a44 * 4)),
                 _DAT_02c82a34,_DAT_02c82a38,_DAT_02c82a3c,_DAT_02c82a40,output_buffer,iVar1);
      output_buffer = (short *)((int)output_buffer + iVar3 * iVar1);
      num_samples = num_samples - iVar1;
      _DAT_02c82a48 = _DAT_02c82a48 + (_DAT_02c82a24 * iVar1) / _DAT_02c82a3c;
      iVar4 = iVar4 + iVar1;
    }
    if (num_samples < 1) {
      return iVar4;
    }
    iVar1 = _DAT_02c82a44 + 1;
    if (_DAT_02c82a30 <= iVar1) {
      iVar1 = 0;
    }
    iVar2 = *(int *)(iVar1 * 4 + 0x2c8292c);
    if (iVar2 == 0) {
      return -1;
    }
    if ((*(byte *)(iVar2 + 0x10) & 1) == 0) {
      return iVar4;
    }
    iVar2 = sound_sndwav_cpp_writeWavInBuffer_FUN_0057abc0(iVar1);
    if (iVar2 == 0) break;
    _DAT_02c82a48 = 0;
    _DAT_02c82a44 = iVar1;
  }
  sound_sndmain_cpp_FUN_005773f0("WavInDevice::poll - queueWavInBuffer failed");
  return -1;
}
