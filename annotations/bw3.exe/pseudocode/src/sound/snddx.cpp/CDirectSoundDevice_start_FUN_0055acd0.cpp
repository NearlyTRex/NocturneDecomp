// Name: sound_snddx.cpp_CDirectSoundDevice_start_FUN_0055acd0
// Address: 0055acd0
// Address Range: [[0055acd0, 0055ae35]]
// Convention: __cdecl
// Signature: int __cdecl sound_snddx_cpp_CDirectSoundDevice_start_FUN_0055acd0(CDirectSoundDevice *this_ptr)

#include "nocturne.h"

int __cdecl sound_snddx_cpp_CDirectSoundDevice_start_FUN_0055acd0(CDirectSoundDevice *this_ptr)

{
  int iVar1;
  uint uVar2;
  char *format;
  int iVar3;
  uint in_stack_fffffcd0;
  char acStack_1a0 [400];
  float fStack_10;
  
  if (g_IDirectSoundBuffer_PTR_02cf49cc == (IDirectSoundBuffer *)0x0) {
    fStack_10 = 0.1;
  }
  else {
    g_INT_02cf49e8 =
         ((int)((g_INT_02cf49d8 + (g_INT_02cf49d8 >> 0x1f) * -8) -
               (uint)((g_INT_02cf49d8 >> 0x1f) << 2 < 0)) >> 3) * g_INT_02cf49e4 * g_INT_02cf49e0;
    fStack_10 = ((float)g_INT_02cf49e4 / (float)g_INT_02cf49dc) * 0.5f;
    iVar3 = 0;
    g_INT_02cf49f0 = 0;
    if (0 < g_INT_02cf49ec) {
      do {
        iVar1 = sound_snddx_cpp_fillStreamBuffer_FUN_0055a820();
        if (iVar1 == 0) goto LAB_0055adcf;
        iVar3 = iVar3 + 1;
      } while (iVar3 < g_INT_02cf49ec);
    }
  }
  iVar3 = sound_sndmain_cpp_startSoundThread_FUN_00558d70
                    (__BITCAST_DOUBLE(CONCAT44(in_stack_fffffcd0,fStack_10)));
  if (iVar3 != 0) {
    if (g_IDirectSoundBuffer_PTR_02cf49cc == (IDirectSoundBuffer *)0x0) {
      return 1;
    }
    format = &stack0xfffffcd0;
    uVar2 = (*g_IDirectSoundBuffer_PTR_02cf49cc->vtable->SetCurrentPosition)
                      (g_IDirectSoundBuffer_PTR_02cf49cc,0);
    if (uVar2 == 0) {
      uVar2 = (*g_IDirectSoundBuffer_PTR_02cf49cc->vtable->Play)
                        (g_IDirectSoundBuffer_PTR_02cf49cc,0,0,1);
      if (uVar2 == 0) {
        return 1;
      }
      sound_snddx_cpp_getDirectSoundErrorString_FUN_0055a670(uVar2);
      _sprintf(acStack_1a0,"DirectSux: Unable to %s.  (%s)");
      format = acStack_1a0;
    }
    else {
      sound_snddx_cpp_getDirectSoundErrorString_FUN_0055a670(uVar2);
      _sprintf(&stack0xfffffcd0,"DirectSux: Unable to %s.  (%s)");
    }
    sound_sndmain_cpp_logSoundError_FUN_0055a560(format);
  }
LAB_0055adcf:
  (*((this_ptr->base).vtable)->reset)(&this_ptr->base);
  return 0;
}
