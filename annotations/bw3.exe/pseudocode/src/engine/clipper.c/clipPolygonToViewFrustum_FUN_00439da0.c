// Name: engine_clipper.c_clipPolygonToViewFrustum_FUN_00439da0
// Address: 00439da0
// Address Range: [[00439da0, 0043a832]]
// Convention: __cdecl
// Signature: int __cdecl engine_clipper_c_clipPolygonToViewFrustum_FUN_00439da0(int vertex_count,int *vertex_indices)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x0043a66b) */
/* WARNING: Type propagation algorithm not settling */

int __cdecl engine_clipper_c_clipPolygonToViewFrustum_FUN_00439da0(int vertex_count,int *vertex_indices)

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
  int iVar11;
  uint uVar12;
  int iVar13;
  SRenderVertex *pSVar14;
  uint *puVar15;
  int iVar16;
  longlong *plVar17;
  SRenderVertex *pSVar18;
  SRenderVertex *pSVar19;
  bool bVar20;
  byte bVar21;
  uint local_150 [31];
  uint auStack_d4 [33];
  uint local_50;
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
  SRenderVertex *local_18;
  int local_14;
  
  bVar21 = 0;
  uVar12 = 0;
  local_50 = 0xffffffff;
  iVar11 = 0;
  piVar9 = vertex_indices;
  if (0 < vertex_count) {
    do {
      uVar5 = g_SRenderVertex_ARRAY_0060b014[*piVar9].projected_vertex.screen_x;
      if ((uVar5 & 0x80000000) != 0) {
        uVar12 = uVar12 + 1;
      }
      iVar11 = iVar11 + 1;
      local_50 = local_50 & uVar5;
      piVar9 = piVar9 + 1;
    } while (iVar11 < vertex_count);
  }
  if ((uVar12 == vertex_count) && ((char)local_50 != '\0')) {
    g_ClippedVertexCount = uVar12 ^ vertex_count;
  }
  else {
    if (uVar12 == 0) {
      if ((g_INT_01c6cee8 == 0) || (g_TexturesDisabled != 0)) {
        g_ClippedVertexCount = vertex_count;
        local_14 = 0;
        if (0 < vertex_count) {
          pSVar14 = g_SRenderVertex_ARRAY_007e3e8c;
          do {
            iVar11 = 0x30;
            pSVar19 = g_SRenderVertex_ARRAY_0060b014 + *vertex_indices;
            pSVar18 = pSVar14;
            if (((uint)pSVar14 & 7) != 0) {
              pSVar18 = (SRenderVertex *)&(pSVar14->projected_vertex).transformed_y;
              pSVar19 = (SRenderVertex *)
                        &g_SRenderVertex_ARRAY_0060b014[*vertex_indices].projected_vertex.
                         transformed_y;
              (pSVar14->projected_vertex).transformed_x =
                   g_SRenderVertex_ARRAY_0060b014[*vertex_indices].projected_vertex.transformed_x;
              iVar11 = 0x2c;
            }
            while (7 < iVar11) {
              lVar1._0_4_ = (pSVar19->projected_vertex).transformed_x;
              lVar1._4_4_ = (pSVar19->projected_vertex).transformed_y;
              pSVar19 = (SRenderVertex *)&(pSVar19->projected_vertex).transformed_z;
              (pSVar18->projected_vertex).transformed_x = (int)(longlong)ROUND((float10)lVar1);
              (pSVar18->projected_vertex).transformed_y =
                   (int)((ulonglong)(longlong)ROUND((float10)lVar1) >> 0x20);
              pSVar18 = (SRenderVertex *)&(pSVar18->projected_vertex).transformed_z;
              iVar11 = iVar11 + -8;
            }
            if (iVar11 != 0 && -9 < iVar11 + -8) {
              (pSVar18->projected_vertex).transformed_x = (pSVar19->projected_vertex).transformed_x;
              if (4 < iVar11) {
                (pSVar18->projected_vertex).transformed_y =
                     (pSVar19->projected_vertex).transformed_y;
              }
            }
            vertex_indices = vertex_indices + 1;
            local_14 = local_14 + 1;
            pSVar14 = pSVar14 + 1;
          } while (local_14 < vertex_count);
        }
        return 0;
      }
      iVar11 = 0;
      if (0 < vertex_count) {
        do {
          iVar13 = *vertex_indices;
          iVar11 = iVar11 + 1;
          vertex_indices = vertex_indices + 1;
          g_INT_ARRAY_007e4488[iVar11] = (int)(g_SRenderVertex_ARRAY_0060b014 + iVar13);
        } while (iVar11 < vertex_count);
      }
      if (g_CullingMode != 0) {
        if (vertex_count < 4) {
          iVar11 = engine_prim_c_calculateTriangleWindingOrder_FUN_00515ac0
                             (g_ClipperCullingPointers[0],g_ClipperCullingPointers[1],
                              g_ClipperCullingPointers[2]);
          bVar20 = iVar11 == 0;
        }
        else {
          local_28 = vertex_count + -2;
          iVar13 = 0;
          iVar11 = local_28 * 4;
          iVar16 = 0;
          if (0 < iVar11) {
            do {
              iVar10 = engine_prim_c_calculateTriangleWindingOrder_FUN_00515ac0
                                 (g_ClipperCullingPointers[0],
                                  *(SRenderVertex **)((int)g_ClipperCullingPointers + iVar13 + 4),
                                  *(SRenderVertex **)((int)g_ClipperCullingPointers + iVar13 + 8));
              if (iVar10 == 0) {
                iVar16 = iVar16 + 1;
              }
              iVar13 = iVar13 + 4;
            } while (iVar13 < iVar11);
          }
          bVar20 = iVar16 == local_28;
        }
        if (bVar20) {
          return 1;
        }
      }
      g_RenderedTriangleCount = g_RenderedTriangleCount + vertex_count + -2;
      engine_special_cpp_drawPolygon2_FUN_00565c40
                (g_ClipperCullingPointers,vertex_count,g_RenderStateFlags.dword);
      return 1;
    }
    iVar11 = 0;
    if (0 < vertex_count) {
      do {
        iVar13 = *vertex_indices;
        iVar11 = iVar11 + 1;
        vertex_indices = vertex_indices + 1;
        auStack_d4[iVar11] = g_SRenderVertex_ARRAY_0060b014 + iVar13;
      } while (iVar11 < vertex_count);
    }
    g_ClippedVertexCount = vertex_count;
    local_48 = vertex_count;
    iVar11 = 0;
    g_ClipperTempCount = 0;
    local_44 = 0;
    local_4c = (byte *)local_150;
    if (0 < vertex_count) {
      puVar15 = auStack_d4;
      pSVar14 = (SRenderVertex *)auStack_d4[vertex_count];
      do {
        iVar13 = g_ClipperTempCount;
        puVar15 = puVar15 + 1;
        pSVar19 = (SRenderVertex *)*puVar15;
        bVar8 = (pSVar14->projected_vertex).transformed_z <=
                (pSVar14->projected_vertex).transformed_x;
        if ((pSVar19->projected_vertex).transformed_z <= (pSVar19->projected_vertex).transformed_x)
        {
          bVar8 = bVar8 | 2;
        }
        switch(bVar8) {
        case 0:
          iVar13 = iVar11 * 4;
          iVar11 = iVar11 + 1;
          *(SRenderVertex **)(local_4c + iVar13) = pSVar14;
          break;
        case 1:
          if (0xb < g_ClipperTempCount) {
            g_CurrentFilename = "..\\engine\\clipper.c";
            g_CurrentLineNumber = 94;
            core_main_c_displayErrorAndQuit_FUN_004e4330("Ran out of clipped verts!");
          }
          pSVar18 = g_ClipperTempBuffer + g_ClipperTempCount;
          g_ClipperTempCount = g_ClipperTempCount + 1;
          iVar13 = iVar11 * 4;
          iVar11 = iVar11 + 1;
          *(SRenderVertex **)(local_4c + iVar13) = pSVar18;
          engine_clipper_c_interpolateVertexRightClip_FUN_004390c0(pSVar19,pSVar14,pSVar18);
          break;
        case 2:
          iVar16 = iVar11 + 1;
          *(SRenderVertex **)(local_4c + iVar11 * 4) = pSVar14;
          if (0xb < iVar13) {
            g_CurrentFilename = "..\\engine\\clipper.c";
            g_CurrentLineNumber = 94;
            core_main_c_displayErrorAndQuit_FUN_004e4330("Ran out of clipped verts!");
          }
          pSVar18 = g_ClipperTempBuffer + g_ClipperTempCount;
          g_ClipperTempCount = g_ClipperTempCount + 1;
          iVar11 = iVar11 + 2;
          *(SRenderVertex **)(local_4c + iVar16 * 4) = pSVar18;
          engine_clipper_c_interpolateVertexRightClip_FUN_004390c0(pSVar14,pSVar19,pSVar18);
        }
        local_44 = local_44 + 1;
        pSVar14 = pSVar19;
      } while (local_44 < local_48);
    }
    g_ClippedVertexCount = iVar11;
    if (2 < iVar11) {
      iVar13 = 0;
      local_40 = iVar11;
      local_3c = 0;
      pSVar14 = (SRenderVertex *)local_150[iVar11 + -1];
      puVar15 = local_150;
      if (0 < iVar11) {
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
            iVar13 = iVar13 + 1;
            auStack_d4[iVar13] = pSVar14;
            break;
          case 1:
            if (0xb < g_ClipperTempCount) {
              g_CurrentFilename = "..\\engine\\clipper.c";
              g_CurrentLineNumber = 94;
              core_main_c_displayErrorAndQuit_FUN_004e4330("Ran out of clipped verts!");
            }
            pSVar18 = g_ClipperTempBuffer + g_ClipperTempCount;
            iVar13 = iVar13 + 1;
            g_ClipperTempCount = g_ClipperTempCount + 1;
            auStack_d4[iVar13] = pSVar18;
            engine_clipper_c_interpolateVertexLeftClip_FUN_004391c0(pSVar19,pSVar14,pSVar18);
            break;
          case 2:
            auStack_d4[iVar13 + 1] = pSVar14;
            if (0xb < g_ClipperTempCount) {
              g_CurrentFilename = "..\\engine\\clipper.c";
              g_CurrentLineNumber = 94;
              core_main_c_displayErrorAndQuit_FUN_004e4330("Ran out of clipped verts!");
            }
            pSVar18 = g_ClipperTempBuffer + g_ClipperTempCount;
            iVar13 = iVar13 + 2;
            g_ClipperTempCount = g_ClipperTempCount + 1;
            auStack_d4[iVar13] = pSVar18;
            engine_clipper_c_interpolateVertexLeftClip_FUN_004391c0(pSVar14,pSVar19,pSVar18);
          }
          local_3c = local_3c + 1;
          local_24 = local_24 + 1;
          pSVar14 = pSVar19;
          puVar15 = local_24;
        } while (local_3c < local_40);
      }
      g_ClippedVertexCount = iVar13;
      if (2 < iVar13) {
        iVar11 = 0;
        local_38 = iVar13;
        local_34 = 0;
        if (0 < iVar13) {
          local_20 = auStack_d4 + 1;
          iVar16 = iVar11;
          pSVar14 = (SRenderVertex *)auStack_d4[iVar13];
          do {
            pSVar19 = (SRenderVertex *)*local_20;
            bVar8 = (pSVar14->projected_vertex).transformed_z <=
                    (pSVar14->projected_vertex).transformed_y;
            if ((pSVar19->projected_vertex).transformed_z <=
                (pSVar19->projected_vertex).transformed_y) {
              bVar8 = bVar8 | 2;
            }
            iVar11 = iVar16;
            switch(bVar8) {
            case 0:
              iVar11 = iVar16 + 1;
              local_150[iVar16] = pSVar14;
              break;
            case 1:
              if (0xb < g_ClipperTempCount) {
                g_CurrentFilename = "..\\engine\\clipper.c";
                g_CurrentLineNumber = 94;
                core_main_c_displayErrorAndQuit_FUN_004e4330("Ran out of clipped verts!");
              }
              pSVar18 = g_ClipperTempBuffer + g_ClipperTempCount;
              iVar11 = iVar16 + 1;
              g_ClipperTempCount = g_ClipperTempCount + 1;
              local_150[iVar16] = pSVar18;
              engine_clipper_c_interpolateVertexTopClip_FUN_004392c0(pSVar19,pSVar14,pSVar18);
              break;
            case 2:
              local_150[iVar16] = pSVar14;
              if (0xb < g_ClipperTempCount) {
                g_CurrentFilename = "..\\engine\\clipper.c";
                g_CurrentLineNumber = 94;
                core_main_c_displayErrorAndQuit_FUN_004e4330("Ran out of clipped verts!");
              }
              pSVar18 = g_ClipperTempBuffer + g_ClipperTempCount;
              iVar11 = iVar16 + 2;
              g_ClipperTempCount = g_ClipperTempCount + 1;
              local_150[iVar16 + 1] = pSVar18;
              engine_clipper_c_interpolateVertexTopClip_FUN_004392c0(pSVar14,pSVar19,pSVar18);
            }
            local_34 = local_34 + 1;
            local_20 = local_20 + 1;
            iVar16 = iVar11;
            pSVar14 = pSVar19;
          } while (local_34 < local_38);
        }
        g_ClippedVertexCount = iVar11;
        if (2 < iVar11) {
          iVar13 = 0;
          local_30 = iVar11;
          local_2c = 0;
          pSVar14 = (SRenderVertex *)local_150[iVar11 + -1];
          puVar15 = local_150;
          if (0 < iVar11) {
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
                iVar13 = iVar13 + 1;
                auStack_d4[iVar13] = pSVar14;
                break;
              case 1:
                if (0xb < g_ClipperTempCount) {
                  g_CurrentFilename = "..\\engine\\clipper.c";
                  g_CurrentLineNumber = 94;
                  core_main_c_displayErrorAndQuit_FUN_004e4330("Ran out of clipped verts!");
                }
                pSVar18 = g_ClipperTempBuffer + g_ClipperTempCount;
                iVar13 = iVar13 + 1;
                g_ClipperTempCount = g_ClipperTempCount + 1;
                auStack_d4[iVar13] = pSVar18;
                engine_clipper_c_interpolateVertexBottomClip_FUN_004393c0(pSVar19,pSVar14,pSVar18);
                break;
              case 2:
                auStack_d4[iVar13 + 1] = pSVar14;
                if (0xb < g_ClipperTempCount) {
                  g_CurrentFilename = "..\\engine\\clipper.c";
                  g_CurrentLineNumber = 94;
                  core_main_c_displayErrorAndQuit_FUN_004e4330("Ran out of clipped verts!");
                }
                pSVar18 = g_ClipperTempBuffer + g_ClipperTempCount;
                iVar13 = iVar13 + 2;
                auStack_d4[iVar13] = pSVar18;
                g_ClipperTempCount = g_ClipperTempCount + 1;
                engine_clipper_c_interpolateVertexBottomClip_FUN_004393c0(pSVar14,pSVar19,pSVar18);
              }
              local_2c = local_2c + 1;
              local_1c = local_1c + 1;
              pSVar14 = pSVar19;
              puVar15 = local_1c;
            } while (local_2c < local_30);
          }
          g_ClippedVertexCount = iVar13;
          if (2 < iVar13) {
            iVar11 = 0;
            if (0 < iVar13) {
              pSVar14 = g_SRenderVertex_ARRAY_007e3e8c;
              iVar13 = 0;
              do {
                plVar6 = *(longlong **)((int)auStack_d4 + iVar13 + 4);
                iVar16 = 0x30;
                plVar17 = plVar6;
                pSVar19 = pSVar14;
                if (((uint)pSVar14 & 7) != 0) {
                  pSVar19 = (SRenderVertex *)((int)pSVar14 + (uint)bVar21 * -8 + 4);
                  plVar17 = (longlong *)((int)plVar6 + (uint)bVar21 * -8 + 4);
                  (pSVar14->projected_vertex).transformed_x = (int)*plVar6;
                  iVar16 = 0x2c;
                }
                while (7 < iVar16) {
                  lVar1 = *plVar17;
                  plVar17 = plVar17 + 1;
                  (pSVar19->projected_vertex).transformed_x = (int)(longlong)ROUND((float10)lVar1);
                  (pSVar19->projected_vertex).transformed_y =
                       (int)((ulonglong)(longlong)ROUND((float10)lVar1) >> 0x20);
                  pSVar19 = (SRenderVertex *)&(pSVar19->projected_vertex).transformed_z;
                  iVar16 = iVar16 + -8;
                }
                if (iVar16 != 0 && -9 < iVar16 + -8) {
                  (pSVar19->projected_vertex).transformed_x = (int)*plVar17;
                  if (4 < iVar16) {
                    *(uint *)((int)pSVar19 + (uint)bVar21 * -8 + 4) =
                         *(uint *)((int)plVar17 + (uint)bVar21 * -8 + 4);
                  }
                }
                iVar13 = iVar13 + 4;
                iVar11 = iVar11 + 1;
                pSVar14 = pSVar14 + 1;
              } while (iVar11 < g_ClippedVertexCount);
            }
            iVar11 = 0;
            if (g_INT_005f12f4 != 0) {
              if (0 < g_ClippedVertexCount) {
                iVar13 = 0;
                do {
                  iVar16 = *(int *)((int)&g_SRenderVertex_ARRAY_007e3e8c[0].projected_vertex.
                                          transformed_z + iVar13);
                  if (iVar11 < iVar16) {
                    iVar11 = iVar16;
                  }
                  iVar13 = iVar13 + 0x30;
                } while (iVar13 < g_ClippedVertexCount * 0x30);
              }
              if (g_INT_005f12f4 <= iVar11) {
                g_INT_007e450c = g_ClippedVertexCount;
                pSVar14 = g_SRenderVertex_ARRAY_007e3e8c;
                pSVar19 = g_SRenderVertex_ARRAY_007e4510;
                iVar13 = 0;
                iVar11 = g_ClippedVertexCount * 0x30;
                while (7 < iVar11) {
                  lVar2._0_4_ = (pSVar14->projected_vertex).transformed_x;
                  lVar2._4_4_ = (pSVar14->projected_vertex).transformed_y;
                  pSVar14 = (SRenderVertex *)&(pSVar14->projected_vertex).transformed_z;
                  (pSVar19->projected_vertex).transformed_x = (int)(longlong)ROUND((float10)lVar2);
                  (pSVar19->projected_vertex).transformed_y =
                       (int)((ulonglong)(longlong)ROUND((float10)lVar2) >> 0x20);
                  pSVar19 = (SRenderVertex *)&(pSVar19->projected_vertex).transformed_z;
                  iVar11 = iVar11 + -8;
                }
                if (iVar11 != 0 && -9 < iVar11 + -8) {
                  (pSVar19->projected_vertex).transformed_x =
                       (pSVar14->projected_vertex).transformed_x;
                  if (4 < iVar11) {
                    *(uint *)((int)pSVar19 + (uint)bVar21 * -8 + 4) =
                         *(uint *)((int)pSVar14 + (uint)bVar21 * -8 + 4);
                  }
                }
                g_ClippedVertexCount = 0;
                if (0 < g_INT_007e450c) {
                  local_18 = g_SRenderVertex_ARRAY_007e4510;
                  do {
                    uVar12 = iVar13 + 1;
                    if (uVar12 == g_INT_007e450c) {
                      uVar12 = uVar12 ^ g_INT_007e450c;
                    }
                    bVar8 = g_INT_005f12f4 <= (local_18->projected_vertex).transformed_z;
                    if (g_INT_005f12f4 <=
                        g_SRenderVertex_ARRAY_007e4510[uVar12].projected_vertex.transformed_z) {
                      bVar8 = bVar8 | 2;
                    }
                    switch(bVar8) {
                    case 0:
                      pSVar18 = g_SRenderVertex_ARRAY_007e3e8c + g_ClippedVertexCount;
                      iVar11 = 0x30;
                      pSVar14 = local_18;
                      pSVar19 = pSVar18;
                      if (((uint)pSVar18 & 7) != 0) {
                        pSVar19 = (SRenderVertex *)
                                  (g_ClippedVertexCount * 0x30 + 0x7e3e90 + (uint)bVar21 * -8);
                        pSVar14 = (SRenderVertex *)((int)local_18 + (uint)bVar21 * -8 + 4);
                        (pSVar18->projected_vertex).transformed_x =
                             (local_18->projected_vertex).transformed_x;
                        iVar11 = 0x2c;
                      }
                      while (7 < iVar11) {
                        lVar3._0_4_ = (pSVar14->projected_vertex).transformed_x;
                        lVar3._4_4_ = (pSVar14->projected_vertex).transformed_y;
                        pSVar14 = (SRenderVertex *)&(pSVar14->projected_vertex).transformed_z;
                        (pSVar19->projected_vertex).transformed_x =
                             (int)(longlong)ROUND((float10)lVar3);
                        (pSVar19->projected_vertex).transformed_y =
                             (int)((ulonglong)(longlong)ROUND((float10)lVar3) >> 0x20);
                        pSVar19 = (SRenderVertex *)&(pSVar19->projected_vertex).transformed_z;
                        iVar11 = iVar11 + -8;
                      }
                      if (iVar11 != 0 && -9 < iVar11 + -8) {
                        (pSVar19->projected_vertex).transformed_x =
                             (pSVar14->projected_vertex).transformed_x;
                        if (4 < iVar11) {
                          *(uint *)((int)pSVar19 + (uint)bVar21 * -8 + 4) =
                               *(uint *)((int)pSVar14 + (uint)bVar21 * -8 + 4);
                        }
                      }
                      g_ClippedVertexCount = g_ClippedVertexCount + 1;
                      break;
                    case 1:
                      engine_clipper_c_interpolateVertexFarClip_FUN_004394c0
                                (g_SRenderVertex_ARRAY_007e4510 + uVar12,local_18,
                                 g_SRenderVertex_ARRAY_007e3e8c + g_ClippedVertexCount);
                      g_ClippedVertexCount = g_ClippedVertexCount + 1;
                      break;
                    case 2:
                      pSVar18 = g_SRenderVertex_ARRAY_007e3e8c + g_ClippedVertexCount;
                      iVar11 = 0x30;
                      pSVar14 = local_18;
                      pSVar19 = pSVar18;
                      if (((uint)pSVar18 & 7) != 0) {
                        pSVar19 = (SRenderVertex *)
                                  (g_ClippedVertexCount * 0x30 + 0x7e3e90 + (uint)bVar21 * -8);
                        pSVar14 = (SRenderVertex *)((int)local_18 + (uint)bVar21 * -8 + 4);
                        (pSVar18->projected_vertex).transformed_x =
                             (local_18->projected_vertex).transformed_x;
                        iVar11 = 0x2c;
                      }
                      while (7 < iVar11) {
                        lVar4._0_4_ = (pSVar14->projected_vertex).transformed_x;
                        lVar4._4_4_ = (pSVar14->projected_vertex).transformed_y;
                        pSVar14 = (SRenderVertex *)&(pSVar14->projected_vertex).transformed_z;
                        (pSVar19->projected_vertex).transformed_x =
                             (int)(longlong)ROUND((float10)lVar4);
                        (pSVar19->projected_vertex).transformed_y =
                             (int)((ulonglong)(longlong)ROUND((float10)lVar4) >> 0x20);
                        pSVar19 = (SRenderVertex *)&(pSVar19->projected_vertex).transformed_z;
                        iVar11 = iVar11 + -8;
                      }
                      if (iVar11 != 0 && -9 < iVar11 + -8) {
                        (pSVar19->projected_vertex).transformed_x =
                             (pSVar14->projected_vertex).transformed_x;
                        if (4 < iVar11) {
                          *(uint *)((int)pSVar19 + (uint)bVar21 * -8 + 4) =
                               *(uint *)((int)pSVar14 + (uint)bVar21 * -8 + 4);
                        }
                      }
                      g_ClippedVertexCount = g_ClippedVertexCount + 1;
                      engine_clipper_c_interpolateVertexFarClip_FUN_004394c0
                                (local_18,g_SRenderVertex_ARRAY_007e4510 + uVar12,
                                 g_SRenderVertex_ARRAY_007e3e8c + g_ClippedVertexCount);
                      g_ClippedVertexCount = g_ClippedVertexCount + 1;
                    }
                    local_18 = local_18 + 1;
                    iVar13 = iVar13 + 1;
                  } while (iVar13 < g_INT_007e450c);
                }
              }
            }
            if (2 < g_ClippedVertexCount) {
              iVar11 = 0;
              if (0 < g_ClippedVertexCount) {
                pSVar14 = g_SRenderVertex_ARRAY_007e3e8c;
                do {
                  iVar13 = (pSVar14->projected_vertex).transformed_z;
                  if (iVar13 == 0) {
                    (pSVar14->projected_vertex).transformed_z = 1;
                    (pSVar14->projected_vertex).transformed_x = 0;
                    iVar10 = 0;
LAB_0043a2ee:
                    (pSVar14->projected_vertex).transformed_y = iVar10;
                  }
                  else {
                    iVar16 = (pSVar14->projected_vertex).transformed_x;
                    if (iVar13 < iVar16) {
                      (pSVar14->projected_vertex).transformed_x = iVar13;
                    }
                    else {
                      iVar10 = -iVar13;
                      if (-iVar16 == iVar13 || iVar10 < iVar16) {
                        iVar16 = (pSVar14->projected_vertex).transformed_z;
                        iVar7 = (pSVar14->projected_vertex).transformed_y;
                        if (iVar16 < iVar7) {
                          (pSVar14->projected_vertex).transformed_y = iVar16;
                        }
                        else if (-iVar7 != iVar13 && iVar7 <= iVar10) goto LAB_0043a2ee;
                      }
                      else {
                        (pSVar14->projected_vertex).transformed_x = iVar10;
                      }
                    }
                  }
                  iVar11 = iVar11 + 1;
                  pSVar14 = pSVar14 + 1;
                } while (iVar11 < g_ClippedVertexCount);
              }
              return 0;
            }
          }
        }
      }
    }
  }
  return 1;
}
