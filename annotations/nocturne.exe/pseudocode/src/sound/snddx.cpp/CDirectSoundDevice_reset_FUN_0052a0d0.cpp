// Name: sound_snddx.cpp_CDirectSoundDevice_reset_FUN_0052a0d0
// Address: 0052a0d0
// Address Range: [[0052a0d0, 0052a279]]
// Convention: __cdecl
// Signature: int __cdecl sound_snddx_cpp_CDirectSoundDevice_reset_FUN_0052a0d0(CDirectSoundDevice *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl sound_snddx_cpp_CDirectSoundDevice_reset_FUN_0052a0d0(CDirectSoundDevice *this_ptr)

{
  int *piVar1;
  uint uVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  byte auStack_4c4 [400];
  byte auStack_334 [400];
  byte auStack_1a4 [400];
  int local_14;
  
  local_14 = 1;
  if (_DAT_02dc921c != (int *)0x0) {
    uVar2 = (**(code **)(*_DAT_02dc921c + 0x48))(_DAT_02dc921c);
    if (uVar2 != 0) {
      pcVar3 = sound_snddx_cpp_getDirectSoundErrorString_FUN_00529a90(uVar2);
      _sprintf(auStack_1a4,"DirectSux: Unable to %s.  (%s)","Stop secondary sound buffer",
                 pcVar3);
      sound_sndmain_cpp_FUN_00529980(auStack_1a4);
      local_14 = 0;
    }
  }
  if (_DAT_02dc9218 != (int *)0x0) {
    uVar2 = (**(code **)(*_DAT_02dc9218 + 0x48))(_DAT_02dc9218);
    if (uVar2 != 0) {
      pcVar3 = sound_snddx_cpp_getDirectSoundErrorString_FUN_00529a90(uVar2);
      _sprintf(auStack_334,"DirectSux: Unable to %s.  (%s)","Stop primary sound buffer",
                 pcVar3);
      sound_sndmain_cpp_FUN_00529980(auStack_334);
      local_14 = 0;
    }
  }
  iVar5 = 0;
  iVar4 = 0;
  do {
    piVar1 = *(int **)(iVar5 + 0x2dc92a8);
    if (piVar1 == (int *)0x0) {
LAB_0052a120:
      piVar6 = (int *)(iVar4 * 4 + 0x2dc9324);
      piVar1 = (int *)*piVar6;
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 8))(piVar1);
        *piVar6 = 0;
      }
      piVar6 = (int *)(iVar4 * 4 + 0x2dc92a8);
      piVar1 = (int *)*piVar6;
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 8))(piVar1);
        *piVar6 = 0;
      }
    }
    else {
      uVar2 = (**(code **)(*piVar1 + 0x48))(piVar1);
      if (uVar2 == 0) goto LAB_0052a120;
      pcVar3 = sound_snddx_cpp_getDirectSoundErrorString_FUN_00529a90(uVar2);
      _sprintf(auStack_4c4,"DirectSux: Unable to %s.  (%s)","Stop hardware sfx secondary buffer",
                 pcVar3);
      sound_sndmain_cpp_FUN_00529980(auStack_4c4);
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
