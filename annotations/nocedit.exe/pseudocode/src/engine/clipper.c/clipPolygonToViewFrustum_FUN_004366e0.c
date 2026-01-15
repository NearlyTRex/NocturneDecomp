// Name: engine_clipper.c_clipPolygonToViewFrustum_FUN_004366e0
// Address: 004366e0
// Address Range: [[004366e0, 004371ac]]
// Convention: __cdecl
// Signature: int engine_clipper.c_clipPolygonToViewFrustum_FUN_004366e0(int vertex_count, int * vertex_indices)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x0043711f) */
/* WARNING: Removing unreachable block (ram,0x004368cf) */
/* WARNING: Removing unreachable block (ram,0x00436c04) */
/* WARNING: Removing unreachable block (ram,0x0043708f) */
/* WARNING: Type propagation algorithm not settling */

int __cdecl
engine_clipper_c_clipPolygonToViewFrustum_FUN_004366e0(int vertex_count,int *vertex_indices)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  byte bVar7;
  int iVar8;
  int iVar9;
  char cVar10;
  int *piVar12;
  SRenderVertex *pSVar13;
  uint *puVar14;
  int iVar15;
  int iVar16;
  SRenderVertex *pSVar17;
  longlong *plVar18;
  SRenderVertex *pSVar19;
  longlong *plVar20;
  bool bVar21;
  byte bVar22;
  char local_24c [252];
  uint auStack_150 [32];
  uint uStack_d0;
  byte local_cc [128];
  int local_4c;
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
  uint uVar11;
  
  bVar22 = 0;
  if ((vertex_count < 0) || (0x10 < vertex_count)) {
    crt_stdio_c_sprintf_FUN_005fdbd0(local_24c,"Too many poly verticies : %d",vertex_count);
    g_CurrentFilename = "..\\engine\\clipper.c";
    g_CurrentLineNumber = 0x276;
    core_main_c_displayErrorAndQuit_FUN_00506f10(local_24c);
  }
  uVar11 = 0xffffffff;
  cVar10 = -1;
  iVar8 = 0;
  iVar15 = 0;
  piVar12 = vertex_indices;
  if (0 < vertex_count) {
    do {
      uVar4 = g_RenderVertexBuffer[*piVar12].projected_vertex.screen_x;
      if ((uVar4 & 0x80000000) != 0) {
        iVar15 = iVar15 + 1;
      }
      iVar8 = iVar8 + 1;
      uVar11 = uVar11 & uVar4;
      cVar10 = (char)uVar11;
      piVar12 = piVar12 + 1;
    } while (iVar8 < vertex_count);
  }
  if ((iVar15 == vertex_count) && (cVar10 != '\0')) {
    g_ClippedVertexCount = 0;
  }
  else {
    if (iVar15 == 0) {
      if ((g_UseExternalRenderer == 0) || (g_TexturesDisabled != 0)) {
        g_ClippedVertexCount = vertex_count;
        local_18 = 0;
        if (0 < vertex_count) {
          pSVar13 = g_ClippedVertexBuffer;
          do {
            pSVar17 = g_RenderVertexBuffer + *vertex_indices;
            iVar8 = 0x30;
            pSVar19 = pSVar13;
            while (7 < iVar8) {
              lVar1._0_4_ = (pSVar17->projected_vertex).transformed_x;
              lVar1._4_4_ = (pSVar17->projected_vertex).transformed_y;
              pSVar17 = (SRenderVertex *)&(pSVar17->projected_vertex).transformed_z;
              (pSVar19->projected_vertex).transformed_x = (int)(longlong)ROUND((float10)lVar1);
              (pSVar19->projected_vertex).transformed_y =
                   (int)((ulonglong)(longlong)ROUND((float10)lVar1) >> 0x20);
              pSVar19 = (SRenderVertex *)&(pSVar19->projected_vertex).transformed_z;
              iVar8 = iVar8 + -8;
            }
            if (iVar8 != 0 && -9 < iVar8 + -8) {
              (pSVar19->projected_vertex).transformed_x = (pSVar17->projected_vertex).transformed_x;
              if (4 < iVar8) {
                *(uint *)((int)pSVar19 + (uint)bVar22 * -8 + 4) =
                     *(uint *)((int)pSVar17 + (uint)bVar22 * -8 + 4);
              }
            }
            vertex_indices = vertex_indices + 1;
            local_18 = local_18 + 1;
            pSVar13 = pSVar13 + 1;
          } while (local_18 < vertex_count);
        }
        return 0;
      }
      iVar8 = 0;
      if (0 < vertex_count) {
        do {
          iVar15 = *vertex_indices;
          iVar8 = iVar8 + 1;
          vertex_indices = vertex_indices + 1;
          *(SRenderVertex **)(iVar8 * 4 + 0x825424) = g_RenderVertexBuffer + iVar15;
        } while (iVar8 < vertex_count);
      }
      if (g_CullingMode != 0) {
        if (vertex_count < 4) {
          iVar8 = engine_prim_c_calculateTriangleWindingOrder_FUN_00552150
                            (g_ClipperCullingPointers[0],g_ClipperCullingPointers[1],
                             g_ClipperCullingPointers[2]);
          bVar21 = iVar8 == 0;
        }
        else {
          local_28 = vertex_count + -2;
          iVar15 = 0;
          iVar8 = local_28 * 4;
          iVar16 = 0;
          if (0 < iVar8) {
            do {
              iVar9 = engine_prim_c_calculateTriangleWindingOrder_FUN_00552150
                                (g_ClipperCullingPointers[0],
                                 *(SRenderVertex **)((int)g_ClipperCullingPointers + iVar15 + 4),
                                 *(SRenderVertex **)((int)g_ClipperCullingPointers + iVar15 + 8));
              if (iVar9 == 0) {
                iVar16 = iVar16 + 1;
              }
              iVar15 = iVar15 + 4;
            } while (iVar15 < iVar8);
          }
          bVar21 = iVar16 == local_28;
        }
        if (bVar21) {
          return 1;
        }
      }
      g_RenderedTriangleCount = g_RenderedTriangleCount + vertex_count + -2;
      wincore_windll_cpp_drawPolygon2_FUN_005b7610
                (g_ClipperCullingPointers,vertex_count,g_RenderStateFlags);
      return 1;
    }
    iVar8 = 0;
    if (0 < vertex_count) {
      do {
        iVar15 = *vertex_indices;
        iVar8 = iVar8 + 1;
        vertex_indices = vertex_indices + 1;
        auStack_150[iVar8] = g_RenderVertexBuffer + iVar15;
      } while (iVar8 < vertex_count);
    }
    g_ClippedVertexCount = vertex_count;
    iVar8 = 0;
    local_48 = vertex_count;
    g_ClipperTempCount = 0;
    local_4c = (int)local_cc;
    local_44 = 0;
    if (0 < vertex_count) {
      puVar14 = auStack_150;
      pSVar13 = (SRenderVertex *)auStack_150[vertex_count];
      do {
        iVar15 = g_ClipperTempCount;
        puVar14 = puVar14 + 1;
        pSVar19 = (SRenderVertex *)*puVar14;
        bVar7 = (pSVar13->projected_vertex).transformed_z <=
                (pSVar13->projected_vertex).transformed_x;
        if ((pSVar19->projected_vertex).transformed_z <= (pSVar19->projected_vertex).transformed_x)
        {
          bVar7 = bVar7 | 2;
        }
        switch(bVar7) {
        case 0:
          uVar6 = iVar8 * 4;
          iVar8 = iVar8 + 1;
          *(SRenderVertex **)(local_4c + uVar6) = pSVar13;
          break;
        case 1:
          if (0xb < g_ClipperTempCount) {
            g_CurrentFilename = "..\\engine\\clipper.c";
            g_CurrentLineNumber = 0x5e;
            core_main_c_displayErrorAndQuit_FUN_00506f10("Ran out of clipped verts!");
          }
          pSVar17 = g_ClipperTempBuffer + g_ClipperTempCount;
          g_ClipperTempCount = g_ClipperTempCount + 1;
          uVar6 = iVar8 * 4;
          iVar8 = iVar8 + 1;
          *(SRenderVertex **)(local_4c + uVar6) = pSVar17;
          engine_clipper_c_interpolateVertexLeftClip_FUN_00435a00(pSVar19,pSVar13,pSVar17);
          break;
        case 2:
          iVar16 = iVar8 + 1;
          *(SRenderVertex **)(local_4c + iVar8 * 4) = pSVar13;
          if (0xb < iVar15) {
            g_CurrentFilename = "..\\engine\\clipper.c";
            g_CurrentLineNumber = 0x5e;
            core_main_c_displayErrorAndQuit_FUN_00506f10("Ran out of clipped verts!");
          }
          pSVar17 = g_ClipperTempBuffer + g_ClipperTempCount;
          g_ClipperTempCount = g_ClipperTempCount + 1;
          iVar8 = iVar8 + 2;
          *(SRenderVertex **)(local_4c + iVar16 * 4) = pSVar17;
          engine_clipper_c_interpolateVertexLeftClip_FUN_00435a00(pSVar13,pSVar19,pSVar17);
        }
        local_44 = local_44 + 1;
        pSVar13 = pSVar19;
      } while (local_44 < local_48);
    }
    g_ClippedVertexCount = iVar8;
    if (2 < iVar8) {
      iVar15 = 0;
      local_40 = iVar8;
      local_3c = 0;
      pSVar13 = (SRenderVertex *)(&uStack_d0)[iVar8];
      puVar14 = (uint *)local_cc;
      if (0 < iVar8) {
        do {
          local_24 = puVar14;
          pSVar19 = (SRenderVertex *)*local_24;
          bVar7 = (pSVar13->projected_vertex).transformed_x <=
                  -(pSVar13->projected_vertex).transformed_z;
          if ((pSVar19->projected_vertex).transformed_x <=
              -(pSVar19->projected_vertex).transformed_z) {
            bVar7 = bVar7 | 2;
          }
          switch(bVar7) {
          case 0:
            iVar15 = iVar15 + 1;
            auStack_150[iVar15] = pSVar13;
            break;
          case 1:
            if (0xb < g_ClipperTempCount) {
              g_CurrentFilename = "..\\engine\\clipper.c";
              g_CurrentLineNumber = 0x5e;
              core_main_c_displayErrorAndQuit_FUN_00506f10("Ran out of clipped verts!");
            }
            pSVar17 = g_ClipperTempBuffer + g_ClipperTempCount;
            iVar15 = iVar15 + 1;
            g_ClipperTempCount = g_ClipperTempCount + 1;
            auStack_150[iVar15] = pSVar17;
            engine_clipper_c_interpolateVertexRightClip_FUN_00435b00(pSVar19,pSVar13,pSVar17);
            break;
          case 2:
            auStack_150[iVar15 + 1] = pSVar13;
            if (0xb < g_ClipperTempCount) {
              g_CurrentFilename = "..\\engine\\clipper.c";
              g_CurrentLineNumber = 0x5e;
              core_main_c_displayErrorAndQuit_FUN_00506f10("Ran out of clipped verts!");
            }
            pSVar17 = g_ClipperTempBuffer + g_ClipperTempCount;
            iVar15 = iVar15 + 2;
            g_ClipperTempCount = g_ClipperTempCount + 1;
            auStack_150[iVar15] = pSVar17;
            engine_clipper_c_interpolateVertexRightClip_FUN_00435b00(pSVar13,pSVar19,pSVar17);
          }
          local_3c = local_3c + 1;
          local_24 = local_24 + 1;
          pSVar13 = pSVar19;
          puVar14 = local_24;
        } while (local_3c < local_40);
      }
      g_ClippedVertexCount = iVar15;
      if (2 < iVar15) {
        iVar8 = 0;
        local_38 = iVar15;
        local_34 = 0;
        pSVar13 = (SRenderVertex *)auStack_150[iVar15];
        puVar14 = auStack_150 + 1;
        if (0 < iVar15) {
          do {
            local_20 = puVar14;
            pSVar19 = (SRenderVertex *)*local_20;
            bVar7 = (pSVar13->projected_vertex).transformed_z <=
                    (pSVar13->projected_vertex).transformed_y;
            if ((pSVar19->projected_vertex).transformed_z <=
                (pSVar19->projected_vertex).transformed_y) {
              bVar7 = bVar7 | 2;
            }
            switch(bVar7) {
            case 0:
              iVar8 = iVar8 + 1;
              (&uStack_d0)[iVar8] = pSVar13;
              break;
            case 1:
              if (0xb < g_ClipperTempCount) {
                g_CurrentFilename = "..\\engine\\clipper.c";
                g_CurrentLineNumber = 0x5e;
                core_main_c_displayErrorAndQuit_FUN_00506f10("Ran out of clipped verts!");
              }
              pSVar17 = g_ClipperTempBuffer + g_ClipperTempCount;
              iVar8 = iVar8 + 1;
              g_ClipperTempCount = g_ClipperTempCount + 1;
              (&uStack_d0)[iVar8] = pSVar17;
              engine_clipper_c_interpolateVertexBottomClip_FUN_00435c00(pSVar19,pSVar13,pSVar17);
              break;
            case 2:
              (&uStack_d0)[iVar8 + 1] = pSVar13;
              if (0xb < g_ClipperTempCount) {
                g_CurrentFilename = "..\\engine\\clipper.c";
                g_CurrentLineNumber = 0x5e;
                core_main_c_displayErrorAndQuit_FUN_00506f10("Ran out of clipped verts!");
              }
              pSVar17 = g_ClipperTempBuffer + g_ClipperTempCount;
              iVar8 = iVar8 + 2;
              g_ClipperTempCount = g_ClipperTempCount + 1;
              (&uStack_d0)[iVar8] = pSVar17;
              engine_clipper_c_interpolateVertexBottomClip_FUN_00435c00(pSVar13,pSVar19,pSVar17);
            }
            local_34 = local_34 + 1;
            local_20 = local_20 + 1;
            pSVar13 = pSVar19;
            puVar14 = local_20;
          } while (local_34 < local_38);
        }
        g_ClippedVertexCount = iVar8;
        if (2 < iVar8) {
          iVar15 = 0;
          local_30 = iVar8;
          local_2c = 0;
          pSVar13 = (SRenderVertex *)(&uStack_d0)[iVar8];
          puVar14 = (uint *)local_cc;
          if (0 < iVar8) {
            do {
              local_1c = puVar14;
              pSVar19 = (SRenderVertex *)*local_1c;
              bVar7 = (pSVar13->projected_vertex).transformed_y <=
                      -(pSVar13->projected_vertex).transformed_z;
              if ((pSVar19->projected_vertex).transformed_y <=
                  -(pSVar19->projected_vertex).transformed_z) {
                bVar7 = bVar7 | 2;
              }
              switch(bVar7) {
              case 0:
                iVar15 = iVar15 + 1;
                auStack_150[iVar15] = pSVar13;
                break;
              case 1:
                if (0xb < g_ClipperTempCount) {
                  g_CurrentFilename = "..\\engine\\clipper.c";
                  g_CurrentLineNumber = 0x5e;
                  core_main_c_displayErrorAndQuit_FUN_00506f10("Ran out of clipped verts!");
                }
                pSVar17 = g_ClipperTempBuffer + g_ClipperTempCount;
                iVar15 = iVar15 + 1;
                g_ClipperTempCount = g_ClipperTempCount + 1;
                auStack_150[iVar15] = pSVar17;
                engine_clipper_c_interpolateVertexTopClip_FUN_00435d00(pSVar19,pSVar13,pSVar17);
                break;
              case 2:
                auStack_150[iVar15 + 1] = pSVar13;
                if (0xb < g_ClipperTempCount) {
                  g_CurrentFilename = "..\\engine\\clipper.c";
                  g_CurrentLineNumber = 0x5e;
                  core_main_c_displayErrorAndQuit_FUN_00506f10("Ran out of clipped verts!");
                }
                pSVar17 = g_ClipperTempBuffer + g_ClipperTempCount;
                iVar15 = iVar15 + 2;
                g_ClipperTempCount = g_ClipperTempCount + 1;
                auStack_150[iVar15] = pSVar17;
                engine_clipper_c_interpolateVertexTopClip_FUN_00435d00(pSVar13,pSVar19,pSVar17);
              }
              local_2c = local_2c + 1;
              local_1c = local_1c + 1;
              pSVar13 = pSVar19;
              puVar14 = local_1c;
            } while (local_2c < local_30);
          }
          g_ClippedVertexCount = iVar15;
          if (2 < iVar15) {
            iVar8 = 0;
            if (0 < iVar15) {
              pSVar13 = g_ClippedVertexBuffer;
              iVar15 = 0;
              do {
                plVar18 = *(longlong **)((int)auStack_150 + iVar15 + 4);
                iVar16 = 0x30;
                pSVar19 = pSVar13;
                while (7 < iVar16) {
                  lVar1 = *plVar18;
                  plVar18 = plVar18 + 1;
                  (pSVar19->projected_vertex).transformed_x = (int)(longlong)ROUND((float10)lVar1);
                  (pSVar19->projected_vertex).transformed_y =
                       (int)((ulonglong)(longlong)ROUND((float10)lVar1) >> 0x20);
                  pSVar19 = (SRenderVertex *)&(pSVar19->projected_vertex).transformed_z;
                  iVar16 = iVar16 + -8;
                }
                if (iVar16 != 0 && -9 < iVar16 + -8) {
                  (pSVar19->projected_vertex).transformed_x = (int)*plVar18;
                  if (4 < iVar16) {
                    *(uint *)((int)pSVar19 + (uint)bVar22 * -8 + 4) =
                         *(uint *)((int)plVar18 + (uint)bVar22 * -8 + 4);
                  }
                }
                iVar15 = iVar15 + 4;
                iVar8 = iVar8 + 1;
                pSVar13 = pSVar13 + 1;
              } while (iVar8 < g_ClippedVertexCount);
            }
            iVar8 = 0;
            if (g_NearPlaneDistance != 0) {
              if (0 < g_ClippedVertexCount) {
                iVar15 = 0;
                do {
                  iVar16 = *(int *)((int)&g_ClippedVertexBuffer[0].projected_vertex.transformed_z +
                                   iVar15);
                  if (iVar8 < iVar16) {
                    iVar8 = iVar16;
                  }
                  iVar15 = iVar15 + 0x30;
                } while (iVar15 < g_ClippedVertexCount * 0x30);
              }
              if (g_NearPlaneDistance <= iVar8) {
                DAT_008254a8 = g_ClippedVertexCount;
                local_14 = 0;
                plVar20 = (longlong *)((int)&DAT_008254ac + (uint)bVar22 * -8 + 4);
                plVar18 = (longlong *)((int)g_ClippedVertexBuffer + (uint)bVar22 * -8 + 4);
                DAT_008254ac._0_4_ = g_ClippedVertexBuffer[0].projected_vertex.transformed_x;
                iVar8 = g_ClippedVertexCount * 0x30 + -4;
                if (iVar8 != 0 && 3 < g_ClippedVertexCount * 0x30) {
                  while (7 < iVar8) {
                    lVar1 = *plVar18;
                    plVar18 = plVar18 + 1;
                    *plVar20 = (longlong)ROUND((float10)lVar1);
                    plVar20 = plVar20 + 1;
                    iVar8 = iVar8 + -8;
                  }
                  if (iVar8 != 0 && -9 < iVar8 + -8) {
                    *(int *)plVar20 = (int)*plVar18;
                    if (4 < iVar8) {
                      *(uint *)((int)plVar20 + (uint)bVar22 * -8 + 4) =
                           *(uint *)((int)plVar18 + (uint)bVar22 * -8 + 4);
                    }
                  }
                }
                g_ClippedVertexCount = 0;
                if (0 < (int)DAT_008254a8) {
                  pSVar13 = (SRenderVertex *)&DAT_008254ac;
                  do {
                    uVar11 = local_14 + 1;
                    if (uVar11 == DAT_008254a8) {
                      uVar11 = uVar11 ^ DAT_008254a8;
                    }
                    bVar7 = g_NearPlaneDistance <= (pSVar13->projected_vertex).transformed_z;
                    if (g_NearPlaneDistance <= *(int *)(&DAT_008254b4 + uVar11 * 0x30)) {
                      bVar7 = bVar7 | 2;
                    }
                    switch(bVar7) {
                    case 0:
                      pSVar17 = g_ClippedVertexBuffer + g_ClippedVertexCount;
                      iVar8 = 0x30;
                      pSVar19 = pSVar13;
                      while (7 < iVar8) {
                        lVar2._0_4_ = (pSVar19->projected_vertex).transformed_x;
                        lVar2._4_4_ = (pSVar19->projected_vertex).transformed_y;
                        pSVar19 = (SRenderVertex *)&(pSVar19->projected_vertex).transformed_z;
                        (pSVar17->projected_vertex).transformed_x =
                             (int)(longlong)ROUND((float10)lVar2);
                        (pSVar17->projected_vertex).transformed_y =
                             (int)((ulonglong)(longlong)ROUND((float10)lVar2) >> 0x20);
                        pSVar17 = (SRenderVertex *)&(pSVar17->projected_vertex).transformed_z;
                        iVar8 = iVar8 + -8;
                      }
                      if (iVar8 != 0 && -9 < iVar8 + -8) {
                        (pSVar17->projected_vertex).transformed_x =
                             (pSVar19->projected_vertex).transformed_x;
                        if (4 < iVar8) {
                          *(uint *)((int)pSVar17 + (uint)bVar22 * -8 + 4) =
                               *(uint *)((int)pSVar19 + (uint)bVar22 * -8 + 4);
                        }
                      }
                      g_ClippedVertexCount = g_ClippedVertexCount + 1;
                      break;
                    case 1:
                      engine_clipper_c_interpolateVertexNearClip_FUN_00435e00
                                ((SRenderVertex *)(&DAT_008254ac + uVar11 * 6),pSVar13,
                                 g_ClippedVertexBuffer + g_ClippedVertexCount);
                      g_ClippedVertexCount = g_ClippedVertexCount + 1;
                      break;
                    case 2:
                      pSVar17 = g_ClippedVertexBuffer + g_ClippedVertexCount;
                      iVar8 = 0x30;
                      pSVar19 = pSVar13;
                      while (7 < iVar8) {
                        lVar3._0_4_ = (pSVar19->projected_vertex).transformed_x;
                        lVar3._4_4_ = (pSVar19->projected_vertex).transformed_y;
                        pSVar19 = (SRenderVertex *)&(pSVar19->projected_vertex).transformed_z;
                        (pSVar17->projected_vertex).transformed_x =
                             (int)(longlong)ROUND((float10)lVar3);
                        (pSVar17->projected_vertex).transformed_y =
                             (int)((ulonglong)(longlong)ROUND((float10)lVar3) >> 0x20);
                        pSVar17 = (SRenderVertex *)&(pSVar17->projected_vertex).transformed_z;
                        iVar8 = iVar8 + -8;
                      }
                      if (iVar8 != 0 && -9 < iVar8 + -8) {
                        (pSVar17->projected_vertex).transformed_x =
                             (pSVar19->projected_vertex).transformed_x;
                        if (4 < iVar8) {
                          *(uint *)((int)pSVar17 + (uint)bVar22 * -8 + 4) =
                               *(uint *)((int)pSVar19 + (uint)bVar22 * -8 + 4);
                        }
                      }
                      g_ClippedVertexCount = g_ClippedVertexCount + 1;
                      engine_clipper_c_interpolateVertexNearClip_FUN_00435e00
                                (pSVar13,(SRenderVertex *)(&DAT_008254ac + uVar11 * 6),
                                 g_ClippedVertexBuffer + g_ClippedVertexCount);
                      g_ClippedVertexCount = g_ClippedVertexCount + 1;
                    }
                    local_14 = local_14 + 1;
                    pSVar13 = pSVar13 + 1;
                  } while (local_14 < (int)DAT_008254a8);
                }
              }
            }
            if (2 < g_ClippedVertexCount) {
              iVar8 = 0;
              if (0 < g_ClippedVertexCount) {
                pSVar13 = g_ClippedVertexBuffer;
                do {
                  iVar15 = (pSVar13->projected_vertex).transformed_z;
                  if (iVar15 == 0) {
                    (pSVar13->projected_vertex).transformed_z = 1;
                    (pSVar13->projected_vertex).transformed_x = 0;
                    iVar9 = 0;
LAB_00436c7e:
                    (pSVar13->projected_vertex).transformed_y = iVar9;
                  }
                  else {
                    iVar16 = (pSVar13->projected_vertex).transformed_x;
                    if (iVar15 < iVar16) {
                      (pSVar13->projected_vertex).transformed_x = iVar15;
                    }
                    else {
                      iVar9 = -iVar15;
                      if (-iVar16 == iVar15 || iVar9 < iVar16) {
                        iVar16 = (pSVar13->projected_vertex).transformed_z;
                        iVar5 = (pSVar13->projected_vertex).transformed_y;
                        if (iVar16 < iVar5) {
                          (pSVar13->projected_vertex).transformed_y = iVar16;
                        }
                        else if (-iVar5 != iVar15 && iVar5 <= iVar9) goto LAB_00436c7e;
                      }
                      else {
                        (pSVar13->projected_vertex).transformed_x = iVar9;
                      }
                    }
                  }
                  iVar8 = iVar8 + 1;
                  pSVar13 = pSVar13 + 1;
                } while (iVar8 < g_ClippedVertexCount);
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
