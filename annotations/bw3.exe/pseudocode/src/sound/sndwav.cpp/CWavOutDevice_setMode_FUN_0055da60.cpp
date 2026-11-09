// Name: sound_sndwav.cpp_CWavOutDevice_setMode_FUN_0055da60
// Address: 0055da60
// Address Range: [[0055da60, 0055dc35]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndwav_cpp_CWavOutDevice_setMode_FUN_0055da60(CWavOutDevice *this_ptr,int bits_per_sample,int channels,int sample_rate,int *out_buffer_size)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl sound_sndwav_cpp_CWavOutDevice_setMode_FUN_0055da60(CWavOutDevice *this_ptr,int bits_per_sample,int channels,int sample_rate,int *out_buffer_size)

{
  int iVar1;
  HGLOBAL pvVar2;
  LPVOID pvVar3;
  MMRESULT MVar4;
  int iVar5;
  float10 fVar6;
  byte auStack_24 [20];
  
  iVar1 = (*(code *)**(uint **)this_ptr)(this_ptr);
  if (iVar1 == 0) {
    return 0;
  }
  _DAT_02cf54f0 = bits_per_sample;
  _DAT_02cf54f4 = channels;
  _DAT_02cf5500 = 4;
  _DAT_02cf54f8 = sample_rate;
  auStack_24._16_4_ = sound_sndmain_cpp_FUN_005591a0();
  fVar6 = ((float10)(int)_DAT_02cf54f8 * (float10)(float)auStack_24._16_4_) / (float10)_DAT_02cf5500
  ;
  round();
  _DAT_02cf54fc = (uint)ROUND(fVar6);
  iVar1 = 0;
  _DAT_02cf54fc = _DAT_02cf54fc + 0xf & 0xfffffff0;
  if (0 < _DAT_02cf5500) {
    iVar5 = 0;
    do {
      pvVar2 = GlobalAlloc(0x2002,((int)((_DAT_02cf54f0 + ((int)_DAT_02cf54f0 >> 0x1f) * -8) -
                                        (uint)(((int)_DAT_02cf54f0 >> 0x1f) << 2 < 0)) >> 3) *
                                  _DAT_02cf54fc * _DAT_02cf54f4);
      *(HGLOBAL *)(iVar5 + 0x2cf54b0) = pvVar2;
      if (pvVar2 == (HGLOBAL)0x0) goto LAB_0055dc0c;
      pvVar3 = GlobalLock(pvVar2);
      *(LPVOID *)(iVar5 + 0x2cf54d0) = pvVar3;
      if (pvVar3 == (LPVOID)0x0) goto LAB_0055dc0c;
      pvVar2 = GlobalAlloc(0x2002,0x20);
      *(HGLOBAL *)(iVar5 + 0x2cf5470) = pvVar2;
      if (pvVar2 == (HGLOBAL)0x0) goto LAB_0055dc0c;
      iVar1 = iVar1 + 1;
      pvVar3 = GlobalLock(*(HGLOBAL *)(iVar5 + 0x2cf5470));
      *(LPVOID *)(iVar5 + 0x2cf5490) = pvVar3;
      iVar5 = iVar5 + 4;
    } while (iVar1 < _DAT_02cf5500);
  }
  auStack_24._0_2_ = 1;
  auStack_24._14_2_ = _DAT_02cf54f0;
  auStack_24._2_2_ = _DAT_02cf54f4;
  auStack_24._12_2_ = (short)((int)(_DAT_02cf54f0 & 0xffff) >> 3) * _DAT_02cf54f4;
  auStack_24._4_4_ = _DAT_02cf54f8;
  auStack_24._8_4_ = _DAT_02cf54f8 * (ushort)auStack_24._12_2_;
  MVar4 = waveOutOpen((LPHWAVEOUT)&DAT_02cf546c,DAT_00604514,(LPCWAVEFORMATEX)auStack_24,0,0,0);
  if (MVar4 == 0) {
    *out_buffer_size = _DAT_02cf54fc;
    return 1;
  }
  sound_sndmain_cpp_FUN_0055a560("waveOutOpen failed");
LAB_0055dc0c:
  (*(code *)**(uint **)this_ptr)(this_ptr);
  return 0;
}
