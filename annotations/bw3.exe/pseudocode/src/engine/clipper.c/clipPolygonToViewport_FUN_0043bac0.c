// Name: engine_clipper.c_clipPolygonToViewport_FUN_0043bac0
// Address: 0043bac0
// Address Range: [[0043bac0, 0043c21f]]
// Convention: __cdecl
// Signature: void __cdecl engine_clipper_c_clipPolygonToViewport_FUN_0043bac0(int vertex_count,int *vertex_indices)

#include "nocturne.h"

void __cdecl engine_clipper_c_clipPolygonToViewport_FUN_0043bac0(int vertex_count,int *vertex_indices)

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
  if (g_UINT_005fba40 == 0) {
    engine_prim_c_renderIndexedPolygonAdvanced_FUN_00517480(vertex_indices,vertex_count);
  }
  else {
    uVar7 = 0xffffffff;
    cVar6 = -1;
    uVar11 = 0;
    iVar4 = 0;
    piVar8 = vertex_indices;
    if (0 < vertex_count) {
      do {
        uVar1 = g_SRenderVertex_ARRAY_0060b014[*piVar8].projected_vertex.screen_x;
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
      g_INT_007e3e88 = uVar11 ^ vertex_count;
    }
    else {
      if (uVar11 == 0) {
        if (g_INT_01c6cee8 != 0) {
          iVar4 = 0;
          if (0 < vertex_count) {
            do {
              iVar10 = *vertex_indices;
              iVar4 = iVar4 + 1;
              vertex_indices = vertex_indices + 1;
              g_INT_ARRAY_007e4488[iVar4] = (int)(g_SRenderVertex_ARRAY_0060b014 + iVar10);
            } while (iVar4 < vertex_count);
          }
          if (g_INT_007303fc != 0) {
            if (vertex_count < 4) {
              iVar4 = engine_prim_c_calculateTriangleWindingOrder_FUN_00515ac0
                                (g_SRenderVertex_PTR_ARRAY_007e448c[0],
                                 g_SRenderVertex_PTR_ARRAY_007e448c[1],
                                 g_SRenderVertex_PTR_ARRAY_007e448c[2]);
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
                  iVar5 = engine_prim_c_calculateTriangleWindingOrder_FUN_00515ac0
                                    (g_SRenderVertex_PTR_ARRAY_007e448c[0],
                                     *(SRenderVertex **)
                                      ((int)g_SRenderVertex_PTR_ARRAY_007e448c + iVar10 + 4),
                                     *(SRenderVertex **)
                                      ((int)g_SRenderVertex_PTR_ARRAY_007e448c + iVar10 + 8));
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
          g_INT_01ed3198 = g_INT_01ed3198 + vertex_count + -2;
          engine_special_cpp_drawPolygon2_FUN_00565c40
                    (g_SRenderVertex_PTR_ARRAY_007e448c,vertex_count,g_BIT_INTEGER32_01c6e2b4.dword)
          ;
          return;
        }
        g_INT_007e3e88 = vertex_count;
        if (0 < vertex_count) {
          pSVar9 = g_SRenderVertex_ARRAY_007e3e8c;
          local_28 = 0;
          do {
            pSVar14 = g_SRenderVertex_ARRAY_0060b014 + *vertex_indices;
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
        g_INT_007e4d54 = vertex_count;
        g_INT_007e4d58 = 0;
        g_INT_007e4d5c = 0;
        g_INT_007e4d60 = 0;
        g_INT_007e3e88 = 0;
        local_24 = 0;
        if (0 < vertex_count) {
          pSVar9 = g_SRenderVertex_ARRAY_007e5364;
          do {
            pSVar14 = g_SRenderVertex_ARRAY_0060b014 + *vertex_indices;
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
        if (0 < g_INT_007e4d54) {
          pSVar9 = g_SRenderVertex_ARRAY_007e5364;
          do {
            uVar7 = local_20 + 1;
            if (uVar7 == g_INT_007e4d54) {
              uVar7 = uVar7 ^ g_INT_007e4d54;
            }
            pSVar14 = g_SRenderVertex_ARRAY_007e5364 + uVar7;
            bVar3 = (pSVar9->projected_vertex).transformed_z <=
                    (pSVar9->projected_vertex).transformed_x;
            if (g_SRenderVertex_ARRAY_007e5364[uVar7].projected_vertex.transformed_z <=
                (pSVar14->projected_vertex).transformed_x) {
              bVar3 = bVar3 | 2;
            }
            switch(bVar3) {
            case 0:
              pSVar14 = pSVar9;
              pSVar13 = g_SRenderVertex_ARRAY_007e4d64 + g_INT_007e4d58;
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
              g_INT_007e4d58 = g_INT_007e4d58 + 1;
              break;
            case 1:
              engine_clipper_c_interpolateVertexRightClipAdvanced_FUN_0043a8c0
                        (pSVar14,pSVar9,g_SRenderVertex_ARRAY_007e4d64 + g_INT_007e4d58);
              g_INT_007e4d58 = g_INT_007e4d58 + 1;
              break;
            case 2:
              pSVar13 = pSVar9;
              pSVar15 = g_SRenderVertex_ARRAY_007e4d64 + g_INT_007e4d58;
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
              g_INT_007e4d58 = g_INT_007e4d58 + 1;
              engine_clipper_c_interpolateVertexRightClipAdvanced_FUN_0043a8c0
                        (pSVar9,pSVar14,g_SRenderVertex_ARRAY_007e4d64 + g_INT_007e4d58);
              g_INT_007e4d58 = g_INT_007e4d58 + 1;
            }
            local_20 = local_20 + 1;
            pSVar9 = pSVar9 + 1;
          } while (local_20 < g_INT_007e4d54);
        }
        if (2 < g_INT_007e4d58) {
          local_18 = 0;
          if (0 < g_INT_007e4d58) {
            pSVar9 = g_SRenderVertex_ARRAY_007e4d64;
            do {
              uVar7 = local_18 + 1;
              if (uVar7 == g_INT_007e4d58) {
                uVar7 = uVar7 ^ g_INT_007e4d58;
              }
              pSVar14 = g_SRenderVertex_ARRAY_007e4d64 + uVar7;
              bVar3 = (pSVar9->projected_vertex).transformed_x <=
                      -(pSVar9->projected_vertex).transformed_z;
              if ((pSVar14->projected_vertex).transformed_x <=
                  -g_SRenderVertex_ARRAY_007e4d64[uVar7].projected_vertex.transformed_z) {
                bVar3 = bVar3 | 2;
              }
              switch(bVar3) {
              case 0:
                pSVar14 = pSVar9;
                pSVar13 = g_SRenderVertex_ARRAY_007e5964 + g_INT_007e4d5c;
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
                g_INT_007e4d5c = g_INT_007e4d5c + 1;
                break;
              case 1:
                engine_clipper_c_interpolateVertexLeftClipAdvanced_FUN_0043a9f0
                          (pSVar14,pSVar9,g_SRenderVertex_ARRAY_007e5964 + g_INT_007e4d5c);
                g_INT_007e4d5c = g_INT_007e4d5c + 1;
                break;
              case 2:
                pSVar13 = pSVar9;
                pSVar15 = g_SRenderVertex_ARRAY_007e5964 + g_INT_007e4d5c;
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
                g_INT_007e4d5c = g_INT_007e4d5c + 1;
                engine_clipper_c_interpolateVertexLeftClipAdvanced_FUN_0043a9f0
                          (pSVar9,pSVar14,g_SRenderVertex_ARRAY_007e5964 + g_INT_007e4d5c);
                g_INT_007e4d5c = g_INT_007e4d5c + 1;
              }
              local_18 = local_18 + 1;
              pSVar9 = pSVar9 + 1;
            } while (local_18 < g_INT_007e4d58);
          }
          if (2 < g_INT_007e4d5c) {
            local_14 = 0;
            if (0 < g_INT_007e4d5c) {
              pSVar9 = g_SRenderVertex_ARRAY_007e5964;
              do {
                uVar7 = local_14 + 1;
                if (uVar7 == g_INT_007e4d5c) {
                  uVar7 = uVar7 ^ g_INT_007e4d5c;
                }
                bVar3 = (pSVar9->projected_vertex).transformed_z <=
                        (pSVar9->projected_vertex).transformed_y;
                if (g_SRenderVertex_ARRAY_007e5964[uVar7].projected_vertex.transformed_z <=
                    g_SRenderVertex_ARRAY_007e5964[uVar7].projected_vertex.transformed_y) {
                  bVar3 = bVar3 | 2;
                }
                switch(bVar3) {
                case 0:
                  pSVar14 = pSVar9;
                  pSVar13 = g_SRenderVertex_ARRAY_007e5f64 + g_INT_007e4d60;
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
                  g_INT_007e4d60 = g_INT_007e4d60 + 1;
                  break;
                case 1:
                  engine_clipper_c_interpolateVertexTopClipAdvanced_FUN_0043ab20
                            (g_SRenderVertex_ARRAY_007e5964 + uVar7,pSVar9,
                             g_SRenderVertex_ARRAY_007e5f64 + g_INT_007e4d60);
                  g_INT_007e4d60 = g_INT_007e4d60 + 1;
                  break;
                case 2:
                  pSVar14 = pSVar9;
                  pSVar13 = g_SRenderVertex_ARRAY_007e5f64 + g_INT_007e4d60;
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
                  g_INT_007e4d60 = g_INT_007e4d60 + 1;
                  engine_clipper_c_interpolateVertexTopClipAdvanced_FUN_0043ab20
                            (pSVar9,g_SRenderVertex_ARRAY_007e5964 + uVar7,
                             g_SRenderVertex_ARRAY_007e5f64 + g_INT_007e4d60);
                  g_INT_007e4d60 = g_INT_007e4d60 + 1;
                }
                local_14 = local_14 + 1;
                pSVar9 = pSVar9 + 1;
              } while (local_14 < g_INT_007e4d5c);
            }
            if (2 < g_INT_007e4d60) {
              local_1c = 0;
              if (0 < g_INT_007e4d60) {
                pSVar9 = g_SRenderVertex_ARRAY_007e5f64;
                do {
                  uVar7 = local_1c + 1;
                  if (uVar7 == g_INT_007e4d60) {
                    uVar7 = uVar7 ^ g_INT_007e4d60;
                  }
                  bVar3 = (pSVar9->projected_vertex).transformed_y <=
                          -(pSVar9->projected_vertex).transformed_z;
                  if (g_SRenderVertex_ARRAY_007e5f64[uVar7].projected_vertex.transformed_y <=
                      -g_SRenderVertex_ARRAY_007e5f64[uVar7].projected_vertex.transformed_z) {
                    bVar3 = bVar3 | 2;
                  }
                  switch(bVar3) {
                  case 0:
                    pSVar14 = pSVar9;
                    pSVar13 = g_SRenderVertex_ARRAY_007e3e8c + g_INT_007e3e88;
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
                    g_INT_007e3e88 = g_INT_007e3e88 + 1;
                    break;
                  case 1:
                    engine_clipper_c_interpolateVertexBottomClipAdvanced_FUN_0043ac50
                              (g_SRenderVertex_ARRAY_007e5f64 + uVar7,pSVar9,
                               g_SRenderVertex_ARRAY_007e3e8c + g_INT_007e3e88);
                    g_INT_007e3e88 = g_INT_007e3e88 + 1;
                    break;
                  case 2:
                    pSVar14 = pSVar9;
                    pSVar13 = g_SRenderVertex_ARRAY_007e3e8c + g_INT_007e3e88;
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
                    g_INT_007e3e88 = g_INT_007e3e88 + 1;
                    engine_clipper_c_interpolateVertexBottomClipAdvanced_FUN_0043ac50
                              (pSVar9,g_SRenderVertex_ARRAY_007e5f64 + uVar7,
                               g_SRenderVertex_ARRAY_007e3e8c + g_INT_007e3e88);
                    g_INT_007e3e88 = g_INT_007e3e88 + 1;
                  }
                  local_1c = local_1c + 1;
                  pSVar9 = pSVar9 + 1;
                } while (local_1c < g_INT_007e4d60);
              }
              if (2 < g_INT_007e3e88) {
                pSVar9 = g_SRenderVertex_ARRAY_007e3e8c;
                iVar4 = 0;
                if (0 < g_INT_007e3e88) {
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
                  } while (iVar4 < g_INT_007e3e88);
                }
              }
            }
          }
        }
      }
      if (2 < g_INT_007e3e88) {
        engine_prim_c_renderScanlinePolygon_FUN_00516de0
                  (g_SRenderVertex_ARRAY_007e3e8c,g_INT_007e3e88);
        return;
      }
    }
  }
  return;
}
