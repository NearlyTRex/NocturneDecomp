// Name: sound_sndwav.cpp_CWavOutDevice_close_FUN_00557d10
// Address: 00557d10
// Address Range: [[00557d10, 00557db0]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndwav_cpp_CWavOutDevice_close_FUN_00557d10(CWavOutDevice *this_ptr)

#include "nocturne.h"

int __cdecl sound_sndwav_cpp_CWavOutDevice_close_FUN_00557d10(CWavOutDevice *this_ptr)

{
  int iVar1;
  MMRESULT MVar2;
  int iVar3;
  uint uVar4;
  
  iVar1 = (*((this_ptr->base).vtable)->reset)(&this_ptr->base);
  uVar4 = (uint)(iVar1 != 0);
  iVar1 = 0;
  do {
    if (*(HGLOBAL *)((int)g_HGLOBAL_ARRAY_0264b0b4 + iVar1) != (HGLOBAL)0x0) {
      GlobalFree(*(HGLOBAL *)((int)g_HGLOBAL_ARRAY_0264b0b4 + iVar1));
      *(uint *)((int)g_HGLOBAL_ARRAY_0264b0b4 + iVar1) = 0;
    }
    *(uint *)((int)g_LPVOID_ARRAY_0264b0d4 + iVar1) = 0;
    if (*(HGLOBAL *)((int)g_HGLOBAL_ARRAY_0264b074 + iVar1) != (HGLOBAL)0x0) {
      GlobalFree(*(HGLOBAL *)((int)g_HGLOBAL_ARRAY_0264b074 + iVar1));
      *(uint *)((int)g_HGLOBAL_ARRAY_0264b074 + iVar1) = 0;
    }
    iVar3 = iVar1 + 4;
    *(uint *)((int)g_LPWAVEHDR_ARRAY_0264b094 + iVar1) = 0;
    iVar1 = iVar3;
  } while (iVar3 != 0x20);
  if (g_INT_0264b070 == 0) {
    return uVar4;
  }
  MVar2 = waveOutClose((HWAVEOUT)g_INT_0264b070);
  if (MVar2 != 0) {
    sound_sndmain_cpp_logSoundError_FUN_005549c0("waveOutClose failed.");
    uVar4 = 0;
  }
  g_INT_0264b070 = 0;
  return uVar4;
}
