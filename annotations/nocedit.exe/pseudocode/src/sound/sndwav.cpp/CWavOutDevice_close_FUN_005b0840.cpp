// Name: sound_sndwav.cpp_CWavOutDevice_close_FUN_005b0840
// Address: 005b0840
// Address Range: [[005b0840, 005b08e0]]
// Convention: __cdecl
// Signature: int sound_sndwav.cpp_CWavOutDevice_close_FUN_005b0840(CWavOutDevice * this_ptr)

#include "nocturne.h"

int __cdecl sound_sndwav_cpp_CWavOutDevice_close_FUN_005b0840(CWavOutDevice *this_ptr)

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
      (*g_GlobalFreeFunc)(*(HGLOBAL *)((int)g_WaveOutBufferHandles + iVar1));
      *(uint *)((int)g_WaveOutBufferHandles + iVar1) = 0;
    }
    *(uint *)((int)g_WaveOutBuffers + iVar1) = 0;
    if (*(HGLOBAL *)((int)g_WaveOutHeaderHandles + iVar1) != (HGLOBAL)0x0) {
      (*g_GlobalFreeFunc)(*(HGLOBAL *)((int)g_WaveOutHeaderHandles + iVar1));
      *(uint *)((int)g_WaveOutHeaderHandles + iVar1) = 0;
    }
    iVar3 = iVar1 + 4;
    *(uint *)((int)g_WaveOutHeaders + iVar1) = 0;
    iVar1 = iVar3;
  } while (iVar3 != 0x20);
  if (g_WaveOutHandle == (HWAVEOUT)0x0) {
    return uVar4;
  }
  MVar2 = (*g_waveOutCloseFunc)(g_WaveOutHandle);
  if (MVar2 != 0) {
    sound_sndmain_cpp_logSoundError_FUN_005adba0("waveOutClose failed.");
    uVar4 = 0;
  }
  g_WaveOutHandle = (HWAVEOUT)0x0;
  return uVar4;
}
