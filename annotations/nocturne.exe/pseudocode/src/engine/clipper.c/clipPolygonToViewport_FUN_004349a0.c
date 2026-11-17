// Name: engine_clipper.c_clipPolygonToViewport_FUN_004349a0
// Address: 004349a0
// Address Range: [[004349a0, 004350ff]]
// Convention: __cdecl
// Signature: void __cdecl engine_clipper_c_clipPolygonToViewport_FUN_004349a0(int vertex_count,int *vertex_indices)

#include "nocturne.h"

void __cdecl engine_clipper_c_clipPolygonToViewport_FUN_004349a0(int vertex_count,int *vertex_indices)

{
  uint uVar1;
  int iVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  char cVar6;
  SRenderVertex *pSVar8;
  int *piVar9;
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
  if (INT_005b7644 == 0) {
    engine_prim_c_renderIndexedPolygonAdvanced_FUN_004fb390(vertex_indices,vertex_count);
  }
  else {
    uVar7 = 0xffffffff;
    cVar6 = -1;
    iVar10 = 0;
    iVar4 = 0;
    piVar9 = vertex_indices;
    if (0 < vertex_count) {
      do {
        uVar1 = g_SRenderVertex_ARRAY_005c5014[*piVar9].projected_vertex.screen_x;
        if ((uVar1 & 0x80000000) != 0) {
          iVar10 = iVar10 + 1;
        }
        piVar9 = piVar9 + 1;
        iVar4 = iVar4 + 1;
        uVar7 = uVar7 & uVar1;
        cVar6 = (char)uVar7;
      } while (iVar4 < vertex_count);
    }
    if ((iVar10 == vertex_count) && (cVar6 != '\0')) {
      g_INT_00766c70 = 0;
    }
    else {
      if (iVar10 == 0) {
        if (g_UseExternalRenderer != 0) {
          iVar4 = 0;
          if (0 < vertex_count) {
            do {
              iVar10 = *vertex_indices;
              iVar4 = iVar4 + 1;
              vertex_indices = vertex_indices + 1;
              g_INT_ARRAY_00767270[iVar4] = (int)(g_SRenderVertex_ARRAY_005c5014 + iVar10);
            } while (iVar4 < vertex_count);
          }
          if (g_INT_006b0280 != 0) {
            if (vertex_count < 4) {
              iVar4 = engine_prim_c_calculateTriangleWindingOrder_FUN_004f9a10
                                (g_SRenderVertex_PTR_00767274,g_SRenderVertex_PTR_00767278,
                                 g_SRenderVertex_PTR_0076727c);
              if (iVar4 == 0) {
                return;
              }
            }
            else {
              iVar10 = 0;
              iVar4 = (vertex_count + -2) * 4;
              iVar11 = 0;
              if (0 < iVar4) {
                do {
                  iVar5 = engine_prim_c_calculateTriangleWindingOrder_FUN_004f9a10
                                    (g_SRenderVertex_PTR_00767274,
                                     *(SRenderVertex **)
                                      ((int)&g_SRenderVertex_PTR_00767278 + iVar10),
                                     *(SRenderVertex **)
                                      ((int)&g_SRenderVertex_PTR_0076727c + iVar10));
                  if (iVar5 == 0) {
                    iVar11 = iVar11 + 1;
                  }
                  iVar10 = iVar10 + 4;
                } while (iVar10 < iVar4);
              }
              if (iVar11 == vertex_count + -2) {
                return;
              }
            }
          }
          g_RenderedTriangleCount = g_RenderedTriangleCount + 1;
          engine_special_cpp_drawPolygon2_FUN_00532650
                    (&g_SRenderVertex_PTR_00767274,vertex_count,g_RenderStateFlags.dword);
          return;
        }
        g_INT_00766c70 = vertex_count;
        if (0 < vertex_count) {
          pSVar8 = g_SRenderVertex_ARRAY_00766c74;
          local_24 = 0;
          do {
            pSVar13 = g_SRenderVertex_ARRAY_005c5014 + *vertex_indices;
            pSVar12 = pSVar8;
            for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
              (pSVar12->projected_vertex).transformed_x = (pSVar13->projected_vertex).transformed_x;
              pSVar13 = (SRenderVertex *)&(pSVar13->projected_vertex).transformed_y;
              pSVar12 = (SRenderVertex *)&(pSVar12->projected_vertex).transformed_y;
            }
            for (iVar4 = 0; iVar4 != 0; iVar4 = iVar4 + -1) {
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
      }
      else {
        iVar4 = 0;
        g_INT_00767b3c = vertex_count;
        g_INT_00767b40 = 0;
        g_INT_00767b44 = 0;
        g_INT_00767b48 = 0;
        g_INT_00766c70 = 0;
        if (0 < vertex_count) {
          pSVar8 = g_SRenderVertex_ARRAY_0076814c;
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
            iVar4 = iVar4 + 1;
            local_28 = local_28 + 1;
            pSVar8 = pSVar8 + 1;
          } while (iVar4 < vertex_count);
        }
        local_14 = 0;
        if (0 < g_INT_00767b3c) {
          pSVar8 = g_SRenderVertex_ARRAY_0076814c;
          do {
            uVar7 = local_14 + 1;
            if (uVar7 == g_INT_00767b3c) {
              uVar7 = uVar7 ^ g_INT_00767b3c;
            }
            pSVar13 = g_SRenderVertex_ARRAY_0076814c + uVar7;
            bVar3 = (pSVar8->projected_vertex).transformed_z <=
                    (pSVar8->projected_vertex).transformed_x;
            if (g_SRenderVertex_ARRAY_0076814c[uVar7].projected_vertex.transformed_z <=
                (pSVar13->projected_vertex).transformed_x) {
              bVar3 = bVar3 | 2;
            }
            switch(bVar3) {
            case 0:
              pSVar13 = pSVar8;
              pSVar12 = g_SRenderVertex_ARRAY_00767b4c + g_INT_00767b40;
              for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
                (pSVar12->projected_vertex).transformed_x =
                     (pSVar13->projected_vertex).transformed_x;
                pSVar13 = (SRenderVertex *)((int)pSVar13 + (uint)bVar15 * -8 + 4);
                pSVar12 = (SRenderVertex *)((int)pSVar12 + ((uint)bVar15 * -2 + 1) * 4);
              }
              for (iVar4 = 0; iVar4 != 0; iVar4 = iVar4 + -1) {
                *(char *)&(pSVar12->projected_vertex).transformed_x =
                     (char)(pSVar13->projected_vertex).transformed_x;
                pSVar13 = (SRenderVertex *)((int)pSVar13 + (uint)bVar15 * -2 + 1);
                pSVar12 = (SRenderVertex *)((int)pSVar12 + (uint)bVar15 * -2 + 1);
              }
              g_INT_00767b40 = g_INT_00767b40 + 1;
              break;
            case 1:
              engine_clipper_c_interpolateVertexRightClipAdvanced_FUN_004337a0
                        (pSVar13,pSVar8,g_SRenderVertex_ARRAY_00767b4c + g_INT_00767b40);
              g_INT_00767b40 = g_INT_00767b40 + 1;
              break;
            case 2:
              pSVar12 = pSVar8;
              pSVar14 = g_SRenderVertex_ARRAY_00767b4c + g_INT_00767b40;
              for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
                (pSVar14->projected_vertex).transformed_x =
                     (pSVar12->projected_vertex).transformed_x;
                pSVar12 = (SRenderVertex *)((int)pSVar12 + (uint)bVar15 * -8 + 4);
                pSVar14 = (SRenderVertex *)((int)pSVar14 + ((uint)bVar15 * -2 + 1) * 4);
              }
              for (iVar4 = 0; iVar4 != 0; iVar4 = iVar4 + -1) {
                *(char *)&(pSVar14->projected_vertex).transformed_x =
                     (char)(pSVar12->projected_vertex).transformed_x;
                pSVar12 = (SRenderVertex *)((int)pSVar12 + (uint)bVar15 * -2 + 1);
                pSVar14 = (SRenderVertex *)((int)pSVar14 + (uint)bVar15 * -2 + 1);
              }
              g_INT_00767b40 = g_INT_00767b40 + 1;
              engine_clipper_c_interpolateVertexRightClipAdvanced_FUN_004337a0
                        (pSVar8,pSVar13,g_SRenderVertex_ARRAY_00767b4c + g_INT_00767b40);
              g_INT_00767b40 = g_INT_00767b40 + 1;
            }
            local_14 = local_14 + 1;
            pSVar8 = pSVar8 + 1;
          } while (local_14 < g_INT_00767b3c);
        }
        if (2 < g_INT_00767b40) {
          local_20 = 0;
          if (0 < g_INT_00767b40) {
            pSVar8 = g_SRenderVertex_ARRAY_00767b4c;
            do {
              uVar7 = local_20 + 1;
              if (uVar7 == g_INT_00767b40) {
                uVar7 = uVar7 ^ g_INT_00767b40;
              }
              pSVar13 = g_SRenderVertex_ARRAY_00767b4c + uVar7;
              bVar3 = (pSVar8->projected_vertex).transformed_x <=
                      -(pSVar8->projected_vertex).transformed_z;
              if ((pSVar13->projected_vertex).transformed_x <=
                  -g_SRenderVertex_ARRAY_00767b4c[uVar7].projected_vertex.transformed_z) {
                bVar3 = bVar3 | 2;
              }
              switch(bVar3) {
              case 0:
                pSVar13 = pSVar8;
                pSVar12 = g_SRenderVertex_ARRAY_0076874c + g_INT_00767b44;
                for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
                  (pSVar12->projected_vertex).transformed_x =
                       (pSVar13->projected_vertex).transformed_x;
                  pSVar13 = (SRenderVertex *)((int)pSVar13 + (uint)bVar15 * -8 + 4);
                  pSVar12 = (SRenderVertex *)((int)pSVar12 + ((uint)bVar15 * -2 + 1) * 4);
                }
                for (iVar4 = 0; iVar4 != 0; iVar4 = iVar4 + -1) {
                  *(char *)&(pSVar12->projected_vertex).transformed_x =
                       (char)(pSVar13->projected_vertex).transformed_x;
                  pSVar13 = (SRenderVertex *)((int)pSVar13 + (uint)bVar15 * -2 + 1);
                  pSVar12 = (SRenderVertex *)((int)pSVar12 + (uint)bVar15 * -2 + 1);
                }
                g_INT_00767b44 = g_INT_00767b44 + 1;
                break;
              case 1:
                engine_clipper_c_interpolateVertexLeftClipAdvanced_FUN_004338d0
                          (pSVar13,pSVar8,g_SRenderVertex_ARRAY_0076874c + g_INT_00767b44);
                g_INT_00767b44 = g_INT_00767b44 + 1;
                break;
              case 2:
                pSVar12 = pSVar8;
                pSVar14 = g_SRenderVertex_ARRAY_0076874c + g_INT_00767b44;
                for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
                  (pSVar14->projected_vertex).transformed_x =
                       (pSVar12->projected_vertex).transformed_x;
                  pSVar12 = (SRenderVertex *)((int)pSVar12 + (uint)bVar15 * -8 + 4);
                  pSVar14 = (SRenderVertex *)((int)pSVar14 + ((uint)bVar15 * -2 + 1) * 4);
                }
                for (iVar4 = 0; iVar4 != 0; iVar4 = iVar4 + -1) {
                  *(char *)&(pSVar14->projected_vertex).transformed_x =
                       (char)(pSVar12->projected_vertex).transformed_x;
                  pSVar12 = (SRenderVertex *)((int)pSVar12 + (uint)bVar15 * -2 + 1);
                  pSVar14 = (SRenderVertex *)((int)pSVar14 + (uint)bVar15 * -2 + 1);
                }
                g_INT_00767b44 = g_INT_00767b44 + 1;
                engine_clipper_c_interpolateVertexLeftClipAdvanced_FUN_004338d0
                          (pSVar8,pSVar13,g_SRenderVertex_ARRAY_0076874c + g_INT_00767b44);
                g_INT_00767b44 = g_INT_00767b44 + 1;
              }
              local_20 = local_20 + 1;
              pSVar8 = pSVar8 + 1;
            } while (local_20 < g_INT_00767b40);
          }
          if (2 < g_INT_00767b44) {
            local_1c = 0;
            if (0 < g_INT_00767b44) {
              pSVar8 = g_SRenderVertex_ARRAY_0076874c;
              do {
                uVar7 = local_1c + 1;
                if (uVar7 == g_INT_00767b44) {
                  uVar7 = uVar7 ^ g_INT_00767b44;
                }
                bVar3 = (pSVar8->projected_vertex).transformed_z <=
                        (pSVar8->projected_vertex).transformed_y;
                if (g_SRenderVertex_ARRAY_0076874c[uVar7].projected_vertex.transformed_z <=
                    g_SRenderVertex_ARRAY_0076874c[uVar7].projected_vertex.transformed_y) {
                  bVar3 = bVar3 | 2;
                }
                switch(bVar3) {
                case 0:
                  pSVar13 = pSVar8;
                  pSVar12 = g_SRenderVertex_ARRAY_00768d4c + g_INT_00767b48;
                  for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
                    (pSVar12->projected_vertex).transformed_x =
                         (pSVar13->projected_vertex).transformed_x;
                    pSVar13 = (SRenderVertex *)((int)pSVar13 + (uint)bVar15 * -8 + 4);
                    pSVar12 = (SRenderVertex *)((int)pSVar12 + ((uint)bVar15 * -2 + 1) * 4);
                  }
                  for (iVar4 = 0; iVar4 != 0; iVar4 = iVar4 + -1) {
                    *(char *)&(pSVar12->projected_vertex).transformed_x =
                         (char)(pSVar13->projected_vertex).transformed_x;
                    pSVar13 = (SRenderVertex *)((int)pSVar13 + (uint)bVar15 * -2 + 1);
                    pSVar12 = (SRenderVertex *)((int)pSVar12 + (uint)bVar15 * -2 + 1);
                  }
                  g_INT_00767b48 = g_INT_00767b48 + 1;
                  break;
                case 1:
                  engine_clipper_c_interpolateVertexTopClipAdvanced_FUN_00433a00
                            (g_SRenderVertex_ARRAY_0076874c + uVar7,pSVar8,
                             g_SRenderVertex_ARRAY_00768d4c + g_INT_00767b48);
                  g_INT_00767b48 = g_INT_00767b48 + 1;
                  break;
                case 2:
                  pSVar13 = pSVar8;
                  pSVar12 = g_SRenderVertex_ARRAY_00768d4c + g_INT_00767b48;
                  for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
                    (pSVar12->projected_vertex).transformed_x =
                         (pSVar13->projected_vertex).transformed_x;
                    pSVar13 = (SRenderVertex *)((int)pSVar13 + (uint)bVar15 * -8 + 4);
                    pSVar12 = (SRenderVertex *)((int)pSVar12 + ((uint)bVar15 * -2 + 1) * 4);
                  }
                  for (iVar4 = 0; iVar4 != 0; iVar4 = iVar4 + -1) {
                    *(char *)&(pSVar12->projected_vertex).transformed_x =
                         (char)(pSVar13->projected_vertex).transformed_x;
                    pSVar13 = (SRenderVertex *)((int)pSVar13 + (uint)bVar15 * -2 + 1);
                    pSVar12 = (SRenderVertex *)((int)pSVar12 + (uint)bVar15 * -2 + 1);
                  }
                  g_INT_00767b48 = g_INT_00767b48 + 1;
                  engine_clipper_c_interpolateVertexTopClipAdvanced_FUN_00433a00
                            (pSVar8,g_SRenderVertex_ARRAY_0076874c + uVar7,
                             g_SRenderVertex_ARRAY_00768d4c + g_INT_00767b48);
                  g_INT_00767b48 = g_INT_00767b48 + 1;
                }
                local_1c = local_1c + 1;
                pSVar8 = pSVar8 + 1;
              } while (local_1c < g_INT_00767b44);
            }
            if (2 < g_INT_00767b48) {
              local_18 = 0;
              if (0 < g_INT_00767b48) {
                pSVar8 = g_SRenderVertex_ARRAY_00768d4c;
                do {
                  uVar7 = local_18 + 1;
                  if (uVar7 == g_INT_00767b48) {
                    uVar7 = uVar7 ^ g_INT_00767b48;
                  }
                  bVar3 = (pSVar8->projected_vertex).transformed_y <=
                          -(pSVar8->projected_vertex).transformed_z;
                  if (g_SRenderVertex_ARRAY_00768d4c[uVar7].projected_vertex.transformed_y <=
                      -g_SRenderVertex_ARRAY_00768d4c[uVar7].projected_vertex.transformed_z) {
                    bVar3 = bVar3 | 2;
                  }
                  switch(bVar3) {
                  case 0:
                    pSVar13 = pSVar8;
                    pSVar12 = g_SRenderVertex_ARRAY_00766c74 + g_INT_00766c70;
                    for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
                      (pSVar12->projected_vertex).transformed_x =
                           (pSVar13->projected_vertex).transformed_x;
                      pSVar13 = (SRenderVertex *)((int)pSVar13 + (uint)bVar15 * -8 + 4);
                      pSVar12 = (SRenderVertex *)((int)pSVar12 + ((uint)bVar15 * -2 + 1) * 4);
                    }
                    for (iVar4 = 0; iVar4 != 0; iVar4 = iVar4 + -1) {
                      *(char *)&(pSVar12->projected_vertex).transformed_x =
                           (char)(pSVar13->projected_vertex).transformed_x;
                      pSVar13 = (SRenderVertex *)((int)pSVar13 + (uint)bVar15 * -2 + 1);
                      pSVar12 = (SRenderVertex *)((int)pSVar12 + (uint)bVar15 * -2 + 1);
                    }
                    g_INT_00766c70 = g_INT_00766c70 + 1;
                    break;
                  case 1:
                    engine_clipper_c_interpolateVertexBottomClipAdvanced_FUN_00433b30
                              (g_SRenderVertex_ARRAY_00768d4c + uVar7,pSVar8,
                               g_SRenderVertex_ARRAY_00766c74 + g_INT_00766c70);
                    g_INT_00766c70 = g_INT_00766c70 + 1;
                    break;
                  case 2:
                    pSVar13 = pSVar8;
                    pSVar12 = g_SRenderVertex_ARRAY_00766c74 + g_INT_00766c70;
                    for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
                      (pSVar12->projected_vertex).transformed_x =
                           (pSVar13->projected_vertex).transformed_x;
                      pSVar13 = (SRenderVertex *)((int)pSVar13 + (uint)bVar15 * -8 + 4);
                      pSVar12 = (SRenderVertex *)((int)pSVar12 + ((uint)bVar15 * -2 + 1) * 4);
                    }
                    for (iVar4 = 0; iVar4 != 0; iVar4 = iVar4 + -1) {
                      *(char *)&(pSVar12->projected_vertex).transformed_x =
                           (char)(pSVar13->projected_vertex).transformed_x;
                      pSVar13 = (SRenderVertex *)((int)pSVar13 + (uint)bVar15 * -2 + 1);
                      pSVar12 = (SRenderVertex *)((int)pSVar12 + (uint)bVar15 * -2 + 1);
                    }
                    g_INT_00766c70 = g_INT_00766c70 + 1;
                    engine_clipper_c_interpolateVertexBottomClipAdvanced_FUN_00433b30
                              (pSVar8,g_SRenderVertex_ARRAY_00768d4c + uVar7,
                               g_SRenderVertex_ARRAY_00766c74 + g_INT_00766c70);
                    g_INT_00766c70 = g_INT_00766c70 + 1;
                  }
                  local_18 = local_18 + 1;
                  pSVar8 = pSVar8 + 1;
                } while (local_18 < g_INT_00767b48);
              }
              if (2 < g_INT_00766c70) {
                pSVar8 = g_SRenderVertex_ARRAY_00766c74;
                iVar4 = 0;
                if (0 < g_INT_00766c70) {
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
                    iVar4 = iVar4 + 1;
                    pSVar8 = pSVar8 + 1;
                  } while (iVar4 < g_INT_00766c70);
                }
              }
            }
          }
        }
      }
      if (2 < g_INT_00766c70) {
        engine_prim_c_renderScanlinePolygon_FUN_004fad00
                  (g_SRenderVertex_ARRAY_00766c74,g_INT_00766c70);
        return;
      }
    }
  }
  return;
}
