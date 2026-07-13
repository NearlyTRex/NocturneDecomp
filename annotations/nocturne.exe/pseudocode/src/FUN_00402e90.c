// Name: FUN_00402e90
// Address: 00402e90
// Address Range: [[00402e90, 00403061]]
// Convention: unknown
// Signature: void FUN_00402e90(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00402e90(int param_1)

{
  byte bVar1;
  byte bVar2;
  float fVar3;
  float fVar4;
  byte uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  float10 fVar11;
  float10 fVar12;
  int local_2c;
  float local_1c;
  float local_18;
  
  _DAT_006af634 = param_1;
  iVar9 = 0x1000;
  bVar1 = (&DAT_01c00648)[param_1 * 3];
  iVar10 = 0;
  local_2c = 0;
  bVar2 = *(byte *)(param_1 * 3 + 0x1c0064a);
  do {
    local_18 = (float)(byte)(&DAT_01c00648)[iVar10];
    fVar3 = ((float)bVar1 - local_18) * _DAT_00577188;
    local_1c = (float)*(byte *)(iVar10 + 0x1c0064a);
    fVar4 = ((float)bVar2 - local_1c) * _DAT_00577188;
    *(byte *)(local_2c + 0x1bd1ea0) = (byte)local_2c;
    iVar7 = local_2c + 0x100;
    do {
      local_18 = local_18 + fVar3;
      fVar11 = (float10)local_1c + (float10)fVar4;
      local_1c = (float)fVar11;
      fVar12 = (float10)local_18;
      FUN_00563a30(10,0xf5);
      FUN_00563a30();
      uVar6 = FUN_00563a30((int)ROUND(fVar11));
      iVar8 = iVar7 + 0x100;
      uVar5 = FUN_00401850((int)ROUND(fVar12),uVar6);
      *(byte *)(iVar7 + 0x1bd1ea0) = uVar5;
      iVar7 = iVar8;
    } while (iVar8 != iVar9);
    iVar10 = iVar10 + 3;
    local_2c = local_2c + 1;
    iVar9 = iVar9 + 1;
  } while (local_2c < 0x100);
  local_2c = 0;
  do {
    *(byte *)(local_2c + 0x1bd1da0) = *(byte *)(local_2c + 0x1bd1ea0);
    iVar9 = local_2c + 1;
    *(byte *)(local_2c + 0x1bd2da0) = (byte)param_1;
    *(byte *)(local_2c + 0x1bd2ea0) = (byte)param_1;
    local_2c = iVar9;
  } while (iVar9 < 0x100);
  return;
}
