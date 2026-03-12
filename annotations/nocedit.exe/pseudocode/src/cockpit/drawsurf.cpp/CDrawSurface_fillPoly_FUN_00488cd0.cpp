// Name: cockpit_drawsurf.cpp_CDrawSurface_fillPoly_FUN_00488cd0
// Address: 00488cd0
// Address Range: [[00488cd0, 0048908d]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_drawsurf_cpp_CDrawSurface_fillPoly_FUN_00488cd0(CDrawSurface *this_ptr,int vertex_count,SPoint2i *vertices)

#include "nocturne.h"

void __cdecl cockpit_drawsurf_cpp_CDrawSurface_fillPoly_FUN_00488cd0(CDrawSurface *this_ptr,int vertex_count,SPoint2i *vertices)

{
  int iVar4;
  int iVar1;
  int iVar3;
  int iVar5;
  int iVar9;
  int iVar6;
  int iVar7;
  int iVar10;
  int iVar8;
  int *piVar9;
  int *piVar10;
  uint *puVar11;
  uint *puVar12;
  int iVar11;
  SEdgeTableEntry *pSVar13;
  SEdgeTableEntry *pSVar14;
  uint *puVar15;
  uint *puVar16;
  int *piVar12;
  int *piVar13;
  byte bVar17;
  int aiStackY_1818 [1483];
  int local_dc;
  int aiStack_d8 [39];
  int aiStack_38 [4];
  SPoint2i *local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  bool bVar3;
  int iVar2;
  uint uVar1;
  
  bVar17 = 0;
  if (2 < vertex_count) {
    local_24 = 0;
    local_20 = 0;
    if (0 < vertex_count) {
      pSVar13 = g_GlobalEdgeTable;
      local_28 = vertices;
      iVar10 = vertex_count + -1;
      do {
        iVar7 = vertices[iVar10].x + this_ptr->x;
        iVar4 = local_28->x + this_ptr->x;
        iVar8 = vertices[iVar10].y + this_ptr->y;
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
            local_20 = local_20 + 1;
            pSVar13->y_start = iVar6;
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
        local_28 = local_28 + 1;
        iVar1 = local_24 + 1;
        iVar10 = local_24;
        pSVar13 = pSVar14;
        local_24 = iVar1;
      } while (iVar1 < vertex_count);
    }
    iVar10 = local_20;
    if (1 < local_20) {
      while (iVar10 = iVar10 + -1, 0 < iVar10) {
        if (0 < iVar10) {
          iVar1 = 0;
          do {
            if (*(int *)((int)&g_GlobalEdgeTable[1].x_start + iVar1) <
                *(int *)((int)&g_GlobalEdgeTable[0].x_start + iVar1)) {
              piVar9 = (int *)(iVar1 + 0x2c6d2d4 + (uint)bVar17 * -8);
              uVar1 = *(uint *)((int)&g_GlobalEdgeTable[0].x_start + iVar1);
              piVar10 = piVar9 + (uint)bVar17 * -2 + 1;
              aiStack_38[(uint)bVar17 * -2] = *piVar9;
              aiStack_38[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 1] = *piVar10;
              (aiStack_38 + (uint)bVar17 * -2 + (uint)bVar17 * -2 + 1)[(uint)bVar17 * -2 + 1] =
                   piVar10[(uint)bVar17 * -2 + 1];
              puVar15 = (uint *)(iVar1 + 0x2c6d2d4 + (uint)bVar17 * -8);
              puVar11 = (uint *)(iVar1 + 0x2c6d2e4 + (uint)bVar17 * -8);
              *(uint *)((int)&g_GlobalEdgeTable[0].x_start + iVar1) =
                   *(uint *)((int)&g_GlobalEdgeTable[1].x_start + iVar1);
              puVar16 = puVar15 + (uint)bVar17 * -2 + 1;
              puVar12 = puVar11 + (uint)bVar17 * -2 + 1;
              *puVar15 = *puVar11;
              *puVar16 = *puVar12;
              puVar16[(uint)bVar17 * -2 + 1] = puVar12[(uint)bVar17 * -2 + 1];
              piVar12 = (int *)(iVar1 + 0x2c6d2e4 + (uint)bVar17 * -8);
              *(uint *)((int)&g_GlobalEdgeTable[1].x_start + iVar1) = uVar1;
              piVar13 = piVar12 + (uint)bVar17 * -2 + 1;
              *piVar12 = aiStack_38[(uint)bVar17 * -2];
              *piVar13 = aiStack_38[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 1];
              piVar13[(uint)bVar17 * -2 + 1] =
                   (aiStack_38 + (uint)bVar17 * -2 + (uint)bVar17 * -2 + 1)[(uint)bVar17 * -2 + 1];
            }
            iVar1 = iVar1 + 0x10;
          } while (iVar1 < iVar10 * 0x10);
        }
      }
      iVar1 = 0;
      iVar10 = 0;
      local_14 = g_GlobalEdgeTable[0].x_start;
      if (0 < local_20) {
        do {
          local_18 = iVar10 << 4;
          do {
            for (; (iVar10 < local_20 &&
                   (*(int *)((int)&g_GlobalEdgeTable[0].x_start + local_18) <= local_14));
                local_18 = local_18 + 0x10) {
              aiStack_d8[iVar1 + -1] = iVar10;
              iVar1 = iVar1 + 1;
              iVar10 = iVar10 + 1;
            }
            do {
              iVar3 = 0;
              iVar9 = (iVar1 + -1) * 4;
              bVar3 = false;
              if (0 < iVar9) {
                do {
                  if (g_GlobalEdgeTable[*(int *)((int)aiStack_d8 + iVar3)].x_fixed_point <
                      g_GlobalEdgeTable[*(int *)((int)aiStack_d8 + iVar3 + -4)].x_fixed_point) {
                    uVar1 = *(uint *)((int)aiStack_d8 + iVar3 + -4);
                    *(uint *)((int)aiStack_d8 + iVar3 + -4) =
                         *(uint *)((int)aiStack_d8 + iVar3);
                    bVar3 = true;
                    *(uint *)((int)aiStack_d8 + iVar3) = uVar1;
                  }
                  iVar3 = iVar3 + 4;
                } while (iVar3 < iVar9);
              }
            } while (bVar3);
            if (1 < iVar1) {
              iVar3 = 4;
              do {
                iVar9 = iVar3 + -4;
                iVar11 = iVar3 + -8;
                iVar3 = iVar3 + 8;
                cockpit_drawsurf_cpp_CDrawSurface_drawHorizontalLine_FUN_00488110
                          (this_ptr,(g_GlobalEdgeTable[*(int *)((int)aiStack_d8 + iVar11)].
                                     x_fixed_point >> 0x10) - this_ptr->x,local_14 - this_ptr->y,
                           (g_GlobalEdgeTable[*(int *)((int)aiStack_d8 + iVar9)].x_fixed_point >>
                           0x10) - this_ptr->x);
              } while (iVar3 < iVar1 * 4);
            }
            local_14 = local_14 + 1;
            iVar3 = 0;
            if (0 < iVar1) {
              iVar9 = 0;
              do {
                iVar2 = *(int *)((int)aiStack_d8 + iVar9 + -4);
                iVar11 = iVar9 + 4;
                if (local_14 < g_GlobalEdgeTable[iVar2].y_start) {
                  iVar3 = iVar3 + 1;
                  g_GlobalEdgeTable[iVar2].x_fixed_point =
                       g_GlobalEdgeTable[iVar2].x_fixed_point + g_GlobalEdgeTable[iVar2].x_increment
                  ;
                }
                else {
                  iVar1 = iVar1 + -1;
                  memmove
                            ((void *)((int)aiStack_d8 + iVar9 + -4),
                             (void *)((int)aiStack_d8 + iVar9),(iVar1 - iVar3) * 4);
                  iVar11 = iVar9;
                }
                iVar9 = iVar11;
              } while (iVar3 < iVar1);
            }
          } while (0 < iVar1);
        } while (iVar10 < local_20);
      }
    }
  }
  return;
}
