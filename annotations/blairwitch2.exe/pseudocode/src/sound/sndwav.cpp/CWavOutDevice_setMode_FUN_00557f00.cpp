// Name: sound_sndwav.cpp_CWavOutDevice_setMode_FUN_00557f00
// Address: 00557f00
// Address Range: [[00557f00, 005580d5]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndwav_cpp_CWavOutDevice_setMode_FUN_00557f00(CWavOutDevice *this_ptr,int bits_per_sample,int channels,int sample_rate,int *out_samples_per_block)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl sound_sndwav_cpp_CWavOutDevice_setMode_FUN_00557f00(CWavOutDevice *this_ptr,int bits_per_sample,int channels,int sample_rate,int *out_samples_per_block)

{
  int iVar1;
  float fVar2;
  HGLOBAL pvVar3;
  LPVOID pvVar4;
  MMRESULT MVar5;
  int iVar6;
  double dVar7;
  WAVEFORMATEX WStack_24;
  
  iVar1 = (*((this_ptr->base).vtable)->close)(&this_ptr->base);
  if (iVar1 == 0) {
    return 0;
  }
  _DAT_0264b0f4 = channels;
  _DAT_0264b0f8 = sample_rate;
  _DAT_0264b104 = 4;
  _DAT_0264b0fc = out_samples_per_block;
  WStack_24.wFormatTag = 0x7f4a;
  WStack_24.nChannels = 0x55;
  fVar2 = sound_sndmain_cpp_getMaxSwLatency_FUN_00553600();
  WStack_24.wFormatTag = 0x7f67;
  WStack_24.nChannels = 0x55;
  dVar7 = round
                    ((double)(((float)(int)_DAT_0264b0fc * fVar2) / (float)_DAT_0264b104));
  _DAT_0264b100 = (uint)ROUND(dVar7);
  iVar1 = 0;
  _DAT_0264b100 = _DAT_0264b100 + 0xf & 0xfffffff0;
  if (0 < _DAT_0264b104) {
    iVar6 = 0;
    do {
      pvVar3 = GlobalAlloc(0x2002,((int)((_DAT_0264b0f4 + ((int)_DAT_0264b0f4 >> 0x1f) * -8) -
                                        (uint)(((int)_DAT_0264b0f4 >> 0x1f) << 2 < 0)) >> 3) *
                                  _DAT_0264b100 * _DAT_0264b0f8);
      *(HGLOBAL *)(iVar6 + 0x264b0b4) = pvVar3;
      if (pvVar3 == (HGLOBAL)0x0) goto LAB_005580ac;
      pvVar4 = GlobalLock(pvVar3);
      *(LPVOID *)(iVar6 + 0x264b0d4) = pvVar4;
      if (pvVar4 == (LPVOID)0x0) goto LAB_005580ac;
      pvVar3 = GlobalAlloc(0x2002,0x20);
      *(HGLOBAL *)(iVar6 + 0x264b074) = pvVar3;
      if (pvVar3 == (HGLOBAL)0x0) goto LAB_005580ac;
      iVar1 = iVar1 + 1;
      pvVar4 = GlobalLock(*(HGLOBAL *)(iVar6 + 0x264b074));
      *(LPVOID *)(iVar6 + 0x264b094) = pvVar4;
      iVar6 = iVar6 + 4;
    } while (iVar1 < _DAT_0264b104);
  }
  WStack_24.wBitsPerSample = _DAT_0264b0f4;
  WStack_24.nChannels = _DAT_0264b0f8;
  WStack_24.wFormatTag = 1;
  WStack_24.nBlockAlign = (short)((int)(_DAT_0264b0f4 & 0xffff) >> 3) * _DAT_0264b0f8;
  WStack_24.nSamplesPerSec = (DWORD)_DAT_0264b0fc;
  WStack_24.nAvgBytesPerSec = (int)_DAT_0264b0fc * (uint)WStack_24.nBlockAlign;
  MVar5 = waveOutOpen((LPHWAVEOUT)&DAT_0264b070,DAT_0061bf84,&WStack_24,0,0,0);
  if (MVar5 == 0) {
    *out_samples_per_block = _DAT_0264b100;
    return 1;
  }
  sound_sndmain_cpp_logSoundError_FUN_005549c0("waveOutOpen failed");
LAB_005580ac:
  (*((this_ptr->base).vtable)->close)(&this_ptr->base);
  return 0;
}
