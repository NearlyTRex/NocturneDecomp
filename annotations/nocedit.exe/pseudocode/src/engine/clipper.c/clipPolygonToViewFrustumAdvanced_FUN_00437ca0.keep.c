// Name: engine_clipper.c_clipPolygonToViewFrustumAdvanced_FUN_00437ca0
// Address: 00437ca0
// MANUAL RECONSTRUCTION
// Address Range: [[00437ca0, 004383d7]]
// Convention: __cdecl
// Signature: int __cdecl engine_clipper_c_clipPolygonToViewFrustumAdvanced_FUN_00437ca0(int vertex_count,int *vertex_indices)

#include "nocturne.h"

int __cdecl engine_clipper_c_clipPolygonToViewFrustumAdvanced_FUN_00437ca0(int vertex_count,int *vertex_indices)

{
  int iVar1;
  byte bVar3;
  byte bVar2;
  int *piVar4;
  int iVar3;
  int iVar5;
  uint uVar4;
  char cVar6;
  int iVar8;
  SRenderVertex *pSVar9;
  SRenderVertex *pSVar5;
  int iVar6;
  int iVar7;
  int iVar10;
  int iVar11;
  SRenderVertex *pSVar8;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int iVar2;
  uint uVar1;
  uint uVar7;

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
      piVar4 = piVar4 + 1;
      iVar8 = iVar8 + 1;
      uVar7 = uVar7 & uVar1;
      cVar6 = (char)uVar7;
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
      pSVar5 = g_ClipperInputBuffer;
      do {
        *pSVar5 = g_RenderVertexBuffer[*vertex_indices];
        vertex_indices = vertex_indices + 1;
        local_28 = local_28 + 1;
        pSVar5 = pSVar5 + 1;
      } while (local_28 < vertex_count);
    }
    local_20 = 0;
    if (0 < g_InputVertexCount) {
      pSVar5 = g_ClipperInputBuffer;
      do {
        uVar4 = local_20 + 1;
        if (uVar4 == g_InputVertexCount) {
          uVar4 = uVar4 ^ g_InputVertexCount;
        }
        pSVar8 = g_ClipperInputBuffer + uVar4;
        bVar3 = (pSVar5->projected_vertex).transformed_z <= (pSVar5->projected_vertex).transformed_x
        ;
        if (g_ClipperInputBuffer[uVar4].projected_vertex.transformed_z <=
            (pSVar8->projected_vertex).transformed_x) {
          bVar3 = bVar3 | 2;
        }
        switch(bVar3) {
        case 0:
          g_ClipperOutputBuffer[g_OutputVertexCount] = *pSVar5;
          g_OutputVertexCount = g_OutputVertexCount + 1;
          break;
        case 1:
          engine_clipper_c_interpolateVertexLeftClipAdvanced_FUN_00437230
                    (pSVar8,pSVar5,g_ClipperOutputBuffer + g_OutputVertexCount);
          g_OutputVertexCount = g_OutputVertexCount + 1;
          break;
        case 2:
          g_ClipperOutputBuffer[g_OutputVertexCount] = *pSVar5;
          g_OutputVertexCount = g_OutputVertexCount + 1;
          engine_clipper_c_interpolateVertexLeftClipAdvanced_FUN_00437230
                    (pSVar5,pSVar8,g_ClipperOutputBuffer + g_OutputVertexCount);
          g_OutputVertexCount = g_OutputVertexCount + 1;
        }
        local_20 = local_20 + 1;
        pSVar5 = pSVar5 + 1;
      } while (local_20 < g_InputVertexCount);
    }
    if (2 < g_OutputVertexCount) {
      local_1c = 0;
      if (0 < g_OutputVertexCount) {
        pSVar5 = g_ClipperOutputBuffer;
        do {
          uVar4 = local_1c + 1;
          if (uVar4 == g_OutputVertexCount) {
            uVar4 = uVar4 ^ g_OutputVertexCount;
          }
          pSVar8 = g_ClipperOutputBuffer + uVar4;
          bVar2 = (pSVar5->projected_vertex).transformed_x <=
                  -(pSVar5->projected_vertex).transformed_z;
          if ((pSVar8->projected_vertex).transformed_x <=
              -g_ClipperOutputBuffer[uVar4].projected_vertex.transformed_z) {
            bVar2 = bVar2 | 2;
          }
          switch(bVar2) {
          case 0:
            g_ClipperWorkingBuffer[g_TempVertexCount] = *pSVar5;
            g_TempVertexCount = g_TempVertexCount + 1;
            break;
          case 1:
            engine_clipper_c_interpolateVertexRightClipAdvanced_FUN_00437360
                      (pSVar8,pSVar5,g_ClipperWorkingBuffer + g_TempVertexCount);
            g_TempVertexCount = g_TempVertexCount + 1;
            break;
          case 2:
            g_ClipperWorkingBuffer[g_TempVertexCount] = *pSVar5;
            g_TempVertexCount = g_TempVertexCount + 1;
            engine_clipper_c_interpolateVertexRightClipAdvanced_FUN_00437360
                      (pSVar5,pSVar8,g_ClipperWorkingBuffer + g_TempVertexCount);
            g_TempVertexCount = g_TempVertexCount + 1;
          }
          local_1c = local_1c + 1;
          pSVar5 = pSVar5 + 1;
        } while (local_1c < g_OutputVertexCount);
      }
      if (2 < g_TempVertexCount) {
        local_14 = 0;
        if (0 < g_TempVertexCount) {
          pSVar5 = g_ClipperWorkingBuffer;
          do {
            uVar4 = local_14 + 1;
            if (uVar4 == g_TempVertexCount) {
              uVar4 = uVar4 ^ g_TempVertexCount;
            }
            bVar2 = (pSVar5->projected_vertex).transformed_z <=
                    (pSVar5->projected_vertex).transformed_y;
            if (g_ClipperWorkingBuffer[uVar4].projected_vertex.transformed_z <=
                g_ClipperWorkingBuffer[uVar4].projected_vertex.transformed_y) {
              bVar2 = bVar2 | 2;
            }
            switch(bVar2) {
            case 0:
              g_ClipperIntermediateBuffer[g_IntermediateVertexCount] = *pSVar5;
              g_IntermediateVertexCount = g_IntermediateVertexCount + 1;
              break;
            case 1:
              engine_clipper_c_interpolateVertexBottomClipAdvanced_FUN_00437490
                        (g_ClipperWorkingBuffer + uVar4,pSVar5,
                         g_ClipperIntermediateBuffer + g_IntermediateVertexCount);
              g_IntermediateVertexCount = g_IntermediateVertexCount + 1;
              break;
            case 2:
              g_ClipperIntermediateBuffer[g_IntermediateVertexCount] = *pSVar5;
              g_IntermediateVertexCount = g_IntermediateVertexCount + 1;
              engine_clipper_c_interpolateVertexBottomClipAdvanced_FUN_00437490
                        (pSVar5,g_ClipperWorkingBuffer + uVar4,
                         g_ClipperIntermediateBuffer + g_IntermediateVertexCount);
              g_IntermediateVertexCount = g_IntermediateVertexCount + 1;
            }
            local_14 = local_14 + 1;
            pSVar5 = pSVar5 + 1;
          } while (local_14 < g_TempVertexCount);
        }
        if (2 < g_IntermediateVertexCount) {
          local_18 = 0;
          if (0 < g_IntermediateVertexCount) {
            pSVar5 = g_ClipperIntermediateBuffer;
            do {
              uVar4 = local_18 + 1;
              if (uVar4 == g_IntermediateVertexCount) {
                uVar4 = uVar4 ^ g_IntermediateVertexCount;
              }
              bVar2 = (pSVar5->projected_vertex).transformed_y <=
                      -(pSVar5->projected_vertex).transformed_z;
              if (g_ClipperIntermediateBuffer[uVar4].projected_vertex.transformed_y <=
                  -g_ClipperIntermediateBuffer[uVar4].projected_vertex.transformed_z) {
                bVar2 = bVar2 | 2;
              }
              switch(bVar2) {
              case 0:
                g_ClippedVertexBuffer[g_ClippedVertexCount] = *pSVar5;
                g_ClippedVertexCount = g_ClippedVertexCount + 1;
                break;
              case 1:
                engine_clipper_c_interpolateVertexTopClipAdvanced_FUN_004375c0
                          (g_ClipperIntermediateBuffer + uVar4,pSVar5,
                           g_ClippedVertexBuffer + g_ClippedVertexCount);
                g_ClippedVertexCount = g_ClippedVertexCount + 1;
                break;
              case 2:
                g_ClippedVertexBuffer[g_ClippedVertexCount] = *pSVar5;
                g_ClippedVertexCount = g_ClippedVertexCount + 1;
                engine_clipper_c_interpolateVertexTopClipAdvanced_FUN_004375c0
                          (pSVar5,g_ClipperIntermediateBuffer + uVar4,
                           g_ClippedVertexBuffer + g_ClippedVertexCount);
                g_ClippedVertexCount = g_ClippedVertexCount + 1;
              }
              local_18 = local_18 + 1;
              pSVar5 = pSVar5 + 1;
            } while (local_18 < g_IntermediateVertexCount);
          }
          if (2 < g_ClippedVertexCount) {
            pSVar5 = g_ClippedVertexBuffer;
            iVar3 = 0;
            if (0 < g_ClippedVertexCount) {
              do {
                iVar7 = (pSVar5->projected_vertex).transformed_z;
                if (iVar7 == 0) {
                  (pSVar5->projected_vertex).transformed_z = 1;
                  (pSVar5->projected_vertex).transformed_x = 0;
                  (pSVar5->projected_vertex).transformed_y = 0;
                }
                else if (iVar7 < (pSVar5->projected_vertex).transformed_x) {
                  (pSVar5->projected_vertex).transformed_x = iVar7;
                }
                else {
                  iVar1 = (pSVar5->projected_vertex).transformed_x;
                  iVar6 = -iVar7;
                  if (-iVar1 == iVar7 || iVar6 < iVar1) {
                    iVar1 = (pSVar5->projected_vertex).transformed_z;
                    iVar2 = (pSVar5->projected_vertex).transformed_y;
                    if (iVar1 < iVar2) {
                      (pSVar5->projected_vertex).transformed_y = iVar1;
                    }
                    else if (-iVar2 != iVar7 && iVar2 <= iVar6) {
                      (pSVar5->projected_vertex).transformed_y = iVar6;
                    }
                  }
                  else {
                    (pSVar5->projected_vertex).transformed_x = iVar6;
                  }
                }
                iVar3 = iVar3 + 1;
                pSVar5 = pSVar5 + 1;
              } while (iVar3 < g_ClippedVertexCount);
            }
          }
        }
      }
    }
    return 0;
  }
  if (g_UseExternalRenderer != 0) {
    iVar3 = 0;
    if (0 < vertex_count) {
      do {
        iVar7 = *vertex_indices;
        iVar3 = iVar3 + 1;
        vertex_indices = vertex_indices + 1;
        g_ClipperCullingPointers[iVar3 + -1] = g_RenderVertexBuffer + iVar7;
      } while (iVar3 < vertex_count);
    }
    if (g_CullingMode != 0) {
      if (vertex_count < 4) {
        iVar3 = engine_prim_c_calculateTriangleWindingOrder_FUN_00552150
                          (g_ClipperCullingPointers[0],g_ClipperCullingPointers[1],
                           g_ClipperCullingPointers[2]);
        if (iVar3 == 0) {
          return 1;
        }
      }
      else {
        iVar7 = 0;
        iVar11 = 0;
        if (0 < vertex_count + -2) {
          do {
            iVar5 = engine_prim_c_calculateTriangleWindingOrder_FUN_00552150
                              (g_ClipperCullingPointers[0],
                               g_ClipperCullingPointers[iVar7 + 1],
                               g_ClipperCullingPointers[iVar7 + 2]);
            if (iVar5 == 0) {
              iVar11 = iVar11 + 1;
            }
            iVar7 = iVar7 + 1;
          } while (iVar7 < vertex_count + -2);
        }
        if (iVar11 == vertex_count + -2) {
          return 1;
        }
      }
    }
    g_RenderedTriangleCount = g_RenderedTriangleCount + vertex_count + -2;
    engine_special_cpp_drawPolygon2_FUN_005b7610
              (g_ClipperCullingPointers,vertex_count,g_RenderStateFlags.dword);
    return 1;
  }
  g_ClippedVertexCount = vertex_count;
  if (0 < vertex_count) {
    pSVar9 = g_ClippedVertexBuffer;
    local_24 = 0;
    do {
      *pSVar9 = g_RenderVertexBuffer[*vertex_indices];
      vertex_indices = vertex_indices + 1;
      local_24 = local_24 + 1;
      pSVar9 = pSVar9 + 1;
    } while (local_24 < vertex_count);
  }
  return 0;
}
