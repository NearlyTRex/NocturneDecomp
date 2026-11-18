// Name: sound_sndwav.cpp_CWavOutDevice_close_FUN_0055d870
// Address: 0055d870
// Address Range: [[0055d870, 0055d910]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndwav_cpp_CWavOutDevice_close_FUN_0055d870(CWavOutDevice *this_ptr)

#include "nocturne.h"

int __cdecl sound_sndwav_cpp_CWavOutDevice_close_FUN_0055d870(CWavOutDevice *this_ptr)

{
  int iVar1;
  MMRESULT MVar2;
  int iVar3;
  uint uVar4;
  
  iVar1 = (*((this_ptr->base).vtable)->reset)(&this_ptr->base);
  uVar4 = (uint)(iVar1 != 0);
  iVar1 = 0;
  do {
    if (*(HGLOBAL *)((int)g_WaveOutBufferHandles + iVar1) != (HGLOBAL)0x0) {
      GlobalFree(*(HGLOBAL *)((int)g_WaveOutBufferHandles + iVar1));
      *(uint *)((int)g_WaveOutBufferHandles + iVar1) = 0;
    }
    *(uint *)((int)g_WaveOutBuffers + iVar1) = 0;
    if (*(HGLOBAL *)((int)g_WaveOutHeaderHandles + iVar1) != (HGLOBAL)0x0) {
      GlobalFree(*(HGLOBAL *)((int)g_WaveOutHeaderHandles + iVar1));
      *(uint *)((int)g_WaveOutHeaderHandles + iVar1) = 0;
    }
    iVar3 = iVar1 + 4;
    *(uint *)((int)g_WaveOutHeaders + iVar1) = 0;
    iVar1 = iVar3;
  } while (iVar3 != 0x20);
  if (g_WaveOutHandle == 0) {
    return uVar4;
  }
  MVar2 = waveOutClose((HWAVEOUT)g_WaveOutHandle);
  if (MVar2 != 0) {
    sound_sndmain_cpp_logSoundError_FUN_0055a560("waveOutClose failed.");
    uVar4 = 0;
  }
  g_WaveOutHandle = 0;
  return uVar4;
}
