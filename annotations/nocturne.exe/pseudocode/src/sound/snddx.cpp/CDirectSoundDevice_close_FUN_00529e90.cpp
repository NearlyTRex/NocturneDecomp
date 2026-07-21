// Name: sound_snddx.cpp_CDirectSoundDevice_close_FUN_00529e90
// Address: 00529e90
// Address Range: [[00529e90, 00529f5c]]
// Convention: __cdecl
// Signature: bool __cdecl sound_snddx_cpp_CDirectSoundDevice_close_FUN_00529e90(int *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __cdecl sound_snddx_cpp_CDirectSoundDevice_close_FUN_00529e90(int *param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = (**(code **)(*param_1 + 8))(param_1);
  piVar3 = (int *)&DAT_02dc9244;
  do {
    piVar1 = (int *)*piVar3;
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
      *piVar3 = 0;
    }
    piVar3 = piVar3 + 1;
  } while (piVar3 != (int *)0x2dc92a8);
  if (_DAT_02dc9220 != (int *)0x0) {
    (**(code **)(*_DAT_02dc9220 + 8))(_DAT_02dc9220);
    _DAT_02dc9220 = (int *)0x0;
  }
  if (_DAT_02dc921c != (int *)0x0) {
    (**(code **)(*_DAT_02dc921c + 8))(_DAT_02dc921c);
    _DAT_02dc921c = (int *)0x0;
  }
  if (_DAT_02dc9224 != (int *)0x0) {
    (**(code **)(*_DAT_02dc9224 + 8))(_DAT_02dc9224);
    _DAT_02dc9224 = (int *)0x0;
  }
  if (_DAT_02dc9218 != (int *)0x0) {
    (**(code **)(*_DAT_02dc9218 + 8))(_DAT_02dc9218);
    _DAT_02dc9218 = (int *)0x0;
  }
  if (_DAT_02dc9214 == (int *)0x0) {
    return iVar2 != 0;
  }
  (**(code **)(*_DAT_02dc9214 + 8))(_DAT_02dc9214);
  _DAT_02dc9214 = (int *)0x0;
  return iVar2 != 0;
}
