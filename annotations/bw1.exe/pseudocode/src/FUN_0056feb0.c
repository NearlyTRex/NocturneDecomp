// Name: FUN_0056feb0
// Address: 0056feb0
// Address Range: [[0056feb0, 00570013]]
// Convention: unknown
// Signature: undefined4 FUN_0056feb0(undefined4 *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0056feb0(uint *param_1)

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
  FUN_005700e0(param_1);
  FUN_00570130(param_1);
  if (param_1[0x40] == 2) {
    FUN_005773f0("Atried to use Yamaha WAV on non-CE platform." + 1);
  }
  else {
    iVar1 = FUN_00575560();
    if (iVar1 < 1) {
      FUN_0056dfd0(param_1[0x5a]);
      iVar1 = FUN_005c10d0(param_1[0x48],param_1[0x5a]);
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
      if (_DAT_02c80650 != (int *)0x0) {
        do {
          iVar1 = (**(code **)(*_DAT_02c80650 + 0x30))(_DAT_02c80650,local_160);
          if (iVar1 != 0) goto LAB_0056ff7a;
          iVar3 = 0;
          iVar1 = _DAT_02c78ff0;
          do {
            iVar1 = iVar1 + 1;
            if (0x3f < iVar1) {
              iVar1 = 0;
            }
            iVar2 = iVar1 * 0x1b0;
            if ((((*(int *)(&DAT_02c79148 + iVar2) == 0) && (*(int *)(&DAT_02c7914c + iVar2) != 0))
                && (*(int *)(iVar2 + 0x2c79144) == 0)) &&
               ((*(int *)(iVar2 + 0x2c79150) == 0 &&
                (*(int *)(_DAT_02c78ff0 * 0x1b0 + 0x2c791a0) == 0)))) {
              FUN_00570020(iVar2 + 0x2c78ff4);
              break;
            }
            iVar3 = iVar3 + 1;
          } while (iVar3 < 0x40);
        } while (iVar3 < 0x40);
        FUN_005773f0("?allocateHwSample - failed\n" + 1);
      }
      iVar1 = 0;
LAB_0056ff7a:
      param_1[0x56] = iVar1;
      if (iVar1 != 0) {
        return 1;
      }
    }
  }
  return 0;
}
