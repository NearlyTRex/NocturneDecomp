// Name: cockpit_ckptutil.c_traceConnectedEdges_FUN_00434af0
// Address: 00434af0
// Address Range: [[00434af0, 004355b7]]
// Convention: __cdecl
// Signature: void * cockpit_ckptutil.c_traceConnectedEdges_FUN_00434af0(SEdgeList * edge_lists, void * output_buffer, int * output_count, int max_x, int max_y, int gap_tolerance_x, int gap_tolerance_y)
// Globals:
//   TerminatedCString s_Reached_max_trace_edges__00617fa1
//   TerminatedCString s_cockpit_ckptutil_c_00617fd0
//   TerminatedCString s_Reached_max_trace_edges__00617fe6
//   TerminatedCString s_cockpit_ckptutil_c_00618015
//   TerminatedCString s_cockpit_ckptutil_c_0061802b
//   TerminatedCString s_Unable_to_allocate_u_byt_00618041
//   TerminatedCString s_cockpit_ckptutil_c_0061806c
//   SEdge[512] g_TracedEdgeBuffer
//   undefined4 g_TracedEdgeBuffer[0].y0
//   undefined4 g_TracedEdgeBuffer[0].x1
//   undefined4 g_TracedEdgeBuffer[0].y1
//   undefined4 g_TracedEdgeBuffer[0].y1+1
//   undefined4 g_TracedEdgeBuffer[1].x0
//   undefined4 g_TracedEdgeBuffer[1].y0
//   undefined4 g_TracedEdgeBuffer[1].x1
//   undefined4 g_TracedEdgeBuffer[1].y1
//   undefined4 g_TracedEdgeBuffer[1].y1+1
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   crt_stdio.c_sprintf_FUN_005fdbd0
//   shape_memdbg.cpp_debugRealloc_FUN_0050f540

#include "nocturne.h"

void * __cdecl
cockpit_ckptutil_c_traceConnectedEdges_FUN_00434af0
          (SEdgeList *edge_lists,void *output_buffer,int *output_count,int max_x,int max_y,
          int gap_tolerance_x,int gap_tolerance_y)

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
  BADSPACEBASE *in_ESP;
  int iVar13;
  int iVar14;
  int iVar15;
  undefined4 *puVar16;
  byte bVar17;
  int in_stack_00000020;
  int in_stack_00000024;
  char acStack_1ec [248];
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
  undefined4 local_98;
  int local_94;
  int local_90;
  int local_8c;
  undefined4 local_88;
  int local_84;
  int local_80;
  int local_7c;
  undefined4 local_78;
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
  undefined4 local_3c;
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
  local_e8 = (int *)output_buffer;
  if (0 < local_ec) {
    do {
      local_dc = iVar13 + 1;
      local_cc = iVar13 * 0x84;
      local_e0 = 0;
      local_34 = (int *)((int)output_buffer + local_dc * 0x84);
      local_20 = 0;
      local_e4 = local_e8;
      local_80 = local_dc;
      local_70 = local_dc;
      local_68 = local_dc;
      local_2c = local_dc;
      while( true ) {
        piVar2 = (int *)((int)output_buffer + local_cc);
        if (*piVar2 <= local_20) break;
        iVar1 = *(int *)((int)piVar2 + local_e0 + 4);
        iVar14 = *(int *)((int)piVar2 + local_e0 + 0x44) + iVar1;
        iVar15 = iVar14 + -1;
        if (0x1ff < iVar11) {
          crt_stdio_c_sprintf_FUN_005fdbd0
                    (&stack0xfffffe0c,"Reached max trace edges: edges %d, scanline %d",iVar11);
          g_CurrentFilename = "..\\cockpit\\ckptutil.c";
          g_CurrentLineNumber = 0x886;
          core_main_c_displayErrorAndQuit_FUN_00506f10(&stack0xfffffe08);
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
          crt_stdio_c_sprintf_FUN_005fdbd0
                    (&stack0xfffffe0c,"Reached max trace edges: edges %d, scanline %d",iVar11);
          g_CurrentFilename = "..\\cockpit\\ckptutil.c";
          g_CurrentLineNumber = 0x8c0;
          core_main_c_displayErrorAndQuit_FUN_00506f10(&stack0xfffffe10);
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
        local_20 = local_20 + 1;
        local_e4 = local_e4 + 1;
      }
      local_e8 = local_e8 + 0x21;
      iVar13 = iVar13 + 1;
    } while (iVar13 < local_ec);
  }
  if (iVar11 == 0) {
    if (output_count == (int *)0x0) {
      *(undefined4 *)max_x = 0;
    }
    return output_count;
  }
  if (output_count == (int *)0x0) {
    *(undefined4 *)max_x = 0;
  }
  pvVar5 = shape_memdbg_cpp_debugRealloc_FUN_0050f540
                     (output_count,*(int *)max_x * 8 + iVar11 * 8,"..\\cockpit\\ckptutil.c",
                      0x8fc);
  if (pvVar5 == (void *)0x0) {
    crt_stdio_c_sprintf_FUN_005fdbd0(&stack0xfffffe10,"Unable to allocate %u bytes for edge list.");
    g_CurrentFilename = "..\\cockpit\\ckptutil.c";
    g_CurrentLineNumber = 0x8ff;
    core_main_c_displayErrorAndQuit_FUN_00506f10(acStack_1ec);
  }
  pSVar3 = g_TracedEdgeBuffer;
  puVar16 = (undefined4 *)(*(int *)gap_tolerance_y * 8 + gap_tolerance_x);
  for (uVar8 = (uint)(iVar11 * 8) >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
    *puVar16 = *(undefined4 *)pSVar3;
    pSVar3 = (SEdge *)&pSVar3[-(uint)bVar17].x1;
    puVar16 = puVar16 + (uint)bVar17 * -2 + 1;
  }
  for (iVar13 = 0; iVar13 != 0; iVar13 = iVar13 + -1) {
    *(char *)puVar16 = (char)pSVar3->x0;
    pSVar3 = (SEdge *)((int)pSVar3 + (uint)bVar17 * -2 + 1);
    puVar16 = (undefined4 *)((int)puVar16 + (uint)bVar17 * -2 + 1);
  }
  *(int *)gap_tolerance_y = *(int *)gap_tolerance_y + iVar11;
  return (void *)gap_tolerance_x;
}


