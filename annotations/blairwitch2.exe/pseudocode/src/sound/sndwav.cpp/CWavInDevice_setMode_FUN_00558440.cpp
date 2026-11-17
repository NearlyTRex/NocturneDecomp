// Name: sound_sndwav.cpp_CWavInDevice_setMode_FUN_00558440
// Address: 00558440
// Address Range: [[00558440, 005587a0]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndwav_cpp_CWavInDevice_setMode_FUN_00558440(CWavInDevice *this_ptr,int bits_per_sample,int channels,int sample_rate,int stereo_flag)

#include "nocturne.h"

int __cdecl sound_sndwav_cpp_CWavInDevice_setMode_FUN_00558440(CWavInDevice *this_ptr,int bits_per_sample,int channels,int sample_rate,int stereo_flag)

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
  MVar3 = waveInGetDevCapsA(g_INT_0061bf88,&tStack_54,0x30);
  if (MVar3 != 0) {
    return 0;
  }
  g_INT_0264b26c = stereo_flag;
  g_INT_0264b270 = (int)(in_stack_00000018 != 0);
  auStack_24._16_4_ = tStack_54.dwFormats;
  do {
    uVar9 = 99999;
    iVar7 = 0;
    iVar8 = 0;
    iVar2 = -1;
    do {
      if ((*(uint *)((int)&g_SAudioFormatDescriptor_ARRAY_0061bf8c[0].format_flags + iVar8) &
          auStack_24._16_4_) != 0) {
        uVar4 = (uint)(channels <
                      *(int *)((int)&g_SAudioFormatDescriptor_ARRAY_0061bf8c[0].bits_per_sample +
                              iVar8));
        if (*(int *)((int)&g_SAudioFormatDescriptor_ARRAY_0061bf8c[0].bits_per_sample + iVar8) <
            channels) {
          uVar4 = uVar4 + 2;
        }
        if (g_INT_0264b26c <
            *(int *)((int)&g_SAudioFormatDescriptor_ARRAY_0061bf8c[0].sample_rate + iVar8)) {
          uVar4 = uVar4 + 1;
        }
        if (*(int *)((int)&g_SAudioFormatDescriptor_ARRAY_0061bf8c[0].sample_rate + iVar8) <
            g_INT_0264b26c) {
          uVar4 = uVar4 + 2;
        }
        if (sample_rate <
            *(int *)((int)&g_SAudioFormatDescriptor_ARRAY_0061bf8c[0].channels + iVar8)) {
          uVar4 = uVar4 + 2;
        }
        if (*(int *)((int)&g_SAudioFormatDescriptor_ARRAY_0061bf8c[0].channels + iVar8) <
            sample_rate) {
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
    g_INT_0264b264 = channels;
    g_INT_0264b268 = sample_rate;
    if (iVar2 < 0) {
      sound_sndmain_cpp_logSoundError_FUN_005549c0("WavInDevice::setMode - Can't set any recording modes!");
      return 0;
    }
    g_INT_0264b24c = g_SAudioFormatDescriptor_ARRAY_0061bf8c[iVar2].bits_per_sample;
    g_INT_0264b250 = g_SAudioFormatDescriptor_ARRAY_0061bf8c[iVar2].channels;
    g_INT_0264b254 = g_SAudioFormatDescriptor_ARRAY_0061bf8c[iVar2].sample_rate;
    g_INT_0264b258 = (int)(g_INT_0264b24c == 8);
    g_INT_0264b25c = g_INT_0264b254 / 0x14;
    g_INT_0264b260 = (g_INT_0264b254 * 2) / g_INT_0264b25c;
    if (0x14 < g_INT_0264b260) {
      g_INT_0264b260 = 0x14;
    }
    iVar7 = 0;
    if (0 < g_INT_0264b260) {
      iVar8 = 0;
      do {
        pvVar5 = GlobalAlloc(0x2002,((int)((g_INT_0264b24c + (g_INT_0264b24c >> 0x1f) * -8) -
                                          (uint)((g_INT_0264b24c >> 0x1f) << 2 < 0)) >> 3) *
                                    g_INT_0264b25c * g_INT_0264b250);
        *(HGLOBAL *)((int)g_HGLOBAL_ARRAY_0264b1ac + iVar8) = pvVar5;
        if (pvVar5 == (HGLOBAL)0x0) break;
        pvVar6 = GlobalLock(pvVar5);
        *(LPVOID *)((int)g_INT_ARRAY_0264b1fc + iVar8) = pvVar6;
        if (pvVar6 == (LPVOID)0x0) break;
        pvVar5 = GlobalAlloc(0x2002,0x20);
        *(HGLOBAL *)((int)g_HGLOBAL_ARRAY_0264b10c + iVar8) = pvVar5;
        if (pvVar5 == (HGLOBAL)0x0) break;
        iVar7 = iVar7 + 1;
        pvVar6 = GlobalLock(*(HGLOBAL *)((int)g_HGLOBAL_ARRAY_0264b10c + iVar8));
        iVar1 = g_INT_0264b260;
        *(LPVOID *)((int)g_LPWAVEHDR_ARRAY_0264b15c + iVar8) = pvVar6;
        iVar8 = iVar8 + 4;
      } while (iVar7 < iVar1);
    }
    if (g_INT_0264b260 <= iVar7) {
      auStack_24._0_2_ = 1;
      auStack_24._14_2_ = (WORD)g_INT_0264b24c;
      auStack_24._2_2_ = (WORD)g_INT_0264b250;
      auStack_24._12_2_ = (short)((int)(g_INT_0264b24c & 0xffffU) >> 3) * (WORD)g_INT_0264b250;
      auStack_24._4_4_ = g_INT_0264b254;
      auStack_24._8_4_ = g_INT_0264b254 * (uint)(ushort)auStack_24._12_2_;
      MVar3 = waveInOpen((LPHWAVEIN)&g_INT_0264b108,g_INT_0061bf84,(LPCWAVEFORMATEX)auStack_24,0,0,0
                        );
      if (MVar3 == 0) {
        return 1;
      }
    }
    iVar7 = (*(code *)**(uint **)bits_per_sample)(bits_per_sample);
    if (iVar7 == 0) {
      return 0;
    }
    auStack_24._16_4_ =
         auStack_24._16_4_ & ~g_SAudioFormatDescriptor_ARRAY_0061bf8c[iVar2].format_flags;
    channels = g_INT_0264b264;
    sample_rate = g_INT_0264b268;
  } while( true );
}
