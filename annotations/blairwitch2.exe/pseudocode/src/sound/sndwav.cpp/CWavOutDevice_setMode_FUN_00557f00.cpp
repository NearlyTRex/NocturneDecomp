// Name: sound_sndwav.cpp_CWavOutDevice_setMode_FUN_00557f00
// Address: 00557f00
// Address Range: [[00557f00, 005580d5]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndwav_cpp_CWavOutDevice_setMode_FUN_00557f00(CWavOutDevice *this_ptr,int bits_per_sample,int channels,int sample_rate,int *out_buffer_size)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl sound_sndwav_cpp_CWavOutDevice_setMode_FUN_00557f00(CWavOutDevice *this_ptr,int bits_per_sample,int channels,int sample_rate,int *out_buffer_size)

{
  int iVar1;
  float fVar2;
  HGLOBAL pvVar3;
  LPVOID pvVar4;
  MMRESULT MVar5;
  int iVar6;
  float10 fVar7;
  uint *in_stack_00000018;
  WORD WStack_20;
  WORD WStack_1e;
  int *piStack_1c;
  DWORD DStack_18;
  ushort uStack_14;
  WORD WStack_12;
  
  iVar1 = (*((this_ptr->base).vtable)->close)(&this_ptr->base);
  if (iVar1 == 0) {
    return 0;
  }
  _DAT_0264b0f4 = channels;
  _DAT_0264b0f8 = sample_rate;
  _DAT_0264b104 = 4;
  _DAT_0264b0fc = out_buffer_size;
  fVar2 = sound_sndmain_cpp_getMaxSwLatency_FUN_00553600();
  fVar7 = ((float10)(int)_DAT_0264b0fc * (float10)fVar2) / (float10)_DAT_0264b104;
  round();
  _DAT_0264b100 = (uint)ROUND(fVar7);
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
  WStack_20 = 1;
  WStack_12 = _DAT_0264b0f4;
  WStack_1e = _DAT_0264b0f8;
  uStack_14 = (short)((int)(_DAT_0264b0f4 & 0xffff) >> 3) * _DAT_0264b0f8;
  piStack_1c = _DAT_0264b0fc;
  DStack_18 = (int)_DAT_0264b0fc * (uint)uStack_14;
  MVar5 = waveOutOpen((LPHWAVEOUT)&DAT_0264b070,DAT_0061bf84,(LPCWAVEFORMATEX)&WStack_20,0,0,0);
  if (MVar5 == 0) {
    *in_stack_00000018 = _DAT_0264b100;
    return 1;
  }
  sound_sndmain_cpp_logSoundError_FUN_005549c0("waveOutOpen failed");
LAB_005580ac:
  (*((this_ptr->base).vtable)->close)(&this_ptr->base);
  return 0;
}
