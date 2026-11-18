// Name: engine_clipper.c_clipPolygonToViewFrustumAdvanced_FUN_00434210
// Address: 00434210
// Address Range: [[00434210, 00434957]]
// Convention: __cdecl
// Signature: int __cdecl engine_clipper_c_clipPolygonToViewFrustumAdvanced_FUN_00434210(int vertex_count,int *vertex_indices)

#include "nocturne.h"

int __cdecl engine_clipper_c_clipPolygonToViewFrustumAdvanced_FUN_00434210(int vertex_count,int *vertex_indices)

{
  uint uVar1;
  int iVar2;
  byte bVar3;
  int *piVar4;
  int iVar5;
  char cVar6;
  SRenderVertex *pSVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  SRenderVertex *pSVar12;
  SRenderVertex *pSVar13;
  SRenderVertex *pSVar14;
  byte bVar15;
  int *local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  uint uVar7;
  
  bVar15 = 0;
  uVar7 = 0xffffffff;
  cVar6 = -1;
  iVar9 = 0;
  iVar10 = 0;
  piVar4 = vertex_indices;
  if (0 < vertex_count) {
    do {
      uVar1 = g_SRenderVertex_ARRAY_005c5014[*piVar4].projected_vertex.screen_x;
      if ((uVar1 & 0x80000000) != 0) {
        iVar10 = iVar10 + 1;
      }
      iVar9 = iVar9 + 1;
      uVar7 = uVar7 & uVar1;
      cVar6 = (char)uVar7;
      piVar4 = piVar4 + 1;
    } while (iVar9 < vertex_count);
  }
  if ((iVar10 == vertex_count) && (cVar6 != '\0')) {
    g_ClippedVertexCount = 0;
    return 1;
  }
  if (iVar10 != 0) {
    g_InputVertexCount = vertex_count;
    iVar9 = 0;
    g_OutputVertexCount = 0;
    g_TempVertexCount = 0;
    g_IntermediateVertexCount = 0;
    g_ClippedVertexCount = 0;
    if (0 < vertex_count) {
      pSVar8 = g_ClipperInputBuffer;
      local_28 = vertex_indices;
      do {
        pSVar13 = g_SRenderVertex_ARRAY_005c5014 + *local_28;
        pSVar12 = pSVar8;
        for (iVar10 = 0xc; iVar10 != 0; iVar10 = iVar10 + -1) {
          (pSVar12->projected_vertex).transformed_x = (pSVar13->projected_vertex).transformed_x;
          pSVar13 = (SRenderVertex *)&(pSVar13->projected_vertex).transformed_y;
          pSVar12 = (SRenderVertex *)&(pSVar12->projected_vertex).transformed_y;
        }
        for (iVar10 = 0; iVar10 != 0; iVar10 = iVar10 + -1) {
          *(char *)&(pSVar12->projected_vertex).transformed_x =
               (char)(pSVar13->projected_vertex).transformed_x;
          pSVar13 = (SRenderVertex *)((int)&(pSVar13->projected_vertex).transformed_x + 1);
          pSVar12 = (SRenderVertex *)((int)&(pSVar12->projected_vertex).transformed_x + 1);
        }
        iVar9 = iVar9 + 1;
        local_28 = local_28 + 1;
        pSVar8 = pSVar8 + 1;
      } while (iVar9 < vertex_count);
    }
    local_14 = 0;
    if (0 < g_InputVertexCount) {
      pSVar8 = g_ClipperInputBuffer;
      do {
        uVar7 = local_14 + 1;
        if (uVar7 == g_InputVertexCount) {
          uVar7 = uVar7 ^ g_InputVertexCount;
        }
        pSVar13 = g_ClipperInputBuffer + uVar7;
        bVar3 = (pSVar8->projected_vertex).transformed_z <= (pSVar8->projected_vertex).transformed_x
        ;
        if (g_ClipperInputBuffer[uVar7].projected_vertex.transformed_z <=
            (pSVar13->projected_vertex).transformed_x) {
          bVar3 = bVar3 | 2;
        }
        switch(bVar3) {
        case 0:
          pSVar13 = pSVar8;
          pSVar12 = g_ClipperOutputBuffer + g_OutputVertexCount;
          for (iVar9 = 0xc; iVar9 != 0; iVar9 = iVar9 + -1) {
            (pSVar12->projected_vertex).transformed_x = (pSVar13->projected_vertex).transformed_x;
            pSVar13 = (SRenderVertex *)((int)pSVar13 + (uint)bVar15 * -8 + 4);
            pSVar12 = (SRenderVertex *)((int)pSVar12 + ((uint)bVar15 * -2 + 1) * 4);
          }
          for (iVar9 = 0; iVar9 != 0; iVar9 = iVar9 + -1) {
            *(char *)&(pSVar12->projected_vertex).transformed_x =
                 (char)(pSVar13->projected_vertex).transformed_x;
            pSVar13 = (SRenderVertex *)((int)pSVar13 + (uint)bVar15 * -2 + 1);
            pSVar12 = (SRenderVertex *)((int)pSVar12 + (uint)bVar15 * -2 + 1);
          }
          g_OutputVertexCount = g_OutputVertexCount + 1;
          break;
        case 1:
          engine_clipper_c_interpolateVertexRightClipAdvanced_FUN_004337a0
                    (pSVar13,pSVar8,g_ClipperOutputBuffer + g_OutputVertexCount);
          g_OutputVertexCount = g_OutputVertexCount + 1;
          break;
        case 2:
          pSVar12 = pSVar8;
          pSVar14 = g_ClipperOutputBuffer + g_OutputVertexCount;
          for (iVar9 = 0xc; iVar9 != 0; iVar9 = iVar9 + -1) {
            (pSVar14->projected_vertex).transformed_x = (pSVar12->projected_vertex).transformed_x;
            pSVar12 = (SRenderVertex *)((int)pSVar12 + (uint)bVar15 * -8 + 4);
            pSVar14 = (SRenderVertex *)((int)pSVar14 + ((uint)bVar15 * -2 + 1) * 4);
          }
          for (iVar9 = 0; iVar9 != 0; iVar9 = iVar9 + -1) {
            *(char *)&(pSVar14->projected_vertex).transformed_x =
                 (char)(pSVar12->projected_vertex).transformed_x;
            pSVar12 = (SRenderVertex *)((int)pSVar12 + (uint)bVar15 * -2 + 1);
            pSVar14 = (SRenderVertex *)((int)pSVar14 + (uint)bVar15 * -2 + 1);
          }
          g_OutputVertexCount = g_OutputVertexCount + 1;
          engine_clipper_c_interpolateVertexRightClipAdvanced_FUN_004337a0
                    (pSVar8,pSVar13,g_ClipperOutputBuffer + g_OutputVertexCount);
          g_OutputVertexCount = g_OutputVertexCount + 1;
        }
        local_14 = local_14 + 1;
        pSVar8 = pSVar8 + 1;
      } while (local_14 < g_InputVertexCount);
    }
    if (2 < g_OutputVertexCount) {
      local_20 = 0;
      if (0 < g_OutputVertexCount) {
        pSVar8 = g_ClipperOutputBuffer;
        do {
          uVar7 = local_20 + 1;
          if (uVar7 == g_OutputVertexCount) {
            uVar7 = uVar7 ^ g_OutputVertexCount;
          }
          pSVar13 = g_ClipperOutputBuffer + uVar7;
          bVar3 = (pSVar8->projected_vertex).transformed_x <=
                  -(pSVar8->projected_vertex).transformed_z;
          if ((pSVar13->projected_vertex).transformed_x <=
              -g_ClipperOutputBuffer[uVar7].projected_vertex.transformed_z) {
            bVar3 = bVar3 | 2;
          }
          switch(bVar3) {
          case 0:
            pSVar13 = pSVar8;
            pSVar12 = g_ClipperWorkingBuffer + g_TempVertexCount;
            for (iVar9 = 0xc; iVar9 != 0; iVar9 = iVar9 + -1) {
              (pSVar12->projected_vertex).transformed_x = (pSVar13->projected_vertex).transformed_x;
              pSVar13 = (SRenderVertex *)((int)pSVar13 + (uint)bVar15 * -8 + 4);
              pSVar12 = (SRenderVertex *)((int)pSVar12 + ((uint)bVar15 * -2 + 1) * 4);
            }
            for (iVar9 = 0; iVar9 != 0; iVar9 = iVar9 + -1) {
              *(char *)&(pSVar12->projected_vertex).transformed_x =
                   (char)(pSVar13->projected_vertex).transformed_x;
              pSVar13 = (SRenderVertex *)((int)pSVar13 + (uint)bVar15 * -2 + 1);
              pSVar12 = (SRenderVertex *)((int)pSVar12 + (uint)bVar15 * -2 + 1);
            }
            g_TempVertexCount = g_TempVertexCount + 1;
            break;
          case 1:
            engine_clipper_c_interpolateVertexLeftClipAdvanced_FUN_004338d0
                      (pSVar13,pSVar8,g_ClipperWorkingBuffer + g_TempVertexCount);
            g_TempVertexCount = g_TempVertexCount + 1;
            break;
          case 2:
            pSVar12 = pSVar8;
            pSVar14 = g_ClipperWorkingBuffer + g_TempVertexCount;
            for (iVar9 = 0xc; iVar9 != 0; iVar9 = iVar9 + -1) {
              (pSVar14->projected_vertex).transformed_x = (pSVar12->projected_vertex).transformed_x;
              pSVar12 = (SRenderVertex *)((int)pSVar12 + (uint)bVar15 * -8 + 4);
              pSVar14 = (SRenderVertex *)((int)pSVar14 + ((uint)bVar15 * -2 + 1) * 4);
            }
            for (iVar9 = 0; iVar9 != 0; iVar9 = iVar9 + -1) {
              *(char *)&(pSVar14->projected_vertex).transformed_x =
                   (char)(pSVar12->projected_vertex).transformed_x;
              pSVar12 = (SRenderVertex *)((int)pSVar12 + (uint)bVar15 * -2 + 1);
              pSVar14 = (SRenderVertex *)((int)pSVar14 + (uint)bVar15 * -2 + 1);
            }
            g_TempVertexCount = g_TempVertexCount + 1;
            engine_clipper_c_interpolateVertexLeftClipAdvanced_FUN_004338d0
                      (pSVar8,pSVar13,g_ClipperWorkingBuffer + g_TempVertexCount);
            g_TempVertexCount = g_TempVertexCount + 1;
          }
          local_20 = local_20 + 1;
          pSVar8 = pSVar8 + 1;
        } while (local_20 < g_OutputVertexCount);
      }
      if (2 < g_TempVertexCount) {
        local_1c = 0;
        if (0 < g_TempVertexCount) {
          pSVar8 = g_ClipperWorkingBuffer;
          do {
            uVar7 = local_1c + 1;
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
              pSVar13 = pSVar8;
              pSVar12 = g_ClipperIntermediateBuffer + g_IntermediateVertexCount;
              for (iVar9 = 0xc; iVar9 != 0; iVar9 = iVar9 + -1) {
                (pSVar12->projected_vertex).transformed_x =
                     (pSVar13->projected_vertex).transformed_x;
                pSVar13 = (SRenderVertex *)((int)pSVar13 + (uint)bVar15 * -8 + 4);
                pSVar12 = (SRenderVertex *)((int)pSVar12 + ((uint)bVar15 * -2 + 1) * 4);
              }
              for (iVar9 = 0; iVar9 != 0; iVar9 = iVar9 + -1) {
                *(char *)&(pSVar12->projected_vertex).transformed_x =
                     (char)(pSVar13->projected_vertex).transformed_x;
                pSVar13 = (SRenderVertex *)((int)pSVar13 + (uint)bVar15 * -2 + 1);
                pSVar12 = (SRenderVertex *)((int)pSVar12 + (uint)bVar15 * -2 + 1);
              }
              g_IntermediateVertexCount = g_IntermediateVertexCount + 1;
              break;
            case 1:
              engine_clipper_c_interpolateVertexTopClipAdvanced_FUN_00433a00
                        (g_ClipperWorkingBuffer + uVar7,pSVar8,
                         g_ClipperIntermediateBuffer + g_IntermediateVertexCount);
              g_IntermediateVertexCount = g_IntermediateVertexCount + 1;
              break;
            case 2:
              pSVar13 = pSVar8;
              pSVar12 = g_ClipperIntermediateBuffer + g_IntermediateVertexCount;
              for (iVar9 = 0xc; iVar9 != 0; iVar9 = iVar9 + -1) {
                (pSVar12->projected_vertex).transformed_x =
                     (pSVar13->projected_vertex).transformed_x;
                pSVar13 = (SRenderVertex *)((int)pSVar13 + (uint)bVar15 * -8 + 4);
                pSVar12 = (SRenderVertex *)((int)pSVar12 + ((uint)bVar15 * -2 + 1) * 4);
              }
              for (iVar9 = 0; iVar9 != 0; iVar9 = iVar9 + -1) {
                *(char *)&(pSVar12->projected_vertex).transformed_x =
                     (char)(pSVar13->projected_vertex).transformed_x;
                pSVar13 = (SRenderVertex *)((int)pSVar13 + (uint)bVar15 * -2 + 1);
                pSVar12 = (SRenderVertex *)((int)pSVar12 + (uint)bVar15 * -2 + 1);
              }
              g_IntermediateVertexCount = g_IntermediateVertexCount + 1;
              engine_clipper_c_interpolateVertexTopClipAdvanced_FUN_00433a00
                        (pSVar8,g_ClipperWorkingBuffer + uVar7,
                         g_ClipperIntermediateBuffer + g_IntermediateVertexCount);
              g_IntermediateVertexCount = g_IntermediateVertexCount + 1;
            }
            local_1c = local_1c + 1;
            pSVar8 = pSVar8 + 1;
          } while (local_1c < g_TempVertexCount);
        }
        if (2 < g_IntermediateVertexCount) {
          local_18 = 0;
          if (0 < g_IntermediateVertexCount) {
            pSVar8 = g_ClipperIntermediateBuffer;
            do {
              uVar7 = local_18 + 1;
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
                pSVar13 = pSVar8;
                pSVar12 = g_ClippedVertexBuffer + g_ClippedVertexCount;
                for (iVar9 = 0xc; iVar9 != 0; iVar9 = iVar9 + -1) {
                  (pSVar12->projected_vertex).transformed_x =
                       (pSVar13->projected_vertex).transformed_x;
                  pSVar13 = (SRenderVertex *)((int)pSVar13 + (uint)bVar15 * -8 + 4);
                  pSVar12 = (SRenderVertex *)((int)pSVar12 + ((uint)bVar15 * -2 + 1) * 4);
                }
                for (iVar9 = 0; iVar9 != 0; iVar9 = iVar9 + -1) {
                  *(char *)&(pSVar12->projected_vertex).transformed_x =
                       (char)(pSVar13->projected_vertex).transformed_x;
                  pSVar13 = (SRenderVertex *)((int)pSVar13 + (uint)bVar15 * -2 + 1);
                  pSVar12 = (SRenderVertex *)((int)pSVar12 + (uint)bVar15 * -2 + 1);
                }
                g_ClippedVertexCount = g_ClippedVertexCount + 1;
                break;
              case 1:
                engine_clipper_c_interpolateVertexBottomClipAdvanced_FUN_00433b30
                          (g_ClipperIntermediateBuffer + uVar7,pSVar8,
                           g_ClippedVertexBuffer + g_ClippedVertexCount);
                g_ClippedVertexCount = g_ClippedVertexCount + 1;
                break;
              case 2:
                pSVar13 = pSVar8;
                pSVar12 = g_ClippedVertexBuffer + g_ClippedVertexCount;
                for (iVar9 = 0xc; iVar9 != 0; iVar9 = iVar9 + -1) {
                  (pSVar12->projected_vertex).transformed_x =
                       (pSVar13->projected_vertex).transformed_x;
                  pSVar13 = (SRenderVertex *)((int)pSVar13 + (uint)bVar15 * -8 + 4);
                  pSVar12 = (SRenderVertex *)((int)pSVar12 + ((uint)bVar15 * -2 + 1) * 4);
                }
                for (iVar9 = 0; iVar9 != 0; iVar9 = iVar9 + -1) {
                  *(char *)&(pSVar12->projected_vertex).transformed_x =
                       (char)(pSVar13->projected_vertex).transformed_x;
                  pSVar13 = (SRenderVertex *)((int)pSVar13 + (uint)bVar15 * -2 + 1);
                  pSVar12 = (SRenderVertex *)((int)pSVar12 + (uint)bVar15 * -2 + 1);
                }
                g_ClippedVertexCount = g_ClippedVertexCount + 1;
                engine_clipper_c_interpolateVertexBottomClipAdvanced_FUN_00433b30
                          (pSVar8,g_ClipperIntermediateBuffer + uVar7,
                           g_ClippedVertexBuffer + g_ClippedVertexCount);
                g_ClippedVertexCount = g_ClippedVertexCount + 1;
              }
              local_18 = local_18 + 1;
              pSVar8 = pSVar8 + 1;
            } while (local_18 < g_IntermediateVertexCount);
          }
          if (2 < g_ClippedVertexCount) {
            pSVar8 = g_ClippedVertexBuffer;
            iVar9 = 0;
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
                  iVar11 = (pSVar8->projected_vertex).transformed_x;
                  iVar5 = -iVar10;
                  if (-iVar11 == iVar10 || iVar5 < iVar11) {
                    iVar11 = (pSVar8->projected_vertex).transformed_z;
                    iVar2 = (pSVar8->projected_vertex).transformed_y;
                    if (iVar11 < iVar2) {
                      (pSVar8->projected_vertex).transformed_y = iVar11;
                    }
                    else if (-iVar2 != iVar10 && iVar2 <= iVar5) {
                      (pSVar8->projected_vertex).transformed_y = iVar5;
                    }
                  }
                  else {
                    (pSVar8->projected_vertex).transformed_x = iVar5;
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
  if (g_UseExternalRenderer != 0) {
    iVar9 = 0;
    if (0 < vertex_count) {
      do {
        iVar10 = *vertex_indices;
        iVar9 = iVar9 + 1;
        vertex_indices = vertex_indices + 1;
        g_INT_ARRAY_00767270[iVar9] = (int)(g_SRenderVertex_ARRAY_005c5014 + iVar10);
      } while (iVar9 < vertex_count);
    }
    if (g_CullingMode != 0) {
      if (vertex_count < 4) {
        iVar9 = engine_prim_c_calculateTriangleWindingOrder_FUN_004f9a10
                          (g_SRenderVertex_PTR_00767274,g_SRenderVertex_PTR_00767278,
                           g_SRenderVertex_PTR_0076727c);
        if (iVar9 == 0) {
          return 1;
        }
      }
      else {
        iVar10 = 0;
        iVar9 = (vertex_count + -2) * 4;
        iVar11 = 0;
        if (0 < iVar9) {
          do {
            iVar5 = engine_prim_c_calculateTriangleWindingOrder_FUN_004f9a10
                              (g_SRenderVertex_PTR_00767274,
                               *(SRenderVertex **)((int)&g_SRenderVertex_PTR_00767278 + iVar10),
                               *(SRenderVertex **)((int)&g_SRenderVertex_PTR_0076727c + iVar10));
            if (iVar5 == 0) {
              iVar11 = iVar11 + 1;
            }
            iVar10 = iVar10 + 4;
          } while (iVar10 < iVar9);
        }
        if (iVar11 == vertex_count + -2) {
          return 1;
        }
      }
    }
    g_RenderedTriangleCount = g_RenderedTriangleCount + 1;
    engine_special_cpp_drawPolygon2_FUN_00532650
              (&g_SRenderVertex_PTR_00767274,vertex_count,g_RenderStateFlags.dword);
    return 1;
  }
  g_ClippedVertexCount = vertex_count;
  if (0 < vertex_count) {
    pSVar8 = g_ClippedVertexBuffer;
    local_24 = 0;
    do {
      pSVar13 = g_SRenderVertex_ARRAY_005c5014 + *vertex_indices;
      pSVar12 = pSVar8;
      for (iVar9 = 0xc; iVar9 != 0; iVar9 = iVar9 + -1) {
        (pSVar12->projected_vertex).transformed_x = (pSVar13->projected_vertex).transformed_x;
        pSVar13 = (SRenderVertex *)&(pSVar13->projected_vertex).transformed_y;
        pSVar12 = (SRenderVertex *)&(pSVar12->projected_vertex).transformed_y;
      }
      for (iVar9 = 0; iVar9 != 0; iVar9 = iVar9 + -1) {
        *(char *)&(pSVar12->projected_vertex).transformed_x =
             (char)(pSVar13->projected_vertex).transformed_x;
        pSVar13 = (SRenderVertex *)((int)&(pSVar13->projected_vertex).transformed_x + 1);
        pSVar12 = (SRenderVertex *)((int)&(pSVar12->projected_vertex).transformed_x + 1);
      }
      vertex_indices = vertex_indices + 1;
      local_24 = local_24 + 1;
      pSVar8 = pSVar8 + 1;
    } while (local_24 < vertex_count);
  }
  return 0;
}
