// Name: sound_snddx.cpp_CDirectSoundDevice_allocateSample_FUN_005aef40
// Address: 005aef40
// Address Range: [[005aef40, 005af14b]]
// Convention: __cdecl
// Signature: int sound_snddx.cpp_CDirectSoundDevice_allocateSample_FUN_005aef40(CDirectSoundDevice * this_ptr, int bits_per_sample, int channel_count, int sample_rate, int sample_count)

#include "nocturne.h"

int __cdecl
sound_snddx_cpp_CDirectSoundDevice_allocateSample_FUN_005aef40
          (CDirectSoundDevice *this_ptr,int bits_per_sample,int channel_count,int sample_rate,
          int sample_count)

{
  IDirectSoundBuffer *this_ptr_00;
  int iVar1;
  int iVar2;
  uint error_code;
  char *pcVar3;
  int iVar4;
  BADSPACEBASE *in_ESP;
  int in_stack_0000001c;
  int in_stack_00000028;
  byte local_34 [4];
  DSBUFFERDESC local_30;
  int local_1c;
  int local_18;
  ushort uStack_14;
  ushort uStack_12;
  
  if (g_DirectSound != (IDirectSound *)0x0) {
    iVar4 = 1;
    iVar2 = 4;
    if (g_DirectSoundSampleBuffers[1] != (IDirectSoundBuffer *)0x0) {
      do {
        iVar4 = iVar4 + 1;
        if (99 < iVar2 + 4) break;
        iVar1 = iVar2 + 4;
        iVar2 = iVar2 + 4;
      } while (*(int *)((int)g_DirectSoundSampleBuffers + iVar1) != 0);
    }
    if (iVar4 < 0x19) {
      crt_memory_c_memset_FUN_005fde40(&local_30.dwReserved,0,0x12);
      local_30.lpwfxFormat = (LPWAVEFORMATEX)CONCAT22 /* combine 2-byte values */((short)sample_rate,1);
      local_1c = sample_count;
      iVar2 = (int)((bits_per_sample + (bits_per_sample >> 0x1f) * -8) -
                   (uint)((bits_per_sample >> 0x1f) << 2 < 0)) >> 3;
      uStack_14 = (short)iVar2 * (short)sample_rate;
      local_18 = sample_count * (uint)uStack_14;
      uStack_12 = (ushort)bits_per_sample;
      crt_memory_c_memset_FUN_005fde40(local_34,0,0x14);
      local_30.lpwfxFormat = (LPWAVEFORMATEX)&local_1c;
      local_30.dwBufferBytes = sample_count * in_stack_0000001c * iVar2;
      local_30.dwSize = 0x14;
      local_30.dwFlags = 0xb0;
      error_code = (*g_DirectSound->vtable->CreateSoundBuffer)
                             (g_DirectSound,&local_30,g_DirectSoundSampleBuffers + iVar4,
                              (LPUNKNOWN)0x0);
      if (error_code == 0) {
        if (g_DirectSoundSampleBuffers[iVar4] != (IDirectSoundBuffer *)0x0) {
          g_DirectSoundBufferMetadata[iVar4].field1_0x4 = 0;
          g_DirectSoundBufferMetadata[iVar4].field0_0x0 = in_stack_00000028 * iVar2;
          return iVar4;
        }
      }
      else {
        pcVar3 = sound_snddx_cpp_getDirectSoundErrorString_FUN_005ade70(error_code);
        crt_stdio_c_sprintf_FUN_005fdbd0
                  (&stack0xfffffe58,"DirectSux: Unable to %s.  (%s)",
                   "Create secondary buffer",pcVar3);
        sound_sndmain_cpp_logSoundError_FUN_005adba0(&stack0xfffffe5c);
      }
      sound_sndmain_cpp_logSoundError_FUN_005adba0("DirectSoundDevice::allocateSample - access failed\n");
      this_ptr_00 = g_DirectSoundSampleBuffers[iVar4];
      if (this_ptr_00 != (IDirectSoundBuffer *)0x0) {
        (*this_ptr_00->vtable->Release)((IUnknown *)this_ptr_00);
        g_DirectSoundSampleBuffers[iVar4] = (IDirectSoundBuffer *)0x0;
      }
      g_DirectSoundBufferMetadata[iVar4].field0_0x0 = 0;
      return 0;
    }
  }
  return 0;
}
