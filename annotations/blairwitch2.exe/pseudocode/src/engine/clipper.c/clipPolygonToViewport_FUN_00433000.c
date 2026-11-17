// Name: engine_clipper.c_clipPolygonToViewport_FUN_00433000
// Address: 00433000
// Address Range: [[00433000, 0043375f]]
// Convention: __cdecl
// Signature: void __cdecl engine_clipper_c_clipPolygonToViewport_FUN_00433000(int vertex_count,int *vertex_indices)

#include "nocturne.h"

void __cdecl engine_clipper_c_clipPolygonToViewport_FUN_00433000(int vertex_count,int *vertex_indices)

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
  if (g_UINT_006141e0 == 0) {
    engine_prim_c_renderIndexedPolygonAdvanced_FUN_0051e130(vertex_indices,vertex_count);
  }
  else {
    uVar7 = 0xffffffff;
    cVar6 = -1;
    uVar11 = 0;
    iVar4 = 0;
    piVar8 = vertex_indices;
    if (0 < vertex_count) {
      do {
        uVar1 = g_SRenderVertex_ARRAY_00622014[*piVar8].projected_vertex.screen_x;
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
      g_INT_007bee30 = uVar11 ^ vertex_count;
    }
    else {
      if (uVar11 == 0) {
        if (g_INT_01c37788 != 0) {
          iVar4 = 0;
          if (0 < vertex_count) {
            do {
              iVar10 = *vertex_indices;
              iVar4 = iVar4 + 1;
              vertex_indices = vertex_indices + 1;
              g_INT_ARRAY_007bf430[iVar4] = (int)(g_SRenderVertex_ARRAY_00622014 + iVar10);
            } while (iVar4 < vertex_count);
          }
          if (g_INT_0070ca7c != 0) {
            if (vertex_count < 4) {
              iVar4 = engine_prim_c_calculateTriangleWindingOrder_FUN_0051c760
                                (g_SRenderVertex_PTR_ARRAY_007bf434[0],
                                 g_SRenderVertex_PTR_ARRAY_007bf434[1],
                                 g_SRenderVertex_PTR_ARRAY_007bf434[2]);
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
                  iVar5 = engine_prim_c_calculateTriangleWindingOrder_FUN_0051c760
                                    (g_SRenderVertex_PTR_ARRAY_007bf434[0],
                                     *(SRenderVertex **)
                                      ((int)g_SRenderVertex_PTR_ARRAY_007bf434 + iVar10 + 4),
                                     *(SRenderVertex **)
                                      ((int)g_SRenderVertex_PTR_ARRAY_007bf434 + iVar10 + 8));
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
          g_INT_01e61b58 = g_INT_01e61b58 + vertex_count + -2;
          engine_special_cpp_drawPolygon2_FUN_0055f920
                    (g_SRenderVertex_PTR_ARRAY_007bf434,vertex_count,g_BIT_INTEGER32_01c38b54.dword)
          ;
          return;
        }
        g_INT_007bee30 = vertex_count;
        if (0 < vertex_count) {
          pSVar9 = g_SRenderVertex_ARRAY_007bee34;
          local_28 = 0;
          do {
            pSVar14 = g_SRenderVertex_ARRAY_00622014 + *vertex_indices;
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
        g_INT_007bfcfc = vertex_count;
        g_INT_007bfd00 = 0;
        g_INT_007bfd04 = 0;
        g_INT_007bfd08 = 0;
        g_INT_007bee30 = 0;
        local_24 = 0;
        if (0 < vertex_count) {
          pSVar9 = g_SRenderVertex_ARRAY_007c030c;
          do {
            pSVar14 = g_SRenderVertex_ARRAY_00622014 + *vertex_indices;
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
        if (0 < g_INT_007bfcfc) {
          pSVar9 = g_SRenderVertex_ARRAY_007c030c;
          do {
            uVar7 = local_20 + 1;
            if (uVar7 == g_INT_007bfcfc) {
              uVar7 = uVar7 ^ g_INT_007bfcfc;
            }
            pSVar14 = g_SRenderVertex_ARRAY_007c030c + uVar7;
            bVar3 = (pSVar9->projected_vertex).transformed_z <=
                    (pSVar9->projected_vertex).transformed_x;
            if (g_SRenderVertex_ARRAY_007c030c[uVar7].projected_vertex.transformed_z <=
                (pSVar14->projected_vertex).transformed_x) {
              bVar3 = bVar3 | 2;
            }
            switch(bVar3) {
            case 0:
              pSVar14 = pSVar9;
              pSVar13 = g_SRenderVertex_ARRAY_007bfd0c + g_INT_007bfd00;
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
              g_INT_007bfd00 = g_INT_007bfd00 + 1;
              break;
            case 1:
              engine_clipper_c_interpolateVertexRightClipAdvanced_FUN_00431e10
                        (pSVar14,pSVar9,g_SRenderVertex_ARRAY_007bfd0c + g_INT_007bfd00);
              g_INT_007bfd00 = g_INT_007bfd00 + 1;
              break;
            case 2:
              pSVar13 = pSVar9;
              pSVar15 = g_SRenderVertex_ARRAY_007bfd0c + g_INT_007bfd00;
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
              g_INT_007bfd00 = g_INT_007bfd00 + 1;
              engine_clipper_c_interpolateVertexRightClipAdvanced_FUN_00431e10
                        (pSVar9,pSVar14,g_SRenderVertex_ARRAY_007bfd0c + g_INT_007bfd00);
              g_INT_007bfd00 = g_INT_007bfd00 + 1;
            }
            local_20 = local_20 + 1;
            pSVar9 = pSVar9 + 1;
          } while (local_20 < g_INT_007bfcfc);
        }
        if (2 < g_INT_007bfd00) {
          local_18 = 0;
          if (0 < g_INT_007bfd00) {
            pSVar9 = g_SRenderVertex_ARRAY_007bfd0c;
            do {
              uVar7 = local_18 + 1;
              if (uVar7 == g_INT_007bfd00) {
                uVar7 = uVar7 ^ g_INT_007bfd00;
              }
              pSVar14 = g_SRenderVertex_ARRAY_007bfd0c + uVar7;
              bVar3 = (pSVar9->projected_vertex).transformed_x <=
                      -(pSVar9->projected_vertex).transformed_z;
              if ((pSVar14->projected_vertex).transformed_x <=
                  -g_SRenderVertex_ARRAY_007bfd0c[uVar7].projected_vertex.transformed_z) {
                bVar3 = bVar3 | 2;
              }
              switch(bVar3) {
              case 0:
                pSVar14 = pSVar9;
                pSVar13 = g_SRenderVertex_ARRAY_007c090c + g_INT_007bfd04;
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
                g_INT_007bfd04 = g_INT_007bfd04 + 1;
                break;
              case 1:
                engine_clipper_c_interpolateVertexLeftClipAdvanced_FUN_00431f40
                          (pSVar14,pSVar9,g_SRenderVertex_ARRAY_007c090c + g_INT_007bfd04);
                g_INT_007bfd04 = g_INT_007bfd04 + 1;
                break;
              case 2:
                pSVar13 = pSVar9;
                pSVar15 = g_SRenderVertex_ARRAY_007c090c + g_INT_007bfd04;
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
                g_INT_007bfd04 = g_INT_007bfd04 + 1;
                engine_clipper_c_interpolateVertexLeftClipAdvanced_FUN_00431f40
                          (pSVar9,pSVar14,g_SRenderVertex_ARRAY_007c090c + g_INT_007bfd04);
                g_INT_007bfd04 = g_INT_007bfd04 + 1;
              }
              local_18 = local_18 + 1;
              pSVar9 = pSVar9 + 1;
            } while (local_18 < g_INT_007bfd00);
          }
          if (2 < g_INT_007bfd04) {
            local_14 = 0;
            if (0 < g_INT_007bfd04) {
              pSVar9 = g_SRenderVertex_ARRAY_007c090c;
              do {
                uVar7 = local_14 + 1;
                if (uVar7 == g_INT_007bfd04) {
                  uVar7 = uVar7 ^ g_INT_007bfd04;
                }
                bVar3 = (pSVar9->projected_vertex).transformed_z <=
                        (pSVar9->projected_vertex).transformed_y;
                if (g_SRenderVertex_ARRAY_007c090c[uVar7].projected_vertex.transformed_z <=
                    g_SRenderVertex_ARRAY_007c090c[uVar7].projected_vertex.transformed_y) {
                  bVar3 = bVar3 | 2;
                }
                switch(bVar3) {
                case 0:
                  pSVar14 = pSVar9;
                  pSVar13 = g_SRenderVertex_ARRAY_007c0f0c + g_INT_007bfd08;
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
                  g_INT_007bfd08 = g_INT_007bfd08 + 1;
                  break;
                case 1:
                  engine_clipper_c_interpolateVertexTopClipAdvanced_FUN_00432070
                            (g_SRenderVertex_ARRAY_007c090c + uVar7,pSVar9,
                             g_SRenderVertex_ARRAY_007c0f0c + g_INT_007bfd08);
                  g_INT_007bfd08 = g_INT_007bfd08 + 1;
                  break;
                case 2:
                  pSVar14 = pSVar9;
                  pSVar13 = g_SRenderVertex_ARRAY_007c0f0c + g_INT_007bfd08;
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
                  g_INT_007bfd08 = g_INT_007bfd08 + 1;
                  engine_clipper_c_interpolateVertexTopClipAdvanced_FUN_00432070
                            (pSVar9,g_SRenderVertex_ARRAY_007c090c + uVar7,
                             g_SRenderVertex_ARRAY_007c0f0c + g_INT_007bfd08);
                  g_INT_007bfd08 = g_INT_007bfd08 + 1;
                }
                local_14 = local_14 + 1;
                pSVar9 = pSVar9 + 1;
              } while (local_14 < g_INT_007bfd04);
            }
            if (2 < g_INT_007bfd08) {
              local_1c = 0;
              if (0 < g_INT_007bfd08) {
                pSVar9 = g_SRenderVertex_ARRAY_007c0f0c;
                do {
                  uVar7 = local_1c + 1;
                  if (uVar7 == g_INT_007bfd08) {
                    uVar7 = uVar7 ^ g_INT_007bfd08;
                  }
                  bVar3 = (pSVar9->projected_vertex).transformed_y <=
                          -(pSVar9->projected_vertex).transformed_z;
                  if (g_SRenderVertex_ARRAY_007c0f0c[uVar7].projected_vertex.transformed_y <=
                      -g_SRenderVertex_ARRAY_007c0f0c[uVar7].projected_vertex.transformed_z) {
                    bVar3 = bVar3 | 2;
                  }
                  switch(bVar3) {
                  case 0:
                    pSVar14 = pSVar9;
                    pSVar13 = g_SRenderVertex_ARRAY_007bee34 + g_INT_007bee30;
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
                    g_INT_007bee30 = g_INT_007bee30 + 1;
                    break;
                  case 1:
                    engine_clipper_c_interpolateVertexBottomClipAdvanced_FUN_004321a0
                              (g_SRenderVertex_ARRAY_007c0f0c + uVar7,pSVar9,
                               g_SRenderVertex_ARRAY_007bee34 + g_INT_007bee30);
                    g_INT_007bee30 = g_INT_007bee30 + 1;
                    break;
                  case 2:
                    pSVar14 = pSVar9;
                    pSVar13 = g_SRenderVertex_ARRAY_007bee34 + g_INT_007bee30;
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
                    g_INT_007bee30 = g_INT_007bee30 + 1;
                    engine_clipper_c_interpolateVertexBottomClipAdvanced_FUN_004321a0
                              (pSVar9,g_SRenderVertex_ARRAY_007c0f0c + uVar7,
                               g_SRenderVertex_ARRAY_007bee34 + g_INT_007bee30);
                    g_INT_007bee30 = g_INT_007bee30 + 1;
                  }
                  local_1c = local_1c + 1;
                  pSVar9 = pSVar9 + 1;
                } while (local_1c < g_INT_007bfd08);
              }
              if (2 < g_INT_007bee30) {
                pSVar9 = g_SRenderVertex_ARRAY_007bee34;
                iVar4 = 0;
                if (0 < g_INT_007bee30) {
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
                  } while (iVar4 < g_INT_007bee30);
                }
              }
            }
          }
        }
      }
      if (2 < g_INT_007bee30) {
        engine_prim_c_renderScanlinePolygon_FUN_0051da80
                  (g_SRenderVertex_ARRAY_007bee34,g_INT_007bee30);
        return;
      }
    }
  }
  return;
}
