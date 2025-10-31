// Name: engine_clipper.c_clipPolygonToViewFrustumAdvanced_FUN_00437ca0
// Address: 00437ca0
// Address Range: [[00437ca0, 004383d7]]
// Convention: __cdecl
// Signature: int engine_clipper.c_clipPolygonToViewFrustumAdvanced_FUN_00437ca0(int vertex_count, int * vertex_indices)
// Globals:
//   void* switchdataD_00437c5c = 00437f0c
//   void* PTR_caseD_3_00437c68 = 00437f36
//   void* PTR_caseD_1_00437c70 = 0043821d
//   void* PTR_caseD_3_00437c78 = 00437fe5
//   void* switchdataD_00437c7c = 00438065
//   void* PTR_caseD_3_00437c88 = 0043808f
//   void* PTR_caseD_1_00437c90 = 0043831b
//   void* PTR_caseD_3_00437c98 = 0043813f
//   SRenderVertex[16] g_RenderVertexBuffer
//   undefined4 g_RenderVertexBuffer[0].projected_vertex.transformed_y
//   undefined4 g_RenderVertexBuffer[0].projected_vertex.screen_x
//   int g_CullingMode
//   int g_ClippedVertexCount
//   SRenderVertex[16] g_ClippedVertexBuffer
//   undefined4 DAT_00824e2c
//   undefined4 g_ClippedVertexBuffer[0].projected_vertex.transformed_z
//   undefined4 DAT_00824e58
//   undefined4 DAT_00824e5c
//   undefined4 DAT_00824e60
//   SRenderVertex*[16] g_ClipperCullingPointers
//   undefined4 g_ClipperCullingPointers[1]
//   undefined4 g_ClipperCullingPointers[2]
//   undefined4 g_ClipperCullingPointers[3]
//   int g_InputVertexCount
//   int g_OutputVertexCount
//   int g_TempVertexCount
//   int g_IntermediateVertexCount
//   SRenderVertex[16] g_ClipperOutputBuffer
//   undefined4 DAT_00825d04
//   undefined4 g_ClipperOutputBuffer[0].projected_vertex.transformed_z
//   undefined4 g_ClipperOutputBuffer[1].projected_vertex.transformed_x
//   undefined4 DAT_00825d38
//   SRenderVertex[16] g_ClipperInputBuffer
//   undefined4 DAT_00826304
//   undefined4 g_ClipperInputBuffer[0].projected_vertex.transformed_z
//   undefined4 g_ClipperInputBuffer[1].projected_vertex.transformed_x
//   undefined4 DAT_00826334
//   SRenderVertex[16] g_ClipperWorkingBuffer
//   undefined4 g_ClipperWorkingBuffer[0].projected_vertex.transformed_y
//   undefined4 DAT_00826908
//   undefined4 g_ClipperWorkingBuffer[1].projected_vertex.transformed_x
//   undefined4 DAT_00826934
//   undefined4 DAT_00826938
//   SRenderVertex[16] g_ClipperIntermediateBuffer
//   undefined4 DAT_00826f04
//   undefined4 g_ClipperIntermediateBuffer[0].projected_vertex.transformed_z
//   undefined4 DAT_00826f30
//   undefined4 DAT_00826f34
//   undefined4 DAT_00826f38
//   int g_UseExternalRenderer
//   int g_RenderStateFlags
//   int g_RenderedTriangleCount
// Function calls:
//   engine_clipper.c_interpolateVertexBottomClipAdvanced_FUN_00437490
//   engine_clipper.c_interpolateVertexLeftClipAdvanced_FUN_00437230
//   engine_clipper.c_interpolateVertexRightClipAdvanced_FUN_00437360
//   engine_clipper.c_interpolateVertexTopClipAdvanced_FUN_004375c0
//   engine_prim.c_calculateTriangleWindingOrder_FUN_00552150
//   wincore_windll.cpp_drawPolygon2_FUN_005b7610

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
          } while (SBORROW4(iVar10,iVar8) != iVar10 + (vertex_count + -2) * -4 < 0);
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


