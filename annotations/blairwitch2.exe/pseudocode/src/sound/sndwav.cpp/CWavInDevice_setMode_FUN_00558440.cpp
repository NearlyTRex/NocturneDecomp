// Name: sound_sndwav.cpp_CWavInDevice_setMode_FUN_00558440
// Address: 00558440
// Address Range: [[00558440, 005587a0]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndwav_cpp_CWavInDevice_setMode_FUN_00558440(CWavInDevice *this_ptr,int bits_per_sample,int channels,int sample_rate,int stereo_flag)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl sound_sndwav_cpp_CWavInDevice_setMode_FUN_00558440(CWavInDevice *this_ptr,int bits_per_sample,int channels,int sample_rate,int stereo_flag)

{
  int iVar1;
  int iVar2;
  MMRESULT MVar3;
  uint uVar4;
  HGLOBAL pvVar5;
  LPVOID pvVar6;
  int iVar7;
  uint uVar8;
  tagWAVEINCAPSA tStack_58;
  byte auStack_28 [20];
  int iStack_14;
  
  iVar2 = (*(code *)**(uint **)this_ptr)(this_ptr);
  if (iVar2 == 0) {
    return 0;
  }
  MVar3 = waveInGetDevCapsA(DAT_0061bf88,&tStack_58,0x30);
  if (MVar3 != 0) {
    return 0;
  }
  _DAT_0264b26c = sample_rate;
  _DAT_0264b270 = (uint)(stereo_flag != 0);
  auStack_28._16_4_ = tStack_58.dwFormats;
  do {
    uVar8 = 99999;
    iVar2 = 0;
    iVar7 = 0;
    iStack_14 = -1;
    do {
      if ((*(uint *)((int)&DAT_0061bf8c + iVar7) & auStack_28._16_4_) != 0) {
        uVar4 = (uint)(bits_per_sample < *(int *)((int)&DAT_0061bf90 + iVar7));
        if (*(int *)((int)&DAT_0061bf90 + iVar7) < bits_per_sample) {
          uVar4 = uVar4 + 2;
        }
        if (_DAT_0264b26c < *(int *)((int)&DAT_0061bf98 + iVar7)) {
          uVar4 = uVar4 + 1;
        }
        if (*(int *)((int)&DAT_0061bf98 + iVar7) < _DAT_0264b26c) {
          uVar4 = uVar4 + 2;
        }
        if (channels < *(int *)((int)&DAT_0061bf94 + iVar7)) {
          uVar4 = uVar4 + 2;
        }
        if (*(int *)((int)&DAT_0061bf94 + iVar7) < channels) {
          uVar4 = uVar4 + 3;
        }
        if (uVar4 < uVar8) {
          uVar8 = uVar4;
          iStack_14 = iVar2;
        }
      }
      iVar2 = iVar2 + 1;
      iVar7 = iVar7 + 0x10;
    } while (iVar2 < 0xc);
    _DAT_0264b264 = bits_per_sample;
    _DAT_0264b268 = channels;
    if (iStack_14 < 0) {
      sound_sndmain_cpp_FUN_005549c0("WavInDevice::setMode - Can't set any recording modes!");
      return 0;
    }
    _DAT_0264b24c = (&DAT_0061bf90)[iStack_14 * 4];
    _DAT_0264b250 = (&DAT_0061bf94)[iStack_14 * 4];
    _DAT_0264b254 = (&DAT_0061bf98)[iStack_14 * 4];
    _DAT_0264b258 = (uint)(_DAT_0264b24c == 8);
    _DAT_0264b25c = (int)_DAT_0264b254 / 0x14;
    _DAT_0264b260 = (int)(_DAT_0264b254 * 2) / _DAT_0264b25c;
    if (0x14 < _DAT_0264b260) {
      _DAT_0264b260 = 0x14;
    }
    iVar2 = 0;
    if (0 < _DAT_0264b260) {
      iVar7 = 0;
      do {
        pvVar5 = GlobalAlloc(0x2002,((int)((_DAT_0264b24c + ((int)_DAT_0264b24c >> 0x1f) * -8) -
                                          (uint)(((int)_DAT_0264b24c >> 0x1f) << 2 < 0)) >> 3) *
                                    _DAT_0264b25c * _DAT_0264b250);
        *(HGLOBAL *)(iVar7 + 0x264b1ac) = pvVar5;
        if (pvVar5 == (HGLOBAL)0x0) break;
        pvVar6 = GlobalLock(pvVar5);
        *(LPVOID *)(&DAT_0264b1fc + iVar7) = pvVar6;
        if (pvVar6 == (LPVOID)0x0) break;
        pvVar5 = GlobalAlloc(0x2002,0x20);
        *(HGLOBAL *)(iVar7 + 0x264b10c) = pvVar5;
        if (pvVar5 == (HGLOBAL)0x0) break;
        iVar2 = iVar2 + 1;
        pvVar6 = GlobalLock(*(HGLOBAL *)(iVar7 + 0x264b10c));
        iVar1 = _DAT_0264b260;
        *(LPVOID *)(iVar7 + 0x264b15c) = pvVar6;
        iVar7 = iVar7 + 4;
      } while (iVar2 < iVar1);
    }
    if (_DAT_0264b260 <= iVar2) {
      auStack_28._0_2_ = 1;
      auStack_28._14_2_ = _DAT_0264b24c;
      auStack_28._2_2_ = _DAT_0264b250;
      auStack_28._12_2_ = (short)((int)(_DAT_0264b24c & 0xffff) >> 3) * _DAT_0264b250;
      auStack_28._4_4_ = _DAT_0264b254;
      auStack_28._8_4_ = _DAT_0264b254 * (ushort)auStack_28._12_2_;
      MVar3 = waveInOpen((LPHWAVEIN)&DAT_0264b108,DAT_0061bf84,(LPCWAVEFORMATEX)auStack_28,0,0,0);
      if (MVar3 == 0) {
        return 1;
      }
    }
    iVar2 = (*(code *)**(uint **)this_ptr)(this_ptr);
    if (iVar2 == 0) {
      return 0;
    }
    auStack_28._16_4_ = auStack_28._16_4_ & ~(&DAT_0061bf8c)[iStack_14 * 4];
    bits_per_sample = _DAT_0264b264;
    channels = _DAT_0264b268;
  } while( true );
}
