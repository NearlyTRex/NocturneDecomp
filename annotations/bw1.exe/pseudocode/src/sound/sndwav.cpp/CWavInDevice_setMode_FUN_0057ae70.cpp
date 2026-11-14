// Name: sound_sndwav.cpp_CWavInDevice_setMode_FUN_0057ae70
// Address: 0057ae70
// Address Range: [[0057ae70, 0057b1d0]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndwav_cpp_CWavInDevice_setMode_FUN_0057ae70(CWavInDevice *this_ptr,int bits_per_sample,int channels,int sample_rate,int stereo_flag)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl sound_sndwav_cpp_CWavInDevice_setMode_FUN_0057ae70(CWavInDevice *this_ptr,int bits_per_sample,int channels,int sample_rate,int stereo_flag)

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
  MVar3 = waveInGetDevCapsA(DAT_006235d8,&tStack_54,0x30);
  if (MVar3 != 0) {
    return 0;
  }
  _DAT_02c82a3c = stereo_flag;
  _DAT_02c82a40 = (uint)(in_stack_00000018 != 0);
  auStack_24._16_4_ = tStack_54.dwFormats;
  do {
    uVar9 = 99999;
    iVar7 = 0;
    iVar8 = 0;
    iVar2 = -1;
    do {
      if ((*(uint *)((int)&DAT_006235dc + iVar8) & auStack_24._16_4_) != 0) {
        uVar4 = (uint)(channels < *(int *)((int)&DAT_006235e0 + iVar8));
        if (*(int *)((int)&DAT_006235e0 + iVar8) < channels) {
          uVar4 = uVar4 + 2;
        }
        if (_DAT_02c82a3c < *(int *)((int)&DAT_006235e8 + iVar8)) {
          uVar4 = uVar4 + 1;
        }
        if (*(int *)((int)&DAT_006235e8 + iVar8) < _DAT_02c82a3c) {
          uVar4 = uVar4 + 2;
        }
        if (sample_rate < *(int *)((int)&DAT_006235e4 + iVar8)) {
          uVar4 = uVar4 + 2;
        }
        if (*(int *)((int)&DAT_006235e4 + iVar8) < sample_rate) {
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
    _DAT_02c82a34 = channels;
    _DAT_02c82a38 = sample_rate;
    if (iVar2 < 0) {
      sound_sndmain_cpp_logSoundError_FUN_005773f0("WavInDevice::setMode - Can't set any recording modes!");
      return 0;
    }
    _DAT_02c82a1c = (&DAT_006235e0)[iVar2 * 4];
    _DAT_02c82a20 = (&DAT_006235e4)[iVar2 * 4];
    _DAT_02c82a24 = (&DAT_006235e8)[iVar2 * 4];
    _DAT_02c82a28 = (uint)(_DAT_02c82a1c == 8);
    _DAT_02c82a2c = (int)_DAT_02c82a24 / 0x14;
    _DAT_02c82a30 = (int)(_DAT_02c82a24 * 2) / _DAT_02c82a2c;
    if (0x14 < _DAT_02c82a30) {
      _DAT_02c82a30 = 0x14;
    }
    iVar7 = 0;
    if (0 < _DAT_02c82a30) {
      iVar8 = 0;
      do {
        pvVar5 = GlobalAlloc(0x2002,((int)((_DAT_02c82a1c + ((int)_DAT_02c82a1c >> 0x1f) * -8) -
                                          (uint)(((int)_DAT_02c82a1c >> 0x1f) << 2 < 0)) >> 3) *
                                    _DAT_02c82a2c * _DAT_02c82a20);
        *(HGLOBAL *)(iVar8 + 0x2c8297c) = pvVar5;
        if (pvVar5 == (HGLOBAL)0x0) break;
        pvVar6 = GlobalLock(pvVar5);
        *(LPVOID *)(&DAT_02c829cc + iVar8) = pvVar6;
        if (pvVar6 == (LPVOID)0x0) break;
        pvVar5 = GlobalAlloc(0x2002,0x20);
        *(HGLOBAL *)(iVar8 + 0x2c828dc) = pvVar5;
        if (pvVar5 == (HGLOBAL)0x0) break;
        iVar7 = iVar7 + 1;
        pvVar6 = GlobalLock(*(HGLOBAL *)(iVar8 + 0x2c828dc));
        iVar1 = _DAT_02c82a30;
        *(LPVOID *)(iVar8 + 0x2c8292c) = pvVar6;
        iVar8 = iVar8 + 4;
      } while (iVar7 < iVar1);
    }
    if (_DAT_02c82a30 <= iVar7) {
      auStack_24._0_2_ = 1;
      auStack_24._14_2_ = _DAT_02c82a1c;
      auStack_24._2_2_ = _DAT_02c82a20;
      auStack_24._12_2_ = (short)((int)(_DAT_02c82a1c & 0xffff) >> 3) * _DAT_02c82a20;
      auStack_24._4_4_ = _DAT_02c82a24;
      auStack_24._8_4_ = _DAT_02c82a24 * (ushort)auStack_24._12_2_;
      MVar3 = waveInOpen((LPHWAVEIN)&DAT_02c828d8,DAT_006235d4,(LPCWAVEFORMATEX)auStack_24,0,0,0);
      if (MVar3 == 0) {
        return 1;
      }
    }
    iVar7 = (*(code *)**(uint **)bits_per_sample)(bits_per_sample);
    if (iVar7 == 0) {
      return 0;
    }
    auStack_24._16_4_ = auStack_24._16_4_ & ~(&DAT_006235dc)[iVar2 * 4];
    channels = _DAT_02c82a34;
    sample_rate = _DAT_02c82a38;
  } while( true );
}
