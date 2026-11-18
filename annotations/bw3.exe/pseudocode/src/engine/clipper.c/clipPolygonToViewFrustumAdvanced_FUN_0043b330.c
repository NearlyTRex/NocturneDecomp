// Name: engine_clipper.c_clipPolygonToViewFrustumAdvanced_FUN_0043b330
// Address: 0043b330
// Address Range: [[0043b330, 0043b5ab] [0043b5d6, 0043b659] [0043b684, 0043b703] [0043b72e, 0043b865] [0043b8bc, 0043b8e4] [0043b93b, 0043b963] [0043b9ba, 0043ba76]]
// Convention: __cdecl
// Signature: int __cdecl engine_clipper_c_clipPolygonToViewFrustumAdvanced_FUN_0043b330(int vertex_count,int *vertex_indices)

#include "nocturne.h"

int __cdecl engine_clipper_c_clipPolygonToViewFrustumAdvanced_FUN_0043b330(int vertex_count,int *vertex_indices)

{
  uint uVar1;
  int iVar2;
  byte bVar3;
  int iVar4;
  char cVar5;
  int *piVar7;
  SRenderVertex *pSVar8;
  int iVar9;
  int iVar10;
  SRenderVertex *pSVar11;
  SRenderVertex *pSVar12;
  int iVar13;
  SRenderVertex *pSVar14;
  byte bVar15;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  uint uVar6;
  
  bVar15 = 0;
  uVar6 = 0xffffffff;
  cVar5 = -1;
  iVar9 = 0;
  iVar13 = 0;
  piVar7 = vertex_indices;
  if (0 < vertex_count) {
    do {
      uVar1 = g_SRenderVertex_ARRAY_0060b014[*piVar7].projected_vertex.screen_x;
      if ((uVar1 & 0x80000000) != 0) {
        iVar13 = iVar13 + 1;
      }
      iVar9 = iVar9 + 1;
      uVar6 = uVar6 & uVar1;
      cVar5 = (char)uVar6;
      piVar7 = piVar7 + 1;
    } while (iVar9 < vertex_count);
  }
  if ((iVar13 == vertex_count) && (cVar5 != '\0')) {
    g_ClippedVertexCount = 0;
    return 1;
  }
  if (iVar13 != 0) {
    g_InputVertexCount = vertex_count;
    g_OutputVertexCount = 0;
    g_TempVertexCount = 0;
    g_IntermediateVertexCount = 0;
    g_ClippedVertexCount = 0;
    iStack_24 = 0;
    if (0 < vertex_count) {
      pSVar8 = g_ClipperInputBuffer;
      do {
        pSVar12 = g_SRenderVertex_ARRAY_0060b014 + *vertex_indices;
        pSVar11 = pSVar8;
        for (iVar9 = 0xc; iVar9 != 0; iVar9 = iVar9 + -1) {
          (pSVar11->projected_vertex).transformed_x = (pSVar12->projected_vertex).transformed_x;
          pSVar12 = (SRenderVertex *)&(pSVar12->projected_vertex).transformed_y;
          pSVar11 = (SRenderVertex *)&(pSVar11->projected_vertex).transformed_y;
        }
        for (iVar9 = 0; iVar9 != 0; iVar9 = iVar9 + -1) {
          *(char *)&(pSVar11->projected_vertex).transformed_x =
               (char)(pSVar12->projected_vertex).transformed_x;
          pSVar12 = (SRenderVertex *)((int)&(pSVar12->projected_vertex).transformed_x + 1);
          pSVar11 = (SRenderVertex *)((int)&(pSVar11->projected_vertex).transformed_x + 1);
        }
        vertex_indices = vertex_indices + 1;
        iStack_24 = iStack_24 + 1;
        pSVar8 = pSVar8 + 1;
      } while (iStack_24 < vertex_count);
    }
    iStack_18 = 0;
    if (0 < g_InputVertexCount) {
      pSVar8 = g_ClipperInputBuffer;
      do {
        uVar6 = iStack_18 + 1;
        if (uVar6 == g_InputVertexCount) {
          uVar6 = uVar6 ^ g_InputVertexCount;
        }
        pSVar12 = g_ClipperInputBuffer + uVar6;
        bVar3 = (pSVar8->projected_vertex).transformed_z <= (pSVar8->projected_vertex).transformed_x
        ;
        if (g_ClipperInputBuffer[uVar6].projected_vertex.transformed_z <=
            (pSVar12->projected_vertex).transformed_x) {
          bVar3 = bVar3 | 2;
        }
        switch(bVar3) {
        case 0:
          pSVar12 = pSVar8;
          pSVar11 = g_ClipperOutputBuffer + g_OutputVertexCount;
          for (iVar9 = 0xc; iVar9 != 0; iVar9 = iVar9 + -1) {
            (pSVar11->projected_vertex).transformed_x = (pSVar12->projected_vertex).transformed_x;
            pSVar12 = (SRenderVertex *)((int)pSVar12 + (uint)bVar15 * -8 + 4);
            pSVar11 = (SRenderVertex *)((int)pSVar11 + ((uint)bVar15 * -2 + 1) * 4);
          }
          for (iVar9 = 0; iVar9 != 0; iVar9 = iVar9 + -1) {
            *(char *)&(pSVar11->projected_vertex).transformed_x =
                 (char)(pSVar12->projected_vertex).transformed_x;
            pSVar12 = (SRenderVertex *)((int)pSVar12 + (uint)bVar15 * -2 + 1);
            pSVar11 = (SRenderVertex *)((int)pSVar11 + (uint)bVar15 * -2 + 1);
          }
          g_OutputVertexCount = g_OutputVertexCount + 1;
          break;
        case 1:
          engine_clipper_c_interpolateVertexRightClipAdvanced_FUN_0043a8c0
                    (pSVar12,pSVar8,g_ClipperOutputBuffer + g_OutputVertexCount);
          g_OutputVertexCount = g_OutputVertexCount + 1;
          break;
        case 2:
          pSVar11 = pSVar8;
          pSVar14 = g_ClipperOutputBuffer + g_OutputVertexCount;
          for (iVar9 = 0xc; iVar9 != 0; iVar9 = iVar9 + -1) {
            (pSVar14->projected_vertex).transformed_x = (pSVar11->projected_vertex).transformed_x;
            pSVar11 = (SRenderVertex *)((int)pSVar11 + (uint)bVar15 * -8 + 4);
            pSVar14 = (SRenderVertex *)((int)pSVar14 + ((uint)bVar15 * -2 + 1) * 4);
          }
          for (iVar9 = 0; iVar9 != 0; iVar9 = iVar9 + -1) {
            *(char *)&(pSVar14->projected_vertex).transformed_x =
                 (char)(pSVar11->projected_vertex).transformed_x;
            pSVar11 = (SRenderVertex *)((int)pSVar11 + (uint)bVar15 * -2 + 1);
            pSVar14 = (SRenderVertex *)((int)pSVar14 + (uint)bVar15 * -2 + 1);
          }
          g_OutputVertexCount = g_OutputVertexCount + 1;
          engine_clipper_c_interpolateVertexRightClipAdvanced_FUN_0043a8c0
                    (pSVar8,pSVar12,g_ClipperOutputBuffer + g_OutputVertexCount);
          g_OutputVertexCount = g_OutputVertexCount + 1;
        }
        iStack_18 = iStack_18 + 1;
        pSVar8 = pSVar8 + 1;
      } while (iStack_18 < g_InputVertexCount);
    }
    if (2 < g_OutputVertexCount) {
      iStack_14 = 0;
      if (0 < g_OutputVertexCount) {
        pSVar8 = g_ClipperOutputBuffer;
        do {
          uVar6 = iStack_14 + 1;
          if (uVar6 == g_OutputVertexCount) {
            uVar6 = uVar6 ^ g_OutputVertexCount;
          }
          pSVar12 = g_ClipperOutputBuffer + uVar6;
          bVar3 = (pSVar8->projected_vertex).transformed_x <=
                  -(pSVar8->projected_vertex).transformed_z;
          if ((pSVar12->projected_vertex).transformed_x <=
              -g_ClipperOutputBuffer[uVar6].projected_vertex.transformed_z) {
            bVar3 = bVar3 | 2;
          }
          switch(bVar3) {
          case 0:
            pSVar12 = pSVar8;
            pSVar11 = g_ClipperWorkingBuffer + g_TempVertexCount;
            for (iVar9 = 0xc; iVar9 != 0; iVar9 = iVar9 + -1) {
              (pSVar11->projected_vertex).transformed_x = (pSVar12->projected_vertex).transformed_x;
              pSVar12 = (SRenderVertex *)((int)pSVar12 + (uint)bVar15 * -8 + 4);
              pSVar11 = (SRenderVertex *)((int)pSVar11 + ((uint)bVar15 * -2 + 1) * 4);
            }
            for (iVar9 = 0; iVar9 != 0; iVar9 = iVar9 + -1) {
              *(char *)&(pSVar11->projected_vertex).transformed_x =
                   (char)(pSVar12->projected_vertex).transformed_x;
              pSVar12 = (SRenderVertex *)((int)pSVar12 + (uint)bVar15 * -2 + 1);
              pSVar11 = (SRenderVertex *)((int)pSVar11 + (uint)bVar15 * -2 + 1);
            }
            g_TempVertexCount = g_TempVertexCount + 1;
            break;
          case 1:
            engine_clipper_c_interpolateVertexLeftClipAdvanced_FUN_0043a9f0
                      (pSVar12,pSVar8,g_ClipperWorkingBuffer + g_TempVertexCount);
            g_TempVertexCount = g_TempVertexCount + 1;
            break;
          case 2:
            pSVar11 = pSVar8;
            pSVar14 = g_ClipperWorkingBuffer + g_TempVertexCount;
            for (iVar9 = 0xc; iVar9 != 0; iVar9 = iVar9 + -1) {
              (pSVar14->projected_vertex).transformed_x = (pSVar11->projected_vertex).transformed_x;
              pSVar11 = (SRenderVertex *)((int)pSVar11 + (uint)bVar15 * -8 + 4);
              pSVar14 = (SRenderVertex *)((int)pSVar14 + ((uint)bVar15 * -2 + 1) * 4);
            }
            for (iVar9 = 0; iVar9 != 0; iVar9 = iVar9 + -1) {
              *(char *)&(pSVar14->projected_vertex).transformed_x =
                   (char)(pSVar11->projected_vertex).transformed_x;
              pSVar11 = (SRenderVertex *)((int)pSVar11 + (uint)bVar15 * -2 + 1);
              pSVar14 = (SRenderVertex *)((int)pSVar14 + (uint)bVar15 * -2 + 1);
            }
            g_TempVertexCount = g_TempVertexCount + 1;
            engine_clipper_c_interpolateVertexLeftClipAdvanced_FUN_0043a9f0
                      (pSVar8,pSVar12,g_ClipperWorkingBuffer + g_TempVertexCount);
            g_TempVertexCount = g_TempVertexCount + 1;
          }
          iStack_14 = iStack_14 + 1;
          pSVar8 = pSVar8 + 1;
        } while (iStack_14 < g_OutputVertexCount);
      }
      if (2 < g_TempVertexCount) {
        iStack_1c = 0;
        if (0 < g_TempVertexCount) {
          pSVar8 = g_ClipperWorkingBuffer;
          do {
            uVar6 = iStack_1c + 1;
            if (uVar6 == g_TempVertexCount) {
              uVar6 = uVar6 ^ g_TempVertexCount;
            }
            bVar3 = (pSVar8->projected_vertex).transformed_z <=
                    (pSVar8->projected_vertex).transformed_y;
            if (g_ClipperWorkingBuffer[uVar6].projected_vertex.transformed_z <=
                g_ClipperWorkingBuffer[uVar6].projected_vertex.transformed_y) {
              bVar3 = bVar3 | 2;
            }
            switch(bVar3) {
            case 0:
              pSVar12 = pSVar8;
              pSVar11 = g_ClipperIntermediateBuffer + g_IntermediateVertexCount;
              for (iVar9 = 0xc; iVar9 != 0; iVar9 = iVar9 + -1) {
                (pSVar11->projected_vertex).transformed_x =
                     (pSVar12->projected_vertex).transformed_x;
                pSVar12 = (SRenderVertex *)((int)pSVar12 + (uint)bVar15 * -8 + 4);
                pSVar11 = (SRenderVertex *)((int)pSVar11 + ((uint)bVar15 * -2 + 1) * 4);
              }
              for (iVar9 = 0; iVar9 != 0; iVar9 = iVar9 + -1) {
                *(char *)&(pSVar11->projected_vertex).transformed_x =
                     (char)(pSVar12->projected_vertex).transformed_x;
                pSVar12 = (SRenderVertex *)((int)pSVar12 + (uint)bVar15 * -2 + 1);
                pSVar11 = (SRenderVertex *)((int)pSVar11 + (uint)bVar15 * -2 + 1);
              }
              g_IntermediateVertexCount = g_IntermediateVertexCount + 1;
              break;
            case 1:
              engine_clipper_c_interpolateVertexTopClipAdvanced_FUN_0043ab20
                        (g_ClipperWorkingBuffer + uVar6,pSVar8,
                         g_ClipperIntermediateBuffer + g_IntermediateVertexCount);
              g_IntermediateVertexCount = g_IntermediateVertexCount + 1;
              break;
            case 2:
              pSVar12 = pSVar8;
              pSVar11 = g_ClipperIntermediateBuffer + g_IntermediateVertexCount;
              for (iVar9 = 0xc; iVar9 != 0; iVar9 = iVar9 + -1) {
                (pSVar11->projected_vertex).transformed_x =
                     (pSVar12->projected_vertex).transformed_x;
                pSVar12 = (SRenderVertex *)((int)pSVar12 + (uint)bVar15 * -8 + 4);
                pSVar11 = (SRenderVertex *)((int)pSVar11 + ((uint)bVar15 * -2 + 1) * 4);
              }
              for (iVar9 = 0; iVar9 != 0; iVar9 = iVar9 + -1) {
                *(char *)&(pSVar11->projected_vertex).transformed_x =
                     (char)(pSVar12->projected_vertex).transformed_x;
                pSVar12 = (SRenderVertex *)((int)pSVar12 + (uint)bVar15 * -2 + 1);
                pSVar11 = (SRenderVertex *)((int)pSVar11 + (uint)bVar15 * -2 + 1);
              }
              g_IntermediateVertexCount = g_IntermediateVertexCount + 1;
              engine_clipper_c_interpolateVertexTopClipAdvanced_FUN_0043ab20
                        (pSVar8,g_ClipperWorkingBuffer + uVar6,
                         g_ClipperIntermediateBuffer + g_IntermediateVertexCount);
              g_IntermediateVertexCount = g_IntermediateVertexCount + 1;
            }
            iStack_1c = iStack_1c + 1;
            pSVar8 = pSVar8 + 1;
          } while (iStack_1c < g_TempVertexCount);
        }
        if (2 < g_IntermediateVertexCount) {
          iStack_20 = 0;
          if (0 < g_IntermediateVertexCount) {
            pSVar8 = g_ClipperIntermediateBuffer;
            do {
              uVar6 = iStack_20 + 1;
              if (uVar6 == g_IntermediateVertexCount) {
                uVar6 = uVar6 ^ g_IntermediateVertexCount;
              }
              bVar3 = (pSVar8->projected_vertex).transformed_y <=
                      -(pSVar8->projected_vertex).transformed_z;
              if (g_ClipperIntermediateBuffer[uVar6].projected_vertex.transformed_y <=
                  -g_ClipperIntermediateBuffer[uVar6].projected_vertex.transformed_z) {
                bVar3 = bVar3 | 2;
              }
              switch(bVar3) {
              case 0:
                pSVar12 = pSVar8;
                pSVar11 = g_SRenderVertex_ARRAY_007e3e8c + g_ClippedVertexCount;
                for (iVar9 = 0xc; iVar9 != 0; iVar9 = iVar9 + -1) {
                  (pSVar11->projected_vertex).transformed_x =
                       (pSVar12->projected_vertex).transformed_x;
                  pSVar12 = (SRenderVertex *)((int)pSVar12 + (uint)bVar15 * -8 + 4);
                  pSVar11 = (SRenderVertex *)((int)pSVar11 + ((uint)bVar15 * -2 + 1) * 4);
                }
                for (iVar9 = 0; iVar9 != 0; iVar9 = iVar9 + -1) {
                  *(char *)&(pSVar11->projected_vertex).transformed_x =
                       (char)(pSVar12->projected_vertex).transformed_x;
                  pSVar12 = (SRenderVertex *)((int)pSVar12 + (uint)bVar15 * -2 + 1);
                  pSVar11 = (SRenderVertex *)((int)pSVar11 + (uint)bVar15 * -2 + 1);
                }
                g_ClippedVertexCount = g_ClippedVertexCount + 1;
                break;
              case 1:
                engine_clipper_c_interpolateVertexBottomClipAdvanced_FUN_0043ac50
                          (g_ClipperIntermediateBuffer + uVar6,pSVar8,
                           g_SRenderVertex_ARRAY_007e3e8c + g_ClippedVertexCount);
                g_ClippedVertexCount = g_ClippedVertexCount + 1;
                break;
              case 2:
                pSVar12 = pSVar8;
                pSVar11 = g_SRenderVertex_ARRAY_007e3e8c + g_ClippedVertexCount;
                for (iVar9 = 0xc; iVar9 != 0; iVar9 = iVar9 + -1) {
                  (pSVar11->projected_vertex).transformed_x =
                       (pSVar12->projected_vertex).transformed_x;
                  pSVar12 = (SRenderVertex *)((int)pSVar12 + (uint)bVar15 * -8 + 4);
                  pSVar11 = (SRenderVertex *)((int)pSVar11 + ((uint)bVar15 * -2 + 1) * 4);
                }
                for (iVar9 = 0; iVar9 != 0; iVar9 = iVar9 + -1) {
                  *(char *)&(pSVar11->projected_vertex).transformed_x =
                       (char)(pSVar12->projected_vertex).transformed_x;
                  pSVar12 = (SRenderVertex *)((int)pSVar12 + (uint)bVar15 * -2 + 1);
                  pSVar11 = (SRenderVertex *)((int)pSVar11 + (uint)bVar15 * -2 + 1);
                }
                g_ClippedVertexCount = g_ClippedVertexCount + 1;
                engine_clipper_c_interpolateVertexBottomClipAdvanced_FUN_0043ac50
                          (pSVar8,g_ClipperIntermediateBuffer + uVar6,
                           g_SRenderVertex_ARRAY_007e3e8c + g_ClippedVertexCount);
                g_ClippedVertexCount = g_ClippedVertexCount + 1;
              }
              iStack_20 = iStack_20 + 1;
              pSVar8 = pSVar8 + 1;
            } while (iStack_20 < g_IntermediateVertexCount);
          }
          if (2 < g_ClippedVertexCount) {
            pSVar8 = g_SRenderVertex_ARRAY_007e3e8c;
            iVar9 = 0;
            if (0 < g_ClippedVertexCount) {
              do {
                iVar13 = (pSVar8->projected_vertex).transformed_z;
                if (iVar13 == 0) {
                  (pSVar8->projected_vertex).transformed_z = 1;
                  (pSVar8->projected_vertex).transformed_x = 0;
                  (pSVar8->projected_vertex).transformed_y = 0;
                }
                else if (iVar13 < (pSVar8->projected_vertex).transformed_x) {
                  (pSVar8->projected_vertex).transformed_x = iVar13;
                }
                else {
                  iVar10 = (pSVar8->projected_vertex).transformed_x;
                  iVar4 = -iVar13;
                  if (-iVar10 == iVar13 || iVar4 < iVar10) {
                    iVar10 = (pSVar8->projected_vertex).transformed_z;
                    iVar2 = (pSVar8->projected_vertex).transformed_y;
                    if (iVar10 < iVar2) {
                      (pSVar8->projected_vertex).transformed_y = iVar10;
                    }
                    else if (-iVar2 != iVar13 && iVar2 <= iVar4) {
                      (pSVar8->projected_vertex).transformed_y = iVar4;
                    }
                  }
                  else {
                    (pSVar8->projected_vertex).transformed_x = iVar4;
                  }
                }
                iVar9 = iVar9 + 1;
                pSVar8 = pSVar8 + 1;
              } while (iVar9 < g_ClippedVertexCount);
            }
          }
        }
      }
    }
    return 0;
  }
  if (g_INT_01c6cee8 != 0) {
    iVar9 = 0;
    if (0 < vertex_count) {
      do {
        iVar13 = *vertex_indices;
        iVar9 = iVar9 + 1;
        vertex_indices = vertex_indices + 1;
        g_INT_ARRAY_007e4488[iVar9] = (int)(g_SRenderVertex_ARRAY_0060b014 + iVar13);
      } while (iVar9 < vertex_count);
    }
    if (g_CullingMode != 0) {
      if (vertex_count < 4) {
        iVar9 = engine_prim_c_calculateTriangleWindingOrder_FUN_00515ac0
                          (g_ClipperCullingPointers[0],g_ClipperCullingPointers[1],
                           g_ClipperCullingPointers[2]);
        if (iVar9 == 0) {
          return 1;
        }
      }
      else {
        iVar13 = 0;
        iVar9 = (vertex_count + -2) * 4;
        iVar10 = 0;
        if (0 < iVar9) {
          do {
            iVar4 = engine_prim_c_calculateTriangleWindingOrder_FUN_00515ac0
                              (g_ClipperCullingPointers[0],
                               *(SRenderVertex **)((int)g_ClipperCullingPointers + iVar13 + 4),
                               *(SRenderVertex **)((int)g_ClipperCullingPointers + iVar13 + 8));
            if (iVar4 == 0) {
              iVar10 = iVar10 + 1;
            }
            iVar13 = iVar13 + 4;
          } while (iVar13 < iVar9);
        }
        if (iVar10 == vertex_count + -2) {
          return 1;
        }
      }
    }
    g_RenderedTriangleCount = g_RenderedTriangleCount + vertex_count + -2;
    engine_special_cpp_drawPolygon2_FUN_00565c40
              (g_ClipperCullingPointers,vertex_count,g_RenderStateFlags.dword);
    return 1;
  }
  g_ClippedVertexCount = vertex_count;
  if (0 < vertex_count) {
    pSVar8 = g_SRenderVertex_ARRAY_007e3e8c;
    iStack_28 = 0;
    do {
      pSVar12 = g_SRenderVertex_ARRAY_0060b014 + *vertex_indices;
      pSVar11 = pSVar8;
      for (iVar9 = 0xc; iVar9 != 0; iVar9 = iVar9 + -1) {
        (pSVar11->projected_vertex).transformed_x = (pSVar12->projected_vertex).transformed_x;
        pSVar12 = (SRenderVertex *)&(pSVar12->projected_vertex).transformed_y;
        pSVar11 = (SRenderVertex *)&(pSVar11->projected_vertex).transformed_y;
      }
      for (iVar9 = 0; iVar9 != 0; iVar9 = iVar9 + -1) {
        *(char *)&(pSVar11->projected_vertex).transformed_x =
             (char)(pSVar12->projected_vertex).transformed_x;
        pSVar12 = (SRenderVertex *)((int)&(pSVar12->projected_vertex).transformed_x + 1);
        pSVar11 = (SRenderVertex *)((int)&(pSVar11->projected_vertex).transformed_x + 1);
      }
      vertex_indices = vertex_indices + 1;
      iStack_28 = iStack_28 + 1;
      pSVar8 = pSVar8 + 1;
    } while (iStack_28 < vertex_count);
  }
  return 0;
}
