// Name: engine_clipper.c_clipAndRasterize_FUN_00432cd0
// Address: 00432cd0
// Address Range: [[00432cd0, 0043376b]]
// Convention: __cdecl
// Signature: void __cdecl engine_clipper_c_clipAndRasterize_FUN_00432cd0(int vertex_count,int *vertex_indices)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x004335a5) */
/* WARNING: Type propagation algorithm not settling */

void __cdecl engine_clipper_c_clipAndRasterize_FUN_00432cd0(int vertex_count,int *vertex_indices)

{
  longlong lVar1;
  longlong lVar2;
  byte bVar3;
  int iVar4;
  int *piVar5;
  char cVar6;
  int iVar8;
  longlong *plVar9;
  uint *puVar10;
  SRenderVertex *pSVar11;
  int iVar12;
  int iVar13;
  longlong *plVar14;
  SRenderVertex *pSVar15;
  longlong *plVar16;
  longlong *plVar17;
  byte bVar18;
  uint local_150 [31];
  uint auStack_d4 [33];
  int *local_50;
  byte *local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  uint *local_24;
  uint *local_20;
  uint *local_1c;
  int local_18;
  int local_14;
  uint uVar7;
  
  bVar18 = 0;
  if (INT_005b7644 == 0) {
    engine_prim_c_FUN_004fa2e0(vertex_indices,vertex_count);
  }
  else {
    uVar7 = 0xffffffff;
    cVar6 = -1;
    local_50 = vertex_indices;
    iVar12 = 0;
    iVar8 = 0;
    piVar5 = vertex_indices;
    if (0 < vertex_count) {
      do {
        iVar13 = *piVar5;
        if (((&DAT_005c5024)[iVar13 * 0xc] & 0x80000000) != 0) {
          iVar12 = iVar12 + 1;
        }
        piVar5 = piVar5 + 1;
        iVar8 = iVar8 + 1;
        uVar7 = uVar7 & (&DAT_005c5024)[iVar13 * 0xc];
        cVar6 = (char)uVar7;
      } while (iVar8 < vertex_count);
    }
    if ((iVar12 == vertex_count) && (cVar6 != '\0')) {
      DAT_00766c70 = 0;
    }
    else {
      if (iVar12 == 0) {
        if ((g_UseExternalRenderer != 0) && (DAT_006b0278 == 0)) {
          iVar8 = 0;
          if (0 < vertex_count) {
            do {
              iVar12 = *vertex_indices;
              iVar8 = iVar8 + 1;
              vertex_indices = vertex_indices + 1;
              *(uint **)(iVar8 * 4 + 0x767270) = &DAT_005c5014 + iVar12 * 0xc;
            } while (iVar8 < vertex_count);
          }
          if (DAT_006b0280 != 0) {
            if (vertex_count < 4) {
              iVar8 = engine_prim_c_calculateTriangleWindingOrder_FUN_004f9a10
                                (DAT_00767274,DAT_00767278,DAT_0076727c);
              if (iVar8 == 0) {
                return;
              }
            }
            else {
              local_28 = vertex_count + -2;
              iVar12 = 0;
              iVar8 = local_28 * 4;
              iVar13 = 0;
              if (0 < iVar8) {
                do {
                  iVar4 = engine_prim_c_calculateTriangleWindingOrder_FUN_004f9a10
                                    (DAT_00767274,*(SRenderVertex **)((int)&DAT_00767278 + iVar12),
                                     *(SRenderVertex **)((int)&DAT_0076727c + iVar12));
                  if (iVar4 == 0) {
                    iVar13 = iVar13 + 1;
                  }
                  iVar12 = iVar12 + 4;
                } while (iVar12 < iVar8);
              }
              if (iVar13 == local_28) {
                return;
              }
            }
          }
          g_RenderedTriangleCount = g_RenderedTriangleCount + 1;
          engine_special_cpp_drawPolygon2_FUN_00532650
                    (&DAT_00767274,vertex_count,g_RenderStateFlags.dword);
          return;
        }
        DAT_00766c70 = vertex_count;
        local_18 = 0;
        if (0 < vertex_count) {
          plVar9 = (longlong *)&DAT_00766c74;
          do {
            iVar8 = 0x30;
            plVar17 = (longlong *)(&DAT_005c5014 + *vertex_indices * 0xc);
            plVar14 = plVar9;
            if (((uint)plVar9 & 7) != 0) {
              plVar14 = (longlong *)((int)plVar9 + 4);
              plVar17 = (longlong *)(&DAT_005c5018 + *vertex_indices * 0xc);
              *(int *)plVar9 = (int)*(longlong *)(&DAT_005c5014 + *vertex_indices * 0xc);
              iVar8 = 0x2c;
            }
            while (7 < iVar8) {
              lVar1 = *plVar17;
              plVar17 = plVar17 + 1;
              *plVar14 = (longlong)ROUND((float10)lVar1);
              plVar14 = plVar14 + 1;
              iVar8 = iVar8 + -8;
            }
            if (iVar8 != 0 && -9 < iVar8 + -8) {
              *(int *)plVar14 = (int)*plVar17;
              if (4 < iVar8) {
                *(uint *)((int)plVar14 + 4) = *(uint *)((int)plVar17 + 4);
              }
            }
            vertex_indices = vertex_indices + 1;
            local_18 = local_18 + 1;
            plVar9 = plVar9 + 6;
          } while (local_18 < vertex_count);
        }
      }
      else {
        iVar8 = 0;
        if (0 < vertex_count) {
          do {
            iVar12 = *vertex_indices;
            iVar8 = iVar8 + 1;
            vertex_indices = vertex_indices + 1;
            auStack_d4[iVar8] = &DAT_005c5014 + iVar12 * 0xc;
          } while (iVar8 < vertex_count);
        }
        DAT_00766c70 = vertex_count;
        local_48 = vertex_count;
        iVar8 = 0;
        DAT_00767b38 = 0;
        local_4c = (byte *)local_150;
        local_44 = 0;
        if (0 < vertex_count) {
          puVar10 = auStack_d4;
          pSVar11 = (SRenderVertex *)auStack_d4[vertex_count];
          do {
            iVar12 = DAT_00767b38;
            puVar10 = puVar10 + 1;
            pSVar15 = (SRenderVertex *)*puVar10;
            bVar3 = (pSVar11->projected_vertex).transformed_z <=
                    (pSVar11->projected_vertex).transformed_x;
            if ((pSVar15->projected_vertex).transformed_z <=
                (pSVar15->projected_vertex).transformed_x) {
              bVar3 = bVar3 | 2;
            }
            switch(bVar3) {
            case 0:
              iVar12 = iVar8 * 4;
              iVar8 = iVar8 + 1;
              *(SRenderVertex **)(local_4c + iVar12) = pSVar11;
              break;
            case 1:
              if (0xb < DAT_00767b38) {
                g_CurrentFilename = "..\\engine\\clipper.c";
                g_CurrentLineNumber = 94;
                core_main_c_displayErrorAndQuit_FUN_004c8440("Ran out of clipped verts!");
              }
              iVar13 = DAT_00767b38 * 0x30;
              DAT_00767b38 = DAT_00767b38 + 1;
              iVar12 = iVar8 * 4;
              iVar8 = iVar8 + 1;
              *(SRenderVertex **)(local_4c + iVar12) = (SRenderVertex *)(&DAT_007678f8 + iVar13);
              engine_clipper_c_interpolateVertexLeftClip_FUN_00431530
                        (pSVar15,pSVar11,(SRenderVertex *)(&DAT_007678f8 + iVar13));
              break;
            case 2:
              iVar13 = iVar8 + 1;
              *(SRenderVertex **)(local_4c + iVar8 * 4) = pSVar11;
              if (0xb < iVar12) {
                g_CurrentFilename = "..\\engine\\clipper.c";
                g_CurrentLineNumber = 94;
                core_main_c_displayErrorAndQuit_FUN_004c8440("Ran out of clipped verts!");
              }
              iVar12 = DAT_00767b38 * 0x30;
              DAT_00767b38 = DAT_00767b38 + 1;
              iVar8 = iVar8 + 2;
              *(SRenderVertex **)(local_4c + iVar13 * 4) = (SRenderVertex *)(&DAT_007678f8 + iVar12)
              ;
              engine_clipper_c_interpolateVertexLeftClip_FUN_00431530
                        (pSVar11,pSVar15,(SRenderVertex *)(&DAT_007678f8 + iVar12));
            }
            local_44 = local_44 + 1;
            pSVar11 = pSVar15;
          } while (local_44 < local_48);
        }
        if (iVar8 < 3) {
          DAT_00766c70 = iVar8;
          return;
        }
        iVar12 = 0;
        local_40 = iVar8;
        local_3c = 0;
        pSVar11 = (SRenderVertex *)local_150[iVar8 + -1];
        DAT_00766c70 = iVar8;
        puVar10 = local_150;
        if (0 < iVar8) {
          do {
            local_24 = puVar10;
            pSVar15 = (SRenderVertex *)*local_24;
            bVar3 = (pSVar11->projected_vertex).transformed_x <=
                    -(pSVar11->projected_vertex).transformed_z;
            if ((pSVar15->projected_vertex).transformed_x <=
                -(pSVar15->projected_vertex).transformed_z) {
              bVar3 = bVar3 | 2;
            }
            switch(bVar3) {
            case 0:
              iVar12 = iVar12 + 1;
              auStack_d4[iVar12] = pSVar11;
              break;
            case 1:
              if (0xb < DAT_00767b38) {
                g_CurrentFilename = "..\\engine\\clipper.c";
                g_CurrentLineNumber = 94;
                core_main_c_displayErrorAndQuit_FUN_004c8440("Ran out of clipped verts!");
              }
              iVar8 = DAT_00767b38 * 0x30;
              iVar12 = iVar12 + 1;
              DAT_00767b38 = DAT_00767b38 + 1;
              auStack_d4[iVar12] = (SRenderVertex *)(&DAT_007678f8 + iVar8);
              engine_clipper_c_interpolateVertexRightClip_FUN_00431630
                        (pSVar15,pSVar11,(SRenderVertex *)(&DAT_007678f8 + iVar8));
              break;
            case 2:
              auStack_d4[iVar12 + 1] = pSVar11;
              if (0xb < DAT_00767b38) {
                g_CurrentFilename = "..\\engine\\clipper.c";
                g_CurrentLineNumber = 94;
                core_main_c_displayErrorAndQuit_FUN_004c8440("Ran out of clipped verts!");
              }
              iVar8 = DAT_00767b38 * 0x30;
              iVar12 = iVar12 + 2;
              DAT_00767b38 = DAT_00767b38 + 1;
              auStack_d4[iVar12] = (SRenderVertex *)(&DAT_007678f8 + iVar8);
              engine_clipper_c_interpolateVertexRightClip_FUN_00431630
                        (pSVar11,pSVar15,(SRenderVertex *)(&DAT_007678f8 + iVar8));
            }
            local_3c = local_3c + 1;
            local_24 = local_24 + 1;
            pSVar11 = pSVar15;
            puVar10 = local_24;
          } while (local_3c < local_40);
        }
        if (iVar12 < 3) {
          DAT_00766c70 = iVar12;
          return;
        }
        iVar8 = 0;
        local_38 = iVar12;
        local_34 = 0;
        pSVar11 = (SRenderVertex *)auStack_d4[iVar12];
        iVar13 = iVar8;
        DAT_00766c70 = iVar12;
        puVar10 = auStack_d4 + 1;
        if (0 < iVar12) {
          do {
            local_20 = puVar10;
            pSVar15 = (SRenderVertex *)*local_20;
            bVar3 = (pSVar11->projected_vertex).transformed_z <=
                    (pSVar11->projected_vertex).transformed_y;
            if ((pSVar15->projected_vertex).transformed_z <=
                (pSVar15->projected_vertex).transformed_y) {
              bVar3 = bVar3 | 2;
            }
            iVar8 = iVar13;
            switch(bVar3) {
            case 0:
              iVar8 = iVar13 + 1;
              local_150[iVar13] = pSVar11;
              break;
            case 1:
              if (0xb < DAT_00767b38) {
                g_CurrentFilename = "..\\engine\\clipper.c";
                g_CurrentLineNumber = 94;
                core_main_c_displayErrorAndQuit_FUN_004c8440("Ran out of clipped verts!");
              }
              iVar12 = DAT_00767b38 * 0x30;
              iVar8 = iVar13 + 1;
              DAT_00767b38 = DAT_00767b38 + 1;
              local_150[iVar13] = (SRenderVertex *)(&DAT_007678f8 + iVar12);
              engine_clipper_c_interpolateVertexBottomClip_FUN_00431730
                        (pSVar15,pSVar11,(SRenderVertex *)(&DAT_007678f8 + iVar12));
              break;
            case 2:
              local_150[iVar13] = pSVar11;
              if (0xb < DAT_00767b38) {
                g_CurrentFilename = "..\\engine\\clipper.c";
                g_CurrentLineNumber = 94;
                core_main_c_displayErrorAndQuit_FUN_004c8440("Ran out of clipped verts!");
              }
              iVar12 = DAT_00767b38 * 0x30;
              iVar8 = iVar13 + 2;
              DAT_00767b38 = DAT_00767b38 + 1;
              local_150[iVar13 + 1] = (SRenderVertex *)(&DAT_007678f8 + iVar12);
              engine_clipper_c_interpolateVertexBottomClip_FUN_00431730
                        (pSVar11,pSVar15,(SRenderVertex *)(&DAT_007678f8 + iVar12));
            }
            local_34 = local_34 + 1;
            local_20 = local_20 + 1;
            iVar13 = iVar8;
            pSVar11 = pSVar15;
            puVar10 = local_20;
          } while (local_34 < local_38);
        }
        if (iVar8 < 3) {
          DAT_00766c70 = iVar8;
          return;
        }
        uVar7 = 0;
        local_30 = iVar8;
        local_2c = 0;
        pSVar11 = (SRenderVertex *)local_150[iVar8 + -1];
        DAT_00766c70 = iVar8;
        puVar10 = local_150;
        if (0 < iVar8) {
          do {
            local_1c = puVar10;
            pSVar15 = (SRenderVertex *)*local_1c;
            bVar3 = (pSVar11->projected_vertex).transformed_y <=
                    -(pSVar11->projected_vertex).transformed_z;
            if ((pSVar15->projected_vertex).transformed_y <=
                -(pSVar15->projected_vertex).transformed_z) {
              bVar3 = bVar3 | 2;
            }
            switch(bVar3) {
            case 0:
              uVar7 = uVar7 + 1;
              auStack_d4[uVar7] = pSVar11;
              break;
            case 1:
              if (0xb < DAT_00767b38) {
                g_CurrentFilename = "..\\engine\\clipper.c";
                g_CurrentLineNumber = 94;
                core_main_c_displayErrorAndQuit_FUN_004c8440("Ran out of clipped verts!");
              }
              iVar8 = DAT_00767b38 * 0x30;
              uVar7 = uVar7 + 1;
              DAT_00767b38 = DAT_00767b38 + 1;
              auStack_d4[uVar7] = (SRenderVertex *)(&DAT_007678f8 + iVar8);
              engine_clipper_c_interpolateVertexTopClip_FUN_00431830
                        (pSVar15,pSVar11,(SRenderVertex *)(&DAT_007678f8 + iVar8));
              break;
            case 2:
              auStack_d4[uVar7 + 1] = pSVar11;
              if (0xb < DAT_00767b38) {
                g_CurrentFilename = "..\\engine\\clipper.c";
                g_CurrentLineNumber = 94;
                core_main_c_displayErrorAndQuit_FUN_004c8440("Ran out of clipped verts!");
              }
              iVar8 = DAT_00767b38 * 0x30;
              uVar7 = uVar7 + 2;
              DAT_00767b38 = DAT_00767b38 + 1;
              auStack_d4[uVar7] = (SRenderVertex *)(&DAT_007678f8 + iVar8);
              engine_clipper_c_interpolateVertexTopClip_FUN_00431830
                        (pSVar11,pSVar15,(SRenderVertex *)(&DAT_007678f8 + iVar8));
            }
            local_2c = local_2c + 1;
            local_1c = local_1c + 1;
            pSVar11 = pSVar15;
            puVar10 = local_1c;
          } while (local_2c < local_30);
        }
        if ((int)uVar7 < 3) {
          DAT_00766c70 = uVar7;
          return;
        }
        iVar8 = 0;
        DAT_00766c70 = uVar7;
        if (0 < (int)uVar7) {
          plVar9 = (longlong *)&DAT_00766c74;
          iVar12 = 0;
          do {
            plVar17 = *(longlong **)((int)auStack_d4 + iVar12 + 4);
            iVar13 = 0x30;
            plVar14 = plVar17;
            plVar16 = plVar9;
            if (((uint)plVar9 & 7) != 0) {
              plVar16 = (longlong *)((int)plVar9 + (uint)bVar18 * -8 + 4);
              plVar14 = (longlong *)((int)plVar17 + (uint)bVar18 * -8 + 4);
              *(int *)plVar9 = (int)*plVar17;
              iVar13 = 0x2c;
            }
            while (7 < iVar13) {
              lVar1 = *plVar14;
              plVar14 = plVar14 + 1;
              *plVar16 = (longlong)ROUND((float10)lVar1);
              plVar16 = plVar16 + 1;
              iVar13 = iVar13 + -8;
            }
            if (iVar13 != 0 && -9 < iVar13 + -8) {
              *(int *)plVar16 = (int)*plVar14;
              if (4 < iVar13) {
                *(uint *)((int)plVar16 + (uint)bVar18 * -8 + 4) =
                     *(uint *)((int)plVar14 + (uint)bVar18 * -8 + 4);
              }
            }
            iVar12 = iVar12 + 4;
            iVar8 = iVar8 + 1;
            plVar9 = plVar9 + 6;
          } while (iVar8 < (int)DAT_00766c70);
        }
        iVar8 = 0;
        if (DAT_005ad284 != 0) {
          if (0 < (int)DAT_00766c70) {
            iVar12 = 0;
            do {
              if (iVar8 < *(int *)((int)&DAT_00766c7c + iVar12)) {
                iVar8 = *(int *)((int)&DAT_00766c7c + iVar12);
              }
              iVar12 = iVar12 + 0x30;
            } while (iVar12 < (int)(DAT_00766c70 * 0x30));
          }
          if (DAT_005ad284 <= iVar8) {
            plVar9 = (longlong *)&DAT_00766c74;
            DAT_007672f4 = DAT_00766c70;
            plVar17 = (longlong *)&DAT_007672f8;
            local_14 = 0;
            iVar8 = DAT_00766c70 * 0x30;
            while (7 < iVar8) {
              lVar1 = *plVar9;
              plVar9 = plVar9 + 1;
              *plVar17 = (longlong)ROUND((float10)lVar1);
              plVar17 = plVar17 + 1;
              iVar8 = iVar8 + -8;
            }
            if (iVar8 != 0 && -9 < iVar8 + -8) {
              *(int *)plVar17 = (int)*plVar9;
              if (4 < iVar8) {
                *(uint *)((int)plVar17 + (uint)bVar18 * -8 + 4) =
                     *(uint *)((int)plVar9 + (uint)bVar18 * -8 + 4);
              }
            }
            DAT_00766c70 = 0;
            if (0 < (int)DAT_007672f4) {
              pSVar11 = (SRenderVertex *)&DAT_007672f8;
              do {
                uVar7 = local_14 + 1;
                if (uVar7 == DAT_007672f4) {
                  uVar7 = uVar7 ^ DAT_007672f4;
                }
                bVar3 = DAT_005ad284 <= (pSVar11->projected_vertex).transformed_z;
                if (DAT_005ad284 <= (int)(&DAT_00767300)[uVar7 * 0xc]) {
                  bVar3 = bVar3 | 2;
                }
                switch(bVar3) {
                case 0:
                  plVar17 = (longlong *)(&DAT_00766c74 + DAT_00766c70 * 0xc);
                  iVar8 = 0x30;
                  pSVar15 = pSVar11;
                  plVar9 = plVar17;
                  if (((uint)plVar17 & 7) != 0) {
                    plVar9 = (longlong *)(&DAT_00766c78 + (uint)bVar18 * -8 + DAT_00766c70 * 0x30);
                    pSVar15 = (SRenderVertex *)((int)pSVar11 + (uint)bVar18 * -8 + 4);
                    *(int *)plVar17 = (pSVar11->projected_vertex).transformed_x;
                    iVar8 = 0x2c;
                  }
                  while (7 < iVar8) {
                    lVar2._0_4_ = (pSVar15->projected_vertex).transformed_x;
                    lVar2._4_4_ = (pSVar15->projected_vertex).transformed_y;
                    pSVar15 = (SRenderVertex *)&(pSVar15->projected_vertex).transformed_z;
                    *plVar9 = (longlong)ROUND((float10)lVar2);
                    plVar9 = plVar9 + 1;
                    iVar8 = iVar8 + -8;
                  }
                  if (iVar8 != 0 && -9 < iVar8 + -8) {
                    *(int *)plVar9 = (pSVar15->projected_vertex).transformed_x;
                    if (4 < iVar8) {
                      *(uint *)((int)plVar9 + (uint)bVar18 * -8 + 4) =
                           *(uint *)((int)pSVar15 + (uint)bVar18 * -8 + 4);
                    }
                  }
                  DAT_00766c70 = DAT_00766c70 + 1;
                  break;
                case 1:
                  engine_clipper_c_interpolateVertexNearClip_FUN_00431930
                            ((SRenderVertex *)(&DAT_007672f8 + uVar7 * 0xc),pSVar11,
                             (SRenderVertex *)(&DAT_00766c74 + DAT_00766c70 * 0xc));
                  DAT_00766c70 = DAT_00766c70 + 1;
                  break;
                case 2:
                  plVar17 = (longlong *)(&DAT_00766c74 + DAT_00766c70 * 0xc);
                  iVar8 = 0x30;
                  pSVar15 = pSVar11;
                  plVar9 = plVar17;
                  if (((uint)plVar17 & 7) != 0) {
                    plVar9 = (longlong *)(&DAT_00766c78 + (uint)bVar18 * -8 + DAT_00766c70 * 0x30);
                    pSVar15 = (SRenderVertex *)((int)pSVar11 + (uint)bVar18 * -8 + 4);
                    *(int *)plVar17 = (pSVar11->projected_vertex).transformed_x;
                    iVar8 = 0x2c;
                  }
                  while (7 < iVar8) {
                    lVar1._0_4_ = (pSVar15->projected_vertex).transformed_x;
                    lVar1._4_4_ = (pSVar15->projected_vertex).transformed_y;
                    pSVar15 = (SRenderVertex *)&(pSVar15->projected_vertex).transformed_z;
                    *plVar9 = (longlong)ROUND((float10)lVar1);
                    plVar9 = plVar9 + 1;
                    iVar8 = iVar8 + -8;
                  }
                  if (iVar8 != 0 && -9 < iVar8 + -8) {
                    *(int *)plVar9 = (pSVar15->projected_vertex).transformed_x;
                    if (4 < iVar8) {
                      *(uint *)((int)plVar9 + (uint)bVar18 * -8 + 4) =
                           *(uint *)((int)pSVar15 + (uint)bVar18 * -8 + 4);
                    }
                  }
                  DAT_00766c70 = DAT_00766c70 + 1;
                  engine_clipper_c_interpolateVertexNearClip_FUN_00431930
                            (pSVar11,(SRenderVertex *)(&DAT_007672f8 + uVar7 * 0xc),
                             (SRenderVertex *)(&DAT_00766c74 + DAT_00766c70 * 0xc));
                  DAT_00766c70 = DAT_00766c70 + 1;
                }
                local_14 = local_14 + 1;
                pSVar11 = pSVar11 + 1;
              } while (local_14 < (int)DAT_007672f4);
            }
          }
        }
        if ((int)DAT_00766c70 < 3) {
          return;
        }
        iVar8 = 0;
        if (0 < (int)DAT_00766c70) {
          piVar5 = &DAT_00766c74;
          do {
            iVar12 = piVar5[2];
            if (iVar12 == 0) {
              piVar5[2] = 1;
              *piVar5 = 0;
              piVar5[1] = 0;
            }
            else {
              iVar13 = *piVar5;
              iVar4 = iVar12;
              if ((iVar12 < iVar13) || (iVar4 = -iVar12, -iVar13 != iVar12 && iVar13 <= iVar4)) {
                *piVar5 = iVar4;
              }
              else {
                iVar13 = piVar5[1];
                if (piVar5[2] < iVar13) {
                  piVar5[1] = piVar5[2];
                }
                else if (-iVar13 != iVar12 && iVar13 <= iVar4) {
                  piVar5[1] = iVar4;
                }
              }
            }
            iVar8 = iVar8 + 1;
            piVar5 = piVar5 + 0xc;
          } while (iVar8 < (int)DAT_00766c70);
        }
      }
      if (2 < (int)DAT_00766c70) {
        engine_prim_c_FUN_004f9dd0((SRenderVertex *)&DAT_00766c74,DAT_00766c70);
        return;
      }
    }
  }
  return;
}
