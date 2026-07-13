// Name: FUN_00546e10
// Address: 00546e10
// Address Range: [[00546e10, 00547660]]
// Convention: unknown
// Signature: void FUN_00546e10(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00546e10(int param_1,float param_2)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  float *pfVar8;
  uint *puVar9;
  uint *puVar10;
  byte bVar11;
  byte local_1a8 [48];
  uint local_178 [12];
  uint local_148 [12];
  byte local_118 [48];
  float local_e8;
  float local_e4;
  float local_e0;
  float local_dc;
  float local_d8;
  float local_d4;
  uint local_d0;
  uint local_cc;
  uint local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  byte local_88 [12];
  float local_7c;
  float local_78;
  float local_74;
  byte local_70 [12];
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  uint *local_18;
  float local_14;
  
  bVar11 = 0;
  iVar6 = FUN_004b45b0((uint *)(param_1 + 0x20),0x42c80000);
  if (iVar6 == 0) {
    iVar6 = FUN_004b45b0((uint *)(param_1 + 0x2cc),0x42c80000);
    if (iVar6 != 0) {
      return;
    }
    *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x2cc);
    *(uint *)(param_1 + 0x24) = *(uint *)(param_1 + 0x2d0);
    *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x2d4);
    return;
  }
  local_14 = (float)FUN_0040dda0(0xbd4ccccd,0x3d4ccccd);
  *(float *)(param_1 + 0x2f8) = local_14 + *(float *)(param_1 + 0x2f8);
  local_14 = (float)FUN_0040dda0(0xbd4ccccd,0x3d4ccccd);
  *(float *)(param_1 + 0x2fc) = local_14 + *(float *)(param_1 + 0x2fc);
  local_14 = (float)FUN_0040dda0(0xbd4ccccd,0x3d4ccccd);
  *(float *)(param_1 + 0x300) = local_14 + *(float *)(param_1 + 0x300);
  iVar6 = 0x01E57284;
  local_d0 = 0x40800000;
  local_cc = 0;
  local_c8 = 0;
  if ((uint *)(0x01E57284 + 0x15a878) != &local_d0) {
    *(uint *)(0x01E57284 + 0x15a878) = 0x40800000;
    *(uint *)(iVar6 + 0x15a87c) = 0;
    *(uint *)(iVar6 + 0x15a880) = 0;
  }
  fVar3 = *(float *)(param_1 + 0x30c) - param_2;
  *(float *)(param_1 + 0x30c) = fVar3;
  iVar6 = 0x01E57284;
  if (fVar3 <= 0.0) {
    if ((uint *)(param_1 + 0x310) != (uint *)(0x01E57284 + 0x15a878)) {
      *(uint *)(param_1 + 0x310) = *(uint *)(0x01E57284 + 0x15a878);
      *(uint *)(param_1 + 0x314) = *(uint *)(iVar6 + 0x15a87c);
      *(uint *)(param_1 + 0x318) = *(uint *)(iVar6 + 0x15a880);
    }
    local_14 = (float)FUN_0040dda0(0xc1200000,0x41200000);
    *(float *)(param_1 + 0x310) = local_14 + *(float *)(param_1 + 0x310);
    local_14 = (float)FUN_0040dda0(0x41700000,0x41c80000);
    *(float *)(param_1 + 0x314) = local_14 + *(float *)(param_1 + 0x314);
    local_14 = (float)FUN_0040dda0(0xc1200000,0x41200000);
    *(float *)(param_1 + 0x318) = local_14 + *(float *)(param_1 + 0x318);
    uVar7 = FUN_0040dda0(0x40c00000,0x41a00000);
    *(uint *)(param_1 + 0x30c) = uVar7;
  }
  pfVar1 = (float *)(param_1 + 0x310);
  local_28 = *(float *)(0x01E57284 + 0x15a878) - *pfVar1;
  local_24 = *(float *)(0x01E57284 + 0x15a87c) - *(float *)(param_1 + 0x314);
  local_ac = local_28 * _DAT_00596953;
  local_20 = *(float *)(0x01E57284 + 0x15a880) - *(float *)(param_1 + 0x318);
  local_a8 = local_24 * _DAT_00596953;
  local_a4 = local_20 * _DAT_00596953;
  pfVar8 = (float *)(param_1 + 0x2f8);
  *pfVar1 = *pfVar1 + local_ac;
  *(float *)(param_1 + 0x314) = *(float *)(param_1 + 0x314) + local_a8;
  *(float *)(param_1 + 0x318) = *(float *)(param_1 + 0x318) + local_a4;
  local_94 = *pfVar1 - *pfVar8;
  local_90 = *(float *)(param_1 + 0x314) - *(float *)(param_1 + 0x2fc);
  local_40 = local_94 * _DAT_00596957;
  local_8c = *(float *)(param_1 + 0x318) - *(float *)(param_1 + 0x300);
  local_3c = local_90 * _DAT_00596957;
  local_38 = local_8c * _DAT_00596957;
  *pfVar8 = *pfVar8 + local_40;
  *(float *)(param_1 + 0x2fc) = *(float *)(param_1 + 0x2fc) + local_3c;
  *(float *)(param_1 + 0x300) = *(float *)(param_1 + 0x300) + local_38;
  local_c4 = *(float *)(param_1 + 0x20);
  local_c0 = *(float *)(param_1 + 0x24);
  local_bc = *(float *)(param_1 + 0x28);
  local_14 = -*(float *)(param_1 + 0x31c);
  pfVar1 = (float *)(param_1 + 0x2e0);
  local_e8 = *pfVar8 - *pfVar1;
  local_e4 = *(float *)(param_1 + 0x2fc) - *(float *)(param_1 + 0x2e4);
  pfVar2 = (float *)(param_1 + 0x304);
  local_e0 = *(float *)(param_1 + 0x300) - *(float *)(param_1 + 0x2e8);
  local_dc = local_e8 * *pfVar2;
  local_48 = local_e4 * *pfVar2;
  local_d4 = local_e0 * *pfVar2;
  local_d8 = local_14 + local_48;
  local_4c = local_dc;
  local_44 = local_d4;
  pfVar8 = (float *)FUN_0040a220(param_1,local_70,pfVar8);
  local_a0 = *pfVar8 * _DAT_0059695b;
  local_9c = pfVar8[1] * _DAT_0059695b;
  local_98 = _DAT_0059695b * pfVar8[2];
  pfVar8 = (float *)(param_1 + 0x2ec);
  fVar3 = *(float *)(param_1 + 0x2f0) * _DAT_0059695f;
  fVar4 = *(float *)(param_1 + 0x2f4) * _DAT_0059695f;
  *pfVar8 = *pfVar8 * _DAT_0059695f;
  *(float *)(param_1 + 0x2f0) = fVar3;
  *(float *)(param_1 + 0x2f4) = fVar4;
  *pfVar8 = *pfVar8 + local_a0;
  *(float *)(param_1 + 0x2f0) = *(float *)(param_1 + 0x2f0) + local_9c;
  *(float *)(param_1 + 0x2f4) = *(float *)(param_1 + 0x2f4) + local_98;
  local_7c = local_dc * param_2;
  local_78 = local_d8 * param_2;
  local_74 = local_d4 * param_2;
  *pfVar1 = *pfVar1 + local_7c;
  *(float *)(param_1 + 0x2e4) = *(float *)(param_1 + 0x2e4) + local_78;
  *(float *)(param_1 + 0x2e8) = *(float *)(param_1 + 0x2e8) + local_74;
  fVar3 = SQRT(*(float *)(param_1 + 0x2f4) * *(float *)(param_1 + 0x2f4) +
               *pfVar8 * *pfVar8 + *(float *)(param_1 + 0x2f0) * *(float *)(param_1 + 0x2f0)) *
          (float)_DAT_00596963;
  if (1.0 < fVar3) {
    fVar3 = 1.0 / fVar3;
    *pfVar8 = *pfVar8 * fVar3;
    *(float *)(param_1 + 0x2f0) = *(float *)(param_1 + 0x2f0) * fVar3;
    *(float *)(param_1 + 0x2f4) = *(float *)(param_1 + 0x2f4) * fVar3;
  }
  local_58 = *(float *)(param_1 + 0x2e0) * param_2;
  local_54 = *(float *)(param_1 + 0x2e4) * param_2;
  local_50 = *(float *)(param_1 + 0x2e8) * param_2;
  local_34 = *(float *)(param_1 + 0x2ec) * param_2;
  local_30 = *(float *)(param_1 + 0x2f0) * param_2;
  local_2c = param_2 * *(float *)(param_1 + 0x2f4);
  local_14 = (float)FUN_00510a40(0x01E57284,*(uint *)(param_1 + 0x20),
                                 *(uint *)(param_1 + 0x28),local_58,local_50,
                                 *(uint *)(param_1 + 0x308),*(uint *)(param_1 + 0x2d8),
                                 *(uint *)(param_1 + 0x2dc));
  bVar5 = false;
  if ((0.0 <= local_14) && (local_14 < 1.0)) {
    local_58 = local_58 * local_14;
    local_54 = local_54 * local_14;
    local_50 = local_50 * local_14;
    bVar5 = true;
  }
  pfVar1 = (float *)(param_1 + 0x20);
  *pfVar1 = *pfVar1 + local_58;
  *(float *)(param_1 + 0x24) = *(float *)(param_1 + 0x24) + local_54;
  *(float *)(param_1 + 0x28) = *(float *)(param_1 + 0x28) + local_50;
  local_1c = (float)FUN_0050ec80(0x01E57284,pfVar1,
                                 *(float *)(param_1 + 0x308) * (float)_DAT_0059696b);
  if (local_1c <= *(float *)(param_1 + 0x24)) {
    if (!bVar5) goto LAB_005474f0;
  }
  else {
    fVar3 = (float)_DAT_00596973;
    *(float *)(param_1 + 0x24) = local_1c;
    if (*(float *)(param_1 + 0x308) * fVar3 + local_c0 < *(float *)(param_1 + 0x24)) {
      *pfVar1 = local_c4;
      *(float *)(param_1 + 0x24) = local_c0;
      *(float *)(param_1 + 0x28) = local_bc;
    }
  }
  fVar3 = *(float *)(param_1 + 0x2f0) * (float)"?333?CTrigger"._1_4_;
  fVar4 = *(float *)(param_1 + 0x2f4) * (float)"?333?CTrigger"._1_4_;
  *(float *)(param_1 + 0x2ec) = *(float *)(param_1 + 0x2ec) * (float)"?333?CTrigger"._1_4_;
  *(float *)(param_1 + 0x2f0) = fVar3;
  *(float *)(param_1 + 0x2f4) = fVar4;
