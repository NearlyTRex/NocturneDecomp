// Name: sound_snddx.cpp_releaseSfxHardwareBuffers_FUN_00529de0
// Address: 00529de0
// Address Range: [[00529de0, 00529e87]]
// Convention: __cdecl
// Signature: int __cdecl sound_snddx_cpp_releaseSfxHardwareBuffers_FUN_00529de0(int sfx_handle)

#include "nocturne.h"

int __cdecl sound_snddx_cpp_releaseSfxHardwareBuffers_FUN_00529de0(int sfx_handle)

{
  int *piVar1;
  uint error_code;
  char *pcVar2;
  int *piVar3;
  byte auStack_198 [400];
  
  piVar1 = *(int **)(sfx_handle * 4 + 0x2dc92a8);
  if (piVar1 != (int *)0x0) {
    error_code = (**(code **)(*piVar1 + 0x48))(piVar1);
    if (error_code != 0) {
      pcVar2 = sound_snddx_cpp_getDirectSoundErrorString_FUN_00529a90(error_code);
      _sprintf(auStack_198,"DirectSux: Unable to %s.  (%s)","Stop hardware sfx secondary buffer",
                 pcVar2);
      sound_sndmain_cpp_FUN_00529980(auStack_198);
      return 0;
    }
  }
  piVar3 = (int *)(sfx_handle * 4 + 0x2dc9324);
  piVar1 = (int *)*piVar3;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *piVar3 = 0;
  }
  piVar3 = (int *)(sfx_handle * 4 + 0x2dc92a8);
  piVar1 = (int *)*piVar3;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *piVar3 = 0;
  }
  return 1;
}
