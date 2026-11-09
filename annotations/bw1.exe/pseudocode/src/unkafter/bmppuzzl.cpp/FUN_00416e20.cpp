// Name: unkafter_bmppuzzl.cpp_FUN_00416e20
// Address: 00416e20
// Address Range: [[00416e20, 00416f06]]
// Convention: unknown
// Signature: void unkafter_bmppuzzl_cpp_FUN_00416e20(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void unkafter_bmppuzzl_cpp_FUN_00416e20(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar1 = param_2 * 5 + 0xc;
  if (iVar1 != *(int *)(param_1 + 0x20)) {
    do {
      iVar1 = iVar1 + 1;
      if (param_2 * 5 + 0x11 <= iVar1) {
        return;
      }
    } while (iVar1 != *(int *)(param_1 + 0x20));
  }
  iVar1 = param_2 * 4 + param_1;
  if (DAT_007c397c < _DAT_01c4353c) {
    iVar3 = *(int *)(iVar1 + 0x38) + 1;
    *(int *)(iVar1 + 0x38) = iVar3;
    if (iVar3 < 5) {
      *(uint *)(param_1 + 0x34) = 100;
      uVar2 = sound_sndmain_cpp_startSfx_FUN_00572d20("REC-DIAL?.WAV");
      *(uint *)(param_1 + 0x50) = uVar2;
    }
    else {
      *(uint *)(iVar1 + 0x38) = 4;
    }
  }
  else {
    iVar3 = *(int *)(iVar1 + 0x38) + -1;
    *(int *)(iVar1 + 0x38) = iVar3;
    if (iVar3 < 0) {
      *(uint *)(iVar1 + 0x38) = 0;
    }
    else {
      uVar2 = sound_sndmain_cpp_startSfx_FUN_00572d20("REC-DIAL?.WAV");
      *(uint *)(param_1 + 0x34) = 100;
      *(uint *)(param_1 + 0x50) = uVar2;
    }
  }
  DAT_007c397c = _DAT_01c4353c;
  iVar1 = *(int *)(param_2 * 4 + param_1 + 0x38);
  if ((iVar1 < 4) && (0 < iVar1)) {
    *(uint *)(param_1 + 0x18) = 1;
    return;
  }
  if (*(int *)(param_1 + 0x38 + param_2 * 4) != 4) {
    *(uint *)(param_1 + 0x18) = 3;
    return;
  }
  *(uint *)(param_1 + 0x18) = 2;
  return;
}
