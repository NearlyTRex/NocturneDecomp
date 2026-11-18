// Name: sound_snddx.cpp_CDirectSoundDevice_reset_FUN_00577cd0
// Address: 00577cd0
// Address Range: [[00577cd0, 00577dbb]]
// Convention: __cdecl
// Signature: int __cdecl sound_snddx_cpp_CDirectSoundDevice_reset_FUN_00577cd0(CDirectSoundDevice *this_ptr)

#include "nocturne.h"

int __cdecl sound_snddx_cpp_CDirectSoundDevice_reset_FUN_00577cd0(CDirectSoundDevice *this_ptr)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  char acStack_328 [400];
  char acStack_198 [400];
  
  iVar4 = 1;
  if (g_DirectSoundSecondaryBuffer != (IDirectSoundBuffer *)0x0) {
    uVar2 = (*g_DirectSoundSecondaryBuffer->vtable->Stop)(g_DirectSoundSecondaryBuffer);
    if (uVar2 != 0) {
      sound_snddx_cpp_getDirectSoundErrorString_FUN_00577500(uVar2);
      _sprintf(acStack_198,"DirectSux: Unable to %s.  (%s)");
      iVar4 = 0;
      sound_sndmain_cpp_logSoundError_FUN_005773f0(acStack_198);
    }
  }
  if (g_DirectSoundPrimaryBuffer != (IDirectSoundBuffer *)0x0) {
    uVar2 = (*g_DirectSoundPrimaryBuffer->vtable->Stop)(g_DirectSoundPrimaryBuffer);
    if (uVar2 != 0) {
      sound_snddx_cpp_getDirectSoundErrorString_FUN_00577500(uVar2);
      _sprintf(acStack_328,"DirectSux: Unable to %s.  (%s)");
      iVar4 = 0;
      sound_sndmain_cpp_logSoundError_FUN_005773f0(acStack_328);
    }
  }
  iVar3 = 0;
  do {
    iVar1 = sound_snddx_cpp_releaseSfxHardwareBuffers_FUN_00577880(iVar3);
    if (iVar1 == 0) {
      iVar4 = 0;
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 0x1f);
  iVar3 = sound_sndmain_cpp_killSoundThread_FUN_00575ca0();
  if (iVar3 != 0) {
    return iVar4;
  }
  return 0;
}
