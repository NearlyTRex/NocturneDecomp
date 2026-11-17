// Name: sound_snddx.cpp_fillStreamBuffer_FUN_005776b0
// Address: 005776b0
// Address Range: [[005776b0, 00577876]]
// Convention: __cdecl
// Signature: int __cdecl sound_snddx_cpp_fillStreamBuffer_FUN_005776b0(void)

#include "nocturne.h"

int __cdecl sound_snddx_cpp_fillStreamBuffer_FUN_005776b0(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  LPVOID pvVar4;
  char acStack_360 [400];
  char acStack_1d0 [400];
  LPVOID apvStack_40 [8];
  LPVOID local_20;
  LPVOID local_1c;
  DWORD local_18;
  DWORD local_14;
  
  if (g_IDirectSoundBuffer_PTR_02c81d9c != (IDirectSoundBuffer *)0x0) {
    uVar1 = (*g_IDirectSoundBuffer_PTR_02c81d9c->vtable->Lock)
                      (g_IDirectSoundBuffer_PTR_02c81d9c,g_INT_02c81dc0 * g_INT_02c81db8,
                       g_INT_02c81db8,&local_1c,&local_18,&local_20,&local_14,0);
    if (uVar1 != 0) {
      sound_snddx_cpp_getDirectSoundErrorString_FUN_00577500(uVar1);
      _sprintf(acStack_360,"DirectSux: Unable to %s.  (%s)");
      sound_sndmain_cpp_logSoundError_FUN_005773f0(acStack_360);
      return 0;
    }
    if ((local_20 == (LPVOID)0x0) && (local_18 == g_INT_02c81db8)) {
      iVar2 = (int)((g_INT_02c81da8 + (g_INT_02c81da8 >> 0x1f) * -8) -
                   (uint)((g_INT_02c81da8 >> 0x1f) << 2 < 0)) >> 3;
      iVar3 = 0;
      pvVar4 = local_1c;
      if (0 < g_INT_02c81db0 * 4) {
        do {
          *(LPVOID *)((int)apvStack_40 + iVar3) = pvVar4;
          iVar3 = iVar3 + 4;
          pvVar4 = (LPVOID)((int)pvVar4 + iVar2);
        } while (iVar3 < g_INT_02c81db0 * 4);
      }
      sound_sndmain_cpp_pollAndMixSfx_FUN_00576c20
                (apvStack_40,g_INT_02c81da8,g_INT_02c81db0,g_INT_02c81dac,g_INT_02c81db4,
                 iVar2 * g_INT_02c81db0);
      g_INT_02c81dc0 = g_INT_02c81dc0 + 1;
      if (g_INT_02c81dbc <= g_INT_02c81dc0) {
        g_INT_02c81dc0 = 0;
      }
      uVar1 = (*g_IDirectSoundBuffer_PTR_02c81d9c->vtable->Unlock)
                        (g_IDirectSoundBuffer_PTR_02c81d9c,local_1c,local_18,local_20,local_14);
      if (uVar1 != 0) {
        sound_snddx_cpp_getDirectSoundErrorString_FUN_00577500(uVar1);
        _sprintf(acStack_1d0,"DirectSux: Unable to %s.  (%s)");
        sound_sndmain_cpp_logSoundError_FUN_005773f0(acStack_1d0);
        return 0;
      }
      return 1;
    }
  }
  return 0;
}
