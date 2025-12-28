// Name: sound_snddx.cpp_CDirectSoundDevice_start_FUN_005ae340
// Address: 005ae340
// Address Range: [[005ae340, 005ae4a1]]
// Convention: __cdecl
// Signature: int sound_snddx.cpp_CDirectSoundDevice_start_FUN_005ae340(CDirectSoundDevice * this_ptr)

#include "nocturne.h"

int __cdecl sound_snddx_cpp_CDirectSoundDevice_start_FUN_005ae340(CDirectSoundDevice *this_ptr)

{
  int iVar1;
  HANDLE pvVar2;
  uint uVar3;
  char *format;
  int iVar4;
  BADSPACEBASE *in_ESP;
  uint in_stack_fffffcc4;
  uint uVar5;
  char acStack_30c [364];
  char acStack_1a0 [16];
  char acStack_190 [384];
  double dVar6;
  
  if (g_DirectSoundSecondaryBuffer == (IDirectSoundBuffer *)0x0) {
    uVar5 = 0x9999999a;
  }
  else {
    g_StreamBlockSizeBytes =
         ((int)((g_StreamBitsPerSample + (g_StreamBitsPerSample >> 0x1f) * -8) -
               (uint)((g_StreamBitsPerSample >> 0x1f) << 2 < 0)) >> 3) * g_StreamSamplesPerBlock *
         g_StreamChannelCount;
    dVar6 = ((double)g_StreamSamplesPerBlock / (double)g_StreamSampleRate) * 0.5;
    uVar5 = SUB84 /* extract 2-byte value */(dVar6,0);
    iVar4 = 0;
    g_StreamCurrentBlock = 0;
    if (0 < g_StreamBlockCount) {
      do {
        in_stack_fffffcc4 = 0x5ae3b1;
        iVar1 = sound_snddx_cpp_fillStreamBuffer_FUN_005adff0();
        uVar5 = SUB84 /* extract 2-byte value */(dVar6,0);
        if (iVar1 == 0) goto LAB_005ae43b;
        iVar4 = iVar4 + 1;
      } while (iVar4 < g_StreamBlockCount);
    }
  }
  pvVar2 = sound_sndmain_cpp_startSoundThread_FUN_005abc00
                     ((double)CONCAT44 /* combine 2-byte values */(uVar5,in_stack_fffffcc4));
  if (pvVar2 != (HANDLE)0x0) {
    if (g_DirectSoundSecondaryBuffer == (IDirectSoundBuffer *)0x0) {
      return 1;
    }
    uVar3 = (*g_DirectSoundSecondaryBuffer->vtable->SetCurrentPosition)
                      (g_DirectSoundSecondaryBuffer,0);
    if (uVar3 == 0) {
      uVar3 = (*g_DirectSoundSecondaryBuffer->vtable->Play)(g_DirectSoundSecondaryBuffer,0,0,1);
      if (uVar3 == 0) {
        return 1;
      }
      sound_snddx_cpp_getDirectSoundErrorString_FUN_005ade70(uVar3);
      crt_stdio_c_sprintf_FUN_005fdbd0(acStack_30c,"DirectSux: Unable to %s.  (%s)");
      format = &stack0xfffffcd0;
    }
    else {
      sound_snddx_cpp_getDirectSoundErrorString_FUN_005ade70(uVar3);
      crt_stdio_c_sprintf_FUN_005fdbd0(acStack_190,"DirectSux: Unable to %s.  (%s)");
      format = acStack_1a0;
    }
    sound_sndmain_cpp_logSoundError_FUN_005adba0(format);
  }
LAB_005ae43b:
  (*((this_ptr->base).vtable)->reset)(&this_ptr->base);
  return 0;
}
