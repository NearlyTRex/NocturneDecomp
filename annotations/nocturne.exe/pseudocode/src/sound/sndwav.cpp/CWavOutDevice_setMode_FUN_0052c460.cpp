// Name: sound_sndwav.cpp_CWavOutDevice_setMode_FUN_0052c460
// Address: 0052c460
// Address Range: [[0052c460, 0052c63c]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndwav_cpp_CWavOutDevice_setMode_FUN_0052c460(CWavOutDevice *this_ptr,int bits_per_sample,int channels,int sample_rate,int *out_buffer_size)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl sound_sndwav_cpp_CWavOutDevice_setMode_FUN_0052c460(CWavOutDevice *this_ptr,int bits_per_sample,int channels,int sample_rate,int *out_buffer_size)

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
  _DAT_02dc9428 = channels;
  _DAT_02dc942c = out_buffer_size;
  _DAT_02dc943c = 4;
  _DAT_02dc9430 = sample_rate;
  WStack_24.wFormatTag = 0xc4aa;
  WStack_24.nChannels = 0x52;
  fVar2 = sound_sndmain_cpp_getMaxSwLatency_FUN_00528970();
  WStack_24.wFormatTag = 0xc4c7;
  WStack_24.nChannels = 0x52;
  dVar7 = round
                    ((double)(((float)(int)_DAT_02dc942c * fVar2) / (float)_DAT_02dc943c));
  _DAT_02dc9434 = (uint)ROUND(dVar7);
  _DAT_02dc9434 = _DAT_02dc9434 + 0xf & 0xfffffff0;
  _DAT_02dc9438 =
       _DAT_02dc9434 *
       ((int)((_DAT_02dc9428 + ((int)_DAT_02dc9428 >> 0x1f) * -8) -
             (uint)(((int)_DAT_02dc9428 >> 0x1f) << 2 < 0)) >> 3) * _DAT_02dc9430;
  iVar1 = 0;
  if (0 < _DAT_02dc943c) {
    iVar6 = 0;
    do {
      pvVar3 = GlobalAlloc(0x2002,_DAT_02dc9438);
      *(HGLOBAL *)(iVar6 + 0x2dc93e8) = pvVar3;
      if (pvVar3 == (HGLOBAL)0x0) goto LAB_0052c613;
      pvVar4 = GlobalLock(pvVar3);
      *(LPVOID *)(iVar6 + 0x2dc93c8) = pvVar4;
      if (pvVar4 == (LPVOID)0x0) goto LAB_0052c613;
      pvVar3 = GlobalAlloc(0x2002,0x20);
      *(HGLOBAL *)(iVar6 + 0x2dc9408) = pvVar3;
      if (pvVar3 == (HGLOBAL)0x0) goto LAB_0052c613;
      iVar1 = iVar1 + 1;
      pvVar4 = GlobalLock(*(HGLOBAL *)(iVar6 + 0x2dc9408));
      *(LPVOID *)(iVar6 + 0x2dc93a8) = pvVar4;
      iVar6 = iVar6 + 4;
    } while (iVar1 < _DAT_02dc943c);
  }
  WStack_24.wBitsPerSample = _DAT_02dc9428;
  WStack_24.nChannels = _DAT_02dc9430;
  WStack_24.wFormatTag = 1;
  WStack_24.nBlockAlign = (short)((int)(_DAT_02dc9428 & 0xffff) >> 3) * _DAT_02dc9430;
  WStack_24.nSamplesPerSec = (DWORD)_DAT_02dc942c;
  WStack_24.nAvgBytesPerSec = (int)_DAT_02dc942c * (uint)WStack_24.nBlockAlign;
  MVar5 = waveOutOpen((LPHWAVEOUT)&DAT_02dc93a4,DAT_005bed44,&WStack_24,0,0,0);
  if (MVar5 == 0) {
    *out_buffer_size = _DAT_02dc9434;
    return 1;
  }
  sound_sndmain_cpp_logSoundError_FUN_00529980("waveOutOpen failed");
LAB_0052c613:
  (*((this_ptr->base).vtable)->close)(&this_ptr->base);
  return 0;
}
