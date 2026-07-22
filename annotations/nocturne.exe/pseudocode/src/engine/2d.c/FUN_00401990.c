// Name: engine_2d.c_FUN_00401990
// Address: 00401990
// Address Range: [[00401990, 00401bc5]]
// Convention: unknown
// Signature: void engine_2d_c_FUN_00401990(void)

#include "nocturne.h"

void engine_2d_c_FUN_00401990(void)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  int local_38;
  int local_34;
  int local_14;
  int local_10;
  
  local_34 = 0;
  local_38 = 0;
  do {
    bVar1 = (&DAT_01c00648)[local_38];
    uVar5 = (uint)bVar1;
    bVar2 = *(byte *)(local_38 + 0x1c00649);
    uVar6 = (uint)bVar2;
    bVar3 = *(byte *)(local_38 + 0x1c0064a);
    uVar7 = (uint)bVar3;
    local_14 = local_34;
    local_10 = local_34;
    iVar15 = 0;
    do {
      uVar9 = (uint)(byte)(&DAT_01c00648)[iVar15];
      uVar12 = (uint)*(byte *)(iVar15 + 0x1c0064a);
      uVar13 = (uint)*(byte *)(iVar15 + 0x1c00649);
      uVar8 = (uVar5 + uVar9) / 2;
      uVar11 = (uVar7 + uVar12) / 2;
      uVar14 = (uVar6 + uVar13) / 2;
      if (bVar3 == 0 && (bVar1 == 0 && bVar2 == 0)) {
        uVar8 = uVar9;
        uVar11 = uVar12;
        uVar14 = uVar13;
      }
      if ((uVar9 == 0 && uVar13 == 0) && uVar12 == 0) {
        uVar8 = uVar5;
        uVar11 = uVar7;
        uVar14 = uVar6;
      }
      uVar9 = uVar5 + uVar9;
      *(byte *)(local_14 + 0x1bd5520) =
           (&DAT_01bf7720)
           [((int)uVar11 >> 3) + ((int)uVar8 >> 3) * 0x400 + ((int)uVar14 >> 3) * 0x20];
      if (0xff < uVar9) {
        uVar9 = 0xff;
      }
      uVar13 = uVar6 + uVar13;
      if (0xff < uVar13) {
        uVar13 = 0xff;
      }
      uVar12 = uVar7 + uVar12;
      if (0xff < uVar12) {
        uVar12 = 0xff;
      }
      iVar15 = iVar15 + 3;
      *(byte *)(local_10 + 0x1be5520) =
           (&DAT_01bf7720)
           [((int)uVar12 >> 3) + ((int)uVar9 >> 3) * 0x400 + ((int)uVar13 >> 3) * 0x20];
      local_10 = local_10 + 1;
      local_14 = local_14 + 1;
    } while (iVar15 != 0x300);
    local_34 = local_34 + 0x100;
    local_38 = local_38 + 3;
  } while (local_34 != 0x10000);
  iVar15 = 0;
  iVar10 = 0;
  do {
    uVar4 = (byte)iVar15;
    *(byte *)(iVar10 + 0x1be5520) = uVar4;
    *(byte *)(iVar10 + 0x1bd5520) = uVar4;
    *(byte *)(iVar15 + 0x1be5520) = uVar4;
    iVar15 = iVar15 + 1;
    iVar10 = iVar10 + 0x100;
  } while (iVar15 < 0x100);
  return;
}