// Assembly code:
// 00434af0: PUSH EBX
//   Label: cockpit_ckptutil.c_traceConnectedEdges_FUN_00434af0
// 00434af1: PUSH ESI
// 00434af2: PUSH EDI
// 00434af3: PUSH EBP
// 00434af4: SUB ESP,0x1e4
// 00434afa: MOV EDX,dword ptr [ESP + 0x1f8]
//   XREF to: Stack[0x4] (READ)
// 00434b01: XOR EBX,EBX
// 00434b03: TEST EDX,EDX
// 00434b05: JZ 0x00434e1e
//   XREF to: 00434e1e (CONDITIONAL_JUMP)
// 00434b0b: MOV EAX,dword ptr [ESP + 0x208]
//   XREF to: Stack[0x14] (READ)
// 00434b12: DEC EAX
// 00434b13: MOV dword ptr [ESP + 0x1ac],EAX
//   XREF to: Stack[-0x48] (WRITE)
// 00434b1a: MOV EAX,dword ptr [ESP + 0x20c]
//   XREF to: Stack[0x18] (READ)
// 00434b21: DEC EAX
// 00434b22: XOR EBP,EBP
// 00434b24: MOV dword ptr [ESP + 0x108],EAX
//   XREF to: Stack[-0xec] (WRITE)
// 00434b2b: MOV EAX,dword ptr [ESP + 0x1fc]
//   XREF to: Stack[0x8] (READ)
// 00434b32: MOV ECX,dword ptr [ESP + 0x108]
//   XREF to: Stack[-0xec] (READ)
// 00434b39: MOV dword ptr [ESP + 0x10c],EAX
//   XREF to: Stack[-0xe8] (WRITE)
// 00434b40: TEST ECX,ECX
// 00434b42: JLE 0x00434e51
//   XREF to: 00434e51 (CONDITIONAL_JUMP)
// 00434b48: LEA EAX,[EBP + 0x1]
//   Label: LAB_00434b48
// 00434b4b: MOV dword ptr [ESP + 0x1c8],EAX
//   XREF to: Stack[-0x2c] (WRITE)
// 00434b52: MOV dword ptr [ESP + 0x18c],EAX
//   XREF to: Stack[-0x68] (WRITE)
// 00434b59: IMUL EAX,EBP,0x84
// 00434b5f: MOV dword ptr [ESP + 0x128],EAX
//   XREF to: Stack[-0xcc] (WRITE)
// 00434b66: MOV EAX,dword ptr [ESP + 0x1c8]
//   XREF to: Stack[-0x2c] (READ)
// 00434b6d: MOV dword ptr [ESP + 0x184],EAX
//   XREF to: Stack[-0x70] (WRITE)
// 00434b74: MOV dword ptr [ESP + 0x174],EAX
//   XREF to: Stack[-0x80] (WRITE)
// 00434b7b: MOV EDI,EAX
// 00434b7d: IMUL EAX,EAX,0x84
// 00434b83: XOR ESI,ESI
// 00434b85: MOV EDX,dword ptr [ESP + 0x1fc]
//   XREF to: Stack[0x8] (READ)
// 00434b8c: MOV dword ptr [ESP + 0x114],ESI
//   XREF to: Stack[-0xe0] (WRITE)
// 00434b93: ADD EDX,EAX
// 00434b95: MOV EAX,EDI
// 00434b97: MOV dword ptr [ESP + 0x1d4],ESI
//   XREF to: Stack[-0x20] (WRITE)
// 00434b9e: MOV dword ptr [ESP + 0x118],EAX
//   XREF to: Stack[-0xdc] (WRITE)
// 00434ba5: MOV EAX,dword ptr [ESP + 0x10c]
//   XREF to: Stack[-0xe8] (READ)
// 00434bac: MOV dword ptr [ESP + 0x1c0],EDX
//   XREF to: Stack[-0x34] (WRITE)
// 00434bb3: MOV dword ptr [ESP + 0x110],EAX
//   XREF to: Stack[-0xe4] (WRITE)
// 00434bba: MOV EAX,dword ptr [ESP + 0x1fc]
//   Label: LAB_00434bba
//   XREF to: Stack[0x8] (READ)
// 00434bc1: ADD EAX,dword ptr [ESP + 0x128]
//   XREF to: Stack[-0xcc] (READ)
// 00434bc8: MOV EDX,dword ptr [ESP + 0x1d4]
//   XREF to: Stack[-0x20] (READ)
// 00434bcf: CMP EDX,dword ptr [EAX]
// 00434bd1: JGE 0x00434e2d
//   XREF to: 00434e2d (CONDITIONAL_JUMP)
// 00434bd7: ADD EAX,dword ptr [ESP + 0x114]
//   XREF to: Stack[-0xe0] (READ)
// 00434bde: MOV ESI,dword ptr [EAX + 0x4]
// 00434be1: MOV EDI,dword ptr [EAX + 0x44]
// 00434be4: ADD EDI,ESI
// 00434be6: DEC EDI
// 00434be7: CMP EBX,0x200
// 00434bed: JL 0x00434c23
//   XREF to: 00434c23 (CONDITIONAL_JUMP)
// 00434bef: PUSH EBP
// 00434bf0: PUSH EBX
// 00434bf1: PUSH 0x617fa1
//   XREF to: 00617fa1 (DATA)
// 00434bf6: LEA EAX,[ESP + 0xc]
//   XREF to: Stack[-0x1f4] (DATA)
// 00434bfa: PUSH EAX
// 00434bfb: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 00434c00: MOV EAX,0x617fd0
//   XREF to: 00617fd0 (DATA)
// 00434c05: ADD ESP,0x10
// 00434c08: MOV [0x02f0ca48],EAX
//   XREF to: 02f0ca48 (WRITE)
// 00434c0d: MOV EAX,ESP
// 00434c0f: MOV EDX,0x886
// 00434c14: PUSH EAX
// 00434c15: MOV dword ptr [0x02f0ca4c],EDX
//   XREF to: 02f0ca4c (WRITE)
// 00434c1b: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00434c20: ADD ESP,0x4
// 00434c23: TEST ESI,ESI
//   Label: LAB_00434c23
// 00434c25: JLE 0x0043519b
//   XREF to: 0043519b (CONDITIONAL_JUMP)
// 00434c2b: LEA EAX,[ESI + 0x1]
// 00434c2e: MOV dword ptr [ESP + 0x120],EAX
//   XREF to: Stack[-0xd4] (WRITE)
// 00434c35: LEA EAX,[ESI + -0x1]
// 00434c38: XOR ECX,ECX
// 00434c3a: MOV dword ptr [ESP + 0x11c],EAX
//   XREF to: Stack[-0xd8] (WRITE)
// 00434c41: MOV EAX,dword ptr [ESP + 0x110]
//   XREF to: Stack[-0xe4] (READ)
// 00434c48: MOV dword ptr [ESP + 0x130],ECX
//   XREF to: Stack[-0xc4] (WRITE)
// 00434c4f: MOV dword ptr [ESP + 0x1d0],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 00434c56: MOV EAX,dword ptr [ESP + 0x1c0]
//   XREF to: Stack[-0x34] (READ)
// 00434c5d: MOV dword ptr [ESP + 0x148],ECX
//   Label: LAB_00434c5d
//   XREF to: Stack[-0xac] (WRITE)
// 00434c64: MOV dword ptr [ESP + 0x14c],EAX
//   XREF to: Stack[-0xa8] (WRITE)
// 00434c6b: IMUL EAX,dword ptr [ESP + 0x1c8],0x84
//   XREF to: Stack[-0x2c] (READ)
// 00434c76: ADD EAX,dword ptr [ESP + 0x1fc]
//   XREF to: Stack[0x8] (READ)
// 00434c7d: MOV EDX,dword ptr [ESP + 0x148]
//   XREF to: Stack[-0xac] (READ)
// 00434c84: CMP EDX,dword ptr [EAX]
// 00434c86: JGE 0x0043519b
//   XREF to: 0043519b (CONDITIONAL_JUMP)
// 00434c8c: ADD EAX,dword ptr [ESP + 0x130]
//   XREF to: Stack[-0xc4] (READ)
// 00434c93: MOV EDX,dword ptr [EAX + 0x4]
// 00434c96: MOV EAX,dword ptr [EAX + 0x44]
// 00434c99: ADD EAX,EDX
// 00434c9b: DEC EAX
// 00434c9c: XOR ECX,ECX
// 00434c9e: MOV dword ptr [ESP + 0x180],EAX
//   XREF to: Stack[-0x74] (WRITE)
// 00434ca5: MOV EAX,dword ptr [ESP + 0x1d4]
//   XREF to: Stack[-0x20] (READ)
// 00434cac: MOV dword ptr [ESP + 0x1bc],ECX
//   XREF to: Stack[-0x38] (WRITE)
// 00434cb3: TEST EAX,EAX
// 00434cb5: JLE 0x00434cf3
//   XREF to: 00434cf3 (CONDITIONAL_JUMP)
// 00434cb7: MOV EAX,dword ptr [ESP + 0x1d0]
//   XREF to: Stack[-0x24] (READ)
// 00434cbe: MOV EAX,dword ptr [EAX]
// 00434cc0: MOV dword ptr [ESP + 0x1b0],EAX
//   XREF to: Stack[-0x44] (WRITE)
// 00434cc7: MOV EAX,dword ptr [ESP + 0x1d0]
//   XREF to: Stack[-0x24] (READ)
// 00434cce: MOV ECX,dword ptr [ESP + 0x1b0]
//   XREF to: Stack[-0x44] (READ)
// 00434cd5: MOV EAX,dword ptr [EAX + 0x40]
// 00434cd8: ADD ECX,EAX
// 00434cda: LEA EAX,[ECX + -0x1]
// 00434cdd: MOV dword ptr [ESP + 0x19c],EAX
//   XREF to: Stack[-0x58] (WRITE)
// 00434ce4: CMP EDX,EAX
// 00434ce6: JGE 0x00434cf3
//   XREF to: 00434cf3 (CONDITIONAL_JUMP)
// 00434ce8: MOV dword ptr [ESP + 0x1bc],0x1
//   XREF to: Stack[-0x38] (WRITE)
// 00434cf3: CMP EDX,dword ptr [ESP + 0x11c]
//   Label: LAB_00434cf3
//   XREF to: Stack[-0xd8] (READ)
// 00434cfa: JGE 0x00434f60
//   XREF to: 00434f60 (CONDITIONAL_JUMP)
// 00434d00: CMP ESI,dword ptr [ESP + 0x180]
//   XREF to: Stack[-0x74] (READ)
// 00434d07: JG 0x00434f60
//   XREF to: 00434f60 (CONDITIONAL_JUMP)
// 00434d0d: LEA EAX,[EBX*0x8 + 0x0]
// 00434d14: LEA ECX,[EBX + 0x1]
// 00434d17: MOV dword ptr [ESP + 0x1d8],ECX
//   XREF to: Stack[-0x1c] (WRITE)
// 00434d1e: MOV ECX,dword ptr [ESP + 0x1bc]
//   XREF to: Stack[-0x38] (READ)
// 00434d25: ADD EAX,0x823e20
//   XREF to: 00823e20 (DATA)
// 00434d2a: TEST ECX,ECX
// 00434d2c: JZ 0x00434eb6
//   XREF to: 00434eb6 (CONDITIONAL_JUMP)
// 00434d32: MOV ECX,ESI
// 00434d34: SUB ECX,dword ptr [ESP + 0x19c]
//   XREF to: Stack[-0x58] (READ)
// 00434d3b: DEC ECX
// 00434d3c: CMP ECX,dword ptr [ESP + 0x210]
//   XREF to: Stack[0x1c] (READ)
// 00434d43: JG 0x00434f60
//   XREF to: 00434f60 (CONDITIONAL_JUMP)
// 00434d49: XOR EBX,EBX
// 00434d4b: MOV EDX,dword ptr [ESP + 0x19c]
//   XREF to: Stack[-0x58] (READ)
// 00434d52: MOV dword ptr [ESP + 0x15c],EBX
//   XREF to: Stack[-0x98] (WRITE)
// 00434d59: MOV BX,word ptr [EAX]
//   XREF to: 00823e20 (READ)
// 00434d5c: MOV ECX,EBP
// 00434d5e: AND EBX,0xffff0000
// 00434d64: MOV dword ptr [ESP + 0x154],ESI
//   XREF to: Stack[-0xa0] (WRITE)
// 00434d6b: MOV word ptr [EAX],BX
//   XREF to: 00823e20 (WRITE)
// 00434d6e: OR EBX,EDX
// 00434d70: MOV DX,word ptr [EAX + 0x2]
//   XREF to: 00823e22 (READ)
// 00434d74: MOV dword ptr [ESP + 0x158],EBP
//   XREF to: Stack[-0x9c] (WRITE)
// 00434d7b: AND EDX,0xffff0000
// 00434d81: MOV word ptr [EAX],BX
//   XREF to: 00823e20 (WRITE)
// 00434d84: MOV EBX,EDX
// 00434d86: MOV word ptr [EAX + 0x2],DX
//   XREF to: 00823e22 (WRITE)
// 00434d8a: OR EBX,ECX
// 00434d8c: MOV CX,word ptr [EAX + 0x4]
//   XREF to: 00823e24 (READ)
// 00434d90: MOV word ptr [EAX + 0x2],BX
//   XREF to: 00823e22 (WRITE)
// 00434d94: AND ECX,0xffff0000
// 00434d9a: MOV EDX,dword ptr [ESP + 0x154]
//   XREF to: Stack[-0xa0] (READ)
// 00434da1: MOV word ptr [EAX + 0x4],CX
//   XREF to: 00823e24 (WRITE)
// 00434da5: MOV EBX,ECX
// 00434da7: MOV CX,word ptr [EAX + 0x6]
//   XREF to: 00823e26 (READ)
// 00434dab: OR EBX,EDX
// 00434dad: MOV EDX,dword ptr [ESP + 0x158]
//   XREF to: Stack[-0x9c] (READ)
// 00434db4: AND ECX,0xffff8000
// 00434dba: MOV word ptr [EAX + 0x4],BX
//   XREF to: 00823e24 (WRITE)
// 00434dbe: AND DH,0x7f
// 00434dc1: MOV EBX,ECX
// 00434dc3: MOV word ptr [EAX + 0x6],CX
//   XREF to: 00823e26 (WRITE)
// 00434dc7: OR EBX,EDX
// 00434dc9: MOV word ptr [EAX + 0x6],BX
//   XREF to: 00823e26 (WRITE)
// 00434dcd: MOV EDX,dword ptr [ESP + 0x15c]
//   XREF to: Stack[-0x98] (READ)
// 00434dd4: MOV BL,byte ptr [EAX + 0x7]
//   XREF to: 00823e27 (READ)
// 00434dd7: XOR DH,DH
// 00434dd9: AND BL,0x7f
// 00434ddc: AND DL,0x1
// 00434ddf: MOV byte ptr [EAX + 0x7],BL
//   XREF to: 00823e27 (WRITE)
// 00434de2: SHL EDX,0xf
// 00434de5: MOV CX,word ptr [EAX + 0x6]
//   XREF to: 00823e26 (READ)
// 00434de9: OR ECX,EDX
// 00434deb: MOV EBX,dword ptr [ESP + 0x1d8]
//   XREF to: Stack[-0x1c] (READ)
// 00434df2: MOV word ptr [EAX + 0x6],CX
//   Label: LAB_00434df2
//   XREF to: 00823e26 (WRITE)
// 00434df6: MOV EDX,dword ptr [ESP + 0x130]
//   Label: LAB_00434df6
//   XREF to: Stack[-0xc4] (READ)
// 00434dfd: MOV ECX,dword ptr [ESP + 0x148]
//   XREF to: Stack[-0xac] (READ)
// 00434e04: MOV EAX,dword ptr [ESP + 0x14c]
//   XREF to: Stack[-0xa8] (READ)
// 00434e0b: ADD EDX,0x4
// 00434e0e: INC ECX
// 00434e0f: ADD EAX,0x4
// 00434e12: MOV dword ptr [ESP + 0x130],EDX
//   XREF to: Stack[-0xc4] (WRITE)
// 00434e19: JMP 0x00434c5d
//   XREF to: 00434c5d (UNCONDITIONAL_JUMP)
// 00434e1e: XOR ESI,ESI
//   Label: LAB_00434e1e
// 00434e20: MOV EAX,ESI
// 00434e22: ADD ESP,0x1e4
// 00434e28: POP EBP
// 00434e29: POP EDI
// 00434e2a: POP ESI
// 00434e2b: POP EBX
// 00434e2c: RET
// 00434e2d: MOV ESI,dword ptr [ESP + 0x10c]
//   Label: LAB_00434e2d
//   XREF to: Stack[-0xe8] (READ)
// 00434e34: MOV EDI,dword ptr [ESP + 0x108]
//   XREF to: Stack[-0xec] (READ)
// 00434e3b: ADD ESI,0x84
// 00434e41: INC EBP
// 00434e42: MOV dword ptr [ESP + 0x10c],ESI
//   XREF to: Stack[-0xe8] (WRITE)
// 00434e49: CMP EBP,EDI
// 00434e4b: JL 0x00434b48
//   XREF to: 00434b48 (CONDITIONAL_JUMP)
// 00434e51: TEST EBX,EBX
//   Label: LAB_00434e51
// 00434e53: JNZ 0x004354ed
//   XREF to: 004354ed (CONDITIONAL_JUMP)
// 00434e59: CMP dword ptr [ESP + 0x200],0x0
//   XREF to: Stack[0xc] (READ)
// 00434e61: JNZ 0x00434e6c
//   XREF to: 00434e6c (CONDITIONAL_JUMP)
// 00434e63: MOV EAX,dword ptr [ESP + 0x204]
//   XREF to: Stack[0x10] (READ)
// 00434e6a: MOV dword ptr [EAX],EBX
// 00434e6c: MOV ESI,dword ptr [ESP + 0x200]
//   Label: LAB_00434e6c
//   XREF to: Stack[0xc] (READ)
// 00434e73: MOV EAX,ESI
// 00434e75: ADD ESP,0x1e4
// 00434e7b: POP EBP
// 00434e7c: POP EDI
// 00434e7d: POP ESI
// 00434e7e: POP EBX
// 00434e7f: RET
// 00434e80: MOV EDI,dword ptr [ESP + 0x114]
//   Label: LAB_00434e80
//   XREF to: Stack[-0xe0] (READ)
// 00434e87: MOV EAX,dword ptr [ESP + 0x1d4]
//   XREF to: Stack[-0x20] (READ)
// 00434e8e: MOV ESI,dword ptr [ESP + 0x110]
//   XREF to: Stack[-0xe4] (READ)
// 00434e95: ADD EDI,0x4
// 00434e98: INC EAX
// 00434e99: ADD ESI,0x4
// 00434e9c: MOV dword ptr [ESP + 0x114],EDI
//   XREF to: Stack[-0xe0] (WRITE)
// 00434ea3: MOV dword ptr [ESP + 0x1d4],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 00434eaa: MOV dword ptr [ESP + 0x110],ESI
//   XREF to: Stack[-0xe4] (WRITE)
// 00434eb1: JMP 0x00434bba
//   XREF to: 00434bba (UNCONDITIONAL_JUMP)
// 00434eb6: MOV dword ptr [ESP + 0x134],EDX
//   Label: LAB_00434eb6
//   XREF to: Stack[-0xc0] (WRITE)
// 00434ebd: MOV EDX,dword ptr [ESP + 0x118]
//   XREF to: Stack[-0xdc] (READ)
// 00434ec4: MOV EBX,EBP
// 00434ec6: MOV dword ptr [ESP + 0x13c],EDX
//   XREF to: Stack[-0xb8] (WRITE)
// 00434ecd: MOV DX,word ptr [EAX]
//   XREF to: 00823e20 (READ)
// 00434ed0: MOV dword ptr [ESP + 0x144],ECX
//   XREF to: Stack[-0xb0] (WRITE)
// 00434ed7: AND EDX,0xffff0000
// 00434edd: MOV CX,word ptr [EAX + 0x2]
//   XREF to: 00823e22 (READ)
// 00434ee1: MOV word ptr [EAX],DX
//   XREF to: 00823e20 (WRITE)
// 00434ee4: OR EDX,ESI
// 00434ee6: AND ECX,0xffff0000
// 00434eec: MOV word ptr [EAX],DX
//   XREF to: 00823e20 (WRITE)
// 00434eef: MOV EDX,ECX
// 00434ef1: MOV word ptr [EAX + 0x2],CX
//   XREF to: 00823e22 (WRITE)
// 00434ef5: OR EDX,EBX
// 00434ef7: MOV BX,word ptr [EAX + 0x4]
//   XREF to: 00823e24 (READ)
// 00434efb: MOV word ptr [EAX + 0x2],DX
//   XREF to: 00823e22 (WRITE)
// 00434eff: AND EBX,0xffff0000
// 00434f05: MOV EDX,dword ptr [ESP + 0x134]
//   XREF to: Stack[-0xc0] (READ)
// 00434f0c: MOV word ptr [EAX + 0x4],BX
//   XREF to: 00823e24 (WRITE)
// 00434f10: MOV ECX,EBX
// 00434f12: MOV BX,word ptr [EAX + 0x6]
//   XREF to: 00823e26 (READ)
// 00434f16: OR ECX,EDX
// 00434f18: MOV EDX,dword ptr [ESP + 0x13c]
//   XREF to: Stack[-0xb8] (READ)
// 00434f1f: AND EBX,0xffff8000
// 00434f25: MOV word ptr [EAX + 0x4],CX
//   XREF to: 00823e24 (WRITE)
// 00434f29: AND DH,0x7f
// 00434f2c: MOV ECX,EBX
// 00434f2e: MOV word ptr [EAX + 0x6],BX
//   XREF to: 00823e26 (WRITE)
// 00434f32: OR ECX,EDX
// 00434f34: MOV word ptr [EAX + 0x6],CX
//   XREF to: 00823e26 (WRITE)
// 00434f38: MOV EDX,dword ptr [ESP + 0x144]
//   XREF to: Stack[-0xb0] (READ)
// 00434f3f: MOV BL,byte ptr [EAX + 0x7]
//   XREF to: 00823e27 (READ)
// 00434f42: XOR DH,DH
// 00434f44: AND BL,0x7f
// 00434f47: AND DL,0x1
// 00434f4a: MOV byte ptr [EAX + 0x7],BL
//   XREF to: 00823e27 (WRITE)
// 00434f4d: SHL EDX,0xf
// 00434f50: OR word ptr [EAX + 0x6],DX
//   XREF to: 00823e26 (READ_WRITE)
// 00434f54: MOV EBX,dword ptr [ESP + 0x1d8]
//   XREF to: Stack[-0x1c] (READ)
// 00434f5b: JMP 0x00434df6
//   XREF to: 00434df6 (UNCONDITIONAL_JUMP)
// 00434f60: XOR ECX,ECX
//   Label: LAB_00434f60
// 00434f62: MOV EAX,dword ptr [ESP + 0x148]
//   XREF to: Stack[-0xac] (READ)
// 00434f69: MOV dword ptr [ESP + 0x138],ECX
//   XREF to: Stack[-0xbc] (WRITE)
// 00434f70: TEST EAX,EAX
// 00434f72: JLE 0x00434fb0
//   XREF to: 00434fb0 (CONDITIONAL_JUMP)
// 00434f74: MOV EAX,dword ptr [ESP + 0x14c]
//   XREF to: Stack[-0xa8] (READ)
// 00434f7b: MOV EAX,dword ptr [EAX]
// 00434f7d: MOV dword ptr [ESP + 0x1b0],EAX
//   XREF to: Stack[-0x44] (WRITE)
// 00434f84: MOV EAX,dword ptr [ESP + 0x14c]
//   XREF to: Stack[-0xa8] (READ)
// 00434f8b: MOV ECX,dword ptr [ESP + 0x1b0]
//   XREF to: Stack[-0x44] (READ)
// 00434f92: MOV EAX,dword ptr [EAX + 0x40]
// 00434f95: ADD ECX,EAX
// 00434f97: LEA EAX,[ECX + -0x1]
// 00434f9a: MOV dword ptr [ESP + 0x1dc],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 00434fa1: CMP ESI,EAX
// 00434fa3: JGE 0x00434fb0
//   XREF to: 00434fb0 (CONDITIONAL_JUMP)
// 00434fa5: MOV dword ptr [ESP + 0x138],0x1
//   XREF to: Stack[-0xbc] (WRITE)
// 00434fb0: CMP EDX,dword ptr [ESP + 0x120]
//   Label: LAB_00434fb0
//   XREF to: Stack[-0xd4] (READ)
// 00434fb7: JLE 0x00434df6
//   XREF to: 00434df6 (CONDITIONAL_JUMP)
// 00434fbd: CMP EDX,EDI
// 00434fbf: JG 0x00434df6
//   XREF to: 00434df6 (CONDITIONAL_JUMP)
// 00434fc5: CMP dword ptr [ESP + 0x138],0x0
//   XREF to: Stack[-0xbc] (READ)
// 00434fcd: JZ 0x004350cb
//   XREF to: 004350cb (CONDITIONAL_JUMP)
// 00434fd3: CMP dword ptr [ESP + 0x138],0x0
//   Label: LAB_00434fd3
//   XREF to: Stack[-0xbc] (READ)
// 00434fdb: JZ 0x00434df6
//   XREF to: 00434df6 (CONDITIONAL_JUMP)
// 00434fe1: MOV ECX,dword ptr [ESP + 0x1dc]
//   XREF to: Stack[-0x18] (READ)
// 00434fe8: MOV EAX,EDX
// 00434fea: SUB EAX,ECX
// 00434fec: MOV ECX,dword ptr [ESP + 0x214]
//   XREF to: Stack[0x20] (READ)
// 00434ff3: DEC EAX
// 00434ff4: CMP EAX,ECX
// 00434ff6: JG 0x00434df6
//   XREF to: 00434df6 (CONDITIONAL_JUMP)
// 00434ffc: MOV EAX,dword ptr [ESP + 0x1dc]
//   XREF to: Stack[-0x18] (READ)
// 00435003: MOV dword ptr [ESP + 0x170],EAX
//   XREF to: Stack[-0x84] (WRITE)
// 0043500a: MOV EAX,dword ptr [ESP + 0x184]
//   XREF to: Stack[-0x70] (READ)
// 00435011: MOV dword ptr [ESP + 0x178],EDX
//   XREF to: Stack[-0x7c] (WRITE)
// 00435018: MOV dword ptr [ESP + 0x150],EAX
//   XREF to: Stack[-0xa4] (WRITE)
// 0043501f: MOV EDX,EAX
// 00435021: MOV dword ptr [ESP + 0x17c],0x1
//   XREF to: Stack[-0x78] (WRITE)
// 0043502c: LEA EAX,[EBX*0x8 + 0x0]
// 00435033: MOV ECX,dword ptr [ESP + 0x170]
//   XREF to: Stack[-0x84] (READ)
// 0043503a: ADD EAX,0x823e20
//   XREF to: 00823e20 (DATA)
// 0043503f: MOV dword ptr [ESP + 0x1e0],ECX
//   XREF to: Stack[-0x14] (WRITE)
// 00435046: AND word ptr [EAX],0x0
//   XREF to: 00823e20 (READ_WRITE)
// 0043504a: MOV ECX,dword ptr [ESP + 0x1e0]
//   XREF to: Stack[-0x14] (READ)
// 00435051: OR word ptr [EAX],CX
//   XREF to: 00823e20 (READ_WRITE)
// 00435054: MOV ECX,dword ptr [ESP + 0x150]
//   XREF to: Stack[-0xa4] (READ)
// 0043505b: MOV dword ptr [ESP + 0x1e0],ECX
//   XREF to: Stack[-0x14] (WRITE)
// 00435062: AND word ptr [EAX + 0x2],0x0
//   XREF to: 00823e22 (READ_WRITE)
// 00435067: MOV ECX,dword ptr [ESP + 0x1e0]
//   XREF to: Stack[-0x14] (READ)
// 0043506e: OR word ptr [EAX + 0x2],CX
//   XREF to: 00823e22 (READ_WRITE)
// 00435072: MOV ECX,dword ptr [ESP + 0x178]
//   XREF to: Stack[-0x7c] (READ)
// 00435079: MOV dword ptr [ESP + 0x1e0],ECX
//   XREF to: Stack[-0x14] (WRITE)
// 00435080: AND word ptr [EAX + 0x4],0x0
//   XREF to: 00823e24 (READ_WRITE)
// 00435085: MOV ECX,dword ptr [ESP + 0x1e0]
//   XREF to: Stack[-0x14] (READ)
// 0043508c: OR word ptr [EAX + 0x4],CX
//   XREF to: 00823e24 (READ_WRITE)
// 00435090: MOV CX,word ptr [EAX + 0x6]
//   XREF to: 00823e26 (READ)
// 00435094: AND ECX,0xffff8000
// 0043509a: AND DH,0x7f
// 0043509d: MOV word ptr [EAX + 0x6],CX
//   XREF to: 00823e26 (WRITE)
// 004350a1: OR ECX,EDX
// 004350a3: MOV word ptr [EAX + 0x6],CX
//   XREF to: 00823e26 (WRITE)
// 004350a7: MOV EDX,dword ptr [ESP + 0x17c]
//   XREF to: Stack[-0x78] (READ)
// 004350ae: MOV CH,byte ptr [EAX + 0x7]
//   XREF to: 00823e27 (READ)
// 004350b1: XOR DH,DH
// 004350b3: AND CH,0x7f
// 004350b6: AND DL,0x1
// 004350b9: MOV byte ptr [EAX + 0x7],CH
//   XREF to: 00823e27 (WRITE)
// 004350bc: SHL EDX,0xf
// 004350bf: MOV CX,word ptr [EAX + 0x6]
//   XREF to: 00823e26 (READ)
// 004350c3: OR ECX,EDX
// 004350c5: INC EBX
// 004350c6: JMP 0x00434df2
//   XREF to: 00434df2 (UNCONDITIONAL_JUMP)
// 004350cb: MOV EAX,EDX
//   Label: LAB_004350cb
// 004350cd: SUB EAX,ESI
// 004350cf: MOV ECX,dword ptr [ESP + 0x218]
//   XREF to: Stack[0x24] (READ)
// 004350d6: INC EAX
// 004350d7: CMP EAX,ECX
// 004350d9: JG 0x00434fd3
//   XREF to: 00434fd3 (CONDITIONAL_JUMP)
// 004350df: MOV EAX,dword ptr [ESP + 0x174]
//   XREF to: Stack[-0x80] (READ)
// 004350e6: MOV dword ptr [ESP + 0x168],EAX
//   XREF to: Stack[-0x8c] (WRITE)
// 004350ed: MOV dword ptr [ESP + 0x16c],0x1
//   XREF to: Stack[-0x88] (WRITE)
// 004350f8: LEA EAX,[EBX*0x8 + 0x0]
// 004350ff: ADD EAX,0x823e20
//   XREF to: 00823e20 (DATA)
// 00435104: MOV dword ptr [ESP + 0x164],EDX
//   XREF to: Stack[-0x90] (WRITE)
// 0043510b: MOV DX,word ptr [EAX]
//   XREF to: 00823e20 (READ)
// 0043510e: MOV dword ptr [ESP + 0x160],EBP
//   XREF to: Stack[-0x94] (WRITE)
// 00435115: AND EDX,0xffff0000
// 0043511b: MOV CX,word ptr [EAX + 0x2]
//   XREF to: 00823e22 (READ)
// 0043511f: MOV word ptr [EAX],DX
//   XREF to: 00823e20 (WRITE)
// 00435122: OR EDX,ESI
// 00435124: AND ECX,0xffff0000
// 0043512a: MOV word ptr [EAX],DX
//   XREF to: 00823e20 (WRITE)
// 0043512d: MOV EDX,dword ptr [ESP + 0x160]
//   XREF to: Stack[-0x94] (READ)
// 00435134: MOV word ptr [EAX + 0x2],CX
//   XREF to: 00823e22 (WRITE)
// 00435138: OR ECX,EDX
// 0043513a: MOV word ptr [EAX + 0x2],CX
//   XREF to: 00823e22 (WRITE)
// 0043513e: MOV CX,word ptr [EAX + 0x4]
//   XREF to: 00823e24 (READ)
// 00435142: AND ECX,0xffff0000
// 00435148: MOV EDX,dword ptr [ESP + 0x164]
//   XREF to: Stack[-0x90] (READ)
// 0043514f: MOV word ptr [EAX + 0x4],CX
//   XREF to: 00823e24 (WRITE)
// 00435153: OR ECX,EDX
// 00435155: MOV word ptr [EAX + 0x4],CX
//   XREF to: 00823e24 (WRITE)
// 00435159: MOV CX,word ptr [EAX + 0x6]
//   XREF to: 00823e26 (READ)
// 0043515d: MOV EDX,dword ptr [ESP + 0x168]
//   XREF to: Stack[-0x8c] (READ)
// 00435164: AND ECX,0xffff8000
// 0043516a: AND DH,0x7f
// 0043516d: MOV word ptr [EAX + 0x6],CX
//   XREF to: 00823e26 (WRITE)
// 00435171: OR ECX,EDX
// 00435173: MOV word ptr [EAX + 0x6],CX
//   XREF to: 00823e26 (WRITE)
// 00435177: MOV EDX,dword ptr [ESP + 0x16c]
//   XREF to: Stack[-0x88] (READ)
// 0043517e: MOV CL,byte ptr [EAX + 0x7]
//   XREF to: 00823e27 (READ)
// 00435181: XOR DH,DH
// 00435183: AND CL,0x7f
// 00435186: AND DL,0x1
// 00435189: MOV byte ptr [EAX + 0x7],CL
//   XREF to: 00823e27 (WRITE)
// 0043518c: SHL EDX,0xf
// 0043518f: MOV CX,word ptr [EAX + 0x6]
//   XREF to: 00823e26 (READ)
// 00435193: OR ECX,EDX
// 00435195: INC EBX
// 00435196: JMP 0x00434df2
//   XREF to: 00434df2 (UNCONDITIONAL_JUMP)
// 0043519b: CMP EBX,0x200
//   Label: LAB_0043519b
// 004351a1: JL 0x004351d7
//   XREF to: 004351d7 (CONDITIONAL_JUMP)
// 004351a3: PUSH EBP
// 004351a4: PUSH EBX
// 004351a5: PUSH 0x617fe6
//   XREF to: 00617fe6 (DATA)
// 004351aa: LEA EAX,[ESP + 0xc]
//   XREF to: Stack[-0x1f4] (DATA)
// 004351ae: PUSH EAX
// 004351af: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 004351b4: MOV EAX,0x618015
//   XREF to: 00618015 (DATA)
// 004351b9: ADD ESP,0x10
// 004351bc: MOV [0x02f0ca48],EAX
//   XREF to: 02f0ca48 (WRITE)
// 004351c1: MOV EAX,ESP
// 004351c3: MOV EDX,0x8c0
// 004351c8: PUSH EAX
// 004351c9: MOV dword ptr [0x02f0ca4c],EDX
//   XREF to: 02f0ca4c (WRITE)
// 004351cf: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 004351d4: ADD ESP,0x4
// 004351d7: CMP EDI,dword ptr [ESP + 0x1ac]
//   Label: LAB_004351d7
//   XREF to: Stack[-0x48] (READ)
// 004351de: JGE 0x00434e80
//   XREF to: 00434e80 (CONDITIONAL_JUMP)
// 004351e4: XOR EAX,EAX
// 004351e6: MOV dword ptr [ESP + 0x140],EAX
//   XREF to: Stack[-0xb4] (WRITE)
// 004351ed: LEA EAX,[EDI + -0x1]
// 004351f0: MOV dword ptr [ESP + 0x1c4],EAX
//   XREF to: Stack[-0x30] (WRITE)
// 004351f7: LEA EAX,[EDI + 0x1]
// 004351fa: XOR EDX,EDX
// 004351fc: MOV dword ptr [ESP + 0x124],EAX
//   XREF to: Stack[-0xd0] (WRITE)
// 00435203: MOV EAX,dword ptr [ESP + 0x114]
//   XREF to: Stack[-0xe0] (READ)
// 0043520a: MOV dword ptr [ESP + 0x1a4],EDX
//   XREF to: Stack[-0x50] (WRITE)
// 00435211: MOV dword ptr [ESP + 0x1cc],EAX
//   XREF to: Stack[-0x28] (WRITE)
// 00435218: IMUL EAX,dword ptr [ESP + 0x1c8],0x84
//   Label: LAB_00435218
//   XREF to: Stack[-0x2c] (READ)
// 00435223: ADD EAX,dword ptr [ESP + 0x1fc]
//   XREF to: Stack[0x8] (READ)
// 0043522a: MOV EDX,dword ptr [ESP + 0x140]
//   XREF to: Stack[-0xb4] (READ)
// 00435231: CMP EDX,dword ptr [EAX]
// 00435233: JGE 0x00434e80
//   XREF to: 00434e80 (CONDITIONAL_JUMP)
// 00435239: ADD EAX,dword ptr [ESP + 0x1a4]
//   XREF to: Stack[-0x50] (READ)
// 00435240: MOV EDX,dword ptr [EAX + 0x4]
// 00435243: MOV ECX,dword ptr [EAX + 0x44]
// 00435246: MOV dword ptr [ESP + 0x1b4],EDX
//   XREF to: Stack[-0x40] (WRITE)
// 0043524d: LEA EAX,[EDX + ECX*0x1]
// 00435250: XOR EDX,EDX
// 00435252: MOV ECX,dword ptr [ESP + 0x128]
//   XREF to: Stack[-0xcc] (READ)
// 00435259: MOV dword ptr [ESP + 0x194],EDX
//   XREF to: Stack[-0x60] (WRITE)
// 00435260: MOV EDX,dword ptr [ESP + 0x1fc]
//   XREF to: Stack[0x8] (READ)
// 00435267: ADD EDX,ECX
// 00435269: MOV ECX,dword ptr [EDX]
// 0043526b: DEC ECX
// 0043526c: MOV dword ptr [ESP + 0x1b0],ECX
//   XREF to: Stack[-0x44] (WRITE)
// 00435273: MOV ECX,dword ptr [ESP + 0x1d4]
//   XREF to: Stack[-0x20] (READ)
// 0043527a: DEC EAX
// 0043527b: CMP ECX,dword ptr [ESP + 0x1b0]
//   XREF to: Stack[-0x44] (READ)
// 00435282: JGE 0x0043529b
//   XREF to: 0043529b (CONDITIONAL_JUMP)
// 00435284: ADD EDX,dword ptr [ESP + 0x1cc]
//   XREF to: Stack[-0x28] (READ)
// 0043528b: CMP EAX,dword ptr [EDX + 0x8]
// 0043528e: JLE 0x0043529b
//   XREF to: 0043529b (CONDITIONAL_JUMP)
// 00435290: MOV dword ptr [ESP + 0x194],0x1
//   XREF to: Stack[-0x60] (WRITE)
// 0043529b: CMP EAX,dword ptr [ESP + 0x124]
//   Label: LAB_0043529b
//   XREF to: Stack[-0xd0] (READ)
// 004352a2: JLE 0x004352bc
//   XREF to: 004352bc (CONDITIONAL_JUMP)
// 004352a4: CMP EDI,dword ptr [ESP + 0x1b4]
//   XREF to: Stack[-0x40] (READ)
// 004352ab: JL 0x004352bc
//   XREF to: 004352bc (CONDITIONAL_JUMP)
// 004352ad: MOV ECX,dword ptr [ESP + 0x194]
//   XREF to: Stack[-0x60] (READ)
// 004352b4: TEST ECX,ECX
// 004352b6: JZ 0x0043533c
//   XREF to: 0043533c (CONDITIONAL_JUMP)
// 004352bc: XOR EDX,EDX
//   Label: LAB_004352bc
// 004352be: MOV ECX,dword ptr [ESP + 0x1c8]
//   XREF to: Stack[-0x2c] (READ)
// 004352c5: MOV dword ptr [ESP + 0x12c],EDX
//   XREF to: Stack[-0xc8] (WRITE)
// 004352cc: IMUL EDX,ECX,0x84
// 004352d2: ADD EDX,dword ptr [ESP + 0x1fc]
//   XREF to: Stack[0x8] (READ)
// 004352d9: MOV ECX,dword ptr [EDX]
// 004352db: DEC ECX
// 004352dc: MOV dword ptr [ESP + 0x1b0],ECX
//   XREF to: Stack[-0x44] (WRITE)
// 004352e3: MOV ECX,dword ptr [ESP + 0x140]
//   XREF to: Stack[-0xb4] (READ)
// 004352ea: CMP ECX,dword ptr [ESP + 0x1b0]
//   XREF to: Stack[-0x44] (READ)
// 004352f1: JGE 0x0043530a
//   XREF to: 0043530a (CONDITIONAL_JUMP)
// 004352f3: ADD EDX,dword ptr [ESP + 0x1a4]
//   XREF to: Stack[-0x50] (READ)
// 004352fa: CMP EDI,dword ptr [EDX + 0x8]
// 004352fd: JLE 0x0043530a
//   XREF to: 0043530a (CONDITIONAL_JUMP)
// 004352ff: MOV dword ptr [ESP + 0x12c],0x1
//   XREF to: Stack[-0xc8] (WRITE)
// 0043530a: CMP EAX,dword ptr [ESP + 0x1c4]
//   Label: LAB_0043530a
//   XREF to: Stack[-0x30] (READ)
// 00435311: JL 0x004353f8
//   XREF to: 004353f8 (CONDITIONAL_JUMP)
// 00435317: MOV ECX,dword ptr [ESP + 0x140]
//   Label: LAB_00435317
//   XREF to: Stack[-0xb4] (READ)
// 0043531e: MOV EDX,dword ptr [ESP + 0x1a4]
//   XREF to: Stack[-0x50] (READ)
// 00435325: INC ECX
// 00435326: ADD EDX,0x4
// 00435329: MOV dword ptr [ESP + 0x140],ECX
//   XREF to: Stack[-0xb4] (WRITE)
// 00435330: MOV dword ptr [ESP + 0x1a4],EDX
//   XREF to: Stack[-0x50] (WRITE)
// 00435337: JMP 0x00435218
//   XREF to: 00435218 (UNCONDITIONAL_JUMP)
// 0043533c: MOV dword ptr [ESP + 0x190],EAX
//   Label: LAB_0043533c
//   XREF to: Stack[-0x64] (WRITE)
// 00435343: MOV EAX,dword ptr [ESP + 0x18c]
//   XREF to: Stack[-0x68] (READ)
// 0043534a: MOV dword ptr [ESP + 0x198],EAX
//   XREF to: Stack[-0x5c] (WRITE)
// 00435351: LEA EAX,[EBX*0x8 + 0x0]
// 00435358: ADD EAX,0x823e20
//   XREF to: 00823e20 (DATA)
// 0043535d: MOV dword ptr [ESP + 0x1a0],ECX
//   XREF to: Stack[-0x54] (WRITE)
// 00435364: MOV CX,word ptr [EAX]
//   XREF to: 00823e28 (READ)
// 00435367: AND ECX,0xffff0000
// 0043536d: MOV word ptr [EAX],CX
//   XREF to: 00823e28 (WRITE)
// 00435370: OR ECX,EDI
// 00435372: MOV word ptr [EAX],CX
//   XREF to: 00823e28 (WRITE)
// 00435375: MOV CX,word ptr [EAX + 0x2]
//   XREF to: 00823e2a (READ)
// 00435379: MOV dword ptr [ESP + 0x188],EBP
//   XREF to: Stack[-0x6c] (WRITE)
// 00435380: AND ECX,0xffff0000
// 00435386: MOV EDX,dword ptr [ESP + 0x188]
//   XREF to: Stack[-0x6c] (READ)
// 0043538d: MOV word ptr [EAX + 0x2],CX
//   XREF to: 00823e2a (WRITE)
// 00435391: OR ECX,EDX
// 00435393: MOV word ptr [EAX + 0x2],CX
//   XREF to: 00823e2a (WRITE)
// 00435397: MOV CX,word ptr [EAX + 0x4]
//   XREF to: 00823e2c (READ)
// 0043539b: AND ECX,0xffff0000
// 004353a1: MOV EDX,dword ptr [ESP + 0x190]
//   XREF to: Stack[-0x64] (READ)
// 004353a8: MOV word ptr [EAX + 0x4],CX
//   XREF to: 00823e2c (WRITE)
// 004353ac: OR ECX,EDX
// 004353ae: MOV word ptr [EAX + 0x4],CX
//   XREF to: 00823e2c (WRITE)
// 004353b2: MOV CX,word ptr [EAX + 0x6]
//   XREF to: 00823e2e (READ)
// 004353b6: MOV EDX,dword ptr [ESP + 0x198]
//   XREF to: Stack[-0x5c] (READ)
// 004353bd: AND ECX,0xffff8000
// 004353c3: AND DH,0x7f
// 004353c6: MOV word ptr [EAX + 0x6],CX
//   XREF to: 00823e2e (WRITE)
// 004353ca: OR ECX,EDX
// 004353cc: MOV word ptr [EAX + 0x6],CX
//   XREF to: 00823e2e (WRITE)
// 004353d0: MOV EDX,dword ptr [ESP + 0x1a0]
//   XREF to: Stack[-0x54] (READ)
// 004353d7: MOV CL,byte ptr [EAX + 0x7]
//   XREF to: 00823e2f (READ)
// 004353da: XOR DH,DH
// 004353dc: AND CL,0x7f
// 004353df: AND DL,0x1
// 004353e2: MOV byte ptr [EAX + 0x7],CL
//   XREF to: 00823e2f (WRITE)
// 004353e5: SHL EDX,0xf
// 004353e8: MOV CX,word ptr [EAX + 0x6]
//   XREF to: 00823e2e (READ)
// 004353ec: OR ECX,EDX
// 004353ee: INC EBX
// 004353ef: MOV word ptr [EAX + 0x6],CX
//   XREF to: 00823e2e (WRITE)
// 004353f3: JMP 0x00435317
//   XREF to: 00435317 (UNCONDITIONAL_JUMP)
// 004353f8: CMP EAX,ESI
//   Label: LAB_004353f8
// 004353fa: JL 0x00435317
//   XREF to: 00435317 (CONDITIONAL_JUMP)
// 00435400: CMP dword ptr [ESP + 0x12c],0x0
//   XREF to: Stack[-0xc8] (READ)
// 00435408: JNZ 0x00435317
//   XREF to: 00435317 (CONDITIONAL_JUMP)
// 0043540e: MOV EDX,EDI
// 00435410: SUB EDX,EAX
// 00435412: MOV ECX,dword ptr [ESP + 0x218]
//   XREF to: Stack[0x24] (READ)
// 00435419: INC EDX
// 0043541a: CMP EDX,ECX
// 0043541c: JG 0x00435317
//   XREF to: 00435317 (CONDITIONAL_JUMP)
// 00435422: MOV dword ptr [ESP + 0x1a8],EAX
//   XREF to: Stack[-0x4c] (WRITE)
// 00435429: MOV EAX,0x1
// 0043542e: MOV dword ptr [ESP + 0x100],EDI
//   XREF to: Stack[-0xf4] (WRITE)
// 00435435: MOV dword ptr [ESP + 0x1b8],EAX
//   XREF to: Stack[-0x3c] (WRITE)
// 0043543c: LEA EAX,[EBX*0x8 + 0x0]
// 00435443: MOV ECX,dword ptr [ESP + 0x100]
//   XREF to: Stack[-0xf4] (READ)
// 0043544a: ADD EAX,0x823e20
//   XREF to: 00823e20 (DATA)
// 0043544f: MOV dword ptr [ESP + 0x1e0],ECX
//   XREF to: Stack[-0x14] (WRITE)
// 00435456: AND word ptr [EAX],0x0
//   XREF to: 00823e28 (READ_WRITE)
// 0043545a: MOV ECX,dword ptr [ESP + 0x1e0]
//   XREF to: Stack[-0x14] (READ)
// 00435461: MOV dword ptr [ESP + 0x104],EBP
//   XREF to: Stack[-0xf0] (WRITE)
// 00435468: OR word ptr [EAX],CX
//   XREF to: 00823e28 (READ_WRITE)
// 0043546b: MOV ECX,dword ptr [ESP + 0x104]
//   XREF to: Stack[-0xf0] (READ)
// 00435472: MOV dword ptr [ESP + 0x1e0],ECX
//   XREF to: Stack[-0x14] (WRITE)
// 00435479: AND word ptr [EAX + 0x2],0x0
//   XREF to: 00823e2a (READ_WRITE)
// 0043547e: MOV ECX,dword ptr [ESP + 0x1e0]
//   XREF to: Stack[-0x14] (READ)
// 00435485: OR word ptr [EAX + 0x2],CX
//   XREF to: 00823e2a (READ_WRITE)
// 00435489: MOV ECX,dword ptr [ESP + 0x1a8]
//   XREF to: Stack[-0x4c] (READ)
// 00435490: MOV dword ptr [ESP + 0x1e0],ECX
//   XREF to: Stack[-0x14] (WRITE)
// 00435497: AND word ptr [EAX + 0x4],0x0
//   XREF to: 00823e2c (READ_WRITE)
// 0043549c: MOV ECX,dword ptr [ESP + 0x1e0]
//   XREF to: Stack[-0x14] (READ)
// 004354a3: OR word ptr [EAX + 0x4],CX
//   XREF to: 00823e2c (READ_WRITE)
// 004354a7: MOV CX,word ptr [EAX + 0x6]
//   XREF to: 00823e2e (READ)
// 004354ab: MOV EDX,dword ptr [ESP + 0x1c8]
//   XREF to: Stack[-0x2c] (READ)
// 004354b2: AND ECX,0xffff8000
// 004354b8: AND DH,0x7f
// 004354bb: MOV word ptr [EAX + 0x6],CX
//   XREF to: 00823e2e (WRITE)
// 004354bf: OR ECX,EDX
// 004354c1: MOV word ptr [EAX + 0x6],CX
//   XREF to: 00823e2e (WRITE)
// 004354c5: MOV EDX,dword ptr [ESP + 0x1b8]
//   XREF to: Stack[-0x3c] (READ)
// 004354cc: MOV CH,byte ptr [EAX + 0x7]
//   XREF to: 00823e2f (READ)
// 004354cf: XOR DH,DH
// 004354d1: AND CH,0x7f
// 004354d4: AND DL,0x1
// 004354d7: MOV byte ptr [EAX + 0x7],CH
//   XREF to: 00823e2f (WRITE)
// 004354da: SHL EDX,0xf
// 004354dd: MOV CX,word ptr [EAX + 0x6]
//   XREF to: 00823e2e (READ)
// 004354e1: OR ECX,EDX
// 004354e3: INC EBX
// 004354e4: MOV word ptr [EAX + 0x6],CX
//   XREF to: 00823e2e (WRITE)
// 004354e8: JMP 0x00435317
//   XREF to: 00435317 (UNCONDITIONAL_JUMP)
// 004354ed: MOV EBP,dword ptr [ESP + 0x200]
//   Label: LAB_004354ed
//   XREF to: Stack[0xc] (READ)
// 004354f4: TEST EBP,EBP
// 004354f6: JNZ 0x00435501
//   XREF to: 00435501 (CONDITIONAL_JUMP)
// 004354f8: MOV EAX,dword ptr [ESP + 0x204]
//   XREF to: Stack[0x10] (READ)
// 004354ff: MOV dword ptr [EAX],EBP
// 00435501: MOV EDI,dword ptr [ESP + 0x204]
//   Label: LAB_00435501
//   XREF to: Stack[0x10] (READ)
// 00435508: PUSH 0x8fc
// 0043550d: MOV EDI,dword ptr [EDI]
// 0043550f: LEA ESI,[EBX*0x8 + 0x0]
// 00435516: SHL EDI,0x3
// 00435519: PUSH 0x61802b
//   XREF to: 0061802b (DATA)
// 0043551e: ADD EDI,ESI
// 00435520: PUSH EDI
// 00435521: MOV EAX,dword ptr [ESP + 0x20c]
//   XREF to: Stack[0xc] (READ)
// 00435528: PUSH EAX
// 00435529: CALL shape_memdbg.cpp_debugRealloc_FUN_0050f540
//   XREF to: 0050f540 (UNCONDITIONAL_CALL)
// 0043552e: ADD ESP,0x10
// 00435531: MOV dword ptr [ESP + 0x200],EAX
//   XREF to: Stack[0xc] (WRITE)
// 00435538: TEST EAX,EAX
// 0043553a: JNZ 0x00435570
//   XREF to: 00435570 (CONDITIONAL_JUMP)
// 0043553c: PUSH EDI
// 0043553d: PUSH 0x618041
//   XREF to: 00618041 (DATA)
// 00435542: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x1f4] (DATA)
// 00435546: PUSH EAX
// 00435547: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 0043554c: MOV EDX,0x61806c
//   XREF to: 0061806c (DATA)
// 00435551: ADD ESP,0xc
// 00435554: MOV EAX,ESP
// 00435556: MOV ECX,0x8ff
// 0043555b: PUSH EAX
// 0043555c: MOV dword ptr [0x02f0ca48],EDX
//   XREF to: 02f0ca48 (WRITE)
// 00435562: MOV dword ptr [0x02f0ca4c],ECX
//   XREF to: 02f0ca4c (WRITE)
// 00435568: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0043556d: ADD ESP,0x4
// 00435570: MOV EDI,dword ptr [ESP + 0x204]
//   Label: LAB_00435570
//   XREF to: Stack[0x10] (READ)
// 00435577: MOV EBP,dword ptr [ESP + 0x200]
//   XREF to: Stack[0xc] (READ)
// 0043557e: MOV EDI,dword ptr [EDI]
// 00435580: MOV ECX,ESI
// 00435582: SHL EDI,0x3
// 00435585: MOV ESI,0x823e20
//   XREF to: 00823e20 (DATA)
// 0043558a: ADD EDI,EBP
// 0043558c: PUSH EDI
// 0043558d: MOV EAX,ECX
// 0043558f: SHR ECX,0x2
// 00435592: MOVSD.REP ES:EDI,ESI
//   XREF to: 00823e20 (READ)
//   XREF to: 00823e24 (READ)
// 00435594: MOV CL,AL
// 00435596: AND CL,0x3
// 00435599: MOVSB.REP ES:EDI,ESI
//   XREF to: 00823e24 (READ)
// 0043559b: POP EDI
// 0043559c: MOV EAX,dword ptr [ESP + 0x204]
//   XREF to: Stack[0x10] (READ)
// 004355a3: MOV EDX,dword ptr [EAX]
// 004355a5: ADD EDX,EBX
// 004355a7: MOV ESI,EBP
// 004355a9: MOV dword ptr [EAX],EDX
// 004355ab: MOV EAX,ESI
// 004355ad: ADD ESP,0x1e4
// 004355b3: POP EBP
// 004355b4: POP EDI
// 004355b5: POP ESI
// 004355b6: POP EBX
// 004355b7: RET
