// Name: engine_clipper.c_clipPolygonToViewFrustum_FUN_004366e0
// Address: 004366e0
// Address Range: [[004366e0, 004371ac]]
// Convention: __cdecl
// Signature: int __cdecl engine_clipper_c_clipPolygonToViewFrustum_FUN_004366e0(int vertex_count,int *vertex_indices)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x0043711f) */
/* WARNING: Removing unreachable block (ram,0x004368cf) */
/* WARNING: Removing unreachable block (ram,0x00436c04) */
/* WARNING: Removing unreachable block (ram,0x0043708f) */
/* WARNING: Type propagation algorithm not settling */

int __cdecl engine_clipper_c_clipPolygonToViewFrustum_FUN_004366e0(int vertex_count,int *vertex_indices)

{
  longlong lVar4;
  uint *puVar5;
  byte bVar7;
  byte bVar6;
  int iVar8;
  int iVar7;
  int iVar9;
  uint uVar8;
  char cVar10;
  int *piVar12;
  int iVar10;
  SRenderVertex *pSVar13;
  SRenderVertex *pSVar11;
  int iVar12;
  int iVar13;
  uint *puVar14;
  int iVar15;
  int iVar16;
  SRenderVertex *pSVar17;
  longlong *plVar14;
  longlong *plVar18;
  SRenderVertex *pSVar15;
  SRenderVertex *pSVar19;
  longlong *plVar20;
  SRenderVertex *pSVar16;
  bool bVar21;
  byte bVar22;
  char local_24c [252];
  uint auStack_150 [32];
  uint uStack_d0;
  uint local_cc [32];
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
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  longlong lVar1;
  uint uVar11;
  
  if ((vertex_count < 0) || (0x10 < vertex_count)) {
    _sprintf(local_24c,"Too many poly verticies : %d",vertex_count);
    g_CurrentFilename = "..\\engine\\clipper.c";
    g_CurrentLineNumber = 630;
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
      piVar12 = piVar12 + 1;
      iVar8 = iVar8 + 1;
      uVar11 = uVar11 & uVar4;
      cVar10 = (char)uVar11;
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
            iVar7 = 0x30;
            pSVar11 = pSVar13;
            while (7 < iVar7) {
              lVar4._0_4_ = (pSVar17->projected_vertex).transformed_x;
              lVar4._4_4_ = (pSVar17->projected_vertex).transformed_y;
              pSVar17 = (SRenderVertex *)&(pSVar17->projected_vertex).transformed_z;
              (pSVar11->projected_vertex).transformed_x = (int)(longlong)ROUND((float10)lVar4);
              (pSVar11->projected_vertex).transformed_y =
                   (int)((ulonglong)(longlong)ROUND((float10)lVar4) >> 0x20);
              pSVar11 = (SRenderVertex *)&(pSVar11->projected_vertex).transformed_z;
              iVar7 = iVar7 + -8;
            }
            if (iVar7 != 0 && -9 < iVar7 + -8) {
              (pSVar11->projected_vertex).transformed_x = (pSVar17->projected_vertex).transformed_x;
              if (4 < iVar7) {
                (pSVar11->projected_vertex).transformed_y =
                     (pSVar17->projected_vertex).transformed_y;
              }
            }
            vertex_indices = vertex_indices + 1;
            local_18 = local_18 + 1;
            pSVar13 = pSVar13 + 1;
          } while (local_18 < vertex_count);
        }
        return 0;
      }
      iVar7 = 0;
      if (0 < vertex_count) {
        do {
          iVar10 = *vertex_indices;
          iVar7 = iVar7 + 1;
          vertex_indices = vertex_indices + 1;
          *(SRenderVertex **)(iVar7 * 4 + 0x825424) = g_RenderVertexBuffer + iVar10;
        } while (iVar7 < vertex_count);
      }
      if (g_CullingMode != 0) {
        if (vertex_count < 4) {
          iVar7 = engine_prim_c_calculateTriangleWindingOrder_FUN_00552150
                            (g_ClipperCullingPointers[0],g_ClipperCullingPointers[1],
                             g_ClipperCullingPointers[2]);
          bVar21 = iVar7 == 0;
        }
        else {
          local_28 = vertex_count + -2;
          iVar10 = 0;
          iVar7 = local_28 * 4;
          iVar16 = 0;
          if (0 < iVar7) {
            do {
              iVar9 = engine_prim_c_calculateTriangleWindingOrder_FUN_00552150
                                (g_ClipperCullingPointers[0],
                                 *(SRenderVertex **)((int)g_ClipperCullingPointers + iVar10 + 4),
                                 *(SRenderVertex **)((int)g_ClipperCullingPointers + iVar10 + 8));
              if (iVar9 == 0) {
                iVar16 = iVar16 + 1;
              }
              iVar10 = iVar10 + 4;
            } while (iVar10 < iVar7);
          }
          bVar21 = iVar16 == local_28;
        }
        if (bVar21) {
          return 1;
        }
      }
      g_RenderedTriangleCount = g_RenderedTriangleCount + vertex_count + -2;
      engine_special_cpp_drawPolygon2_FUN_005b7610
                (g_ClipperCullingPointers,vertex_count,g_RenderStateFlags.dword);
      return 1;
    }
    iVar7 = 0;
    if (0 < vertex_count) {
      do {
        iVar10 = *vertex_indices;
        iVar7 = iVar7 + 1;
        vertex_indices = vertex_indices + 1;
        auStack_150[iVar7] = g_RenderVertexBuffer + iVar10;
      } while (iVar7 < vertex_count);
    }
    g_ClippedVertexCount = vertex_count;
    iVar7 = 0;
    local_48 = vertex_count;
    g_ClipperTempCount = 0;
    local_4c = (int)local_cc;
    local_44 = 0;
    if (0 < vertex_count) {
      puVar14 = auStack_150;
      pSVar11 = (SRenderVertex *)auStack_150[vertex_count];
      do {
        iVar10 = g_ClipperTempCount;
        puVar14 = puVar14 + 1;
        pSVar15 = (SRenderVertex *)*puVar14;
        bVar7 = (pSVar11->projected_vertex).transformed_z <=
                (pSVar11->projected_vertex).transformed_x;
        if ((pSVar15->projected_vertex).transformed_z <= (pSVar15->projected_vertex).transformed_x)
        {
          bVar7 = bVar7 | 2;
        }
        switch(bVar7) {
        case 0:
          iVar10 = iVar7 * 4;
          iVar7 = iVar7 + 1;
          *(SRenderVertex **)(iVar10 + local_4c) = pSVar11;
          break;
        case 1:
          if (0xb < g_ClipperTempCount) {
            g_CurrentFilename = "..\\engine\\clipper.c";
            g_CurrentLineNumber = 94;
            core_main_c_displayErrorAndQuit_FUN_00506f10("Ran out of clipped verts!");
          }
          pSVar16 = g_ClipperTempBuffer + g_ClipperTempCount;
          g_ClipperTempCount = g_ClipperTempCount + 1;
          iVar10 = iVar7 * 4;
          iVar7 = iVar7 + 1;
          *(SRenderVertex **)(iVar10 + local_4c) = pSVar16;
          engine_clipper_c_interpolateVertexLeftClip_FUN_00435a00(pSVar15,pSVar11,pSVar16);
          break;
        case 2:
          iVar12 = iVar7 + 1;
          *(SRenderVertex **)(iVar7 * 4 + local_4c) = pSVar11;
          if (0xb < iVar10) {
            g_CurrentFilename = "..\\engine\\clipper.c";
            g_CurrentLineNumber = 94;
            core_main_c_displayErrorAndQuit_FUN_00506f10("Ran out of clipped verts!");
          }
          pSVar16 = g_ClipperTempBuffer + g_ClipperTempCount;
          g_ClipperTempCount = g_ClipperTempCount + 1;
          iVar7 = iVar7 + 2;
          *(SRenderVertex **)(iVar12 * 4 + local_4c) = pSVar16;
          engine_clipper_c_interpolateVertexLeftClip_FUN_00435a00(pSVar11,pSVar15,pSVar16);
        }
        local_44 = local_44 + 1;
        pSVar11 = pSVar15;
      } while (local_44 < local_48);
    }
    g_ClippedVertexCount = iVar7;
    if (2 < iVar7) {
      iVar10 = 0;
      local_40 = iVar7;
      local_3c = 0;
      pSVar11 = (SRenderVertex *)(&uStack_d0)[iVar7];
      puVar5 = local_cc;
      if (0 < iVar7) {
        do {
          local_24 = puVar5;
          pSVar15 = (SRenderVertex *)*local_24;
          bVar6 = (pSVar11->projected_vertex).transformed_x <=
                  -(pSVar11->projected_vertex).transformed_z;
          if ((pSVar15->projected_vertex).transformed_x <=
              -(pSVar15->projected_vertex).transformed_z) {
            bVar6 = bVar6 | 2;
          }
          switch(bVar6) {
          case 0:
            iVar10 = iVar10 + 1;
            auStack_150[iVar10] = pSVar11;
            break;
          case 1:
            if (0xb < g_ClipperTempCount) {
              g_CurrentFilename = "..\\engine\\clipper.c";
              g_CurrentLineNumber = 94;
              core_main_c_displayErrorAndQuit_FUN_00506f10("Ran out of clipped verts!");
            }
            pSVar16 = g_ClipperTempBuffer + g_ClipperTempCount;
            iVar10 = iVar10 + 1;
            g_ClipperTempCount = g_ClipperTempCount + 1;
            auStack_150[iVar10] = pSVar16;
            engine_clipper_c_interpolateVertexRightClip_FUN_00435b00(pSVar15,pSVar11,pSVar16);
            break;
          case 2:
            auStack_150[iVar10 + 1] = pSVar11;
            if (0xb < g_ClipperTempCount) {
              g_CurrentFilename = "..\\engine\\clipper.c";
              g_CurrentLineNumber = 94;
              core_main_c_displayErrorAndQuit_FUN_00506f10("Ran out of clipped verts!");
            }
            pSVar16 = g_ClipperTempBuffer + g_ClipperTempCount;
            iVar10 = iVar10 + 2;
            g_ClipperTempCount = g_ClipperTempCount + 1;
            auStack_150[iVar10] = pSVar16;
            engine_clipper_c_interpolateVertexRightClip_FUN_00435b00(pSVar11,pSVar15,pSVar16);
          }
          local_3c = local_3c + 1;
          local_24 = local_24 + 1;
          pSVar11 = pSVar15;
          puVar5 = local_24;
        } while (local_3c < local_40);
      }
      g_ClippedVertexCount = iVar10;
      if (2 < iVar10) {
        iVar7 = 0;
        local_38 = iVar10;
        local_34 = 0;
        pSVar11 = (SRenderVertex *)auStack_150[iVar10];
        puVar5 = auStack_150 + 1;
        if (0 < iVar10) {
          do {
            local_20 = puVar5;
            pSVar15 = (SRenderVertex *)*local_20;
            bVar6 = (pSVar11->projected_vertex).transformed_z <=
                    (pSVar11->projected_vertex).transformed_y;
            if ((pSVar15->projected_vertex).transformed_z <=
                (pSVar15->projected_vertex).transformed_y) {
              bVar6 = bVar6 | 2;
            }
            switch(bVar6) {
            case 0:
              iVar7 = iVar7 + 1;
              (&uStack_d0)[iVar7] = pSVar11;
              break;
            case 1:
              if (0xb < g_ClipperTempCount) {
                g_CurrentFilename = "..\\engine\\clipper.c";
                g_CurrentLineNumber = 94;
                core_main_c_displayErrorAndQuit_FUN_00506f10("Ran out of clipped verts!");
              }
              pSVar16 = g_ClipperTempBuffer + g_ClipperTempCount;
              iVar7 = iVar7 + 1;
              g_ClipperTempCount = g_ClipperTempCount + 1;
              (&uStack_d0)[iVar7] = pSVar16;
              engine_clipper_c_interpolateVertexBottomClip_FUN_00435c00(pSVar15,pSVar11,pSVar16);
              break;
            case 2:
              (&uStack_d0)[iVar7 + 1] = pSVar11;
              if (0xb < g_ClipperTempCount) {
                g_CurrentFilename = "..\\engine\\clipper.c";
                g_CurrentLineNumber = 94;
                core_main_c_displayErrorAndQuit_FUN_00506f10("Ran out of clipped verts!");
              }
              pSVar16 = g_ClipperTempBuffer + g_ClipperTempCount;
              iVar7 = iVar7 + 2;
              g_ClipperTempCount = g_ClipperTempCount + 1;
              (&uStack_d0)[iVar7] = pSVar16;
              engine_clipper_c_interpolateVertexBottomClip_FUN_00435c00(pSVar11,pSVar15,pSVar16);
            }
            local_34 = local_34 + 1;
            local_20 = local_20 + 1;
            pSVar11 = pSVar15;
            puVar5 = local_20;
          } while (local_34 < local_38);
        }
        g_ClippedVertexCount = iVar7;
        if (2 < iVar7) {
          iVar10 = 0;
          local_30 = iVar7;
          local_2c = 0;
          pSVar11 = (SRenderVertex *)(&uStack_d0)[iVar7];
          puVar5 = local_cc;
          if (0 < iVar7) {
            do {
              local_1c = puVar5;
              pSVar15 = (SRenderVertex *)*local_1c;
              bVar6 = (pSVar11->projected_vertex).transformed_y <=
                      -(pSVar11->projected_vertex).transformed_z;
              if ((pSVar15->projected_vertex).transformed_y <=
                  -(pSVar15->projected_vertex).transformed_z) {
                bVar6 = bVar6 | 2;
              }
              switch(bVar6) {
              case 0:
                iVar10 = iVar10 + 1;
                auStack_150[iVar10] = pSVar11;
                break;
              case 1:
                if (0xb < g_ClipperTempCount) {
                  g_CurrentFilename = "..\\engine\\clipper.c";
                  g_CurrentLineNumber = 94;
                  core_main_c_displayErrorAndQuit_FUN_00506f10("Ran out of clipped verts!");
                }
                pSVar16 = g_ClipperTempBuffer + g_ClipperTempCount;
                iVar10 = iVar10 + 1;
                g_ClipperTempCount = g_ClipperTempCount + 1;
                auStack_150[iVar10] = pSVar16;
                engine_clipper_c_interpolateVertexTopClip_FUN_00435d00(pSVar15,pSVar11,pSVar16);
                break;
              case 2:
                auStack_150[iVar10 + 1] = pSVar11;
                if (0xb < g_ClipperTempCount) {
                  g_CurrentFilename = "..\\engine\\clipper.c";
                  g_CurrentLineNumber = 94;
                  core_main_c_displayErrorAndQuit_FUN_00506f10("Ran out of clipped verts!");
                }
                pSVar16 = g_ClipperTempBuffer + g_ClipperTempCount;
                iVar10 = iVar10 + 2;
                g_ClipperTempCount = g_ClipperTempCount + 1;
                auStack_150[iVar10] = pSVar16;
                engine_clipper_c_interpolateVertexTopClip_FUN_00435d00(pSVar11,pSVar15,pSVar16);
              }
              local_2c = local_2c + 1;
              local_1c = local_1c + 1;
              pSVar11 = pSVar15;
              puVar5 = local_1c;
            } while (local_2c < local_30);
          }
          g_ClippedVertexCount = iVar10;
          if (2 < iVar10) {
            iVar7 = 0;
            if (0 < iVar10) {
              pSVar11 = g_ClippedVertexBuffer;
              iVar10 = 0;
              do {
                plVar14 = *(longlong **)((int)auStack_150 + iVar10 + 4);
                iVar12 = 0x30;
                pSVar15 = pSVar11;
                while (7 < iVar12) {
                  lVar1 = *plVar14;
                  plVar14 = plVar14 + 1;
                  (pSVar15->projected_vertex).transformed_x = (int)(longlong)ROUND((float10)lVar1);
                  (pSVar15->projected_vertex).transformed_y =
                       (int)((ulonglong)(longlong)ROUND((float10)lVar1) >> 0x20);
                  pSVar15 = (SRenderVertex *)&(pSVar15->projected_vertex).transformed_z;
                  iVar12 = iVar12 + -8;
                }
                if (iVar12 != 0 && -9 < iVar12 + -8) {
                  (pSVar15->projected_vertex).transformed_x = (int)*plVar14;
                  if (4 < iVar12) {
                    (pSVar15->projected_vertex).transformed_y = *(int *)((int)plVar14 + 4);
                  }
                }
                iVar10 = iVar10 + 4;
                iVar7 = iVar7 + 1;
                pSVar11 = pSVar11 + 1;
              } while (iVar7 < g_ClippedVertexCount);
            }
            iVar7 = 0;
            if (g_NearPlaneDistance != 0) {
              if (0 < g_ClippedVertexCount) {
                iVar10 = 0;
                do {
                  iVar12 = *(int *)((int)&g_ClippedVertexBuffer[0].projected_vertex.transformed_z +
                                   iVar10);
                  if (iVar7 < iVar12) {
                    iVar7 = iVar12;
                  }
                  iVar10 = iVar10 + 0x30;
                } while (iVar10 < g_ClippedVertexCount * 0x30);
              }
              if (g_NearPlaneDistance <= iVar7) {
                g_SecondaryClipVertexCount = g_ClippedVertexCount;
                local_14 = 0;
                g_SecondaryClipVertexBuffer[0].projected_vertex.transformed_x =
                     g_ClippedVertexBuffer[0].projected_vertex.transformed_x;
                plVar18 = (longlong *)&g_ClippedVertexBuffer[0].projected_vertex.transformed_y;
                plVar20 = (longlong *)&g_SecondaryClipVertexBuffer[0].projected_vertex.transformed_y
                ;
                iVar7 = g_ClippedVertexCount * 0x30 + -4;
                if (iVar7 != 0 && 3 < g_ClippedVertexCount * 0x30) {
                  while (7 < iVar7) {
                    lVar4 = *plVar18;
                    plVar18 = plVar18 + 1;
                    *plVar20 = (longlong)ROUND((float10)lVar4);
                    plVar20 = plVar20 + 1;
                    iVar7 = iVar7 + -8;
                  }
                  if (iVar7 != 0 && -9 < iVar7 + -8) {
                    *(int *)plVar20 = (int)*plVar18;
                    if (4 < iVar7) {
                      *(uint *)((int)plVar20 + 4) = *(uint *)((int)plVar18 + 4);
                    }
                  }
                }
                g_ClippedVertexCount = 0;
                if (0 < g_SecondaryClipVertexCount) {
                  pSVar11 = g_SecondaryClipVertexBuffer;
                  do {
                    uVar8 = local_14 + 1;
                    if (uVar8 == g_SecondaryClipVertexCount) {
                      uVar8 = uVar8 ^ g_SecondaryClipVertexCount;
                    }
                    bVar6 = g_NearPlaneDistance <= (pSVar11->projected_vertex).transformed_z;
                    if (g_NearPlaneDistance <=
                        g_SecondaryClipVertexBuffer[uVar8].projected_vertex.transformed_z) {
                      bVar6 = bVar6 | 2;
                    }
                    switch(bVar6) {
                    case 0:
                      pSVar16 = g_ClippedVertexBuffer + g_ClippedVertexCount;
                      iVar7 = 0x30;
                      pSVar15 = pSVar11;
                      while (7 < iVar7) {
                        lVar2._0_4_ = (pSVar15->projected_vertex).transformed_x;
                        lVar2._4_4_ = (pSVar15->projected_vertex).transformed_y;
                        pSVar15 = (SRenderVertex *)&(pSVar15->projected_vertex).transformed_z;
                        (pSVar16->projected_vertex).transformed_x =
                             (int)(longlong)ROUND((float10)lVar2);
                        (pSVar16->projected_vertex).transformed_y =
                             (int)((ulonglong)(longlong)ROUND((float10)lVar2) >> 0x20);
                        pSVar16 = (SRenderVertex *)&(pSVar16->projected_vertex).transformed_z;
                        iVar7 = iVar7 + -8;
                      }
                      if (iVar7 != 0 && -9 < iVar7 + -8) {
                        (pSVar16->projected_vertex).transformed_x =
                             (pSVar15->projected_vertex).transformed_x;
                        if (4 < iVar7) {
                          (pSVar16->projected_vertex).transformed_y =
                               (pSVar15->projected_vertex).transformed_y;
                        }
                      }
                      g_ClippedVertexCount = g_ClippedVertexCount + 1;
                      break;
                    case 1:
                      engine_clipper_c_interpolateVertexNearClip_FUN_00435e00
                                (g_SecondaryClipVertexBuffer + uVar8,pSVar11,
                                 g_ClippedVertexBuffer + g_ClippedVertexCount);
                      g_ClippedVertexCount = g_ClippedVertexCount + 1;
                      break;
                    case 2:
                      pSVar15 = g_ClippedVertexBuffer + g_ClippedVertexCount;
                      iVar7 = 0x30;
                      pSVar19 = pSVar11;
                      while (7 < iVar7) {
                        lVar3._0_4_ = (pSVar19->projected_vertex).transformed_x;
                        lVar3._4_4_ = (pSVar19->projected_vertex).transformed_y;
                        pSVar19 = (SRenderVertex *)&(pSVar19->projected_vertex).transformed_z;
                        (pSVar15->projected_vertex).transformed_x =
                             (int)(longlong)ROUND((float10)lVar3);
                        (pSVar15->projected_vertex).transformed_y =
                             (int)((ulonglong)(longlong)ROUND((float10)lVar3) >> 0x20);
                        pSVar15 = (SRenderVertex *)&(pSVar15->projected_vertex).transformed_z;
                        iVar7 = iVar7 + -8;
                      }
                      if (iVar7 != 0 && -9 < iVar7 + -8) {
                        (pSVar15->projected_vertex).transformed_x =
                             (pSVar19->projected_vertex).transformed_x;
                        if (4 < iVar7) {
                          (pSVar15->projected_vertex).transformed_y =
                               (pSVar19->projected_vertex).transformed_y;
                        }
                      }
                      g_ClippedVertexCount = g_ClippedVertexCount + 1;
                      engine_clipper_c_interpolateVertexNearClip_FUN_00435e00
                                (pSVar11,g_SecondaryClipVertexBuffer + uVar8,
                                 g_ClippedVertexBuffer + g_ClippedVertexCount);
                      g_ClippedVertexCount = g_ClippedVertexCount + 1;
                    }
                    local_14 = local_14 + 1;
                    pSVar11 = pSVar11 + 1;
                  } while (local_14 < g_SecondaryClipVertexCount);
                }
              }
            }
            if (2 < g_ClippedVertexCount) {
              iVar7 = 0;
              if (0 < g_ClippedVertexCount) {
                pSVar11 = g_ClippedVertexBuffer;
                do {
                  iVar10 = (pSVar11->projected_vertex).transformed_z;
                  if (iVar10 == 0) {
                    (pSVar11->projected_vertex).transformed_z = 1;
                    (pSVar11->projected_vertex).transformed_x = 0;
                    iVar13 = 0;
LAB_00436c7e:
                    (pSVar11->projected_vertex).transformed_y = iVar13;
                  }
                  else {
                    iVar12 = (pSVar11->projected_vertex).transformed_x;
                    if (iVar10 < iVar12) {
                      (pSVar11->projected_vertex).transformed_x = iVar10;
                    }
                    else {
                      iVar13 = -iVar10;
                      if (-iVar12 == iVar10 || iVar13 < iVar12) {
                        iVar12 = (pSVar11->projected_vertex).transformed_z;
                        iVar5 = (pSVar11->projected_vertex).transformed_y;
                        if (iVar12 < iVar5) {
                          (pSVar11->projected_vertex).transformed_y = iVar12;
                        }
                        else if (-iVar5 != iVar10 && iVar5 <= iVar13) goto LAB_00436c7e;
                      }
                      else {
                        (pSVar11->projected_vertex).transformed_x = iVar13;
                      }
                    }
                  }
                  iVar7 = iVar7 + 1;
                  pSVar11 = pSVar11 + 1;
                } while (iVar7 < g_ClippedVertexCount);
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
