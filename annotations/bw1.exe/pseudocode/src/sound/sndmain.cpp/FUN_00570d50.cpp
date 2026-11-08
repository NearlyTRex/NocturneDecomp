// Name: FUN_00570d50
// Address: 00570d50
// Address Range: [[00570d50, 00570e86]]
// Convention: unknown
// Signature: float FUN_00570d50(undefined4 *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float FUN_00570d50(uint *param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  uint *puVar4;
  float local_20;
  float local_14;
  
  if (_DAT_02c807ec < 1) {
    _DAT_01d1d400 = "..\\sound\\sndmain.cpp";
    _DAT_01d1d404 = 0xa98;
    FUN_005030e0("SfxSlot::kill - must be locked!");
  }
  fVar2 = (float)FUN_00573bc0(*param_1);
  fVar1 = fVar2 * (float)param_1[0xe];
  fVar2 = (float)(uint)CONCAT11(*(byte *)(param_1 + 0x13),SUB41(fVar2,0));
  if ((*(byte *)(param_1 + 0x13) & 1) == 0) {
    iVar3 = 0;
    puVar4 = param_1;
    if (0 < DAT_006232ec) {
      do {
        local_14 = (float)puVar4[0x1c];
        if ((float)puVar4[0x1c] < (float)param_1[0x3d]) {
          local_14 = (float)param_1[0x3d];
        }
        if ((float)param_1[0x3e] < local_14) {
          local_14 = (float)param_1[0x3e];
        }
        fVar2 = (float)param_1[0x3c] * _DAT_005f379c;
        if (fVar2 < local_14) {
          local_20 = (float)param_1[0x3c] / local_14;
        }
        else {
          local_20 = 20.0;
        }
        iVar3 = iVar3 + 1;
        puVar4[0x24] = fVar1 * local_20;
        fVar2 = (float)(uint)(ushort)((ushort)(fVar2 < local_14) << 8 |
                                      (ushort)(NAN(fVar2) || NAN(local_14)) << 10 |
                                     (ushort)(fVar2 == local_14) << 0xe);
        puVar4 = puVar4 + 1;
      } while (iVar3 < DAT_006232ec);
    }
  }
  else {
    iVar3 = 0;
    if (0 < DAT_006232ec) {
      do {
        iVar3 = iVar3 + 1;
        param_1[0x24] = fVar1;
        fVar2 = fVar1;
        param_1 = param_1 + 1;
      } while (iVar3 < DAT_006232ec);
    }
  }
  return fVar2;
}
