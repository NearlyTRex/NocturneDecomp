// Name: cockpit_drawsurf.cpp_CDrawSurface_fillPoly_FUN_00488cd0
// Address: 00488cd0
// Address Range: [[00488cd0, 0048908d]]
// Convention: __cdecl
// Signature: void cockpit_drawsurf.cpp_CDrawSurface_fillPoly_FUN_00488cd0(CDrawSurface * this_ptr, int vertex_count, SPoint2i * vertices)
// Globals:
//   TerminatedCString s_cockpit_drawsurf_cpp_00621e74
//   TerminatedCString s_CDrawSurface_fillPoly_to_00621e8c
//   SEdgeTableEntry[40] g_GlobalEdgeTable
//   undefined4 g_GlobalEdgeTable[0].y_start
//   undefined4 g_GlobalEdgeTable[0].x_fixed_point
//   undefined4 g_GlobalEdgeTable[0].x_increment
//   undefined4 g_GlobalEdgeTable[1].x_start
//   undefined4 g_GlobalEdgeTable[1].x_fixed_point
//   undefined4 g_GlobalEdgeTable[1].x_increment
//   undefined4 g_GlobalEdgeTable[2].x_start
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   cockpit_drawsurf.cpp_CDrawSurface_drawHorizontalLine_FUN_00488110
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   crt_string.c_memmove_FUN_005fe5e0

#include "nocturne.h"

void __cdecl
cockpit_drawsurf_cpp_CDrawSurface_fillPoly_FUN_00488cd0
          (CDrawSurface *this_ptr,int vertex_count,SPoint2i *vertices)

