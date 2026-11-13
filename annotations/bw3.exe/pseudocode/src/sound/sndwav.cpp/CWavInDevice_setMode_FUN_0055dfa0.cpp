// Name: sound_sndwav.cpp_CWavInDevice_setMode_FUN_0055dfa0
// Address: 0055dfa0
// Address Range: [[0055dfa0, 0055e300]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndwav_cpp_CWavInDevice_setMode_FUN_0055dfa0(CWavInDevice *this_ptr,int bits_per_sample,int channels,int sample_rate,int stereo_flag)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl sound_sndwav_cpp_CWavInDevice_setMode_FUN_0055dfa0(CWavInDevice *this_ptr,int bits_per_sample,int channels,int sample_rate,int stereo_flag)

{
  int iVar1;
  int iVar2;
  MMRESULT MVar3;
  uint uVar4;
  HGLOBAL pvVar5;
  LPVOID pvVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int in_stack_00000018;
  tagWAVEINCAPSA tStack_54;
  byte auStack_24 [20];
  
  iVar2 = (*((this_ptr->base).vtable)->close)(&this_ptr->base);
  if (iVar2 == 0) {
    return 0;
  }
  MVar3 = waveInGetDevCapsA(DAT_00604518,&tStack_54,0x30);
  if (MVar3 != 0) {
    return 0;
  }
  _DAT_02cf5668 = stereo_flag;
  _DAT_02cf566c = (uint)(in_stack_00000018 != 0);
  auStack_24._16_4_ = tStack_54.dwFormats;
  do {
    uVar9 = 99999;
    iVar7 = 0;
    iVar8 = 0;
    iVar2 = -1;
    do {
      if ((*(uint *)((int)&DAT_0060451c + iVar8) & auStack_24._16_4_) != 0) {
        uVar4 = (uint)(channels < *(int *)((int)&DAT_00604520 + iVar8));
        if (*(int *)((int)&DAT_00604520 + iVar8) < channels) {
          uVar4 = uVar4 + 2;
        }
        if (_DAT_02cf5668 < *(int *)((int)&DAT_00604528 + iVar8)) {
          uVar4 = uVar4 + 1;
        }
        if (*(int *)((int)&DAT_00604528 + iVar8) < _DAT_02cf5668) {
          uVar4 = uVar4 + 2;
        }
        if (sample_rate < *(int *)((int)&DAT_00604524 + iVar8)) {
          uVar4 = uVar4 + 2;
        }
        if (*(int *)((int)&DAT_00604524 + iVar8) < sample_rate) {
          uVar4 = uVar4 + 3;
        }
        if (uVar4 < uVar9) {
          uVar9 = uVar4;
          iVar2 = iVar7;
        }
      }
      iVar7 = iVar7 + 1;
      iVar8 = iVar8 + 0x10;
    } while (iVar7 < 0xc);
    _DAT_02cf5660 = channels;
    _DAT_02cf5664 = sample_rate;
    if (iVar2 < 0) {
      sound_sndmain_cpp_logSoundError_FUN_0055a560("WavInDevice::setMode - Can't set any recording modes!");
      return 0;
    }
    _DAT_02cf5648 = (&DAT_00604520)[iVar2 * 4];
    _DAT_02cf564c = (&DAT_00604524)[iVar2 * 4];
    _DAT_02cf5650 = (&DAT_00604528)[iVar2 * 4];
    _DAT_02cf5654 = (uint)(_DAT_02cf5648 == 8);
    _DAT_02cf5658 = (int)_DAT_02cf5650 / 0x14;
    _DAT_02cf565c = (int)(_DAT_02cf5650 * 2) / _DAT_02cf5658;
    if (0x14 < _DAT_02cf565c) {
      _DAT_02cf565c = 0x14;
    }
    iVar7 = 0;
    if (0 < _DAT_02cf565c) {
      iVar8 = 0;
      do {
        pvVar5 = GlobalAlloc(0x2002,((int)((_DAT_02cf5648 + ((int)_DAT_02cf5648 >> 0x1f) * -8) -
                                          (uint)(((int)_DAT_02cf5648 >> 0x1f) << 2 < 0)) >> 3) *
                                    _DAT_02cf5658 * _DAT_02cf564c);
        *(HGLOBAL *)(iVar8 + 0x2cf55a8) = pvVar5;
        if (pvVar5 == (HGLOBAL)0x0) break;
        pvVar6 = GlobalLock(pvVar5);
        *(LPVOID *)(&DAT_02cf55f8 + iVar8) = pvVar6;
        if (pvVar6 == (LPVOID)0x0) break;
        pvVar5 = GlobalAlloc(0x2002,0x20);
        *(HGLOBAL *)(iVar8 + 0x2cf5508) = pvVar5;
        if (pvVar5 == (HGLOBAL)0x0) break;
        iVar7 = iVar7 + 1;
        pvVar6 = GlobalLock(*(HGLOBAL *)(iVar8 + 0x2cf5508));
        iVar1 = _DAT_02cf565c;
        *(LPVOID *)(iVar8 + 0x2cf5558) = pvVar6;
        iVar8 = iVar8 + 4;
      } while (iVar7 < iVar1);
    }
    if (_DAT_02cf565c <= iVar7) {
      auStack_24._0_2_ = 1;
      auStack_24._14_2_ = _DAT_02cf5648;
      auStack_24._2_2_ = _DAT_02cf564c;
      auStack_24._12_2_ = (short)((int)(_DAT_02cf5648 & 0xffff) >> 3) * _DAT_02cf564c;
      auStack_24._4_4_ = _DAT_02cf5650;
      auStack_24._8_4_ = _DAT_02cf5650 * (ushort)auStack_24._12_2_;
      MVar3 = waveInOpen((LPHWAVEIN)&DAT_02cf5504,DAT_00604514,(LPCWAVEFORMATEX)auStack_24,0,0,0);
      if (MVar3 == 0) {
        return 1;
      }
    }
    iVar7 = (*(code *)**(uint **)bits_per_sample)(bits_per_sample);
    if (iVar7 == 0) {
      return 0;
    }
    auStack_24._16_4_ = auStack_24._16_4_ & ~(&DAT_0060451c)[iVar2 * 4];
    channels = _DAT_02cf5660;
    sample_rate = _DAT_02cf5664;
  } while( true );
}
