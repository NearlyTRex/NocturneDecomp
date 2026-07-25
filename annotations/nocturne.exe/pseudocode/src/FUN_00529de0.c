// Name: FUN_00529de0
// Address: 00529de0
// Address Range: [[00529de0, 00529e87]]
// Convention: unknown
// Signature: undefined4 FUN_00529de0(int param_1)

#include "nocturne.h"

uint FUN_00529de0(int param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  byte auStack_198 [400];
  
  piVar1 = *(int **)(param_1 * 4 + 0x2dc92a8);
  if (piVar1 != (int *)0x0) {
    iVar2 = (**(code **)(*piVar1 + 0x48))(piVar1);
    if (iVar2 != 0) {
      uVar3 = sound_snddx_cpp_getDirectSoundErrorString_FUN_00529a90(iVar2);
      _sprintf(auStack_198,"DirectSux: Unable to %s.  (%s)","Stop hardware sfx secondary buffer",
                 uVar3);
      FUN_00529980(auStack_198);
      return 0;
    }
  }
  piVar4 = (int *)(param_1 * 4 + 0x2dc9324);
  piVar1 = (int *)*piVar4;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *piVar4 = 0;
  }
  piVar4 = (int *)(param_1 * 4 + 0x2dc92a8);
  piVar1 = (int *)*piVar4;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *piVar4 = 0;
  }
  return 1;
}
