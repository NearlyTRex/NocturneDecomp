// Name: FUN_00430630
// Address: 00430630
// Address Range: [[00430630, 004310ed]]
// Convention: unknown
// Signature: int FUN_00430630(int param_1,int *param_2,int param_3,int *param_4,int param_5,int param_6,int param_7,int param_8,int param_9)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00430630(int param_1,int *param_2,int param_3,int *param_4,int param_5,int param_6,int param_7,int param_8,int param_9)

{
  int iVar1;
  int *piVar2;
  ushort *puVar3;
  int iVar4;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint *puVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  uint *puVar15;
  byte bVar16;
  byte local_1f4 [256];
  int local_f4;
  int local_f0;
  int local_ec;
  int *local_e8;
  int *local_e4;
  int local_e0;
  int local_dc;
  int local_d8;
  int local_d4;
  int local_d0;
  int local_cc;
  int local_c8;
  int local_c4;
  int local_c0;
  int local_bc;
  int local_b8;
  int local_b4;
  int local_b0;
  int local_ac;
  int *local_a8;
  int local_a4;
  int local_a0;
  int local_9c;
  uint local_98;
  int local_94;
  int local_90;
  int local_8c;
  uint local_88;
  int local_84;
  int local_80;
  int local_7c;
  uint local_78;
  int local_74;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  uint local_3c;
  int local_38;
  int *local_34;
  int local_30;
  int local_2c;
  int local_28;
  int *local_24;
  int local_20;
  uint local_1c;
  int local_18;
  int local_14;
  
  bVar16 = 0;
  uVar8 = 0;
  if (param_1 == 0) {
    return 0;
  }
  local_48 = param_5 + -1;
  local_ec = param_6 + -1;
  iVar10 = 0;
  local_e8 = param_2;
  if (0 < local_ec) {
    do {
      local_dc = iVar10 + 1;
      local_cc = iVar10 * 0x84;
      local_e0 = 0;
      local_34 = param_2 + local_dc * 0x21;
      local_e4 = local_e8;
      local_80 = local_dc;
      local_70 = local_dc;
      local_68 = local_dc;
      local_2c = local_dc;
      for (local_20 = 0; piVar2 = (int *)((int)param_2 + local_cc), local_20 < *piVar2;
          local_20 = local_20 + 1) {
        iVar14 = *(int *)((int)piVar2 + local_e0 + 4);
        iVar12 = *(int *)((int)piVar2 + local_e0 + 0x44) + iVar14;
        iVar13 = iVar12 + -1;
        if (0x1ff < (int)uVar8) {
          _sprintf(local_1f4,"Reached max trace edges: edges %d, scanline %d",uVar8,iVar10);
          _DAT_01cc4800 = "..\\cockpit\\ckptutil.c";
          _DAT_01cc4804 = 0x87e;
          FUN_004c8440(local_1f4);
        }
        uVar5 = (ushort)iVar10;
        if (0 < iVar14) {
          local_d4 = iVar14 + 1;
          local_d8 = iVar14 + -1;
          local_ac = 0;
          local_c4 = 0;
          local_24 = local_e4;
          local_a8 = local_34;
          while( true ) {
            piVar2 = param_2 + local_2c * 0x21;
            if (*piVar2 <= local_ac) break;
            iVar4 = *(int *)((int)piVar2 + local_c4 + 4);
            local_74 = *(int *)((int)piVar2 + local_c4 + 0x44) + iVar4 + -1;
            local_38 = 0;
            if (0 < local_20) {
              local_44 = *local_e4;
              local_58 = local_44 + local_e4[0x10] + -1;
              if (iVar4 < local_58) {
                local_38 = 1;
              }
            }
            uVar7 = (ushort)iVar14;
            uVar6 = (ushort)iVar4;
            if ((iVar4 < local_d8) && (iVar14 <= local_74)) {
              iVar1 = uVar8 * 8;
              uVar9 = uVar8 + 1;
              puVar3 = &DAT_00765c6c + uVar8 * 4;
              local_1c = uVar9;
              if (local_38 != 0) {
                if (param_7 < (iVar14 - local_58) + -1) goto LAB_00430aa0;
                local_98 = 0;
                *puVar3 = 0;
                *puVar3 = (ushort)local_58;
                (&DAT_00765c6e)[uVar8 * 4] = 0;
                (&DAT_00765c6e)[uVar8 * 4] = uVar5;
                (&DAT_00765c70)[uVar8 * 4] = 0;
                uVar6 = (&DAT_00765c72)[uVar8 * 4];
                (&DAT_00765c70)[uVar8 * 4] = uVar7;
                (&DAT_00765c72)[uVar8 * 4] = uVar6 & 0x8000;
                (&DAT_00765c72)[uVar8 * 4] = uVar6 & 0x8000 | uVar5 & 0x7fff;
                *(byte *)((int)&DAT_00765c72 + iVar1 + 1) =
                     *(byte *)((int)&DAT_00765c72 + iVar1 + 1) & 0x7f;
                uVar6 = (&DAT_00765c72)[uVar8 * 4];
                local_a0 = iVar14;
                local_9c = iVar10;
                goto LAB_00430932;
              }
              local_b8 = local_dc;
              *puVar3 = 0;
              *puVar3 = uVar7;
              (&DAT_00765c6e)[uVar8 * 4] = 0;
              (&DAT_00765c6e)[uVar8 * 4] = uVar5;
              (&DAT_00765c70)[uVar8 * 4] = 0;
              uVar7 = (&DAT_00765c72)[uVar8 * 4];
              (&DAT_00765c70)[uVar8 * 4] = uVar6;
              (&DAT_00765c72)[uVar8 * 4] = uVar7 & 0x8000;
              (&DAT_00765c72)[uVar8 * 4] = uVar7 & 0x8000 | (ushort)local_dc & 0x7fff;
              *(byte *)((int)&DAT_00765c72 + iVar1 + 1) =
                   *(byte *)((int)&DAT_00765c72 + iVar1 + 1) & 0x7f;
              (&DAT_00765c72)[uVar8 * 4] = (&DAT_00765c72)[uVar8 * 4];
              local_c0 = iVar4;
              local_b0 = local_38;
            }
            else {
LAB_00430aa0:
              local_bc = 0;
              if (0 < local_ac) {
                local_44 = *local_a8;
                local_18 = local_44 + local_a8[0x10] + -1;
                if (iVar14 < local_18) {
                  local_bc = 1;
                }
              }
              uVar9 = uVar8;
              if ((local_d4 < iVar4) && (iVar4 <= iVar13)) {
                if ((local_bc == 0) && ((iVar4 - iVar14) + 1 <= param_9)) {
                  local_8c = local_80;
                  local_88 = 1;
                  puVar3 = &DAT_00765c6c + uVar8 * 4;
                  *puVar3 = 0;
                  *puVar3 = uVar7;
                  (&DAT_00765c6e)[uVar8 * 4] = 0;
                  (&DAT_00765c6e)[uVar8 * 4] = uVar5;
                  (&DAT_00765c70)[uVar8 * 4] = 0;
                  (&DAT_00765c70)[uVar8 * 4] = uVar6;
                  uVar6 = (&DAT_00765c72)[uVar8 * 4];
                  (&DAT_00765c72)[uVar8 * 4] = uVar6 & 0x8000;
                  (&DAT_00765c72)[uVar8 * 4] = uVar6 & 0x8000 | (ushort)local_80 & 0x7fff;
                  *(byte *)((int)&DAT_00765c72 + uVar8 * 8 + 1) =
                       *(byte *)((int)&DAT_00765c72 + uVar8 * 8 + 1) & 0x7f;
                  uVar6 = (&DAT_00765c72)[uVar8 * 4] | 0x8000;
                  local_94 = iVar10;
                  local_90 = iVar4;
                }
                else {
                  if ((local_bc == 0) || (param_8 < (iVar4 - local_18) + -1)) goto LAB_00430936;
                  local_84 = local_18;
                  local_a4 = local_70;
                  local_78 = 1;
                  puVar3 = &DAT_00765c6c + uVar8 * 4;
                  *puVar3 = 0;
                  *puVar3 = *puVar3 | (ushort)local_18;
                  (&DAT_00765c6e)[uVar8 * 4] = 0;
                  (&DAT_00765c6e)[uVar8 * 4] = (&DAT_00765c6e)[uVar8 * 4] | (ushort)local_70;
                  (&DAT_00765c70)[uVar8 * 4] = 0;
                  (&DAT_00765c70)[uVar8 * 4] = (&DAT_00765c70)[uVar8 * 4] | uVar6;
                  uVar6 = (&DAT_00765c72)[uVar8 * 4];
                  (&DAT_00765c72)[uVar8 * 4] = uVar6 & 0x8000;
                  (&DAT_00765c72)[uVar8 * 4] = uVar6 & 0x8000 | (ushort)local_70 & 0x7fff;
                  *(byte *)((int)&DAT_00765c72 + uVar8 * 8 + 1) =
                       *(byte *)((int)&DAT_00765c72 + uVar8 * 8 + 1) & 0x7f;
                  uVar6 = (&DAT_00765c72)[uVar8 * 4] | 0x8000;
                  local_7c = iVar4;
                  local_14 = iVar4;
                }
LAB_00430932:
                puVar3[3] = uVar6;
                uVar9 = uVar8 + 1;
              }
            }
LAB_00430936:
            local_c4 = local_c4 + 4;
            local_ac = local_ac + 1;
            local_a8 = local_a8 + 1;
            uVar8 = uVar9;
          }
        }
        if (0x1ff < (int)uVar8) {
          _sprintf(local_1f4,"Reached max trace edges: edges %d, scanline %d",uVar8,iVar10);
          _DAT_01cc4800 = "..\\cockpit\\ckptutil.c";
          _DAT_01cc4804 = 0x8b8;
          FUN_004c8440(local_1f4);
        }
        if (iVar13 < local_48) {
          local_30 = iVar12 + -2;
          local_28 = local_e0;
          local_50 = 0;
          for (local_b4 = 0; piVar2 = param_2 + local_2c * 0x21, local_d0 = iVar12,
              local_b4 < *piVar2; local_b4 = local_b4 + 1) {
            local_40 = *(int *)((int)piVar2 + local_50 + 4);
            local_60 = 0;
            local_44 = *(int *)((int)param_2 + local_cc) + -1;
            iVar4 = local_40 + *(int *)((int)piVar2 + local_50 + 0x44) + -1;
            if ((local_20 < local_44) && (*(int *)((int)param_2 + local_cc + local_e0 + 8) < iVar4))
            {
              local_60 = 1;
            }
            if (((iVar12 < iVar4) && (local_40 <= iVar13)) && (local_60 == 0)) {
              local_5c = local_68;
              (&DAT_00765c6c)[uVar8 * 4] = 0;
              (&DAT_00765c6c)[uVar8 * 4] = (ushort)iVar13;
              (&DAT_00765c6e)[uVar8 * 4] = 0;
              (&DAT_00765c6e)[uVar8 * 4] = uVar5;
              (&DAT_00765c70)[uVar8 * 4] = 0;
              (&DAT_00765c70)[uVar8 * 4] = (ushort)iVar4;
              uVar6 = (&DAT_00765c72)[uVar8 * 4];
              (&DAT_00765c72)[uVar8 * 4] = uVar6 & 0x8000;
              (&DAT_00765c72)[uVar8 * 4] = uVar6 & 0x8000 | (ushort)local_68 & 0x7fff;
              *(byte *)((int)&DAT_00765c72 + uVar8 * 8 + 1) =
                   *(byte *)((int)&DAT_00765c72 + uVar8 * 8 + 1) & 0x7f;
              uVar9 = uVar8 + 1;
              (&DAT_00765c72)[uVar8 * 4] = (&DAT_00765c72)[uVar8 * 4];
              local_6c = iVar10;
              local_64 = iVar4;
              local_54 = local_60;
            }
            else {
              local_c8 = 0;
              local_44 = param_2[local_2c * 0x21] + -1;
              if ((local_b4 < local_44) &&
                 (*(int *)((int)(param_2 + local_2c * 0x21) + local_50 + 8) < iVar13)) {
                local_c8 = 1;
              }
              uVar9 = uVar8;
              if (((iVar4 < local_30) && (iVar14 <= iVar4)) &&
                 ((local_c8 == 0 && ((iVar13 - iVar4) + 1 <= param_9)))) {
                local_3c = 1;
                puVar3 = &DAT_00765c6c + uVar8 * 4;
                *puVar3 = 0;
                *puVar3 = *puVar3 | (ushort)iVar13;
                (&DAT_00765c6e)[uVar8 * 4] = 0;
                (&DAT_00765c6e)[uVar8 * 4] = (&DAT_00765c6e)[uVar8 * 4] | uVar5;
                (&DAT_00765c70)[uVar8 * 4] = 0;
                (&DAT_00765c70)[uVar8 * 4] = (&DAT_00765c70)[uVar8 * 4] | (ushort)iVar4;
                uVar6 = (&DAT_00765c72)[uVar8 * 4];
                (&DAT_00765c72)[uVar8 * 4] = uVar6 & 0x8000;
                (&DAT_00765c72)[uVar8 * 4] = uVar6 & 0x8000 | (ushort)local_2c & 0x7fff;
                *(byte *)((int)&DAT_00765c72 + uVar8 * 8 + 1) =
                     *(byte *)((int)&DAT_00765c72 + uVar8 * 8 + 1) & 0x7f;
                uVar9 = uVar8 + 1;
                (&DAT_00765c72)[uVar8 * 4] = (&DAT_00765c72)[uVar8 * 4] | 0x8000;
                local_f4 = iVar13;
                local_f0 = iVar10;
                local_4c = iVar4;
                local_14 = iVar4;
              }
            }
            local_50 = local_50 + 4;
            uVar8 = uVar9;
          }
        }
        local_e0 = local_e0 + 4;
        local_e4 = local_e4 + 1;
      }
      local_e8 = local_e8 + 0x21;
      iVar10 = iVar10 + 1;
    } while (iVar10 < local_ec);
  }
  if (uVar8 == 0) {
    if (param_3 == 0) {
      *param_4 = 0;
    }
    return param_3;
  }
  if (param_3 == 0) {
    *param_4 = 0;
  }
  iVar14 = *param_4 * 8 + uVar8 * 8;
  iVar10 = realloc(param_3,iVar14);
  if (iVar10 == 0) {
    _sprintf(local_1f4,"Unable to allocate %u bytes for edge list.",iVar14);
    _DAT_01cc4800 = "..\\cockpit\\ckptutil.c";
    _DAT_01cc4804 = 0x8f7;
    FUN_004c8440(local_1f4);
  }
  puVar11 = (uint *)&DAT_00765c6c;
  puVar15 = (uint *)(*param_4 * 8 + iVar10);
  for (iVar14 = (uVar8 & 0x1fffffff) << 1; iVar14 != 0; iVar14 = iVar14 + -1) {
    *puVar15 = *puVar11;
    puVar11 = puVar11 + (uint)bVar16 * -2 + 1;
    puVar15 = puVar15 + (uint)bVar16 * -2 + 1;
  }
  for (iVar14 = 0; iVar14 != 0; iVar14 = iVar14 + -1) {
    *(byte *)puVar15 = *(byte *)puVar11;
    puVar11 = (uint *)((int)puVar11 + (uint)bVar16 * -2 + 1);
    puVar15 = (uint *)((int)puVar15 + (uint)bVar16 * -2 + 1);
  }
  *param_4 = *param_4 + uVar8;
  return iVar10;
}
