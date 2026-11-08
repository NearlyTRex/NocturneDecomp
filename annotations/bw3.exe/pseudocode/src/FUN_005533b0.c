// Name: FUN_005533b0
// Address: 005533b0
// Address Range: [[005533b0, 00553513]]
// Convention: unknown
// Signature: undefined4 FUN_005533b0(undefined4 *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_005533b0(uint *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  uint *puVar5;
  byte bVar6;
  uint auStack_2b0 [68];
  uint local_1a0;
  uint local_160 [84];
  
  bVar6 = 0;
  FUN_005535e0(param_1);
  FUN_00553630(param_1);
  if (param_1[0x40] == 2) {
    FUN_0055a560("Atried to use Yamaha WAV on non-CE platform." + 1);
  }
  else {
    iVar1 = FUN_005586d0();
    if (iVar1 < 1) {
      FUN_005514c0(param_1[0x5a]);
      iVar1 = FUN_005a3e50(param_1[0x48],param_1[0x5a]);
      if (iVar1 != 0) {
        param_1[0x48] = iVar1;
        return 1;
      }
    }
    else {
      puVar4 = param_1;
      puVar5 = auStack_2b0;
      for (iVar1 = 0x54; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
        puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
      }
      local_1a0 = param_1[0x59];
      puVar4 = auStack_2b0;
      puVar5 = local_160;
      for (iVar1 = 0x54; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
        puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
      }
      if (_DAT_02cf3280 != (int *)0x0) {
        do {
          iVar1 = (**(code **)(*_DAT_02cf3280 + 0x30))(_DAT_02cf3280,local_160);
          if (iVar1 != 0) goto LAB_0055347a;
          iVar3 = 0;
          iVar1 = _DAT_02cebc20;
          do {
            iVar1 = iVar1 + 1;
            if (0x3f < iVar1) {
              iVar1 = 0;
            }
            iVar2 = iVar1 * 0x1b0;
            if ((((*(int *)(&DAT_02cebd78 + iVar2) == 0) && (*(int *)(iVar2 + 0x2cebd7c) != 0)) &&
                (*(int *)(iVar2 + 0x2cebd74) == 0)) &&
               ((*(int *)(iVar2 + 0x2cebd80) == 0 &&
                (*(int *)(_DAT_02cebc20 * 0x1b0 + 0x2cebdd0) == 0)))) {
              FUN_00553520(iVar2 + 0x2cebc24);
              break;
            }
            iVar3 = iVar3 + 1;
          } while (iVar3 < 0x40);
        } while (iVar3 < 0x40);
        FUN_0055a560("allocateHwSample - failed\n");
      }
      iVar1 = 0;
LAB_0055347a:
      param_1[0x56] = iVar1;
      if (iVar1 != 0) {
        return 1;
      }
    }
  }
  return 0;
}
