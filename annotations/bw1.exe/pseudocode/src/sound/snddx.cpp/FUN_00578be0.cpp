// Name: FUN_00578be0
// Address: 00578be0
// Address Range: [[00578be0, 00578cb9]]
// Convention: unknown
// Signature: void FUN_00578be0(undefined4 param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00578be0(uint param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int *piStack_1ac;
  char *pcStack_1a8;
  int iStack_1a4;
  
  if ((((param_2 < 1) || (0x40 < param_2)) || (*(int *)(param_2 * 0x18 + 0x2c81dc4) == 0)) ||
     (*(int *)(param_2 * 0x18 + 0x2c81dcc) < 1)) {
    iStack_1a4 = param_2;
    pcStack_1a8 = "DirectSoundDevice::unlockSample - Can't unlock invalid handle: %d";
    _DAT_01d1d400 = "..\\sound\\snddx.cpp";
    _DAT_01d1d404 = 0x465;
    piStack_1ac = (int *)0x578c1f;
    FUN_005030e0();
  }
  param_2 = param_2 * 0x18;
  pcStack_1a8 = *(char **)(param_2 + 0x2c81dd4);
  if (pcStack_1a8 != (char *)0x0) {
    iStack_1a4 = *(uint *)(param_2 + 0x2c81dd8);
    piStack_1ac = *(int **)(param_2 + 0x2c81dc4);
    iVar1 = (**(code **)(*piStack_1ac + 0x4c))();
    if (iVar1 != 0) {
      uVar2 = FUN_00577500(iVar1);
      FUN_005bfb40(&piStack_1ac,"DirectSux: Unable to %s.  (%s)",
                   "Unlock hw sample buffer",uVar2);
      FUN_005773f0(&piStack_1ac);
    }
    *(uint *)(param_2 + 0x2c81dd4) = 0;
  }
  return;
}
