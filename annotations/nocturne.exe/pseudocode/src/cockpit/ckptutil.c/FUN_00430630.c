// Name: cockpit_ckptutil.c_FUN_00430630
// Address: 00430630
// Address Range: [[00430630, 004310ed]]
// Convention: unknown
// Signature: void * cockpit_ckptutil_c_FUN_00430630(int param_1,int *param_2,void *param_3,int *param_4,int param_5,int param_6,int param_7,int param_8,int param_9)

#include "nocturne.h"

void * cockpit_ckptutil_c_FUN_00430630(int param_1,int *param_2,void *param_3,int *param_4,int param_5,int param_6,int param_7,int param_8,int param_9)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  ushort *puVar4;
  int iVar5;
  void *pvVar6;
  ushort uVar7;
  ushort uVar8;
  ushort uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  uint *puVar13;
  int iVar14;
  int iVar15;
  ulong new_size;
  uint *puVar16;
  byte bVar17;
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
  
  bVar17 = 0;
  uVar10 = 0;
  if (param_1 == 0) {
    return (void *)0x0;
  }
  local_48 = param_5 + -1;
  local_ec = param_6 + -1;
  iVar12 = 0;
  local_e8 = param_2;
  if (0 < local_ec) {
    do {
      local_dc = iVar12 + 1;
      local_cc = iVar12 * 0x84;
      local_e0 = 0;
      local_34 = param_2 + local_dc * 0x21;
      local_e4 = local_e8;
      local_80 = local_dc;
      local_70 = local_dc;
      local_68 = local_dc;
      local_2c = local_dc;
      for (local_20 = 0; piVar3 = (int *)((int)param_2 + local_cc), local_20 < *piVar3;
          local_20 = local_20 + 1) {
        iVar2 = *(int *)((int)piVar3 + local_e0 + 4);
        iVar14 = *(int *)((int)piVar3 + local_e0 + 0x44) + iVar2;
        iVar15 = iVar14 + -1;
        if (0x1ff < (int)uVar10) {
          _sprintf(local_1f4,"Reached max trace edges: edges %d, scanline %d",uVar10,iVar12);
          g_CHAR_PTR_01cc4800 = "..\\cockpit\\ckptutil.c";
          g_INT_01cc4804 = 0x87e;
          core_main_c_FUN_004c8440(local_1f4);
        }
        uVar7 = (ushort)iVar12;
        if (0 < iVar2) {
          local_d4 = iVar2 + 1;
          local_d8 = iVar2 + -1;
          local_ac = 0;
          local_c4 = 0;
          local_24 = local_e4;
          local_a8 = local_34;
          while( true ) {
            piVar3 = param_2 + local_2c * 0x21;
            if (*piVar3 <= local_ac) break;
            iVar5 = *(int *)((int)piVar3 + local_c4 + 4);
            local_74 = *(int *)((int)piVar3 + local_c4 + 0x44) + iVar5 + -1;
            local_38 = 0;
            if (0 < local_20) {
              local_44 = *local_e4;
              local_58 = local_44 + local_e4[0x10] + -1;
              if (iVar5 < local_58) {
                local_38 = 1;
              }
            }
            uVar9 = (ushort)iVar2;
            uVar8 = (ushort)iVar5;
            if ((iVar5 < local_d8) && (iVar2 <= local_74)) {
              iVar1 = uVar10 * 8;
              uVar11 = uVar10 + 1;
              puVar4 = &DAT_00765c6c + uVar10 * 4;
              local_1c = uVar11;
              if (local_38 != 0) {
                if (param_7 < (iVar2 - local_58) + -1) goto LAB_00430aa0;
                local_98 = 0;
                *puVar4 = 0;
                *puVar4 = (ushort)local_58;
                (&DAT_00765c6e)[uVar10 * 4] = 0;
                (&DAT_00765c6e)[uVar10 * 4] = uVar7;
                (&DAT_00765c70)[uVar10 * 4] = 0;
                uVar8 = (&DAT_00765c72)[uVar10 * 4];
                (&DAT_00765c70)[uVar10 * 4] = uVar9;
                (&DAT_00765c72)[uVar10 * 4] = uVar8 & 0x8000;
                (&DAT_00765c72)[uVar10 * 4] = uVar8 & 0x8000 | uVar7 & 0x7fff;
                *(byte *)((int)&DAT_00765c72 + iVar1 + 1) =
                     *(byte *)((int)&DAT_00765c72 + iVar1 + 1) & 0x7f;
                uVar8 = (&DAT_00765c72)[uVar10 * 4];
                local_a0 = iVar2;
                local_9c = iVar12;
                goto LAB_00430932;
              }
              local_b8 = local_dc;
              *puVar4 = 0;
              *puVar4 = uVar9;
              (&DAT_00765c6e)[uVar10 * 4] = 0;
              (&DAT_00765c6e)[uVar10 * 4] = uVar7;
              (&DAT_00765c70)[uVar10 * 4] = 0;
              uVar9 = (&DAT_00765c72)[uVar10 * 4];
              (&DAT_00765c70)[uVar10 * 4] = uVar8;
              (&DAT_00765c72)[uVar10 * 4] = uVar9 & 0x8000;
              (&DAT_00765c72)[uVar10 * 4] = uVar9 & 0x8000 | (ushort)local_dc & 0x7fff;
              *(byte *)((int)&DAT_00765c72 + iVar1 + 1) =
                   *(byte *)((int)&DAT_00765c72 + iVar1 + 1) & 0x7f;
              (&DAT_00765c72)[uVar10 * 4] = (&DAT_00765c72)[uVar10 * 4];
              local_c0 = iVar5;
              local_b0 = local_38;
            }
            else {
LAB_00430aa0:
              local_bc = 0;
              if (0 < local_ac) {
                local_44 = *local_a8;
                local_18 = local_44 + local_a8[0x10] + -1;
                if (iVar2 < local_18) {
                  local_bc = 1;
                }
              }
              uVar11 = uVar10;
              if ((local_d4 < iVar5) && (iVar5 <= iVar15)) {
                if ((local_bc == 0) && ((iVar5 - iVar2) + 1 <= param_9)) {
                  local_8c = local_80;
                  local_88 = 1;
                  puVar4 = &DAT_00765c6c + uVar10 * 4;
                  *puVar4 = 0;
                  *puVar4 = uVar9;
                  (&DAT_00765c6e)[uVar10 * 4] = 0;
                  (&DAT_00765c6e)[uVar10 * 4] = uVar7;
                  (&DAT_00765c70)[uVar10 * 4] = 0;
                  (&DAT_00765c70)[uVar10 * 4] = uVar8;
                  uVar8 = (&DAT_00765c72)[uVar10 * 4];
                  (&DAT_00765c72)[uVar10 * 4] = uVar8 & 0x8000;
                  (&DAT_00765c72)[uVar10 * 4] = uVar8 & 0x8000 | (ushort)local_80 & 0x7fff;
                  *(byte *)((int)&DAT_00765c72 + uVar10 * 8 + 1) =
                       *(byte *)((int)&DAT_00765c72 + uVar10 * 8 + 1) & 0x7f;
                  uVar8 = (&DAT_00765c72)[uVar10 * 4] | 0x8000;
                  local_94 = iVar12;
                  local_90 = iVar5;
                }
                else {
                  if ((local_bc == 0) || (param_8 < (iVar5 - local_18) + -1)) goto LAB_00430936;
                  local_84 = local_18;
                  local_a4 = local_70;
                  local_78 = 1;
                  puVar4 = &DAT_00765c6c + uVar10 * 4;
                  *puVar4 = 0;
                  *puVar4 = *puVar4 | (ushort)local_18;
                  (&DAT_00765c6e)[uVar10 * 4] = 0;
                  (&DAT_00765c6e)[uVar10 * 4] = (&DAT_00765c6e)[uVar10 * 4] | (ushort)local_70;
                  (&DAT_00765c70)[uVar10 * 4] = 0;
                  (&DAT_00765c70)[uVar10 * 4] = (&DAT_00765c70)[uVar10 * 4] | uVar8;
                  uVar8 = (&DAT_00765c72)[uVar10 * 4];
                  (&DAT_00765c72)[uVar10 * 4] = uVar8 & 0x8000;
                  (&DAT_00765c72)[uVar10 * 4] = uVar8 & 0x8000 | (ushort)local_70 & 0x7fff;
                  *(byte *)((int)&DAT_00765c72 + uVar10 * 8 + 1) =
                       *(byte *)((int)&DAT_00765c72 + uVar10 * 8 + 1) & 0x7f;
                  uVar8 = (&DAT_00765c72)[uVar10 * 4] | 0x8000;
                  local_7c = iVar5;
                  local_14 = iVar5;
                }
LAB_00430932:
                puVar4[3] = uVar8;
                uVar11 = uVar10 + 1;
              }
            }
LAB_00430936:
            local_c4 = local_c4 + 4;
            local_ac = local_ac + 1;
            local_a8 = local_a8 + 1;
            uVar10 = uVar11;
          }
        }
        if (0x1ff < (int)uVar10) {
          _sprintf(local_1f4,"Reached max trace edges: edges %d, scanline %d",uVar10,iVar12);
          g_CHAR_PTR_01cc4800 = "..\\cockpit\\ckptutil.c";
          g_INT_01cc4804 = 0x8b8;
          core_main_c_FUN_004c8440(local_1f4);
        }
        if (iVar15 < local_48) {
          local_30 = iVar14 + -2;
          local_28 = local_e0;
          local_50 = 0;
          for (local_b4 = 0; piVar3 = param_2 + local_2c * 0x21, local_d0 = iVar14,
              local_b4 < *piVar3; local_b4 = local_b4 + 1) {
            local_40 = *(int *)((int)piVar3 + local_50 + 4);
            local_60 = 0;
            local_44 = *(int *)((int)param_2 + local_cc) + -1;
            iVar5 = local_40 + *(int *)((int)piVar3 + local_50 + 0x44) + -1;
            if ((local_20 < local_44) && (*(int *)((int)param_2 + local_cc + local_e0 + 8) < iVar5))
            {
              local_60 = 1;
            }
            if (((iVar14 < iVar5) && (local_40 <= iVar15)) && (local_60 == 0)) {
              local_5c = local_68;
              (&DAT_00765c6c)[uVar10 * 4] = 0;
              (&DAT_00765c6c)[uVar10 * 4] = (ushort)iVar15;
              (&DAT_00765c6e)[uVar10 * 4] = 0;
              (&DAT_00765c6e)[uVar10 * 4] = uVar7;
              (&DAT_00765c70)[uVar10 * 4] = 0;
              (&DAT_00765c70)[uVar10 * 4] = (ushort)iVar5;
              uVar8 = (&DAT_00765c72)[uVar10 * 4];
              (&DAT_00765c72)[uVar10 * 4] = uVar8 & 0x8000;
              (&DAT_00765c72)[uVar10 * 4] = uVar8 & 0x8000 | (ushort)local_68 & 0x7fff;
              *(byte *)((int)&DAT_00765c72 + uVar10 * 8 + 1) =
                   *(byte *)((int)&DAT_00765c72 + uVar10 * 8 + 1) & 0x7f;
              uVar11 = uVar10 + 1;
              (&DAT_00765c72)[uVar10 * 4] = (&DAT_00765c72)[uVar10 * 4];
              local_6c = iVar12;
              local_64 = iVar5;
              local_54 = local_60;
            }
            else {
              local_c8 = 0;
              local_44 = param_2[local_2c * 0x21] + -1;
              if ((local_b4 < local_44) &&
                 (*(int *)((int)(param_2 + local_2c * 0x21) + local_50 + 8) < iVar15)) {
                local_c8 = 1;
              }
              uVar11 = uVar10;
              if (((iVar5 < local_30) && (iVar2 <= iVar5)) &&
                 ((local_c8 == 0 && ((iVar15 - iVar5) + 1 <= param_9)))) {
                local_3c = 1;
                puVar4 = &DAT_00765c6c + uVar10 * 4;
                *puVar4 = 0;
                *puVar4 = *puVar4 | (ushort)iVar15;
                (&DAT_00765c6e)[uVar10 * 4] = 0;
                (&DAT_00765c6e)[uVar10 * 4] = (&DAT_00765c6e)[uVar10 * 4] | uVar7;
                (&DAT_00765c70)[uVar10 * 4] = 0;
                (&DAT_00765c70)[uVar10 * 4] = (&DAT_00765c70)[uVar10 * 4] | (ushort)iVar5;
                uVar8 = (&DAT_00765c72)[uVar10 * 4];
                (&DAT_00765c72)[uVar10 * 4] = uVar8 & 0x8000;
                (&DAT_00765c72)[uVar10 * 4] = uVar8 & 0x8000 | (ushort)local_2c & 0x7fff;
                *(byte *)((int)&DAT_00765c72 + uVar10 * 8 + 1) =
                     *(byte *)((int)&DAT_00765c72 + uVar10 * 8 + 1) & 0x7f;
                uVar11 = uVar10 + 1;
                (&DAT_00765c72)[uVar10 * 4] = (&DAT_00765c72)[uVar10 * 4] | 0x8000;
                local_f4 = iVar15;
                local_f0 = iVar12;
                local_4c = iVar5;
                local_14 = iVar5;
              }
            }
            local_50 = local_50 + 4;
            uVar10 = uVar11;
          }
        }
        local_e0 = local_e0 + 4;
        local_e4 = local_e4 + 1;
      }
      local_e8 = local_e8 + 0x21;
      iVar12 = iVar12 + 1;
    } while (iVar12 < local_ec);
  }
  if (uVar10 == 0) {
    if (param_3 == (void *)0x0) {
      *param_4 = 0;
    }
    return param_3;
  }
  if (param_3 == (void *)0x0) {
    *param_4 = 0;
  }
  new_size = *param_4 * 8 + uVar10 * 8;
  pvVar6 = realloc(param_3,new_size);
  if (pvVar6 == (void *)0x0) {
    _sprintf(local_1f4,"Unable to allocate %u bytes for edge list.",new_size);
    g_CHAR_PTR_01cc4800 = "..\\cockpit\\ckptutil.c";
    g_INT_01cc4804 = 0x8f7;
    core_main_c_FUN_004c8440(local_1f4);
  }
  puVar13 = (uint *)&DAT_00765c6c;
  puVar16 = (uint *)(*param_4 * 8 + (int)pvVar6);
  for (iVar12 = (uVar10 & 0x1fffffff) << 1; iVar12 != 0; iVar12 = iVar12 + -1) {
    *puVar16 = *puVar13;
    puVar13 = puVar13 + (uint)bVar17 * -2 + 1;
    puVar16 = puVar16 + (uint)bVar17 * -2 + 1;
  }
  for (iVar12 = 0; iVar12 != 0; iVar12 = iVar12 + -1) {
    *(byte *)puVar16 = *(byte *)puVar13;
    puVar13 = (uint *)((int)puVar13 + (uint)bVar17 * -2 + 1);
    puVar16 = (uint *)((int)puVar16 + (uint)bVar17 * -2 + 1);
  }
  *param_4 = *param_4 + uVar10;
  return pvVar6;
}
