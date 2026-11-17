// Name: sound_snddx.cpp_CDirectSoundDevice_start_FUN_00555130
// Address: 00555130
// Address Range: [[00555130, 00555295]]
// Convention: __cdecl
// Signature: int __cdecl sound_snddx_cpp_CDirectSoundDevice_start_FUN_00555130(CDirectSoundDevice *this_ptr)

#include "nocturne.h"

int __cdecl sound_snddx_cpp_CDirectSoundDevice_start_FUN_00555130(CDirectSoundDevice *this_ptr)

{
  int iVar1;
  uint uVar2;
  char *format;
  int iVar3;
  uint in_stack_fffffcd0;
  char acStack_1a0 [400];
  float fStack_10;
  
  if (g_DirectSoundSecondaryBuffer == (IDirectSoundBuffer *)0x0) {
    fStack_10 = 0.1;
  }
  else {
    g_StreamBlockSizeBytes =
         ((int)((g_StreamBitsPerSample + (g_StreamBitsPerSample >> 0x1f) * -8) -
               (uint)((g_StreamBitsPerSample >> 0x1f) << 2 < 0)) >> 3) * g_StreamSamplesPerBlock *
         g_StreamChannelCount;
    fStack_10 = ((float)g_StreamSamplesPerBlock / (float)g_StreamSampleRate) * 0.5f;
    iVar3 = 0;
    g_StreamCurrentBlock = 0;
    if (0 < g_StreamBlockCount) {
      do {
        iVar1 = sound_snddx_cpp_fillStreamBuffer_FUN_00554c80();
        if (iVar1 == 0) goto LAB_0055522f;
        iVar3 = iVar3 + 1;
      } while (iVar3 < g_StreamBlockCount);
    }
  }
  iVar3 = sound_sndmain_cpp_startSoundThread_FUN_005531d0
                    (__BITCAST_DOUBLE(CONCAT44(in_stack_fffffcd0,fStack_10)));
  if (iVar3 != 0) {
    if (g_DirectSoundSecondaryBuffer == (IDirectSoundBuffer *)0x0) {
      return 1;
    }
    format = &stack0xfffffcd0;
    uVar2 = (*g_DirectSoundSecondaryBuffer->vtable->SetCurrentPosition)
                      (g_DirectSoundSecondaryBuffer,0);
    if (uVar2 == 0) {
      uVar2 = (*g_DirectSoundSecondaryBuffer->vtable->Play)(g_DirectSoundSecondaryBuffer,0,0,1);
      if (uVar2 == 0) {
        return 1;
      }
      sound_snddx_cpp_getDirectSoundErrorString_FUN_00554ad0(uVar2);
      _sprintf(acStack_1a0,"DirectSux: Unable to %s.  (%s)");
      format = acStack_1a0;
    }
    else {
      sound_snddx_cpp_getDirectSoundErrorString_FUN_00554ad0(uVar2);
      _sprintf(&stack0xfffffcd0,"DirectSux: Unable to %s.  (%s)");
    }
    sound_sndmain_cpp_logSoundError_FUN_005549c0(format);
  }
LAB_0055522f:
  (*((this_ptr->base).vtable)->reset)(&this_ptr->base);
  return 0;
}
