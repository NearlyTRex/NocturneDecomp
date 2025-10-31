// Name: engine_clipper.c_clipPolygonToViewport_FUN_00438420
// Address: 00438420
// Address Range: [[00438420, 00438b7f]]
// Convention: __cdecl
// Signature: void engine_clipper.c_clipPolygonToViewport_FUN_00438420(int vertex_count, int * vertex_indices)
// Cross-references:
//   engine_3d.c_renderPolygonAPIAdaptivePreprocessing_FUN_00407620 (00407620) at 00407706 [UNCONDITIONAL_CALL]
//   engine_3d.c_renderPolygonAPIAdaptivePreprocessing_FUN_00407720 (00407720) at 0040785d [UNCONDITIONAL_CALL]
//   engine_3d.c_renderPolygonEngineEnhancedDepthLit_FUN_00406c80 (00406c80) at 00406d45 [UNCONDITIONAL_CALL]
//   engine_3d.c_renderPolygonEnginePlaneMaskedAdvanced_FUN_004057b0 (004057b0) at 00405887 [UNCONDITIONAL_CALL]
//   engine_3d.c_renderPolygonEnginePlaneMaskedEffect_FUN_00405690 (00405690) at 00405764 [UNCONDITIONAL_CALL]
//   engine_3d.c_renderPolygonSpecialEffectsAdvanced_FUN_00406f20 (00406f20) at 00407002 [UNCONDITIONAL_CALL]
//   engine_3d.c_renderPolygonSpecialEffectsPlaneMasked_FUN_00406de0 (00406de0) at 00406ebf [UNCONDITIONAL_CALL]
//   engine_3d.c_renderPolygon_FUN_00403ba0 (00403ba0) at 00403c71 [UNCONDITIONAL_CALL]
//   engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_0048a740 (0048a740) at 0048a7d4 [UNCONDITIONAL_CALL]
//   engine_drender.cpp_CDemonRenderer_renderGeometryBatch_FUN_0048d410 (0048d410) at 0048d5ce [UNCONDITIONAL_CALL]
// Globals:
//   void* switchdataD_004383d8 = 004386ac
//   void* PTR_caseD_3_004383e4 = 004386d6
//   void* PTR_caseD_1_004383ec = 004389bf
//   void* PTR_caseD_3_004383f4 = 00438785
//   void* switchdataD_004383f8 = 00438805
//   void* PTR_caseD_3_00438404 = 0043882f
//   void* PTR_caseD_1_0043840c = 00438abd
//   void* PTR_caseD_3_00438414 = 004388df
//   uint g_VertexProcessingEnabled = 0x1
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
//   engine_prim.c_renderIndexedPolygonAdvanced_FUN_00553b10
//   engine_prim.c_renderScanlinePolygon_FUN_00553470
//   wincore_windll.cpp_drawPolygon2_FUN_005b7610

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
                } while (SBORROW4(iVar10,iVar4) != iVar10 + (vertex_count + -2) * -4 < 0);
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


