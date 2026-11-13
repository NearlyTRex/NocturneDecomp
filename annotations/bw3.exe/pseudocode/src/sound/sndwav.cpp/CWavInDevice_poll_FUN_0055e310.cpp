// Name: sound_sndwav.cpp_CWavInDevice_poll_FUN_0055e310
// Address: 0055e310
// Address Range: [[0055e310, 0055e49f]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndwav_cpp_CWavInDevice_poll_FUN_0055e310(CWavInDevice *this_ptr,short *output_buffer,int num_samples)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl sound_sndwav_cpp_CWavInDevice_poll_FUN_0055e310(CWavInDevice *this_ptr,short *output_buffer,int num_samples)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  
  iVar3 = _DAT_02cf564c *
          ((int)((_DAT_02cf5648 + (_DAT_02cf5648 >> 0x1f) * -8) -
                (uint)((_DAT_02cf5648 >> 0x1f) << 2 < 0)) >> 3);
  iVar4 = 0;
  bVar5 = _DAT_02cf5648 == 0x10;
  while( true ) {
    if (*(int *)(&DAT_02cf55f8 + _DAT_02cf5670 * 4) == 0) {
      return -1;
    }
    iVar1 = ((_DAT_02cf5658 - _DAT_02cf5674) * _DAT_02cf5668) / _DAT_02cf5650;
    if (num_samples < iVar1) {
      iVar1 = num_samples;
    }
    if (0 < iVar1) {
      sound_sndmain_cpp_resampleAndConvertAudio_FUN_00557950
                (_DAT_02cf5648,_DAT_02cf564c,_DAT_02cf5650,(uint)bVar5,
                 (short *)(_DAT_02cf5674 * iVar3 + *(int *)(&DAT_02cf55f8 + _DAT_02cf5670 * 4)),
                 _DAT_02cf5660,_DAT_02cf5664,_DAT_02cf5668,_DAT_02cf566c,output_buffer,iVar1);
      output_buffer = (short *)((int)output_buffer + iVar3 * iVar1);
      num_samples = num_samples - iVar1;
      _DAT_02cf5674 = _DAT_02cf5674 + (_DAT_02cf5650 * iVar1) / _DAT_02cf5668;
      iVar4 = iVar4 + iVar1;
    }
    if (num_samples < 1) {
      return iVar4;
    }
    iVar1 = _DAT_02cf5670 + 1;
    if (_DAT_02cf565c <= iVar1) {
      iVar1 = 0;
    }
    iVar2 = *(int *)(iVar1 * 4 + 0x2cf5558);
    if (iVar2 == 0) {
      return -1;
    }
    if ((*(byte *)(iVar2 + 0x10) & 1) == 0) {
      return iVar4;
    }
    iVar2 = sound_sndwav_cpp_writeWavInBuffer_FUN_0055dcf0(iVar1);
    if (iVar2 == 0) break;
    _DAT_02cf5674 = 0;
    _DAT_02cf5670 = iVar1;
  }
  sound_sndmain_cpp_logSoundError_FUN_0055a560("WavInDevice::poll - queueWavInBuffer failed");
  return -1;
}
