// Name: engine_clipper.c_clipPolygonToViewFrustumAdvanced_FUN_00437ca0
// Address: 00437ca0
// Address Range: [[00437ca0, 004383d7]]
// Convention: __cdecl
// Signature: int engine_clipper.c_clipPolygonToViewFrustumAdvanced_FUN_00437ca0(int vertex_count, int * vertex_indices)

#include "nocturne.h"

int __cdecl
engine_clipper_c_clipPolygonToViewFrustumAdvanced_FUN_00437ca0(int vertex_count,int *vertex_indices)

{
  uint uVar1;
  int iVar2;
  byte bVar3;
  int *piVar4;
  int iVar5;
  char cVar6;
  int iVar8;
  SRenderVertex *pSVar9;
  int iVar10;
  int iVar11;
  SRenderVertex *pSVar12;
  SRenderVertex *pSVar13;
  SRenderVertex *pSVar14;
  byte bVar15;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  uint uVar7;
  
  bVar15 = 0;
  uVar7 = 0xffffffff;
  cVar6 = -1;
  iVar8 = 0;
  iVar10 = 0;
  piVar4 = vertex_indices;
  if (0 < vertex_count) {
    do {
      uVar1 = g_RenderVertexBuffer[*piVar4].projected_vertex.screen_x;
      if ((uVar1 & 0x80000000) != 0) {
        iVar10 = iVar10 + 1;
      }
      iVar8 = iVar8 + 1;
      uVar7 = uVar7 & uVar1;
      cVar6 = (char)uVar7;
      piVar4 = piVar4 + 1;
    } while (iVar8 < vertex_count);
  }
  if ((iVar10 == vertex_count) && (cVar6 != '\0')) {
    g_ClippedVertexCount = 0;
    return 1;
  }
  if (iVar10 != 0) {
    g_InputVertexCount = vertex_count;
    g_OutputVertexCount = 0;
    g_TempVertexCount = 0;
    g_IntermediateVertexCount = 0;
    g_ClippedVertexCount = 0;
    local_28 = 0;
    if (0 < vertex_count) {
      pSVar9 = g_ClipperInputBuffer;
      do {
        pSVar13 = g_RenderVertexBuffer + *vertex_indices;
        pSVar12 = pSVar9;
        for (iVar8 = 0xc; iVar8 != 0; iVar8 = iVar8 + -1) {
          (pSVar12->projected_vertex).transformed_x = (pSVar13->projected_vertex).transformed_x;
          pSVar13 = (SRenderVertex *)&(pSVar13->projected_vertex).transformed_y;
          pSVar12 = (SRenderVertex *)&(pSVar12->projected_vertex).transformed_y;
        }
        for (iVar8 = 0; iVar8 != 0; iVar8 = iVar8 + -1) {
          *(char *)&(pSVar12->projected_vertex).transformed_x =
               (char)(pSVar13->projected_vertex).transformed_x;
          pSVar13 = (SRenderVertex *)((int)&(pSVar13->projected_vertex).transformed_x + 1);
          pSVar12 = (SRenderVertex *)((int)&(pSVar12->projected_vertex).transformed_x + 1);
        }
        vertex_indices = vertex_indices + 1;
        local_28 = local_28 + 1;
        pSVar9 = pSVar9 + 1;
      } while (local_28 < vertex_count);
    }
    local_20 = 0;
    if (0 < g_InputVertexCount) {
      pSVar9 = g_ClipperInputBuffer;
      do {
        uVar7 = local_20 + 1;
        if (uVar7 == g_InputVertexCount) {
          uVar7 = uVar7 ^ g_InputVertexCount;
        }
        pSVar13 = g_ClipperInputBuffer + uVar7;
        bVar3 = (pSVar9->projected_vertex).transformed_z <= (pSVar9->projected_vertex).transformed_x
        ;
        if (g_ClipperInputBuffer[uVar7].projected_vertex.transformed_z <=
            (pSVar13->projected_vertex).transformed_x) {
          bVar3 = bVar3 | 2;
        }
        switch(bVar3) {
        case 0:
          pSVar13 = pSVar9;
          pSVar12 = g_ClipperOutputBuffer + g_OutputVertexCount;
          for (iVar8 = 0xc; iVar8 != 0; iVar8 = iVar8 + -1) {
            (pSVar12->projected_vertex).transformed_x = (pSVar13->projected_vertex).transformed_x;
            pSVar13 = (SRenderVertex *)((int)pSVar13 + (uint)bVar15 * -8 + 4);
            pSVar12 = (SRenderVertex *)((int)pSVar12 + ((uint)bVar15 * -2 + 1) * 4);
          }
          for (iVar8 = 0; iVar8 != 0; iVar8 = iVar8 + -1) {
            *(char *)&(pSVar12->projected_vertex).transformed_x =
                 (char)(pSVar13->projected_vertex).transformed_x;
            pSVar13 = (SRenderVertex *)((int)pSVar13 + (uint)bVar15 * -2 + 1);
            pSVar12 = (SRenderVertex *)((int)pSVar12 + (uint)bVar15 * -2 + 1);
          }
          g_OutputVertexCount = g_OutputVertexCount + 1;
          break;
        case 1:
          engine_clipper_c_interpolateVertexLeftClipAdvanced_FUN_00437230
                    (pSVar13,pSVar9,g_ClipperOutputBuffer + g_OutputVertexCount);
          g_OutputVertexCount = g_OutputVertexCount + 1;
          break;
        case 2:
          pSVar12 = pSVar9;
          pSVar14 = g_ClipperOutputBuffer + g_OutputVertexCount;
          for (iVar8 = 0xc; iVar8 != 0; iVar8 = iVar8 + -1) {
            (pSVar14->projected_vertex).transformed_x = (pSVar12->projected_vertex).transformed_x;
            pSVar12 = (SRenderVertex *)((int)pSVar12 + (uint)bVar15 * -8 + 4);
            pSVar14 = (SRenderVertex *)((int)pSVar14 + ((uint)bVar15 * -2 + 1) * 4);
          }
          for (iVar8 = 0; iVar8 != 0; iVar8 = iVar8 + -1) {
            *(char *)&(pSVar14->projected_vertex).transformed_x =
                 (char)(pSVar12->projected_vertex).transformed_x;
            pSVar12 = (SRenderVertex *)((int)pSVar12 + (uint)bVar15 * -2 + 1);
            pSVar14 = (SRenderVertex *)((int)pSVar14 + (uint)bVar15 * -2 + 1);
          }
          g_OutputVertexCount = g_OutputVertexCount + 1;
          engine_clipper_c_interpolateVertexLeftClipAdvanced_FUN_00437230
                    (pSVar9,pSVar13,g_ClipperOutputBuffer + g_OutputVertexCount);
          g_OutputVertexCount = g_OutputVertexCount + 1;
        }
        local_20 = local_20 + 1;
        pSVar9 = pSVar9 + 1;
      } while (local_20 < g_InputVertexCount);
    }
    if (2 < g_OutputVertexCount) {
      local_1c = 0;
      if (0 < g_OutputVertexCount) {
        pSVar9 = g_ClipperOutputBuffer;
        do {
          uVar7 = local_1c + 1;
          if (uVar7 == g_OutputVertexCount) {
            uVar7 = uVar7 ^ g_OutputVertexCount;
          }
          pSVar13 = g_ClipperOutputBuffer + uVar7;
          bVar3 = (pSVar9->projected_vertex).transformed_x <=
                  -(pSVar9->projected_vertex).transformed_z;
          if ((pSVar13->projected_vertex).transformed_x <=
              -g_ClipperOutputBuffer[uVar7].projected_vertex.transformed_z) {
            bVar3 = bVar3 | 2;
          }
          switch(bVar3) {
          case 0:
            pSVar13 = pSVar9;
            pSVar12 = g_ClipperWorkingBuffer + g_TempVertexCount;
            for (iVar8 = 0xc; iVar8 != 0; iVar8 = iVar8 + -1) {
              (pSVar12->projected_vertex).transformed_x = (pSVar13->projected_vertex).transformed_x;
              pSVar13 = (SRenderVertex *)((int)pSVar13 + (uint)bVar15 * -8 + 4);
              pSVar12 = (SRenderVertex *)((int)pSVar12 + ((uint)bVar15 * -2 + 1) * 4);
            }
            for (iVar8 = 0; iVar8 != 0; iVar8 = iVar8 + -1) {
              *(char *)&(pSVar12->projected_vertex).transformed_x =
                   (char)(pSVar13->projected_vertex).transformed_x;
              pSVar13 = (SRenderVertex *)((int)pSVar13 + (uint)bVar15 * -2 + 1);
              pSVar12 = (SRenderVertex *)((int)pSVar12 + (uint)bVar15 * -2 + 1);
            }
            g_TempVertexCount = g_TempVertexCount + 1;
            break;
          case 1:
            engine_clipper_c_interpolateVertexRightClipAdvanced_FUN_00437360
                      (pSVar13,pSVar9,g_ClipperWorkingBuffer + g_TempVertexCount);
            g_TempVertexCount = g_TempVertexCount + 1;
            break;
          case 2:
            pSVar12 = pSVar9;
            pSVar14 = g_ClipperWorkingBuffer + g_TempVertexCount;
            for (iVar8 = 0xc; iVar8 != 0; iVar8 = iVar8 + -1) {
              (pSVar14->projected_vertex).transformed_x = (pSVar12->projected_vertex).transformed_x;
              pSVar12 = (SRenderVertex *)((int)pSVar12 + (uint)bVar15 * -8 + 4);
              pSVar14 = (SRenderVertex *)((int)pSVar14 + ((uint)bVar15 * -2 + 1) * 4);
            }
            for (iVar8 = 0; iVar8 != 0; iVar8 = iVar8 + -1) {
              *(char *)&(pSVar14->projected_vertex).transformed_x =
                   (char)(pSVar12->projected_vertex).transformed_x;
              pSVar12 = (SRenderVertex *)((int)pSVar12 + (uint)bVar15 * -2 + 1);
              pSVar14 = (SRenderVertex *)((int)pSVar14 + (uint)bVar15 * -2 + 1);
            }
            g_TempVertexCount = g_TempVertexCount + 1;
            engine_clipper_c_interpolateVertexRightClipAdvanced_FUN_00437360
                      (pSVar9,pSVar13,g_ClipperWorkingBuffer + g_TempVertexCount);
            g_TempVertexCount = g_TempVertexCount + 1;
          }
          local_1c = local_1c + 1;
          pSVar9 = pSVar9 + 1;
        } while (local_1c < g_OutputVertexCount);
      }
      if (2 < g_TempVertexCount) {
        local_14 = 0;
        if (0 < g_TempVertexCount) {
          pSVar9 = g_ClipperWorkingBuffer;
          do {
            uVar7 = local_14 + 1;
            if (uVar7 == g_TempVertexCount) {
              uVar7 = uVar7 ^ g_TempVertexCount;
            }
            bVar3 = (pSVar9->projected_vertex).transformed_z <=
                    (pSVar9->projected_vertex).transformed_y;
            if (g_ClipperWorkingBuffer[uVar7].projected_vertex.transformed_z <=
                g_ClipperWorkingBuffer[uVar7].projected_vertex.transformed_y) {
              bVar3 = bVar3 | 2;
            }
            switch(bVar3) {
            case 0:
              pSVar13 = pSVar9;
              pSVar12 = g_ClipperIntermediateBuffer + g_IntermediateVertexCount;
              for (iVar8 = 0xc; iVar8 != 0; iVar8 = iVar8 + -1) {
                (pSVar12->projected_vertex).transformed_x =
                     (pSVar13->projected_vertex).transformed_x;
                pSVar13 = (SRenderVertex *)((int)pSVar13 + (uint)bVar15 * -8 + 4);
                pSVar12 = (SRenderVertex *)((int)pSVar12 + ((uint)bVar15 * -2 + 1) * 4);
              }
              for (iVar8 = 0; iVar8 != 0; iVar8 = iVar8 + -1) {
                *(char *)&(pSVar12->projected_vertex).transformed_x =
                     (char)(pSVar13->projected_vertex).transformed_x;
                pSVar13 = (SRenderVertex *)((int)pSVar13 + (uint)bVar15 * -2 + 1);
                pSVar12 = (SRenderVertex *)((int)pSVar12 + (uint)bVar15 * -2 + 1);
              }
              g_IntermediateVertexCount = g_IntermediateVertexCount + 1;
              break;
            case 1:
              engine_clipper_c_interpolateVertexBottomClipAdvanced_FUN_00437490
                        (g_ClipperWorkingBuffer + uVar7,pSVar9,
                         g_ClipperIntermediateBuffer + g_IntermediateVertexCount);
              g_IntermediateVertexCount = g_IntermediateVertexCount + 1;
              break;
            case 2:
              pSVar13 = pSVar9;
              pSVar12 = g_ClipperIntermediateBuffer + g_IntermediateVertexCount;
              for (iVar8 = 0xc; iVar8 != 0; iVar8 = iVar8 + -1) {
                (pSVar12->projected_vertex).transformed_x =
                     (pSVar13->projected_vertex).transformed_x;
                pSVar13 = (SRenderVertex *)((int)pSVar13 + (uint)bVar15 * -8 + 4);
                pSVar12 = (SRenderVertex *)((int)pSVar12 + ((uint)bVar15 * -2 + 1) * 4);
              }
              for (iVar8 = 0; iVar8 != 0; iVar8 = iVar8 + -1) {
                *(char *)&(pSVar12->projected_vertex).transformed_x =
                     (char)(pSVar13->projected_vertex).transformed_x;
                pSVar13 = (SRenderVertex *)((int)pSVar13 + (uint)bVar15 * -2 + 1);
                pSVar12 = (SRenderVertex *)((int)pSVar12 + (uint)bVar15 * -2 + 1);
              }
              g_IntermediateVertexCount = g_IntermediateVertexCount + 1;
              engine_clipper_c_interpolateVertexBottomClipAdvanced_FUN_00437490
                        (pSVar9,g_ClipperWorkingBuffer + uVar7,
                         g_ClipperIntermediateBuffer + g_IntermediateVertexCount);
              g_IntermediateVertexCount = g_IntermediateVertexCount + 1;
            }
            local_14 = local_14 + 1;
            pSVar9 = pSVar9 + 1;
          } while (local_14 < g_TempVertexCount);
        }
        if (2 < g_IntermediateVertexCount) {
          local_18 = 0;
          if (0 < g_IntermediateVertexCount) {
            pSVar9 = g_ClipperIntermediateBuffer;
            do {
              uVar7 = local_18 + 1;
              if (uVar7 == g_IntermediateVertexCount) {
                uVar7 = uVar7 ^ g_IntermediateVertexCount;
              }
              bVar3 = (pSVar9->projected_vertex).transformed_y <=
                      -(pSVar9->projected_vertex).transformed_z;
              if (g_ClipperIntermediateBuffer[uVar7].projected_vertex.transformed_y <=
                  -g_ClipperIntermediateBuffer[uVar7].projected_vertex.transformed_z) {
                bVar3 = bVar3 | 2;
              }
              switch(bVar3) {
              case 0:
                pSVar13 = pSVar9;
                pSVar12 = g_ClippedVertexBuffer + g_ClippedVertexCount;
                for (iVar8 = 0xc; iVar8 != 0; iVar8 = iVar8 + -1) {
                  (pSVar12->projected_vertex).transformed_x =
                       (pSVar13->projected_vertex).transformed_x;
                  pSVar13 = (SRenderVertex *)((int)pSVar13 + (uint)bVar15 * -8 + 4);
                  pSVar12 = (SRenderVertex *)((int)pSVar12 + ((uint)bVar15 * -2 + 1) * 4);
                }
                for (iVar8 = 0; iVar8 != 0; iVar8 = iVar8 + -1) {
                  *(char *)&(pSVar12->projected_vertex).transformed_x =
                       (char)(pSVar13->projected_vertex).transformed_x;
                  pSVar13 = (SRenderVertex *)((int)pSVar13 + (uint)bVar15 * -2 + 1);
                  pSVar12 = (SRenderVertex *)((int)pSVar12 + (uint)bVar15 * -2 + 1);
                }
                g_ClippedVertexCount = g_ClippedVertexCount + 1;
                break;
              case 1:
                engine_clipper_c_interpolateVertexTopClipAdvanced_FUN_004375c0
                          (g_ClipperIntermediateBuffer + uVar7,pSVar9,
                           g_ClippedVertexBuffer + g_ClippedVertexCount);
                g_ClippedVertexCount = g_ClippedVertexCount + 1;
                break;
              case 2:
                pSVar13 = pSVar9;
                pSVar12 = g_ClippedVertexBuffer + g_ClippedVertexCount;
                for (iVar8 = 0xc; iVar8 != 0; iVar8 = iVar8 + -1) {
                  (pSVar12->projected_vertex).transformed_x =
                       (pSVar13->projected_vertex).transformed_x;
                  pSVar13 = (SRenderVertex *)((int)pSVar13 + (uint)bVar15 * -8 + 4);
                  pSVar12 = (SRenderVertex *)((int)pSVar12 + ((uint)bVar15 * -2 + 1) * 4);
                }
                for (iVar8 = 0; iVar8 != 0; iVar8 = iVar8 + -1) {
                  *(char *)&(pSVar12->projected_vertex).transformed_x =
                       (char)(pSVar13->projected_vertex).transformed_x;
                  pSVar13 = (SRenderVertex *)((int)pSVar13 + (uint)bVar15 * -2 + 1);
                  pSVar12 = (SRenderVertex *)((int)pSVar12 + (uint)bVar15 * -2 + 1);
                }
                g_ClippedVertexCount = g_ClippedVertexCount + 1;
                engine_clipper_c_interpolateVertexTopClipAdvanced_FUN_004375c0
                          (pSVar9,g_ClipperIntermediateBuffer + uVar7,
                           g_ClippedVertexBuffer + g_ClippedVertexCount);
                g_ClippedVertexCount = g_ClippedVertexCount + 1;
              }
              local_18 = local_18 + 1;
              pSVar9 = pSVar9 + 1;
            } while (local_18 < g_IntermediateVertexCount);
          }
          if (2 < g_ClippedVertexCount) {
            pSVar9 = g_ClippedVertexBuffer;
            iVar8 = 0;
            if (0 < g_ClippedVertexCount) {
              do {
                iVar10 = (pSVar9->projected_vertex).transformed_z;
                if (iVar10 == 0) {
                  (pSVar9->projected_vertex).transformed_z = 1;
                  (pSVar9->projected_vertex).transformed_x = 0;
                  (pSVar9->projected_vertex).transformed_y = 0;
                }
                else if (iVar10 < (pSVar9->projected_vertex).transformed_x) {
                  (pSVar9->projected_vertex).transformed_x = iVar10;
                }
                else {
                  iVar11 = (pSVar9->projected_vertex).transformed_x;
                  iVar5 = -iVar10;
                  if (-iVar11 == iVar10 || iVar5 < iVar11) {
                    iVar11 = (pSVar9->projected_vertex).transformed_z;
                    iVar2 = (pSVar9->projected_vertex).transformed_y;
                    if (iVar11 < iVar2) {
                      (pSVar9->projected_vertex).transformed_y = iVar11;
                    }
                    else if (-iVar2 != iVar10 && iVar2 <= iVar5) {
                      (pSVar9->projected_vertex).transformed_y = iVar5;
                    }
                  }
                  else {
                    (pSVar9->projected_vertex).transformed_x = iVar5;
                  }
                }
                iVar8 = iVar8 + 1;
                pSVar9 = pSVar9 + 1;
              } while (iVar8 < g_ClippedVertexCount);
            }
          }
        }
      }
    }
    return 0;
  }
  if (g_UseExternalRenderer != 0) {
    iVar8 = 0;
    if (0 < vertex_count) {
      do {
        iVar10 = *vertex_indices;
        iVar8 = iVar8 + 1;
        vertex_indices = vertex_indices + 1;
        *(SRenderVertex **)(iVar8 * 4 + 0x825424) = g_RenderVertexBuffer + iVar10;
      } while (iVar8 < vertex_count);
    }
    if (g_CullingMode != 0) {
      if (vertex_count < 4) {
        iVar8 = engine_prim_c_calculateTriangleWindingOrder_FUN_00552150
                          (g_ClipperCullingPointers[0],g_ClipperCullingPointers[1],
                           g_ClipperCullingPointers[2]);
        if (iVar8 == 0) {
          return 1;
        }
      }
      else {
        iVar10 = 0;
        iVar8 = (vertex_count + -2) * 4;
        iVar11 = 0;
        if (0 < iVar8) {
          do {
            iVar5 = engine_prim_c_calculateTriangleWindingOrder_FUN_00552150
                              (g_ClipperCullingPointers[0],
                               *(SRenderVertex **)((int)g_ClipperCullingPointers + iVar10 + 4),
                               *(SRenderVertex **)((int)g_ClipperCullingPointers + iVar10 + 8));
            if (iVar5 == 0) {
              iVar11 = iVar11 + 1;
            }
            iVar10 = iVar10 + 4;
          } while (iVar10 < iVar8);
        }
        if (iVar11 == local_28) {
          return 1;
        }
      }
    }
    g_RenderedTriangleCount = g_RenderedTriangleCount + vertex_count + -2;
    wincore_windll_cpp_drawPolygon2_FUN_005b7610
              (g_ClipperCullingPointers,vertex_count,g_RenderStateFlags);
    return 1;
  }
  g_ClippedVertexCount = vertex_count;
  if (0 < vertex_count) {
    pSVar9 = g_ClippedVertexBuffer;
    local_24 = 0;
    do {
      pSVar13 = g_RenderVertexBuffer + *vertex_indices;
      pSVar12 = pSVar9;
      for (iVar8 = 0xc; iVar8 != 0; iVar8 = iVar8 + -1) {
        (pSVar12->projected_vertex).transformed_x = (pSVar13->projected_vertex).transformed_x;
        pSVar13 = (SRenderVertex *)&(pSVar13->projected_vertex).transformed_y;
        pSVar12 = (SRenderVertex *)&(pSVar12->projected_vertex).transformed_y;
      }
      for (iVar8 = 0; iVar8 != 0; iVar8 = iVar8 + -1) {
        *(char *)&(pSVar12->projected_vertex).transformed_x =
             (char)(pSVar13->projected_vertex).transformed_x;
        pSVar13 = (SRenderVertex *)((int)&(pSVar13->projected_vertex).transformed_x + 1);
        pSVar12 = (SRenderVertex *)((int)&(pSVar12->projected_vertex).transformed_x + 1);
      }
      vertex_indices = vertex_indices + 1;
      local_24 = local_24 + 1;
      pSVar9 = pSVar9 + 1;
    } while (local_24 < vertex_count);
  }
  return 0;
}
