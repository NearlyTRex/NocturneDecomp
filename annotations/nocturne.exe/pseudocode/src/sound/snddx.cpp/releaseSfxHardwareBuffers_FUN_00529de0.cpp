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
  int *piVar2;
  char acStack_198 [400];
  
  piVar1 = *(int **)(sfx_handle * 4 + 0x2dc92a8);
  if (piVar1 != (int *)0x0) {
    error_code = (**(code **)(*piVar1 + 0x48))(piVar1);
    if (error_code != 0) {
      sound_snddx_cpp_getDirectSoundErrorString_FUN_00529a90(error_code);
      _sprintf(acStack_198,"DirectSux: Unable to %s.  (%s)");
      sound_sndmain_cpp_FUN_00529980(acStack_198);
      return 0;
    }
  }
  piVar2 = (int *)(sfx_handle * 4 + 0x2dc9324);
  piVar1 = (int *)*piVar2;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *piVar2 = 0;
  }
  piVar2 = (int *)(sfx_handle * 4 + 0x2dc92a8);
  piVar1 = (int *)*piVar2;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *piVar2 = 0;
  }
  return 1;
}
