// Name: sound_snddx.cpp_releaseSfxHardwareBuffers_FUN_00554e50
// Address: 00554e50
// Address Range: [[00554e50, 00554f7e]]
// Convention: __cdecl
// Signature: int __cdecl sound_snddx_cpp_releaseSfxHardwareBuffers_FUN_00554e50(int sfx_handle)

#include "nocturne.h"

int __cdecl sound_snddx_cpp_releaseSfxHardwareBuffers_FUN_00554e50(int sfx_handle)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  int unaff_retaddr;
  int *apiStack_1a4 [101];
  
  iVar2 = sfx_handle * 0x24;
  piVar4 = (int *)(iVar2 + 0x264ac10);
  apiStack_1a4[0] = (int *)*piVar4;
  uVar5 = 1;
  if (apiStack_1a4[0] != (int *)0x0) {
    uVar5 = (**(code **)(*apiStack_1a4[0] + 0x48))();
    if (uVar5 != 0) {
      sound_snddx_cpp_getDirectSoundErrorString_FUN_00554ad0(uVar5);
      _sprintf((char *)apiStack_1a4,"DirectSux: Unable to %s.  (%s)");
      sound_sndmain_cpp_logSoundError_FUN_005549c0((char *)apiStack_1a4);
    }
    uVar5 = (uint)(uVar5 == 0);
    piVar1 = *(int **)(iVar2 + 0x264ac14);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
      *(int *)(iVar2 + 0x264ac14) = 0;
    }
    iVar3 = *(int *)(iVar2 + 0x264ac18) * 0x18;
    if (*(int *)(iVar2 + 0x264ac20) != 0) {
      *(uint *)(*(int *)(iVar2 + 0x264ac20) * 0x24 + 0x264ac1c) =
           *(uint *)(iVar2 + 0x264ac1c);
    }
    if (unaff_retaddr == *(int *)(iVar3 + 0x264a5f8)) {
      *(uint *)(iVar3 + 0x264a5f8) = *(uint *)(iVar2 + 0x264ac20);
    }
    else {
      *(uint *)(*(int *)(iVar2 + 0x264ac1c) * 0x24 + 0x264ac20) =
           *(uint *)(iVar2 + 0x264ac20);
    }
    piVar1 = (int *)*piVar4;
    if ((piVar1 != *(int **)(iVar3 + 0x264a5f4)) && (piVar1 != (int *)0x0)) {
      (**(code **)(*piVar1 + 8))(piVar1);
      *piVar4 = 0;
    }
  }
  *piVar4 = 0;
  *(uint *)(iVar2 + 0x264ac20) = 0;
  *(uint *)(iVar2 + 0x264ac1c) = 0;
  *(uint *)(iVar2 + 0x264ac18) = 0;
  return uVar5;
}