// Assembly code:
// 00437ca0: PUSH EBX
//   Label: engine_clipper.c_clipPolygonToViewFrustumAdvanced_FUN_00437ca0
// 00437ca1: PUSH ESI
// 00437ca2: PUSH EDI
// 00437ca3: PUSH EBP
// 00437ca4: SUB ESP,0x1c
// 00437ca7: MOV EBP,dword ptr [ESP + 0x30]
//   XREF to: Stack[0x4] (READ)
// 00437cab: MOV ECX,0xffffffff
// 00437cb0: XOR EDX,EDX
// 00437cb2: XOR ESI,ESI
// 00437cb4: TEST EBP,EBP
// 00437cb6: JLE 0x00437cd8
//   XREF to: 00437cd8 (CONDITIONAL_JUMP)
// 00437cb8: MOV EAX,dword ptr [ESP + 0x34]
//   XREF to: Stack[0x8] (READ)
// 00437cbc: IMUL EBX,dword ptr [EAX],0x30
//   Label: LAB_00437cbc
// 00437cbf: MOV EBX,dword ptr [EBX + 0x688024]
//   XREF to: 00688024 (DATA)
// 00437cc5: TEST EBX,0x80000000
// 00437ccb: JZ 0x00437cce
//   XREF to: 00437cce (CONDITIONAL_JUMP)
// 00437ccd: INC ESI
// 00437cce: ADD EAX,0x4
//   Label: LAB_00437cce
// 00437cd1: INC EDX
// 00437cd2: AND ECX,EBX
// 00437cd4: CMP EDX,EBP
// 00437cd6: JL 0x00437cbc
//   XREF to: 00437cbc (CONDITIONAL_JUMP)
// 00437cd8: CMP ESI,EBP
//   Label: LAB_00437cd8
// 00437cda: JNZ 0x00437ce5
//   XREF to: 00437ce5 (CONDITIONAL_JUMP)
// 00437cdc: TEST CL,0xff
// 00437cdf: JNZ 0x00437d81
//   XREF to: 00437d81 (CONDITIONAL_JUMP)
// 00437ce5: TEST ESI,ESI
//   Label: LAB_00437ce5
// 00437ce7: JNZ 0x00437e4a
//   XREF to: 00437e4a (CONDITIONAL_JUMP)
// 00437ced: CMP dword ptr [0x02d03e94],0x0
//   XREF to: 02d03e94 (READ)
// 00437cf4: JZ 0x00437df3
//   XREF to: 00437df3 (CONDITIONAL_JUMP)
// 00437cfa: XOR EAX,EAX
// 00437cfc: TEST EBP,EBP
// 00437cfe: JLE 0x00437d20
//   XREF to: 00437d20 (CONDITIONAL_JUMP)
// 00437d00: MOV EBX,dword ptr [ESP + 0x34]
//   XREF to: Stack[0x8] (READ)
// 00437d04: IMUL EDX,dword ptr [EBX],0x30
//   Label: LAB_00437d04
// 00437d07: INC EAX
// 00437d08: ADD EDX,0x688014
//   XREF to: 00688014 (DATA)
// 00437d0e: ADD EBX,0x4
// 00437d11: MOV dword ptr [EAX*0x4 + 0x825424],EDX
//   XREF to: 00825428 (WRITE)
//   XREF to: 0082542c (WRITE)
// 00437d18: CMP EAX,EBP
// 00437d1a: JL 0x00437d04
//   XREF to: 00437d04 (CONDITIONAL_JUMP)
// 00437d1c: LEA EAX,[EAX]
// 00437d20: CMP dword ptr [0x00772a7c],0x0
//   Label: LAB_00437d20
//   XREF to: 00772a7c (READ)
// 00437d27: JZ 0x00437dc0
//   XREF to: 00437dc0 (CONDITIONAL_JUMP)
// 00437d2d: CMP EBP,0x3
// 00437d30: JLE 0x00437d93
//   XREF to: 00437d93 (CONDITIONAL_JUMP)
// 00437d32: LEA EAX,[EBP + -0x2]
// 00437d35: XOR EBX,EBX
// 00437d37: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x2c] (DATA)
// 00437d3a: LEA EDI,[EAX*0x4 + 0x0]
// 00437d41: XOR ESI,ESI
// 00437d43: TEST EDI,EDI
// 00437d45: JLE 0x00437d6f
//   XREF to: 00437d6f (CONDITIONAL_JUMP)
// 00437d47: MOV EAX,dword ptr [EBX + 0x825430]
//   Label: LAB_00437d47
//   XREF to: 00825430 (READ)
//   XREF to: 00825434 (READ)
// 00437d4d: PUSH EAX
// 00437d4e: MOV EDX,dword ptr [EBX + 0x82542c]
//   XREF to: 0082542c (READ)
//   XREF to: 00825430 (READ)
// 00437d54: PUSH EDX
// 00437d55: MOV ECX,dword ptr [0x00825428]
//   XREF to: 00825428 (READ)
// 00437d5b: PUSH ECX
// 00437d5c: CALL engine_prim.c_calculateTriangleWindingOrder_FUN_00552150
//   XREF to: 00552150 (UNCONDITIONAL_CALL)
// 00437d61: ADD ESP,0xc
// 00437d64: TEST EAX,EAX
// 00437d66: JZ 0x00437d90
//   XREF to: 00437d90 (CONDITIONAL_JUMP)
// 00437d68: ADD EBX,0x4
//   Label: LAB_00437d68
// 00437d6b: CMP EBX,EDI
// 00437d6d: JL 0x00437d47
//   XREF to: 00437d47 (CONDITIONAL_JUMP)
// 00437d6f: CMP ESI,dword ptr [ESP]
//   Label: LAB_00437d6f
//   XREF to: Stack[-0x2c] (DATA)
// 00437d72: JNZ 0x00437dc0
//   XREF to: 00437dc0 (CONDITIONAL_JUMP)
// 00437d74: MOV EAX,0x1
// 00437d79: ADD ESP,0x1c
//   Label: LAB_00437d79
// 00437d7c: POP EBP
// 00437d7d: POP EDI
// 00437d7e: POP ESI
// 00437d7f: POP EBX
// 00437d80: RET
// 00437d81: XOR ECX,ECX
//   Label: LAB_00437d81
// 00437d83: MOV EAX,0x1
// 00437d88: MOV dword ptr [0x00824e24],ECX
//   XREF to: 00824e24 (WRITE)
// 00437d8e: JMP 0x00437d79
//   XREF to: 00437d79 (UNCONDITIONAL_JUMP)
// 00437d90: INC ESI
//   Label: LAB_00437d90
// 00437d91: JMP 0x00437d68
//   XREF to: 00437d68 (UNCONDITIONAL_JUMP)
// 00437d93: MOV EAX,[0x00825430]
//   Label: LAB_00437d93
//   XREF to: 00825430 (READ)
// 00437d98: PUSH EAX
// 00437d99: MOV EDX,dword ptr [0x0082542c]
//   XREF to: 0082542c (READ)
// 00437d9f: PUSH EDX
// 00437da0: MOV ECX,dword ptr [0x00825428]
//   XREF to: 00825428 (READ)
// 00437da6: PUSH ECX
// 00437da7: CALL engine_prim.c_calculateTriangleWindingOrder_FUN_00552150
//   XREF to: 00552150 (UNCONDITIONAL_CALL)
// 00437dac: ADD ESP,0xc
// 00437daf: TEST EAX,EAX
// 00437db1: JNZ 0x00437dc0
//   XREF to: 00437dc0 (CONDITIONAL_JUMP)
// 00437db3: MOV EAX,0x1
// 00437db8: ADD ESP,0x1c
// 00437dbb: POP EBP
// 00437dbc: POP EDI
// 00437dbd: POP ESI
// 00437dbe: POP EBX
// 00437dbf: RET
// 00437dc0: MOV ESI,dword ptr [0x02d052a0]
//   Label: LAB_00437dc0
//   XREF to: 02d052a0 (READ)
// 00437dc6: PUSH ESI
// 00437dc7: LEA EAX,[EBP + -0x2]
// 00437dca: MOV EBX,dword ptr [0x030e56b8]
//   XREF to: 030e56b8 (READ)
// 00437dd0: PUSH EBP
// 00437dd1: ADD EBX,EAX
// 00437dd3: PUSH 0x825428
//   XREF to: 00825428 (DATA)
// 00437dd8: MOV dword ptr [0x030e56b8],EBX
//   XREF to: 030e56b8 (WRITE)
// 00437dde: CALL wincore_windll.cpp_drawPolygon2_FUN_005b7610
//   XREF to: 005b7610 (UNCONDITIONAL_CALL)
// 00437de3: MOV EAX,0x1
// 00437de8: ADD ESP,0xc
// 00437deb: ADD ESP,0x1c
// 00437dee: POP EBP
// 00437def: POP EDI
// 00437df0: POP ESI
// 00437df1: POP EBX
// 00437df2: RET
// 00437df3: MOV dword ptr [ESP + 0x8],ESI
//   Label: LAB_00437df3
//   XREF to: Stack[-0x24] (WRITE)
// 00437df7: MOV dword ptr [0x00824e24],EBP
//   XREF to: 00824e24 (WRITE)
// 00437dfd: TEST EBP,EBP
// 00437dff: JLE 0x00437e40
//   XREF to: 00437e40 (CONDITIONAL_JUMP)
// 00437e01: MOV EBX,dword ptr [ESP + 0x34]
//   XREF to: Stack[0x8] (READ)
// 00437e05: MOV EDX,0x824e28
//   XREF to: 00824e28 (DATA)
// 00437e0a: IMUL ESI,dword ptr [EBX],0x30
//   Label: LAB_00437e0a
// 00437e0d: MOV ECX,0x30
// 00437e12: ADD ESI,0x688014
//   XREF to: 00688014 (DATA)
// 00437e18: MOV EDI,EDX
// 00437e1a: PUSH EDI
//   XREF to: 00824e28 (DATA)
//   XREF to: 00824e58 (DATA)
// 00437e1b: MOV EAX,ECX
// 00437e1d: SHR ECX,0x2
// 00437e20: MOVSD.REP ES:EDI,ESI
//   XREF to: 00688014 (DATA)
//   XREF to: 00824e28 (WRITE)
//   XREF to: 00688018 (DATA)
//   XREF to: 00824e2c (WRITE)
//   XREF to: 00824e58 (WRITE)
// 00437e22: MOV CL,AL
// 00437e24: AND CL,0x3
// 00437e27: MOVSB.REP ES:EDI,ESI
//   XREF to: 00688018 (DATA)
//   XREF to: 00824e2c (WRITE)
// 00437e29: POP EDI
// 00437e2a: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x24] (READ)
// 00437e2e: ADD EBX,0x4
// 00437e31: INC EAX
// 00437e32: ADD EDX,0x30
// 00437e35: MOV dword ptr [ESP + 0x8],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 00437e39: CMP EBP,EAX
// 00437e3b: JG 0x00437e0a
//   XREF to: 00437e0a (CONDITIONAL_JUMP)
// 00437e3d: LEA EAX,[EAX]
// 00437e40: XOR EAX,EAX
//   Label: LAB_00437e40
// 00437e42: ADD ESP,0x1c
// 00437e45: POP EBP
// 00437e46: POP EDI
// 00437e47: POP ESI
// 00437e48: POP EBX
// 00437e49: RET
// 00437e4a: XOR EDX,EDX
//   Label: LAB_00437e4a
// 00437e4c: MOV dword ptr [0x00825cf0],EBP
//   XREF to: 00825cf0 (WRITE)
// 00437e52: MOV dword ptr [0x00825cf4],EDX
//   XREF to: 00825cf4 (WRITE)
// 00437e58: MOV dword ptr [0x00825cf8],EDX
//   XREF to: 00825cf8 (WRITE)
// 00437e5e: MOV dword ptr [0x00825cfc],EDX
//   XREF to: 00825cfc (WRITE)
// 00437e64: MOV dword ptr [0x00824e24],EDX
//   XREF to: 00824e24 (WRITE)
// 00437e6a: MOV dword ptr [ESP + 0x4],EDX
//   XREF to: Stack[-0x28] (WRITE)
// 00437e6e: TEST EBP,EBP
// 00437e70: JLE 0x00437eb0
//   XREF to: 00437eb0 (CONDITIONAL_JUMP)
// 00437e72: MOV EBX,dword ptr [ESP + 0x34]
//   XREF to: Stack[0x8] (READ)
// 00437e76: MOV EDX,0x826300
//   XREF to: 00826300 (DATA)
// 00437e7b: IMUL ESI,dword ptr [EBX],0x30
//   Label: LAB_00437e7b
// 00437e7e: MOV ECX,0x30
// 00437e83: MOV EDI,EDX
// 00437e85: ADD ESI,0x688014
//   XREF to: 00688014 (DATA)
// 00437e8b: PUSH EDI
//   XREF to: 00826300 (DATA)
//   XREF to: 00826330 (DATA)
// 00437e8c: MOV EAX,ECX
// 00437e8e: SHR ECX,0x2
// 00437e91: MOVSD.REP ES:EDI,ESI
//   XREF to: 00688014 (DATA)
//   XREF to: 00826300 (WRITE)
//   XREF to: 00688018 (DATA)
//   XREF to: 00826304 (WRITE)
//   XREF to: 00826330 (WRITE)
// 00437e93: MOV CL,AL
// 00437e95: AND CL,0x3
// 00437e98: MOVSB.REP ES:EDI,ESI
//   XREF to: 00688018 (DATA)
//   XREF to: 00826304 (WRITE)
// 00437e9a: POP EDI
// 00437e9b: MOV ECX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x28] (READ)
// 00437e9f: ADD EBX,0x4
// 00437ea2: INC ECX
// 00437ea3: ADD EDX,0x30
// 00437ea6: MOV dword ptr [ESP + 0x4],ECX
//   XREF to: Stack[-0x28] (WRITE)
// 00437eaa: CMP EBP,ECX
// 00437eac: JG 0x00437e7b
//   XREF to: 00437e7b (CONDITIONAL_JUMP)
// 00437eae: MOV EAX,EAX
// 00437eb0: XOR EDI,EDI
//   Label: LAB_00437eb0
// 00437eb2: MOV EBP,dword ptr [0x00825cf0]
//   XREF to: 00825cf0 (READ)
// 00437eb8: MOV dword ptr [ESP + 0xc],EDI
//   XREF to: Stack[-0x20] (WRITE)
// 00437ebc: TEST EBP,EBP
// 00437ebe: JLE 0x00437f50
//   XREF to: 00437f50 (CONDITIONAL_JUMP)
// 00437ec4: MOV EBX,0x826300
//   XREF to: 00826300 (DATA)
// 00437ec9: MOV EAX,dword ptr [ESP + 0xc]
//   Label: engine_clipper.c_clipToFrustumFull_FUN_00437ec9
//   XREF to: Stack[-0x20] (READ)
// 00437ecd: MOV EDI,dword ptr [0x00825cf0]
//   XREF to: 00825cf0 (READ)
// 00437ed3: INC EAX
// 00437ed4: CMP EAX,EDI
// 00437ed6: JNZ 0x00437eda
//   XREF to: 00437eda (CONDITIONAL_JUMP)
// 00437ed8: XOR EAX,EDI
// 00437eda: IMUL EAX,EAX,0x30
//   Label: LAB_00437eda
// 00437edd: MOV EBP,0x826300
//   XREF to: 00826300 (DATA)
// 00437ee2: MOV EDX,EBX
// 00437ee4: MOV ECX,dword ptr [EBX]
//   XREF to: 00826300 (READ)
//   XREF to: 00826330 (READ)
// 00437ee6: MOV ESI,dword ptr [EBX + 0x8]
//   XREF to: 00826308 (READ)
//   XREF to: 00826338 (READ)
// 00437ee9: ADD EBP,EAX
// 00437eeb: XOR EAX,EAX
// 00437eed: CMP ECX,ESI
// 00437eef: JL 0x00437ef6
//   XREF to: 00437ef6 (CONDITIONAL_JUMP)
// 00437ef1: MOV EAX,0x1
// 00437ef6: MOV EDI,dword ptr [EBP + 0x8]
//   Label: LAB_00437ef6
//   XREF to: 00826308 (DATA)
// 00437ef9: CMP EDI,dword ptr [EBP]
//   XREF to: 00826300 (DATA)
// 00437efc: JG 0x00437f00
//   XREF to: 00437f00 (CONDITIONAL_JUMP)
// 00437efe: OR AL,0x2
// 00437f00: CMP EAX,0x3
//   Label: LAB_00437f00
// 00437f03: JA 0x00437f36
//   XREF to: 00437f36 (CONDITIONAL_JUMP)
// 00437f05: JMP dword ptr [EAX*0x4 + 0x437c5c]
//   Label: switchD
//   XREF to: 00437f0c (COMPUTED_JUMP)
//   XREF to: 0043819e (COMPUTED_JUMP)
//   XREF to: 004381c7 (COMPUTED_JUMP)
//   XREF to: 00437f36 (COMPUTED_JUMP)
//   XREF to: 00437c68 (READ)
//   XREF to: 00437c5c (READ)
// 00437f0c: IMUL EDI,dword ptr [0x00825cf4],0x30
//   Label: caseD_0
//   XREF to: 00825cf4 (READ)
// 00437f13: MOV ECX,0x30
// 00437f18: MOV ESI,EDX
// 00437f1a: ADD EDI,0x825d00
//   XREF to: 00825d00 (DATA)
// 00437f20: PUSH EDI
//   XREF to: 00825d00 (DATA)
// 00437f21: MOV EAX,ECX
// 00437f23: SHR ECX,0x2
// 00437f26: MOVSD.REP ES:EDI,ESI
//   XREF to: 00826330 (READ)
//   XREF to: 00825d00 (WRITE)
//   XREF to: 00826334 (READ)
//   XREF to: 00825d04 (WRITE)
// 00437f28: MOV CL,AL
// 00437f2a: AND CL,0x3
// 00437f2d: MOVSB.REP ES:EDI,ESI
//   XREF to: 00826334 (READ)
//   XREF to: 00825d04 (WRITE)
// 00437f2f: POP EDI
// 00437f30: INC dword ptr [0x00825cf4]
//   XREF to: 00825cf4 (READ_WRITE)
// 00437f36: MOV EAX,dword ptr [ESP + 0xc]
//   Label: caseD_3
//   XREF to: Stack[-0x20] (READ)
// 00437f3a: MOV EDX,dword ptr [0x00825cf0]
//   XREF to: 00825cf0 (READ)
// 00437f40: INC EAX
// 00437f41: ADD EBX,0x30
// 00437f44: MOV dword ptr [ESP + 0xc],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 00437f48: CMP EAX,EDX
// 00437f4a: JL 0x00437ec9
//   XREF to: 00437ec9 (CONDITIONAL_JUMP)
// 00437f50: MOV ECX,dword ptr [0x00825cf4]
//   Label: LAB_00437f50
//   XREF to: 00825cf4 (READ)
// 00437f56: CMP ECX,0x3
// 00437f59: JL 0x00438194
//   XREF to: 00438194 (CONDITIONAL_JUMP)
// 00437f5f: XOR EBX,EBX
// 00437f61: MOV dword ptr [ESP + 0x10],EBX
//   XREF to: Stack[-0x1c] (WRITE)
// 00437f65: TEST ECX,ECX
// 00437f67: JLE 0x00437fff
//   XREF to: 00437fff (CONDITIONAL_JUMP)
// 00437f6d: MOV EBX,0x825d00
//   XREF to: 00825d00 (DATA)
// 00437f72: MOV EAX,dword ptr [ESP + 0x10]
//   Label: LAB_00437f72
//   XREF to: Stack[-0x1c] (READ)
// 00437f76: MOV EBP,dword ptr [0x00825cf4]
//   XREF to: 00825cf4 (READ)
// 00437f7c: INC EAX
// 00437f7d: CMP EAX,EBP
// 00437f7f: JNZ 0x00437f83
//   XREF to: 00437f83 (CONDITIONAL_JUMP)
// 00437f81: XOR EAX,EBP
// 00437f83: IMUL EAX,EAX,0x30
//   Label: LAB_00437f83
// 00437f86: MOV EBP,0x825d00
//   XREF to: 00825d00 (DATA)
// 00437f8b: MOV EDX,EBX
// 00437f8d: MOV ECX,dword ptr [EBX + 0x8]
//   XREF to: 00825d08 (READ)
//   XREF to: 00825d38 (READ)
// 00437f90: MOV ESI,dword ptr [EBX]
//   XREF to: 00825d00 (READ)
//   XREF to: 00825d30 (READ)
// 00437f92: NEG ECX
// 00437f94: ADD EBP,EAX
// 00437f96: XOR EAX,EAX
// 00437f98: CMP ECX,ESI
// 00437f9a: JL 0x00437fa1
//   XREF to: 00437fa1 (CONDITIONAL_JUMP)
// 00437f9c: MOV EAX,0x1
// 00437fa1: MOV ECX,dword ptr [EBP + 0x8]
//   Label: LAB_00437fa1
//   XREF to: 00825d08 (DATA)
// 00437fa4: MOV EDI,dword ptr [EBP]
//   XREF to: 00825d00 (DATA)
// 00437fa7: NEG ECX
// 00437fa9: CMP ECX,EDI
// 00437fab: JL 0x00437faf
//   XREF to: 00437faf (CONDITIONAL_JUMP)
// 00437fad: OR AL,0x2
// 00437faf: CMP EAX,0x3
//   Label: LAB_00437faf
// 00437fb2: JA 0x00437fe5
//   XREF to: 00437fe5 (CONDITIONAL_JUMP)
// 00437fb4: JMP dword ptr [EAX*0x4 + 0x437c6c]
//   Label: switchD
//   XREF to: 00437fbb (COMPUTED_JUMP)
//   XREF to: 0043821d (COMPUTED_JUMP)
//   XREF to: 00438246 (COMPUTED_JUMP)
//   XREF to: 00437fe5 (COMPUTED_JUMP)
//   XREF to: 00437c78 (READ)
//   XREF to: 00437c70 (READ)
// 00437fbb: IMUL EDI,dword ptr [0x00825cf8],0x30
//   Label: caseD_0
//   XREF to: 00825cf8 (READ)
// 00437fc2: MOV ECX,0x30
// 00437fc7: MOV ESI,EDX
// 00437fc9: ADD EDI,0x826900
//   XREF to: 00826900 (DATA)
// 00437fcf: PUSH EDI
//   XREF to: 00826900 (DATA)
// 00437fd0: MOV EAX,ECX
// 00437fd2: SHR ECX,0x2
// 00437fd5: MOVSD.REP ES:EDI,ESI
//   XREF to: 00825d00 (READ)
//   XREF to: 00826900 (WRITE)
//   XREF to: 00825d04 (READ)
//   XREF to: 00826904 (WRITE)
// 00437fd7: MOV CL,AL
// 00437fd9: AND CL,0x3
// 00437fdc: MOVSB.REP ES:EDI,ESI
//   XREF to: 00825d04 (READ)
//   XREF to: 00826904 (WRITE)
// 00437fde: POP EDI
// 00437fdf: INC dword ptr [0x00825cf8]
//   XREF to: 00825cf8 (READ_WRITE)
// 00437fe5: MOV EDX,dword ptr [ESP + 0x10]
//   Label: caseD_3
//   XREF to: Stack[-0x1c] (READ)
// 00437fe9: MOV ECX,dword ptr [0x00825cf4]
//   XREF to: 00825cf4 (READ)
// 00437fef: INC EDX
// 00437ff0: ADD EBX,0x30
// 00437ff3: MOV dword ptr [ESP + 0x10],EDX
//   XREF to: Stack[-0x1c] (WRITE)
// 00437ff7: CMP EDX,ECX
// 00437ff9: JL 0x00437f72
//   XREF to: 00437f72 (CONDITIONAL_JUMP)
// 00437fff: MOV EBX,dword ptr [0x00825cf8]
//   Label: LAB_00437fff
//   XREF to: 00825cf8 (READ)
// 00438005: CMP EBX,0x3
// 00438008: JL 0x00438194
//   XREF to: 00438194 (CONDITIONAL_JUMP)
// 0043800e: XOR ESI,ESI
// 00438010: MOV dword ptr [ESP + 0x18],ESI
//   XREF to: Stack[-0x14] (WRITE)
// 00438014: TEST EBX,EBX
// 00438016: JLE 0x004380a9
//   XREF to: 004380a9 (CONDITIONAL_JUMP)
// 0043801c: MOV EBX,0x826900
//   XREF to: 00826900 (DATA)
// 00438021: MOV EAX,dword ptr [ESP + 0x18]
//   Label: LAB_00438021
//   XREF to: Stack[-0x14] (READ)
// 00438025: MOV EBP,dword ptr [0x00825cf8]
//   XREF to: 00825cf8 (READ)
// 0043802b: INC EAX
// 0043802c: CMP EAX,EBP
// 0043802e: JNZ 0x00438032
//   XREF to: 00438032 (CONDITIONAL_JUMP)
// 00438030: XOR EAX,EBP
// 00438032: IMUL EAX,EAX,0x30
//   Label: LAB_00438032
// 00438035: MOV EBP,0x826900
//   XREF to: 00826900 (DATA)
// 0043803a: MOV EDX,EBX
// 0043803c: MOV ECX,dword ptr [EBX + 0x4]
//   XREF to: 00826904 (READ)
//   XREF to: 00826934 (READ)
// 0043803f: MOV ESI,dword ptr [EBX + 0x8]
//   XREF to: 00826908 (READ)
//   XREF to: 00826938 (READ)
// 00438042: ADD EBP,EAX
// 00438044: XOR EAX,EAX
// 00438046: CMP ECX,ESI
// 00438048: JL 0x0043804f
//   XREF to: 0043804f (CONDITIONAL_JUMP)
// 0043804a: MOV EAX,0x1
// 0043804f: MOV EDI,dword ptr [EBP + 0x8]
//   Label: LAB_0043804f
//   XREF to: 00826908 (DATA)
// 00438052: CMP EDI,dword ptr [EBP + 0x4]
//   XREF to: 00826904 (DATA)
// 00438055: JG 0x00438059
//   XREF to: 00438059 (CONDITIONAL_JUMP)
// 00438057: OR AL,0x2
// 00438059: CMP EAX,0x3
//   Label: LAB_00438059
// 0043805c: JA 0x0043808f
//   XREF to: 0043808f (CONDITIONAL_JUMP)
// 0043805e: JMP dword ptr [EAX*0x4 + 0x437c7c]
//   Label: switchD
//   XREF to: 00438065 (COMPUTED_JUMP)
//   XREF to: 0043829c (COMPUTED_JUMP)
//   XREF to: 004382c5 (COMPUTED_JUMP)
//   XREF to: 0043808f (COMPUTED_JUMP)
//   XREF to: 00437c88 (READ)
//   XREF to: 00437c7c (READ)
// 00438065: IMUL EDI,dword ptr [0x00825cfc],0x30
//   Label: caseD_0
//   XREF to: 00825cfc (READ)
// 0043806c: MOV ECX,0x30
// 00438071: MOV ESI,EDX
// 00438073: ADD EDI,0x826f00
//   XREF to: 00826f00 (DATA)
// 00438079: PUSH EDI
//   XREF to: 00826f00 (DATA)
// 0043807a: MOV EAX,ECX
// 0043807c: SHR ECX,0x2
// 0043807f: MOVSD.REP ES:EDI,ESI
//   XREF to: 00826930 (READ)
//   XREF to: 00826f00 (WRITE)
//   XREF to: 00826934 (READ)
//   XREF to: 00826f04 (WRITE)
// 00438081: MOV CL,AL
// 00438083: AND CL,0x3
// 00438086: MOVSB.REP ES:EDI,ESI
//   XREF to: 00826934 (READ)
//   XREF to: 00826f04 (WRITE)
// 00438088: POP EDI
// 00438089: INC dword ptr [0x00825cfc]
//   XREF to: 00825cfc (READ_WRITE)
// 0043808f: MOV EDX,dword ptr [ESP + 0x18]
//   Label: caseD_3
//   XREF to: Stack[-0x14] (READ)
// 00438093: MOV ECX,dword ptr [0x00825cf8]
//   XREF to: 00825cf8 (READ)
// 00438099: INC EDX
// 0043809a: ADD EBX,0x30
// 0043809d: MOV dword ptr [ESP + 0x18],EDX
//   XREF to: Stack[-0x14] (WRITE)
// 004380a1: CMP EDX,ECX
// 004380a3: JL 0x00438021
//   XREF to: 00438021 (CONDITIONAL_JUMP)
// 004380a9: MOV EBX,dword ptr [0x00825cfc]
//   Label: LAB_004380a9
//   XREF to: 00825cfc (READ)
// 004380af: CMP EBX,0x3
// 004380b2: JL 0x00438194
//   XREF to: 00438194 (CONDITIONAL_JUMP)
// 004380b8: XOR ESI,ESI
// 004380ba: MOV dword ptr [ESP + 0x14],ESI
//   XREF to: Stack[-0x18] (WRITE)
// 004380be: TEST EBX,EBX
// 004380c0: JLE 0x00438159
//   XREF to: 00438159 (CONDITIONAL_JUMP)
// 004380c6: MOV EBX,0x826f00
//   XREF to: 00826f00 (DATA)
// 004380cb: MOV EAX,dword ptr [ESP + 0x14]
//   Label: LAB_004380cb
//   XREF to: Stack[-0x18] (READ)
// 004380cf: MOV EDI,dword ptr [0x00825cfc]
//   XREF to: 00825cfc (READ)
// 004380d5: INC EAX
// 004380d6: CMP EAX,EDI
// 004380d8: JNZ 0x004380dc
//   XREF to: 004380dc (CONDITIONAL_JUMP)
// 004380da: XOR EAX,EDI
// 004380dc: IMUL EAX,EAX,0x30
//   Label: LAB_004380dc
// 004380df: MOV EBP,0x826f00
//   XREF to: 00826f00 (DATA)
// 004380e4: MOV EDX,EBX
// 004380e6: MOV ECX,dword ptr [EBX + 0x8]
//   XREF to: 00826f08 (READ)
//   XREF to: 00826f38 (READ)
// 004380e9: MOV ESI,dword ptr [EBX + 0x4]
//   XREF to: 00826f04 (READ)
//   XREF to: 00826f34 (READ)
// 004380ec: NEG ECX
// 004380ee: ADD EBP,EAX
// 004380f0: XOR EAX,EAX
// 004380f2: CMP ECX,ESI
// 004380f4: JL 0x004380fb
//   XREF to: 004380fb (CONDITIONAL_JUMP)
// 004380f6: MOV EAX,0x1
// 004380fb: MOV ECX,dword ptr [EBP + 0x8]
//   Label: LAB_004380fb
//   XREF to: 00826f08 (DATA)
// 004380fe: MOV EDI,dword ptr [EBP + 0x4]
//   XREF to: 00826f04 (DATA)
// 00438101: NEG ECX
// 00438103: CMP ECX,EDI
// 00438105: JL 0x00438109
//   XREF to: 00438109 (CONDITIONAL_JUMP)
// 00438107: OR AL,0x2
// 00438109: CMP EAX,0x3
//   Label: LAB_00438109
// 0043810c: JA 0x0043813f
//   XREF to: 0043813f (CONDITIONAL_JUMP)
// 0043810e: JMP dword ptr [EAX*0x4 + 0x437c8c]
//   Label: switchD
//   XREF to: 00438115 (COMPUTED_JUMP)
//   XREF to: 0043831b (COMPUTED_JUMP)
//   XREF to: 00438344 (COMPUTED_JUMP)
//   XREF to: 0043813f (COMPUTED_JUMP)
//   XREF to: 00437c98 (READ)
//   XREF to: 00437c90 (READ)
// 00438115: IMUL EDI,dword ptr [0x00824e24],0x30
//   Label: caseD_0
//   XREF to: 00824e24 (READ)
// 0043811c: MOV ECX,0x30
// 00438121: MOV ESI,EDX
// 00438123: ADD EDI,0x824e28
//   XREF to: 00824e28 (DATA)
// 00438129: PUSH EDI
//   XREF to: 00824e28 (DATA)
// 0043812a: MOV EAX,ECX
// 0043812c: SHR ECX,0x2
// 0043812f: MOVSD.REP ES:EDI,ESI
//   XREF to: 00826f00 (READ)
//   XREF to: 00824e28 (WRITE)
//   XREF to: 00826f04 (READ)
//   XREF to: 00824e2c (WRITE)
// 00438131: MOV CL,AL
// 00438133: AND CL,0x3
// 00438136: MOVSB.REP ES:EDI,ESI
//   XREF to: 00826f04 (READ)
//   XREF to: 00824e2c (WRITE)
// 00438138: POP EDI
// 00438139: INC dword ptr [0x00824e24]
//   XREF to: 00824e24 (READ_WRITE)
// 0043813f: MOV EDX,dword ptr [ESP + 0x14]
//   Label: caseD_3
//   XREF to: Stack[-0x18] (READ)
// 00438143: MOV ECX,dword ptr [0x00825cfc]
//   XREF to: 00825cfc (READ)
// 00438149: INC EDX
// 0043814a: ADD EBX,0x30
// 0043814d: MOV dword ptr [ESP + 0x14],EDX
//   XREF to: Stack[-0x18] (WRITE)
// 00438151: CMP EDX,ECX
// 00438153: JL 0x004380cb
//   XREF to: 004380cb (CONDITIONAL_JUMP)
// 00438159: MOV EBX,dword ptr [0x00824e24]
//   Label: LAB_00438159
//   XREF to: 00824e24 (READ)
// 0043815f: CMP EBX,0x3
// 00438162: JL 0x00438194
//   XREF to: 00438194 (CONDITIONAL_JUMP)
// 00438164: MOV EAX,0x824e28
//   XREF to: 00824e28 (DATA)
// 00438169: XOR EBP,EBP
// 0043816b: TEST EBX,EBX
// 0043816d: JLE 0x00438194
//   XREF to: 00438194 (CONDITIONAL_JUMP)
// 0043816f: MOV ECX,dword ptr [EAX + 0x8]
//   Label: LAB_0043816f
//   XREF to: 00824e30 (READ)
//   XREF to: 00824e60 (READ)
// 00438172: TEST ECX,ECX
// 00438174: JNZ 0x0043839a
//   XREF to: 0043839a (CONDITIONAL_JUMP)
// 0043817a: MOV dword ptr [EAX + 0x8],0x1
//   XREF to: 00824e30 (WRITE)
//   XREF to: 00824e60 (WRITE)
// 00438181: MOV dword ptr [EAX],ECX
//   XREF to: 00824e28 (WRITE)
//   XREF to: 00824e58 (WRITE)
// 00438183: MOV dword ptr [EAX + 0x4],ECX
//   XREF to: 00824e2c (WRITE)
//   XREF to: 00824e5c (WRITE)
// 00438186: MOV EDX,dword ptr [0x00824e24]
//   Label: LAB_00438186
//   XREF to: 00824e24 (READ)
// 0043818c: INC EBP
// 0043818d: ADD EAX,0x30
// 00438190: CMP EBP,EDX
// 00438192: JL 0x0043816f
//   XREF to: 0043816f (CONDITIONAL_JUMP)
// 00438194: XOR EAX,EAX
//   Label: LAB_00438194
// 00438196: ADD ESP,0x1c
// 00438199: POP EBP
// 0043819a: POP EDI
// 0043819b: POP ESI
// 0043819c: POP EBX
// 0043819d: RET
// 0043819e: IMUL EAX,dword ptr [0x00825cf4],0x30
//   Label: caseD_1
//   XREF to: 00825cf4 (READ)
// 004381a5: ADD EAX,0x825d00
//   XREF to: 00825d00 (DATA)
// 004381aa: PUSH EAX
//   XREF to: 00825d00 (DATA)
// 004381ab: PUSH EDX
//   XREF to: 00826330 (DATA)
// 004381ac: PUSH EBP
// 004381ad: CALL engine_clipper.c_interpolateVertexLeftClipAdvanced_FUN_00437230
//   XREF to: 00437230 (UNCONDITIONAL_CALL)
// 004381b2: MOV ESI,dword ptr [0x00825cf4]
//   XREF to: 00825cf4 (READ)
// 004381b8: INC ESI
// 004381b9: ADD ESP,0xc
// 004381bc: MOV dword ptr [0x00825cf4],ESI
//   XREF to: 00825cf4 (WRITE)
// 004381c2: JMP 0x00437f36
//   XREF to: 00437f36 (UNCONDITIONAL_JUMP)
// 004381c7: IMUL EDI,dword ptr [0x00825cf4],0x30
//   Label: caseD_2
//   XREF to: 00825cf4 (READ)
// 004381ce: MOV ECX,0x30
// 004381d3: MOV ESI,EDX
// 004381d5: ADD EDI,0x825d00
//   XREF to: 00825d00 (DATA)
// 004381db: PUSH EDI
//   XREF to: 00825d00 (DATA)
// 004381dc: MOV EAX,ECX
// 004381de: SHR ECX,0x2
// 004381e1: MOVSD.REP ES:EDI,ESI
//   XREF to: 00826330 (READ)
//   XREF to: 00825d00 (WRITE)
//   XREF to: 00826334 (READ)
//   XREF to: 00825d04 (WRITE)
// 004381e3: MOV CL,AL
// 004381e5: AND CL,0x3
// 004381e8: MOVSB.REP ES:EDI,ESI
//   XREF to: 00826334 (READ)
//   XREF to: 00825d04 (WRITE)
// 004381ea: POP EDI
// 004381eb: MOV ECX,dword ptr [0x00825cf4]
//   XREF to: 00825cf4 (READ)
// 004381f1: INC ECX
// 004381f2: MOV dword ptr [0x00825cf4],ECX
//   XREF to: 00825cf4 (WRITE)
// 004381f8: IMUL EAX,ECX,0x30
// 004381fb: ADD EAX,0x825d00
//   XREF to: 00825d00 (DATA)
// 00438200: PUSH EAX
//   XREF to: 00825d30 (DATA)
// 00438201: PUSH EBP
// 00438202: PUSH EDX
//   XREF to: 00826330 (DATA)
// 00438203: CALL engine_clipper.c_interpolateVertexLeftClipAdvanced_FUN_00437230
//   XREF to: 00437230 (UNCONDITIONAL_CALL)
// 00438208: MOV EDI,dword ptr [0x00825cf4]
//   XREF to: 00825cf4 (READ)
// 0043820e: INC EDI
// 0043820f: ADD ESP,0xc
// 00438212: MOV dword ptr [0x00825cf4],EDI
//   XREF to: 00825cf4 (WRITE)
// 00438218: JMP 0x00437f36
//   XREF to: 00437f36 (UNCONDITIONAL_JUMP)
// 0043821d: IMUL EAX,dword ptr [0x00825cf8],0x30
//   Label: caseD_1
//   XREF to: 00825cf8 (READ)
// 00438224: ADD EAX,0x826900
//   XREF to: 00826900 (DATA)
// 00438229: PUSH EAX
//   XREF to: 00826900 (DATA)
// 0043822a: PUSH EDX
//   XREF to: 00825d00 (DATA)
// 0043822b: PUSH EBP
// 0043822c: CALL engine_clipper.c_interpolateVertexRightClipAdvanced_FUN_00437360
//   XREF to: 00437360 (UNCONDITIONAL_CALL)
// 00438231: MOV ESI,dword ptr [0x00825cf8]
//   XREF to: 00825cf8 (READ)
// 00438237: INC ESI
// 00438238: ADD ESP,0xc
// 0043823b: MOV dword ptr [0x00825cf8],ESI
//   XREF to: 00825cf8 (WRITE)
// 00438241: JMP 0x00437fe5
//   XREF to: 00437fe5 (UNCONDITIONAL_JUMP)
// 00438246: IMUL EDI,dword ptr [0x00825cf8],0x30
//   Label: caseD_2
//   XREF to: 00825cf8 (READ)
// 0043824d: MOV ECX,0x30
// 00438252: MOV ESI,EDX
// 00438254: ADD EDI,0x826900
//   XREF to: 00826900 (DATA)
// 0043825a: PUSH EDI
//   XREF to: 00826900 (DATA)
// 0043825b: MOV EAX,ECX
// 0043825d: SHR ECX,0x2
// 00438260: MOVSD.REP ES:EDI,ESI
//   XREF to: 00825d00 (READ)
//   XREF to: 00826900 (WRITE)
//   XREF to: 00825d04 (READ)
//   XREF to: 00826904 (WRITE)
// 00438262: MOV CL,AL
// 00438264: AND CL,0x3
// 00438267: MOVSB.REP ES:EDI,ESI
//   XREF to: 00825d04 (READ)
//   XREF to: 00826904 (WRITE)
// 00438269: POP EDI
// 0043826a: MOV ECX,dword ptr [0x00825cf8]
//   XREF to: 00825cf8 (READ)
// 00438270: INC ECX
// 00438271: MOV dword ptr [0x00825cf8],ECX
//   XREF to: 00825cf8 (WRITE)
// 00438277: IMUL EAX,ECX,0x30
// 0043827a: ADD EAX,0x826900
//   XREF to: 00826900 (DATA)
// 0043827f: PUSH EAX
//   XREF to: 00826930 (DATA)
// 00438280: PUSH EBP
// 00438281: PUSH EDX
//   XREF to: 00825d00 (DATA)
// 00438282: CALL engine_clipper.c_interpolateVertexRightClipAdvanced_FUN_00437360
//   XREF to: 00437360 (UNCONDITIONAL_CALL)
// 00438287: MOV EDI,dword ptr [0x00825cf8]
//   XREF to: 00825cf8 (READ)
// 0043828d: INC EDI
// 0043828e: ADD ESP,0xc
// 00438291: MOV dword ptr [0x00825cf8],EDI
//   XREF to: 00825cf8 (WRITE)
// 00438297: JMP 0x00437fe5
//   XREF to: 00437fe5 (UNCONDITIONAL_JUMP)
// 0043829c: IMUL EAX,dword ptr [0x00825cfc],0x30
//   Label: caseD_1
//   XREF to: 00825cfc (READ)
// 004382a3: ADD EAX,0x826f00
//   XREF to: 00826f00 (DATA)
// 004382a8: PUSH EAX
//   XREF to: 00826f00 (DATA)
// 004382a9: PUSH EDX
//   XREF to: 00826930 (DATA)
// 004382aa: PUSH EBP
// 004382ab: CALL engine_clipper.c_interpolateVertexBottomClipAdvanced_FUN_00437490
//   XREF to: 00437490 (UNCONDITIONAL_CALL)
// 004382b0: MOV ESI,dword ptr [0x00825cfc]
//   XREF to: 00825cfc (READ)
// 004382b6: INC ESI
// 004382b7: ADD ESP,0xc
// 004382ba: MOV dword ptr [0x00825cfc],ESI
//   XREF to: 00825cfc (WRITE)
// 004382c0: JMP 0x0043808f
//   XREF to: 0043808f (UNCONDITIONAL_JUMP)
// 004382c5: IMUL EDI,dword ptr [0x00825cfc],0x30
//   Label: caseD_2
//   XREF to: 00825cfc (READ)
// 004382cc: MOV ECX,0x30
// 004382d1: MOV ESI,EDX
// 004382d3: ADD EDI,0x826f00
//   XREF to: 00826f00 (DATA)
// 004382d9: PUSH EDI
//   XREF to: 00826f00 (DATA)
// 004382da: MOV EAX,ECX
// 004382dc: SHR ECX,0x2
// 004382df: MOVSD.REP ES:EDI,ESI
//   XREF to: 00826930 (READ)
//   XREF to: 00826f00 (WRITE)
//   XREF to: 00826934 (READ)
//   XREF to: 00826f04 (WRITE)
// 004382e1: MOV CL,AL
// 004382e3: AND CL,0x3
// 004382e6: MOVSB.REP ES:EDI,ESI
//   XREF to: 00826934 (READ)
//   XREF to: 00826f04 (WRITE)
// 004382e8: POP EDI
// 004382e9: MOV ECX,dword ptr [0x00825cfc]
//   XREF to: 00825cfc (READ)
// 004382ef: INC ECX
// 004382f0: MOV dword ptr [0x00825cfc],ECX
//   XREF to: 00825cfc (WRITE)
// 004382f6: IMUL EAX,ECX,0x30
// 004382f9: ADD EAX,0x826f00
//   XREF to: 00826f00 (DATA)
// 004382fe: PUSH EAX
//   XREF to: 00826f30 (DATA)
// 004382ff: PUSH EBP
// 00438300: PUSH EDX
//   XREF to: 00826930 (DATA)
// 00438301: CALL engine_clipper.c_interpolateVertexBottomClipAdvanced_FUN_00437490
//   XREF to: 00437490 (UNCONDITIONAL_CALL)
// 00438306: MOV EDI,dword ptr [0x00825cfc]
//   XREF to: 00825cfc (READ)
// 0043830c: INC EDI
// 0043830d: ADD ESP,0xc
// 00438310: MOV dword ptr [0x00825cfc],EDI
//   XREF to: 00825cfc (WRITE)
// 00438316: JMP 0x0043808f
//   XREF to: 0043808f (UNCONDITIONAL_JUMP)
// 0043831b: IMUL EAX,dword ptr [0x00824e24],0x30
//   Label: caseD_1
//   XREF to: 00824e24 (READ)
// 00438322: ADD EAX,0x824e28
//   XREF to: 00824e28 (DATA)
// 00438327: PUSH EAX
//   XREF to: 00824e28 (DATA)
// 00438328: PUSH EDX
//   XREF to: 00826f00 (DATA)
// 00438329: PUSH EBP
// 0043832a: CALL engine_clipper.c_interpolateVertexTopClipAdvanced_FUN_004375c0
//   XREF to: 004375c0 (UNCONDITIONAL_CALL)
// 0043832f: MOV ESI,dword ptr [0x00824e24]
//   XREF to: 00824e24 (READ)
// 00438335: INC ESI
// 00438336: ADD ESP,0xc
// 00438339: MOV dword ptr [0x00824e24],ESI
//   XREF to: 00824e24 (WRITE)
// 0043833f: JMP 0x0043813f
//   XREF to: 0043813f (UNCONDITIONAL_JUMP)
// 00438344: IMUL EDI,dword ptr [0x00824e24],0x30
//   Label: caseD_2
//   XREF to: 00824e24 (READ)
// 0043834b: MOV ECX,0x30
// 00438350: MOV ESI,EDX
// 00438352: ADD EDI,0x824e28
//   XREF to: 00824e28 (DATA)
// 00438358: PUSH EDI
//   XREF to: 00824e28 (DATA)
// 00438359: MOV EAX,ECX
// 0043835b: SHR ECX,0x2
// 0043835e: MOVSD.REP ES:EDI,ESI
//   XREF to: 00826f00 (READ)
//   XREF to: 00824e28 (WRITE)
//   XREF to: 00826f04 (READ)
//   XREF to: 00824e2c (WRITE)
// 00438360: MOV CL,AL
// 00438362: AND CL,0x3
// 00438365: MOVSB.REP ES:EDI,ESI
//   XREF to: 00826f04 (READ)
//   XREF to: 00824e2c (WRITE)
// 00438367: POP EDI
// 00438368: MOV ECX,dword ptr [0x00824e24]
//   XREF to: 00824e24 (READ)
// 0043836e: INC ECX
// 0043836f: MOV dword ptr [0x00824e24],ECX
//   XREF to: 00824e24 (WRITE)
// 00438375: IMUL EAX,ECX,0x30
// 00438378: ADD EAX,0x824e28
//   XREF to: 00824e28 (DATA)
// 0043837d: PUSH EAX
//   XREF to: 00824e58 (DATA)
// 0043837e: PUSH EBP
// 0043837f: PUSH EDX
//   XREF to: 00826f00 (DATA)
// 00438380: CALL engine_clipper.c_interpolateVertexTopClipAdvanced_FUN_004375c0
//   XREF to: 004375c0 (UNCONDITIONAL_CALL)
// 00438385: MOV EDI,dword ptr [0x00824e24]
//   XREF to: 00824e24 (READ)
// 0043838b: INC EDI
// 0043838c: ADD ESP,0xc
// 0043838f: MOV dword ptr [0x00824e24],EDI
//   XREF to: 00824e24 (WRITE)
// 00438395: JMP 0x0043813f
//   XREF to: 0043813f (UNCONDITIONAL_JUMP)
// 0043839a: CMP ECX,dword ptr [EAX]
//   Label: LAB_0043839a
//   XREF to: 00824e58 (READ)
// 0043839c: JGE 0x004383a5
//   XREF to: 004383a5 (CONDITIONAL_JUMP)
// 0043839e: MOV dword ptr [EAX],ECX
//   XREF to: 00824e58 (WRITE)
// 004383a0: JMP 0x00438186
//   XREF to: 00438186 (UNCONDITIONAL_JUMP)
// 004383a5: MOV EDX,ECX
//   Label: LAB_004383a5
// 004383a7: MOV ESI,dword ptr [EAX]
//   XREF to: 00824e58 (READ)
// 004383a9: NEG EDX
// 004383ab: CMP EDX,ESI
// 004383ad: JLE 0x004383b6
//   XREF to: 004383b6 (CONDITIONAL_JUMP)
// 004383af: MOV dword ptr [EAX],EDX
//   XREF to: 00824e58 (WRITE)
// 004383b1: JMP 0x00438186
//   XREF to: 00438186 (UNCONDITIONAL_JUMP)
// 004383b6: MOV EDI,dword ptr [EAX + 0x8]
//   Label: LAB_004383b6
//   XREF to: 00824e60 (READ)
// 004383b9: MOV ECX,dword ptr [EAX + 0x4]
//   XREF to: 00824e5c (READ)
// 004383bc: CMP ECX,EDI
// 004383be: JLE 0x004383c8
//   XREF to: 004383c8 (CONDITIONAL_JUMP)
// 004383c0: MOV dword ptr [EAX + 0x4],EDI
//   XREF to: 00824e5c (WRITE)
// 004383c3: JMP 0x00438186
//   XREF to: 00438186 (UNCONDITIONAL_JUMP)
// 004383c8: CMP EDX,ECX
//   Label: LAB_004383c8
// 004383ca: JLE 0x00438186
//   XREF to: 00438186 (CONDITIONAL_JUMP)
// 004383d0: MOV dword ptr [EAX + 0x4],EDX
//   XREF to: 00824e5c (WRITE)
// 004383d3: JMP 0x00438186
//   XREF to: 00438186 (UNCONDITIONAL_JUMP)
