// Name: engine_clipper.c_clipPolygonToViewFrustumAdvanced_FUN_0043d6e0
// Address: 0043d6e0
// Address Range: [[0043d6e0, 0043db54] [0043db7f, 0043dd83] [0043ddda, 0043de17]]
// Convention: __cdecl
// Signature: int __cdecl engine_clipper_c_clipPolygonToViewFrustumAdvanced_FUN_0043d6e0(int vertex_count,int *vertex_indices)

#include "nocturne.h"

int __cdecl engine_clipper_c_clipPolygonToViewFrustumAdvanced_FUN_0043d6e0(int vertex_count,int *vertex_indices)

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
  int iStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  uint uVar7;
  
  bVar15 = 0;
  uVar7 = 0xffffffff;
  cVar6 = -1;
  iVar8 = 0;
  iVar10 = 0;
  piVar4 = vertex_indices;
  if (0 < vertex_count) {
    do {
      uVar1 = g_SRenderVertex_ARRAY_00629014[*piVar4].projected_vertex.screen_x;
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
    g_INT_007c7554 = 0;
    return 1;
  }
  if (iVar10 != 0) {
    g_INT_007c8420 = vertex_count;
    g_INT_007c8424 = 0;
    g_INT_007c8428 = 0;
    g_INT_007c842c = 0;
    g_INT_007c7554 = 0;
    iStack_28 = 0;
    if (0 < vertex_count) {
      pSVar9 = g_SRenderVertex_ARRAY_007c8a30;
      do {
        pSVar13 = g_SRenderVertex_ARRAY_00629014 + *vertex_indices;
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
        iStack_28 = iStack_28 + 1;
        pSVar9 = pSVar9 + 1;
      } while (iStack_28 < vertex_count);
    }
    iStack_20 = 0;
    if (0 < g_INT_007c8420) {
      pSVar9 = g_SRenderVertex_ARRAY_007c8a30;
      do {
        uVar7 = iStack_20 + 1;
        if (uVar7 == g_INT_007c8420) {
          uVar7 = uVar7 ^ g_INT_007c8420;
        }
        pSVar13 = g_SRenderVertex_ARRAY_007c8a30 + uVar7;
        bVar3 = (pSVar9->projected_vertex).transformed_z <= (pSVar9->projected_vertex).transformed_x
        ;
        if (g_SRenderVertex_ARRAY_007c8a30[uVar7].projected_vertex.transformed_z <=
            (pSVar13->projected_vertex).transformed_x) {
          bVar3 = bVar3 | 2;
        }
        switch(bVar3) {
        case 0:
          pSVar13 = pSVar9;
          pSVar12 = g_SRenderVertex_ARRAY_007c8430 + g_INT_007c8424;
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
          g_INT_007c8424 = g_INT_007c8424 + 1;
          break;
        case 1:
          engine_clipper_c_interpolateVertexRightClipAdvanced_FUN_0043cc70
                    (pSVar13,pSVar9,g_SRenderVertex_ARRAY_007c8430 + g_INT_007c8424);
          g_INT_007c8424 = g_INT_007c8424 + 1;
          break;
        case 2:
          pSVar12 = pSVar9;
          pSVar14 = g_SRenderVertex_ARRAY_007c8430 + g_INT_007c8424;
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
          g_INT_007c8424 = g_INT_007c8424 + 1;
          engine_clipper_c_interpolateVertexRightClipAdvanced_FUN_0043cc70
                    (pSVar9,pSVar13,g_SRenderVertex_ARRAY_007c8430 + g_INT_007c8424);
          g_INT_007c8424 = g_INT_007c8424 + 1;
        }
        iStack_20 = iStack_20 + 1;
        pSVar9 = pSVar9 + 1;
      } while (iStack_20 < g_INT_007c8420);
    }
    if (2 < g_INT_007c8424) {
      iStack_1c = 0;
      if (0 < g_INT_007c8424) {
        pSVar9 = g_SRenderVertex_ARRAY_007c8430;
        do {
          uVar7 = iStack_1c + 1;
          if (uVar7 == g_INT_007c8424) {
            uVar7 = uVar7 ^ g_INT_007c8424;
          }
          pSVar13 = g_SRenderVertex_ARRAY_007c8430 + uVar7;
          bVar3 = (pSVar9->projected_vertex).transformed_x <=
                  -(pSVar9->projected_vertex).transformed_z;
          if ((pSVar13->projected_vertex).transformed_x <=
              -g_SRenderVertex_ARRAY_007c8430[uVar7].projected_vertex.transformed_z) {
            bVar3 = bVar3 | 2;
          }
          switch(bVar3) {
          case 0:
            pSVar13 = pSVar9;
            pSVar12 = g_SRenderVertex_ARRAY_007c9030 + g_INT_007c8428;
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
            g_INT_007c8428 = g_INT_007c8428 + 1;
            break;
          case 1:
            engine_clipper_c_interpolateVertexLeftClipAdvanced_FUN_0043cda0
                      (pSVar13,pSVar9,g_SRenderVertex_ARRAY_007c9030 + g_INT_007c8428);
            g_INT_007c8428 = g_INT_007c8428 + 1;
            break;
          case 2:
            pSVar12 = pSVar9;
            pSVar14 = g_SRenderVertex_ARRAY_007c9030 + g_INT_007c8428;
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
            g_INT_007c8428 = g_INT_007c8428 + 1;
            engine_clipper_c_interpolateVertexLeftClipAdvanced_FUN_0043cda0
                      (pSVar9,pSVar13,g_SRenderVertex_ARRAY_007c9030 + g_INT_007c8428);
            g_INT_007c8428 = g_INT_007c8428 + 1;
          }
          iStack_1c = iStack_1c + 1;
          pSVar9 = pSVar9 + 1;
        } while (iStack_1c < g_INT_007c8424);
      }
      if (2 < g_INT_007c8428) {
        iStack_14 = 0;
        if (0 < g_INT_007c8428) {
          pSVar9 = g_SRenderVertex_ARRAY_007c9030;
          do {
            uVar7 = iStack_14 + 1;
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
              pSVar13 = pSVar9;
              pSVar12 = g_SRenderVertex_ARRAY_007c9630 + g_INT_007c842c;
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
              g_INT_007c842c = g_INT_007c842c + 1;
              break;
            case 1:
              engine_clipper_c_interpolateVertexTopClipAdvanced_FUN_0043ced0
                        (g_SRenderVertex_ARRAY_007c9030 + uVar7,pSVar9,
                         g_SRenderVertex_ARRAY_007c9630 + g_INT_007c842c);
              g_INT_007c842c = g_INT_007c842c + 1;
              break;
            case 2:
              pSVar13 = pSVar9;
              pSVar12 = g_SRenderVertex_ARRAY_007c9630 + g_INT_007c842c;
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
              g_INT_007c842c = g_INT_007c842c + 1;
              engine_clipper_c_interpolateVertexTopClipAdvanced_FUN_0043ced0
                        (pSVar9,g_SRenderVertex_ARRAY_007c9030 + uVar7,
                         g_SRenderVertex_ARRAY_007c9630 + g_INT_007c842c);
              g_INT_007c842c = g_INT_007c842c + 1;
            }
            iStack_14 = iStack_14 + 1;
            pSVar9 = pSVar9 + 1;
          } while (iStack_14 < g_INT_007c8428);
        }
        if (2 < g_INT_007c842c) {
          iStack_18 = 0;
          if (0 < g_INT_007c842c) {
            pSVar9 = g_SRenderVertex_ARRAY_007c9630;
            do {
              uVar7 = iStack_18 + 1;
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
                pSVar13 = pSVar9;
                pSVar12 = g_SRenderVertex_ARRAY_007c7558 + g_INT_007c7554;
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
                g_INT_007c7554 = g_INT_007c7554 + 1;
                break;
              case 1:
                engine_clipper_c_interpolateVertexBottomClipAdvanced_FUN_0043d000
                          (g_SRenderVertex_ARRAY_007c9630 + uVar7,pSVar9,
                           g_SRenderVertex_ARRAY_007c7558 + g_INT_007c7554);
                g_INT_007c7554 = g_INT_007c7554 + 1;
                break;
              case 2:
                pSVar13 = pSVar9;
                pSVar12 = g_SRenderVertex_ARRAY_007c7558 + g_INT_007c7554;
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
                g_INT_007c7554 = g_INT_007c7554 + 1;
                engine_clipper_c_interpolateVertexBottomClipAdvanced_FUN_0043d000
                          (pSVar9,g_SRenderVertex_ARRAY_007c9630 + uVar7,
                           g_SRenderVertex_ARRAY_007c7558 + g_INT_007c7554);
                g_INT_007c7554 = g_INT_007c7554 + 1;
              }
              iStack_18 = iStack_18 + 1;
              pSVar9 = pSVar9 + 1;
            } while (iStack_18 < g_INT_007c842c);
          }
          if (2 < g_INT_007c7554) {
            pSVar9 = g_SRenderVertex_ARRAY_007c7558;
            iVar8 = 0;
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
              } while (iVar8 < g_INT_007c7554);
            }
          }
        }
      }
    }
    return 0;
  }
  if (g_INT_01c50948 != 0) {
    iVar8 = 0;
    if (0 < vertex_count) {
      do {
        iVar10 = *vertex_indices;
        iVar8 = iVar8 + 1;
        vertex_indices = vertex_indices + 1;
        g_INT_ARRAY_007c7b54[iVar8] = (int)(g_SRenderVertex_ARRAY_00629014 + iVar10);
      } while (iVar8 < vertex_count);
    }
    if (g_INT_00713a7c != 0) {
      if (vertex_count < 4) {
        iVar8 = engine_prim_c_calculateTriangleWindingOrder_FUN_0053dd60
                          (g_SRenderVertex_PTR_ARRAY_007c7b58[0],
                           g_SRenderVertex_PTR_ARRAY_007c7b58[1],
                           g_SRenderVertex_PTR_ARRAY_007c7b58[2]);
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
            iVar5 = engine_prim_c_calculateTriangleWindingOrder_FUN_0053dd60
                              (g_SRenderVertex_PTR_ARRAY_007c7b58[0],
                               *(SRenderVertex **)
                                ((int)g_SRenderVertex_PTR_ARRAY_007c7b58 + iVar10 + 4),
                               *(SRenderVertex **)
                                ((int)g_SRenderVertex_PTR_ARRAY_007c7b58 + iVar10 + 8));
            if (iVar5 == 0) {
              iVar11 = iVar11 + 1;
            }
            iVar10 = iVar10 + 4;
          } while (iVar10 < iVar8);
        }
        if (iVar11 == vertex_count + -2) {
          return 1;
        }
      }
    }
    g_INT_01e7dac8 = g_INT_01e7dac8 + vertex_count + -2;
    engine_special_cpp_drawPolygon2_FUN_00582370
              (g_SRenderVertex_PTR_ARRAY_007c7b58,vertex_count,g_BIT_INTEGER32_01c51d14.dword);
    return 1;
  }
  g_INT_007c7554 = vertex_count;
  if (0 < vertex_count) {
    pSVar9 = g_SRenderVertex_ARRAY_007c7558;
    iStack_24 = 0;
    do {
      pSVar13 = g_SRenderVertex_ARRAY_00629014 + *vertex_indices;
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
      iStack_24 = iStack_24 + 1;
      pSVar9 = pSVar9 + 1;
    } while (iStack_24 < vertex_count);
  }
  return 0;
}
