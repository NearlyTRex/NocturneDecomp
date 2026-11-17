// Name: engine_clipper.c_clipPolygonToViewFrustumAdvanced_FUN_00432880
// Address: 00432880
// Address Range: [[00432880, 00432fb7]]
// Convention: __cdecl
// Signature: int __cdecl engine_clipper_c_clipPolygonToViewFrustumAdvanced_FUN_00432880(int vertex_count,int *vertex_indices)

#include "nocturne.h"

int __cdecl engine_clipper_c_clipPolygonToViewFrustumAdvanced_FUN_00432880(int vertex_count,int *vertex_indices)

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
      uVar1 = g_SRenderVertex_ARRAY_00622014[*piVar4].projected_vertex.screen_x;
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
    g_INT_007bee30 = 0;
    return 1;
  }
  if (iVar10 != 0) {
    g_INT_007bfcfc = vertex_count;
    g_INT_007bfd00 = 0;
    g_INT_007bfd04 = 0;
    g_INT_007bfd08 = 0;
    g_INT_007bee30 = 0;
    iStack_28 = 0;
    if (0 < vertex_count) {
      pSVar9 = g_SRenderVertex_ARRAY_007c030c;
      do {
        pSVar13 = g_SRenderVertex_ARRAY_00622014 + *vertex_indices;
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
    if (0 < g_INT_007bfcfc) {
      pSVar9 = g_SRenderVertex_ARRAY_007c030c;
      do {
        uVar7 = iStack_20 + 1;
        if (uVar7 == g_INT_007bfcfc) {
          uVar7 = uVar7 ^ g_INT_007bfcfc;
        }
        pSVar13 = g_SRenderVertex_ARRAY_007c030c + uVar7;
        bVar3 = (pSVar9->projected_vertex).transformed_z <= (pSVar9->projected_vertex).transformed_x
        ;
        if (g_SRenderVertex_ARRAY_007c030c[uVar7].projected_vertex.transformed_z <=
            (pSVar13->projected_vertex).transformed_x) {
          bVar3 = bVar3 | 2;
        }
        switch(bVar3) {
        case 0:
          pSVar13 = pSVar9;
          pSVar12 = g_SRenderVertex_ARRAY_007bfd0c + g_INT_007bfd00;
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
          g_INT_007bfd00 = g_INT_007bfd00 + 1;
          break;
        case 1:
          engine_clipper_c_interpolateVertexRightClipAdvanced_FUN_00431e10
                    (pSVar13,pSVar9,g_SRenderVertex_ARRAY_007bfd0c + g_INT_007bfd00);
          g_INT_007bfd00 = g_INT_007bfd00 + 1;
          break;
        case 2:
          pSVar12 = pSVar9;
          pSVar14 = g_SRenderVertex_ARRAY_007bfd0c + g_INT_007bfd00;
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
          g_INT_007bfd00 = g_INT_007bfd00 + 1;
          engine_clipper_c_interpolateVertexRightClipAdvanced_FUN_00431e10
                    (pSVar9,pSVar13,g_SRenderVertex_ARRAY_007bfd0c + g_INT_007bfd00);
          g_INT_007bfd00 = g_INT_007bfd00 + 1;
        }
        iStack_20 = iStack_20 + 1;
        pSVar9 = pSVar9 + 1;
      } while (iStack_20 < g_INT_007bfcfc);
    }
    if (2 < g_INT_007bfd00) {
      iStack_1c = 0;
      if (0 < g_INT_007bfd00) {
        pSVar9 = g_SRenderVertex_ARRAY_007bfd0c;
        do {
          uVar7 = iStack_1c + 1;
          if (uVar7 == g_INT_007bfd00) {
            uVar7 = uVar7 ^ g_INT_007bfd00;
          }
          pSVar13 = g_SRenderVertex_ARRAY_007bfd0c + uVar7;
          bVar3 = (pSVar9->projected_vertex).transformed_x <=
                  -(pSVar9->projected_vertex).transformed_z;
          if ((pSVar13->projected_vertex).transformed_x <=
              -g_SRenderVertex_ARRAY_007bfd0c[uVar7].projected_vertex.transformed_z) {
            bVar3 = bVar3 | 2;
          }
          switch(bVar3) {
          case 0:
            pSVar13 = pSVar9;
            pSVar12 = g_SRenderVertex_ARRAY_007c090c + g_INT_007bfd04;
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
            g_INT_007bfd04 = g_INT_007bfd04 + 1;
            break;
          case 1:
            engine_clipper_c_interpolateVertexLeftClipAdvanced_FUN_00431f40
                      (pSVar13,pSVar9,g_SRenderVertex_ARRAY_007c090c + g_INT_007bfd04);
            g_INT_007bfd04 = g_INT_007bfd04 + 1;
            break;
          case 2:
            pSVar12 = pSVar9;
            pSVar14 = g_SRenderVertex_ARRAY_007c090c + g_INT_007bfd04;
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
            g_INT_007bfd04 = g_INT_007bfd04 + 1;
            engine_clipper_c_interpolateVertexLeftClipAdvanced_FUN_00431f40
                      (pSVar9,pSVar13,g_SRenderVertex_ARRAY_007c090c + g_INT_007bfd04);
            g_INT_007bfd04 = g_INT_007bfd04 + 1;
          }
          iStack_1c = iStack_1c + 1;
          pSVar9 = pSVar9 + 1;
        } while (iStack_1c < g_INT_007bfd00);
      }
      if (2 < g_INT_007bfd04) {
        iStack_14 = 0;
        if (0 < g_INT_007bfd04) {
          pSVar9 = g_SRenderVertex_ARRAY_007c090c;
          do {
            uVar7 = iStack_14 + 1;
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
              pSVar13 = pSVar9;
              pSVar12 = g_SRenderVertex_ARRAY_007c0f0c + g_INT_007bfd08;
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
              g_INT_007bfd08 = g_INT_007bfd08 + 1;
              break;
            case 1:
              engine_clipper_c_interpolateVertexTopClipAdvanced_FUN_00432070
                        (g_SRenderVertex_ARRAY_007c090c + uVar7,pSVar9,
                         g_SRenderVertex_ARRAY_007c0f0c + g_INT_007bfd08);
              g_INT_007bfd08 = g_INT_007bfd08 + 1;
              break;
            case 2:
              pSVar13 = pSVar9;
              pSVar12 = g_SRenderVertex_ARRAY_007c0f0c + g_INT_007bfd08;
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
              g_INT_007bfd08 = g_INT_007bfd08 + 1;
              engine_clipper_c_interpolateVertexTopClipAdvanced_FUN_00432070
                        (pSVar9,g_SRenderVertex_ARRAY_007c090c + uVar7,
                         g_SRenderVertex_ARRAY_007c0f0c + g_INT_007bfd08);
              g_INT_007bfd08 = g_INT_007bfd08 + 1;
            }
            iStack_14 = iStack_14 + 1;
            pSVar9 = pSVar9 + 1;
          } while (iStack_14 < g_INT_007bfd04);
        }
        if (2 < g_INT_007bfd08) {
          iStack_18 = 0;
          if (0 < g_INT_007bfd08) {
            pSVar9 = g_SRenderVertex_ARRAY_007c0f0c;
            do {
              uVar7 = iStack_18 + 1;
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
                pSVar13 = pSVar9;
                pSVar12 = g_SRenderVertex_ARRAY_007bee34 + g_INT_007bee30;
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
                g_INT_007bee30 = g_INT_007bee30 + 1;
                break;
              case 1:
                engine_clipper_c_interpolateVertexBottomClipAdvanced_FUN_004321a0
                          (g_SRenderVertex_ARRAY_007c0f0c + uVar7,pSVar9,
                           g_SRenderVertex_ARRAY_007bee34 + g_INT_007bee30);
                g_INT_007bee30 = g_INT_007bee30 + 1;
                break;
              case 2:
                pSVar13 = pSVar9;
                pSVar12 = g_SRenderVertex_ARRAY_007bee34 + g_INT_007bee30;
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
                g_INT_007bee30 = g_INT_007bee30 + 1;
                engine_clipper_c_interpolateVertexBottomClipAdvanced_FUN_004321a0
                          (pSVar9,g_SRenderVertex_ARRAY_007c0f0c + uVar7,
                           g_SRenderVertex_ARRAY_007bee34 + g_INT_007bee30);
                g_INT_007bee30 = g_INT_007bee30 + 1;
              }
              iStack_18 = iStack_18 + 1;
              pSVar9 = pSVar9 + 1;
            } while (iStack_18 < g_INT_007bfd08);
          }
          if (2 < g_INT_007bee30) {
            pSVar9 = g_SRenderVertex_ARRAY_007bee34;
            iVar8 = 0;
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
              } while (iVar8 < g_INT_007bee30);
            }
          }
        }
      }
    }
    return 0;
  }
  if (g_INT_01c37788 != 0) {
    iVar8 = 0;
    if (0 < vertex_count) {
      do {
        iVar10 = *vertex_indices;
        iVar8 = iVar8 + 1;
        vertex_indices = vertex_indices + 1;
        g_INT_ARRAY_007bf430[iVar8] = (int)(g_SRenderVertex_ARRAY_00622014 + iVar10);
      } while (iVar8 < vertex_count);
    }
    if (g_INT_0070ca7c != 0) {
      if (vertex_count < 4) {
        iVar8 = engine_prim_c_calculateTriangleWindingOrder_FUN_0051c760
                          (g_SRenderVertex_PTR_ARRAY_007bf434[0],
                           g_SRenderVertex_PTR_ARRAY_007bf434[1],
                           g_SRenderVertex_PTR_ARRAY_007bf434[2]);
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
            iVar5 = engine_prim_c_calculateTriangleWindingOrder_FUN_0051c760
                              (g_SRenderVertex_PTR_ARRAY_007bf434[0],
                               *(SRenderVertex **)
                                ((int)g_SRenderVertex_PTR_ARRAY_007bf434 + iVar10 + 4),
                               *(SRenderVertex **)
                                ((int)g_SRenderVertex_PTR_ARRAY_007bf434 + iVar10 + 8));
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
    g_INT_01e61b58 = g_INT_01e61b58 + vertex_count + -2;
    engine_special_cpp_drawPolygon2_FUN_0055f920
              (g_SRenderVertex_PTR_ARRAY_007bf434,vertex_count,g_BIT_INTEGER32_01c38b54.dword);
    return 1;
  }
  g_INT_007bee30 = vertex_count;
  if (0 < vertex_count) {
    pSVar9 = g_SRenderVertex_ARRAY_007bee34;
    iStack_24 = 0;
    do {
      pSVar13 = g_SRenderVertex_ARRAY_00622014 + *vertex_indices;
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