LAB_005474f0:
  local_64 = *(float *)(param_1 + 0x20) - local_c4;
  local_60 = *(float *)(param_1 + 0x24) - local_c0;
  local_b0 = 1.0 / param_2;
  local_b8 = local_64 * local_b0;
  local_5c = *(float *)(param_1 + 0x28) - local_bc;
  local_b4 = local_60 * local_b0;
  local_b0 = local_5c * local_b0;
  if ((float *)(param_1 + 0x2e0) != &local_b8) {
    *(float *)(param_1 + 0x2e0) = local_b8;
    *(float *)(param_1 + 0x2e4) = local_b4;
    *(float *)(param_1 + 0x2e8) = local_b0;
  }
  local_18 = (uint *)(param_1 + 0x30);
  local_14 = local_1c;
  FUN_0055afb0(local_1a8,&DAT_02dd1184,local_18);
  FUN_0055afb0(local_118,&DAT_02dd1184,&local_34);
  FUN_0055aa00(local_118,local_1a8);
  puVar9 = local_178;
  puVar10 = local_148;
  for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar10 = *puVar9;
    puVar9 = puVar9 + (uint)bVar11 * -2 + 1;
    puVar10 = puVar10 + (uint)bVar11 * -2 + 1;
  }
  puVar9 = (uint *)FUN_0055b180(local_148,local_88);
  if (puVar9 != local_18) {
    *local_18 = *puVar9;
    local_18[1] = puVar9[1];
    local_18[2] = puVar9[2];
  }
  FUN_0040a000(param_1);
  return;
}