{
  undefined4 uVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  BADSPACEBASE *in_ESP;
  int iVar7;
  int iVar8;
  int *piVar9;
  int *piVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  SEdgeTableEntry *pSVar13;
  SEdgeTableEntry *pSVar14;
  undefined4 *puVar15;
  undefined4 *puVar16;
  byte bVar17;
  int aiStackY_1818 [1483];
  int local_dc;
  int aiStack_d8 [39];
  undefined4 local_3c;
  int aiStack_38 [4];
  SPoint2i *local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  bVar17 = 0;
  if (2 < vertex_count) {
    iVar8 = vertex_count + -1;
    local_24 = 0;
    local_20 = 0;
    if (0 < vertex_count) {
      local_28 = vertices;
      pSVar13 = g_GlobalEdgeTable;
      do {
        iVar7 = vertices[iVar8].x + this_ptr->x;
        iVar4 = local_28->x + this_ptr->x;
        iVar8 = vertices[iVar8].y + this_ptr->y;
        iVar5 = local_28->y + this_ptr->y;
        aiStack_38[3] = iVar4;
        pSVar14 = pSVar13;
        if (iVar8 != iVar5) {
          iVar6 = iVar5;
          if (iVar5 < iVar8) {
            aiStack_38[3] = iVar7;
            iVar6 = iVar8;
            iVar7 = iVar4;
            iVar8 = iVar5;
          }
          if ((this_ptr->clip_top <= iVar6) && (iVar8 <= this_ptr->clip_bottom)) {
            if (0x27 < local_20) {
              g_CurrentFilename = "..\\cockpit\\drawsurf.cpp";
              g_CurrentLineNumber = 0x578;
              core_main_c_displayErrorAndQuit_FUN_00506f10("CDrawSurface::fillPoly - too many edges!");
            }
            pSVar13->x_fixed_point = iVar7 << 0x10;
            pSVar13->y_start = iVar6;
            local_20 = local_20 + 1;
            pSVar13->x_start = iVar8;
            pSVar13->x_increment =
                 (int)(((longlong)(aiStack_38[3] - iVar7) * 0x10000) / (longlong)(iVar6 - iVar8));
            pSVar14 = pSVar13 + 1;
            if (pSVar13->x_start < this_ptr->clip_top) {
              pSVar13->x_fixed_point =
                   pSVar13->x_fixed_point +
                   (this_ptr->clip_top - pSVar13->x_start) * pSVar13->x_increment;
              pSVar13->x_start = this_ptr->clip_top;
            }
            if (this_ptr->clip_bottom < pSVar13->y_start) {
              pSVar13->y_start = this_ptr->clip_bottom;
            }
          }
        }
        iVar8 = local_24;
        local_24 = local_24 + 1;
        local_28 = local_28 + 1;
        pSVar13 = pSVar14;
      } while (local_24 < vertex_count);
    }
    iVar8 = local_20;
    if (1 < local_20) {
      while (iVar8 = iVar8 + -1, 0 < iVar8) {
        if (0 < iVar8) {
          iVar7 = 0;
          do {
            if (*(int *)((int)&g_GlobalEdgeTable[1].x_start + iVar7) <
                *(int *)((int)&g_GlobalEdgeTable[0].x_start + iVar7)) {
              piVar9 = (int *)(iVar7 + 0x2c6d2d4 + (uint)bVar17 * -8);
              local_3c = *(undefined4 *)((int)&g_GlobalEdgeTable[0].x_start + iVar7);
              piVar10 = piVar9 + (uint)bVar17 * -2 + 1;
              aiStack_38[(uint)bVar17 * -2] = *piVar9;
              aiStack_38[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 1] = *piVar10;
              (aiStack_38 + (uint)bVar17 * -2 + (uint)bVar17 * -2 + 1)[(uint)bVar17 * -2 + 1] =
                   piVar10[(uint)bVar17 * -2 + 1];
              puVar15 = (undefined4 *)(iVar7 + 0x2c6d2d4 + (uint)bVar17 * -8);
              puVar11 = (undefined4 *)(iVar7 + 0x2c6d2e4 + (uint)bVar17 * -8);
              *(undefined4 *)((int)&g_GlobalEdgeTable[0].x_start + iVar7) =
                   *(undefined4 *)((int)&g_GlobalEdgeTable[1].x_start + iVar7);
              puVar16 = puVar15 + (uint)bVar17 * -2 + 1;
              puVar12 = puVar11 + (uint)bVar17 * -2 + 1;
              *puVar15 = *puVar11;
              *puVar16 = *puVar12;
              puVar16[(uint)bVar17 * -2 + 1] = puVar12[(uint)bVar17 * -2 + 1];
              piVar9 = (int *)(iVar7 + 0x2c6d2e4 + (uint)bVar17 * -8);
              *(undefined4 *)((int)&g_GlobalEdgeTable[1].x_start + iVar7) = local_3c;
              piVar10 = piVar9 + (uint)bVar17 * -2 + 1;
              *piVar9 = aiStack_38[(uint)bVar17 * -2];
              *piVar10 = aiStack_38[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 1];
              piVar10[(uint)bVar17 * -2 + 1] =
                   (aiStack_38 + (uint)bVar17 * -2 + (uint)bVar17 * -2 + 1)[(uint)bVar17 * -2 + 1];
            }
            iVar7 = iVar7 + 0x10;
          } while (iVar7 < iVar8 * 0x10);
        }
      }
      iVar7 = 0;
      iVar8 = 0;
      local_14 = g_GlobalEdgeTable[0].x_start;
      if (0 < local_20) {
        do {
          local_18 = iVar8 << 4;
          do {
            while( true ) {
              if ((local_20 <= iVar8) ||
                 (local_14 < *(int *)((int)&g_GlobalEdgeTable[0].x_start + local_18))) break;
              aiStack_d8[iVar7 + -1] = iVar8;
              iVar7 = iVar7 + 1;
              iVar8 = iVar8 + 1;
              local_18 = local_18 + 0x10;
            }
            local_1c = iVar7 + -1;
            do {
              iVar4 = 0;
              iVar5 = local_1c * 4;
              bVar3 = false;
              if (0 < iVar5) {
                do {
                  if (g_GlobalEdgeTable[*(int *)((int)aiStack_d8 + iVar4)].x_fixed_point <
                      g_GlobalEdgeTable[*(int *)((int)aiStack_d8 + iVar4 + -4)].x_fixed_point) {
                    uVar1 = *(undefined4 *)((int)aiStack_d8 + iVar4 + -4);
                    *(undefined4 *)((int)aiStack_d8 + iVar4 + -4) =
                         *(undefined4 *)((int)aiStack_d8 + iVar4);
                    bVar3 = true;
                    *(undefined4 *)((int)aiStack_d8 + iVar4) = uVar1;
                  }
                  iVar4 = iVar4 + 4;
                } while (iVar4 < iVar5);
              }
            } while (bVar3);
            if (1 < iVar7) {
              iVar4 = 4;
              do {
                iVar6 = iVar4 + -4;
                iVar5 = iVar4 + -8;
                iVar4 = iVar4 + 8;
                cockpit_drawsurf_cpp_CDrawSurface_drawHorizontalLine_FUN_00488110
                          (this_ptr,(g_GlobalEdgeTable[*(int *)((int)aiStack_d8 + iVar5)].
                                     x_fixed_point >> 0x10) - this_ptr->x,local_14 - this_ptr->y,
                           (g_GlobalEdgeTable[*(int *)((int)aiStack_d8 + iVar6)].x_fixed_point >>
                           0x10) - this_ptr->x);
              } while (SBORROW4(iVar4,iVar7 * 4) != iVar4 + iVar7 * -4 < 0);
            }
            iVar4 = 0;
            local_14 = local_14 + 1;
            if (0 < iVar7) {
              iVar5 = 0;
              do {
                iVar2 = *(int *)((int)aiStack_d8 + iVar5 + -4);
                iVar6 = iVar5 + 4;
                if (local_14 < g_GlobalEdgeTable[iVar2].y_start) {
                  iVar4 = iVar4 + 1;
                  g_GlobalEdgeTable[iVar2].x_fixed_point =
                       g_GlobalEdgeTable[iVar2].x_fixed_point + g_GlobalEdgeTable[iVar2].x_increment
                  ;
                }
                else {
                  iVar7 = iVar7 + -1;
                  crt_string_c_memmove_FUN_005fe5e0
                            ((void *)((int)aiStack_d8 + iVar5 + -4),
                             (void *)((int)aiStack_d8 + iVar5),(iVar7 - iVar4) * 4);
                  iVar6 = iVar5;
                }
                iVar5 = iVar6;
              } while (iVar4 < iVar7);
            }
          } while (0 < iVar7);
        } while (iVar8 < local_20);
      }
    }
  }
  return;
}


