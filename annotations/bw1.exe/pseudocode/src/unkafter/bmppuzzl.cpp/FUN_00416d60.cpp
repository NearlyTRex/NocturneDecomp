// Name: unkafter_bmppuzzl.cpp_FUN_00416d60
// Address: 00416d60
// Address Range: [[00416d60, 00416e16]]
// Convention: unknown
// Signature: void unkafter_bmppuzzl_cpp_FUN_00416d60(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void unkafter_bmppuzzl_cpp_FUN_00416d60(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = DAT_007c397c;
  iVar1 = 2;
  if (*(int *)(param_1 + 0x20) != 2) {
    do {
      iVar1 = iVar1 + 1;
      if (4 < iVar1) {
        return;
      }
    } while (iVar1 != *(int *)(param_1 + 0x20));
  }
  *(uint *)(param_1 + 0x88 + iVar1 * 0x2c) = 0;
  if (iVar2 < _DAT_01c4353c) {
    iVar2 = *(int *)(param_1 + 0x34) + 1;
    *(int *)(param_1 + 0x34) = iVar2;
    if (2 < iVar2) {
      *(uint *)(param_1 + 0x34) = 2;
    }
  }
  else {
    iVar2 = *(int *)(param_1 + 0x34) + -1;
    *(int *)(param_1 + 0x34) = iVar2;
    if (iVar2 < 0) {
      *(uint *)(param_1 + 0x34) = 0;
    }
  }
  uVar3 = sound_sndmain_cpp_startSfx_FUN_00572d20("REC-FOWARD-SWITCH.WAV");
  *(uint *)(param_1 + 0x58) = uVar3;
  DAT_007c397c = _DAT_01c4353c;
  if ((*(int *)(param_1 + 0x34) < 2) && (0 < *(int *)(param_1 + 0x34))) {
    *(uint *)(param_1 + 0x18) = 1;
    return;
  }
  if (*(int *)(param_1 + 0x34) != 2) {
    *(uint *)(param_1 + 0x18) = 3;
    return;
  }
  *(uint *)(param_1 + 0x18) = 2;
  return;
}
