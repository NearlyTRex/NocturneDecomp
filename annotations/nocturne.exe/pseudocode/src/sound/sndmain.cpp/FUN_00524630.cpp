// Name: FUN_00524630
// Address: 00524630
// Address Range: [[00524630, 00524794]]
// Convention: unknown
// Signature: float FUN_00524630(undefined4 *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float FUN_00524630(uint *param_1)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  uint *puVar5;
  float local_30;
  float local_20;
  
  if (_DAT_02dc84bc < 1) {
    _DAT_01cc4800 = "..\\sound\\sndmain.cpp";
    _DAT_01cc4804 = 0x917;
    FUN_004c8440("SfxSlot::kill - must be locked!");
  }
  uVar1 = *(uint *)(param_1[0x1d] + 0x104);
  fVar3 = (float)FUN_00527380(*param_1);
  fVar2 = (fVar3 * (float)param_1[0x11]) / (float)(1 << ((char)uVar1 - 1U & 0x1f));
  fVar3 = (float)(uint)CONCAT11(*(byte *)(param_1 + 0x17),SUB41(fVar3,0));
  if ((*(byte *)(param_1 + 0x17) & 1) == 0) {
    iVar4 = 0;
    puVar5 = param_1;
    if (0 < DAT_005bea68) {
      do {
        local_30 = (float)puVar5[0x1f];
        if ((float)puVar5[0x1f] < (float)param_1[0x40]) {
          local_30 = (float)param_1[0x40];
        }
        if ((float)param_1[0x41] < local_30) {
          local_30 = (float)param_1[0x41];
        }
        fVar3 = (float)param_1[0x3f] * (float)_DAT_00592dbe;
        if (local_30 < fVar3 || (local_30 == fVar3) != 0) {
          local_20 = 20.0;
        }
        else {
          local_20 = (float)param_1[0x3f] / local_30;
        }
        iVar4 = iVar4 + 1;
        puVar5[0x27] = fVar2 * local_20;
        fVar3 = (float)(uint)(ushort)((ushort)(local_30 < fVar3) << 8 |
                                      (ushort)(NAN(local_30) || NAN(fVar3)) << 10 |
                                     (ushort)(local_30 == fVar3) << 0xe);
        puVar5 = puVar5 + 1;
      } while (iVar4 < DAT_005bea68);
    }
  }
  else {
    iVar4 = 0;
    if (0 < DAT_005bea68) {
      do {
        iVar4 = iVar4 + 1;
        param_1[0x27] = fVar2;
        fVar3 = fVar2;
        param_1 = param_1 + 1;
      } while (iVar4 < DAT_005bea68);
    }
  }
  return fVar3;
}
