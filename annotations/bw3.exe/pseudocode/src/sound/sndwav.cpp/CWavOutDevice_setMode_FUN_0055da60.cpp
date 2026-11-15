// Name: sound_sndwav.cpp_CWavOutDevice_setMode_FUN_0055da60
// Address: 0055da60
// Address Range: [[0055da60, 0055dc35]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndwav_cpp_CWavOutDevice_setMode_FUN_0055da60(CWavOutDevice *this_ptr,int bits_per_sample,int channels,int sample_rate,int *out_samples_per_block)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl sound_sndwav_cpp_CWavOutDevice_setMode_FUN_0055da60(CWavOutDevice *this_ptr,int bits_per_sample,int channels,int sample_rate,int *out_samples_per_block)

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
  _DAT_02cf54f0 = channels;
  _DAT_02cf54f4 = sample_rate;
  _DAT_02cf5500 = 4;
  _DAT_02cf54f8 = out_samples_per_block;
  WStack_24.wFormatTag = 0xdaaa;
  WStack_24.nChannels = 0x55;
  fVar2 = sound_sndmain_cpp_getMaxSwLatency_FUN_005591a0();
  WStack_24.wFormatTag = 0xdac7;
  WStack_24.nChannels = 0x55;
  dVar7 = round
                    ((double)(((float)(int)_DAT_02cf54f8 * fVar2) / (float)_DAT_02cf5500));
  _DAT_02cf54fc = (uint)ROUND(dVar7);
  iVar1 = 0;
  _DAT_02cf54fc = _DAT_02cf54fc + 0xf & 0xfffffff0;
  if (0 < _DAT_02cf5500) {
    iVar6 = 0;
    do {
      pvVar3 = GlobalAlloc(0x2002,((int)((_DAT_02cf54f0 + ((int)_DAT_02cf54f0 >> 0x1f) * -8) -
                                        (uint)(((int)_DAT_02cf54f0 >> 0x1f) << 2 < 0)) >> 3) *
                                  _DAT_02cf54fc * _DAT_02cf54f4);
      *(HGLOBAL *)(iVar6 + 0x2cf54b0) = pvVar3;
      if (pvVar3 == (HGLOBAL)0x0) goto LAB_0055dc0c;
      pvVar4 = GlobalLock(pvVar3);
      *(LPVOID *)(iVar6 + 0x2cf54d0) = pvVar4;
      if (pvVar4 == (LPVOID)0x0) goto LAB_0055dc0c;
      pvVar3 = GlobalAlloc(0x2002,0x20);
      *(HGLOBAL *)(iVar6 + 0x2cf5470) = pvVar3;
      if (pvVar3 == (HGLOBAL)0x0) goto LAB_0055dc0c;
      iVar1 = iVar1 + 1;
      pvVar4 = GlobalLock(*(HGLOBAL *)(iVar6 + 0x2cf5470));
      *(LPVOID *)(iVar6 + 0x2cf5490) = pvVar4;
      iVar6 = iVar6 + 4;
    } while (iVar1 < _DAT_02cf5500);
  }
  WStack_24.wBitsPerSample = _DAT_02cf54f0;
  WStack_24.nChannels = _DAT_02cf54f4;
  WStack_24.wFormatTag = 1;
  WStack_24.nBlockAlign = (short)((int)(_DAT_02cf54f0 & 0xffff) >> 3) * _DAT_02cf54f4;
  WStack_24.nSamplesPerSec = (DWORD)_DAT_02cf54f8;
  WStack_24.nAvgBytesPerSec = (int)_DAT_02cf54f8 * (uint)WStack_24.nBlockAlign;
  MVar5 = waveOutOpen((LPHWAVEOUT)&DAT_02cf546c,DAT_00604514,&WStack_24,0,0,0);
  if (MVar5 == 0) {
    *out_samples_per_block = _DAT_02cf54fc;
    return 1;
  }
  sound_sndmain_cpp_logSoundError_FUN_0055a560("waveOutOpen failed");
LAB_0055dc0c:
  (*((this_ptr->base).vtable)->close)(&this_ptr->base);
  return 0;
}
