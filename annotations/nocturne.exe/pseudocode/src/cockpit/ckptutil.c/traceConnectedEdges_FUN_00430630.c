// Name: cockpit_ckptutil.c_traceConnectedEdges_FUN_00430630
// Address: 00430630
// Address Range: [[00430630, 004310ed]]
// Convention: __cdecl
// Signature: SEdge * __cdecl cockpit_ckptutil_c_traceConnectedEdges_FUN_00430630(SEdgeList *edge_lists,SEdgeList *scanline_data,SEdge *existing_edges,int *max_x,int max_y,int gap_tolerance_x,int gap_tolerance_y,int gap_tolerance_connected,int gap_tolerance_horizontal)

#include "nocturne.h"

SEdge * __cdecl cockpit_ckptutil_c_traceConnectedEdges_FUN_00430630(SEdgeList *edge_lists,SEdgeList *scanline_data,SEdge *existing_edges,int *max_x,int max_y,int gap_tolerance_x,int gap_tolerance_y,int gap_tolerance_connected,int gap_tolerance_horizontal)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  ushort *puVar5;
  int iVar6;
  SEdge *pSVar7;
  ushort uVar8;
  ushort uVar9;
  ushort uVar10;
  int *piVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  uint *puVar15;
  int iVar16;
  int iVar17;
  ulong new_size;
  SEdge *pSVar18;
  byte bVar19;
  char local_1f4 [256];
  int local_f4;
  int local_f0;
  int local_ec;
  SEdgeList *local_e8;
  SEdgeList *local_e4;
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
  byte *local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  SEdge *local_44;
  int local_40;
  uint local_3c;
  int local_38;
  int *local_34;
  int local_30;
  int local_2c;
  int local_28;
  SEdgeList *local_24;
  int local_20;
  uint local_1c;
  int local_18;
  int local_14;
  
  bVar19 = 0;
  uVar12 = 0;
  if (edge_lists == (SEdgeList *)0x0) {
    return (SEdge *)0x0;
  }
  local_48 = max_y + -1;
  local_ec = gap_tolerance_x + -1;
  iVar14 = 0;
  local_e8 = scanline_data;
  if (0 < local_ec) {
    do {
      local_dc = iVar14 + 1;
      local_cc = iVar14 * 0x84;
      local_e0 = 0;
      local_34 = (int *)((int)scanline_data + local_dc * 0x84);
      local_e4 = local_e8;
      local_80 = local_dc;
      local_70 = local_dc;
      local_68 = local_dc;
      local_2c = local_dc;
      for (local_20 = 0; piVar4 = (int *)((int)&scanline_data->edge_data + local_cc),
          local_20 < *piVar4; local_20 = local_20 + 1) {
        iVar3 = *(int *)((int)piVar4 + local_e0 + 4);
        iVar16 = *(int *)((int)piVar4 + local_e0 + 0x44) + iVar3;
        iVar17 = iVar16 + -1;
        if (0x1ff < (int)uVar12) {
          _sprintf(local_1f4,"Reached max trace edges: edges %d, scanline %d",uVar12,iVar14);
          g_CurrentFilename = "..\\cockpit\\ckptutil.c";
          g_CurrentLineNumber = 2174;
          core_main_c_displayErrorAndQuit_FUN_004c8440(local_1f4);
        }
        uVar8 = (ushort)iVar14;
        if (0 < iVar3) {
          local_d4 = iVar3 + 1;
          local_d8 = iVar3 + -1;
          local_ac = 0;
          local_c4 = 0;
          local_24 = local_e4;
          local_a8 = local_34;
          while( true ) {
            piVar4 = (int *)(local_2c * 0x84 + (int)scanline_data);
            if (*piVar4 <= local_ac) break;
            iVar6 = *(int *)((int)piVar4 + local_c4 + 4);
            local_74 = *(int *)((int)piVar4 + local_c4 + 0x44) + iVar6 + -1;
            local_38 = 0;
            if (0 < local_20) {
              local_44 = local_e4->edge_data;
              local_58 = (byte *)
                         ((int)&(local_e4[8].edge_data)->x0 + (int)((int)&local_44[-1].y1 + 1));
              if (iVar6 < (int)local_58) {
                local_38 = 1;
              }
            }
            uVar10 = (ushort)iVar3;
            uVar9 = (ushort)iVar6;
            if ((iVar6 < local_d8) && (iVar3 <= local_74)) {
              iVar1 = uVar12 * 8;
              uVar13 = uVar12 + 1;
              puVar5 = &DAT_00765c6c + uVar12 * 4;
              local_1c = uVar13;
              if (local_38 != 0) {
                if (gap_tolerance_y < (iVar3 - (int)local_58) + -1) goto LAB_00430aa0;
                local_98 = 0;
                *puVar5 = 0;
                *puVar5 = (ushort)local_58;
                (&DAT_00765c6e)[uVar12 * 4] = 0;
                (&DAT_00765c6e)[uVar12 * 4] = uVar8;
                (&DAT_00765c70)[uVar12 * 4] = 0;
                uVar9 = (&DAT_00765c72)[uVar12 * 4];
                (&DAT_00765c70)[uVar12 * 4] = uVar10;
                (&DAT_00765c72)[uVar12 * 4] = uVar9 & 0x8000;
                (&DAT_00765c72)[uVar12 * 4] = uVar9 & 0x8000 | uVar8 & 0x7fff;
                *(byte *)((int)&DAT_00765c72 + iVar1 + 1) =
                     *(byte *)((int)&DAT_00765c72 + iVar1 + 1) & 0x7f;
                uVar9 = (&DAT_00765c72)[uVar12 * 4];
                local_a0 = iVar3;
                local_9c = iVar14;
                goto LAB_00430932;
              }
              local_b8 = local_dc;
              *puVar5 = 0;
              *puVar5 = uVar10;
              (&DAT_00765c6e)[uVar12 * 4] = 0;
              (&DAT_00765c6e)[uVar12 * 4] = uVar8;
              (&DAT_00765c70)[uVar12 * 4] = 0;
              uVar10 = (&DAT_00765c72)[uVar12 * 4];
              (&DAT_00765c70)[uVar12 * 4] = uVar9;
              (&DAT_00765c72)[uVar12 * 4] = uVar10 & 0x8000;
              (&DAT_00765c72)[uVar12 * 4] = uVar10 & 0x8000 | (ushort)local_dc & 0x7fff;
              *(byte *)((int)&DAT_00765c72 + iVar1 + 1) =
                   *(byte *)((int)&DAT_00765c72 + iVar1 + 1) & 0x7f;
              (&DAT_00765c72)[uVar12 * 4] = (&DAT_00765c72)[uVar12 * 4];
              local_c0 = iVar6;
              local_b0 = local_38;
            }
            else {
LAB_00430aa0:
              local_bc = 0;
              if (0 < local_ac) {
                local_44 = (SEdge *)*local_a8;
                local_18 = (int)local_44 + local_a8[0x10] + -1;
                if (iVar3 < local_18) {
                  local_bc = 1;
                }
              }
              uVar13 = uVar12;
              if ((local_d4 < iVar6) && (iVar6 <= iVar17)) {
                if ((local_bc == 0) && ((iVar6 - iVar3) + 1 <= gap_tolerance_horizontal)) {
                  local_8c = local_80;
                  local_88 = 1;
                  puVar5 = &DAT_00765c6c + uVar12 * 4;
                  *puVar5 = 0;
                  *puVar5 = uVar10;
                  (&DAT_00765c6e)[uVar12 * 4] = 0;
                  (&DAT_00765c6e)[uVar12 * 4] = uVar8;
                  (&DAT_00765c70)[uVar12 * 4] = 0;
                  (&DAT_00765c70)[uVar12 * 4] = uVar9;
                  uVar9 = (&DAT_00765c72)[uVar12 * 4];
                  (&DAT_00765c72)[uVar12 * 4] = uVar9 & 0x8000;
                  (&DAT_00765c72)[uVar12 * 4] = uVar9 & 0x8000 | (ushort)local_80 & 0x7fff;
                  *(byte *)((int)&DAT_00765c72 + uVar12 * 8 + 1) =
                       *(byte *)((int)&DAT_00765c72 + uVar12 * 8 + 1) & 0x7f;
                  uVar9 = (&DAT_00765c72)[uVar12 * 4] | 0x8000;
                  local_94 = iVar14;
                  local_90 = iVar6;
                }
                else {
                  if ((local_bc == 0) || (gap_tolerance_connected < (iVar6 - local_18) + -1))
                  goto LAB_00430936;
                  local_84 = local_18;
                  local_a4 = local_70;
                  local_78 = 1;
                  puVar5 = &DAT_00765c6c + uVar12 * 4;
                  *puVar5 = 0;
                  *puVar5 = *puVar5 | (ushort)local_18;
                  (&DAT_00765c6e)[uVar12 * 4] = 0;
                  (&DAT_00765c6e)[uVar12 * 4] = (&DAT_00765c6e)[uVar12 * 4] | (ushort)local_70;
                  (&DAT_00765c70)[uVar12 * 4] = 0;
                  (&DAT_00765c70)[uVar12 * 4] = (&DAT_00765c70)[uVar12 * 4] | uVar9;
                  uVar9 = (&DAT_00765c72)[uVar12 * 4];
                  (&DAT_00765c72)[uVar12 * 4] = uVar9 & 0x8000;
                  (&DAT_00765c72)[uVar12 * 4] = uVar9 & 0x8000 | (ushort)local_70 & 0x7fff;
                  *(byte *)((int)&DAT_00765c72 + uVar12 * 8 + 1) =
                       *(byte *)((int)&DAT_00765c72 + uVar12 * 8 + 1) & 0x7f;
                  uVar9 = (&DAT_00765c72)[uVar12 * 4] | 0x8000;
                  local_7c = iVar6;
                  local_14 = iVar6;
                }
LAB_00430932:
                puVar5[3] = uVar9;
                uVar13 = uVar12 + 1;
              }
            }
LAB_00430936:
            local_c4 = local_c4 + 4;
            local_ac = local_ac + 1;
            local_a8 = local_a8 + 1;
            uVar12 = uVar13;
          }
        }
        if (0x1ff < (int)uVar12) {
          _sprintf(local_1f4,"Reached max trace edges: edges %d, scanline %d",uVar12,iVar14);
          g_CurrentFilename = "..\\cockpit\\ckptutil.c";
          g_CurrentLineNumber = 2232;
          core_main_c_displayErrorAndQuit_FUN_004c8440(local_1f4);
        }
        if (iVar17 < local_48) {
          local_30 = iVar16 + -2;
          local_28 = local_e0;
          local_50 = 0;
          for (local_b4 = 0; piVar4 = (int *)(local_2c * 0x84 + (int)scanline_data),
              local_d0 = iVar16, local_b4 < *piVar4; local_b4 = local_b4 + 1) {
            local_40 = *(int *)((int)piVar4 + local_50 + 4);
            local_60 = 0;
            piVar11 = (int *)((int)&scanline_data->edge_data + local_cc);
            local_44 = (SEdge *)(*piVar11 + -1);
            iVar6 = local_40 + *(int *)((int)piVar4 + local_50 + 0x44) + -1;
            if ((local_20 < (int)local_44) && (*(int *)((int)piVar11 + local_e0 + 8) < iVar6)) {
              local_60 = 1;
            }
            if (((iVar16 < iVar6) && (local_40 <= iVar17)) && (local_60 == 0)) {
              local_5c = local_68;
              (&DAT_00765c6c)[uVar12 * 4] = 0;
              (&DAT_00765c6c)[uVar12 * 4] = (ushort)iVar17;
              (&DAT_00765c6e)[uVar12 * 4] = 0;
              (&DAT_00765c6e)[uVar12 * 4] = uVar8;
              (&DAT_00765c70)[uVar12 * 4] = 0;
              (&DAT_00765c70)[uVar12 * 4] = (ushort)iVar6;
              uVar9 = (&DAT_00765c72)[uVar12 * 4];
              (&DAT_00765c72)[uVar12 * 4] = uVar9 & 0x8000;
              (&DAT_00765c72)[uVar12 * 4] = uVar9 & 0x8000 | (ushort)local_68 & 0x7fff;
              *(byte *)((int)&DAT_00765c72 + uVar12 * 8 + 1) =
                   *(byte *)((int)&DAT_00765c72 + uVar12 * 8 + 1) & 0x7f;
              uVar13 = uVar12 + 1;
              (&DAT_00765c72)[uVar12 * 4] = (&DAT_00765c72)[uVar12 * 4];
              local_6c = iVar14;
              local_64 = iVar6;
              local_54 = local_60;
            }
            else {
              local_c8 = 0;
              piVar4 = (int *)(local_2c * 0x84 + (int)scanline_data);
              local_44 = (SEdge *)(*piVar4 + -1);
              if ((local_b4 < (int)local_44) && (*(int *)((int)piVar4 + local_50 + 8) < iVar17)) {
                local_c8 = 1;
              }
              uVar13 = uVar12;
              if (((iVar6 < local_30) && (iVar3 <= iVar6)) &&
                 ((local_c8 == 0 && ((iVar17 - iVar6) + 1 <= gap_tolerance_horizontal)))) {
                local_3c = 1;
                puVar5 = &DAT_00765c6c + uVar12 * 4;
                *puVar5 = 0;
                *puVar5 = *puVar5 | (ushort)iVar17;
                (&DAT_00765c6e)[uVar12 * 4] = 0;
                (&DAT_00765c6e)[uVar12 * 4] = (&DAT_00765c6e)[uVar12 * 4] | uVar8;
                (&DAT_00765c70)[uVar12 * 4] = 0;
                (&DAT_00765c70)[uVar12 * 4] = (&DAT_00765c70)[uVar12 * 4] | (ushort)iVar6;
                uVar9 = (&DAT_00765c72)[uVar12 * 4];
                (&DAT_00765c72)[uVar12 * 4] = uVar9 & 0x8000;
                (&DAT_00765c72)[uVar12 * 4] = uVar9 & 0x8000 | (ushort)local_2c & 0x7fff;
                *(byte *)((int)&DAT_00765c72 + uVar12 * 8 + 1) =
                     *(byte *)((int)&DAT_00765c72 + uVar12 * 8 + 1) & 0x7f;
                uVar13 = uVar12 + 1;
                (&DAT_00765c72)[uVar12 * 4] = (&DAT_00765c72)[uVar12 * 4] | 0x8000;
                local_f4 = iVar17;
                local_f0 = iVar14;
                local_4c = iVar6;
                local_14 = iVar6;
              }
            }
            local_50 = local_50 + 4;
            uVar12 = uVar13;
          }
        }
        local_e0 = local_e0 + 4;
        local_e4 = (SEdgeList *)&local_e4->edge_count;
      }
      local_e8 = (SEdgeList *)&local_e8[0x10].edge_count;
      iVar14 = iVar14 + 1;
    } while (iVar14 < local_ec);
  }
  if (uVar12 == 0) {
    if (existing_edges == (SEdge *)0x0) {
      *max_x = 0;
    }
    return existing_edges;
  }
  if (existing_edges == (SEdge *)0x0) {
    *max_x = 0;
  }
  new_size = *max_x * 8 + uVar12 * 8;
  pSVar7 = (SEdge *)realloc(existing_edges,new_size);
  if (pSVar7 == (SEdge *)0x0) {
    _sprintf(local_1f4,"Unable to allocate %u bytes for edge list.",new_size);
    g_CurrentFilename = "..\\cockpit\\ckptutil.c";
    g_CurrentLineNumber = 2295;
    core_main_c_displayErrorAndQuit_FUN_004c8440(local_1f4);
  }
  puVar15 = (uint *)&DAT_00765c6c;
  pSVar18 = pSVar7 + *max_x;
  for (iVar14 = (uVar12 & 0x1fffffff) << 1; iVar14 != 0; iVar14 = iVar14 + -1) {
    uVar2 = *puVar15;
    pSVar18->x0 = (short)uVar2;
    pSVar18->y0 = (short)((uint)uVar2 >> 0x10);
    puVar15 = puVar15 + (uint)bVar19 * -2 + 1;
    pSVar18 = (SEdge *)&pSVar18[-(uint)bVar19].x1;
  }
  for (iVar14 = 0; iVar14 != 0; iVar14 = iVar14 + -1) {
    *(byte *)&pSVar18->x0 = *(byte *)puVar15;
    puVar15 = (uint *)((int)puVar15 + (uint)bVar19 * -2 + 1);
    pSVar18 = (SEdge *)((int)pSVar18 + (uint)bVar19 * -2 + 1);
  }
  *max_x = *max_x + uVar12;
  return pSVar7;
}
