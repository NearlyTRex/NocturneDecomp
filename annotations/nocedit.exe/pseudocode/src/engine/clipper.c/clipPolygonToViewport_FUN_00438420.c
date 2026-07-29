// Name: engine_clipper.c_clipPolygonToViewport_FUN_00438420
// Address: 00438420
// Address Range: [[00438420, 00438b7f]]
// Convention: __cdecl
// Signature: void __cdecl engine_clipper_c_clipPolygonToViewport_FUN_00438420(int vertex_count,int *vertex_indices)

#include "nocturne.h"

void __cdecl engine_clipper_c_clipPolygonToViewport_FUN_00438420(int vertex_count,int *vertex_indices)

{
  int iVar1;
  int iVar3;
  byte bVar3;
  byte bVar4;
  int iVar4;
  int iVar6;
  int iVar5;
  uint uVar8;
  char cVar6;
  int *piVar8;
  SRenderVertex *pSVar9;
  SRenderVertex *pSVar10;
  int iVar11;
  int iVar10;
  uint uVar11;
  int iVar12;
  SRenderVertex *pSVar12;
  SRenderVertex *pSVar16;
  SRenderVertex *pSVar13;
  SRenderVertex *pSVar14;
  SRenderVertex *pSVar17;
  SRenderVertex *pSVar15;
  byte bVar16;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  uint uVar7;
  uint uVar1;
  int iVar2;
  
  bVar16 = 0;
  if (g_VertexProcessingEnabled == 0) {
    engine_prim_c_renderIndexedPolygonAdvanced_FUN_00553b10(vertex_indices,vertex_count);
  }
  else {
    uVar7 = 0xffffffff;
    cVar6 = -1;
    uVar11 = 0;
    iVar4 = 0;
    piVar8 = vertex_indices;
    if (0 < vertex_count) {
      do {
        uVar1 = g_RenderVertexBuffer[*piVar8].projected_vertex.screen_x;
        if ((uVar1 & 0x80000000) != 0) {
          uVar11 = uVar11 + 1;
        }
        piVar8 = piVar8 + 1;
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
          iVar6 = 0;
          if (0 < vertex_count) {
            do {
              iVar1 = *vertex_indices;
              iVar6 = iVar6 + 1;
              vertex_indices = vertex_indices + 1;
              *(SRenderVertex **)(iVar6 * 4 + 0x825424) = g_RenderVertexBuffer + iVar1;
            } while (iVar6 < vertex_count);
          }
          if (g_CullingMode != 0) {
            if (vertex_count < 4) {
              iVar6 = engine_prim_c_calculateTriangleWindingOrder_FUN_00552150
                                (g_ClipperCullingPointers[0],g_ClipperCullingPointers[1],
                                 g_ClipperCullingPointers[2]);
              if (iVar6 == 0) {
                return;
              }
            }
            else {
              iVar10 = 0;
              iVar6 = (vertex_count + -2) * 4;
              iVar12 = 0;
              if (0 < iVar6) {
                do {
                  iVar5 = engine_prim_c_calculateTriangleWindingOrder_FUN_00552150
                                    (g_ClipperCullingPointers[0],
                                     *(SRenderVertex **)((int)g_ClipperCullingPointers + iVar10 + 4)
                                     ,*(SRenderVertex **)
                                       ((int)g_ClipperCullingPointers + iVar10 + 8));
                  if (iVar5 == 0) {
                    iVar12 = iVar12 + 1;
                  }
                  iVar10 = iVar10 + 4;
                } while (iVar10 < iVar6);
              }
              if (iVar12 == vertex_count + -2) {
                return;
              }
            }
          }
          g_RenderedTriangleCount = g_RenderedTriangleCount + vertex_count + -2;
          engine_special_cpp_drawPolygon2_FUN_005b7610
                    (g_ClipperCullingPointers,vertex_count,g_RenderStateFlags.dword);
          return;
        }
        g_ClippedVertexCount = vertex_count;
        if (0 < vertex_count) {
          pSVar9 = g_ClippedVertexBuffer;
          local_28 = 0;
          do {
            pSVar10 = g_RenderVertexBuffer + *vertex_indices;
            pSVar12 = pSVar9;
            for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
              (pSVar12->projected_vertex).transformed_x = (pSVar10->projected_vertex).transformed_x;
              pSVar10 = (SRenderVertex *)&(pSVar10->projected_vertex).transformed_y;
              pSVar12 = (SRenderVertex *)&(pSVar12->projected_vertex).transformed_y;
            }
            for (iVar6 = 0; iVar6 != 0; iVar6 = iVar6 + -1) {
              *(char *)&(pSVar12->projected_vertex).transformed_x =
                   (char)(pSVar10->projected_vertex).transformed_x;
              pSVar10 = (SRenderVertex *)((int)&(pSVar10->projected_vertex).transformed_x + 1);
              pSVar12 = (SRenderVertex *)((int)&(pSVar12->projected_vertex).transformed_x + 1);
            }
            vertex_indices = vertex_indices + 1;
            local_28 = local_28 + 1;
            pSVar9 = pSVar9 + 1;
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
          pSVar10 = g_ClipperInputBuffer;
          do {
            pSVar12 = g_RenderVertexBuffer + *vertex_indices;
            pSVar16 = pSVar10;
            for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
              (pSVar16->projected_vertex).transformed_x = (pSVar12->projected_vertex).transformed_x;
              pSVar12 = (SRenderVertex *)&(pSVar12->projected_vertex).transformed_y;
              pSVar16 = (SRenderVertex *)&(pSVar16->projected_vertex).transformed_y;
            }
            for (iVar6 = 0; iVar6 != 0; iVar6 = iVar6 + -1) {
              *(char *)&(pSVar16->projected_vertex).transformed_x =
                   (char)(pSVar12->projected_vertex).transformed_x;
              pSVar12 = (SRenderVertex *)((int)&(pSVar12->projected_vertex).transformed_x + 1);
              pSVar16 = (SRenderVertex *)((int)&(pSVar16->projected_vertex).transformed_x + 1);
            }
            vertex_indices = vertex_indices + 1;
            local_24 = local_24 + 1;
            pSVar10 = pSVar10 + 1;
          } while (local_24 < vertex_count);
        }
        local_20 = 0;
        if (0 < g_InputVertexCount) {
          pSVar10 = g_ClipperInputBuffer;
          do {
            uVar8 = local_20 + 1;
            if (uVar8 == g_InputVertexCount) {
              uVar8 = uVar8 ^ g_InputVertexCount;
            }
            pSVar12 = g_ClipperInputBuffer + uVar8;
            bVar3 = (pSVar10->projected_vertex).transformed_z <=
                    (pSVar10->projected_vertex).transformed_x;
            if (g_ClipperInputBuffer[uVar8].projected_vertex.transformed_z <=
                (pSVar12->projected_vertex).transformed_x) {
              bVar3 = bVar3 | 2;
            }
            switch(bVar3) {
            case 0:
              pSVar12 = pSVar10;
              pSVar16 = g_ClipperOutputBuffer + g_OutputVertexCount;
              for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
                (pSVar16->projected_vertex).transformed_x =
                     (pSVar12->projected_vertex).transformed_x;
                pSVar12 = (SRenderVertex *)((int)pSVar12 + (uint)bVar16 * -8 + 4);
                pSVar16 = (SRenderVertex *)((int)pSVar16 + ((uint)bVar16 * -2 + 1) * 4);
              }
              for (iVar6 = 0; iVar6 != 0; iVar6 = iVar6 + -1) {
                *(char *)&(pSVar16->projected_vertex).transformed_x =
                     (char)(pSVar12->projected_vertex).transformed_x;
                pSVar12 = (SRenderVertex *)((int)pSVar12 + (uint)bVar16 * -2 + 1);
                pSVar16 = (SRenderVertex *)((int)pSVar16 + (uint)bVar16 * -2 + 1);
              }
              g_OutputVertexCount = g_OutputVertexCount + 1;
              break;
            case 1:
              engine_clipper_c_interpolateVertexLeftClipAdvanced_FUN_00437230
                        (pSVar12,pSVar10,g_ClipperOutputBuffer + g_OutputVertexCount);
              g_OutputVertexCount = g_OutputVertexCount + 1;
              break;
            case 2:
              pSVar16 = pSVar10;
              pSVar17 = g_ClipperOutputBuffer + g_OutputVertexCount;
              for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
                (pSVar17->projected_vertex).transformed_x =
                     (pSVar16->projected_vertex).transformed_x;
                pSVar16 = (SRenderVertex *)((int)pSVar16 + (uint)bVar16 * -8 + 4);
                pSVar17 = (SRenderVertex *)((int)pSVar17 + ((uint)bVar16 * -2 + 1) * 4);
              }
              for (iVar6 = 0; iVar6 != 0; iVar6 = iVar6 + -1) {
                *(char *)&(pSVar17->projected_vertex).transformed_x =
                     (char)(pSVar16->projected_vertex).transformed_x;
                pSVar16 = (SRenderVertex *)((int)pSVar16 + (uint)bVar16 * -2 + 1);
                pSVar17 = (SRenderVertex *)((int)pSVar17 + (uint)bVar16 * -2 + 1);
              }
              g_OutputVertexCount = g_OutputVertexCount + 1;
              engine_clipper_c_interpolateVertexLeftClipAdvanced_FUN_00437230
                        (pSVar10,pSVar12,g_ClipperOutputBuffer + g_OutputVertexCount);
              g_OutputVertexCount = g_OutputVertexCount + 1;
            }
            local_20 = local_20 + 1;
            pSVar10 = pSVar10 + 1;
          } while (local_20 < g_InputVertexCount);
        }
        if (2 < g_OutputVertexCount) {
          local_18 = 0;
          if (0 < g_OutputVertexCount) {
            pSVar10 = g_ClipperOutputBuffer;
            do {
              uVar8 = local_18 + 1;
              if (uVar8 == g_OutputVertexCount) {
                uVar8 = uVar8 ^ g_OutputVertexCount;
              }
              pSVar12 = g_ClipperOutputBuffer + uVar8;
              bVar4 = (pSVar10->projected_vertex).transformed_x <=
                      -(pSVar10->projected_vertex).transformed_z;
              if ((pSVar12->projected_vertex).transformed_x <=
                  -g_ClipperOutputBuffer[uVar8].projected_vertex.transformed_z) {
                bVar4 = bVar4 | 2;
              }
              switch(bVar4) {
              case 0:
                pSVar12 = pSVar10;
                pSVar16 = g_ClipperWorkingBuffer + g_TempVertexCount;
                for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
                  (pSVar16->projected_vertex).transformed_x =
                       (pSVar12->projected_vertex).transformed_x;
                  pSVar12 = (SRenderVertex *)((int)pSVar12 + (uint)bVar16 * -8 + 4);
                  pSVar16 = (SRenderVertex *)((int)pSVar16 + ((uint)bVar16 * -2 + 1) * 4);
                }
                for (iVar6 = 0; iVar6 != 0; iVar6 = iVar6 + -1) {
                  *(char *)&(pSVar16->projected_vertex).transformed_x =
                       (char)(pSVar12->projected_vertex).transformed_x;
                  pSVar12 = (SRenderVertex *)((int)pSVar12 + (uint)bVar16 * -2 + 1);
                  pSVar16 = (SRenderVertex *)((int)pSVar16 + (uint)bVar16 * -2 + 1);
                }
                g_TempVertexCount = g_TempVertexCount + 1;
                break;
              case 1:
                engine_clipper_c_interpolateVertexRightClipAdvanced_FUN_00437360
                          (pSVar12,pSVar10,g_ClipperWorkingBuffer + g_TempVertexCount);
                g_TempVertexCount = g_TempVertexCount + 1;
                break;
              case 2:
                pSVar13 = pSVar10;
                pSVar15 = g_ClipperWorkingBuffer + g_TempVertexCount;
                for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
                  (pSVar15->projected_vertex).transformed_x =
                       (pSVar13->projected_vertex).transformed_x;
                  pSVar13 = (SRenderVertex *)((int)pSVar13 + (uint)bVar16 * -8 + 4);
                  pSVar15 = (SRenderVertex *)((int)pSVar15 + (uint)bVar16 * -8 + 4);
                }
                for (iVar6 = 0; iVar6 != 0; iVar6 = iVar6 + -1) {
                  pSVar15 = (SRenderVertex *)((int)pSVar15 + (uint)bVar16 * -2 + 1);
                  pSVar13 = (SRenderVertex *)((int)pSVar13 + (uint)bVar16 * -2 + 1);
                  *(char *)&(pSVar15->projected_vertex).transformed_x =
                       (char)(pSVar13->projected_vertex).transformed_x;
                  pSVar13 = pSVar13;
                  pSVar15 = pSVar15;
                }
                g_TempVertexCount = g_TempVertexCount + 1;
                engine_clipper_c_interpolateVertexRightClipAdvanced_FUN_00437360
                          (pSVar10,pSVar12,g_ClipperWorkingBuffer + g_TempVertexCount);
                g_TempVertexCount = g_TempVertexCount + 1;
              }
              local_18 = local_18 + 1;
              pSVar10 = pSVar10 + 1;
            } while (local_18 < g_OutputVertexCount);
          }
          if (2 < g_TempVertexCount) {
            local_14 = 0;
            if (0 < g_TempVertexCount) {
              pSVar10 = g_ClipperWorkingBuffer;
              do {
                uVar8 = local_14 + 1;
                if (uVar8 == g_TempVertexCount) {
                  uVar8 = uVar8 ^ g_TempVertexCount;
                }
                bVar4 = (pSVar10->projected_vertex).transformed_z <=
                        (pSVar10->projected_vertex).transformed_y;
                if (g_ClipperWorkingBuffer[uVar8].projected_vertex.transformed_z <=
                    g_ClipperWorkingBuffer[uVar8].projected_vertex.transformed_y) {
                  bVar4 = bVar4 | 2;
                }
                switch(bVar4) {
                case 0:
                  pSVar12 = pSVar10;
                  pSVar16 = g_ClipperIntermediateBuffer + g_IntermediateVertexCount;
                  for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
                    (pSVar16->projected_vertex).transformed_x =
                         (pSVar12->projected_vertex).transformed_x;
                    pSVar12 = (SRenderVertex *)((int)pSVar12 + (uint)bVar16 * -8 + 4);
                    pSVar16 = (SRenderVertex *)((int)pSVar16 + ((uint)bVar16 * -2 + 1) * 4);
                  }
                  for (iVar6 = 0; iVar6 != 0; iVar6 = iVar6 + -1) {
                    *(char *)&(pSVar16->projected_vertex).transformed_x =
                         (char)(pSVar12->projected_vertex).transformed_x;
                    pSVar12 = (SRenderVertex *)((int)pSVar12 + (uint)bVar16 * -2 + 1);
                    pSVar16 = (SRenderVertex *)((int)pSVar16 + (uint)bVar16 * -2 + 1);
                  }
                  g_IntermediateVertexCount = g_IntermediateVertexCount + 1;
                  break;
                case 1:
                  engine_clipper_c_interpolateVertexBottomClipAdvanced_FUN_00437490
                            (g_ClipperWorkingBuffer + uVar8,pSVar10,
                             g_ClipperIntermediateBuffer + g_IntermediateVertexCount);
                  g_IntermediateVertexCount = g_IntermediateVertexCount + 1;
                  break;
                case 2:
                  pSVar12 = pSVar10;
                  pSVar16 = g_ClipperIntermediateBuffer + g_IntermediateVertexCount;
                  for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
                    (pSVar16->projected_vertex).transformed_x =
                         (pSVar12->projected_vertex).transformed_x;
                    pSVar12 = (SRenderVertex *)((int)pSVar12 + (uint)bVar16 * -8 + 4);
                    pSVar16 = (SRenderVertex *)((int)pSVar16 + ((uint)bVar16 * -2 + 1) * 4);
                  }
                  for (iVar6 = 0; iVar6 != 0; iVar6 = iVar6 + -1) {
                    *(char *)&(pSVar16->projected_vertex).transformed_x =
                         (char)(pSVar12->projected_vertex).transformed_x;
                    pSVar12 = (SRenderVertex *)((int)pSVar12 + (uint)bVar16 * -2 + 1);
                    pSVar16 = (SRenderVertex *)((int)pSVar16 + (uint)bVar16 * -2 + 1);
                  }
                  g_IntermediateVertexCount = g_IntermediateVertexCount + 1;
                  engine_clipper_c_interpolateVertexBottomClipAdvanced_FUN_00437490
                            (pSVar10,g_ClipperWorkingBuffer + uVar8,
                             g_ClipperIntermediateBuffer + g_IntermediateVertexCount);
                  g_IntermediateVertexCount = g_IntermediateVertexCount + 1;
                }
                local_14 = local_14 + 1;
                pSVar10 = pSVar10 + 1;
              } while (local_14 < g_TempVertexCount);
            }
            if (2 < g_IntermediateVertexCount) {
              local_1c = 0;
              if (0 < g_IntermediateVertexCount) {
                pSVar10 = g_ClipperIntermediateBuffer;
                do {
                  uVar8 = local_1c + 1;
                  if (uVar8 == g_IntermediateVertexCount) {
                    uVar8 = uVar8 ^ g_IntermediateVertexCount;
                  }
                  bVar4 = (pSVar10->projected_vertex).transformed_y <=
                          -(pSVar10->projected_vertex).transformed_z;
                  if (g_ClipperIntermediateBuffer[uVar8].projected_vertex.transformed_y <=
                      -g_ClipperIntermediateBuffer[uVar8].projected_vertex.transformed_z) {
                    bVar4 = bVar4 | 2;
                  }
                  switch(bVar4) {
                  case 0:
                    pSVar12 = pSVar10;
                    pSVar16 = g_ClippedVertexBuffer + g_ClippedVertexCount;
                    for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
                      (pSVar16->projected_vertex).transformed_x =
                           (pSVar12->projected_vertex).transformed_x;
                      pSVar12 = (SRenderVertex *)((int)pSVar12 + (uint)bVar16 * -8 + 4);
                      pSVar16 = (SRenderVertex *)((int)pSVar16 + ((uint)bVar16 * -2 + 1) * 4);
                    }
                    for (iVar6 = 0; iVar6 != 0; iVar6 = iVar6 + -1) {
                      *(char *)&(pSVar16->projected_vertex).transformed_x =
                           (char)(pSVar12->projected_vertex).transformed_x;
                      pSVar12 = (SRenderVertex *)((int)pSVar12 + (uint)bVar16 * -2 + 1);
                      pSVar16 = (SRenderVertex *)((int)pSVar16 + (uint)bVar16 * -2 + 1);
                    }
                    g_ClippedVertexCount = g_ClippedVertexCount + 1;
                    break;
                  case 1:
                    engine_clipper_c_interpolateVertexTopClipAdvanced_FUN_004375c0
                              (g_ClipperIntermediateBuffer + uVar8,pSVar10,
                               g_ClippedVertexBuffer + g_ClippedVertexCount);
                    g_ClippedVertexCount = g_ClippedVertexCount + 1;
                    break;
                  case 2:
                    pSVar14 = pSVar10;
                    pSVar12 = g_ClippedVertexBuffer + g_ClippedVertexCount;
                    for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
                      (pSVar12->projected_vertex).transformed_x =
                           (pSVar14->projected_vertex).transformed_x;
                      pSVar14 = (SRenderVertex *)((int)pSVar14 + (uint)bVar16 * -8 + 4);
                      pSVar12 = (SRenderVertex *)((int)pSVar12 + ((uint)bVar16 * -2 + 1) * 4);
                    }
                    for (iVar6 = 0; iVar6 != 0; iVar6 = iVar6 + -1) {
                      pSVar14 = (SRenderVertex *)((int)pSVar14 + (uint)bVar16 * -2 + 1);
                      *(char *)&(pSVar12->projected_vertex).transformed_x =
                           (char)(pSVar14->projected_vertex).transformed_x;
                      pSVar14 = pSVar14;
                      pSVar12 = (SRenderVertex *)((int)pSVar12 + (uint)bVar16 * -2 + 1);
                    }
                    g_ClippedVertexCount = g_ClippedVertexCount + 1;
                    engine_clipper_c_interpolateVertexTopClipAdvanced_FUN_004375c0
                              (pSVar10,g_ClipperIntermediateBuffer + uVar8,
                               g_ClippedVertexBuffer + g_ClippedVertexCount);
                    g_ClippedVertexCount = g_ClippedVertexCount + 1;
                  }
                  local_1c = local_1c + 1;
                  pSVar10 = pSVar10 + 1;
                } while (local_1c < g_IntermediateVertexCount);
              }
              if (2 < g_ClippedVertexCount) {
                pSVar10 = g_ClippedVertexBuffer;
                iVar6 = 0;
                if (0 < g_ClippedVertexCount) {
                  do {
                    iVar1 = (pSVar10->projected_vertex).transformed_z;
                    if (iVar1 == 0) {
                      (pSVar10->projected_vertex).transformed_z = 1;
                      (pSVar10->projected_vertex).transformed_x = 0;
                      (pSVar10->projected_vertex).transformed_y = 0;
                    }
                    else if (iVar1 < (pSVar10->projected_vertex).transformed_x) {
                      (pSVar10->projected_vertex).transformed_x = iVar1;
                    }
                    else {
                      iVar3 = (pSVar10->projected_vertex).transformed_x;
                      iVar11 = -iVar1;
                      if (-iVar3 == iVar1 || iVar11 < iVar3) {
                        iVar3 = (pSVar10->projected_vertex).transformed_z;
                        iVar2 = (pSVar10->projected_vertex).transformed_y;
                        if (iVar3 < iVar2) {
                          (pSVar10->projected_vertex).transformed_y = iVar3;
                        }
                        else if (-iVar2 != iVar1 && iVar2 <= iVar11) {
                          (pSVar10->projected_vertex).transformed_y = iVar11;
                        }
                      }
                      else {
                        (pSVar10->projected_vertex).transformed_x = iVar11;
                      }
                    }
                    iVar6 = iVar6 + 1;
                    pSVar10 = pSVar10 + 1;
                  } while (iVar6 < g_ClippedVertexCount);
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
