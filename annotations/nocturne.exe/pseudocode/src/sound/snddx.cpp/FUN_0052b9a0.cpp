// Name: FUN_0052b9a0
// Address: 0052b9a0
// Address Range: [[0052b9a0, 0052bad3]]
// Convention: unknown
// Signature: undefined4 FUN_0052b9a0(int *param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0052b9a0(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int *piStack_1b0;
  int *piStack_1ac;
  char *pcStack_1a8;
  char *pcStack_1a4;
  
  iVar2 = *(int *)(param_2 + 0x6c);
  if ((((iVar2 < 1) || (0x1e < iVar2)) || (*(int *)(iVar2 * 4 + 0x2dc92a8) == 0)) ||
     (*(int *)(iVar2 * 4 + 0x2dc9324) == 0)) {
    pcStack_1a8 = "DirectSoundDevice::startSfx - invalid handle: %d";
    _DAT_01cc4800 = "..\\sound\\snddx.cpp";
    _DAT_01cc4804 = 0x3b9;
    piStack_1ac = (int *)0x52b9e8;
    pcStack_1a4 = (char *)iVar2;
    FUN_004c8440();
  }
  pcStack_1a4 = (char *)0xffffffff;
  pcStack_1a8 = (char *)param_2;
  piStack_1ac = param_1;
  piStack_1b0 = (int *)0x52b9f4;
  iVar1 = (**(code **)(*param_1 + 0x40))();
  uVar3 = 0;
  if (iVar1 != 0) {
    if (*(int *)(param_2 + 0x74) == 0) {
      pcStack_1a4 = "DirectSoundDevice::startSfx - no sample??";
      _DAT_01cc4800 = "..\\sound\\snddx.cpp";
      _DAT_01cc4804 = 0x3c3;
      pcStack_1a8 = (char *)0x52ba93;
      FUN_004c8440();
    }
    pcStack_1a4 = (char *)(uint)(*(int *)(*(int *)(param_2 + 0x74) + 0x124) != 0);
    if (*(int *)(*(int *)(param_2 + 0x74) + 0x138) != *(int *)(*(int *)(param_2 + 0x74) + 0x110)) {
      pcStack_1a4 = (char *)0x1;
    }
    pcStack_1a8 = (char *)0x0;
    piStack_1b0 = *(int **)(iVar2 * 4 + 0x2dc92a8);
    piStack_1ac = (int *)0x0;
    iVar2 = (**(code **)(*piStack_1b0 + 0x30))();
    if (iVar2 != 0) {
      uVar3 = FUN_00529a90(iVar2);
      FUN_00563c90(&piStack_1b0,"DirectSux: Unable to %s.  (%s)",
                   "Play hardware sfx secondary buffer",uVar3);
      FUN_00529980(&piStack_1b0);
      return 0;
    }
    uVar3 = 1;
  }
  return uVar3;
}
