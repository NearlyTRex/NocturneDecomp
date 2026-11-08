// Name: FUN_005799b0
// Address: 005799b0
// Address Range: [[005799b0, 00579acd]]
// Convention: unknown
// Signature: double FUN_005799b0(undefined4 param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_005799b0(uint param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  char *apcStack_1bc [101];
  uint uStack_28;
  char acStack_20 [16];
  
  iVar2 = *(int *)(param_2 + 0x60);
  if (((iVar2 < 1) || (0x1e < iVar2)) || (*(int *)(iVar2 * 0x24 + 0x2c823e0) == 0)) {
    apcStack_1bc[0] = "DirectSoundDevice::getSfxPlaybackPos - invalid handle";
    _DAT_01d1d400 = "..\\sound\\snddx.cpp";
    _DAT_01d1d404 = 0x601;
    FUN_005030e0();
  }
  if (*(int *)(param_2 + 0x68) != 0) {
    apcStack_1bc[0] = acStack_20;
    piVar1 = *(int **)(iVar2 * 0x24 + 0x2c823e0);
    iVar2 = (**(code **)(*piVar1 + 0x10))(piVar1);
    if (iVar2 != 0) {
      uVar3 = FUN_00577500(iVar2);
      FUN_005bfb40(apcStack_1bc,"DirectSux: Unable to %s.  (%s)",
                   "Get playback cursor of hardware sfx secondary buffer",uVar3);
      FUN_005773f0(apcStack_1bc);
      return -1.0;
    }
    iVar2 = FUN_005723e0(*(uint *)(param_2 + 0x68),uStack_28);
    return (double)iVar2;
  }
  return -1.0;
}
