// Name: engine_clipper.c_clipAndRasterize_FUN_00432cd0
// Address: 00432cd0
// Address Range: [[00432cd0, 0043376b]]
// Convention: __cdecl
// Signature: void __cdecl engine_clipper_c_clipAndRasterize_FUN_00432cd0(int vertex_count,int *vertex_indices)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x004335a5) */

void __cdecl engine_clipper_c_clipAndRasterize_FUN_00432cd0(int vertex_count,int *vertex_indices)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  longlong *plVar6;
  int iVar7;
  byte bVar8;
  int *piVar9;
  int iVar10;
  char cVar11;
  int iVar13;
  SRenderVertex *pSVar14;
  uint *puVar15;
  int iVar16;
  int iVar17;
  longlong *plVar18;
  SRenderVertex *pSVar19;
  SRenderVertex *pSVar20;
  SRenderVertex *pSVar21;
  byte bVar22;
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
  uint uVar12;
  
  bVar22 = 0;
  if (g_VertexProcessingEnabled == 0) {
    engine_prim_c_renderIndexedPolygonSoftware_FUN_004fa2e0(vertex_indices,vertex_count);
  }
  else {
    uVar12 = 0xffffffff;
    cVar11 = -1;
    local_50 = vertex_indices;
    iVar16 = 0;
    iVar13 = 0;
    piVar9 = vertex_indices;
    if (0 < vertex_count) {
      do {
        uVar5 = g_SRenderVertex_ARRAY_005c5014[*piVar9].projected_vertex.screen_x;
        if ((uVar5 & 0x80000000) != 0) {
          iVar16 = iVar16 + 1;
        }
        piVar9 = piVar9 + 1;
        iVar13 = iVar13 + 1;
        uVar12 = uVar12 & uVar5;
        cVar11 = (char)uVar12;
      } while (iVar13 < vertex_count);
    }
    if ((iVar16 == vertex_count) && (cVar11 != '\0')) {
      g_ClippedVertexCount = 0;
    }
    else {
      if (iVar16 == 0) {
        if ((g_UseExternalRenderer != 0) && (g_TexturesDisabled == 0)) {
          iVar13 = 0;
          if (0 < vertex_count) {
            do {
              iVar16 = *vertex_indices;
              iVar13 = iVar13 + 1;
              vertex_indices = vertex_indices + 1;
              g_INT_ARRAY_00767270[iVar13] = (int)(g_SRenderVertex_ARRAY_005c5014 + iVar16);
            } while (iVar13 < vertex_count);
          }
          if (g_CullingMode != 0) {
            if (vertex_count < 4) {
              iVar13 = engine_prim_c_calculateTriangleWindingOrder_FUN_004f9a10
                                 (g_SRenderVertex_PTR_00767274,g_SRenderVertex_PTR_00767278,
                                  g_SRenderVertex_PTR_0076727c);
              if (iVar13 == 0) {
                return;
              }
            }
            else {
              local_28 = vertex_count + -2;
              iVar16 = 0;
              iVar13 = local_28 * 4;
              iVar17 = 0;
              if (0 < iVar13) {
                do {
                  iVar10 = engine_prim_c_calculateTriangleWindingOrder_FUN_004f9a10
                                     (g_SRenderVertex_PTR_00767274,
                                      *(SRenderVertex **)
                                       ((int)&g_SRenderVertex_PTR_00767278 + iVar16),
                                      *(SRenderVertex **)
                                       ((int)&g_SRenderVertex_PTR_0076727c + iVar16));
                  if (iVar10 == 0) {
                    iVar17 = iVar17 + 1;
                  }
                  iVar16 = iVar16 + 4;
                } while (iVar16 < iVar13);
              }
              if (iVar17 == local_28) {
                return;
              }
            }
          }
          g_RenderedTriangleCount = g_RenderedTriangleCount + 1;
          engine_special_cpp_drawPolygon2_FUN_00532650
                    (&g_SRenderVertex_PTR_00767274,vertex_count,g_RenderStateFlags.dword);
          return;
        }
        g_ClippedVertexCount = vertex_count;
        local_18 = 0;
        if (0 < vertex_count) {
          pSVar14 = g_ClippedVertexBuffer;
          do {
            iVar13 = 0x30;
            pSVar19 = g_SRenderVertex_ARRAY_005c5014 + *vertex_indices;
            pSVar21 = pSVar14;
            if (((uint)pSVar14 & 7) != 0) {
              pSVar21 = (SRenderVertex *)&(pSVar14->projected_vertex).transformed_y;
              pSVar19 = (SRenderVertex *)
                        &g_SRenderVertex_ARRAY_005c5014[*vertex_indices].projected_vertex.
                         transformed_y;
              (pSVar14->projected_vertex).transformed_x =
                   g_SRenderVertex_ARRAY_005c5014[*vertex_indices].projected_vertex.transformed_x;
              iVar13 = 0x2c;
            }
            while (7 < iVar13) {
              lVar1._0_4_ = (pSVar19->projected_vertex).transformed_x;
              lVar1._4_4_ = (pSVar19->projected_vertex).transformed_y;
              pSVar19 = (SRenderVertex *)&(pSVar19->projected_vertex).transformed_z;
              (pSVar21->projected_vertex).transformed_x = (int)(longlong)ROUND((float10)lVar1);
              (pSVar21->projected_vertex).transformed_y =
                   (int)((ulonglong)(longlong)ROUND((float10)lVar1) >> 0x20);
              pSVar21 = (SRenderVertex *)&(pSVar21->projected_vertex).transformed_z;
              iVar13 = iVar13 + -8;
            }
            if (iVar13 != 0 && -9 < iVar13 + -8) {
              (pSVar21->projected_vertex).transformed_x = (pSVar19->projected_vertex).transformed_x;
              if (4 < iVar13) {
                (pSVar21->projected_vertex).transformed_y =
                     (pSVar19->projected_vertex).transformed_y;
              }
            }
            vertex_indices = vertex_indices + 1;
            local_18 = local_18 + 1;
            pSVar14 = pSVar14 + 1;
          } while (local_18 < vertex_count);
        }
      }
      else {
        iVar13 = 0;
        if (0 < vertex_count) {
          do {
            iVar16 = *vertex_indices;
            iVar13 = iVar13 + 1;
            vertex_indices = vertex_indices + 1;
            auStack_d4[iVar13] = g_SRenderVertex_ARRAY_005c5014 + iVar16;
          } while (iVar13 < vertex_count);
        }
        g_ClippedVertexCount = vertex_count;
        local_48 = vertex_count;
        iVar13 = 0;
        g_ClipperTempCount = 0;
        local_4c = (byte *)local_150;
        local_44 = 0;
        if (0 < vertex_count) {
          puVar15 = auStack_d4;
          pSVar14 = (SRenderVertex *)auStack_d4[vertex_count];
          do {
            iVar16 = g_ClipperTempCount;
            puVar15 = puVar15 + 1;
            pSVar19 = (SRenderVertex *)*puVar15;
            bVar8 = (pSVar14->projected_vertex).transformed_z <=
                    (pSVar14->projected_vertex).transformed_x;
            if ((pSVar19->projected_vertex).transformed_z <=
                (pSVar19->projected_vertex).transformed_x) {
              bVar8 = bVar8 | 2;
            }
            switch(bVar8) {
            case 0:
              iVar16 = iVar13 * 4;
              iVar13 = iVar13 + 1;
              *(SRenderVertex **)(local_4c + iVar16) = pSVar14;
              break;
            case 1:
              if (0xb < g_ClipperTempCount) {
                g_CurrentFilename = "..\\engine\\clipper.c";
                g_CurrentLineNumber = 94;
                core_main_c_displayErrorAndQuit_FUN_004c8440("Ran out of clipped verts!");
              }
              pSVar21 = g_ClipperTempBuffer + g_ClipperTempCount;
              g_ClipperTempCount = g_ClipperTempCount + 1;
              iVar16 = iVar13 * 4;
              iVar13 = iVar13 + 1;
              *(SRenderVertex **)(local_4c + iVar16) = pSVar21;
              engine_clipper_c_interpolateVertexRightClip_FUN_00431530(pSVar19,pSVar14,pSVar21);
              break;
            case 2:
              iVar17 = iVar13 + 1;
              *(SRenderVertex **)(local_4c + iVar13 * 4) = pSVar14;
              if (0xb < iVar16) {
                g_CurrentFilename = "..\\engine\\clipper.c";
                g_CurrentLineNumber = 94;
                core_main_c_displayErrorAndQuit_FUN_004c8440("Ran out of clipped verts!");
              }
              pSVar21 = g_ClipperTempBuffer + g_ClipperTempCount;
              g_ClipperTempCount = g_ClipperTempCount + 1;
              iVar13 = iVar13 + 2;
              *(SRenderVertex **)(local_4c + iVar17 * 4) = pSVar21;
              engine_clipper_c_interpolateVertexRightClip_FUN_00431530(pSVar14,pSVar19,pSVar21);
            }
            local_44 = local_44 + 1;
            pSVar14 = pSVar19;
          } while (local_44 < local_48);
        }
        if (iVar13 < 3) {
          g_ClippedVertexCount = iVar13;
          return;
        }
        iVar16 = 0;
        local_40 = iVar13;
        local_3c = 0;
        pSVar14 = (SRenderVertex *)local_150[iVar13 + -1];
        g_ClippedVertexCount = iVar13;
        puVar15 = local_150;
        if (0 < iVar13) {
          do {
            local_24 = puVar15;
            pSVar19 = (SRenderVertex *)*local_24;
            bVar8 = (pSVar14->projected_vertex).transformed_x <=
                    -(pSVar14->projected_vertex).transformed_z;
            if ((pSVar19->projected_vertex).transformed_x <=
                -(pSVar19->projected_vertex).transformed_z) {
              bVar8 = bVar8 | 2;
            }
            switch(bVar8) {
            case 0:
              iVar16 = iVar16 + 1;
              auStack_d4[iVar16] = pSVar14;
              break;
            case 1:
              if (0xb < g_ClipperTempCount) {
                g_CurrentFilename = "..\\engine\\clipper.c";
                g_CurrentLineNumber = 94;
                core_main_c_displayErrorAndQuit_FUN_004c8440("Ran out of clipped verts!");
              }
              pSVar21 = g_ClipperTempBuffer + g_ClipperTempCount;
              iVar16 = iVar16 + 1;
              g_ClipperTempCount = g_ClipperTempCount + 1;
              auStack_d4[iVar16] = pSVar21;
              engine_clipper_c_interpolateVertexLeftClip_FUN_00431630(pSVar19,pSVar14,pSVar21);
              break;
            case 2:
              auStack_d4[iVar16 + 1] = pSVar14;
              if (0xb < g_ClipperTempCount) {
                g_CurrentFilename = "..\\engine\\clipper.c";
                g_CurrentLineNumber = 94;
                core_main_c_displayErrorAndQuit_FUN_004c8440("Ran out of clipped verts!");
              }
              pSVar21 = g_ClipperTempBuffer + g_ClipperTempCount;
              iVar16 = iVar16 + 2;
              g_ClipperTempCount = g_ClipperTempCount + 1;
              auStack_d4[iVar16] = pSVar21;
              engine_clipper_c_interpolateVertexLeftClip_FUN_00431630(pSVar14,pSVar19,pSVar21);
            }
            local_3c = local_3c + 1;
            local_24 = local_24 + 1;
            pSVar14 = pSVar19;
            puVar15 = local_24;
          } while (local_3c < local_40);
        }
        if (iVar16 < 3) {
          g_ClippedVertexCount = iVar16;
          return;
        }
        iVar13 = 0;
        local_38 = iVar16;
        local_34 = 0;
        pSVar14 = (SRenderVertex *)auStack_d4[iVar16];
        iVar17 = iVar13;
        g_ClippedVertexCount = iVar16;
        puVar15 = auStack_d4 + 1;
        if (0 < iVar16) {
          do {
            local_20 = puVar15;
            pSVar19 = (SRenderVertex *)*local_20;
            bVar8 = (pSVar14->projected_vertex).transformed_z <=
                    (pSVar14->projected_vertex).transformed_y;
            if ((pSVar19->projected_vertex).transformed_z <=
                (pSVar19->projected_vertex).transformed_y) {
              bVar8 = bVar8 | 2;
            }
            iVar13 = iVar17;
            switch(bVar8) {
            case 0:
              iVar13 = iVar17 + 1;
              local_150[iVar17] = pSVar14;
              break;
            case 1:
              if (0xb < g_ClipperTempCount) {
                g_CurrentFilename = "..\\engine\\clipper.c";
                g_CurrentLineNumber = 94;
                core_main_c_displayErrorAndQuit_FUN_004c8440("Ran out of clipped verts!");
              }
              pSVar21 = g_ClipperTempBuffer + g_ClipperTempCount;
              iVar13 = iVar17 + 1;
              g_ClipperTempCount = g_ClipperTempCount + 1;
              local_150[iVar17] = pSVar21;
              engine_clipper_c_interpolateVertexTopClip_FUN_00431730(pSVar19,pSVar14,pSVar21);
              break;
            case 2:
              local_150[iVar17] = pSVar14;
              if (0xb < g_ClipperTempCount) {
                g_CurrentFilename = "..\\engine\\clipper.c";
                g_CurrentLineNumber = 94;
                core_main_c_displayErrorAndQuit_FUN_004c8440("Ran out of clipped verts!");
              }
              pSVar21 = g_ClipperTempBuffer + g_ClipperTempCount;
              iVar13 = iVar17 + 2;
              g_ClipperTempCount = g_ClipperTempCount + 1;
              local_150[iVar17 + 1] = pSVar21;
              engine_clipper_c_interpolateVertexTopClip_FUN_00431730(pSVar14,pSVar19,pSVar21);
            }
            local_34 = local_34 + 1;
            local_20 = local_20 + 1;
            iVar17 = iVar13;
            pSVar14 = pSVar19;
            puVar15 = local_20;
          } while (local_34 < local_38);
        }
        if (iVar13 < 3) {
          g_ClippedVertexCount = iVar13;
          return;
        }
        iVar16 = 0;
        local_30 = iVar13;
        local_2c = 0;
        pSVar14 = (SRenderVertex *)local_150[iVar13 + -1];
        g_ClippedVertexCount = iVar13;
        puVar15 = local_150;
        if (0 < iVar13) {
          do {
            local_1c = puVar15;
            pSVar19 = (SRenderVertex *)*local_1c;
            bVar8 = (pSVar14->projected_vertex).transformed_y <=
                    -(pSVar14->projected_vertex).transformed_z;
            if ((pSVar19->projected_vertex).transformed_y <=
                -(pSVar19->projected_vertex).transformed_z) {
              bVar8 = bVar8 | 2;
            }
            switch(bVar8) {
            case 0:
              iVar16 = iVar16 + 1;
              auStack_d4[iVar16] = pSVar14;
              break;
            case 1:
              if (0xb < g_ClipperTempCount) {
                g_CurrentFilename = "..\\engine\\clipper.c";
                g_CurrentLineNumber = 94;
                core_main_c_displayErrorAndQuit_FUN_004c8440("Ran out of clipped verts!");
              }
              pSVar21 = g_ClipperTempBuffer + g_ClipperTempCount;
              iVar16 = iVar16 + 1;
              g_ClipperTempCount = g_ClipperTempCount + 1;
              auStack_d4[iVar16] = pSVar21;
              engine_clipper_c_interpolateVertexBottomClip_FUN_00431830(pSVar19,pSVar14,pSVar21);
              break;
            case 2:
              auStack_d4[iVar16 + 1] = pSVar14;
              if (0xb < g_ClipperTempCount) {
                g_CurrentFilename = "..\\engine\\clipper.c";
                g_CurrentLineNumber = 94;
                core_main_c_displayErrorAndQuit_FUN_004c8440("Ran out of clipped verts!");
              }
              pSVar21 = g_ClipperTempBuffer + g_ClipperTempCount;
              iVar16 = iVar16 + 2;
              g_ClipperTempCount = g_ClipperTempCount + 1;
              auStack_d4[iVar16] = pSVar21;
              engine_clipper_c_interpolateVertexBottomClip_FUN_00431830(pSVar14,pSVar19,pSVar21);
            }
            local_2c = local_2c + 1;
            local_1c = local_1c + 1;
            pSVar14 = pSVar19;
            puVar15 = local_1c;
          } while (local_2c < local_30);
        }
        if (iVar16 < 3) {
          g_ClippedVertexCount = iVar16;
          return;
        }
        iVar13 = 0;
        g_ClippedVertexCount = iVar16;
        if (0 < iVar16) {
          pSVar14 = g_ClippedVertexBuffer;
          iVar16 = 0;
          do {
            plVar6 = *(longlong **)((int)auStack_d4 + iVar16 + 4);
            iVar17 = 0x30;
            plVar18 = plVar6;
            pSVar19 = pSVar14;
            if (((uint)pSVar14 & 7) != 0) {
              pSVar19 = (SRenderVertex *)((int)pSVar14 + (uint)bVar22 * -8 + 4);
              plVar18 = (longlong *)((int)plVar6 + (uint)bVar22 * -8 + 4);
              (pSVar14->projected_vertex).transformed_x = (int)*plVar6;
              iVar17 = 0x2c;
            }
            while (7 < iVar17) {
              lVar2 = *plVar18;
              plVar18 = plVar18 + 1;
              (pSVar19->projected_vertex).transformed_x = (int)(longlong)ROUND((float10)lVar2);
              (pSVar19->projected_vertex).transformed_y =
                   (int)((ulonglong)(longlong)ROUND((float10)lVar2) >> 0x20);
              pSVar19 = (SRenderVertex *)&(pSVar19->projected_vertex).transformed_z;
              iVar17 = iVar17 + -8;
            }
            if (iVar17 != 0 && -9 < iVar17 + -8) {
              (pSVar19->projected_vertex).transformed_x = (int)*plVar18;
              if (4 < iVar17) {
                *(uint *)((int)pSVar19 + (uint)bVar22 * -8 + 4) =
                     *(uint *)((int)plVar18 + (uint)bVar22 * -8 + 4);
              }
            }
            iVar16 = iVar16 + 4;
            iVar13 = iVar13 + 1;
            pSVar14 = pSVar14 + 1;
          } while (iVar13 < g_ClippedVertexCount);
        }
        iVar13 = 0;
        if (g_FarPlaneDistance != 0) {
          if (0 < g_ClippedVertexCount) {
            iVar16 = 0;
            do {
              iVar17 = *(int *)((int)&g_ClippedVertexBuffer[0].projected_vertex.transformed_z +
                               iVar16);
              if (iVar13 < iVar17) {
                iVar13 = iVar17;
              }
              iVar16 = iVar16 + 0x30;
            } while (iVar16 < g_ClippedVertexCount * 0x30);
          }
          if (g_FarPlaneDistance <= iVar13) {
            pSVar14 = g_ClippedVertexBuffer;
            g_SecondaryClipVertexCount = g_ClippedVertexCount;
            pSVar19 = g_SecondaryClipVertexBuffer;
            local_14 = 0;
            iVar13 = g_ClippedVertexCount * 0x30;
            while (7 < iVar13) {
              lVar2._0_4_ = (pSVar14->projected_vertex).transformed_x;
              lVar2._4_4_ = (pSVar14->projected_vertex).transformed_y;
              pSVar14 = (SRenderVertex *)&(pSVar14->projected_vertex).transformed_z;
              (pSVar19->projected_vertex).transformed_x = (int)(longlong)ROUND((float10)lVar2);
              (pSVar19->projected_vertex).transformed_y =
                   (int)((ulonglong)(longlong)ROUND((float10)lVar2) >> 0x20);
              pSVar19 = (SRenderVertex *)&(pSVar19->projected_vertex).transformed_z;
              iVar13 = iVar13 + -8;
            }
            if (iVar13 != 0 && -9 < iVar13 + -8) {
              (pSVar19->projected_vertex).transformed_x = (pSVar14->projected_vertex).transformed_x;
              if (4 < iVar13) {
                *(uint *)((int)pSVar19 + (uint)bVar22 * -8 + 4) =
                     *(uint *)((int)pSVar14 + (uint)bVar22 * -8 + 4);
              }
            }
            g_ClippedVertexCount = 0;
            if (0 < g_SecondaryClipVertexCount) {
              pSVar14 = g_SecondaryClipVertexBuffer;
              do {
                uVar12 = local_14 + 1;
                if (uVar12 == g_SecondaryClipVertexCount) {
                  uVar12 = uVar12 ^ g_SecondaryClipVertexCount;
                }
                bVar8 = g_FarPlaneDistance <= (pSVar14->projected_vertex).transformed_z;
                if (g_FarPlaneDistance <=
                    g_SecondaryClipVertexBuffer[uVar12].projected_vertex.transformed_z) {
                  bVar8 = bVar8 | 2;
                }
                switch(bVar8) {
                case 0:
                  pSVar20 = g_ClippedVertexBuffer + g_ClippedVertexCount;
                  iVar13 = 0x30;
                  pSVar19 = pSVar14;
                  pSVar21 = pSVar20;
                  if (((uint)pSVar20 & 7) != 0) {
                    pSVar21 = (SRenderVertex *)
                              (g_ClippedVertexCount * 0x30 + 0x766c78 + (uint)bVar22 * -8);
                    pSVar19 = (SRenderVertex *)((int)pSVar14 + (uint)bVar22 * -8 + 4);
                    (pSVar20->projected_vertex).transformed_x =
                         (pSVar14->projected_vertex).transformed_x;
                    iVar13 = 0x2c;
                  }
                  while (7 < iVar13) {
                    lVar3._0_4_ = (pSVar19->projected_vertex).transformed_x;
                    lVar3._4_4_ = (pSVar19->projected_vertex).transformed_y;
                    pSVar19 = (SRenderVertex *)&(pSVar19->projected_vertex).transformed_z;
                    (pSVar21->projected_vertex).transformed_x = (int)(longlong)ROUND((float10)lVar3)
                    ;
                    (pSVar21->projected_vertex).transformed_y =
                         (int)((ulonglong)(longlong)ROUND((float10)lVar3) >> 0x20);
                    pSVar21 = (SRenderVertex *)&(pSVar21->projected_vertex).transformed_z;
                    iVar13 = iVar13 + -8;
                  }
                  if (iVar13 != 0 && -9 < iVar13 + -8) {
                    (pSVar21->projected_vertex).transformed_x =
                         (pSVar19->projected_vertex).transformed_x;
                    if (4 < iVar13) {
                      *(uint *)((int)pSVar21 + (uint)bVar22 * -8 + 4) =
                           *(uint *)((int)pSVar19 + (uint)bVar22 * -8 + 4);
                    }
                  }
                  g_ClippedVertexCount = g_ClippedVertexCount + 1;
                  break;
                case 1:
                  engine_clipper_c_interpolateVertexFarClip_FUN_00431930
                            (g_SecondaryClipVertexBuffer + uVar12,pSVar14,
                             g_ClippedVertexBuffer + g_ClippedVertexCount);
                  g_ClippedVertexCount = g_ClippedVertexCount + 1;
                  break;
                case 2:
                  pSVar20 = g_ClippedVertexBuffer + g_ClippedVertexCount;
                  iVar13 = 0x30;
                  pSVar19 = pSVar14;
                  pSVar21 = pSVar20;
                  if (((uint)pSVar20 & 7) != 0) {
                    pSVar21 = (SRenderVertex *)
                              (g_ClippedVertexCount * 0x30 + 0x766c78 + (uint)bVar22 * -8);
                    pSVar19 = (SRenderVertex *)((int)pSVar14 + (uint)bVar22 * -8 + 4);
                    (pSVar20->projected_vertex).transformed_x =
                         (pSVar14->projected_vertex).transformed_x;
                    iVar13 = 0x2c;
                  }
                  while (7 < iVar13) {
                    lVar4._0_4_ = (pSVar19->projected_vertex).transformed_x;
                    lVar4._4_4_ = (pSVar19->projected_vertex).transformed_y;
                    pSVar19 = (SRenderVertex *)&(pSVar19->projected_vertex).transformed_z;
                    (pSVar21->projected_vertex).transformed_x = (int)(longlong)ROUND((float10)lVar4)
                    ;
                    (pSVar21->projected_vertex).transformed_y =
                         (int)((ulonglong)(longlong)ROUND((float10)lVar4) >> 0x20);
                    pSVar21 = (SRenderVertex *)&(pSVar21->projected_vertex).transformed_z;
                    iVar13 = iVar13 + -8;
                  }
                  if (iVar13 != 0 && -9 < iVar13 + -8) {
                    (pSVar21->projected_vertex).transformed_x =
                         (pSVar19->projected_vertex).transformed_x;
                    if (4 < iVar13) {
                      *(uint *)((int)pSVar21 + (uint)bVar22 * -8 + 4) =
                           *(uint *)((int)pSVar19 + (uint)bVar22 * -8 + 4);
                    }
                  }
                  g_ClippedVertexCount = g_ClippedVertexCount + 1;
                  engine_clipper_c_interpolateVertexFarClip_FUN_00431930
                            (pSVar14,g_SecondaryClipVertexBuffer + uVar12,
                             g_ClippedVertexBuffer + g_ClippedVertexCount);
                  g_ClippedVertexCount = g_ClippedVertexCount + 1;
                }
                local_14 = local_14 + 1;
                pSVar14 = pSVar14 + 1;
              } while (local_14 < g_SecondaryClipVertexCount);
            }
          }
        }
        if (g_ClippedVertexCount < 3) {
          return;
        }
        iVar13 = 0;
        if (0 < g_ClippedVertexCount) {
          pSVar14 = g_ClippedVertexBuffer;
          do {
            iVar16 = (pSVar14->projected_vertex).transformed_z;
            if (iVar16 == 0) {
              (pSVar14->projected_vertex).transformed_z = 1;
              (pSVar14->projected_vertex).transformed_x = 0;
              (pSVar14->projected_vertex).transformed_y = 0;
            }
            else {
              iVar17 = (pSVar14->projected_vertex).transformed_x;
              iVar10 = iVar16;
              if ((iVar16 < iVar17) || (iVar10 = -iVar16, -iVar17 != iVar16 && iVar17 <= iVar10)) {
                (pSVar14->projected_vertex).transformed_x = iVar10;
              }
              else {
                iVar17 = (pSVar14->projected_vertex).transformed_z;
                iVar7 = (pSVar14->projected_vertex).transformed_y;
                if (iVar17 < iVar7) {
                  (pSVar14->projected_vertex).transformed_y = iVar17;
                }
                else if (-iVar7 != iVar16 && iVar7 <= iVar10) {
                  (pSVar14->projected_vertex).transformed_y = iVar10;
                }
              }
            }
            iVar13 = iVar13 + 1;
            pSVar14 = pSVar14 + 1;
          } while (iVar13 < g_ClippedVertexCount);
        }
      }
      if (2 < g_ClippedVertexCount) {
        engine_prim_c_renderPolygonSoftware_FUN_004f9dd0(g_ClippedVertexBuffer,g_ClippedVertexCount)
        ;
        return;
      }
    }
  }
  return;
}
