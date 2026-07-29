// Name: cockpit_drawsurf.cpp_CDrawSurface_fillPoly_FUN_0045d310
// Address: 0045d310
// Address Range: [[0045d310, 0045d6cd]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_drawsurf_cpp_CDrawSurface_fillPoly_FUN_0045d310(CDrawSurface *this_ptr,int vertex_count,SPoint2i *vertices)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl cockpit_drawsurf_cpp_CDrawSurface_fillPoly_FUN_0045d310(CDrawSurface *this_ptr,int vertex_count,SPoint2i *vertices)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  uint *puVar10;
  uint *puVar11;
  int *piVar12;
  uint *puVar13;
  byte bVar14;
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
  
  bVar14 = 0;
  if (2 < vertex_count) {
    iVar8 = vertex_count + -1;
    local_24 = 0;
    local_20 = 0;
    if (0 < vertex_count) {
      local_28 = vertices;
      piVar9 = (int *)&DAT_01b4d490;
      do {
        iVar7 = vertices[iVar8].x + this_ptr->x;
        iVar3 = local_28->x + this_ptr->x;
        iVar8 = vertices[iVar8].y + this_ptr->y;
        iVar5 = local_28->y + this_ptr->y;
        aiStack_38[3] = iVar3;
        piVar12 = piVar9;
        if (iVar8 != iVar5) {
          iVar6 = iVar5;
          if (iVar5 < iVar8) {
            aiStack_38[3] = iVar7;
            iVar6 = iVar8;
            iVar7 = iVar3;
            iVar8 = iVar5;
          }
          if ((this_ptr->clip_top <= iVar6) && (iVar8 <= this_ptr->clip_bottom)) {
            if (0x27 < local_20) {
              PTR_01cc4800 = "..\\cockpit\\drawsurf.cpp";
              INT_01cc4804 = 0x578;
              core_main_c_FUN_004c8440();
            }
            piVar9[2] = iVar7 << 0x10;
            piVar9[1] = iVar6;
            local_20 = local_20 + 1;
            *piVar9 = iVar8;
            piVar9[3] = (int)((longlong)
                              ((((longlong)(aiStack_38[3] - iVar7) & 0xffffffffffffU) >> 0x10) <<
                               0x20 | (longlong)(aiStack_38[3] - iVar7) * 0x10000 & 0xffffffffU) /
                             (longlong)(iVar6 - iVar8));
            piVar12 = piVar9 + 4;
            if (*piVar9 < this_ptr->clip_top) {
              piVar9[2] = piVar9[2] + (this_ptr->clip_top - *piVar9) * piVar9[3];
              *piVar9 = this_ptr->clip_top;
            }
            if (this_ptr->clip_bottom < piVar9[1]) {
              piVar9[1] = this_ptr->clip_bottom;
            }
          }
        }
        iVar8 = local_24;
        local_24 = local_24 + 1;
        local_28 = local_28 + 1;
        piVar9 = piVar12;
      } while (local_24 < vertex_count);
    }
    iVar8 = local_20;
    if (1 < local_20) {
      while (iVar8 = iVar8 + -1, 0 < iVar8) {
        if (0 < iVar8) {
          iVar7 = 0;
          do {
            if (*(int *)(iVar7 + 0x1b4d4a0) < *(int *)(&DAT_01b4d490 + iVar7)) {
              piVar9 = (int *)(&DAT_01b4d494 + (uint)bVar14 * -8 + iVar7);
              local_3c = *(uint *)(&DAT_01b4d490 + iVar7);
              aiStack_38[(uint)bVar14 * -2] = *piVar9;
              aiStack_38[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 1] = piVar9[(uint)bVar14 * -2 + 1];
              (aiStack_38 + (uint)bVar14 * -2 + (uint)bVar14 * -2 + 1)[(uint)bVar14 * -2 + 1] =
                   (piVar9 + (uint)bVar14 * -2 + 1)[(uint)bVar14 * -2 + 1];
              puVar13 = (uint *)(&DAT_01b4d494 + (uint)bVar14 * -8 + iVar7);
              puVar10 = (uint *)(iVar7 + 0x1b4d4a4 + (uint)bVar14 * -8);
              *(uint *)(&DAT_01b4d490 + iVar7) = *(uint *)(iVar7 + 0x1b4d4a0);
              puVar11 = puVar10 + (uint)bVar14 * -2 + 1;
              *puVar13 = *puVar10;
              puVar13[(uint)bVar14 * -2 + 1] = *puVar11;
              (puVar13 + (uint)bVar14 * -2 + 1)[(uint)bVar14 * -2 + 1] =
                   puVar11[(uint)bVar14 * -2 + 1];
              piVar9 = (int *)(iVar7 + 0x1b4d4a4 + (uint)bVar14 * -8);
              *(uint *)(iVar7 + 0x1b4d4a0) = local_3c;
              piVar12 = piVar9 + (uint)bVar14 * -2 + 1;
              *piVar9 = aiStack_38[(uint)bVar14 * -2];
              *piVar12 = aiStack_38[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 1];
              piVar12[(uint)bVar14 * -2 + 1] =
                   (aiStack_38 + (uint)bVar14 * -2 + (uint)bVar14 * -2 + 1)[(uint)bVar14 * -2 + 1];
            }
            iVar7 = iVar7 + 0x10;
          } while (iVar7 < iVar8 * 0x10);
        }
      }
      iVar7 = 0;
      iVar8 = 0;
      local_14 = _DAT_01b4d490;
      if (0 < local_20) {
        do {
          local_18 = iVar8 << 4;
          do {
            for (; (iVar8 < local_20 && (*(int *)(&DAT_01b4d490 + local_18) <= local_14));
                local_18 = local_18 + 0x10) {
              aiStack_d8[iVar7 + -1] = iVar8;
              iVar7 = iVar7 + 1;
              iVar8 = iVar8 + 1;
            }
            local_1c = iVar7 + -1;
            do {
              iVar3 = 0;
              iVar5 = local_1c * 4;
              bVar2 = false;
              if (0 < iVar5) {
                do {
                  if (*(int *)(&DAT_01b4d498 + *(int *)((int)aiStack_d8 + iVar3) * 0x10) <
                      *(int *)(&DAT_01b4d498 + *(int *)((int)aiStack_d8 + iVar3 + -4) * 0x10)) {
                    uVar1 = *(uint *)((int)aiStack_d8 + iVar3 + -4);
                    *(uint *)((int)aiStack_d8 + iVar3 + -4) =
                         *(uint *)((int)aiStack_d8 + iVar3);
                    bVar2 = true;
                    *(uint *)((int)aiStack_d8 + iVar3) = uVar1;
                  }
                  iVar3 = iVar3 + 4;
                } while (iVar3 < iVar5);
              }
            } while (bVar2);
            if (1 < iVar7) {
              iVar3 = 4;
              do {
                iVar5 = iVar3 + -4;
                iVar6 = iVar3 + -8;
                iVar3 = iVar3 + 8;
                cockpit_drawsurf_cpp_CDrawSurface_drawHorizontalLine_FUN_0045c730
                          (this_ptr,(*(int *)(&DAT_01b4d498 +
                                             *(int *)((int)aiStack_d8 + iVar6) * 0x10) >> 0x10) -
                                    this_ptr->x,local_14 - this_ptr->y,
                           (*(int *)(&DAT_01b4d498 + *(int *)((int)aiStack_d8 + iVar5) * 0x10) >>
                           0x10) - this_ptr->x);
              } while (iVar3 < iVar7 * 4);
            }
            iVar3 = 0;
            local_14 = local_14 + 1;
            if (0 < iVar7) {
              iVar5 = 0;
              do {
                iVar4 = *(int *)((int)aiStack_d8 + iVar5 + -4) * 0x10;
                iVar6 = iVar5 + 4;
                if (local_14 < *(int *)(&DAT_01b4d494 + iVar4)) {
                  iVar3 = iVar3 + 1;
                  *(int *)(&DAT_01b4d498 + iVar4) =
                       *(int *)(&DAT_01b4d498 + iVar4) + *(int *)(&DAT_01b4d49c + iVar4);
                }
                else {
                  iVar7 = iVar7 + -1;
                  memmove
                            ((void *)((int)aiStack_d8 + iVar5 + -4),
                             (void *)((int)aiStack_d8 + iVar5),(iVar7 - iVar3) * 4);
                  iVar6 = iVar5;
                }
                iVar5 = iVar6;
              } while (iVar3 < iVar7);
            }
          } while (0 < iVar7);
        } while (iVar8 < local_20);
      }
    }
  }
  return;
}
