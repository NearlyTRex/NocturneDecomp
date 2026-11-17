// Name: sound_sndwav.cpp_CWavInDevice_setMode_FUN_0057ae70
// Address: 0057ae70
// Address Range: [[0057ae70, 0057b1d0]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndwav_cpp_CWavInDevice_setMode_FUN_0057ae70(CWavInDevice *this_ptr,int bits_per_sample,int channels,int sample_rate,int stereo_flag)

#include "nocturne.h"

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
  MVar3 = waveInGetDevCapsA(g_INT_006235d8,&tStack_54,0x30);
  if (MVar3 != 0) {
    return 0;
  }
  g_INT_02c82a3c = stereo_flag;
  g_INT_02c82a40 = (int)(in_stack_00000018 != 0);
  auStack_24._16_4_ = tStack_54.dwFormats;
  do {
    uVar9 = 99999;
    iVar7 = 0;
    iVar8 = 0;
    iVar2 = -1;
    do {
      if ((*(uint *)((int)&g_SAudioFormatDescriptor_ARRAY_006235dc[0].format_flags + iVar8) &
          auStack_24._16_4_) != 0) {
        uVar4 = (uint)(channels <
                      *(int *)((int)&g_SAudioFormatDescriptor_ARRAY_006235dc[0].bits_per_sample +
                              iVar8));
        if (*(int *)((int)&g_SAudioFormatDescriptor_ARRAY_006235dc[0].bits_per_sample + iVar8) <
            channels) {
          uVar4 = uVar4 + 2;
        }
        if (g_INT_02c82a3c <
            *(int *)((int)&g_SAudioFormatDescriptor_ARRAY_006235dc[0].sample_rate + iVar8)) {
          uVar4 = uVar4 + 1;
        }
        if (*(int *)((int)&g_SAudioFormatDescriptor_ARRAY_006235dc[0].sample_rate + iVar8) <
            g_INT_02c82a3c) {
          uVar4 = uVar4 + 2;
        }
        if (sample_rate <
            *(int *)((int)&g_SAudioFormatDescriptor_ARRAY_006235dc[0].channels + iVar8)) {
          uVar4 = uVar4 + 2;
        }
        if (*(int *)((int)&g_SAudioFormatDescriptor_ARRAY_006235dc[0].channels + iVar8) <
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
    g_INT_02c82a34 = channels;
    g_INT_02c82a38 = sample_rate;
    if (iVar2 < 0) {
      sound_sndmain_cpp_logSoundError_FUN_005773f0("WavInDevice::setMode - Can't set any recording modes!");
      return 0;
    }
    g_INT_02c82a1c = g_SAudioFormatDescriptor_ARRAY_006235dc[iVar2].bits_per_sample;
    g_INT_02c82a20 = g_SAudioFormatDescriptor_ARRAY_006235dc[iVar2].channels;
    g_INT_02c82a24 = g_SAudioFormatDescriptor_ARRAY_006235dc[iVar2].sample_rate;
    g_INT_02c82a28 = (int)(g_INT_02c82a1c == 8);
    g_INT_02c82a2c = g_INT_02c82a24 / 0x14;
    g_INT_02c82a30 = (g_INT_02c82a24 * 2) / g_INT_02c82a2c;
    if (0x14 < g_INT_02c82a30) {
      g_INT_02c82a30 = 0x14;
    }
    iVar7 = 0;
    if (0 < g_INT_02c82a30) {
      iVar8 = 0;
      do {
        pvVar5 = GlobalAlloc(0x2002,((int)((g_INT_02c82a1c + (g_INT_02c82a1c >> 0x1f) * -8) -
                                          (uint)((g_INT_02c82a1c >> 0x1f) << 2 < 0)) >> 3) *
                                    g_INT_02c82a2c * g_INT_02c82a20);
        *(HGLOBAL *)((int)g_HGLOBAL_ARRAY_02c8297c + iVar8) = pvVar5;
        if (pvVar5 == (HGLOBAL)0x0) break;
        pvVar6 = GlobalLock(pvVar5);
        *(LPVOID *)((int)g_INT_ARRAY_02c829cc + iVar8) = pvVar6;
        if (pvVar6 == (LPVOID)0x0) break;
        pvVar5 = GlobalAlloc(0x2002,0x20);
        *(HGLOBAL *)((int)g_HGLOBAL_ARRAY_02c828dc + iVar8) = pvVar5;
        if (pvVar5 == (HGLOBAL)0x0) break;
        iVar7 = iVar7 + 1;
        pvVar6 = GlobalLock(*(HGLOBAL *)((int)g_HGLOBAL_ARRAY_02c828dc + iVar8));
        iVar1 = g_INT_02c82a30;
        *(LPVOID *)((int)g_LPWAVEHDR_ARRAY_02c8292c + iVar8) = pvVar6;
        iVar8 = iVar8 + 4;
      } while (iVar7 < iVar1);
    }
    if (g_INT_02c82a30 <= iVar7) {
      auStack_24._0_2_ = 1;
      auStack_24._14_2_ = (WORD)g_INT_02c82a1c;
      auStack_24._2_2_ = (WORD)g_INT_02c82a20;
      auStack_24._12_2_ = (short)((int)(g_INT_02c82a1c & 0xffffU) >> 3) * (WORD)g_INT_02c82a20;
      auStack_24._4_4_ = g_INT_02c82a24;
      auStack_24._8_4_ = g_INT_02c82a24 * (uint)(ushort)auStack_24._12_2_;
      MVar3 = waveInOpen((LPHWAVEIN)&g_INT_02c828d8,g_INT_006235d4,(LPCWAVEFORMATEX)auStack_24,0,0,0
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
         auStack_24._16_4_ & ~g_SAudioFormatDescriptor_ARRAY_006235dc[iVar2].format_flags;
    channels = g_INT_02c82a34;
    sample_rate = g_INT_02c82a38;
  } while( true );
}
