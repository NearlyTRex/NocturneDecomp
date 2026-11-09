// Name: sound_sndwav.cpp_CWavOutDevice_setMode_FUN_0057a930
// Address: 0057a930
// Address Range: [[0057a930, 0057ab05]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndwav_cpp_CWavOutDevice_setMode_FUN_0057a930(CWavOutDevice *this_ptr,int bits_per_sample,int channels,int sample_rate,int *out_buffer_size)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl sound_sndwav_cpp_CWavOutDevice_setMode_FUN_0057a930(CWavOutDevice *this_ptr,int bits_per_sample,int channels,int sample_rate,int *out_buffer_size)

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
  _DAT_02c828c4 = bits_per_sample;
  _DAT_02c828c8 = channels;
  _DAT_02c828d4 = 4;
  _DAT_02c828cc = sample_rate;
  auStack_24._16_4_ = sound_sndmain_cpp_getMaxSwLatency_FUN_00576030();
  fVar6 = ((float10)(int)_DAT_02c828cc * (float10)(float)auStack_24._16_4_) / (float10)_DAT_02c828d4
  ;
  round();
  _DAT_02c828d0 = (uint)ROUND(fVar6);
  iVar1 = 0;
  _DAT_02c828d0 = _DAT_02c828d0 + 0xf & 0xfffffff0;
  if (0 < _DAT_02c828d4) {
    iVar5 = 0;
    do {
      pvVar2 = GlobalAlloc(0x2002,((int)((_DAT_02c828c4 + ((int)_DAT_02c828c4 >> 0x1f) * -8) -
                                        (uint)(((int)_DAT_02c828c4 >> 0x1f) << 2 < 0)) >> 3) *
                                  _DAT_02c828d0 * _DAT_02c828c8);
      *(HGLOBAL *)(iVar5 + 0x2c82884) = pvVar2;
      if (pvVar2 == (HGLOBAL)0x0) goto LAB_0057aadc;
      pvVar3 = GlobalLock(pvVar2);
      *(LPVOID *)(iVar5 + 0x2c828a4) = pvVar3;
      if (pvVar3 == (LPVOID)0x0) goto LAB_0057aadc;
      pvVar2 = GlobalAlloc(0x2002,0x20);
      *(HGLOBAL *)(iVar5 + 0x2c82844) = pvVar2;
      if (pvVar2 == (HGLOBAL)0x0) goto LAB_0057aadc;
      iVar1 = iVar1 + 1;
      pvVar3 = GlobalLock(*(HGLOBAL *)(iVar5 + 0x2c82844));
      *(LPVOID *)(iVar5 + 0x2c82864) = pvVar3;
      iVar5 = iVar5 + 4;
    } while (iVar1 < _DAT_02c828d4);
  }
  auStack_24._0_2_ = 1;
  auStack_24._14_2_ = _DAT_02c828c4;
  auStack_24._2_2_ = _DAT_02c828c8;
  auStack_24._12_2_ = (short)((int)(_DAT_02c828c4 & 0xffff) >> 3) * _DAT_02c828c8;
  auStack_24._4_4_ = _DAT_02c828cc;
  auStack_24._8_4_ = _DAT_02c828cc * (ushort)auStack_24._12_2_;
  MVar4 = waveOutOpen((LPHWAVEOUT)&DAT_02c82840,DAT_006235d4,(LPCWAVEFORMATEX)auStack_24,0,0,0);
  if (MVar4 == 0) {
    *out_buffer_size = _DAT_02c828d0;
    return 1;
  }
  sound_sndmain_cpp_FUN_005773f0("waveOutOpen failed");
LAB_0057aadc:
  (*(code *)**(uint **)this_ptr)(this_ptr);
  return 0;
}
