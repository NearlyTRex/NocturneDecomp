// Name: engine_clipper.c_clipPolygonToViewport_FUN_0043de60
// Address: 0043de60
// Address Range: [[0043de60, 0043e5bf]]
// Convention: __cdecl
// Signature: void __cdecl engine_clipper_c_clipPolygonToViewport_FUN_0043de60(int vertex_count,int *vertex_indices)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_clipper_c_clipPolygonToViewport_FUN_0043de60(int vertex_count,int *vertex_indices)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  char cVar5;
  uint *puVar7;
  int iVar8;
  SRenderVertex *pSVar9;
  uint uVar10;
  int iVar11;
  uint *puVar12;
  SRenderVertex *pSVar13;
  SRenderVertex *pSVar14;
  uint *puVar15;
  byte bVar16;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  uint uVar6;
  
  bVar16 = 0;
  if (DAT_0061b4c0 == 0) {
    engine_prim_c_renderIndexedPolygonAdvanced_FUN_0053f720(vertex_indices,vertex_count);
  }
  else {
    uVar6 = 0xffffffff;
    cVar5 = -1;
    uVar10 = 0;
    iVar2 = 0;
    piVar4 = vertex_indices;
    if (0 < vertex_count) {
      do {
        iVar8 = *piVar4;
        if (((&DAT_00629024)[iVar8 * 0xc] & 0x80000000) != 0) {
          uVar10 = uVar10 + 1;
        }
        piVar4 = piVar4 + 1;
        iVar2 = iVar2 + 1;
        uVar6 = uVar6 & (&DAT_00629024)[iVar8 * 0xc];
        cVar5 = (char)uVar6;
      } while (iVar2 < vertex_count);
    }
    if ((uVar10 == vertex_count) && (cVar5 != '\0')) {
      DAT_007c7554 = uVar10 ^ vertex_count;
    }
    else {
      if (uVar10 == 0) {
        if (_DAT_01c50948 != 0) {
          iVar2 = 0;
          if (0 < vertex_count) {
            do {
              iVar8 = *vertex_indices;
              iVar2 = iVar2 + 1;
              vertex_indices = vertex_indices + 1;
              *(uint **)(iVar2 * 4 + 0x7c7b54) = &DAT_00629014 + iVar8 * 0xc;
            } while (iVar2 < vertex_count);
          }
          if (DAT_00713a7c != 0) {
            if (vertex_count < 4) {
              iVar2 = engine_prim_c_calculateTriangleWindingOrder_FUN_0053dd60
                                (DAT_007c7b58,DAT_007c7b5c,DAT_007c7b60);
              if (iVar2 == 0) {
                return;
              }
            }
            else {
              iVar8 = 0;
              iVar2 = (vertex_count + -2) * 4;
              iVar11 = 0;
              if (0 < iVar2) {
                do {
                  iVar3 = engine_prim_c_calculateTriangleWindingOrder_FUN_0053dd60
                                    (DAT_007c7b58,*(SRenderVertex **)((int)&DAT_007c7b5c + iVar8),
                                     *(SRenderVertex **)((int)&DAT_007c7b60 + iVar8));
                  if (iVar3 == 0) {
                    iVar11 = iVar11 + 1;
                  }
                  iVar8 = iVar8 + 4;
                } while (iVar8 < iVar2);
              }
              if (iVar11 == vertex_count + -2) {
                return;
              }
            }
          }
          _DAT_01e7dac8 = _DAT_01e7dac8 + vertex_count + -2;
          engine_special_cpp_drawPolygon2_FUN_00582370(&DAT_007c7b58,vertex_count,_DAT_01c51d14);
          return;
        }
        DAT_007c7554 = vertex_count;
        if (0 < vertex_count) {
          puVar7 = &DAT_007c7558;
          local_28 = 0;
          do {
            puVar12 = &DAT_00629014 + *vertex_indices * 0xc;
            puVar15 = puVar7;
            for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
              *puVar15 = *puVar12;
              puVar12 = puVar12 + 1;
              puVar15 = puVar15 + 1;
            }
            for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
              *(byte *)puVar15 = *(byte *)puVar12;
              puVar12 = (uint *)((int)puVar12 + 1);
              puVar15 = (uint *)((int)puVar15 + 1);
            }
            vertex_indices = vertex_indices + 1;
            local_28 = local_28 + 1;
            puVar7 = puVar7 + 0xc;
          } while (local_28 < vertex_count);
        }
      }
      else {
        DAT_007c8420 = vertex_count;
        DAT_007c8424 = 0;
        DAT_007c8428 = 0;
        DAT_007c842c = 0;
        DAT_007c7554 = 0;
        local_24 = 0;
        if (0 < vertex_count) {
          puVar7 = &DAT_007c8a30;
          do {
            puVar12 = &DAT_00629014 + *vertex_indices * 0xc;
            puVar15 = puVar7;
            for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
              *puVar15 = *puVar12;
              puVar12 = puVar12 + 1;
              puVar15 = puVar15 + 1;
            }
            for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
              *(byte *)puVar15 = *(byte *)puVar12;
              puVar12 = (uint *)((int)puVar12 + 1);
              puVar15 = (uint *)((int)puVar15 + 1);
            }
            vertex_indices = vertex_indices + 1;
            local_24 = local_24 + 1;
            puVar7 = puVar7 + 0xc;
          } while (local_24 < vertex_count);
        }
        local_20 = 0;
        if (0 < (int)DAT_007c8420) {
          pSVar9 = (SRenderVertex *)&DAT_007c8a30;
          do {
            uVar6 = local_20 + 1;
            if (uVar6 == DAT_007c8420) {
              uVar6 = uVar6 ^ DAT_007c8420;
            }
            pSVar14 = (SRenderVertex *)(&DAT_007c8a30 + uVar6 * 0xc);
            bVar1 = (pSVar9->projected_vertex).transformed_z <=
                    (pSVar9->projected_vertex).transformed_x;
            if ((int)(&DAT_007c8a38)[uVar6 * 0xc] <= (pSVar14->projected_vertex).transformed_x) {
              bVar1 = bVar1 | 2;
            }
            switch(bVar1) {
            case 0:
              pSVar14 = pSVar9;
              piVar4 = &DAT_007c8430 + DAT_007c8424 * 0xc;
              for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
                *piVar4 = (pSVar14->projected_vertex).transformed_x;
                pSVar14 = (SRenderVertex *)((int)pSVar14 + (uint)bVar16 * -8 + 4);
                piVar4 = piVar4 + (uint)bVar16 * -2 + 1;
              }
              for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
                *(char *)piVar4 = (char)(pSVar14->projected_vertex).transformed_x;
                pSVar14 = (SRenderVertex *)((int)pSVar14 + (uint)bVar16 * -2 + 1);
                piVar4 = (int *)((int)piVar4 + (uint)bVar16 * -2 + 1);
              }
              DAT_007c8424 = DAT_007c8424 + 1;
              break;
            case 1:
              engine_clipper_c_interpolateVertexRightClipAdvanced_FUN_0043cc70
                        (pSVar14,pSVar9,(SRenderVertex *)(&DAT_007c8430 + DAT_007c8424 * 0xc));
              DAT_007c8424 = DAT_007c8424 + 1;
              break;
            case 2:
              pSVar13 = pSVar9;
              piVar4 = &DAT_007c8430 + DAT_007c8424 * 0xc;
              for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
                *piVar4 = (pSVar13->projected_vertex).transformed_x;
                pSVar13 = (SRenderVertex *)((int)pSVar13 + (uint)bVar16 * -8 + 4);
                piVar4 = piVar4 + (uint)bVar16 * -2 + 1;
              }
              for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
                *(char *)piVar4 = (char)(pSVar13->projected_vertex).transformed_x;
                pSVar13 = (SRenderVertex *)((int)pSVar13 + (uint)bVar16 * -2 + 1);
                piVar4 = (int *)((int)piVar4 + (uint)bVar16 * -2 + 1);
              }
              DAT_007c8424 = DAT_007c8424 + 1;
              engine_clipper_c_interpolateVertexRightClipAdvanced_FUN_0043cc70
                        (pSVar9,pSVar14,(SRenderVertex *)(&DAT_007c8430 + DAT_007c8424 * 0xc));
              DAT_007c8424 = DAT_007c8424 + 1;
            }
            local_20 = local_20 + 1;
            pSVar9 = pSVar9 + 1;
          } while (local_20 < (int)DAT_007c8420);
        }
        if (2 < (int)DAT_007c8424) {
          local_18 = 0;
          if (0 < (int)DAT_007c8424) {
            pSVar9 = (SRenderVertex *)&DAT_007c8430;
            do {
              uVar6 = local_18 + 1;
              if (uVar6 == DAT_007c8424) {
                uVar6 = uVar6 ^ DAT_007c8424;
              }
              pSVar14 = (SRenderVertex *)(&DAT_007c8430 + uVar6 * 0xc);
              bVar1 = (pSVar9->projected_vertex).transformed_x <=
                      -(pSVar9->projected_vertex).transformed_z;
              if ((pSVar14->projected_vertex).transformed_x <= (int)-(&DAT_007c8438)[uVar6 * 0xc]) {
                bVar1 = bVar1 | 2;
              }
              switch(bVar1) {
              case 0:
                pSVar14 = pSVar9;
                piVar4 = &DAT_007c9030 + DAT_007c8428 * 0xc;
                for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
                  *piVar4 = (pSVar14->projected_vertex).transformed_x;
                  pSVar14 = (SRenderVertex *)((int)pSVar14 + (uint)bVar16 * -8 + 4);
                  piVar4 = piVar4 + (uint)bVar16 * -2 + 1;
                }
                for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
                  *(char *)piVar4 = (char)(pSVar14->projected_vertex).transformed_x;
                  pSVar14 = (SRenderVertex *)((int)pSVar14 + (uint)bVar16 * -2 + 1);
                  piVar4 = (int *)((int)piVar4 + (uint)bVar16 * -2 + 1);
                }
                DAT_007c8428 = DAT_007c8428 + 1;
                break;
              case 1:
                engine_clipper_c_interpolateVertexLeftClipAdvanced_FUN_0043cda0
                          (pSVar14,pSVar9,(SRenderVertex *)(&DAT_007c9030 + DAT_007c8428 * 0xc));
                DAT_007c8428 = DAT_007c8428 + 1;
                break;
              case 2:
                pSVar13 = pSVar9;
                piVar4 = &DAT_007c9030 + DAT_007c8428 * 0xc;
                for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
                  *piVar4 = (pSVar13->projected_vertex).transformed_x;
                  pSVar13 = (SRenderVertex *)((int)pSVar13 + (uint)bVar16 * -8 + 4);
                  piVar4 = piVar4 + (uint)bVar16 * -2 + 1;
                }
                for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
                  *(char *)piVar4 = (char)(pSVar13->projected_vertex).transformed_x;
                  pSVar13 = (SRenderVertex *)((int)pSVar13 + (uint)bVar16 * -2 + 1);
                  piVar4 = (int *)((int)piVar4 + (uint)bVar16 * -2 + 1);
                }
                DAT_007c8428 = DAT_007c8428 + 1;
                engine_clipper_c_interpolateVertexLeftClipAdvanced_FUN_0043cda0
                          (pSVar9,pSVar14,(SRenderVertex *)(&DAT_007c9030 + DAT_007c8428 * 0xc));
                DAT_007c8428 = DAT_007c8428 + 1;
              }
              local_18 = local_18 + 1;
              pSVar9 = pSVar9 + 1;
            } while (local_18 < (int)DAT_007c8424);
          }
          if (2 < (int)DAT_007c8428) {
            local_14 = 0;
            if (0 < (int)DAT_007c8428) {
              pSVar9 = (SRenderVertex *)&DAT_007c9030;
              do {
                uVar6 = local_14 + 1;
                if (uVar6 == DAT_007c8428) {
                  uVar6 = uVar6 ^ DAT_007c8428;
                }
                bVar1 = (pSVar9->projected_vertex).transformed_z <=
                        (pSVar9->projected_vertex).transformed_y;
                if ((int)(&DAT_007c9038)[uVar6 * 0xc] <= (int)(&DAT_007c9034)[uVar6 * 0xc]) {
                  bVar1 = bVar1 | 2;
                }
                switch(bVar1) {
                case 0:
                  pSVar14 = pSVar9;
                  piVar4 = &DAT_007c9630 + DAT_007c842c * 0xc;
                  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
                    *piVar4 = (pSVar14->projected_vertex).transformed_x;
                    pSVar14 = (SRenderVertex *)((int)pSVar14 + (uint)bVar16 * -8 + 4);
                    piVar4 = piVar4 + (uint)bVar16 * -2 + 1;
                  }
                  for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
                    *(char *)piVar4 = (char)(pSVar14->projected_vertex).transformed_x;
                    pSVar14 = (SRenderVertex *)((int)pSVar14 + (uint)bVar16 * -2 + 1);
                    piVar4 = (int *)((int)piVar4 + (uint)bVar16 * -2 + 1);
                  }
                  DAT_007c842c = DAT_007c842c + 1;
                  break;
                case 1:
                  engine_clipper_c_interpolateVertexTopClipAdvanced_FUN_0043ced0
                            ((SRenderVertex *)(&DAT_007c9030 + uVar6 * 0xc),pSVar9,
                             (SRenderVertex *)(&DAT_007c9630 + DAT_007c842c * 0xc));
                  DAT_007c842c = DAT_007c842c + 1;
                  break;
                case 2:
                  pSVar14 = pSVar9;
                  piVar4 = &DAT_007c9630 + DAT_007c842c * 0xc;
                  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
                    *piVar4 = (pSVar14->projected_vertex).transformed_x;
                    pSVar14 = (SRenderVertex *)((int)pSVar14 + (uint)bVar16 * -8 + 4);
                    piVar4 = piVar4 + (uint)bVar16 * -2 + 1;
                  }
                  for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
                    *(char *)piVar4 = (char)(pSVar14->projected_vertex).transformed_x;
                    pSVar14 = (SRenderVertex *)((int)pSVar14 + (uint)bVar16 * -2 + 1);
                    piVar4 = (int *)((int)piVar4 + (uint)bVar16 * -2 + 1);
                  }
                  DAT_007c842c = DAT_007c842c + 1;
                  engine_clipper_c_interpolateVertexTopClipAdvanced_FUN_0043ced0
                            (pSVar9,(SRenderVertex *)(&DAT_007c9030 + uVar6 * 0xc),
                             (SRenderVertex *)(&DAT_007c9630 + DAT_007c842c * 0xc));
                  DAT_007c842c = DAT_007c842c + 1;
                }
                local_14 = local_14 + 1;
                pSVar9 = pSVar9 + 1;
              } while (local_14 < (int)DAT_007c8428);
            }
            if (2 < (int)DAT_007c842c) {
              local_1c = 0;
              if (0 < (int)DAT_007c842c) {
                pSVar9 = (SRenderVertex *)&DAT_007c9630;
                do {
                  uVar6 = local_1c + 1;
                  if (uVar6 == DAT_007c842c) {
                    uVar6 = uVar6 ^ DAT_007c842c;
                  }
                  bVar1 = (pSVar9->projected_vertex).transformed_y <=
                          -(pSVar9->projected_vertex).transformed_z;
                  if ((int)(&DAT_007c9634)[uVar6 * 0xc] <= (int)-(&DAT_007c9638)[uVar6 * 0xc]) {
                    bVar1 = bVar1 | 2;
                  }
                  switch(bVar1) {
                  case 0:
                    pSVar14 = pSVar9;
                    piVar4 = &DAT_007c7558 + DAT_007c7554 * 0xc;
                    for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
                      *piVar4 = (pSVar14->projected_vertex).transformed_x;
                      pSVar14 = (SRenderVertex *)((int)pSVar14 + (uint)bVar16 * -8 + 4);
                      piVar4 = piVar4 + (uint)bVar16 * -2 + 1;
                    }
                    for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
                      *(char *)piVar4 = (char)(pSVar14->projected_vertex).transformed_x;
                      pSVar14 = (SRenderVertex *)((int)pSVar14 + (uint)bVar16 * -2 + 1);
                      piVar4 = (int *)((int)piVar4 + (uint)bVar16 * -2 + 1);
                    }
                    DAT_007c7554 = DAT_007c7554 + 1;
                    break;
                  case 1:
                    engine_clipper_c_interpolateVertexBottomClipAdvanced_FUN_0043d000
                              ((SRenderVertex *)(&DAT_007c9630 + uVar6 * 0xc),pSVar9,
                               (SRenderVertex *)(&DAT_007c7558 + DAT_007c7554 * 0xc));
                    DAT_007c7554 = DAT_007c7554 + 1;
                    break;
                  case 2:
                    pSVar14 = pSVar9;
                    piVar4 = &DAT_007c7558 + DAT_007c7554 * 0xc;
                    for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
                      *piVar4 = (pSVar14->projected_vertex).transformed_x;
                      pSVar14 = (SRenderVertex *)((int)pSVar14 + (uint)bVar16 * -8 + 4);
                      piVar4 = piVar4 + (uint)bVar16 * -2 + 1;
                    }
                    for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
                      *(char *)piVar4 = (char)(pSVar14->projected_vertex).transformed_x;
                      pSVar14 = (SRenderVertex *)((int)pSVar14 + (uint)bVar16 * -2 + 1);
                      piVar4 = (int *)((int)piVar4 + (uint)bVar16 * -2 + 1);
                    }
                    DAT_007c7554 = DAT_007c7554 + 1;
                    engine_clipper_c_interpolateVertexBottomClipAdvanced_FUN_0043d000
                              (pSVar9,(SRenderVertex *)(&DAT_007c9630 + uVar6 * 0xc),
                               (SRenderVertex *)(&DAT_007c7558 + DAT_007c7554 * 0xc));
                    DAT_007c7554 = DAT_007c7554 + 1;
                  }
                  local_1c = local_1c + 1;
                  pSVar9 = pSVar9 + 1;
                } while (local_1c < (int)DAT_007c842c);
              }
              if (2 < (int)DAT_007c7554) {
                piVar4 = &DAT_007c7558;
                iVar2 = 0;
                if (0 < (int)DAT_007c7554) {
                  do {
                    iVar8 = piVar4[2];
                    if (iVar8 == 0) {
                      piVar4[2] = 1;
                      *piVar4 = 0;
                      piVar4[1] = 0;
                    }
                    else if (iVar8 < *piVar4) {
                      *piVar4 = iVar8;
                    }
                    else {
                      iVar11 = -iVar8;
                      if (-*piVar4 == iVar8 || iVar11 < *piVar4) {
                        iVar3 = piVar4[1];
                        if (piVar4[2] < iVar3) {
                          piVar4[1] = piVar4[2];
                        }
                        else if (-iVar3 != iVar8 && iVar3 <= iVar11) {
                          piVar4[1] = iVar11;
                        }
                      }
                      else {
                        *piVar4 = iVar11;
                      }
                    }
                    iVar2 = iVar2 + 1;
                    piVar4 = piVar4 + 0xc;
                  } while (iVar2 < (int)DAT_007c7554);
                }
              }
            }
          }
        }
      }
      if (2 < (int)DAT_007c7554) {
        engine_prim_c_renderScanlinePolygon_FUN_0053f080
                  ((SRenderVertex *)&DAT_007c7558,DAT_007c7554);
        return;
      }
    }
  }
  return;
}
