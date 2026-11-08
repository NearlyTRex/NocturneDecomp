// Name: FUN_005561b0
// Address: 005561b0
// Address Range: [[005561b0, 00556289]]
// Convention: unknown
// Signature: void FUN_005561b0(undefined4 param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005561b0(uint param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int *piStack_1ac;
  char *pcStack_1a8;
  int iStack_1a4;
  
  if ((((param_2 < 1) || (0x40 < param_2)) || (*(int *)(param_2 * 0x18 + 0x264a5f4) == 0)) ||
     (*(int *)(param_2 * 0x18 + 0x264a5fc) < 1)) {
    iStack_1a4 = param_2;
    pcStack_1a8 = "DirectSoundDevice::unlockSample - Can't unlock invalid handle: %d";
    _DAT_01d046a0 = "..\\sound\\snddx.cpp";
    _DAT_01d046a4 = 0x465;
    piStack_1ac = (int *)0x5561ef;
    FUN_004e4500();
  }
  param_2 = param_2 * 0x18;
  pcStack_1a8 = *(char **)(param_2 + 0x264a604);
  if (pcStack_1a8 != (char *)0x0) {
    iStack_1a4 = *(uint *)(param_2 + 0x264a608);
    piStack_1ac = *(int **)(param_2 + 0x264a5f4);
    iVar1 = (**(code **)(*piStack_1ac + 0x4c))();
    if (iVar1 != 0) {
      uVar2 = FUN_00554ad0(iVar1);
      FUN_005b7790(&piStack_1ac,"DirectSux: Unable to %s.  (%s)",
                   "Unlock hw sample buffer",uVar2);
      FUN_005549c0(&piStack_1ac);
    }
    *(uint *)(param_2 + 0x264a604) = 0;
  }
  return;
}
