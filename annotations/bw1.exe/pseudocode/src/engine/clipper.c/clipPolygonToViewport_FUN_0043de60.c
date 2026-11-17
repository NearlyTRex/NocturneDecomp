// Name: engine_clipper.c_clipPolygonToViewport_FUN_0043de60
// Address: 0043de60
// Address Range: [[0043de60, 0043e5bf]]
// Convention: __cdecl
// Signature: void __cdecl engine_clipper_c_clipPolygonToViewport_FUN_0043de60(int vertex_count,int *vertex_indices)

#include "nocturne.h"

void __cdecl engine_clipper_c_clipPolygonToViewport_FUN_0043de60(int vertex_count,int *vertex_indices)

{
  uint uVar1;
  int iVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  char cVar6;
  int *piVar8;
  SRenderVertex *pSVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
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
  if (g_UINT_0061b4c0 == 0) {
    engine_prim_c_renderIndexedPolygonAdvanced_FUN_0053f720(vertex_indices,vertex_count);
  }
  else {
    uVar7 = 0xffffffff;
    cVar6 = -1;
    uVar11 = 0;
    iVar4 = 0;
    piVar8 = vertex_indices;
    if (0 < vertex_count) {
      do {
        uVar1 = g_SRenderVertex_ARRAY_00629014[*piVar8].projected_vertex.screen_x;
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
      g_INT_007c7554 = uVar11 ^ vertex_count;
    }
    else {
      if (uVar11 == 0) {
        if (g_INT_01c50948 != 0) {
          iVar4 = 0;
          if (0 < vertex_count) {
            do {
              iVar10 = *vertex_indices;
              iVar4 = iVar4 + 1;
              vertex_indices = vertex_indices + 1;
              g_INT_ARRAY_007c7b54[iVar4] = (int)(g_SRenderVertex_ARRAY_00629014 + iVar10);
            } while (iVar4 < vertex_count);
          }
          if (g_INT_00713a7c != 0) {
            if (vertex_count < 4) {
              iVar4 = engine_prim_c_calculateTriangleWindingOrder_FUN_0053dd60
                                (g_SRenderVertex_PTR_ARRAY_007c7b58[0],
                                 g_SRenderVertex_PTR_ARRAY_007c7b58[1],
                                 g_SRenderVertex_PTR_ARRAY_007c7b58[2]);
              if (iVar4 == 0) {
                return;
              }
            }
            else {
              iVar10 = 0;
              iVar4 = (vertex_count + -2) * 4;
              iVar12 = 0;
              if (0 < iVar4) {
                do {
                  iVar5 = engine_prim_c_calculateTriangleWindingOrder_FUN_0053dd60
                                    (g_SRenderVertex_PTR_ARRAY_007c7b58[0],
                                     *(SRenderVertex **)
                                      ((int)g_SRenderVertex_PTR_ARRAY_007c7b58 + iVar10 + 4),
                                     *(SRenderVertex **)
                                      ((int)g_SRenderVertex_PTR_ARRAY_007c7b58 + iVar10 + 8));
                  if (iVar5 == 0) {
                    iVar12 = iVar12 + 1;
                  }
                  iVar10 = iVar10 + 4;
                } while (iVar10 < iVar4);
              }
              if (iVar12 == vertex_count + -2) {
                return;
              }
            }
          }
          g_INT_01e7dac8 = g_INT_01e7dac8 + vertex_count + -2;
          engine_special_cpp_drawPolygon2_FUN_00582370
                    (g_SRenderVertex_PTR_ARRAY_007c7b58,vertex_count,g_BIT_INTEGER32_01c51d14.dword)
          ;
          return;
        }
        g_INT_007c7554 = vertex_count;
        if (0 < vertex_count) {
          pSVar9 = g_SRenderVertex_ARRAY_007c7558;
          local_28 = 0;
          do {
            pSVar14 = g_SRenderVertex_ARRAY_00629014 + *vertex_indices;
            pSVar13 = pSVar9;
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
            pSVar9 = pSVar9 + 1;
          } while (local_28 < vertex_count);
        }
      }
      else {
        g_INT_007c8420 = vertex_count;
        g_INT_007c8424 = 0;
        g_INT_007c8428 = 0;
        g_INT_007c842c = 0;
        g_INT_007c7554 = 0;
        local_24 = 0;
        if (0 < vertex_count) {
          pSVar9 = g_SRenderVertex_ARRAY_007c8a30;
          do {
            pSVar14 = g_SRenderVertex_ARRAY_00629014 + *vertex_indices;
            pSVar13 = pSVar9;
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
            pSVar9 = pSVar9 + 1;
          } while (local_24 < vertex_count);
        }
        local_20 = 0;
        if (0 < g_INT_007c8420) {
          pSVar9 = g_SRenderVertex_ARRAY_007c8a30;
          do {
            uVar7 = local_20 + 1;
            if (uVar7 == g_INT_007c8420) {
              uVar7 = uVar7 ^ g_INT_007c8420;
            }
            pSVar14 = g_SRenderVertex_ARRAY_007c8a30 + uVar7;
            bVar3 = (pSVar9->projected_vertex).transformed_z <=
                    (pSVar9->projected_vertex).transformed_x;
            if (g_SRenderVertex_ARRAY_007c8a30[uVar7].projected_vertex.transformed_z <=
                (pSVar14->projected_vertex).transformed_x) {
              bVar3 = bVar3 | 2;
            }
            switch(bVar3) {
            case 0:
              pSVar14 = pSVar9;
              pSVar13 = g_SRenderVertex_ARRAY_007c8430 + g_INT_007c8424;
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
              g_INT_007c8424 = g_INT_007c8424 + 1;
              break;
            case 1:
              engine_clipper_c_interpolateVertexRightClipAdvanced_FUN_0043cc70
                        (pSVar14,pSVar9,g_SRenderVertex_ARRAY_007c8430 + g_INT_007c8424);
              g_INT_007c8424 = g_INT_007c8424 + 1;
              break;
            case 2:
              pSVar13 = pSVar9;
              pSVar15 = g_SRenderVertex_ARRAY_007c8430 + g_INT_007c8424;
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
              g_INT_007c8424 = g_INT_007c8424 + 1;
              engine_clipper_c_interpolateVertexRightClipAdvanced_FUN_0043cc70
                        (pSVar9,pSVar14,g_SRenderVertex_ARRAY_007c8430 + g_INT_007c8424);
              g_INT_007c8424 = g_INT_007c8424 + 1;
            }
            local_20 = local_20 + 1;
            pSVar9 = pSVar9 + 1;
          } while (local_20 < g_INT_007c8420);
        }
        if (2 < g_INT_007c8424) {
          local_18 = 0;
          if (0 < g_INT_007c8424) {
            pSVar9 = g_SRenderVertex_ARRAY_007c8430;
            do {
              uVar7 = local_18 + 1;
              if (uVar7 == g_INT_007c8424) {
                uVar7 = uVar7 ^ g_INT_007c8424;
              }
              pSVar14 = g_SRenderVertex_ARRAY_007c8430 + uVar7;
              bVar3 = (pSVar9->projected_vertex).transformed_x <=
                      -(pSVar9->projected_vertex).transformed_z;
              if ((pSVar14->projected_vertex).transformed_x <=
                  -g_SRenderVertex_ARRAY_007c8430[uVar7].projected_vertex.transformed_z) {
                bVar3 = bVar3 | 2;
              }
              switch(bVar3) {
              case 0:
                pSVar14 = pSVar9;
                pSVar13 = g_SRenderVertex_ARRAY_007c9030 + g_INT_007c8428;
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
                g_INT_007c8428 = g_INT_007c8428 + 1;
                break;
              case 1:
                engine_clipper_c_interpolateVertexLeftClipAdvanced_FUN_0043cda0
                          (pSVar14,pSVar9,g_SRenderVertex_ARRAY_007c9030 + g_INT_007c8428);
                g_INT_007c8428 = g_INT_007c8428 + 1;
                break;
              case 2:
                pSVar13 = pSVar9;
                pSVar15 = g_SRenderVertex_ARRAY_007c9030 + g_INT_007c8428;
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
                g_INT_007c8428 = g_INT_007c8428 + 1;
                engine_clipper_c_interpolateVertexLeftClipAdvanced_FUN_0043cda0
                          (pSVar9,pSVar14,g_SRenderVertex_ARRAY_007c9030 + g_INT_007c8428);
                g_INT_007c8428 = g_INT_007c8428 + 1;
              }
              local_18 = local_18 + 1;
              pSVar9 = pSVar9 + 1;
            } while (local_18 < g_INT_007c8424);
          }
          if (2 < g_INT_007c8428) {
            local_14 = 0;
            if (0 < g_INT_007c8428) {
              pSVar9 = g_SRenderVertex_ARRAY_007c9030;
              do {
                uVar7 = local_14 + 1;
                if (uVar7 == g_INT_007c8428) {
                  uVar7 = uVar7 ^ g_INT_007c8428;
                }
                bVar3 = (pSVar9->projected_vertex).transformed_z <=
                        (pSVar9->projected_vertex).transformed_y;
                if (g_SRenderVertex_ARRAY_007c9030[uVar7].projected_vertex.transformed_z <=
                    g_SRenderVertex_ARRAY_007c9030[uVar7].projected_vertex.transformed_y) {
                  bVar3 = bVar3 | 2;
                }
                switch(bVar3) {
                case 0:
                  pSVar14 = pSVar9;
                  pSVar13 = g_SRenderVertex_ARRAY_007c9630 + g_INT_007c842c;
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
                  g_INT_007c842c = g_INT_007c842c + 1;
                  break;
                case 1:
                  engine_clipper_c_interpolateVertexTopClipAdvanced_FUN_0043ced0
                            (g_SRenderVertex_ARRAY_007c9030 + uVar7,pSVar9,
                             g_SRenderVertex_ARRAY_007c9630 + g_INT_007c842c);
                  g_INT_007c842c = g_INT_007c842c + 1;
                  break;
                case 2:
                  pSVar14 = pSVar9;
                  pSVar13 = g_SRenderVertex_ARRAY_007c9630 + g_INT_007c842c;
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
                  g_INT_007c842c = g_INT_007c842c + 1;
                  engine_clipper_c_interpolateVertexTopClipAdvanced_FUN_0043ced0
                            (pSVar9,g_SRenderVertex_ARRAY_007c9030 + uVar7,
                             g_SRenderVertex_ARRAY_007c9630 + g_INT_007c842c);
                  g_INT_007c842c = g_INT_007c842c + 1;
                }
                local_14 = local_14 + 1;
                pSVar9 = pSVar9 + 1;
              } while (local_14 < g_INT_007c8428);
            }
            if (2 < g_INT_007c842c) {
              local_1c = 0;
              if (0 < g_INT_007c842c) {
                pSVar9 = g_SRenderVertex_ARRAY_007c9630;
                do {
                  uVar7 = local_1c + 1;
                  if (uVar7 == g_INT_007c842c) {
                    uVar7 = uVar7 ^ g_INT_007c842c;
                  }
                  bVar3 = (pSVar9->projected_vertex).transformed_y <=
                          -(pSVar9->projected_vertex).transformed_z;
                  if (g_SRenderVertex_ARRAY_007c9630[uVar7].projected_vertex.transformed_y <=
                      -g_SRenderVertex_ARRAY_007c9630[uVar7].projected_vertex.transformed_z) {
                    bVar3 = bVar3 | 2;
                  }
                  switch(bVar3) {
                  case 0:
                    pSVar14 = pSVar9;
                    pSVar13 = g_SRenderVertex_ARRAY_007c7558 + g_INT_007c7554;
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
                    g_INT_007c7554 = g_INT_007c7554 + 1;
                    break;
                  case 1:
                    engine_clipper_c_interpolateVertexBottomClipAdvanced_FUN_0043d000
                              (g_SRenderVertex_ARRAY_007c9630 + uVar7,pSVar9,
                               g_SRenderVertex_ARRAY_007c7558 + g_INT_007c7554);
                    g_INT_007c7554 = g_INT_007c7554 + 1;
                    break;
                  case 2:
                    pSVar14 = pSVar9;
                    pSVar13 = g_SRenderVertex_ARRAY_007c7558 + g_INT_007c7554;
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
                    g_INT_007c7554 = g_INT_007c7554 + 1;
                    engine_clipper_c_interpolateVertexBottomClipAdvanced_FUN_0043d000
                              (pSVar9,g_SRenderVertex_ARRAY_007c9630 + uVar7,
                               g_SRenderVertex_ARRAY_007c7558 + g_INT_007c7554);
                    g_INT_007c7554 = g_INT_007c7554 + 1;
                  }
                  local_1c = local_1c + 1;
                  pSVar9 = pSVar9 + 1;
                } while (local_1c < g_INT_007c842c);
              }
              if (2 < g_INT_007c7554) {
                pSVar9 = g_SRenderVertex_ARRAY_007c7558;
                iVar4 = 0;
                if (0 < g_INT_007c7554) {
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
                      iVar12 = (pSVar9->projected_vertex).transformed_x;
                      iVar5 = -iVar10;
                      if (-iVar12 == iVar10 || iVar5 < iVar12) {
                        iVar12 = (pSVar9->projected_vertex).transformed_z;
                        iVar2 = (pSVar9->projected_vertex).transformed_y;
                        if (iVar12 < iVar2) {
                          (pSVar9->projected_vertex).transformed_y = iVar12;
                        }
                        else if (-iVar2 != iVar10 && iVar2 <= iVar5) {
                          (pSVar9->projected_vertex).transformed_y = iVar5;
                        }
                      }
                      else {
                        (pSVar9->projected_vertex).transformed_x = iVar5;
                      }
                    }
                    iVar4 = iVar4 + 1;
                    pSVar9 = pSVar9 + 1;
                  } while (iVar4 < g_INT_007c7554);
                }
              }
            }
          }
        }
      }
      if (2 < g_INT_007c7554) {
        engine_prim_c_renderScanlinePolygon_FUN_0053f080
                  (g_SRenderVertex_ARRAY_007c7558,g_INT_007c7554);
        return;
      }
    }
  }
  return;
}
