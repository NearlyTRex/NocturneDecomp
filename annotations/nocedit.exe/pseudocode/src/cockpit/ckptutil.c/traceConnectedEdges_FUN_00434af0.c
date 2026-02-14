// Name: cockpit_ckptutil.c_traceConnectedEdges_FUN_00434af0
// Address: 00434af0
// Address Range: [[00434af0, 004355b7]]
// Convention: __cdecl
// Signature: void * __cdecl cockpit_ckptutil_c_traceConnectedEdges_FUN_00434af0(SEdgeList *edge_lists,void *output_buffer,int *output_count,int max_x,int max_y,int gap_tolerance_x,int gap_tolerance_y)

#include "nocturne.h"

void * __cdecl cockpit_ckptutil_c_traceConnectedEdges_FUN_00434af0(SEdgeList *edge_lists,void *output_buffer,int *output_count,int max_x,int max_y,int gap_tolerance_x,int gap_tolerance_y)

{
  int iVar1;
  int *piVar2;
  SEdge *pSVar3;
  int iVar4;
  void *pvVar5;
  ushort uVar6;
  ushort uVar7;
  uint uVar8;
  short sVar9;
  ushort uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  uint *puVar16;
  byte bVar17;
  int in_stack_00000020;
  int in_stack_00000024;
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
  int local_1c;
  int local_18;
  int local_14;
  
  bVar17 = 0;
  iVar11 = 0;
  if (edge_lists == (SEdgeList *)0x0) {
    return (void *)0x0;
  }
  local_48 = max_y + -1;
  local_ec = gap_tolerance_x + -1;
  iVar13 = 0;
  local_e8 = output_buffer;
  if (0 < local_ec) {
    do {
      local_dc = iVar13 + 1;
      local_cc = iVar13 * 0x84;
      local_e0 = 0;
      local_34 = (int *)((int)output_buffer + local_dc * 0x84);
      local_e4 = local_e8;
      local_80 = local_dc;
      local_70 = local_dc;
      local_68 = local_dc;
      local_2c = local_dc;
      for (local_20 = 0; piVar2 = (int *)((int)output_buffer + local_cc), local_20 < *piVar2;
          local_20 = local_20 + 1) {
        iVar1 = *(int *)((int)piVar2 + local_e0 + 4);
        iVar14 = *(int *)((int)piVar2 + local_e0 + 0x44) + iVar1;
        iVar15 = iVar14 + -1;
        if (0x1ff < iVar11) {
          _sprintf
                    (local_1f4,"Reached max trace edges: edges %d, scanline %d",iVar11,iVar13);
          g_CurrentFilename = "..\\cockpit\\ckptutil.c";
          g_CurrentLineNumber = 0x886;
          core_main_c_displayErrorAndQuit_FUN_00506f10(local_1f4);
        }
        uVar6 = (ushort)iVar13;
        if (0 < iVar1) {
          local_d4 = iVar1 + 1;
          local_d8 = iVar1 + -1;
          local_ac = 0;
          local_c4 = 0;
          local_24 = local_e4;
          local_a8 = local_34;
          while( true ) {
            piVar2 = (int *)(local_2c * 0x84 + (int)output_buffer);
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
            sVar9 = (short)iVar1;
            uVar7 = (ushort)iVar4;
            if ((iVar4 < local_d8) && (iVar1 <= local_74)) {
              iVar12 = iVar11 + 1;
              pSVar3 = g_TracedEdgeBuffer + iVar11;
              local_1c = iVar12;
              if (local_38 != 0) {
                if (gap_tolerance_y < (iVar1 - local_58) + -1) goto LAB_00434f60;
                local_98 = 0;
                pSVar3->x0 = 0;
                pSVar3->x0 = (short)local_58;
                g_TracedEdgeBuffer[iVar11].y0 = 0;
                g_TracedEdgeBuffer[iVar11].y0 = uVar6;
                g_TracedEdgeBuffer[iVar11].x1 = 0;
                uVar7 = g_TracedEdgeBuffer[iVar11].y1 & 0x8000;
                g_TracedEdgeBuffer[iVar11].x1 = sVar9;
                g_TracedEdgeBuffer[iVar11].y1 = uVar7;
                g_TracedEdgeBuffer[iVar11].y1 = uVar7 | uVar6 & 0x7fff;
                *(byte *)((int)&g_TracedEdgeBuffer[iVar11].y1 + 1) =
                     *(byte *)((int)&g_TracedEdgeBuffer[iVar11].y1 + 1) & 0x7f;
                uVar7 = g_TracedEdgeBuffer[iVar11].y1;
                local_a0 = iVar1;
                local_9c = iVar13;
                goto LAB_00434df2;
              }
              local_b8 = local_dc;
              pSVar3->x0 = 0;
              pSVar3->x0 = sVar9;
              g_TracedEdgeBuffer[iVar11].y0 = 0;
              g_TracedEdgeBuffer[iVar11].y0 = uVar6;
              g_TracedEdgeBuffer[iVar11].x1 = 0;
              uVar10 = g_TracedEdgeBuffer[iVar11].y1 & 0x8000;
              g_TracedEdgeBuffer[iVar11].x1 = uVar7;
              g_TracedEdgeBuffer[iVar11].y1 = uVar10;
              g_TracedEdgeBuffer[iVar11].y1 = uVar10 | (ushort)local_dc & 0x7fff;
              *(byte *)((int)&g_TracedEdgeBuffer[iVar11].y1 + 1) =
                   *(byte *)((int)&g_TracedEdgeBuffer[iVar11].y1 + 1) & 0x7f;
              g_TracedEdgeBuffer[iVar11].y1 = g_TracedEdgeBuffer[iVar11].y1;
              local_c0 = iVar4;
              local_b0 = local_38;
            }
            else {
LAB_00434f60:
              local_bc = 0;
              if (0 < local_ac) {
                local_44 = *local_a8;
                local_18 = local_44 + local_a8[0x10] + -1;
                if (iVar1 < local_18) {
                  local_bc = 1;
                }
              }
              iVar12 = iVar11;
              if ((local_d4 < iVar4) && (iVar4 <= iVar15)) {
                if ((local_bc == 0) && ((iVar4 - iVar1) + 1 <= in_stack_00000024)) {
                  local_8c = local_80;
                  local_88 = 1;
                  pSVar3 = g_TracedEdgeBuffer + iVar11;
                  pSVar3->x0 = 0;
                  pSVar3->x0 = sVar9;
                  g_TracedEdgeBuffer[iVar11].y0 = 0;
                  g_TracedEdgeBuffer[iVar11].y0 = uVar6;
                  g_TracedEdgeBuffer[iVar11].x1 = 0;
                  g_TracedEdgeBuffer[iVar11].x1 = uVar7;
                  uVar7 = g_TracedEdgeBuffer[iVar11].y1 & 0x8000;
                  g_TracedEdgeBuffer[iVar11].y1 = uVar7;
                  g_TracedEdgeBuffer[iVar11].y1 = uVar7 | (ushort)local_80 & 0x7fff;
                  *(byte *)((int)&g_TracedEdgeBuffer[iVar11].y1 + 1) =
                       *(byte *)((int)&g_TracedEdgeBuffer[iVar11].y1 + 1) & 0x7f;
                  uVar7 = g_TracedEdgeBuffer[iVar11].y1 | 0x8000;
                  local_94 = iVar13;
                  local_90 = iVar4;
                }
                else {
                  if ((local_bc == 0) || (in_stack_00000020 < (iVar4 - local_18) + -1))
                  goto LAB_00434df6;
                  local_84 = local_18;
                  local_a4 = local_70;
                  local_78 = 1;
                  pSVar3 = g_TracedEdgeBuffer + iVar11;
                  pSVar3->x0 = 0;
                  pSVar3->x0 = pSVar3->x0 | (ushort)local_18;
                  g_TracedEdgeBuffer[iVar11].y0 = 0;
                  g_TracedEdgeBuffer[iVar11].y0 = g_TracedEdgeBuffer[iVar11].y0 | (ushort)local_70;
                  g_TracedEdgeBuffer[iVar11].x1 = 0;
                  g_TracedEdgeBuffer[iVar11].x1 = g_TracedEdgeBuffer[iVar11].x1 | uVar7;
                  uVar7 = g_TracedEdgeBuffer[iVar11].y1 & 0x8000;
                  g_TracedEdgeBuffer[iVar11].y1 = uVar7;
                  g_TracedEdgeBuffer[iVar11].y1 = uVar7 | (ushort)local_70 & 0x7fff;
                  *(byte *)((int)&g_TracedEdgeBuffer[iVar11].y1 + 1) =
                       *(byte *)((int)&g_TracedEdgeBuffer[iVar11].y1 + 1) & 0x7f;
                  uVar7 = g_TracedEdgeBuffer[iVar11].y1 | 0x8000;
                  local_7c = iVar4;
                  local_14 = iVar4;
                }
LAB_00434df2:
                pSVar3->y1 = uVar7;
                iVar12 = iVar11 + 1;
              }
            }
LAB_00434df6:
            local_c4 = local_c4 + 4;
            local_ac = local_ac + 1;
            local_a8 = local_a8 + 1;
            iVar11 = iVar12;
          }
        }
        if (0x1ff < iVar11) {
          _sprintf
                    (local_1f4,"Reached max trace edges: edges %d, scanline %d",iVar11,iVar13);
          g_CurrentFilename = "..\\cockpit\\ckptutil.c";
          g_CurrentLineNumber = 0x8c0;
          core_main_c_displayErrorAndQuit_FUN_00506f10(local_1f4);
        }
        if (iVar15 < local_48) {
          local_30 = iVar14 + -2;
          local_28 = local_e0;
          local_50 = 0;
          for (local_b4 = 0; piVar2 = (int *)(local_2c * 0x84 + (int)output_buffer),
              local_d0 = iVar14, local_b4 < *piVar2; local_b4 = local_b4 + 1) {
            local_40 = *(int *)((int)piVar2 + local_50 + 4);
            local_60 = 0;
            local_44 = *(int *)((int)output_buffer + local_cc) + -1;
            iVar4 = local_40 + *(int *)((int)piVar2 + local_50 + 0x44) + -1;
            if ((local_20 < local_44) &&
               (*(int *)((int)output_buffer + local_cc + local_e0 + 8) < iVar4)) {
              local_60 = 1;
            }
            if (((iVar14 < iVar4) && (local_40 <= iVar15)) && (local_60 == 0)) {
              local_5c = local_68;
              g_TracedEdgeBuffer[iVar11].x0 = 0;
              g_TracedEdgeBuffer[iVar11].x0 = (ushort)iVar15;
              g_TracedEdgeBuffer[iVar11].y0 = 0;
              g_TracedEdgeBuffer[iVar11].y0 = uVar6;
              g_TracedEdgeBuffer[iVar11].x1 = 0;
              g_TracedEdgeBuffer[iVar11].x1 = (ushort)iVar4;
              uVar7 = g_TracedEdgeBuffer[iVar11].y1 & 0x8000;
              g_TracedEdgeBuffer[iVar11].y1 = uVar7;
              g_TracedEdgeBuffer[iVar11].y1 = uVar7 | (ushort)local_68 & 0x7fff;
              *(byte *)((int)&g_TracedEdgeBuffer[iVar11].y1 + 1) =
                   *(byte *)((int)&g_TracedEdgeBuffer[iVar11].y1 + 1) & 0x7f;
              iVar12 = iVar11 + 1;
              g_TracedEdgeBuffer[iVar11].y1 = g_TracedEdgeBuffer[iVar11].y1;
              local_6c = iVar13;
              local_64 = iVar4;
              local_54 = local_60;
            }
            else {
              local_c8 = 0;
              piVar2 = (int *)(local_2c * 0x84 + (int)output_buffer);
              local_44 = *piVar2 + -1;
              if ((local_b4 < local_44) && (*(int *)((int)piVar2 + local_50 + 8) < iVar15)) {
                local_c8 = 1;
              }
              iVar12 = iVar11;
              if (((iVar4 < local_30) && (iVar1 <= iVar4)) &&
                 ((local_c8 == 0 && ((iVar15 - iVar4) + 1 <= in_stack_00000024)))) {
                local_3c = 1;
                pSVar3 = g_TracedEdgeBuffer + iVar11;
                pSVar3->x0 = 0;
                pSVar3->x0 = pSVar3->x0 | (ushort)iVar15;
                g_TracedEdgeBuffer[iVar11].y0 = 0;
                g_TracedEdgeBuffer[iVar11].y0 = g_TracedEdgeBuffer[iVar11].y0 | uVar6;
                g_TracedEdgeBuffer[iVar11].x1 = 0;
                g_TracedEdgeBuffer[iVar11].x1 = g_TracedEdgeBuffer[iVar11].x1 | (ushort)iVar4;
                uVar7 = g_TracedEdgeBuffer[iVar11].y1 & 0x8000;
                g_TracedEdgeBuffer[iVar11].y1 = uVar7;
                g_TracedEdgeBuffer[iVar11].y1 = uVar7 | (ushort)local_2c & 0x7fff;
                *(byte *)((int)&g_TracedEdgeBuffer[iVar11].y1 + 1) =
                     *(byte *)((int)&g_TracedEdgeBuffer[iVar11].y1 + 1) & 0x7f;
                iVar12 = iVar11 + 1;
                g_TracedEdgeBuffer[iVar11].y1 = g_TracedEdgeBuffer[iVar11].y1 | 0x8000;
                local_f4 = iVar15;
                local_f0 = iVar13;
                local_4c = iVar4;
                local_14 = iVar4;
              }
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
    } while (iVar13 < local_ec);
  }
  if (iVar11 == 0) {
    if (output_count == (int *)0x0) {
      *(uint *)max_x = 0;
    }
    return output_count;
  }
  if (output_count == (int *)0x0) {
    *(uint *)max_x = 0;
  }
  iVar13 = *(int *)max_x * 8 + iVar11 * 8;
  pvVar5 = shape_memdbg_cpp_debugRealloc_FUN_0050f540
                     (output_count,iVar13,"..\\cockpit\\ckptutil.c",0x8fc);
  if (pvVar5 == (void *)0x0) {
    _sprintf(local_1f4,"Unable to allocate %u bytes for edge list.",iVar13);
    g_CurrentFilename = "..\\cockpit\\ckptutil.c";
    g_CurrentLineNumber = 0x8ff;
    core_main_c_displayErrorAndQuit_FUN_00506f10(local_1f4);
  }
  pSVar3 = g_TracedEdgeBuffer;
  puVar16 = (uint *)(*(int *)max_x * 8 + (int)pvVar5);
  for (uVar8 = (uint)(iVar11 * 8) >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
    *puVar16 = *(uint *)pSVar3;
    pSVar3 = (SEdge *)&pSVar3[-(uint)bVar17].x1;
    puVar16 = puVar16 + (uint)bVar17 * -2 + 1;
  }
  for (iVar13 = 0; iVar13 != 0; iVar13 = iVar13 + -1) {
    *(char *)puVar16 = (char)pSVar3->x0;
    pSVar3 = (SEdge *)((int)pSVar3 + (uint)bVar17 * -2 + 1);
    puVar16 = (uint *)((int)puVar16 + (uint)bVar17 * -2 + 1);
  }
  *(int *)max_x = *(int *)max_x + iVar11;
  return pvVar5;
}
