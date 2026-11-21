// Name: cockpit_ckptutil.c_traceConnectedEdges_FUN_0043a460
// Address: 0043a460
// Address Range: [[0043a460, 0043af1d]]
// Convention: __cdecl
// Signature: SEdge * __cdecl cockpit_ckptutil_c_traceConnectedEdges_FUN_0043a460(SEdgeList *edge_lists,SEdgeList *scanline_data,SEdge *existing_edges,int *max_x,int max_y,int gap_tolerance_x,int gap_tolerance_y,int gap_tolerance_connected,int gap_tolerance_horizontal)

#include "nocturne.h"

SEdge * __cdecl cockpit_ckptutil_c_traceConnectedEdges_FUN_0043a460(SEdgeList *edge_lists,SEdgeList *scanline_data,SEdge *existing_edges,int *max_x,int max_y,int gap_tolerance_x,int gap_tolerance_y,int gap_tolerance_connected,int gap_tolerance_horizontal)

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
  int *piVar10;
  ushort uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  uint *puVar15;
  int iVar16;
  int iVar17;
  SEdge *pSVar18;
  byte bVar19;
  char acStack_1f4 [256];
  int iStack_f4;
  int iStack_f0;
  int iStack_ec;
  SEdgeList *pSStack_e8;
  SEdgeList *pSStack_e4;
  int iStack_e0;
  int iStack_dc;
  int iStack_d8;
  int iStack_d4;
  int iStack_d0;
  int iStack_cc;
  int iStack_c8;
  int iStack_c4;
  int iStack_c0;
  int iStack_bc;
  int iStack_b8;
  int iStack_b4;
  int iStack_b0;
  int iStack_ac;
  int *piStack_a8;
  int iStack_a4;
  int iStack_a0;
  int iStack_9c;
  uint uStack_98;
  int iStack_94;
  int iStack_90;
  int iStack_8c;
  uint uStack_88;
  int iStack_84;
  int iStack_80;
  int iStack_7c;
  uint uStack_78;
  int iStack_74;
  int iStack_70;
  int iStack_6c;
  int iStack_68;
  int iStack_64;
  int iStack_60;
  int iStack_5c;
  byte *puStack_58;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  int iStack_48;
  SEdge *pSStack_44;
  int iStack_40;
  uint uStack_3c;
  int iStack_38;
  int *piStack_34;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  SEdgeList *pSStack_24;
  int iStack_20;
  uint uStack_1c;
  int iStack_18;
  int iStack_14;
  
  bVar19 = 0;
  uVar12 = 0;
  if (edge_lists == (SEdgeList *)0x0) {
    return (SEdge *)0x0;
  }
  iStack_48 = max_y + -1;
  iStack_ec = gap_tolerance_x + -1;
  iVar14 = 0;
  pSStack_e8 = scanline_data;
  if (0 < iStack_ec) {
    do {
      iStack_dc = iVar14 + 1;
      iStack_cc = iVar14 * 0x84;
      iStack_e0 = 0;
      piStack_34 = (int *)((int)scanline_data + iStack_dc * 0x84);
      pSStack_e4 = pSStack_e8;
      iStack_80 = iStack_dc;
      iStack_70 = iStack_dc;
      iStack_68 = iStack_dc;
      iStack_2c = iStack_dc;
      for (iStack_20 = 0; piVar4 = (int *)((int)&scanline_data->edge_data + iStack_cc),
          iStack_20 < *piVar4; iStack_20 = iStack_20 + 1) {
        iVar3 = *(int *)((int)piVar4 + iStack_e0 + 4);
        iVar16 = *(int *)((int)piVar4 + iStack_e0 + 0x44) + iVar3;
        iVar17 = iVar16 + -1;
        if (0x1ff < (int)uVar12) {
          _sprintf(acStack_1f4,"Reached max trace edges: edges %d, scanline %d");
          g_CurrentFilename = "..\\cockpit\\ckptutil.c";
          g_CurrentLineNumber = 2173;
          core_main_c_displayErrorAndQuit_FUN_005030e0(acStack_1f4);
        }
        uVar8 = (ushort)iVar14;
        if (0 < iVar3) {
          iStack_d4 = iVar3 + 1;
          iStack_d8 = iVar3 + -1;
          iStack_ac = 0;
          iStack_c4 = 0;
          pSStack_24 = pSStack_e4;
          piStack_a8 = piStack_34;
          while( true ) {
            piVar4 = (int *)(iStack_2c * 0x84 + (int)scanline_data);
            if (*piVar4 <= iStack_ac) break;
            iVar6 = *(int *)((int)piVar4 + iStack_c4 + 4);
            iStack_74 = *(int *)((int)piVar4 + iStack_c4 + 0x44) + iVar6 + -1;
            iStack_38 = 0;
            if (0 < iStack_20) {
              pSStack_44 = pSStack_e4->edge_data;
              puStack_58 = (byte *)
                           ((int)&(pSStack_e4[8].edge_data)->x0 + (int)((int)&pSStack_44[-1].y1 + 1)
                           );
              if (iVar6 < (int)puStack_58) {
                iStack_38 = 1;
              }
            }
            uVar11 = (ushort)iVar3;
            uVar9 = (ushort)iVar6;
            if ((iVar6 < iStack_d8) && (iVar3 <= iStack_74)) {
              iVar1 = uVar12 * 8;
              uVar13 = uVar12 + 1;
              puVar5 = (ushort *)(iVar1 + 0x7c6550);
              uStack_1c = uVar13;
              if (iStack_38 != 0) {
                if (gap_tolerance_y < (iVar3 - (int)puStack_58) + -1) goto LAB_0043a8d0;
                uStack_98 = 0;
                *puVar5 = 0;
                *puVar5 = (ushort)puStack_58;
                *(ushort *)(iVar1 + 0x7c6552) = 0;
                *(ushort *)(iVar1 + 0x7c6552) = uVar8;
                *(ushort *)(iVar1 + 0x7c6554) = 0;
                uVar9 = *(ushort *)(iVar1 + 0x7c6556) & 0x8000;
                *(ushort *)(iVar1 + 0x7c6554) = uVar11;
                *(ushort *)(iVar1 + 0x7c6556) = uVar9;
                *(ushort *)(iVar1 + 0x7c6556) = uVar9 | uVar8 & 0x7fff;
                *(byte *)(iVar1 + 0x7c6557) = *(byte *)(iVar1 + 0x7c6557) & 0x7f;
                uVar9 = *(ushort *)(iVar1 + 0x7c6556);
                iStack_a0 = iVar3;
                iStack_9c = iVar14;
                goto LAB_0043a762;
              }
              iStack_b8 = iStack_dc;
              *puVar5 = 0;
              *puVar5 = uVar11;
              *(ushort *)(iVar1 + 0x7c6552) = 0;
              *(ushort *)(iVar1 + 0x7c6552) = uVar8;
              *(ushort *)(iVar1 + 0x7c6554) = 0;
              uVar11 = *(ushort *)(iVar1 + 0x7c6556) & 0x8000;
              *(ushort *)(iVar1 + 0x7c6554) = uVar9;
              *(ushort *)(iVar1 + 0x7c6556) = uVar11;
              *(ushort *)(iVar1 + 0x7c6556) = uVar11 | (ushort)iStack_dc & 0x7fff;
              *(byte *)(iVar1 + 0x7c6557) = *(byte *)(iVar1 + 0x7c6557) & 0x7f;
              *(ushort *)(iVar1 + 0x7c6556) = *(ushort *)(iVar1 + 0x7c6556);
              iStack_c0 = iVar6;
              iStack_b0 = iStack_38;
            }
            else {
LAB_0043a8d0:
              iStack_bc = 0;
              if (0 < iStack_ac) {
                pSStack_44 = (SEdge *)*piStack_a8;
                iStack_18 = (int)pSStack_44 + piStack_a8[0x10] + -1;
                if (iVar3 < iStack_18) {
                  iStack_bc = 1;
                }
              }
              uVar13 = uVar12;
              if ((iStack_d4 < iVar6) && (iVar6 <= iVar17)) {
                if ((iStack_bc == 0) && ((iVar6 - iVar3) + 1 <= gap_tolerance_horizontal)) {
                  iStack_8c = iStack_80;
                  uStack_88 = 1;
                  iVar1 = uVar12 * 8;
                  puVar5 = (ushort *)(iVar1 + 0x7c6550);
                  *puVar5 = 0;
                  *puVar5 = uVar11;
                  *(ushort *)(iVar1 + 0x7c6552) = 0;
                  *(ushort *)(iVar1 + 0x7c6552) = uVar8;
                  *(ushort *)(iVar1 + 0x7c6554) = 0;
                  *(ushort *)(iVar1 + 0x7c6554) = uVar9;
                  uVar9 = *(ushort *)(iVar1 + 0x7c6556) & 0x8000;
                  *(ushort *)(iVar1 + 0x7c6556) = uVar9;
                  *(ushort *)(iVar1 + 0x7c6556) = uVar9 | (ushort)iStack_80 & 0x7fff;
                  *(byte *)(iVar1 + 0x7c6557) = *(byte *)(iVar1 + 0x7c6557) & 0x7f;
                  uVar9 = *(ushort *)(iVar1 + 0x7c6556) | 0x8000;
                  iStack_94 = iVar14;
                  iStack_90 = iVar6;
                }
                else {
                  if ((iStack_bc == 0) || (gap_tolerance_connected < (iVar6 - iStack_18) + -1))
                  goto LAB_0043a766;
                  iStack_84 = iStack_18;
                  iStack_a4 = iStack_70;
                  uStack_78 = 1;
                  iVar1 = uVar12 * 8;
                  puVar5 = (ushort *)(iVar1 + 0x7c6550);
                  *puVar5 = 0;
                  *puVar5 = *puVar5 | (ushort)iStack_18;
                  *(ushort *)(iVar1 + 0x7c6552) = 0;
                  *(ushort *)(iVar1 + 0x7c6552) = *(ushort *)(iVar1 + 0x7c6552) | (ushort)iStack_70;
                  *(ushort *)(iVar1 + 0x7c6554) = 0;
                  *(ushort *)(iVar1 + 0x7c6554) = *(ushort *)(iVar1 + 0x7c6554) | uVar9;
                  uVar9 = *(ushort *)(iVar1 + 0x7c6556) & 0x8000;
                  *(ushort *)(iVar1 + 0x7c6556) = uVar9;
                  *(ushort *)(iVar1 + 0x7c6556) = uVar9 | (ushort)iStack_70 & 0x7fff;
                  *(byte *)(iVar1 + 0x7c6557) = *(byte *)(iVar1 + 0x7c6557) & 0x7f;
                  uVar9 = *(ushort *)(iVar1 + 0x7c6556) | 0x8000;
                  iStack_7c = iVar6;
                  iStack_14 = iVar6;
                }
LAB_0043a762:
                puVar5[3] = uVar9;
                uVar13 = uVar12 + 1;
              }
            }
LAB_0043a766:
            iStack_c4 = iStack_c4 + 4;
            iStack_ac = iStack_ac + 1;
            piStack_a8 = piStack_a8 + 1;
            uVar12 = uVar13;
          }
        }
        if (0x1ff < (int)uVar12) {
          _sprintf(acStack_1f4,"Reached max trace edges: edges %d, scanline %d");
          g_CurrentFilename = "..\\cockpit\\ckptutil.c";
          g_CurrentLineNumber = 2231;
          core_main_c_displayErrorAndQuit_FUN_005030e0(acStack_1f4);
        }
        if (iVar17 < iStack_48) {
          iStack_30 = iVar16 + -2;
          iStack_28 = iStack_e0;
          iStack_50 = 0;
          for (iStack_b4 = 0; piVar4 = (int *)(iStack_2c * 0x84 + (int)scanline_data),
              iStack_d0 = iVar16, iStack_b4 < *piVar4; iStack_b4 = iStack_b4 + 1) {
            iStack_40 = *(int *)((int)piVar4 + iStack_50 + 4);
            iStack_60 = 0;
            piVar10 = (int *)((int)&scanline_data->edge_data + iStack_cc);
            pSStack_44 = (SEdge *)(*piVar10 + -1);
            iVar6 = iStack_40 + *(int *)((int)piVar4 + iStack_50 + 0x44) + -1;
            if ((iStack_20 < (int)pSStack_44) && (*(int *)((int)piVar10 + iStack_e0 + 8) < iVar6)) {
              iStack_60 = 1;
            }
            if (((iVar16 < iVar6) && (iStack_40 <= iVar17)) && (iStack_60 == 0)) {
              iStack_5c = iStack_68;
              iVar1 = uVar12 * 8;
              *(ushort *)(iVar1 + 0x7c6550) = 0;
              *(ushort *)(iVar1 + 0x7c6550) = (ushort)iVar17;
              *(ushort *)(iVar1 + 0x7c6552) = 0;
              *(ushort *)(iVar1 + 0x7c6552) = uVar8;
              *(ushort *)(iVar1 + 0x7c6554) = 0;
              *(ushort *)(iVar1 + 0x7c6554) = (ushort)iVar6;
              uVar9 = *(ushort *)(iVar1 + 0x7c6556) & 0x8000;
              *(ushort *)(iVar1 + 0x7c6556) = uVar9;
              *(ushort *)(iVar1 + 0x7c6556) = uVar9 | (ushort)iStack_68 & 0x7fff;
              *(byte *)(iVar1 + 0x7c6557) = *(byte *)(iVar1 + 0x7c6557) & 0x7f;
              uVar12 = uVar12 + 1;
              *(ushort *)(iVar1 + 0x7c6556) = *(ushort *)(iVar1 + 0x7c6556);
              iStack_6c = iVar14;
              iStack_64 = iVar6;
              iStack_54 = iStack_60;
            }
            else {
              iStack_c8 = 0;
              piVar4 = (int *)(iStack_2c * 0x84 + (int)scanline_data);
              pSStack_44 = (SEdge *)(*piVar4 + -1);
              if ((iStack_b4 < (int)pSStack_44) && (*(int *)((int)piVar4 + iStack_50 + 8) < iVar17))
              {
                iStack_c8 = 1;
              }
              if (((iVar6 < iStack_30) && (iVar3 <= iVar6)) &&
                 ((iStack_c8 == 0 && ((iVar17 - iVar6) + 1 <= gap_tolerance_horizontal)))) {
                uStack_3c = 1;
                iVar1 = uVar12 * 8;
                puVar5 = (ushort *)(iVar1 + 0x7c6550);
                *puVar5 = 0;
                *puVar5 = *puVar5 | (ushort)iVar17;
                *(ushort *)(iVar1 + 0x7c6552) = 0;
                *(ushort *)(iVar1 + 0x7c6552) = *(ushort *)(iVar1 + 0x7c6552) | uVar8;
                *(ushort *)(iVar1 + 0x7c6554) = 0;
                *(ushort *)(iVar1 + 0x7c6554) = *(ushort *)(iVar1 + 0x7c6554) | (ushort)iVar6;
                uVar9 = *(ushort *)(iVar1 + 0x7c6556) & 0x8000;
                *(ushort *)(iVar1 + 0x7c6556) = uVar9;
                *(ushort *)(iVar1 + 0x7c6556) = uVar9 | (ushort)iStack_2c & 0x7fff;
                *(byte *)(iVar1 + 0x7c6557) = *(byte *)(iVar1 + 0x7c6557) & 0x7f;
                uVar12 = uVar12 + 1;
                *(ushort *)(iVar1 + 0x7c6556) = *(ushort *)(iVar1 + 0x7c6556) | 0x8000;
                iStack_f4 = iVar17;
                iStack_f0 = iVar14;
                iStack_4c = iVar6;
                iStack_14 = iVar6;
              }
            }
            iStack_50 = iStack_50 + 4;
          }
        }
        iStack_e0 = iStack_e0 + 4;
        pSStack_e4 = (SEdgeList *)&pSStack_e4->edge_count;
      }
      pSStack_e8 = (SEdgeList *)&pSStack_e8[0x10].edge_count;
      iVar14 = iVar14 + 1;
    } while (iVar14 < iStack_ec);
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
  pSVar7 = (SEdge *)realloc(existing_edges,*max_x * 8 + uVar12 * 8);
  if (pSVar7 == (SEdge *)0x0) {
    _sprintf(acStack_1f4,"Unable to allocate %u bytes for edge list.");
    g_CurrentFilename = "..\\cockpit\\ckptutil.c";
    g_CurrentLineNumber = 2294;
    core_main_c_displayErrorAndQuit_FUN_005030e0(acStack_1f4);
  }
  puVar15 = (uint *)0x7c6550;
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
