// Name: FUN_004031a0
// Address: 004031a0
// Address Range: [[004031a0, 00403452]]
// Convention: unknown
// Signature: void FUN_004031a0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004031a0(int param_1)

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
  float local_40;
  float local_2c;
  float local_24;
  float local_1c;
  int local_18;
  
  iVar9 = 0x1000;
  bVar1 = (&DAT_01c00648)[param_1 * 3];
  iVar10 = 0;
  local_18 = 0;
  bVar2 = *(byte *)(param_1 * 3 + 0x1c0064a);
  do {
    fVar3 = ((float)(byte)(&DAT_01c00648)[iVar10] - (float)bVar1) * _DAT_005771f4;
    fVar4 = ((float)*(byte *)(iVar10 + 0x1c0064a) - (float)bVar2) * _DAT_005771f4;
    local_1c = 0.0;
    local_24 = 0.0;
    iVar7 = local_18;
    do {
      local_1c = local_1c + fVar3;
      local_24 = local_24 + fVar4;
      if ((local_18 < 10) || (0xf5 < local_18)) {
        uVar5 = (byte)local_18;
      }
      else {
        fVar11 = (float10)local_24;
        fVar12 = (float10)local_1c;
        FUN_00563a30(0xf5);
        FUN_00563a30();
        uVar6 = FUN_00563a30((int)ROUND(fVar11),10);
        uVar5 = FUN_00401850((int)ROUND(fVar12),uVar6);
      }
      *(byte *)(iVar7 + 0x1bf5620) = uVar5;
      iVar7 = iVar7 + 0x100;
    } while (iVar7 != iVar9);
    local_40 = (float)(byte)(&DAT_01c00648)[iVar10];
    fVar4 = (_DAT_005771f8 - local_40) * _DAT_005771f4;
    local_2c = (float)*(byte *)(iVar10 + 0x1c0064a);
    fVar3 = (_DAT_005771f8 - local_2c) * _DAT_005771f4;
    iVar7 = local_18;
    do {
      local_40 = local_40 + fVar4;
      fVar11 = (float10)local_2c + (float10)fVar3;
      local_2c = (float)fVar11;
      fVar12 = (float10)local_40;
      FUN_00563a30(10,0xf5);
      FUN_00563a30();
      uVar6 = FUN_00563a30((int)ROUND(fVar11));
      iVar8 = iVar7 + 0x100;
      uVar5 = FUN_00401850((int)ROUND(fVar12),uVar6);
      *(byte *)(iVar7 + 0x1bf6620) = uVar5;
      iVar7 = iVar8;
    } while (iVar8 != iVar9);
    iVar10 = iVar10 + 3;
    local_18 = local_18 + 1;
    iVar9 = iVar9 + 1;
  } while (local_18 < 0x100);
  return;
}