// Assembly code:
// 00438420: PUSH EBX
//   Label: engine_clipper.c_clipPolygonToViewport_FUN_00438420
// 00438421: PUSH ESI
// 00438422: PUSH EDI
// 00438423: PUSH EBP
// 00438424: SUB ESP,0x20
// 00438427: MOV EBX,dword ptr [ESP + 0x34]
//   XREF to: Stack[0x4] (READ)
// 0043842b: MOV EDX,dword ptr [ESP + 0x38]
//   XREF to: Stack[0x8] (READ)
// 0043842f: CMP dword ptr [0x006793bc],0x0
//   XREF to: 006793bc (READ)
// 00438436: JZ 0x0043850c
//   XREF to: 0043850c (CONDITIONAL_JUMP)
// 0043843c: MOV ECX,0xffffffff
// 00438441: MOV dword ptr [ESP + 0x4],EDX
//   XREF to: Stack[-0x2c] (WRITE)
// 00438445: MOV EBP,EBX
// 00438447: XOR ESI,ESI
// 00438449: XOR EAX,EAX
// 0043844b: TEST EBX,EBX
// 0043844d: JLE 0x0043846b
//   XREF to: 0043846b (CONDITIONAL_JUMP)
// 0043844f: IMUL EBX,dword ptr [EDX],0x30
//   Label: LAB_0043844f
// 00438452: MOV EBX,dword ptr [EBX + 0x688024]
//   XREF to: 00688024 (DATA)
// 00438458: TEST EBX,0x80000000
// 0043845e: JZ 0x00438461
//   XREF to: 00438461 (CONDITIONAL_JUMP)
// 00438460: INC ESI
// 00438461: ADD EDX,0x4
//   Label: LAB_00438461
// 00438464: INC EAX
// 00438465: AND ECX,EBX
// 00438467: CMP EAX,EBP
// 00438469: JL 0x0043844f
//   XREF to: 0043844f (CONDITIONAL_JUMP)
// 0043846b: CMP ESI,EBP
//   Label: LAB_0043846b
// 0043846d: JNZ 0x00438478
//   XREF to: 00438478 (CONDITIONAL_JUMP)
// 0043846f: TEST CL,0xff
// 00438472: JNZ 0x00438518
//   XREF to: 00438518 (CONDITIONAL_JUMP)
// 00438478: TEST ESI,ESI
//   Label: LAB_00438478
// 0043847a: JNZ 0x004385e5
//   XREF to: 004385e5 (CONDITIONAL_JUMP)
// 00438480: CMP dword ptr [0x02d03e94],0x0
//   XREF to: 02d03e94 (READ)
// 00438487: JZ 0x00438574
//   XREF to: 00438574 (CONDITIONAL_JUMP)
// 0043848d: XOR EAX,EAX
// 0043848f: TEST EBP,EBP
// 00438491: JLE 0x004384b0
//   XREF to: 004384b0 (CONDITIONAL_JUMP)
// 00438493: MOV EBX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x2c] (READ)
// 00438497: IMUL ECX,dword ptr [EBX],0x30
//   Label: LAB_00438497
// 0043849a: INC EAX
// 0043849b: ADD ECX,0x688014
//   XREF to: 00688014 (DATA)
// 004384a1: ADD EBX,0x4
// 004384a4: MOV dword ptr [EAX*0x4 + 0x825424],ECX
//   XREF to: 00825428 (WRITE)
//   XREF to: 0082542c (WRITE)
// 004384ab: CMP EAX,EBP
// 004384ad: JL 0x00438497
//   XREF to: 00438497 (CONDITIONAL_JUMP)
// 004384af: NOP
// 004384b0: CMP dword ptr [0x00772a7c],0x0
//   Label: LAB_004384b0
//   XREF to: 00772a7c (READ)
// 004384b7: JZ 0x00438546
//   XREF to: 00438546 (CONDITIONAL_JUMP)
// 004384bd: CMP EBP,0x3
// 004384c0: JLE 0x00438525
//   XREF to: 00438525 (CONDITIONAL_JUMP)
// 004384c2: LEA EAX,[EBP + -0x2]
// 004384c5: XOR EBX,EBX
// 004384c7: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x30] (DATA)
// 004384ca: LEA EDI,[EAX*0x4 + 0x0]
// 004384d1: XOR ESI,ESI
// 004384d3: TEST EDI,EDI
// 004384d5: JLE 0x004384ff
//   XREF to: 004384ff (CONDITIONAL_JUMP)
// 004384d7: MOV EAX,dword ptr [EBX + 0x825430]
//   Label: LAB_004384d7
//   XREF to: 00825430 (READ)
//   XREF to: 00825434 (READ)
// 004384dd: PUSH EAX
// 004384de: MOV EDX,dword ptr [EBX + 0x82542c]
//   XREF to: 0082542c (READ)
//   XREF to: 00825430 (READ)
// 004384e4: PUSH EDX
// 004384e5: MOV ECX,dword ptr [0x00825428]
//   XREF to: 00825428 (READ)
// 004384eb: PUSH ECX
// 004384ec: CALL engine_prim.c_calculateTriangleWindingOrder_FUN_00552150
//   XREF to: 00552150 (UNCONDITIONAL_CALL)
// 004384f1: ADD ESP,0xc
// 004384f4: TEST EAX,EAX
// 004384f6: JZ 0x00438522
//   XREF to: 00438522 (CONDITIONAL_JUMP)
// 004384f8: ADD EBX,0x4
//   Label: LAB_004384f8
// 004384fb: CMP EBX,EDI
// 004384fd: JL 0x004384d7
//   XREF to: 004384d7 (CONDITIONAL_JUMP)
// 004384ff: CMP ESI,dword ptr [ESP]
//   Label: LAB_004384ff
//   XREF to: Stack[-0x30] (DATA)
// 00438502: JNZ 0x00438546
//   XREF to: 00438546 (CONDITIONAL_JUMP)
// 00438504: ADD ESP,0x20
//   Label: LAB_00438504
// 00438507: POP EBP
// 00438508: POP EDI
// 00438509: POP ESI
// 0043850a: POP EBX
// 0043850b: RET
// 0043850c: PUSH EBX
//   Label: LAB_0043850c
// 0043850d: PUSH EDX
// 0043850e: CALL engine_prim.c_renderIndexedPolygonAdvanced_FUN_00553b10
//   XREF to: 00553b10 (UNCONDITIONAL_CALL)
// 00438513: ADD ESP,0x8
// 00438516: JMP 0x00438504
//   XREF to: 00438504 (UNCONDITIONAL_JUMP)
// 00438518: XOR ESI,EBP
//   Label: LAB_00438518
// 0043851a: MOV dword ptr [0x00824e24],ESI
//   XREF to: 00824e24 (WRITE)
// 00438520: JMP 0x00438504
//   XREF to: 00438504 (UNCONDITIONAL_JUMP)
// 00438522: INC ESI
//   Label: LAB_00438522
// 00438523: JMP 0x004384f8
//   XREF to: 004384f8 (UNCONDITIONAL_JUMP)
// 00438525: MOV EDX,dword ptr [0x00825430]
//   Label: LAB_00438525
//   XREF to: 00825430 (READ)
// 0043852b: PUSH EDX
// 0043852c: MOV ECX,dword ptr [0x0082542c]
//   XREF to: 0082542c (READ)
// 00438532: PUSH ECX
// 00438533: MOV EBX,dword ptr [0x00825428]
//   XREF to: 00825428 (READ)
// 00438539: PUSH EBX
// 0043853a: CALL engine_prim.c_calculateTriangleWindingOrder_FUN_00552150
//   XREF to: 00552150 (UNCONDITIONAL_CALL)
// 0043853f: ADD ESP,0xc
// 00438542: TEST EAX,EAX
// 00438544: JZ 0x00438504
//   XREF to: 00438504 (CONDITIONAL_JUMP)
// 00438546: MOV ESI,dword ptr [0x02d052a0]
//   Label: LAB_00438546
//   XREF to: 02d052a0 (READ)
// 0043854c: PUSH ESI
// 0043854d: LEA EAX,[EBP + -0x2]
// 00438550: MOV EBX,dword ptr [0x030e56b8]
//   XREF to: 030e56b8 (READ)
// 00438556: PUSH EBP
// 00438557: ADD EBX,EAX
// 00438559: PUSH 0x825428
//   XREF to: 00825428 (DATA)
// 0043855e: MOV dword ptr [0x030e56b8],EBX
//   XREF to: 030e56b8 (WRITE)
// 00438564: CALL wincore_windll.cpp_drawPolygon2_FUN_005b7610
//   XREF to: 005b7610 (UNCONDITIONAL_CALL)
// 00438569: ADD ESP,0xc
// 0043856c: ADD ESP,0x20
// 0043856f: POP EBP
// 00438570: POP EDI
// 00438571: POP ESI
// 00438572: POP EBX
// 00438573: RET
// 00438574: MOV dword ptr [ESP + 0x8],ESI
//   Label: LAB_00438574
//   XREF to: Stack[-0x28] (WRITE)
// 00438578: MOV dword ptr [0x00824e24],EBP
//   XREF to: 00824e24 (WRITE)
// 0043857e: TEST EBP,EBP
// 00438580: JLE 0x004385c0
//   XREF to: 004385c0 (CONDITIONAL_JUMP)
// 00438582: MOV EBX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x2c] (READ)
// 00438586: MOV EDX,0x824e28
//   XREF to: 00824e28 (DATA)
// 0043858b: IMUL ESI,dword ptr [EBX],0x30
//   Label: LAB_0043858b
// 0043858e: MOV ECX,0x30
// 00438593: ADD ESI,0x688014
//   XREF to: 00688014 (DATA)
// 00438599: MOV EDI,EDX
// 0043859b: PUSH EDI
//   XREF to: 00824e28 (DATA)
//   XREF to: 00824e58 (DATA)
// 0043859c: MOV EAX,ECX
// 0043859e: SHR ECX,0x2
// 004385a1: MOVSD.REP ES:EDI,ESI
//   XREF to: 00824e28 (WRITE)
//   XREF to: 00824e2c (WRITE)
//   XREF to: 00824e58 (WRITE)
//   XREF to: 00688014 (DATA)
//   XREF to: 00688018 (DATA)
// 004385a3: MOV CL,AL
// 004385a5: AND CL,0x3
// 004385a8: MOVSB.REP ES:EDI,ESI
//   XREF to: 00824e28 (WRITE)
//   XREF to: 00824e2c (WRITE)
//   XREF to: 00824e58 (WRITE)
//   XREF to: 00688014 (DATA)
//   XREF to: 00688018 (DATA)
// 004385aa: POP EDI
// 004385ab: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x28] (READ)
// 004385af: ADD EBX,0x4
// 004385b2: INC EAX
// 004385b3: ADD EDX,0x30
//   XREF to: 00824e58 (PARAM)
// 004385b6: MOV dword ptr [ESP + 0x8],EAX
//   XREF to: Stack[-0x28] (WRITE)
// 004385ba: CMP EBP,EAX
// 004385bc: JG 0x0043858b
//   XREF to: 0043858b (CONDITIONAL_JUMP)
// 004385be: MOV EAX,EAX
// 004385c0: MOV EBX,dword ptr [0x00824e24]
//   Label: LAB_004385c0
//   XREF to: 00824e24 (READ)
// 004385c6: CMP EBX,0x2
// 004385c9: JLE 0x00438504
//   XREF to: 00438504 (CONDITIONAL_JUMP)
// 004385cf: PUSH EBX
// 004385d0: PUSH 0x824e28
//   XREF to: 00824e28 (DATA)
// 004385d5: CALL engine_prim.c_renderScanlinePolygon_FUN_00553470
//   XREF to: 00553470 (UNCONDITIONAL_CALL)
// 004385da: ADD ESP,0x8
// 004385dd: ADD ESP,0x20
// 004385e0: POP EBP
// 004385e1: POP EDI
// 004385e2: POP ESI
// 004385e3: POP EBX
// 004385e4: RET
// 004385e5: XOR EBX,EBX
//   Label: LAB_004385e5
// 004385e7: MOV dword ptr [0x00825cf0],EBP
//   XREF to: 00825cf0 (WRITE)
// 004385ed: MOV dword ptr [0x00825cf4],EBX
//   XREF to: 00825cf4 (WRITE)
// 004385f3: MOV dword ptr [0x00825cf8],EBX
//   XREF to: 00825cf8 (WRITE)
// 004385f9: MOV dword ptr [0x00825cfc],EBX
//   XREF to: 00825cfc (WRITE)
// 004385ff: MOV dword ptr [0x00824e24],EBX
//   XREF to: 00824e24 (WRITE)
// 00438605: MOV dword ptr [ESP + 0xc],EBX
//   XREF to: Stack[-0x24] (WRITE)
// 00438609: TEST EBP,EBP
// 0043860b: JLE 0x00438650
//   XREF to: 00438650 (CONDITIONAL_JUMP)
// 0043860d: MOV EBX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x2c] (READ)
// 00438611: MOV EDX,0x826300
//   XREF to: 00826300 (PARAM)
// 00438616: IMUL ESI,dword ptr [EBX],0x30
//   Label: LAB_00438616
// 00438619: MOV ECX,0x30
// 0043861e: MOV EDI,EDX
// 00438620: ADD ESI,0x688014
//   XREF to: 00688014 (DATA)
// 00438626: PUSH EDI
//   XREF to: 00826300 (DATA)
//   XREF to: 00826330 (DATA)
// 00438627: MOV EAX,ECX
// 00438629: SHR ECX,0x2
// 0043862c: MOVSD.REP ES:EDI,ESI
//   XREF to: 00826300 (WRITE)
//   XREF to: 00826304 (WRITE)
//   XREF to: 00826330 (WRITE)
//   XREF to: 00688014 (DATA)
//   XREF to: 00688018 (DATA)
// 0043862e: MOV CL,AL
// 00438630: AND CL,0x3
// 00438633: MOVSB.REP ES:EDI,ESI
//   XREF to: 00826300 (WRITE)
//   XREF to: 00826304 (WRITE)
//   XREF to: 00826330 (WRITE)
//   XREF to: 00688014 (DATA)
//   XREF to: 00688018 (DATA)
// 00438635: POP EDI
// 00438636: MOV ECX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x24] (READ)
// 0043863a: ADD EBX,0x4
// 0043863d: INC ECX
// 0043863e: ADD EDX,0x30
// 00438641: MOV dword ptr [ESP + 0xc],ECX
//   XREF to: Stack[-0x24] (WRITE)
// 00438645: CMP EBP,ECX
// 00438647: JG 0x00438616
//   XREF to: 00438616 (CONDITIONAL_JUMP)
// 00438649: LEA EAX,[EAX]
// 0043864f: NOP
// 00438650: XOR EDI,EDI
//   Label: LAB_00438650
// 00438652: MOV EBP,dword ptr [0x00825cf0]
//   XREF to: 00825cf0 (READ)
// 00438658: MOV dword ptr [ESP + 0x10],EDI
//   XREF to: Stack[-0x20] (WRITE)
// 0043865c: TEST EBP,EBP
// 0043865e: JLE 0x004386f0
//   XREF to: 004386f0 (CONDITIONAL_JUMP)
// 00438664: MOV EBX,0x826300
//   XREF to: 00826300 (PARAM)
// 00438669: MOV EAX,dword ptr [ESP + 0x10]
//   Label: LAB_00438669
//   XREF to: Stack[-0x20] (READ)
// 0043866d: MOV EDI,dword ptr [0x00825cf0]
//   XREF to: 00825cf0 (READ)
// 00438673: INC EAX
// 00438674: CMP EAX,EDI
// 00438676: JNZ 0x0043867a
//   XREF to: 0043867a (CONDITIONAL_JUMP)
// 00438678: XOR EAX,EDI
// 0043867a: IMUL EAX,EAX,0x30
//   Label: LAB_0043867a
// 0043867d: MOV EBP,0x826300
//   XREF to: 00826300 (DATA)
// 00438682: MOV EDX,EBX
//   XREF to: 00826330 (PARAM)
// 00438684: MOV ECX,dword ptr [EBX]
//   XREF to: 00826300 (READ)
//   XREF to: 00826330 (READ)
// 00438686: MOV ESI,dword ptr [EBX + 0x8]
//   XREF to: 00826308 (READ)
//   XREF to: 00826338 (READ)
// 00438689: ADD EBP,EAX
// 0043868b: XOR EAX,EAX
// 0043868d: CMP ECX,ESI
// 0043868f: JL 0x00438696
//   XREF to: 00438696 (CONDITIONAL_JUMP)
// 00438691: MOV EAX,0x1
// 00438696: MOV EDI,dword ptr [EBP + 0x8]
//   Label: LAB_00438696
//   XREF to: 00826308 (DATA)
// 00438699: CMP EDI,dword ptr [EBP]
//   XREF to: 00826300 (DATA)
// 0043869c: JG 0x004386a0
//   XREF to: 004386a0 (CONDITIONAL_JUMP)
// 0043869e: OR AL,0x2
// 004386a0: CMP EAX,0x3
//   Label: LAB_004386a0
// 004386a3: JA 0x004386d6
//   XREF to: 004386d6 (CONDITIONAL_JUMP)
// 004386a5: JMP dword ptr [EAX*0x4 + 0x4383d8]
//   Label: switchD
//   XREF to: 004386ac (COMPUTED_JUMP)
//   XREF to: 004386d6 (COMPUTED_JUMP)
//   XREF to: 00438940 (COMPUTED_JUMP)
//   XREF to: 00438969 (COMPUTED_JUMP)
//   XREF to: 004383d8 (READ)
//   XREF to: 004383e4 (READ)
//   XREF to: 004386ac (COMPUTED_JUMP)
//   XREF to: 004386d6 (COMPUTED_JUMP)
// 004386ac: IMUL EDI,dword ptr [0x00825cf4],0x30
//   Label: caseD_0
//   XREF to: 00825cf4 (READ)
// 004386b3: MOV ECX,0x30
// 004386b8: MOV ESI,EDX
// 004386ba: ADD EDI,0x825d00
//   XREF to: 00825d00 (DATA)
// 004386c0: PUSH EDI
//   XREF to: 00825d00 (DATA)
// 004386c1: MOV EAX,ECX
// 004386c3: SHR ECX,0x2
// 004386c6: MOVSD.REP ES:EDI,ESI
//   XREF to: 00825d00 (WRITE)
//   XREF to: 00825d04 (WRITE)
//   XREF to: 00826300 (READ)
//   XREF to: 00826304 (READ)
//   XREF to: 00826330 (READ)
//   XREF to: 00826334 (READ)
// 004386c8: MOV CL,AL
// 004386ca: AND CL,0x3
// 004386cd: MOVSB.REP ES:EDI,ESI
//   XREF to: 00825d00 (WRITE)
//   XREF to: 00825d04 (WRITE)
//   XREF to: 00826300 (READ)
//   XREF to: 00826304 (READ)
//   XREF to: 00826334 (READ)
// 004386cf: POP EDI
// 004386d0: INC dword ptr [0x00825cf4]
//   XREF to: 00825cf4 (READ_WRITE)
// 004386d6: MOV EAX,dword ptr [ESP + 0x10]
//   Label: caseD_3
//   XREF to: Stack[-0x20] (READ)
// 004386da: MOV EDX,dword ptr [0x00825cf0]
//   XREF to: 00825cf0 (READ)
// 004386e0: INC EAX
// 004386e1: ADD EBX,0x30
//   XREF to: 00826330 (PARAM)
// 004386e4: MOV dword ptr [ESP + 0x10],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 004386e8: CMP EAX,EDX
// 004386ea: JL 0x00438669
//   XREF to: 00438669 (CONDITIONAL_JUMP)
// 004386f0: MOV ECX,dword ptr [0x00825cf4]
//   Label: LAB_004386f0
//   XREF to: 00825cf4 (READ)
// 004386f6: CMP ECX,0x3
// 004386f9: JL 0x004385c0
//   XREF to: 004385c0 (CONDITIONAL_JUMP)
// 004386ff: XOR EBX,EBX
// 00438701: MOV dword ptr [ESP + 0x18],EBX
//   XREF to: Stack[-0x18] (WRITE)
// 00438705: TEST ECX,ECX
// 00438707: JLE 0x0043879f
//   XREF to: 0043879f (CONDITIONAL_JUMP)
// 0043870d: MOV EBX,0x825d00
//   XREF to: 00825d00 (PARAM)
// 00438712: MOV EAX,dword ptr [ESP + 0x18]
//   Label: LAB_00438712
//   XREF to: Stack[-0x18] (READ)
// 00438716: MOV EBP,dword ptr [0x00825cf4]
//   XREF to: 00825cf4 (READ)
// 0043871c: INC EAX
// 0043871d: CMP EAX,EBP
// 0043871f: JNZ 0x00438723
//   XREF to: 00438723 (CONDITIONAL_JUMP)
// 00438721: XOR EAX,EBP
// 00438723: IMUL EAX,EAX,0x30
//   Label: LAB_00438723
// 00438726: MOV EBP,0x825d00
//   XREF to: 00825d00 (DATA)
// 0043872b: MOV EDX,EBX
//   XREF to: 00825d00 (PARAM)
// 0043872d: MOV ECX,dword ptr [EBX + 0x8]
//   XREF to: 00825d08 (READ)
//   XREF to: 00825d38 (READ)
// 00438730: MOV ESI,dword ptr [EBX]
//   XREF to: 00825d00 (READ)
//   XREF to: 00825d30 (READ)
// 00438732: NEG ECX
// 00438734: ADD EBP,EAX
// 00438736: XOR EAX,EAX
// 00438738: CMP ECX,ESI
// 0043873a: JL 0x00438741
//   XREF to: 00438741 (CONDITIONAL_JUMP)
// 0043873c: MOV EAX,0x1
// 00438741: MOV ECX,dword ptr [EBP + 0x8]
//   Label: LAB_00438741
//   XREF to: 00825d08 (DATA)
// 00438744: MOV EDI,dword ptr [EBP]
//   XREF to: 00825d00 (DATA)
// 00438747: NEG ECX
// 00438749: CMP ECX,EDI
// 0043874b: JL 0x0043874f
//   XREF to: 0043874f (CONDITIONAL_JUMP)
// 0043874d: OR AL,0x2
// 0043874f: CMP EAX,0x3
//   Label: LAB_0043874f
// 00438752: JA 0x00438785
//   XREF to: 00438785 (CONDITIONAL_JUMP)
// 00438754: JMP dword ptr [EAX*0x4 + 0x4383e8]
//   Label: switchD
//   XREF to: 0043875b (COMPUTED_JUMP)
//   XREF to: 00438785 (COMPUTED_JUMP)
//   XREF to: 004389bf (COMPUTED_JUMP)
//   XREF to: 004389e8 (COMPUTED_JUMP)
//   XREF to: 004383ec (READ)
//   XREF to: 004383f4 (READ)
//   XREF to: 00438785 (COMPUTED_JUMP)
//   XREF to: 004389bf (COMPUTED_JUMP)
// 0043875b: IMUL EDI,dword ptr [0x00825cf8],0x30
//   Label: caseD_0
//   XREF to: 00825cf8 (READ)
// 00438762: MOV ECX,0x30
// 00438767: MOV ESI,EDX
// 00438769: ADD EDI,0x826900
//   XREF to: 00826900 (DATA)
// 0043876f: PUSH EDI
//   XREF to: 00826900 (DATA)
// 00438770: MOV EAX,ECX
// 00438772: SHR ECX,0x2
// 00438775: MOVSD.REP ES:EDI,ESI
//   XREF to: 00826900 (WRITE)
//   XREF to: 00826904 (WRITE)
//   XREF to: 00825d00 (READ)
//   XREF to: 00825d04 (READ)
// 00438777: MOV CL,AL
// 00438779: AND CL,0x3
// 0043877c: MOVSB.REP ES:EDI,ESI
//   XREF to: 00826900 (WRITE)
//   XREF to: 00826904 (WRITE)
//   XREF to: 00825d00 (READ)
//   XREF to: 00825d04 (READ)
// 0043877e: POP EDI
// 0043877f: INC dword ptr [0x00825cf8]
//   XREF to: 00825cf8 (READ_WRITE)
// 00438785: MOV EDX,dword ptr [ESP + 0x18]
//   Label: caseD_3
//   XREF to: Stack[-0x18] (READ)
// 00438789: MOV ECX,dword ptr [0x00825cf4]
//   XREF to: 00825cf4 (READ)
// 0043878f: INC EDX
// 00438790: ADD EBX,0x30
// 00438793: MOV dword ptr [ESP + 0x18],EDX
//   XREF to: Stack[-0x18] (WRITE)
// 00438797: CMP EDX,ECX
// 00438799: JL 0x00438712
//   XREF to: 00438712 (CONDITIONAL_JUMP)
// 0043879f: MOV EBX,dword ptr [0x00825cf8]
//   Label: LAB_0043879f
//   XREF to: 00825cf8 (READ)
// 004387a5: CMP EBX,0x3
// 004387a8: JL 0x004385c0
//   XREF to: 004385c0 (CONDITIONAL_JUMP)
// 004387ae: XOR ESI,ESI
// 004387b0: MOV dword ptr [ESP + 0x1c],ESI
//   XREF to: Stack[-0x14] (WRITE)
// 004387b4: TEST EBX,EBX
// 004387b6: JLE 0x00438849
//   XREF to: 00438849 (CONDITIONAL_JUMP)
// 004387bc: MOV EBX,0x826900
//   XREF to: 00826900 (PARAM)
// 004387c1: MOV EAX,dword ptr [ESP + 0x1c]
//   Label: LAB_004387c1
//   XREF to: Stack[-0x14] (READ)
// 004387c5: MOV EBP,dword ptr [0x00825cf8]
//   XREF to: 00825cf8 (READ)
// 004387cb: INC EAX
// 004387cc: CMP EAX,EBP
// 004387ce: JNZ 0x004387d2
//   XREF to: 004387d2 (CONDITIONAL_JUMP)
// 004387d0: XOR EAX,EBP
// 004387d2: IMUL EAX,EAX,0x30
//   Label: LAB_004387d2
// 004387d5: MOV EBP,0x826900
//   XREF to: 00826900 (DATA)
// 004387da: MOV EDX,EBX
//   XREF to: 00826900 (PARAM)
//   XREF to: 00826930 (PARAM)
// 004387dc: MOV ECX,dword ptr [EBX + 0x4]
//   XREF to: 00826904 (READ)
//   XREF to: 00826934 (READ)
// 004387df: MOV ESI,dword ptr [EBX + 0x8]
//   XREF to: 00826908 (READ)
//   XREF to: 00826938 (READ)
// 004387e2: ADD EBP,EAX
// 004387e4: XOR EAX,EAX
// 004387e6: CMP ECX,ESI
// 004387e8: JL 0x004387ef
//   XREF to: 004387ef (CONDITIONAL_JUMP)
// 004387ea: MOV EAX,0x1
// 004387ef: MOV EDI,dword ptr [EBP + 0x8]
//   Label: LAB_004387ef
//   XREF to: 00826908 (DATA)
// 004387f2: CMP EDI,dword ptr [EBP + 0x4]
//   XREF to: 00826904 (DATA)
// 004387f5: JG 0x004387f9
//   XREF to: 004387f9 (CONDITIONAL_JUMP)
// 004387f7: OR AL,0x2
// 004387f9: CMP EAX,0x3
//   Label: LAB_004387f9
// 004387fc: JA 0x0043882f
//   XREF to: 0043882f (CONDITIONAL_JUMP)
// 004387fe: JMP dword ptr [EAX*0x4 + 0x4383f8]
//   Label: switchD
//   XREF to: 00438805 (COMPUTED_JUMP)
//   XREF to: 0043882f (COMPUTED_JUMP)
//   XREF to: 00438a3e (COMPUTED_JUMP)
//   XREF to: 00438a67 (COMPUTED_JUMP)
//   XREF to: 004383f8 (READ)
//   XREF to: 00438404 (READ)
//   XREF to: 00438805 (COMPUTED_JUMP)
//   XREF to: 0043882f (COMPUTED_JUMP)
// 00438805: IMUL EDI,dword ptr [0x00825cfc],0x30
//   Label: caseD_0
//   XREF to: 00825cfc (READ)
// 0043880c: MOV ECX,0x30
// 00438811: MOV ESI,EDX
// 00438813: ADD EDI,0x826f00
//   XREF to: 00826f00 (DATA)
// 00438819: PUSH EDI
//   XREF to: 00826f00 (DATA)
// 0043881a: MOV EAX,ECX
// 0043881c: SHR ECX,0x2
// 0043881f: MOVSD.REP ES:EDI,ESI
//   XREF to: 00826f00 (WRITE)
//   XREF to: 00826f04 (WRITE)
//   XREF to: 00826900 (READ)
//   XREF to: 00826904 (READ)
//   XREF to: 00826930 (READ)
//   XREF to: 00826934 (READ)
// 00438821: MOV CL,AL
// 00438823: AND CL,0x3
// 00438826: MOVSB.REP ES:EDI,ESI
//   XREF to: 00826f00 (WRITE)
//   XREF to: 00826f04 (WRITE)
//   XREF to: 00826900 (READ)
//   XREF to: 00826904 (READ)
//   XREF to: 00826934 (READ)
// 00438828: POP EDI
// 00438829: INC dword ptr [0x00825cfc]
//   XREF to: 00825cfc (READ_WRITE)
// 0043882f: MOV EDX,dword ptr [ESP + 0x1c]
//   Label: caseD_3
//   XREF to: Stack[-0x14] (READ)
// 00438833: MOV ECX,dword ptr [0x00825cf8]
//   XREF to: 00825cf8 (READ)
// 00438839: INC EDX
// 0043883a: ADD EBX,0x30
//   XREF to: 00826930 (PARAM)
// 0043883d: MOV dword ptr [ESP + 0x1c],EDX
//   XREF to: Stack[-0x14] (WRITE)
// 00438841: CMP EDX,ECX
// 00438843: JL 0x004387c1
//   XREF to: 004387c1 (CONDITIONAL_JUMP)
// 00438849: MOV EBX,dword ptr [0x00825cfc]
//   Label: LAB_00438849
//   XREF to: 00825cfc (READ)
// 0043884f: CMP EBX,0x3
// 00438852: JL 0x004385c0
//   XREF to: 004385c0 (CONDITIONAL_JUMP)
// 00438858: XOR ESI,ESI
// 0043885a: MOV dword ptr [ESP + 0x14],ESI
//   XREF to: Stack[-0x1c] (WRITE)
// 0043885e: TEST EBX,EBX
// 00438860: JLE 0x004388f9
//   XREF to: 004388f9 (CONDITIONAL_JUMP)
// 00438866: MOV EBX,0x826f00
//   XREF to: 00826f00 (PARAM)
// 0043886b: MOV EAX,dword ptr [ESP + 0x14]
//   Label: LAB_0043886b
//   XREF to: Stack[-0x1c] (READ)
// 0043886f: MOV EDI,dword ptr [0x00825cfc]
//   XREF to: 00825cfc (READ)
// 00438875: INC EAX
// 00438876: CMP EAX,EDI
// 00438878: JNZ 0x0043887c
//   XREF to: 0043887c (CONDITIONAL_JUMP)
// 0043887a: XOR EAX,EDI
// 0043887c: IMUL EAX,EAX,0x30
//   Label: LAB_0043887c
// 0043887f: MOV EBP,0x826f00
//   XREF to: 00826f00 (DATA)
// 00438884: MOV EDX,EBX
//   XREF to: 00826f00 (PARAM)
// 00438886: MOV ECX,dword ptr [EBX + 0x8]
//   XREF to: 00826f08 (READ)
//   XREF to: 00826f38 (READ)
// 00438889: MOV ESI,dword ptr [EBX + 0x4]
//   XREF to: 00826f04 (READ)
//   XREF to: 00826f34 (READ)
// 0043888c: NEG ECX
// 0043888e: ADD EBP,EAX
// 00438890: XOR EAX,EAX
// 00438892: CMP ECX,ESI
// 00438894: JL 0x0043889b
//   XREF to: 0043889b (CONDITIONAL_JUMP)
// 00438896: MOV EAX,0x1
// 0043889b: MOV ECX,dword ptr [EBP + 0x8]
//   Label: LAB_0043889b
//   XREF to: 00826f08 (DATA)
// 0043889e: MOV EDI,dword ptr [EBP + 0x4]
//   XREF to: 00826f04 (DATA)
// 004388a1: NEG ECX
// 004388a3: CMP ECX,EDI
// 004388a5: JL 0x004388a9
//   XREF to: 004388a9 (CONDITIONAL_JUMP)
// 004388a7: OR AL,0x2
// 004388a9: CMP EAX,0x3
//   Label: LAB_004388a9
// 004388ac: JA 0x004388df
//   XREF to: 004388df (CONDITIONAL_JUMP)
// 004388ae: JMP dword ptr [EAX*0x4 + 0x438408]
//   Label: switchD
//   XREF to: 004388b5 (COMPUTED_JUMP)
//   XREF to: 004388df (COMPUTED_JUMP)
//   XREF to: 00438abd (COMPUTED_JUMP)
//   XREF to: 00438ae6 (COMPUTED_JUMP)
//   XREF to: 0043840c (READ)
//   XREF to: 00438414 (READ)
//   XREF to: 004388df (COMPUTED_JUMP)
//   XREF to: 00438abd (COMPUTED_JUMP)
// 004388b5: IMUL EDI,dword ptr [0x00824e24],0x30
//   Label: caseD_0
//   XREF to: 00824e24 (READ)
// 004388bc: MOV ECX,0x30
// 004388c1: MOV ESI,EDX
// 004388c3: ADD EDI,0x824e28
//   XREF to: 00824e28 (DATA)
// 004388c9: PUSH EDI
//   XREF to: 00824e28 (DATA)
// 004388ca: MOV EAX,ECX
// 004388cc: SHR ECX,0x2
// 004388cf: MOVSD.REP ES:EDI,ESI
//   XREF to: 00824e28 (WRITE)
//   XREF to: 00824e2c (WRITE)
//   XREF to: 00826f00 (READ)
//   XREF to: 00826f04 (READ)
// 004388d1: MOV CL,AL
// 004388d3: AND CL,0x3
// 004388d6: MOVSB.REP ES:EDI,ESI
//   XREF to: 00824e28 (WRITE)
//   XREF to: 00824e2c (WRITE)
//   XREF to: 00826f00 (READ)
//   XREF to: 00826f04 (READ)
// 004388d8: POP EDI
// 004388d9: INC dword ptr [0x00824e24]
//   XREF to: 00824e24 (READ_WRITE)
// 004388df: MOV EDX,dword ptr [ESP + 0x14]
//   Label: caseD_3
//   XREF to: Stack[-0x1c] (READ)
// 004388e3: MOV ECX,dword ptr [0x00825cfc]
//   XREF to: 00825cfc (READ)
// 004388e9: INC EDX
// 004388ea: ADD EBX,0x30
// 004388ed: MOV dword ptr [ESP + 0x14],EDX
//   XREF to: Stack[-0x1c] (WRITE)
// 004388f1: CMP EDX,ECX
// 004388f3: JL 0x0043886b
//   XREF to: 0043886b (CONDITIONAL_JUMP)
// 004388f9: MOV EBX,dword ptr [0x00824e24]
//   Label: LAB_004388f9
//   XREF to: 00824e24 (READ)
// 004388ff: CMP EBX,0x3
// 00438902: JL 0x004385c0
//   XREF to: 004385c0 (CONDITIONAL_JUMP)
// 00438908: MOV EAX,0x824e28
//   XREF to: 00824e28 (DATA)
// 0043890d: XOR EBP,EBP
// 0043890f: TEST EBX,EBX
// 00438911: JLE 0x004385c0
//   XREF to: 004385c0 (CONDITIONAL_JUMP)
// 00438917: MOV ECX,dword ptr [EAX + 0x8]
//   Label: LAB_00438917
//   XREF to: 00824e30 (READ)
//   XREF to: 00824e60 (READ)
// 0043891a: TEST ECX,ECX
// 0043891c: JZ 0x00438b3c
//   XREF to: 00438b3c (CONDITIONAL_JUMP)
// 00438922: CMP ECX,dword ptr [EAX]
//   XREF to: 00824e28 (READ)
//   XREF to: 00824e58 (READ)
// 00438924: JGE 0x00438b4d
//   XREF to: 00438b4d (CONDITIONAL_JUMP)
// 0043892a: MOV dword ptr [EAX],ECX
//   XREF to: 00824e28 (WRITE)
//   XREF to: 00824e58 (WRITE)
// 0043892c: MOV EDX,dword ptr [0x00824e24]
//   Label: LAB_0043892c
//   XREF to: 00824e24 (READ)
// 00438932: INC EBP
// 00438933: ADD EAX,0x30
// 00438936: CMP EBP,EDX
// 00438938: JGE 0x004385c0
//   XREF to: 004385c0 (CONDITIONAL_JUMP)
// 0043893e: JMP 0x00438917
//   XREF to: 00438917 (UNCONDITIONAL_JUMP)
// 00438940: IMUL EAX,dword ptr [0x00825cf4],0x30
//   Label: caseD_1
//   XREF to: 00825cf4 (READ)
// 00438947: ADD EAX,0x825d00
//   XREF to: 00825d00 (PARAM)
// 0043894c: PUSH EAX
//   XREF to: 00825d00 (DATA)
// 0043894d: PUSH EDX
//   XREF to: 00826300 (DATA)
//   XREF to: 00826330 (DATA)
// 0043894e: PUSH EBP
// 0043894f: CALL engine_clipper.c_interpolateVertexLeftClipAdvanced_FUN_00437230
//   XREF to: 00437230 (UNCONDITIONAL_CALL)
// 00438954: MOV ESI,dword ptr [0x00825cf4]
//   XREF to: 00825cf4 (READ)
// 0043895a: INC ESI
// 0043895b: ADD ESP,0xc
// 0043895e: MOV dword ptr [0x00825cf4],ESI
//   XREF to: 00825cf4 (WRITE)
// 00438964: JMP 0x004386d6
//   XREF to: 004386d6 (UNCONDITIONAL_JUMP)
// 00438969: IMUL EDI,dword ptr [0x00825cf4],0x30
//   Label: caseD_2
//   XREF to: 00825cf4 (READ)
// 00438970: MOV ECX,0x30
// 00438975: MOV ESI,EDX
// 00438977: ADD EDI,0x825d00
//   XREF to: 00825d00 (DATA)
// 0043897d: PUSH EDI
//   XREF to: 00825d00 (DATA)
// 0043897e: MOV EAX,ECX
// 00438980: SHR ECX,0x2
// 00438983: MOVSD.REP ES:EDI,ESI
//   XREF to: 00825d00 (WRITE)
//   XREF to: 00825d04 (WRITE)
//   XREF to: 00826300 (READ)
//   XREF to: 00826330 (READ)
//   XREF to: 00826334 (READ)
// 00438985: MOV CL,AL
// 00438987: AND CL,0x3
// 0043898a: MOVSB.REP ES:EDI,ESI
//   XREF to: 00825d00 (WRITE)
//   XREF to: 00825d04 (WRITE)
//   XREF to: 00826300 (READ)
//   XREF to: 00826334 (READ)
// 0043898c: POP EDI
// 0043898d: MOV ECX,dword ptr [0x00825cf4]
//   XREF to: 00825cf4 (READ)
// 00438993: INC ECX
// 00438994: MOV dword ptr [0x00825cf4],ECX
//   XREF to: 00825cf4 (WRITE)
// 0043899a: IMUL EAX,ECX,0x30
// 0043899d: ADD EAX,0x825d00
//   XREF to: 00825d30 (PARAM)
//   XREF to: 00825d00 (DATA)
// 004389a2: PUSH EAX
//   XREF to: 00825d30 (DATA)
// 004389a3: PUSH EBP
// 004389a4: PUSH EDX
//   XREF to: 00826300 (DATA)
//   XREF to: 00826330 (DATA)
// 004389a5: CALL engine_clipper.c_interpolateVertexLeftClipAdvanced_FUN_00437230
//   XREF to: 00437230 (UNCONDITIONAL_CALL)
// 004389aa: MOV EDI,dword ptr [0x00825cf4]
//   XREF to: 00825cf4 (READ)
// 004389b0: INC EDI
// 004389b1: ADD ESP,0xc
// 004389b4: MOV dword ptr [0x00825cf4],EDI
//   XREF to: 00825cf4 (WRITE)
// 004389ba: JMP 0x004386d6
//   XREF to: 004386d6 (UNCONDITIONAL_JUMP)
// 004389bf: IMUL EAX,dword ptr [0x00825cf8],0x30
//   Label: caseD_1
//   XREF to: 00825cf8 (READ)
// 004389c6: ADD EAX,0x826900
//   XREF to: 00826900 (PARAM)
// 004389cb: PUSH EAX
//   XREF to: 00826900 (DATA)
// 004389cc: PUSH EDX
//   XREF to: 00825d00 (DATA)
// 004389cd: PUSH EBP
// 004389ce: CALL engine_clipper.c_interpolateVertexRightClipAdvanced_FUN_00437360
//   XREF to: 00437360 (UNCONDITIONAL_CALL)
// 004389d3: MOV ESI,dword ptr [0x00825cf8]
//   XREF to: 00825cf8 (READ)
// 004389d9: INC ESI
// 004389da: ADD ESP,0xc
// 004389dd: MOV dword ptr [0x00825cf8],ESI
//   XREF to: 00825cf8 (WRITE)
// 004389e3: JMP 0x00438785
//   XREF to: 00438785 (UNCONDITIONAL_JUMP)
// 004389e8: IMUL EDI,dword ptr [0x00825cf8],0x30
//   Label: caseD_2
//   XREF to: 00825cf8 (READ)
// 004389ef: MOV ECX,0x30
// 004389f4: MOV ESI,EDX
// 004389f6: ADD EDI,0x826900
//   XREF to: 00826900 (DATA)
// 004389fc: PUSH EDI
//   XREF to: 00826900 (DATA)
// 004389fd: MOV EAX,ECX
// 004389ff: SHR ECX,0x2
// 00438a02: MOVSD.REP ES:EDI,ESI
//   XREF to: 00826900 (WRITE)
//   XREF to: 00826904 (WRITE)
//   XREF to: 00825d00 (READ)
//   XREF to: 00825d04 (READ)
// 00438a04: MOV CL,AL
// 00438a06: AND CL,0x3
// 00438a09: MOVSB.REP ES:EDI,ESI
//   XREF to: 00826900 (WRITE)
//   XREF to: 00826904 (WRITE)
//   XREF to: 00825d00 (READ)
//   XREF to: 00825d04 (READ)
// 00438a0b: POP EDI
// 00438a0c: MOV ECX,dword ptr [0x00825cf8]
//   XREF to: 00825cf8 (READ)
// 00438a12: INC ECX
// 00438a13: MOV dword ptr [0x00825cf8],ECX
//   XREF to: 00825cf8 (WRITE)
// 00438a19: IMUL EAX,ECX,0x30
// 00438a1c: ADD EAX,0x826900
//   XREF to: 00826930 (PARAM)
//   XREF to: 00826900 (DATA)
// 00438a21: PUSH EAX
//   XREF to: 00826930 (DATA)
// 00438a22: PUSH EBP
// 00438a23: PUSH EDX
//   XREF to: 00825d00 (DATA)
// 00438a24: CALL engine_clipper.c_interpolateVertexRightClipAdvanced_FUN_00437360
//   XREF to: 00437360 (UNCONDITIONAL_CALL)
// 00438a29: MOV EDI,dword ptr [0x00825cf8]
//   XREF to: 00825cf8 (READ)
// 00438a2f: INC EDI
// 00438a30: ADD ESP,0xc
// 00438a33: MOV dword ptr [0x00825cf8],EDI
//   XREF to: 00825cf8 (WRITE)
// 00438a39: JMP 0x00438785
//   XREF to: 00438785 (UNCONDITIONAL_JUMP)
// 00438a3e: IMUL EAX,dword ptr [0x00825cfc],0x30
//   Label: caseD_1
//   XREF to: 00825cfc (READ)
// 00438a45: ADD EAX,0x826f00
//   XREF to: 00826f00 (PARAM)
// 00438a4a: PUSH EAX
//   XREF to: 00826f00 (DATA)
// 00438a4b: PUSH EDX
//   XREF to: 00826900 (DATA)
//   XREF to: 00826930 (DATA)
// 00438a4c: PUSH EBP
// 00438a4d: CALL engine_clipper.c_interpolateVertexBottomClipAdvanced_FUN_00437490
//   XREF to: 00437490 (UNCONDITIONAL_CALL)
// 00438a52: MOV ESI,dword ptr [0x00825cfc]
//   XREF to: 00825cfc (READ)
// 00438a58: INC ESI
// 00438a59: ADD ESP,0xc
// 00438a5c: MOV dword ptr [0x00825cfc],ESI
//   XREF to: 00825cfc (WRITE)
// 00438a62: JMP 0x0043882f
//   XREF to: 0043882f (UNCONDITIONAL_JUMP)
// 00438a67: IMUL EDI,dword ptr [0x00825cfc],0x30
//   Label: caseD_2
//   XREF to: 00825cfc (READ)
// 00438a6e: MOV ECX,0x30
// 00438a73: MOV ESI,EDX
// 00438a75: ADD EDI,0x826f00
//   XREF to: 00826f00 (DATA)
// 00438a7b: PUSH EDI
//   XREF to: 00826f00 (DATA)
// 00438a7c: MOV EAX,ECX
// 00438a7e: SHR ECX,0x2
// 00438a81: MOVSD.REP ES:EDI,ESI
//   XREF to: 00826f00 (WRITE)
//   XREF to: 00826f04 (WRITE)
//   XREF to: 00826900 (READ)
//   XREF to: 00826930 (READ)
//   XREF to: 00826934 (READ)
// 00438a83: MOV CL,AL
// 00438a85: AND CL,0x3
// 00438a88: MOVSB.REP ES:EDI,ESI
//   XREF to: 00826f00 (WRITE)
//   XREF to: 00826f04 (WRITE)
//   XREF to: 00826900 (READ)
//   XREF to: 00826934 (READ)
// 00438a8a: POP EDI
// 00438a8b: MOV ECX,dword ptr [0x00825cfc]
//   XREF to: 00825cfc (READ)
// 00438a91: INC ECX
// 00438a92: MOV dword ptr [0x00825cfc],ECX
//   XREF to: 00825cfc (WRITE)
// 00438a98: IMUL EAX,ECX,0x30
// 00438a9b: ADD EAX,0x826f00
//   XREF to: 00826f30 (PARAM)
//   XREF to: 00826f00 (DATA)
// 00438aa0: PUSH EAX
//   XREF to: 00826f30 (DATA)
// 00438aa1: PUSH EBP
// 00438aa2: PUSH EDX
//   XREF to: 00826900 (DATA)
//   XREF to: 00826930 (DATA)
// 00438aa3: CALL engine_clipper.c_interpolateVertexBottomClipAdvanced_FUN_00437490
//   XREF to: 00437490 (UNCONDITIONAL_CALL)
// 00438aa8: MOV EDI,dword ptr [0x00825cfc]
//   XREF to: 00825cfc (READ)
// 00438aae: INC EDI
// 00438aaf: ADD ESP,0xc
// 00438ab2: MOV dword ptr [0x00825cfc],EDI
//   XREF to: 00825cfc (WRITE)
// 00438ab8: JMP 0x0043882f
//   XREF to: 0043882f (UNCONDITIONAL_JUMP)
// 00438abd: IMUL EAX,dword ptr [0x00824e24],0x30
//   Label: caseD_1
//   XREF to: 00824e24 (READ)
// 00438ac4: ADD EAX,0x824e28
//   XREF to: 00824e28 (PARAM)
// 00438ac9: PUSH EAX
//   XREF to: 00824e28 (DATA)
// 00438aca: PUSH EDX
//   XREF to: 00826f00 (DATA)
// 00438acb: PUSH EBP
// 00438acc: CALL engine_clipper.c_interpolateVertexTopClipAdvanced_FUN_004375c0
//   XREF to: 004375c0 (UNCONDITIONAL_CALL)
// 00438ad1: MOV ESI,dword ptr [0x00824e24]
//   XREF to: 00824e24 (READ)
// 00438ad7: INC ESI
// 00438ad8: ADD ESP,0xc
// 00438adb: MOV dword ptr [0x00824e24],ESI
//   XREF to: 00824e24 (WRITE)
// 00438ae1: JMP 0x004388df
//   XREF to: 004388df (UNCONDITIONAL_JUMP)
// 00438ae6: IMUL EDI,dword ptr [0x00824e24],0x30
//   Label: caseD_2
//   XREF to: 00824e24 (READ)
// 00438aed: MOV ECX,0x30
// 00438af2: MOV ESI,EDX
// 00438af4: ADD EDI,0x824e28
//   XREF to: 00824e28 (DATA)
// 00438afa: PUSH EDI
//   XREF to: 00824e28 (DATA)
// 00438afb: MOV EAX,ECX
// 00438afd: SHR ECX,0x2
// 00438b00: MOVSD.REP ES:EDI,ESI
//   XREF to: 00824e28 (WRITE)
//   XREF to: 00824e2c (WRITE)
//   XREF to: 00826f00 (READ)
//   XREF to: 00826f04 (READ)
// 00438b02: MOV CL,AL
// 00438b04: AND CL,0x3
// 00438b07: MOVSB.REP ES:EDI,ESI
//   XREF to: 00824e28 (WRITE)
//   XREF to: 00824e2c (WRITE)
//   XREF to: 00826f00 (READ)
//   XREF to: 00826f04 (READ)
// 00438b09: POP EDI
// 00438b0a: MOV ECX,dword ptr [0x00824e24]
//   XREF to: 00824e24 (READ)
// 00438b10: INC ECX
// 00438b11: MOV dword ptr [0x00824e24],ECX
//   XREF to: 00824e24 (WRITE)
// 00438b17: IMUL EAX,ECX,0x30
// 00438b1a: ADD EAX,0x824e28
//   XREF to: 00824e58 (PARAM)
//   XREF to: 00824e28 (DATA)
// 00438b1f: PUSH EAX
//   XREF to: 00824e58 (DATA)
// 00438b20: PUSH EBP
// 00438b21: PUSH EDX
//   XREF to: 00826f00 (DATA)
// 00438b22: CALL engine_clipper.c_interpolateVertexTopClipAdvanced_FUN_004375c0
//   XREF to: 004375c0 (UNCONDITIONAL_CALL)
// 00438b27: MOV EDI,dword ptr [0x00824e24]
//   XREF to: 00824e24 (READ)
// 00438b2d: INC EDI
// 00438b2e: ADD ESP,0xc
// 00438b31: MOV dword ptr [0x00824e24],EDI
//   XREF to: 00824e24 (WRITE)
// 00438b37: JMP 0x004388df
//   XREF to: 004388df (UNCONDITIONAL_JUMP)
// 00438b3c: MOV dword ptr [EAX + 0x8],0x1
//   Label: LAB_00438b3c
//   XREF to: 00824e30 (WRITE)
//   XREF to: 00824e60 (WRITE)
// 00438b43: MOV dword ptr [EAX],ECX
//   XREF to: 00824e28 (WRITE)
//   XREF to: 00824e58 (WRITE)
// 00438b45: MOV dword ptr [EAX + 0x4],ECX
//   XREF to: 00824e2c (WRITE)
//   XREF to: 00824e5c (WRITE)
// 00438b48: JMP 0x0043892c
//   XREF to: 0043892c (UNCONDITIONAL_JUMP)
// 00438b4d: MOV EDX,ECX
//   Label: LAB_00438b4d
// 00438b4f: MOV ESI,dword ptr [EAX]
//   XREF to: 00824e28 (READ)
//   XREF to: 00824e58 (READ)
// 00438b51: NEG EDX
// 00438b53: CMP EDX,ESI
// 00438b55: JLE 0x00438b5e
//   XREF to: 00438b5e (CONDITIONAL_JUMP)
// 00438b57: MOV dword ptr [EAX],EDX
//   XREF to: 00824e28 (WRITE)
//   XREF to: 00824e58 (WRITE)
// 00438b59: JMP 0x0043892c
//   XREF to: 0043892c (UNCONDITIONAL_JUMP)
// 00438b5e: MOV EDI,dword ptr [EAX + 0x8]
//   Label: LAB_00438b5e
//   XREF to: 00824e30 (READ)
//   XREF to: 00824e60 (READ)
// 00438b61: MOV ECX,dword ptr [EAX + 0x4]
//   XREF to: 00824e2c (READ)
//   XREF to: 00824e5c (READ)
// 00438b64: CMP ECX,EDI
// 00438b66: JLE 0x00438b70
//   XREF to: 00438b70 (CONDITIONAL_JUMP)
// 00438b68: MOV dword ptr [EAX + 0x4],EDI
//   XREF to: 00824e2c (WRITE)
//   XREF to: 00824e5c (WRITE)
// 00438b6b: JMP 0x0043892c
//   XREF to: 0043892c (UNCONDITIONAL_JUMP)
// 00438b70: CMP EDX,ECX
//   Label: LAB_00438b70
// 00438b72: JLE 0x0043892c
//   XREF to: 0043892c (CONDITIONAL_JUMP)
// 00438b78: MOV dword ptr [EAX + 0x4],EDX
//   XREF to: 00824e2c (WRITE)
//   XREF to: 00824e5c (WRITE)
// 00438b7b: JMP 0x0043892c
//   XREF to: 0043892c (UNCONDITIONAL_JUMP)
