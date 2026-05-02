// Name: cockpit_ckptutil.c_traceConnectedEdges_FUN_00434af0
// Address: 00434af0
// MANUAL RECONSTRUCTION
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
  SEdge *pvVar5;
  ushort uVar6;
  ushort uVar9;
  ushort uVar7;
  ushort uVar10;
  int iVar10;
  short sVar9;
  int iVar11;
  uint uVar11;
  int iVar12;
  int iVar13;
  SEdge *pSVar12;
  int iVar14;
  int iVar15;
  int iVar16;
  char local_1f4 [256];
  int *local_e8;
  int *local_e4;
  int local_b4;
  int local_58;
  int local_20;
  int local_18;
  byte bVar17;

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
      local_e4 = local_e8;
      for (local_20 = 0; piVar2 = (int *)((char *)scanline_data + iVar13 * 0x84), local_20 < *piVar2;
          local_20 = local_20 + 1) {
        iVar2 = piVar2[local_20 + 1];
        iVar14 = piVar2[local_20 + 0x11] + iVar2;
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
          piVar7 = (int *)((char *)scanline_data + iVar16 * 0x84);
          while( true ) {
            piVar6 = (int *)((char *)scanline_data + iVar16 * 0x84);
            if (*piVar6 <= iVar10) break;
            iVar3 = piVar6[iVar10 + 1];
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
               (iVar2 <= piVar6[iVar10 + 0x11] + iVar3 + -1)) {
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
                g_TracedEdgeBuffer[iVar11].y1 = g_TracedEdgeBuffer[iVar11].y1 & 0x7fff;
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
              g_TracedEdgeBuffer[iVar11].y1 = g_TracedEdgeBuffer[iVar11].y1 & 0x7fff;
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
                  g_TracedEdgeBuffer[iVar11].y1 = g_TracedEdgeBuffer[iVar11].y1 & 0x7fff;
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
                  g_TracedEdgeBuffer[iVar11].y1 = g_TracedEdgeBuffer[iVar11].y1 & 0x7fff;
                  uVar7 = g_TracedEdgeBuffer[iVar11].y1 | 0x8000;
                }
LAB_00434df2:
                pSVar3->y1 = uVar7;
                uVar11 = iVar11 + 1;
              }
            }
LAB_00434df6:
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
          for (local_b4 = 0; piVar7 = (int *)((char *)scanline_data + iVar16 * 0x84),
              local_b4 < *piVar7; local_b4 = local_b4 + 1) {
            iVar10 = piVar7[local_b4 + 1];
            bVar5 = false;
            piVar6 = (int *)((char *)scanline_data + iVar13 * 0x84);
            iVar4 = iVar10 + piVar7[local_b4 + 0x11] + -1;
            if ((local_20 < *piVar6 + -1) && (piVar6[local_20 + 2] < iVar4)) {
              bVar5 = true;
            }
            if (((iVar4 <= iVar14) || (iVar15 < iVar10)) || (bVar5)) {
              bVar5 = false;
              piVar7 = (int *)((char *)scanline_data + iVar16 * 0x84);
              if ((local_b4 < *piVar7 + -1) && (piVar7[local_b4 + 2] < iVar15)) {
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
                g_TracedEdgeBuffer[iVar11].y1 = g_TracedEdgeBuffer[iVar11].y1 & 0x7fff;
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
              g_TracedEdgeBuffer[iVar11].y1 = g_TracedEdgeBuffer[iVar11].y1 & 0x7fff;
              iVar12 = iVar11 + 1;
              g_TracedEdgeBuffer[iVar11].y1 = g_TracedEdgeBuffer[iVar11].y1;
            }
            iVar11 = iVar12;
          }
        }
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
  pvVar5 = (SEdge *)shape_memdbg_cpp_debugRealloc_FUN_0050f540
                     (existing_edges,iVar16,"..\\cockpit\\ckptutil.c",0x8fc);
  if (pvVar5 == (SEdge *)0x0) {
    _sprintf(local_1f4,"Unable to allocate %u bytes for edge list.",iVar16);
    g_CurrentFilename = "..\\cockpit\\ckptutil.c";
    g_CurrentLineNumber = 0x8ff;
    core_main_c_displayErrorAndQuit_FUN_00506f10(local_1f4);
  }
  memcpy(&pvVar5[*max_x],g_TracedEdgeBuffer,iVar11 * sizeof(SEdge));
  *max_x = *max_x + iVar11;
  return pvVar5;
}
