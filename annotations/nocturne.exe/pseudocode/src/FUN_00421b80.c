// Name: FUN_00421b80
// Address: 00421b80
// Address Range: [[00421b80, 00421ef1]]
// Convention: unknown
// Signature: void FUN_00421b80(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00421b80(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint unaff_ESI;
  uint *puVar9;
  uint unaff_EDI;
  uint *puVar10;
  int iVar11;
  byte bVar12;
  float10 fVar13;
  float10 fVar14;
  float10 fVar15;
  double dVar16;
  ulonglong uVar17;
  float local_4c;
  uint local_48;
  float local_44;
  double local_40;
  byte local_38 [4];
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  float local_c;
  
  bVar12 = 0;
  local_c = 1.0 / _DAT_0059aea8;
  fVar2 = (*(float *)(param_1 + 0x1983c) + *(float *)(param_1 + 0x19848)) * _DAT_00579d09;
  fVar1 = *(float *)(param_1 + 0x28);
  local_40 = (double)FUN_005648c0((double)((*(float *)(param_1 + 0x20) +
                                           (*(float *)(param_1 + 0x19834) +
                                           *(float *)(param_1 + 0x19840)) * _DAT_00579d09) * local_c
                                          ));
  fVar13 = (float10)local_40;
  fVar14 = (float10)(fVar1 + fVar2) * (float10)local_c;
  FUN_00563a30();
  local_34 = (int)ROUND(fVar13);
  dVar16 = (double)FUN_005648c0((double)fVar14);
  fVar14 = (float10)dVar16;
  local_c = (float)local_34;
  fVar13 = (float10)local_34 * (float10)_DAT_0059aea8;
  local_40 = dVar16;
  FUN_00563a30();
  local_10 = (int)ROUND(fVar14);
  fVar14 = (float10)_DAT_0059aea8;
  fVar15 = (float10)_DAT_0059aea8 * (float10)_DAT_00579d0d * (float10)_DAT_00579d15;
  *(float *)(param_1 + 0x19854) = (float)((fVar13 - (float10)*(float *)(param_1 + 0x20)) - fVar15);
  *(float *)(param_1 + 0x19858) =
       (float)(((float10)local_10 * fVar14 - (float10)*(float *)(param_1 + 0x28)) - fVar15);
  if ((local_34 != *(int *)(param_1 + 0x1984c)) || (local_10 != *(int *)(param_1 + 0x19850))) {
    uVar17 = CONCAT44(unaff_EDI,unaff_ESI);
    local_18 = *(int *)(param_1 + 0x1984c) - local_34;
    local_1c = *(int *)(param_1 + 0x19850) - local_10;
    local_24 = local_18 + 0xb;
    local_20 = local_1c + 0xb;
    puVar9 = (uint *)(param_1 + 0x12720);
    puVar10 = &DAT_00764b58;
    for (iVar6 = 0x90; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar10 = *puVar9;
      puVar9 = puVar9 + (uint)bVar12 * -2 + 1;
      puVar10 = puVar10 + (uint)bVar12 * -2 + 1;
    }
    for (iVar6 = 0; iVar6 != 0; iVar6 = iVar6 + -1) {
      *(byte *)puVar10 = *(byte *)puVar9;
      puVar9 = (uint *)((int)puVar9 + (uint)bVar12 * -2 + 1);
      puVar10 = (uint *)((int)puVar10 + (uint)bVar12 * -2 + 1);
    }
    fVar3 = *(float *)(param_1 + 0x20);
    local_48 = *(uint *)(param_1 + 0x24);
    fVar4 = *(float *)(param_1 + 0x28);
    fVar1 = *(float *)(param_1 + 0x19854);
    fVar2 = *(float *)(param_1 + 0x19858);
    local_28 = param_1;
    local_2c = local_18 * -0x30;
    local_30 = local_1c * 4;
    local_14 = 0;
    do {
      iVar7 = 0;
      local_4c = (float)local_14 * _DAT_0059aea8 + fVar3 + fVar1;
      iVar8 = local_2c - local_30;
      iVar6 = local_28;
      iVar11 = local_28;
      do {
        local_44 = (float)iVar7 * _DAT_0059aea8 + fVar4 + fVar2;
        if ((((local_14 < local_18) || (local_24 < local_14)) || (iVar7 < local_1c)) ||
           (local_20 < iVar7)) {
          local_c = (float)iVar7;
          fVar5 = (float)FUN_00468580(&DAT_01fba938,&local_4c,local_38,0,uVar17);
          *(float *)(iVar11 + 0x12720) = fVar5 - *(float *)(param_1 + 0x24);
        }
        else {
          *(uint *)(iVar6 + 0x12720) = *(uint *)((int)&DAT_00764b58 + iVar8);
        }
        iVar6 = iVar6 + 4;
        iVar8 = iVar8 + 4;
        iVar7 = iVar7 + 1;
        iVar11 = iVar11 + 4;
      } while (iVar7 < 0xc);
      local_2c = local_2c + 0x30;
      local_14 = local_14 + 1;
      local_28 = local_28 + 0x30;
    } while (local_14 < 0xc);
    *(int *)(param_1 + 0x1984c) = local_34;
    *(int *)(param_1 + 0x19850) = local_10;
  }
  return;
}
