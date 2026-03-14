// Name: cockpit_ckptutil.c_traceConnectedEdges_FUN_00434af0
// Address: 00434af0
// Address Range: [[00434af0, 004355b7]]
// Convention: __cdecl
// Signature: SEdge * __cdecl cockpit_ckptutil_c_traceConnectedEdges_FUN_00434af0(SEdgeList *edge_lists,SEdgeList *scanline_data,SEdge *existing_edges,int *max_x,int max_y,int gap_tolerance_x,int gap_tolerance_y,int gap_tolerance_connected,int gap_tolerance_horizontal)

#include "nocturne.h"

SEdge * __cdecl cockpit_ckptutil_c_traceConnectedEdges_FUN_00434af0(SEdgeList *edge_lists,SEdgeList *scanline_data,SEdge *existing_edges,int *max_x,int max_y,int gap_tolerance_x,int gap_tolerance_y,int gap_tolerance_connected,int gap_tolerance_horizontal)

{
  int iVar2;
  int iVar3;
  ushort uVar4;
  bool bVar5;
  int *piVar2;
  int *piVar6;
  SEdge *pSVar3;
  int *piVar7;
  int iVar4;
  void *pvVar5;
  ushort uVar6;
  ushort uVar9;
  ushort uVar7;
  ushort uVar10;
  int iVar10;
  uint uVar8;
  short sVar9;
  int iVar11;
  uint uVar11;
  int iVar12;
  int iVar13;
  SEdge *pSVar12;
  int iVar14;
  int iVar15;
  int iVar16;
  uint *puVar17;
  byte bVar17;
  char local_1f4 [256];
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
  int local_94;
  int local_90;
  int local_8c;
  int local_84;
  int local_80;
  int local_7c;
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
  int local_38;
  int *local_34;
  int local_30;
  int local_2c;
  int local_28;
  int *local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int iVar1;
  
  bVar17 = 0;
  iVar11 = 0;
  if (edge_lists == (SEdgeList *)0x0) {
    return (SEdge *)0x0;
  }
  iVar13 = 0;
  local_e8 = (int *)scanline_data;
  if (0 < gap_tolerance_x + -1) {
    do {
      iVar16 = iVar13 + 1;
      local_e0 = 0;
      local_e4 = local_e8;
      for (local_20 = 0; piVar2 = (int *)((int)scanline_data + iVar13 * 0x84), local_20 < *piVar2;
          local_20 = local_20 + 1) {
        iVar2 = *(int *)((int)piVar2 + local_e0 + 4);
        iVar14 = *(int *)((int)piVar2 + local_e0 + 0x44) + iVar2;
        iVar15 = iVar14 + -1;
        if (0x1ff < iVar11) {
          _sprintf
                    (local_1f4,"Reached max trace edges: edges %d, scanline %d",iVar11,iVar13);
          g_CurrentFilename = "..\\cockpit\\ckptutil.c";
          g_CurrentLineNumber = 0x886;
          core_main_c_displayErrorAndQuit_FUN_00506f10(local_1f4);
        }
        uVar6 = (ushort)iVar13;
        uVar4 = (ushort)iVar16;
        if (0 < iVar2) {
          iVar10 = 0;
          local_c4 = 0;
          piVar7 = (int *)((int)scanline_data + iVar16 * 0x84);
          while( true ) {
            piVar6 = (int *)(iVar16 * 0x84 + (int)scanline_data);
            if (*piVar6 <= iVar10) break;
            iVar3 = *(int *)((int)piVar6 + local_c4 + 4);
            bVar5 = false;
            if (0 < local_20) {
              local_58 = *local_e4 + local_e4[0x10] + -1;
              if (iVar3 < local_58) {
                bVar5 = true;
              }
            }
            sVar9 = (short)iVar2;
            uVar9 = (ushort)iVar3;
            if ((iVar3 < iVar2 + -1) &&
               (iVar2 <= *(int *)((int)piVar6 + local_c4 + 0x44) + iVar3 + -1)) {
              uVar11 = iVar11 + 1;
              pSVar3 = g_TracedEdgeBuffer + iVar11;
              if (bVar5) {
                if (gap_tolerance_y < (iVar2 - local_58) + -1) goto LAB_00434f60;
                pSVar3->x0 = 0;
                pSVar3->x0 = (short)local_58;
                g_TracedEdgeBuffer[iVar11].y0 = 0;
                g_TracedEdgeBuffer[iVar11].y0 = uVar6;
                g_TracedEdgeBuffer[iVar11].x1 = 0;
                uVar9 = g_TracedEdgeBuffer[iVar11].y1 & 0x8000;
                g_TracedEdgeBuffer[iVar11].x1 = sVar9;
                g_TracedEdgeBuffer[iVar11].y1 = uVar9;
                g_TracedEdgeBuffer[iVar11].y1 = uVar9 | uVar6 & 0x7fff;
                *(byte *)((int)&g_TracedEdgeBuffer[iVar11].y1 + 1) =
                     *(byte *)((int)&g_TracedEdgeBuffer[iVar11].y1 + 1) & 0x7f;
                uVar7 = g_TracedEdgeBuffer[iVar11].y1;
                goto LAB_00434df2;
              }
              pSVar3->x0 = 0;
              pSVar3->x0 = sVar9;
              g_TracedEdgeBuffer[iVar11].y0 = 0;
              g_TracedEdgeBuffer[iVar11].y0 = uVar6;
              g_TracedEdgeBuffer[iVar11].x1 = 0;
              uVar10 = g_TracedEdgeBuffer[iVar11].y1 & 0x8000;
              g_TracedEdgeBuffer[iVar11].x1 = uVar9;
              g_TracedEdgeBuffer[iVar11].y1 = uVar10;
              g_TracedEdgeBuffer[iVar11].y1 = uVar10 | uVar4 & 0x7fff;
              *(byte *)((int)&g_TracedEdgeBuffer[iVar11].y1 + 1) =
                   *(byte *)((int)&g_TracedEdgeBuffer[iVar11].y1 + 1) & 0x7f;
              g_TracedEdgeBuffer[iVar11].y1 = g_TracedEdgeBuffer[iVar11].y1;
            }
            else {
LAB_00434f60:
              bVar5 = false;
              if (0 < iVar10) {
                local_18 = *piVar7 + piVar7[0x10] + -1;
                if (iVar2 < local_18) {
                  bVar5 = true;
                }
              }
              uVar11 = iVar11;
              if ((iVar2 + 1 < iVar3) && (iVar3 <= iVar15)) {
                if ((bVar5) || (gap_tolerance_horizontal < (iVar3 - iVar2) + 1)) {
                  if ((!bVar5) || (gap_tolerance_connected < (iVar3 - local_18) + -1))
                  goto LAB_00434df6;
                  pSVar3 = g_TracedEdgeBuffer + iVar11;
                  pSVar3->x0 = 0;
                  pSVar3->x0 = pSVar3->x0 | (ushort)local_18;
                  g_TracedEdgeBuffer[iVar11].y0 = 0;
                  g_TracedEdgeBuffer[iVar11].y0 = g_TracedEdgeBuffer[iVar11].y0 | uVar4;
                  g_TracedEdgeBuffer[iVar11].x1 = 0;
                  g_TracedEdgeBuffer[iVar11].x1 = g_TracedEdgeBuffer[iVar11].x1 | uVar9;
                  uVar9 = g_TracedEdgeBuffer[iVar11].y1 & 0x8000;
                  g_TracedEdgeBuffer[iVar11].y1 = uVar9;
                  g_TracedEdgeBuffer[iVar11].y1 = uVar9 | uVar4 & 0x7fff;
                  *(byte *)((int)&g_TracedEdgeBuffer[iVar11].y1 + 1) =
                       *(byte *)((int)&g_TracedEdgeBuffer[iVar11].y1 + 1) & 0x7f;
                  uVar7 = g_TracedEdgeBuffer[iVar11].y1 | 0x8000;
                }
                else {
                  pSVar3 = g_TracedEdgeBuffer + iVar11;
                  pSVar3->x0 = 0;
                  pSVar3->x0 = sVar9;
                  g_TracedEdgeBuffer[iVar11].y0 = 0;
                  g_TracedEdgeBuffer[iVar11].y0 = uVar6;
                  g_TracedEdgeBuffer[iVar11].x1 = 0;
                  g_TracedEdgeBuffer[iVar11].x1 = uVar9;
                  uVar9 = g_TracedEdgeBuffer[iVar11].y1 & 0x8000;
                  g_TracedEdgeBuffer[iVar11].y1 = uVar9;
                  g_TracedEdgeBuffer[iVar11].y1 = uVar9 | uVar4 & 0x7fff;
                  *(byte *)((int)&g_TracedEdgeBuffer[iVar11].y1 + 1) =
                       *(byte *)((int)&g_TracedEdgeBuffer[iVar11].y1 + 1) & 0x7f;
                  uVar7 = g_TracedEdgeBuffer[iVar11].y1 | 0x8000;
                }
LAB_00434df2:
                pSVar3->y1 = uVar7;
                uVar11 = iVar11 + 1;
              }
            }
LAB_00434df6:
            local_c4 = local_c4 + 4;
            iVar10 = iVar10 + 1;
            piVar7 = piVar7 + 1;
            iVar11 = uVar11;
          }
        }
        if (0x1ff < iVar11) {
          _sprintf
                    (local_1f4,"Reached max trace edges: edges %d, scanline %d",iVar11,iVar13);
          g_CurrentFilename = "..\\cockpit\\ckptutil.c";
          g_CurrentLineNumber = 0x8c0;
          core_main_c_displayErrorAndQuit_FUN_00506f10(local_1f4);
        }
        if (iVar15 < max_y + -1) {
          local_50 = 0;
          for (local_b4 = 0; piVar7 = (int *)(iVar16 * 0x84 + (int)scanline_data),
              local_b4 < *piVar7; local_b4 = local_b4 + 1) {
            iVar10 = *(int *)((int)piVar7 + local_50 + 4);
            bVar5 = false;
            piVar6 = (int *)((int)scanline_data + iVar13 * 0x84);
            iVar4 = iVar10 + *(int *)((int)piVar7 + local_50 + 0x44) + -1;
            if ((local_20 < *piVar6 + -1) && (*(int *)((int)piVar6 + local_e0 + 8) < iVar4)) {
              bVar5 = true;
            }
            if (((iVar4 <= iVar14) || (iVar15 < iVar10)) || (bVar5)) {
              bVar5 = false;
              piVar7 = (int *)(iVar16 * 0x84 + (int)scanline_data);
              if ((local_b4 < *piVar7 + -1) && (*(int *)((int)piVar7 + local_50 + 8) < iVar15)) {
                bVar5 = true;
              }
              iVar12 = iVar11;
              if (((iVar4 < iVar14 + -2) && (iVar2 <= iVar4)) &&
                 ((!bVar5 && ((iVar15 - iVar4) + 1 <= gap_tolerance_horizontal)))) {
                pSVar12 = g_TracedEdgeBuffer + iVar11;
                pSVar12->x0 = 0;
                pSVar12->x0 = pSVar12->x0 | (ushort)iVar15;
                g_TracedEdgeBuffer[iVar11].y0 = 0;
                g_TracedEdgeBuffer[iVar11].y0 = g_TracedEdgeBuffer[iVar11].y0 | uVar6;
                g_TracedEdgeBuffer[iVar11].x1 = 0;
                g_TracedEdgeBuffer[iVar11].x1 = g_TracedEdgeBuffer[iVar11].x1 | (ushort)iVar4;
                uVar9 = g_TracedEdgeBuffer[iVar11].y1 & 0x8000;
                g_TracedEdgeBuffer[iVar11].y1 = uVar9;
                g_TracedEdgeBuffer[iVar11].y1 = uVar9 | uVar4 & 0x7fff;
                *(byte *)((int)&g_TracedEdgeBuffer[iVar11].y1 + 1) =
                     *(byte *)((int)&g_TracedEdgeBuffer[iVar11].y1 + 1) & 0x7f;
                iVar12 = iVar11 + 1;
                g_TracedEdgeBuffer[iVar11].y1 = g_TracedEdgeBuffer[iVar11].y1 | 0x8000;
              }
            }
            else {
              g_TracedEdgeBuffer[iVar11].x0 = 0;
              g_TracedEdgeBuffer[iVar11].x0 = (ushort)iVar15;
              g_TracedEdgeBuffer[iVar11].y0 = 0;
              g_TracedEdgeBuffer[iVar11].y0 = uVar6;
              g_TracedEdgeBuffer[iVar11].x1 = 0;
              g_TracedEdgeBuffer[iVar11].x1 = (ushort)iVar4;
              uVar9 = g_TracedEdgeBuffer[iVar11].y1 & 0x8000;
              g_TracedEdgeBuffer[iVar11].y1 = uVar9;
              g_TracedEdgeBuffer[iVar11].y1 = uVar9 | uVar4 & 0x7fff;
              *(byte *)((int)&g_TracedEdgeBuffer[iVar11].y1 + 1) =
                   *(byte *)((int)&g_TracedEdgeBuffer[iVar11].y1 + 1) & 0x7f;
              iVar12 = iVar11 + 1;
              g_TracedEdgeBuffer[iVar11].y1 = g_TracedEdgeBuffer[iVar11].y1;
            }
            local_50 = local_50 + 4;
            iVar11 = iVar12;
          }
        }
        local_e0 = local_e0 + 4;
        local_e4 = local_e4 + 1;
      }
      local_e8 = local_e8 + 0x21;
      iVar13 = iVar13 + 1;
    } while (iVar13 < gap_tolerance_x + -1);
  }
  if (iVar11 == 0) {
    if (existing_edges == (SEdge *)0x0) {
      *max_x = 0;
    }
    return existing_edges;
  }
  if (existing_edges == (SEdge *)0x0) {
    *max_x = 0;
  }
  iVar16 = *max_x * 8 + iVar11 * 8;
  pvVar5 = shape_memdbg_cpp_debugRealloc_FUN_0050f540
                     (existing_edges,iVar16,"..\\cockpit\\ckptutil.c",0x8fc);
  if (pvVar5 == (void *)0x0) {
    _sprintf(local_1f4,"Unable to allocate %u bytes for edge list.",iVar16);
    g_CurrentFilename = "..\\cockpit\\ckptutil.c";
    g_CurrentLineNumber = 0x8ff;
    core_main_c_displayErrorAndQuit_FUN_00506f10(local_1f4);
  }
  pSVar12 = g_TracedEdgeBuffer;
  puVar17 = (uint *)(*max_x * 8 + (int)pvVar5);
  for (uVar8 = (iVar11 & 0x1fffffffU) << 1; uVar8 != 0; uVar8 = uVar8 - 1) {
    *puVar17 = *(uint *)pSVar12;
    pSVar12 = (SEdge *)&pSVar12[-(uint)bVar17].x1;
    puVar17 = puVar17 + (uint)bVar17 * -2 + 1;
  }
  for (iVar16 = 0; iVar16 != 0; iVar16 = iVar16 + -1) {
    *(char *)puVar17 = (char)pSVar12->x0;
    pSVar12 = (SEdge *)((int)pSVar12 + (uint)bVar17 * -2 + 1);
    puVar17 = (uint *)((int)puVar17 + (uint)bVar17 * -2 + 1);
  }
  *max_x = *max_x + iVar11;
  return pvVar5;
}
