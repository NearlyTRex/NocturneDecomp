// Name: sound_snddx.cpp_CDirectSoundDevice_killSfx_FUN_0052bae0
// Address: 0052bae0
// Address Range: [[0052bae0, 0052bbc9]]
// Convention: unknown
// Signature: void sound_snddx_cpp_CDirectSoundDevice_killSfx_FUN_0052bae0(undefined4 param_1,int param_2)

#include "nocturne.h"

void sound_snddx_cpp_CDirectSoundDevice_killSfx_FUN_0052bae0(uint param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  byte auStack_1a0 [400];
  
  iVar1 = *(int *)(param_2 + 0x6c);
  if ((((iVar1 < 1) || (0x1e < iVar1)) || (*(int *)(iVar1 * 4 + 0x2dc92a8) == 0)) ||
     (*(int *)(iVar1 * 4 + 0x2dc9324) == 0)) {
    sound_sndmain_cpp_FUN_00529980("DirectSoundDevice::killSfx - handle wasn't valid, call ignored");
  }
  else {
    piVar2 = *(int **)(iVar1 * 4 + 0x2dc92a8);
    if (piVar2 != (int *)0x0) {
      iVar3 = (**(code **)(*piVar2 + 0x48))(piVar2);
      if (iVar3 != 0) {
        uVar4 = sound_snddx_cpp_getDirectSoundErrorString_FUN_00529a90(iVar3);
        _sprintf(auStack_1a0,"DirectSux: Unable to %s.  (%s)",
                   "Stop hardware sfx secondary buffer",uVar4);
        sound_sndmain_cpp_FUN_00529980(auStack_1a0);
        return;
      }
    }
    piVar5 = (int *)(iVar1 * 4 + 0x2dc9324);
    piVar2 = (int *)*piVar5;
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 8))(piVar2);
      *piVar5 = 0;
    }
    piVar5 = (int *)(iVar1 * 4 + 0x2dc92a8);
    piVar2 = (int *)*piVar5;
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 8))(piVar2);
      *piVar5 = 0;
      return;
    }
  }
  return;
}
