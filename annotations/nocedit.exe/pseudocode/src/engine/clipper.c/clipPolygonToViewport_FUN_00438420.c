// Name: engine_clipper.c_clipPolygonToViewport_FUN_00438420
// Address: 00438420
// Address Range: [[00438420, 00438b7f]]
// Convention: __cdecl
// Signature: void engine_clipper.c_clipPolygonToViewport_FUN_00438420(int vertex_count, int * vertex_indices)

#include "nocturne.h"

void __cdecl
engine_clipper_c_clipPolygonToViewport_FUN_00438420(int vertex_count,int *vertex_indices)

{
  uint uVar1;
  int iVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  char cVar6;
  SRenderVertex *pSVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int *piVar12;
  SRenderVertex *pSVar13;
  SRenderVertex *pSVar14;
  SRenderVertex *pSVar15;
  byte bVar16;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  uint uVar7;
  
  bVar16 = 0;
  if (g_VertexProcessingEnabled == 0) {
    engine_prim_c_renderIndexedPolygonAdvanced_FUN_00553b10(vertex_indices,vertex_count);
  }
  else {
    uVar7 = 0xffffffff;
    cVar6 = -1;
    uVar11 = 0;
    iVar4 = 0;
    piVar12 = vertex_indices;
    if (0 < vertex_count) {
      do {
        uVar1 = g_RenderVertexBuffer[*piVar12].projected_vertex.screen_x;
        if ((uVar1 & 0x80000000) != 0) {
          uVar11 = uVar11 + 1;
        }
        piVar12 = piVar12 + 1;
        iVar4 = iVar4 + 1;
        uVar7 = uVar7 & uVar1;
        cVar6 = (char)uVar7;
      } while (iVar4 < vertex_count);
    }
    if ((uVar11 == vertex_count) && (cVar6 != '\0')) {
      g_ClippedVertexCount = uVar11 ^ vertex_count;
    }
    else {
      if (uVar11 == 0) {
        if (g_UseExternalRenderer != 0) {
          iVar4 = 0;
          piVar12 = vertex_indices;
          if (0 < vertex_count) {
            do {
              iVar4 = iVar4 + 1;
              *(SRenderVertex **)(iVar4 * 4 + 0x825424) = g_RenderVertexBuffer + *piVar12;
              piVar12 = piVar12 + 1;
            } while (iVar4 < vertex_count);
          }
          if (g_CullingMode != 0) {
            if (vertex_count < 4) {
              iVar4 = engine_prim_c_calculateTriangleWindingOrder_FUN_00552150
                                (g_ClipperCullingPointers[0],g_ClipperCullingPointers[1],
                                 g_ClipperCullingPointers[2]);
              if (iVar4 == 0) {
                return;
              }
            }
            else {
              iVar10 = 0;
              iVar4 = (vertex_count + -2) * 4;
              piVar12 = (int *)0x0;
              if (0 < iVar4) {
                do {
                  iVar5 = engine_prim_c_calculateTriangleWindingOrder_FUN_00552150
                                    (g_ClipperCullingPointers[0],
                                     *(SRenderVertex **)((int)g_ClipperCullingPointers + iVar10 + 4)
                                     ,*(SRenderVertex **)
                                       ((int)g_ClipperCullingPointers + iVar10 + 8));
                  if (iVar5 == 0) {
                    piVar12 = (int *)((int)piVar12 + 1);
                  }
                  iVar10 = iVar10 + 4;
                } while (iVar10 < iVar4);
              }
              if (piVar12 == vertex_indices) {
                return;
              }
            }
          }
          g_RenderedTriangleCount = g_RenderedTriangleCount + vertex_count + -2;
          wincore_windll_cpp_drawPolygon2_FUN_005b7610
                    (g_ClipperCullingPointers,vertex_count,g_RenderStateFlags);
          return;
        }
        g_ClippedVertexCount = vertex_count;
        if (0 < vertex_count) {
          pSVar8 = g_ClippedVertexBuffer;
          local_28 = 0;
          do {
            pSVar14 = g_RenderVertexBuffer + *vertex_indices;
            pSVar13 = pSVar8;
            for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
              (pSVar13->projected_vertex).transformed_x = (pSVar14->projected_vertex).transformed_x;
              pSVar14 = (SRenderVertex *)&(pSVar14->projected_vertex).transformed_y;
              pSVar13 = (SRenderVertex *)&(pSVar13->projected_vertex).transformed_y;
            }
            for (iVar4 = 0; iVar4 != 0; iVar4 = iVar4 + -1) {
              *(char *)&(pSVar13->projected_vertex).transformed_x =
                   (char)(pSVar14->projected_vertex).transformed_x;
              pSVar14 = (SRenderVertex *)((int)&(pSVar14->projected_vertex).transformed_x + 1);
              pSVar13 = (SRenderVertex *)((int)&(pSVar13->projected_vertex).transformed_x + 1);
            }
            vertex_indices = vertex_indices + 1;
            local_28 = local_28 + 1;
            pSVar8 = pSVar8 + 1;
          } while (local_28 < vertex_count);
        }
      }
      else {
        g_InputVertexCount = vertex_count;
        g_OutputVertexCount = 0;
        g_TempVertexCount = 0;
        g_IntermediateVertexCount = 0;
        g_ClippedVertexCount = 0;
        local_24 = 0;
        if (0 < vertex_count) {
          pSVar8 = g_ClipperInputBuffer;
          do {
            pSVar14 = g_RenderVertexBuffer + *vertex_indices;
            pSVar13 = pSVar8;
            for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
              (pSVar13->projected_vertex).transformed_x = (pSVar14->projected_vertex).transformed_x;
              pSVar14 = (SRenderVertex *)&(pSVar14->projected_vertex).transformed_y;
              pSVar13 = (SRenderVertex *)&(pSVar13->projected_vertex).transformed_y;
            }
            for (iVar4 = 0; iVar4 != 0; iVar4 = iVar4 + -1) {
              *(char *)&(pSVar13->projected_vertex).transformed_x =
                   (char)(pSVar14->projected_vertex).transformed_x;
              pSVar14 = (SRenderVertex *)((int)&(pSVar14->projected_vertex).transformed_x + 1);
              pSVar13 = (SRenderVertex *)((int)&(pSVar13->projected_vertex).transformed_x + 1);
            }
            vertex_indices = vertex_indices + 1;
            local_24 = local_24 + 1;
            pSVar8 = pSVar8 + 1;
          } while (local_24 < vertex_count);
        }
        local_20 = 0;
        if (0 < g_InputVertexCount) {
          pSVar8 = g_ClipperInputBuffer;
          do {
            uVar7 = local_20 + 1;
            if (uVar7 == g_InputVertexCount) {
              uVar7 = uVar7 ^ g_InputVertexCount;
            }
            pSVar14 = g_ClipperInputBuffer + uVar7;
            bVar3 = (pSVar8->projected_vertex).transformed_z <=
                    (pSVar8->projected_vertex).transformed_x;
            if (g_ClipperInputBuffer[uVar7].projected_vertex.transformed_z <=
                (pSVar14->projected_vertex).transformed_x) {
              bVar3 = bVar3 | 2;
            }
            switch(bVar3) {
            case 0:
              pSVar14 = pSVar8;
              pSVar13 = g_ClipperOutputBuffer + g_OutputVertexCount;
              for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
                (pSVar13->projected_vertex).transformed_x =
                     (pSVar14->projected_vertex).transformed_x;
                pSVar14 = (SRenderVertex *)((int)pSVar14 + (uint)bVar16 * -8 + 4);
                pSVar13 = (SRenderVertex *)((int)pSVar13 + ((uint)bVar16 * -2 + 1) * 4);
              }
              for (iVar4 = 0; iVar4 != 0; iVar4 = iVar4 + -1) {
                *(char *)&(pSVar13->projected_vertex).transformed_x =
                     (char)(pSVar14->projected_vertex).transformed_x;
                pSVar14 = (SRenderVertex *)((int)pSVar14 + (uint)bVar16 * -2 + 1);
                pSVar13 = (SRenderVertex *)((int)pSVar13 + (uint)bVar16 * -2 + 1);
              }
              g_OutputVertexCount = g_OutputVertexCount + 1;
              break;
            case 1:
              engine_clipper_c_interpolateVertexLeftClipAdvanced_FUN_00437230
                        (pSVar14,pSVar8,g_ClipperOutputBuffer + g_OutputVertexCount);
              g_OutputVertexCount = g_OutputVertexCount + 1;
              break;
            case 2:
              pSVar13 = pSVar8;
              pSVar15 = g_ClipperOutputBuffer + g_OutputVertexCount;
              for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
                (pSVar15->projected_vertex).transformed_x =
                     (pSVar13->projected_vertex).transformed_x;
                pSVar13 = (SRenderVertex *)((int)pSVar13 + (uint)bVar16 * -8 + 4);
                pSVar15 = (SRenderVertex *)((int)pSVar15 + ((uint)bVar16 * -2 + 1) * 4);
              }
              for (iVar4 = 0; iVar4 != 0; iVar4 = iVar4 + -1) {
                *(char *)&(pSVar15->projected_vertex).transformed_x =
                     (char)(pSVar13->projected_vertex).transformed_x;
                pSVar13 = (SRenderVertex *)((int)pSVar13 + (uint)bVar16 * -2 + 1);
                pSVar15 = (SRenderVertex *)((int)pSVar15 + (uint)bVar16 * -2 + 1);
              }
              g_OutputVertexCount = g_OutputVertexCount + 1;
              engine_clipper_c_interpolateVertexLeftClipAdvanced_FUN_00437230
                        (pSVar8,pSVar14,g_ClipperOutputBuffer + g_OutputVertexCount);
              g_OutputVertexCount = g_OutputVertexCount + 1;
            }
            local_20 = local_20 + 1;
            pSVar8 = pSVar8 + 1;
          } while (local_20 < g_InputVertexCount);
        }
        if (2 < g_OutputVertexCount) {
          local_18 = 0;
          if (0 < g_OutputVertexCount) {
            pSVar8 = g_ClipperOutputBuffer;
            do {
              uVar7 = local_18 + 1;
              if (uVar7 == g_OutputVertexCount) {
                uVar7 = uVar7 ^ g_OutputVertexCount;
              }
              pSVar14 = g_ClipperOutputBuffer + uVar7;
              bVar3 = (pSVar8->projected_vertex).transformed_x <=
                      -(pSVar8->projected_vertex).transformed_z;
              if ((pSVar14->projected_vertex).transformed_x <=
                  -g_ClipperOutputBuffer[uVar7].projected_vertex.transformed_z) {
                bVar3 = bVar3 | 2;
              }
              switch(bVar3) {
              case 0:
                pSVar14 = pSVar8;
                pSVar13 = g_ClipperWorkingBuffer + g_TempVertexCount;
                for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
                  (pSVar13->projected_vertex).transformed_x =
                       (pSVar14->projected_vertex).transformed_x;
                  pSVar14 = (SRenderVertex *)((int)pSVar14 + (uint)bVar16 * -8 + 4);
                  pSVar13 = (SRenderVertex *)((int)pSVar13 + ((uint)bVar16 * -2 + 1) * 4);
                }
                for (iVar4 = 0; iVar4 != 0; iVar4 = iVar4 + -1) {
                  *(char *)&(pSVar13->projected_vertex).transformed_x =
                       (char)(pSVar14->projected_vertex).transformed_x;
                  pSVar14 = (SRenderVertex *)((int)pSVar14 + (uint)bVar16 * -2 + 1);
                  pSVar13 = (SRenderVertex *)((int)pSVar13 + (uint)bVar16 * -2 + 1);
                }
                g_TempVertexCount = g_TempVertexCount + 1;
                break;
              case 1:
                engine_clipper_c_interpolateVertexRightClipAdvanced_FUN_00437360
                          (pSVar14,pSVar8,g_ClipperWorkingBuffer + g_TempVertexCount);
                g_TempVertexCount = g_TempVertexCount + 1;
                break;
              case 2:
                pSVar13 = pSVar8;
                pSVar15 = g_ClipperWorkingBuffer + g_TempVertexCount;
                for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
                  (pSVar15->projected_vertex).transformed_x =
                       (pSVar13->projected_vertex).transformed_x;
                  pSVar13 = (SRenderVertex *)((int)pSVar13 + (uint)bVar16 * -8 + 4);
                  pSVar15 = (SRenderVertex *)((int)pSVar15 + ((uint)bVar16 * -2 + 1) * 4);
                }
                for (iVar4 = 0; iVar4 != 0; iVar4 = iVar4 + -1) {
                  *(char *)&(pSVar15->projected_vertex).transformed_x =
                       (char)(pSVar13->projected_vertex).transformed_x;
                  pSVar13 = (SRenderVertex *)((int)pSVar13 + (uint)bVar16 * -2 + 1);
                  pSVar15 = (SRenderVertex *)((int)pSVar15 + (uint)bVar16 * -2 + 1);
                }
                g_TempVertexCount = g_TempVertexCount + 1;
                engine_clipper_c_interpolateVertexRightClipAdvanced_FUN_00437360
                          (pSVar8,pSVar14,g_ClipperWorkingBuffer + g_TempVertexCount);
                g_TempVertexCount = g_TempVertexCount + 1;
              }
              local_18 = local_18 + 1;
              pSVar8 = pSVar8 + 1;
            } while (local_18 < g_OutputVertexCount);
          }
          if (2 < g_TempVertexCount) {
            local_14 = 0;
            if (0 < g_TempVertexCount) {
              pSVar8 = g_ClipperWorkingBuffer;
              do {
                uVar7 = local_14 + 1;
                if (uVar7 == g_TempVertexCount) {
                  uVar7 = uVar7 ^ g_TempVertexCount;
                }
                bVar3 = (pSVar8->projected_vertex).transformed_z <=
                        (pSVar8->projected_vertex).transformed_y;
                if (g_ClipperWorkingBuffer[uVar7].projected_vertex.transformed_z <=
                    g_ClipperWorkingBuffer[uVar7].projected_vertex.transformed_y) {
                  bVar3 = bVar3 | 2;
                }
                switch(bVar3) {
                case 0:
                  pSVar14 = pSVar8;
                  pSVar13 = g_ClipperIntermediateBuffer + g_IntermediateVertexCount;
                  for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
                    (pSVar13->projected_vertex).transformed_x =
                         (pSVar14->projected_vertex).transformed_x;
                    pSVar14 = (SRenderVertex *)((int)pSVar14 + (uint)bVar16 * -8 + 4);
                    pSVar13 = (SRenderVertex *)((int)pSVar13 + ((uint)bVar16 * -2 + 1) * 4);
                  }
                  for (iVar4 = 0; iVar4 != 0; iVar4 = iVar4 + -1) {
                    *(char *)&(pSVar13->projected_vertex).transformed_x =
                         (char)(pSVar14->projected_vertex).transformed_x;
                    pSVar14 = (SRenderVertex *)((int)pSVar14 + (uint)bVar16 * -2 + 1);
                    pSVar13 = (SRenderVertex *)((int)pSVar13 + (uint)bVar16 * -2 + 1);
                  }
                  g_IntermediateVertexCount = g_IntermediateVertexCount + 1;
                  break;
                case 1:
                  engine_clipper_c_interpolateVertexBottomClipAdvanced_FUN_00437490
                            (g_ClipperWorkingBuffer + uVar7,pSVar8,
                             g_ClipperIntermediateBuffer + g_IntermediateVertexCount);
                  g_IntermediateVertexCount = g_IntermediateVertexCount + 1;
                  break;
                case 2:
                  pSVar14 = pSVar8;
                  pSVar13 = g_ClipperIntermediateBuffer + g_IntermediateVertexCount;
                  for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
                    (pSVar13->projected_vertex).transformed_x =
                         (pSVar14->projected_vertex).transformed_x;
                    pSVar14 = (SRenderVertex *)((int)pSVar14 + (uint)bVar16 * -8 + 4);
                    pSVar13 = (SRenderVertex *)((int)pSVar13 + ((uint)bVar16 * -2 + 1) * 4);
                  }
                  for (iVar4 = 0; iVar4 != 0; iVar4 = iVar4 + -1) {
                    *(char *)&(pSVar13->projected_vertex).transformed_x =
                         (char)(pSVar14->projected_vertex).transformed_x;
                    pSVar14 = (SRenderVertex *)((int)pSVar14 + (uint)bVar16 * -2 + 1);
                    pSVar13 = (SRenderVertex *)((int)pSVar13 + (uint)bVar16 * -2 + 1);
                  }
                  g_IntermediateVertexCount = g_IntermediateVertexCount + 1;
                  engine_clipper_c_interpolateVertexBottomClipAdvanced_FUN_00437490
                            (pSVar8,g_ClipperWorkingBuffer + uVar7,
                             g_ClipperIntermediateBuffer + g_IntermediateVertexCount);
                  g_IntermediateVertexCount = g_IntermediateVertexCount + 1;
                }
                local_14 = local_14 + 1;
                pSVar8 = pSVar8 + 1;
              } while (local_14 < g_TempVertexCount);
            }
            if (2 < g_IntermediateVertexCount) {
              local_1c = 0;
              if (0 < g_IntermediateVertexCount) {
                pSVar8 = g_ClipperIntermediateBuffer;
                do {
                  uVar7 = local_1c + 1;
                  if (uVar7 == g_IntermediateVertexCount) {
                    uVar7 = uVar7 ^ g_IntermediateVertexCount;
                  }
                  bVar3 = (pSVar8->projected_vertex).transformed_y <=
                          -(pSVar8->projected_vertex).transformed_z;
                  if (g_ClipperIntermediateBuffer[uVar7].projected_vertex.transformed_y <=
                      -g_ClipperIntermediateBuffer[uVar7].projected_vertex.transformed_z) {
                    bVar3 = bVar3 | 2;
                  }
                  switch(bVar3) {
                  case 0:
                    pSVar14 = pSVar8;
                    pSVar13 = g_ClippedVertexBuffer + g_ClippedVertexCount;
                    for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
                      (pSVar13->projected_vertex).transformed_x =
                           (pSVar14->projected_vertex).transformed_x;
                      pSVar14 = (SRenderVertex *)((int)pSVar14 + (uint)bVar16 * -8 + 4);
                      pSVar13 = (SRenderVertex *)((int)pSVar13 + ((uint)bVar16 * -2 + 1) * 4);
                    }
                    for (iVar4 = 0; iVar4 != 0; iVar4 = iVar4 + -1) {
                      *(char *)&(pSVar13->projected_vertex).transformed_x =
                           (char)(pSVar14->projected_vertex).transformed_x;
                      pSVar14 = (SRenderVertex *)((int)pSVar14 + (uint)bVar16 * -2 + 1);
                      pSVar13 = (SRenderVertex *)((int)pSVar13 + (uint)bVar16 * -2 + 1);
                    }
                    g_ClippedVertexCount = g_ClippedVertexCount + 1;
                    break;
                  case 1:
                    engine_clipper_c_interpolateVertexTopClipAdvanced_FUN_004375c0
                              (g_ClipperIntermediateBuffer + uVar7,pSVar8,
                               g_ClippedVertexBuffer + g_ClippedVertexCount);
                    g_ClippedVertexCount = g_ClippedVertexCount + 1;
                    break;
                  case 2:
                    pSVar14 = pSVar8;
                    pSVar13 = g_ClippedVertexBuffer + g_ClippedVertexCount;
                    for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
                      (pSVar13->projected_vertex).transformed_x =
                           (pSVar14->projected_vertex).transformed_x;
                      pSVar14 = (SRenderVertex *)((int)pSVar14 + (uint)bVar16 * -8 + 4);
                      pSVar13 = (SRenderVertex *)((int)pSVar13 + ((uint)bVar16 * -2 + 1) * 4);
                    }
                    for (iVar4 = 0; iVar4 != 0; iVar4 = iVar4 + -1) {
                      *(char *)&(pSVar13->projected_vertex).transformed_x =
                           (char)(pSVar14->projected_vertex).transformed_x;
                      pSVar14 = (SRenderVertex *)((int)pSVar14 + (uint)bVar16 * -2 + 1);
                      pSVar13 = (SRenderVertex *)((int)pSVar13 + (uint)bVar16 * -2 + 1);
                    }
                    g_ClippedVertexCount = g_ClippedVertexCount + 1;
                    engine_clipper_c_interpolateVertexTopClipAdvanced_FUN_004375c0
                              (pSVar8,g_ClipperIntermediateBuffer + uVar7,
                               g_ClippedVertexBuffer + g_ClippedVertexCount);
                    g_ClippedVertexCount = g_ClippedVertexCount + 1;
                  }
                  local_1c = local_1c + 1;
                  pSVar8 = pSVar8 + 1;
                } while (local_1c < g_IntermediateVertexCount);
              }
              if (2 < g_ClippedVertexCount) {
                pSVar8 = g_ClippedVertexBuffer;
                iVar4 = 0;
                if (0 < g_ClippedVertexCount) {
                  do {
                    iVar10 = (pSVar8->projected_vertex).transformed_z;
                    if (iVar10 == 0) {
                      (pSVar8->projected_vertex).transformed_z = 1;
                      (pSVar8->projected_vertex).transformed_x = 0;
                      (pSVar8->projected_vertex).transformed_y = 0;
                    }
                    else if (iVar10 < (pSVar8->projected_vertex).transformed_x) {
                      (pSVar8->projected_vertex).transformed_x = iVar10;
                    }
                    else {
                      iVar5 = (pSVar8->projected_vertex).transformed_x;
                      iVar9 = -iVar10;
                      if (-iVar5 == iVar10 || iVar9 < iVar5) {
                        iVar5 = (pSVar8->projected_vertex).transformed_z;
                        iVar2 = (pSVar8->projected_vertex).transformed_y;
                        if (iVar5 < iVar2) {
                          (pSVar8->projected_vertex).transformed_y = iVar5;
                        }
                        else if (-iVar2 != iVar10 && iVar2 <= iVar9) {
                          (pSVar8->projected_vertex).transformed_y = iVar9;
                        }
                      }
                      else {
                        (pSVar8->projected_vertex).transformed_x = iVar9;
                      }
                    }
                    iVar4 = iVar4 + 1;
                    pSVar8 = pSVar8 + 1;
                  } while (iVar4 < g_ClippedVertexCount);
                }
              }
            }
          }
        }
      }
      if (2 < g_ClippedVertexCount) {
        engine_prim_c_renderScanlinePolygon_FUN_00553470(g_ClippedVertexBuffer,g_ClippedVertexCount)
        ;
        return;
      }
    }
  }
  return;
}
