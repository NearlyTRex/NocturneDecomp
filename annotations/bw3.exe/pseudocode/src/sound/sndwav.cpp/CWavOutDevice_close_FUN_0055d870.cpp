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
    if (*(HGLOBAL *)((int)g_HGLOBAL_ARRAY_02cf54b0 + iVar1) != (HGLOBAL)0x0) {
      GlobalFree(*(HGLOBAL *)((int)g_HGLOBAL_ARRAY_02cf54b0 + iVar1));
      *(uint *)((int)g_HGLOBAL_ARRAY_02cf54b0 + iVar1) = 0;
    }
    *(uint *)((int)g_LPVOID_ARRAY_02cf54d0 + iVar1) = 0;
    if (*(HGLOBAL *)((int)g_HGLOBAL_ARRAY_02cf5470 + iVar1) != (HGLOBAL)0x0) {
      GlobalFree(*(HGLOBAL *)((int)g_HGLOBAL_ARRAY_02cf5470 + iVar1));
      *(uint *)((int)g_HGLOBAL_ARRAY_02cf5470 + iVar1) = 0;
    }
    iVar3 = iVar1 + 4;
    *(uint *)((int)g_LPWAVEHDR_ARRAY_02cf5490 + iVar1) = 0;
    iVar1 = iVar3;
  } while (iVar3 != 0x20);
  if (g_INT_02cf546c == 0) {
    return uVar4;
  }
  MVar2 = waveOutClose((HWAVEOUT)g_INT_02cf546c);
  if (MVar2 != 0) {
    sound_sndmain_cpp_logSoundError_FUN_0055a560("waveOutClose failed.");
    uVar4 = 0;
  }
  g_INT_02cf546c = 0;
  return uVar4;
}
