// Name: sound_sndwav.cpp_CWavInDevice_close_FUN_005b0d70
// Address: 005b0d70
// Address Range: [[005b0d70, 005b0e10]]
// Convention: __cdecl
// Signature: int sound_sndwav.cpp_CWavInDevice_close_FUN_005b0d70(CWavInDevice * this_ptr)

#include "nocturne.h"

int __cdecl sound_sndwav_cpp_CWavInDevice_close_FUN_005b0d70(CWavInDevice *this_ptr)

{
  int iVar1;
  MMRESULT MVar2;
  int iVar3;
  uint uVar4;
  
  iVar1 = (*((this_ptr->base).vtable)->reset)(&this_ptr->base);
  uVar4 = (uint)(iVar1 != 0);
  iVar1 = 0;
  do {
    if (*(HGLOBAL *)((int)g_WaveInBufferHandles + iVar1) != (HGLOBAL)0x0) {
      (*GlobalFree)(*(HGLOBAL *)((int)g_WaveInBufferHandles + iVar1));
      *(uint *)((int)g_WaveInBufferHandles + iVar1) = 0;
    }
    *(uint *)((int)g_WaveInBuffers + iVar1) = 0;
    if (*(HGLOBAL *)((int)g_WaveInHeaderHandles + iVar1) != (HGLOBAL)0x0) {
      (*GlobalFree)(*(HGLOBAL *)((int)g_WaveInHeaderHandles + iVar1));
      *(uint *)((int)g_WaveInHeaderHandles + iVar1) = 0;
    }
    iVar3 = iVar1 + 4;
    *(uint *)((int)g_WaveInHeaders + iVar1) = 0;
    iVar1 = iVar3;
  } while (iVar3 != 0x50);
  if (g_WaveInHandle == (HWAVEIN)0x0) {
    return uVar4;
  }
  MVar2 = (*waveInClose)(g_WaveInHandle);
  if (MVar2 != 0) {
    sound_sndmain_cpp_logSoundError_FUN_005adba0("waveInClose failed.");
    uVar4 = 0;
  }
  g_WaveInHandle = (HWAVEIN)0x0;
  return uVar4;
}
