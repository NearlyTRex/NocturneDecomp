// Name: sound_snddx.cpp_CDirectSoundDevice_killSfx_FUN_0052bae0
// Address: 0052bae0
// Address Range: [[0052bae0, 0052bbc9]]
// Convention: __cdecl
// Signature: void __cdecl sound_snddx_cpp_CDirectSoundDevice_killSfx_FUN_0052bae0(CDirectSoundDevice *this_ptr,CSfxSlot *slot)

#include "nocturne.h"

void __cdecl sound_snddx_cpp_CDirectSoundDevice_killSfx_FUN_0052bae0(CDirectSoundDevice *this_ptr,CSfxSlot *slot)

{
  int iVar1;
  int *piVar2;
  uint error_code;
  char *pcVar3;
  int *piVar4;
  char acStack_1a0 [400];
  
  iVar1 = slot->hardware_buffer_handle;
  if ((((iVar1 < 1) || (0x1e < iVar1)) || (*(int *)(iVar1 * 4 + 0x2dc92a8) == 0)) ||
     (*(int *)(iVar1 * 4 + 0x2dc9324) == 0)) {
    sound_sndmain_cpp_logSoundError_FUN_00529980("DirectSoundDevice::killSfx - handle wasn't valid, call ignored");
  }
  else {
    piVar2 = *(int **)(iVar1 * 4 + 0x2dc92a8);
    if (piVar2 != (int *)0x0) {
      error_code = (**(code **)(*piVar2 + 0x48))(piVar2);
      if (error_code != 0) {
        pcVar3 = sound_snddx_cpp_getDirectSoundErrorString_FUN_00529a90(error_code);
        _sprintf(acStack_1a0,"DirectSux: Unable to %s.  (%s)",
                   "Stop hardware sfx secondary buffer",pcVar3);
        sound_sndmain_cpp_logSoundError_FUN_00529980(acStack_1a0);
        return;
      }
    }
    piVar4 = (int *)(iVar1 * 4 + 0x2dc9324);
    piVar2 = (int *)*piVar4;
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 8))(piVar2);
      *piVar4 = 0;
    }
    piVar4 = (int *)(iVar1 * 4 + 0x2dc92a8);
    piVar2 = (int *)*piVar4;
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 8))(piVar2);
      *piVar4 = 0;
      return;
    }
  }
  return;
}