// Assembly code:
// 00488cd0: PUSH EBX
//   Label: cockpit_drawsurf.cpp_CDrawSurface_fillPoly_FUN_00488cd0
// 00488cd1: PUSH ESI
// 00488cd2: PUSH EDI
// 00488cd3: PUSH EBP
// 00488cd4: SUB ESP,0xcc
// 00488cda: MOV EDX,dword ptr [ESP + 0xe4]
//   XREF to: Stack[0x8] (READ)
// 00488ce1: CMP EDX,0x3
// 00488ce4: JL 0x00488f5b
//   XREF to: 00488f5b (CONDITIONAL_JUMP)
// 00488cea: XOR ECX,ECX
// 00488cec: LEA EBX,[EDX + -0x1]
// 00488cef: MOV dword ptr [ESP + 0xb8],ECX
//   XREF to: Stack[-0x24] (WRITE)
// 00488cf6: MOV dword ptr [ESP + 0xbc],ECX
//   XREF to: Stack[-0x20] (WRITE)
// 00488cfd: TEST EDX,EDX
// 00488cff: JLE 0x00488d95
//   XREF to: 00488d95 (CONDITIONAL_JUMP)
// 00488d05: MOV EAX,dword ptr [ESP + 0xe8]
//   XREF to: Stack[0xc] (READ)
// 00488d0c: MOV EDI,0x2c6d2d0
//   XREF to: 02c6d2d0 (DATA)
// 00488d11: MOV dword ptr [ESP + 0xb4],EAX
//   XREF to: Stack[-0x28] (WRITE)
// 00488d18: MOV ESI,dword ptr [ESP + 0xe8]
//   Label: LAB_00488d18
//   XREF to: Stack[0xc] (READ)
// 00488d1f: MOV EAX,dword ptr [ESP + 0xe0]
//   XREF to: Stack[0x4] (READ)
// 00488d26: MOV EBP,dword ptr [ESI + EBX*0x8]
// 00488d29: MOV EDX,dword ptr [EAX + 0x8]
// 00488d2c: MOV ECX,dword ptr [EAX + 0xc]
// 00488d2f: MOV EAX,dword ptr [ESP + 0xb4]
//   XREF to: Stack[-0x28] (READ)
// 00488d36: ADD EBP,EDX
// 00488d38: MOV EDX,dword ptr [ESP + 0xe0]
//   XREF to: Stack[0x4] (READ)
// 00488d3f: MOV ESI,dword ptr [ESI + EBX*0x8 + 0x4]
// 00488d43: MOV EAX,dword ptr [EAX]
// 00488d45: ADD EAX,dword ptr [EDX + 0x8]
// 00488d48: MOV EBX,dword ptr [ESP + 0xb4]
//   XREF to: Stack[-0x28] (READ)
// 00488d4f: MOV EDX,dword ptr [EDX + 0xc]
// 00488d52: MOV EBX,dword ptr [EBX + 0x4]
// 00488d55: ADD ESI,ECX
// 00488d57: ADD EBX,EDX
// 00488d59: MOV dword ptr [ESP + 0xb0],EAX
//   XREF to: Stack[-0x2c] (WRITE)
// 00488d60: CMP ESI,EBX
// 00488d62: JNZ 0x00488f66
//   XREF to: 00488f66 (CONDITIONAL_JUMP)
// 00488d68: MOV EBX,dword ptr [ESP + 0xb8]
//   Label: LAB_00488d68
//   XREF to: Stack[-0x24] (READ)
// 00488d6f: MOV EBP,dword ptr [ESP + 0xb4]
//   XREF to: Stack[-0x28] (READ)
// 00488d76: MOV EDX,dword ptr [ESP + 0xe4]
//   XREF to: Stack[0x8] (READ)
// 00488d7d: ADD EBP,0x8
// 00488d80: LEA EAX,[EBX + 0x1]
// 00488d83: MOV dword ptr [ESP + 0xb4],EBP
//   XREF to: Stack[-0x28] (WRITE)
// 00488d8a: MOV dword ptr [ESP + 0xb8],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 00488d91: CMP EAX,EDX
// 00488d93: JL 0x00488d18
//   XREF to: 00488d18 (CONDITIONAL_JUMP)
// 00488d95: MOV ECX,dword ptr [ESP + 0xbc]
//   Label: LAB_00488d95
//   XREF to: Stack[-0x20] (READ)
// 00488d9c: CMP ECX,0x2
// 00488d9f: JL 0x00488f5b
//   XREF to: 00488f5b (CONDITIONAL_JUMP)
// 00488da5: LEA EBX,[ECX + -0x1]
// 00488da8: TEST EBX,EBX
// 00488daa: JLE 0x00488e01
//   XREF to: 00488e01 (CONDITIONAL_JUMP)
// 00488dac: JLE 0x00488dfc
//   Label: LAB_00488dac
//   XREF to: 00488dfc (CONDITIONAL_JUMP)
// 00488dae: MOV ECX,EBX
// 00488db0: XOR EAX,EAX
// 00488db2: SHL ECX,0x4
// 00488db5: MOV EDI,dword ptr [EAX + 0x2c6d2e0]
//   Label: LAB_00488db5
//   XREF to: 02c6d2e0 (READ)
//   XREF to: 02c6d2f0 (READ)
// 00488dbb: CMP EDI,dword ptr [EAX + 0x2c6d2d0]
//   XREF to: 02c6d2d0 (READ)
//   XREF to: 02c6d2e0 (READ)
// 00488dc1: JGE 0x00488df5
//   XREF to: 00488df5 (CONDITIONAL_JUMP)
// 00488dc3: LEA EDI,[ESP + 0xa0]
//   XREF to: Stack[-0x3c] (DATA)
// 00488dca: LEA ESI,[EAX + 0x2c6d2d0]
//   XREF to: 02c6d2d0 (DATA)
// 00488dd0: MOVSD ES:EDI,ESI
//   XREF to: 02c6d2d0 (READ)
//   XREF to: 02c6d2e0 (READ)
// 00488dd1: MOVSD ES:EDI,ESI
//   XREF to: 02c6d2d4 (READ)
//   XREF to: 02c6d2e4 (READ)
// 00488dd2: MOVSD ES:EDI,ESI
//   XREF to: 02c6d2d8 (READ)
//   XREF to: 02c6d2e8 (READ)
// 00488dd3: MOVSD ES:EDI,ESI
//   XREF to: 02c6d2dc (READ)
//   XREF to: 02c6d2ec (READ)
// 00488dd4: LEA EDI,[EAX + 0x2c6d2d0]
//   XREF to: 02c6d2d0 (DATA)
// 00488dda: LEA ESI,[EAX + 0x2c6d2e0]
//   XREF to: 02c6d2e0 (DATA)
// 00488de0: MOVSD ES:EDI,ESI
//   XREF to: 02c6d2e0 (READ)
//   XREF to: 02c6d2d0 (WRITE)
// 00488de1: MOVSD ES:EDI,ESI
//   XREF to: 02c6d2e4 (READ)
//   XREF to: 02c6d2d4 (WRITE)
// 00488de2: MOVSD ES:EDI,ESI
//   XREF to: 02c6d2e8 (READ)
//   XREF to: 02c6d2d8 (WRITE)
// 00488de3: MOVSD ES:EDI,ESI
//   XREF to: 02c6d2ec (READ)
//   XREF to: 02c6d2dc (WRITE)
// 00488de4: LEA ESI,[ESP + 0xa0]
//   XREF to: Stack[-0x3c] (DATA)
// 00488deb: LEA EDI,[EAX + 0x2c6d2e0]
//   XREF to: 02c6d2e0 (DATA)
// 00488df1: MOVSD ES:EDI,ESI
//   XREF to: 02c6d2e0 (WRITE)
// 00488df2: MOVSD ES:EDI,ESI
//   XREF to: 02c6d2e4 (WRITE)
// 00488df3: MOVSD ES:EDI,ESI
//   XREF to: 02c6d2e8 (WRITE)
// 00488df4: MOVSD ES:EDI,ESI
//   XREF to: 02c6d2ec (WRITE)
// 00488df5: ADD EAX,0x10
//   Label: LAB_00488df5
// 00488df8: CMP EAX,ECX
// 00488dfa: JL 0x00488db5
//   XREF to: 00488db5 (CONDITIONAL_JUMP)
// 00488dfc: DEC EBX
//   Label: LAB_00488dfc
// 00488dfd: TEST EBX,EBX
// 00488dff: JG 0x00488dac
//   XREF to: 00488dac (CONDITIONAL_JUMP)
// 00488e01: MOV ESI,dword ptr [ESP + 0xbc]
//   Label: LAB_00488e01
//   XREF to: Stack[-0x20] (READ)
// 00488e08: MOV EAX,[0x02c6d2d0]
//   XREF to: 02c6d2d0 (READ)
// 00488e0d: XOR EDI,EDI
// 00488e0f: XOR EBP,EBP
// 00488e11: MOV dword ptr [ESP + 0xc8],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 00488e18: TEST ESI,ESI
// 00488e1a: JLE 0x00488f5b
//   XREF to: 00488f5b (CONDITIONAL_JUMP)
// 00488e20: MOV EAX,EBP
//   Label: LAB_00488e20
// 00488e22: SHL EAX,0x4
// 00488e25: MOV dword ptr [ESP + 0xc4],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 00488e2c: CMP EBP,dword ptr [ESP + 0xbc]
//   Label: LAB_00488e2c
//   XREF to: Stack[-0x20] (READ)
// 00488e33: JL 0x00489048
//   XREF to: 00489048 (CONDITIONAL_JUMP)
// 00488e39: LEA EAX,[EDI + -0x1]
//   Label: LAB_00488e39
// 00488e3c: MOV dword ptr [ESP + 0xc0],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 00488e43: MOV EBX,dword ptr [ESP + 0xc0]
//   Label: LAB_00488e43
//   XREF to: Stack[-0x1c] (READ)
// 00488e4a: XOR EAX,EAX
// 00488e4c: SHL EBX,0x2
// 00488e4f: XOR ESI,ESI
// 00488e51: TEST EBX,EBX
// 00488e53: JLE 0x00488e8a
//   XREF to: 00488e8a (CONDITIONAL_JUMP)
// 00488e55: MOV EDX,dword ptr [ESP + EAX*0x1]
//   Label: LAB_00488e55
//   XREF to: Stack[-0xdc] (DATA)
// 00488e58: MOV ECX,dword ptr [ESP + EAX*0x1 + 0x4]
// 00488e5c: SHL EDX,0x4
// 00488e5f: SHL ECX,0x4
// 00488e62: MOV EDX,dword ptr [EDX + 0x2c6d2d8]
//   XREF to: 02c6d2d8 (DATA)
// 00488e68: CMP EDX,dword ptr [ECX + 0x2c6d2d8]
//   XREF to: 02c6d2d8 (DATA)
// 00488e6e: JLE 0x00488e83
//   XREF to: 00488e83 (CONDITIONAL_JUMP)
// 00488e70: MOV EDX,dword ptr [ESP + EAX*0x1 + 0x4]
// 00488e74: MOV ECX,dword ptr [ESP + EAX*0x1]
//   XREF to: Stack[-0xdc] (DATA)
// 00488e77: MOV dword ptr [ESP + EAX*0x1],EDX
//   XREF to: Stack[-0xdc] (DATA)
// 00488e7a: MOV ESI,0x1
// 00488e7f: MOV dword ptr [ESP + EAX*0x1 + 0x4],ECX
// 00488e83: ADD EAX,0x4
//   Label: LAB_00488e83
// 00488e86: CMP EAX,EBX
// 00488e88: JL 0x00488e55
//   XREF to: 00488e55 (CONDITIONAL_JUMP)
// 00488e8a: TEST ESI,ESI
//   Label: LAB_00488e8a
// 00488e8c: JNZ 0x00488e43
//   XREF to: 00488e43 (CONDITIONAL_JUMP)
// 00488e8e: CMP EDI,0x1
// 00488e91: JLE 0x00488eee
//   XREF to: 00488eee (CONDITIONAL_JUMP)
// 00488e93: MOV EBX,0x4
// 00488e98: LEA ESI,[EDI*0x4 + 0x0]
// 00488e9f: MOV EAX,dword ptr [ESP + EBX*0x1]
//   Label: LAB_00488e9f
// 00488ea2: SHL EAX,0x4
// 00488ea5: MOV EDX,dword ptr [ESP + 0xe0]
//   XREF to: Stack[0x4] (READ)
// 00488eac: MOV EAX,dword ptr [EAX + 0x2c6d2d8]
//   XREF to: 02c6d2d8 (DATA)
// 00488eb2: MOV ECX,dword ptr [EDX + 0x8]
// 00488eb5: SAR EAX,0x10
// 00488eb8: SUB EAX,ECX
// 00488eba: PUSH EAX
// 00488ebb: MOV ECX,dword ptr [EDX + 0xc]
// 00488ebe: MOV EAX,dword ptr [ESP + 0xcc]
//   XREF to: Stack[-0x14] (READ)
// 00488ec5: SUB EAX,ECX
// 00488ec7: PUSH EAX
// 00488ec8: MOV EAX,dword ptr [ESP + EBX*0x1 + 0x4]
// 00488ecc: SHL EAX,0x4
// 00488ecf: MOV EAX,dword ptr [EAX + 0x2c6d2d8]
//   XREF to: 02c6d2d8 (DATA)
// 00488ed5: MOV ECX,dword ptr [EDX + 0x8]
// 00488ed8: SAR EAX,0x10
// 00488edb: SUB EAX,ECX
// 00488edd: PUSH EAX
// 00488ede: PUSH EDX
// 00488edf: ADD EBX,0x8
// 00488ee2: CALL cockpit_drawsurf.cpp_CDrawSurface_drawHorizontalLine_FUN_00488110
//   XREF to: 00488110 (UNCONDITIONAL_CALL)
// 00488ee7: ADD ESP,0x10
// 00488eea: CMP EBX,ESI
// 00488eec: JL 0x00488e9f
//   XREF to: 00488e9f (CONDITIONAL_JUMP)
// 00488eee: MOV EDX,dword ptr [ESP + 0xc8]
//   Label: LAB_00488eee
//   XREF to: Stack[-0x14] (READ)
// 00488ef5: INC EDX
// 00488ef6: XOR EBX,EBX
// 00488ef8: MOV dword ptr [ESP + 0xc8],EDX
//   XREF to: Stack[-0x14] (WRITE)
// 00488eff: TEST EDI,EDI
// 00488f01: JLE 0x00488f46
//   XREF to: 00488f46 (CONDITIONAL_JUMP)
// 00488f03: XOR ESI,ESI
// 00488f05: MOV EAX,dword ptr [ESP + ESI*0x1]
//   Label: LAB_00488f05
//   XREF to: Stack[-0xdc] (DATA)
// 00488f08: SHL EAX,0x4
// 00488f0b: ADD EAX,0x2c6d2d0
//   XREF to: 02c6d2d0 (DATA)
// 00488f10: MOV ECX,dword ptr [ESP + 0xc8]
//   XREF to: Stack[-0x14] (READ)
// 00488f17: LEA EDX,[ESI + 0x4]
// 00488f1a: CMP ECX,dword ptr [EAX + 0x4]
//   XREF to: 02c6d2d4 (DATA)
// 00488f1d: JL 0x0048907d
//   XREF to: 0048907d (CONDITIONAL_JUMP)
// 00488f23: DEC EDI
// 00488f24: MOV EAX,EDI
// 00488f26: SUB EAX,EBX
// 00488f28: SHL EAX,0x2
// 00488f2b: PUSH EAX
// 00488f2c: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0xdc] (DATA)
// 00488f30: ADD EAX,EDX
// 00488f32: PUSH EAX
// 00488f33: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0xdc] (DATA)
// 00488f37: ADD EAX,ESI
// 00488f39: PUSH EAX
// 00488f3a: CALL crt_string.c_memmove_FUN_005fe5e0
//   XREF to: 005fe5e0 (UNCONDITIONAL_CALL)
// 00488f3f: ADD ESP,0xc
// 00488f42: CMP EBX,EDI
//   Label: LAB_00488f42
// 00488f44: JL 0x00488f05
//   XREF to: 00488f05 (CONDITIONAL_JUMP)
// 00488f46: TEST EDI,EDI
//   Label: LAB_00488f46
// 00488f48: JG 0x00488e2c
//   XREF to: 00488e2c (CONDITIONAL_JUMP)
// 00488f4e: CMP EBP,dword ptr [ESP + 0xbc]
//   XREF to: Stack[-0x20] (READ)
// 00488f55: JL 0x00488e20
//   XREF to: 00488e20 (CONDITIONAL_JUMP)
// 00488f5b: ADD ESP,0xcc
//   Label: LAB_00488f5b
// 00488f61: POP EBP
// 00488f62: POP EDI
// 00488f63: POP ESI
// 00488f64: POP EBX
// 00488f65: RET
// 00488f66: JLE 0x00488f7e
//   Label: LAB_00488f66
//   XREF to: 00488f7e (CONDITIONAL_JUMP)
// 00488f68: MOV EAX,ESI
// 00488f6a: MOV ESI,EBX
// 00488f6c: MOV EBX,EAX
// 00488f6e: MOV EAX,EBP
// 00488f70: MOV EBP,dword ptr [ESP + 0xb0]
//   XREF to: Stack[-0x2c] (READ)
// 00488f77: MOV dword ptr [ESP + 0xb0],EAX
//   XREF to: Stack[-0x2c] (WRITE)
// 00488f7e: MOV EAX,dword ptr [ESP + 0xe0]
//   Label: LAB_00488f7e
//   XREF to: Stack[0x4] (READ)
// 00488f85: CMP EBX,dword ptr [EAX + 0x14]
// 00488f88: JL 0x00488d68
//   XREF to: 00488d68 (CONDITIONAL_JUMP)
// 00488f8e: CMP ESI,dword ptr [EAX + 0x1c]
// 00488f91: JG 0x00488d68
//   XREF to: 00488d68 (CONDITIONAL_JUMP)
// 00488f97: CMP dword ptr [ESP + 0xbc],0x28
//   XREF to: Stack[-0x20] (READ)
// 00488f9f: JL 0x00488fc3
//   XREF to: 00488fc3 (CONDITIONAL_JUMP)
// 00488fa1: MOV EAX,0x621e74
//   XREF to: 00621e74 (DATA)
// 00488fa6: MOV EDX,0x578
// 00488fab: PUSH 0x621e8c
//   XREF to: 00621e8c (DATA)
// 00488fb0: MOV [0x02f0ca48],EAX
//   XREF to: 02f0ca48 (WRITE)
// 00488fb5: MOV dword ptr [0x02f0ca4c],EDX
//   XREF to: 02f0ca4c (WRITE)
// 00488fbb: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00488fc0: ADD ESP,0x4
// 00488fc3: MOV EAX,EBP
//   Label: LAB_00488fc3
// 00488fc5: SHL EAX,0x10
// 00488fc8: MOV EDX,0x10000
// 00488fcd: MOV dword ptr [EDI + 0x8],EAX
//   XREF to: 02c6d2d8 (WRITE)
// 00488fd0: MOV EAX,dword ptr [ESP + 0xbc]
//   XREF to: Stack[-0x20] (READ)
// 00488fd7: MOV ECX,EDI
// 00488fd9: INC EAX
// 00488fda: MOV dword ptr [EDI + 0x4],EBX
//   XREF to: 02c6d2d4 (WRITE)
// 00488fdd: MOV dword ptr [ESP + 0xbc],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 00488fe4: MOV EAX,dword ptr [ESP + 0xb0]
//   XREF to: Stack[-0x2c] (READ)
// 00488feb: SUB EBX,ESI
// 00488fed: SUB EAX,EBP
// 00488fef: MOV dword ptr [EDI],ESI
//   XREF to: 02c6d2d0 (WRITE)
// 00488ff1: IMUL EDX
// 00488ff3: IDIV EBX
// 00488ff5: MOV dword ptr [ECX + 0xc],EAX
//   XREF to: 02c6d2dc (WRITE)
// 00488ff8: MOV EDX,dword ptr [ESP + 0xe0]
//   XREF to: Stack[0x4] (READ)
// 00488fff: MOV EAX,dword ptr [ECX]
//   XREF to: 02c6d2d0 (READ)
// 00489001: MOV EBX,dword ptr [EDX + 0x14]
// 00489004: ADD EDI,0x10
// 00489007: CMP EAX,EBX
// 00489009: JGE 0x0048902b
//   XREF to: 0048902b (CONDITIONAL_JUMP)
// 0048900b: MOV EAX,EBX
// 0048900d: MOV ESI,dword ptr [ECX]
//   XREF to: 02c6d2d0 (READ)
// 0048900f: MOV EBP,dword ptr [ECX + 0xc]
//   XREF to: 02c6d2dc (READ)
// 00489012: SUB EAX,ESI
// 00489014: IMUL EAX,EBP
// 00489017: MOV EDX,dword ptr [ECX + 0x8]
//   XREF to: 02c6d2d8 (READ)
// 0048901a: ADD EDX,EAX
// 0048901c: MOV EAX,dword ptr [ESP + 0xe0]
//   XREF to: Stack[0x4] (READ)
// 00489023: MOV dword ptr [ECX + 0x8],EDX
//   XREF to: 02c6d2d8 (WRITE)
// 00489026: MOV EAX,dword ptr [EAX + 0x14]
// 00489029: MOV dword ptr [ECX],EAX
//   XREF to: 02c6d2d0 (WRITE)
// 0048902b: MOV EDX,dword ptr [ESP + 0xe0]
//   Label: LAB_0048902b
//   XREF to: Stack[0x4] (READ)
// 00489032: MOV EAX,dword ptr [ECX + 0x4]
//   XREF to: 02c6d2d4 (READ)
// 00489035: MOV EBX,dword ptr [EDX + 0x1c]
// 00489038: CMP EAX,EBX
// 0048903a: JLE 0x00488d68
//   XREF to: 00488d68 (CONDITIONAL_JUMP)
// 00489040: MOV dword ptr [ECX + 0x4],EBX
//   XREF to: 02c6d2d4 (WRITE)
// 00489043: JMP 0x00488d68
//   XREF to: 00488d68 (UNCONDITIONAL_JUMP)
// 00489048: MOV EAX,dword ptr [ESP + 0xc4]
//   Label: LAB_00489048
//   XREF to: Stack[-0x18] (READ)
// 0048904f: MOV ECX,dword ptr [ESP + 0xc8]
//   XREF to: Stack[-0x14] (READ)
// 00489056: CMP ECX,dword ptr [EAX + 0x2c6d2d0]
//   XREF to: 02c6d2d0 (DATA)
// 0048905c: JL 0x00488e39
//   XREF to: 00488e39 (CONDITIONAL_JUMP)
// 00489062: MOV EBX,dword ptr [ESP + 0xc4]
//   XREF to: Stack[-0x18] (READ)
// 00489069: MOV dword ptr [ESP + EDI*0x4],EBP
// 0048906c: INC EDI
// 0048906d: ADD EBX,0x10
// 00489070: INC EBP
// 00489071: MOV dword ptr [ESP + 0xc4],EBX
//   XREF to: Stack[-0x18] (WRITE)
// 00489078: JMP 0x00488e2c
//   XREF to: 00488e2c (UNCONDITIONAL_JUMP)
// 0048907d: MOV ESI,dword ptr [EAX + 0x8]
//   Label: LAB_0048907d
//   XREF to: 02c6d2d8 (DATA)
// 00489080: ADD ESI,dword ptr [EAX + 0xc]
//   XREF to: 02c6d2dc (DATA)
// 00489083: INC EBX
// 00489084: MOV dword ptr [EAX + 0x8],ESI
//   XREF to: 02c6d2d8 (DATA)
// 00489087: MOV ESI,EDX
// 00489089: JMP 0x00488f42
//   XREF to: 00488f42 (UNCONDITIONAL_JUMP)
