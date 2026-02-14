// Name: cockpit_drawsurf.cpp_CDrawSurface_fillPoly_FUN_00488cd0
// Address: 00488cd0
// Address Range: [[00488cd0, 0048908d]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_drawsurf_cpp_CDrawSurface_fillPoly_FUN_00488cd0(CDrawSurface *this_ptr,int vertex_count,SPoint2i *vertices)

#include "nocturne.h"

void __cdecl cockpit_drawsurf_cpp_CDrawSurface_fillPoly_FUN_00488cd0(CDrawSurface *this_ptr,int vertex_count,SPoint2i *vertices)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  int *piVar10;
  uint *puVar11;
  uint *puVar12;
  SEdgeTableEntry *pSVar13;
  SEdgeTableEntry *pSVar14;
  uint *puVar15;
  uint *puVar16;
  byte bVar17;
  int aiStackY_1818 [1483];
  int local_dc;
  int aiStack_d8 [39];
  uint local_3c;
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
              local_3c = *(uint *)((int)&g_GlobalEdgeTable[0].x_start + iVar7);
              piVar10 = piVar9 + (uint)bVar17 * -2 + 1;
              aiStack_38[(uint)bVar17 * -2] = *piVar9;
              aiStack_38[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 1] = *piVar10;
              (aiStack_38 + (uint)bVar17 * -2 + (uint)bVar17 * -2 + 1)[(uint)bVar17 * -2 + 1] =
                   piVar10[(uint)bVar17 * -2 + 1];
              puVar15 = (uint *)(iVar7 + 0x2c6d2d4 + (uint)bVar17 * -8);
              puVar11 = (uint *)(iVar7 + 0x2c6d2e4 + (uint)bVar17 * -8);
              *(uint *)((int)&g_GlobalEdgeTable[0].x_start + iVar7) =
                   *(uint *)((int)&g_GlobalEdgeTable[1].x_start + iVar7);
              puVar16 = puVar15 + (uint)bVar17 * -2 + 1;
              puVar12 = puVar11 + (uint)bVar17 * -2 + 1;
              *puVar15 = *puVar11;
              *puVar16 = *puVar12;
              puVar16[(uint)bVar17 * -2 + 1] = puVar12[(uint)bVar17 * -2 + 1];
              piVar9 = (int *)(iVar7 + 0x2c6d2e4 + (uint)bVar17 * -8);
              *(uint *)((int)&g_GlobalEdgeTable[1].x_start + iVar7) = local_3c;
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
            for (; (iVar8 < local_20 &&
                   (*(int *)((int)&g_GlobalEdgeTable[0].x_start + local_18) <= local_14));
                local_18 = local_18 + 0x10) {
              aiStack_d8[iVar7 + -1] = iVar8;
              iVar7 = iVar7 + 1;
              iVar8 = iVar8 + 1;
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
                    uVar1 = *(uint *)((int)aiStack_d8 + iVar4 + -4);
                    *(uint *)((int)aiStack_d8 + iVar4 + -4) =
                         *(uint *)((int)aiStack_d8 + iVar4);
                    bVar3 = true;
                    *(uint *)((int)aiStack_d8 + iVar4) = uVar1;
                  }
                  iVar4 = iVar4 + 4;
                } while (iVar4 < iVar5);
              }
            } while (bVar3);
            if (1 < iVar7) {
              iVar4 = 4;
              do {
                iVar5 = iVar4 + -4;
                iVar6 = iVar4 + -8;
                iVar4 = iVar4 + 8;
                cockpit_drawsurf_cpp_CDrawSurface_drawHorizontalLine_FUN_00488110
                          (this_ptr,(g_GlobalEdgeTable[*(int *)((int)aiStack_d8 + iVar6)].
                                     x_fixed_point >> 0x10) - this_ptr->x,local_14 - this_ptr->y,
                           (g_GlobalEdgeTable[*(int *)((int)aiStack_d8 + iVar5)].x_fixed_point >>
                           0x10) - this_ptr->x);
              } while (iVar4 < iVar7 * 4);
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
                  memmove
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
