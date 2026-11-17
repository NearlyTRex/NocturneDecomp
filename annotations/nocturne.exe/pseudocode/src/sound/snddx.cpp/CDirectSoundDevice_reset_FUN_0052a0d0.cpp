// Name: sound_snddx.cpp_CDirectSoundDevice_reset_FUN_0052a0d0
// Address: 0052a0d0
// Address Range: [[0052a0d0, 0052a279]]
// Convention: __cdecl
// Signature: int __cdecl sound_snddx_cpp_CDirectSoundDevice_reset_FUN_0052a0d0(CDirectSoundDevice *this_ptr)

#include "nocturne.h"

int __cdecl sound_snddx_cpp_CDirectSoundDevice_reset_FUN_0052a0d0(CDirectSoundDevice *this_ptr)

{
  int *piVar1;
  IDirectSoundBuffer *this_ptr_00;
  uint uVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  char acStack_4c4 [400];
  char acStack_334 [400];
  char acStack_1a4 [400];
  int local_14;
  
  local_14 = 1;
  if (g_IDirectSoundBuffer_PTR_02dc921c != (IDirectSoundBuffer *)0x0) {
    uVar2 = (*g_IDirectSoundBuffer_PTR_02dc921c->vtable->Stop)(g_IDirectSoundBuffer_PTR_02dc921c);
    if (uVar2 != 0) {
      pcVar3 = sound_snddx_cpp_getDirectSoundErrorString_FUN_00529a90(uVar2);
      _sprintf(acStack_1a4,"DirectSux: Unable to %s.  (%s)","Stop secondary sound buffer",
                 pcVar3);
      sound_sndmain_cpp_logSoundError_FUN_00529980(acStack_1a4);
      local_14 = 0;
    }
  }
  if (g_IDirectSoundBuffer_PTR_02dc9218 != (IDirectSoundBuffer *)0x0) {
    uVar2 = (*g_IDirectSoundBuffer_PTR_02dc9218->vtable->Stop)(g_IDirectSoundBuffer_PTR_02dc9218);
    if (uVar2 != 0) {
      pcVar3 = sound_snddx_cpp_getDirectSoundErrorString_FUN_00529a90(uVar2);
      _sprintf(acStack_334,"DirectSux: Unable to %s.  (%s)","Stop primary sound buffer",
                 pcVar3);
      sound_sndmain_cpp_logSoundError_FUN_00529980(acStack_334);
      local_14 = 0;
    }
  }
  iVar5 = 0;
  iVar4 = 0;
  do {
    piVar1 = *(int **)((int)g_IDirectSoundBuffer_PTR_ARRAY_02dc92a8 + iVar5);
    if (piVar1 == (int *)0x0) {
LAB_0052a120:
      piVar1 = (int *)g_INT_ARRAY_02dc9324[iVar4];
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 8))(piVar1);
        g_INT_ARRAY_02dc9324[iVar4] = 0;
      }
      this_ptr_00 = g_IDirectSoundBuffer_PTR_ARRAY_02dc92a8[iVar4];
      if (this_ptr_00 != (IDirectSoundBuffer *)0x0) {
        (*this_ptr_00->vtable->Release)((IUnknown *)this_ptr_00);
        g_IDirectSoundBuffer_PTR_ARRAY_02dc92a8[iVar4] = (IDirectSoundBuffer *)0x0;
      }
    }
    else {
      uVar2 = (**(code **)(*piVar1 + 0x48))(piVar1);
      if (uVar2 == 0) goto LAB_0052a120;
      pcVar3 = sound_snddx_cpp_getDirectSoundErrorString_FUN_00529a90(uVar2);
      _sprintf(acStack_4c4,"DirectSux: Unable to %s.  (%s)","Stop hardware sfx secondary buffer",
                 pcVar3);
      sound_sndmain_cpp_logSoundError_FUN_00529980(acStack_4c4);
      local_14 = 0;
    }
    iVar4 = iVar4 + 1;
    iVar5 = iVar5 + 4;
    if (0x1e < iVar4) {
      iVar4 = sound_sndmain_cpp_killSoundThread_FUN_00528780();
      if (iVar4 != 0) {
        return local_14;
      }
      return 0;
    }
  } while( true );
}
