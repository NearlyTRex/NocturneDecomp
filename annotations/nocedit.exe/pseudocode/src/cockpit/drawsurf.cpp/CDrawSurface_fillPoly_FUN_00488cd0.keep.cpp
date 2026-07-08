// Name: cockpit_drawsurf.cpp_CDrawSurface_fillPoly_FUN_00488cd0
// Address: 00488cd0
// MANUAL RECONSTRUCTION
// Address Range: [[00488cd0, 0048908d] [0060516e, 006051bc] [03fc5b88, 03fc5bae]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_drawsurf_cpp_CDrawSurface_fillPoly_FUN_00488cd0(CDrawSurface *this_ptr,int vertex_count,SPoint2i *vertices)

#include "nocturne.h"

void __cdecl cockpit_drawsurf_cpp_CDrawSurface_fillPoly_FUN_00488cd0(CDrawSurface *this_ptr,int vertex_count,SPoint2i *vertices)

{
  int iVar4;
  int iVar9;
  int iVar10;
  int iVar5;
  int iVar11;
  int iVar6;
  int iVar7;
  int iVar12;
  int iVar8;
  int iVar13;
  SEdgeTableEntry *pSVar13;
  SEdgeTableEntry *pSVar14;
  int aiStack_d8 [40];
  int aiStack_38 [4];
  SPoint2i *local_28;
  int local_24;
  int local_20;
  int local_14;
  bool bVar3;
  int iVar2;
  uint uVar1;

  if (2 < vertex_count) {
    local_24 = 0;
    local_20 = 0;
    if (0 < vertex_count) {
      pSVar13 = g_GlobalEdgeTable;
      local_28 = vertices;
      iVar12 = vertex_count + -1;
      do {
        iVar7 = vertices[iVar12].x + this_ptr->x;
        iVar4 = local_28->x + this_ptr->x;
        iVar8 = vertices[iVar12].y + this_ptr->y;
        iVar5 = local_28->y + this_ptr->y;
        pSVar14 = pSVar13;
        if (iVar8 != iVar5) {
          iVar6 = iVar5;
          iVar12 = iVar7;
          aiStack_38[3] = iVar4;
          if (iVar5 < iVar8) {
            iVar6 = iVar8;
            iVar12 = iVar4;
            iVar8 = iVar5;
            aiStack_38[3] = iVar7;
          }
          if ((this_ptr->clip_top <= iVar6) && (iVar8 <= this_ptr->clip_bottom)) {
            if (0x27 < local_20) {
              g_CurrentFilename = "..\\cockpit\\drawsurf.cpp";
              g_CurrentLineNumber = 1400;
              core_main_c_displayErrorAndQuit_FUN_00506f10("CDrawSurface::fillPoly - too many edges!");
            }
            pSVar13->x_fixed_point = iVar12 << 0x10;
            local_20 = local_20 + 1;
            pSVar13->y_start = iVar6;
            pSVar13->x_start = iVar8;
            pSVar13->x_increment =
                 (int)((longlong)
                       ((((longlong)(aiStack_38[3] - iVar12) & 0xffffffffffffU) >> 0x10) << 0x20 |
                       (longlong)(aiStack_38[3] - iVar12) * 0x10000 & 0xffffffffU) /
                      (longlong)(iVar6 - iVar8));
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
        local_28 = local_28 + 1;
        iVar10 = local_24 + 1;
        iVar12 = local_24;
        pSVar13 = pSVar14;
        local_24 = iVar10;
      } while (iVar10 < vertex_count);
    }
    iVar12 = local_20;
    if (1 < local_20) {
      while (iVar12 = iVar12 + -1, 0 < iVar12) {
        for (iVar9 = 0; iVar9 < iVar12; iVar9 = iVar9 + 1) {
          if (g_GlobalEdgeTable[iVar9 + 1].x_start < g_GlobalEdgeTable[iVar9].x_start) {
            SEdgeTableEntry tmp = g_GlobalEdgeTable[iVar9];
            g_GlobalEdgeTable[iVar9] = g_GlobalEdgeTable[iVar9 + 1];
            g_GlobalEdgeTable[iVar9 + 1] = tmp;
          }
        }
      }
      iVar10 = 0;
      iVar12 = 0;
      local_14 = g_GlobalEdgeTable[0].x_start;
      if (0 < local_20) {
        do {
          do {
            while (iVar12 < local_20 && g_GlobalEdgeTable[iVar12].x_start <= local_14) {
              aiStack_d8[iVar10] = iVar12;
              iVar10 = iVar10 + 1;
              iVar12 = iVar12 + 1;
            }
            do {
              bVar3 = false;
              for (iVar9 = 1; iVar9 < iVar10; iVar9 = iVar9 + 1) {
                if (g_GlobalEdgeTable[aiStack_d8[iVar9]].x_fixed_point <
                    g_GlobalEdgeTable[aiStack_d8[iVar9 + -1]].x_fixed_point) {
                  uVar1 = aiStack_d8[iVar9 + -1];
                  aiStack_d8[iVar9 + -1] = aiStack_d8[iVar9];
                  bVar3 = true;
                  aiStack_d8[iVar9] = uVar1;
                }
              }
            } while (bVar3);
            if (1 < iVar10) {
              iVar9 = 1;
              do {
                iVar11 = iVar9;
                iVar13 = iVar9 + -1;
                iVar9 = iVar9 + 2;
                cockpit_drawsurf_cpp_CDrawSurface_drawHorizontalLine_FUN_00488110
                          (this_ptr,(g_GlobalEdgeTable[aiStack_d8[iVar13]].
                                     x_fixed_point >> 0x10) - this_ptr->x,local_14 - this_ptr->y,
                           (g_GlobalEdgeTable[aiStack_d8[iVar11]].x_fixed_point >>
                           0x10) - this_ptr->x);
              } while (iVar9 < iVar10);
            }
            local_14 = local_14 + 1;
            iVar9 = 0;
            if (0 < iVar10) {
              iVar11 = 0;
              do {
                iVar2 = aiStack_d8[iVar11];
                iVar13 = iVar11 + 1;
                if (local_14 < g_GlobalEdgeTable[iVar2].y_start) {
                  iVar9 = iVar9 + 1;
                  g_GlobalEdgeTable[iVar2].x_fixed_point =
                       g_GlobalEdgeTable[iVar2].x_fixed_point + g_GlobalEdgeTable[iVar2].x_increment
                  ;
                }
                else {
                  iVar10 = iVar10 + -1;
                  memmove
                            (&aiStack_d8[iVar11],
                             &aiStack_d8[iVar11 + 1],(iVar10 - iVar9) * sizeof(*aiStack_d8));
                  iVar13 = iVar11;
                }
                iVar11 = iVar13;
              } while (iVar9 < iVar10);
            }
          } while (0 < iVar10);
        } while (iVar12 < local_20);
      }
    }
  }
  return;
}
