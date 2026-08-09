// Name: engine_clipper.c_clipPolygonToViewport_FUN_004349a0
// Address: 004349a0
// Address Range: [[004349a0, 004350ff]]
// Convention: __cdecl
// Signature: void __cdecl engine_clipper_c_clipPolygonToViewport_FUN_004349a0(int vertex_count,int *vertex_indices)

#include "nocturne.h"

void __cdecl engine_clipper_c_clipPolygonToViewport_FUN_004349a0(int vertex_count,int *vertex_indices)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  char cVar5;
  uint *puVar7;
  SRenderVertex *pSVar8;
  int iVar9;
  int iVar10;
  uint *puVar11;
  SRenderVertex *pSVar12;
  SRenderVertex *pSVar13;
  uint *puVar14;
  byte bVar15;
  int *local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  uint uVar6;
  
  bVar15 = 0;
  if (INT_005b7644 == 0) {
    engine_prim_c_renderIndexedPolygonAdvanced_FUN_004fb390(vertex_indices,vertex_count);
  }
  else {
    uVar6 = 0xffffffff;
    cVar5 = -1;
    iVar9 = 0;
    iVar2 = 0;
    piVar4 = vertex_indices;
    if (0 < vertex_count) {
      do {
        iVar10 = *piVar4;
        if (((&DAT_005c5024)[iVar10 * 0xc] & 0x80000000) != 0) {
          iVar9 = iVar9 + 1;
        }
        piVar4 = piVar4 + 1;
        iVar2 = iVar2 + 1;
        uVar6 = uVar6 & (&DAT_005c5024)[iVar10 * 0xc];
        cVar5 = (char)uVar6;
      } while (iVar2 < vertex_count);
    }
    if ((iVar9 == vertex_count) && (cVar5 != '\0')) {
      DAT_00766c70 = 0;
    }
    else {
      if (iVar9 == 0) {
        if (g_UseExternalRenderer != 0) {
          iVar2 = 0;
          if (0 < vertex_count) {
            do {
              iVar9 = *vertex_indices;
              iVar2 = iVar2 + 1;
              vertex_indices = vertex_indices + 1;
              *(uint **)(iVar2 * 4 + 0x767270) = &DAT_005c5014 + iVar9 * 0xc;
            } while (iVar2 < vertex_count);
          }
          if (DAT_006b0280 != 0) {
            if (vertex_count < 4) {
              iVar2 = engine_prim_c_calculateTriangleWindingOrder_FUN_004f9a10
                                (DAT_00767274,DAT_00767278,DAT_0076727c);
              if (iVar2 == 0) {
                return;
              }
            }
            else {
              iVar9 = 0;
              iVar2 = (vertex_count + -2) * 4;
              iVar10 = 0;
              if (0 < iVar2) {
                do {
                  iVar3 = engine_prim_c_calculateTriangleWindingOrder_FUN_004f9a10
                                    (DAT_00767274,*(SRenderVertex **)((int)&DAT_00767278 + iVar9),
                                     *(SRenderVertex **)((int)&DAT_0076727c + iVar9));
                  if (iVar3 == 0) {
                    iVar10 = iVar10 + 1;
                  }
                  iVar9 = iVar9 + 4;
                } while (iVar9 < iVar2);
              }
              if (iVar10 == vertex_count + -2) {
                return;
              }
            }
          }
          g_RenderedTriangleCount = g_RenderedTriangleCount + 1;
          engine_special_cpp_drawPolygon2_FUN_00532650
                    (&DAT_00767274,vertex_count,g_RenderStateFlags.dword);
          return;
        }
        DAT_00766c70 = vertex_count;
        if (0 < vertex_count) {
          puVar7 = &DAT_00766c74;
          local_24 = 0;
          do {
            puVar11 = &DAT_005c5014 + *vertex_indices * 0xc;
            puVar14 = puVar7;
            for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
              *puVar14 = *puVar11;
              puVar11 = puVar11 + 1;
              puVar14 = puVar14 + 1;
            }
            for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
              *(byte *)puVar14 = *(byte *)puVar11;
              puVar11 = (uint *)((int)puVar11 + 1);
              puVar14 = (uint *)((int)puVar14 + 1);
            }
            vertex_indices = vertex_indices + 1;
            local_24 = local_24 + 1;
            puVar7 = puVar7 + 0xc;
          } while (local_24 < vertex_count);
        }
      }
      else {
        iVar2 = 0;
        DAT_00767b3c = vertex_count;
        DAT_00767b40 = 0;
        DAT_00767b44 = 0;
        DAT_00767b48 = 0;
        DAT_00766c70 = 0;
        if (0 < vertex_count) {
          puVar7 = &DAT_0076814c;
          local_28 = vertex_indices;
          do {
            puVar11 = &DAT_005c5014 + *local_28 * 0xc;
            puVar14 = puVar7;
            for (iVar9 = 0xc; iVar9 != 0; iVar9 = iVar9 + -1) {
              *puVar14 = *puVar11;
              puVar11 = puVar11 + 1;
              puVar14 = puVar14 + 1;
            }
            for (iVar9 = 0; iVar9 != 0; iVar9 = iVar9 + -1) {
              *(byte *)puVar14 = *(byte *)puVar11;
              puVar11 = (uint *)((int)puVar11 + 1);
              puVar14 = (uint *)((int)puVar14 + 1);
            }
            iVar2 = iVar2 + 1;
            local_28 = local_28 + 1;
            puVar7 = puVar7 + 0xc;
          } while (iVar2 < vertex_count);
        }
        local_14 = 0;
        if (0 < (int)DAT_00767b3c) {
          pSVar8 = (SRenderVertex *)&DAT_0076814c;
          do {
            uVar6 = local_14 + 1;
            if (uVar6 == DAT_00767b3c) {
              uVar6 = uVar6 ^ DAT_00767b3c;
            }
            pSVar13 = (SRenderVertex *)(&DAT_0076814c + uVar6 * 0xc);
            bVar1 = (pSVar8->projected_vertex).transformed_z <=
                    (pSVar8->projected_vertex).transformed_x;
            if ((int)(&DAT_00768154)[uVar6 * 0xc] <= (pSVar13->projected_vertex).transformed_x) {
              bVar1 = bVar1 | 2;
            }
            switch(bVar1) {
            case 0:
              pSVar13 = pSVar8;
              piVar4 = &DAT_00767b4c + DAT_00767b40 * 0xc;
              for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
                *piVar4 = (pSVar13->projected_vertex).transformed_x;
                pSVar13 = (SRenderVertex *)((int)pSVar13 + (uint)bVar15 * -8 + 4);
                piVar4 = piVar4 + (uint)bVar15 * -2 + 1;
              }
              for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
                *(char *)piVar4 = (char)(pSVar13->projected_vertex).transformed_x;
                pSVar13 = (SRenderVertex *)((int)pSVar13 + (uint)bVar15 * -2 + 1);
                piVar4 = (int *)((int)piVar4 + (uint)bVar15 * -2 + 1);
              }
              DAT_00767b40 = DAT_00767b40 + 1;
              break;
            case 1:
              engine_clipper_c_interpolateVertexLeftClipAdvanced_FUN_004337a0
                        (pSVar13,pSVar8,(SRenderVertex *)(&DAT_00767b4c + DAT_00767b40 * 0xc));
              DAT_00767b40 = DAT_00767b40 + 1;
              break;
            case 2:
              pSVar12 = pSVar8;
              piVar4 = &DAT_00767b4c + DAT_00767b40 * 0xc;
              for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
                *piVar4 = (pSVar12->projected_vertex).transformed_x;
                pSVar12 = (SRenderVertex *)((int)pSVar12 + (uint)bVar15 * -8 + 4);
                piVar4 = piVar4 + (uint)bVar15 * -2 + 1;
              }
              for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
                *(char *)piVar4 = (char)(pSVar12->projected_vertex).transformed_x;
                pSVar12 = (SRenderVertex *)((int)pSVar12 + (uint)bVar15 * -2 + 1);
                piVar4 = (int *)((int)piVar4 + (uint)bVar15 * -2 + 1);
              }
              DAT_00767b40 = DAT_00767b40 + 1;
              engine_clipper_c_interpolateVertexLeftClipAdvanced_FUN_004337a0
                        (pSVar8,pSVar13,(SRenderVertex *)(&DAT_00767b4c + DAT_00767b40 * 0xc));
              DAT_00767b40 = DAT_00767b40 + 1;
            }
            local_14 = local_14 + 1;
            pSVar8 = pSVar8 + 1;
          } while (local_14 < (int)DAT_00767b3c);
        }
        if (2 < (int)DAT_00767b40) {
          local_20 = 0;
          if (0 < (int)DAT_00767b40) {
            pSVar8 = (SRenderVertex *)&DAT_00767b4c;
            do {
              uVar6 = local_20 + 1;
              if (uVar6 == DAT_00767b40) {
                uVar6 = uVar6 ^ DAT_00767b40;
              }
              pSVar13 = (SRenderVertex *)(&DAT_00767b4c + uVar6 * 0xc);
              bVar1 = (pSVar8->projected_vertex).transformed_x <=
                      -(pSVar8->projected_vertex).transformed_z;
              if ((pSVar13->projected_vertex).transformed_x <= (int)-(&DAT_00767b54)[uVar6 * 0xc]) {
                bVar1 = bVar1 | 2;
              }
              switch(bVar1) {
              case 0:
                pSVar13 = pSVar8;
                piVar4 = &DAT_0076874c + DAT_00767b44 * 0xc;
                for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
                  *piVar4 = (pSVar13->projected_vertex).transformed_x;
                  pSVar13 = (SRenderVertex *)((int)pSVar13 + (uint)bVar15 * -8 + 4);
                  piVar4 = piVar4 + (uint)bVar15 * -2 + 1;
                }
                for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
                  *(char *)piVar4 = (char)(pSVar13->projected_vertex).transformed_x;
                  pSVar13 = (SRenderVertex *)((int)pSVar13 + (uint)bVar15 * -2 + 1);
                  piVar4 = (int *)((int)piVar4 + (uint)bVar15 * -2 + 1);
                }
                DAT_00767b44 = DAT_00767b44 + 1;
                break;
              case 1:
                engine_clipper_c_interpolateVertexRightClipAdvanced_FUN_004338d0
                          (pSVar13,pSVar8,(SRenderVertex *)(&DAT_0076874c + DAT_00767b44 * 0xc));
                DAT_00767b44 = DAT_00767b44 + 1;
                break;
              case 2:
                pSVar12 = pSVar8;
                piVar4 = &DAT_0076874c + DAT_00767b44 * 0xc;
                for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
                  *piVar4 = (pSVar12->projected_vertex).transformed_x;
                  pSVar12 = (SRenderVertex *)((int)pSVar12 + (uint)bVar15 * -8 + 4);
                  piVar4 = piVar4 + (uint)bVar15 * -2 + 1;
                }
                for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
                  *(char *)piVar4 = (char)(pSVar12->projected_vertex).transformed_x;
                  pSVar12 = (SRenderVertex *)((int)pSVar12 + (uint)bVar15 * -2 + 1);
                  piVar4 = (int *)((int)piVar4 + (uint)bVar15 * -2 + 1);
                }
                DAT_00767b44 = DAT_00767b44 + 1;
                engine_clipper_c_interpolateVertexRightClipAdvanced_FUN_004338d0
                          (pSVar8,pSVar13,(SRenderVertex *)(&DAT_0076874c + DAT_00767b44 * 0xc));
                DAT_00767b44 = DAT_00767b44 + 1;
              }
              local_20 = local_20 + 1;
              pSVar8 = pSVar8 + 1;
            } while (local_20 < (int)DAT_00767b40);
          }
          if (2 < (int)DAT_00767b44) {
            local_1c = 0;
            if (0 < (int)DAT_00767b44) {
              pSVar8 = (SRenderVertex *)&DAT_0076874c;
              do {
                uVar6 = local_1c + 1;
                if (uVar6 == DAT_00767b44) {
                  uVar6 = uVar6 ^ DAT_00767b44;
                }
                bVar1 = (pSVar8->projected_vertex).transformed_z <=
                        (pSVar8->projected_vertex).transformed_y;
                if ((int)(&DAT_00768754)[uVar6 * 0xc] <= *(int *)(&DAT_00768750 + uVar6 * 0x30)) {
                  bVar1 = bVar1 | 2;
                }
                switch(bVar1) {
                case 0:
                  pSVar13 = pSVar8;
                  piVar4 = &DAT_00768d4c + DAT_00767b48 * 0xc;
                  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
                    *piVar4 = (pSVar13->projected_vertex).transformed_x;
                    pSVar13 = (SRenderVertex *)((int)pSVar13 + (uint)bVar15 * -8 + 4);
                    piVar4 = piVar4 + (uint)bVar15 * -2 + 1;
                  }
                  for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
                    *(char *)piVar4 = (char)(pSVar13->projected_vertex).transformed_x;
                    pSVar13 = (SRenderVertex *)((int)pSVar13 + (uint)bVar15 * -2 + 1);
                    piVar4 = (int *)((int)piVar4 + (uint)bVar15 * -2 + 1);
                  }
                  DAT_00767b48 = DAT_00767b48 + 1;
                  break;
                case 1:
                  engine_clipper_c_interpolateVertexBottomClipAdvanced_FUN_00433a00
                            ((SRenderVertex *)(&DAT_0076874c + uVar6 * 0xc),pSVar8,
                             (SRenderVertex *)(&DAT_00768d4c + DAT_00767b48 * 0xc));
                  DAT_00767b48 = DAT_00767b48 + 1;
                  break;
                case 2:
                  pSVar13 = pSVar8;
                  piVar4 = &DAT_00768d4c + DAT_00767b48 * 0xc;
                  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
                    *piVar4 = (pSVar13->projected_vertex).transformed_x;
                    pSVar13 = (SRenderVertex *)((int)pSVar13 + (uint)bVar15 * -8 + 4);
                    piVar4 = piVar4 + (uint)bVar15 * -2 + 1;
                  }
                  for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
                    *(char *)piVar4 = (char)(pSVar13->projected_vertex).transformed_x;
                    pSVar13 = (SRenderVertex *)((int)pSVar13 + (uint)bVar15 * -2 + 1);
                    piVar4 = (int *)((int)piVar4 + (uint)bVar15 * -2 + 1);
                  }
                  DAT_00767b48 = DAT_00767b48 + 1;
                  engine_clipper_c_interpolateVertexBottomClipAdvanced_FUN_00433a00
                            (pSVar8,(SRenderVertex *)(&DAT_0076874c + uVar6 * 0xc),
                             (SRenderVertex *)(&DAT_00768d4c + DAT_00767b48 * 0xc));
                  DAT_00767b48 = DAT_00767b48 + 1;
                }
                local_1c = local_1c + 1;
                pSVar8 = pSVar8 + 1;
              } while (local_1c < (int)DAT_00767b44);
            }
            if (2 < (int)DAT_00767b48) {
              local_18 = 0;
              if (0 < (int)DAT_00767b48) {
                pSVar8 = (SRenderVertex *)&DAT_00768d4c;
                do {
                  uVar6 = local_18 + 1;
                  if (uVar6 == DAT_00767b48) {
                    uVar6 = uVar6 ^ DAT_00767b48;
                  }
                  bVar1 = (pSVar8->projected_vertex).transformed_y <=
                          -(pSVar8->projected_vertex).transformed_z;
                  if (*(int *)(&DAT_00768d50 + uVar6 * 0x30) <= (int)-(&DAT_00768d54)[uVar6 * 0xc])
                  {
                    bVar1 = bVar1 | 2;
                  }
                  switch(bVar1) {
                  case 0:
                    pSVar13 = pSVar8;
                    piVar4 = &DAT_00766c74 + DAT_00766c70 * 0xc;
                    for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
                      *piVar4 = (pSVar13->projected_vertex).transformed_x;
                      pSVar13 = (SRenderVertex *)((int)pSVar13 + (uint)bVar15 * -8 + 4);
                      piVar4 = piVar4 + (uint)bVar15 * -2 + 1;
                    }
                    for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
                      *(char *)piVar4 = (char)(pSVar13->projected_vertex).transformed_x;
                      pSVar13 = (SRenderVertex *)((int)pSVar13 + (uint)bVar15 * -2 + 1);
                      piVar4 = (int *)((int)piVar4 + (uint)bVar15 * -2 + 1);
                    }
                    DAT_00766c70 = DAT_00766c70 + 1;
                    break;
                  case 1:
                    engine_clipper_c_interpolateVertexTopClipAdvanced_FUN_00433b30
                              ((SRenderVertex *)(&DAT_00768d4c + uVar6 * 0xc),pSVar8,
                               (SRenderVertex *)(&DAT_00766c74 + DAT_00766c70 * 0xc));
                    DAT_00766c70 = DAT_00766c70 + 1;
                    break;
                  case 2:
                    pSVar13 = pSVar8;
                    piVar4 = &DAT_00766c74 + DAT_00766c70 * 0xc;
                    for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
                      *piVar4 = (pSVar13->projected_vertex).transformed_x;
                      pSVar13 = (SRenderVertex *)((int)pSVar13 + (uint)bVar15 * -8 + 4);
                      piVar4 = piVar4 + (uint)bVar15 * -2 + 1;
                    }
                    for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
                      *(char *)piVar4 = (char)(pSVar13->projected_vertex).transformed_x;
                      pSVar13 = (SRenderVertex *)((int)pSVar13 + (uint)bVar15 * -2 + 1);
                      piVar4 = (int *)((int)piVar4 + (uint)bVar15 * -2 + 1);
                    }
                    DAT_00766c70 = DAT_00766c70 + 1;
                    engine_clipper_c_interpolateVertexTopClipAdvanced_FUN_00433b30
                              (pSVar8,(SRenderVertex *)(&DAT_00768d4c + uVar6 * 0xc),
                               (SRenderVertex *)(&DAT_00766c74 + DAT_00766c70 * 0xc));
                    DAT_00766c70 = DAT_00766c70 + 1;
                  }
                  local_18 = local_18 + 1;
                  pSVar8 = pSVar8 + 1;
                } while (local_18 < (int)DAT_00767b48);
              }
              if (2 < DAT_00766c70) {
                piVar4 = &DAT_00766c74;
                iVar2 = 0;
                if (0 < DAT_00766c70) {
                  do {
                    iVar9 = piVar4[2];
                    if (iVar9 == 0) {
                      piVar4[2] = 1;
                      *piVar4 = 0;
                      piVar4[1] = 0;
                    }
                    else if (iVar9 < *piVar4) {
                      *piVar4 = iVar9;
                    }
                    else {
                      iVar10 = -iVar9;
                      if (-*piVar4 == iVar9 || iVar10 < *piVar4) {
                        iVar3 = piVar4[1];
                        if (piVar4[2] < iVar3) {
                          piVar4[1] = piVar4[2];
                        }
                        else if (-iVar3 != iVar9 && iVar3 <= iVar10) {
                          piVar4[1] = iVar10;
                        }
                      }
                      else {
                        *piVar4 = iVar10;
                      }
                    }
                    iVar2 = iVar2 + 1;
                    piVar4 = piVar4 + 0xc;
                  } while (iVar2 < DAT_00766c70);
                }
              }
            }
          }
        }
      }
      if (2 < DAT_00766c70) {
        engine_prim_c_renderScanlinePolygon_FUN_004fad00
                  ((SRenderVertex *)&DAT_00766c74,DAT_00766c70);
        return;
      }
    }
  }
  return;
}
