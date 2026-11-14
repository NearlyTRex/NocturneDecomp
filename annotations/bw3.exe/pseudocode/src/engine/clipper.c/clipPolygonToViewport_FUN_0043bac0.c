// Name: engine_clipper.c_clipPolygonToViewport_FUN_0043bac0
// Address: 0043bac0
// Address Range: [[0043bac0, 0043c21f]]
// Convention: __cdecl
// Signature: void __cdecl engine_clipper_c_clipPolygonToViewport_FUN_0043bac0(int vertex_count,int *vertex_indices)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_clipper_c_clipPolygonToViewport_FUN_0043bac0(int vertex_count,int *vertex_indices)

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
  if (DAT_005fba40 == 0) {
    engine_prim_c_renderIndexedPolygonAdvanced_FUN_00517480(vertex_indices,vertex_count);
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
        if (((&DAT_0060b024)[iVar8 * 0xc] & 0x80000000) != 0) {
          uVar10 = uVar10 + 1;
        }
        piVar4 = piVar4 + 1;
        iVar2 = iVar2 + 1;
        uVar6 = uVar6 & (&DAT_0060b024)[iVar8 * 0xc];
        cVar5 = (char)uVar6;
      } while (iVar2 < vertex_count);
    }
    if ((uVar10 == vertex_count) && (cVar5 != '\0')) {
      DAT_007e3e88 = uVar10 ^ vertex_count;
    }
    else {
      if (uVar10 == 0) {
        if (_DAT_01c6cee8 != 0) {
          iVar2 = 0;
          if (0 < vertex_count) {
            do {
              iVar8 = *vertex_indices;
              iVar2 = iVar2 + 1;
              vertex_indices = vertex_indices + 1;
              *(uint **)(iVar2 * 4 + 0x7e4488) = &DAT_0060b014 + iVar8 * 0xc;
            } while (iVar2 < vertex_count);
          }
          if (DAT_007303fc != 0) {
            if (vertex_count < 4) {
              iVar2 = engine_prim_c_calculateTriangleWindingOrder_FUN_00515ac0
                                (DAT_007e448c,DAT_007e4490,DAT_007e4494);
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
                  iVar3 = engine_prim_c_calculateTriangleWindingOrder_FUN_00515ac0
                                    (DAT_007e448c,*(SRenderVertex **)((int)&DAT_007e4490 + iVar8),
                                     *(SRenderVertex **)((int)&DAT_007e4494 + iVar8));
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
          _DAT_01ed3198 = _DAT_01ed3198 + vertex_count + -2;
          engine_special_cpp_drawPolygon2_FUN_00565c40(&DAT_007e448c,vertex_count,_DAT_01c6e2b4);
          return;
        }
        DAT_007e3e88 = vertex_count;
        if (0 < vertex_count) {
          puVar7 = &DAT_007e3e8c;
          local_28 = 0;
          do {
            puVar12 = &DAT_0060b014 + *vertex_indices * 0xc;
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
        DAT_007e4d54 = vertex_count;
        DAT_007e4d58 = 0;
        DAT_007e4d5c = 0;
        DAT_007e4d60 = 0;
        DAT_007e3e88 = 0;
        local_24 = 0;
        if (0 < vertex_count) {
          puVar7 = &DAT_007e5364;
          do {
            puVar12 = &DAT_0060b014 + *vertex_indices * 0xc;
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
        if (0 < (int)DAT_007e4d54) {
          pSVar9 = (SRenderVertex *)&DAT_007e5364;
          do {
            uVar6 = local_20 + 1;
            if (uVar6 == DAT_007e4d54) {
              uVar6 = uVar6 ^ DAT_007e4d54;
            }
            pSVar14 = (SRenderVertex *)(&DAT_007e5364 + uVar6 * 0xc);
            bVar1 = (pSVar9->projected_vertex).transformed_z <=
                    (pSVar9->projected_vertex).transformed_x;
            if ((int)(&DAT_007e536c)[uVar6 * 0xc] <= (pSVar14->projected_vertex).transformed_x) {
              bVar1 = bVar1 | 2;
            }
            switch(bVar1) {
            case 0:
              pSVar14 = pSVar9;
              piVar4 = &DAT_007e4d64 + DAT_007e4d58 * 0xc;
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
              DAT_007e4d58 = DAT_007e4d58 + 1;
              break;
            case 1:
              engine_clipper_c_interpolateVertexRightClipAdvanced_FUN_0043a8c0
                        (pSVar14,pSVar9,(SRenderVertex *)(&DAT_007e4d64 + DAT_007e4d58 * 0xc));
              DAT_007e4d58 = DAT_007e4d58 + 1;
              break;
            case 2:
              pSVar13 = pSVar9;
              piVar4 = &DAT_007e4d64 + DAT_007e4d58 * 0xc;
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
              DAT_007e4d58 = DAT_007e4d58 + 1;
              engine_clipper_c_interpolateVertexRightClipAdvanced_FUN_0043a8c0
                        (pSVar9,pSVar14,(SRenderVertex *)(&DAT_007e4d64 + DAT_007e4d58 * 0xc));
              DAT_007e4d58 = DAT_007e4d58 + 1;
            }
            local_20 = local_20 + 1;
            pSVar9 = pSVar9 + 1;
          } while (local_20 < (int)DAT_007e4d54);
        }
        if (2 < (int)DAT_007e4d58) {
          local_18 = 0;
          if (0 < (int)DAT_007e4d58) {
            pSVar9 = (SRenderVertex *)&DAT_007e4d64;
            do {
              uVar6 = local_18 + 1;
              if (uVar6 == DAT_007e4d58) {
                uVar6 = uVar6 ^ DAT_007e4d58;
              }
              pSVar14 = (SRenderVertex *)(&DAT_007e4d64 + uVar6 * 0xc);
              bVar1 = (pSVar9->projected_vertex).transformed_x <=
                      -(pSVar9->projected_vertex).transformed_z;
              if ((pSVar14->projected_vertex).transformed_x <= (int)-(&DAT_007e4d6c)[uVar6 * 0xc]) {
                bVar1 = bVar1 | 2;
              }
              switch(bVar1) {
              case 0:
                pSVar14 = pSVar9;
                piVar4 = &DAT_007e5964 + DAT_007e4d5c * 0xc;
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
                DAT_007e4d5c = DAT_007e4d5c + 1;
                break;
              case 1:
                engine_clipper_c_interpolateVertexLeftClipAdvanced_FUN_0043a9f0
                          (pSVar14,pSVar9,(SRenderVertex *)(&DAT_007e5964 + DAT_007e4d5c * 0xc));
                DAT_007e4d5c = DAT_007e4d5c + 1;
                break;
              case 2:
                pSVar13 = pSVar9;
                piVar4 = &DAT_007e5964 + DAT_007e4d5c * 0xc;
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
                DAT_007e4d5c = DAT_007e4d5c + 1;
                engine_clipper_c_interpolateVertexLeftClipAdvanced_FUN_0043a9f0
                          (pSVar9,pSVar14,(SRenderVertex *)(&DAT_007e5964 + DAT_007e4d5c * 0xc));
                DAT_007e4d5c = DAT_007e4d5c + 1;
              }
              local_18 = local_18 + 1;
              pSVar9 = pSVar9 + 1;
            } while (local_18 < (int)DAT_007e4d58);
          }
          if (2 < (int)DAT_007e4d5c) {
            local_14 = 0;
            if (0 < (int)DAT_007e4d5c) {
              pSVar9 = (SRenderVertex *)&DAT_007e5964;
              do {
                uVar6 = local_14 + 1;
                if (uVar6 == DAT_007e4d5c) {
                  uVar6 = uVar6 ^ DAT_007e4d5c;
                }
                bVar1 = (pSVar9->projected_vertex).transformed_z <=
                        (pSVar9->projected_vertex).transformed_y;
                if ((int)(&DAT_007e596c)[uVar6 * 0xc] <= (int)(&DAT_007e5968)[uVar6 * 0xc]) {
                  bVar1 = bVar1 | 2;
                }
                switch(bVar1) {
                case 0:
                  pSVar14 = pSVar9;
                  piVar4 = &DAT_007e5f64 + DAT_007e4d60 * 0xc;
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
                  DAT_007e4d60 = DAT_007e4d60 + 1;
                  break;
                case 1:
                  engine_clipper_c_interpolateVertexTopClipAdvanced_FUN_0043ab20
                            ((SRenderVertex *)(&DAT_007e5964 + uVar6 * 0xc),pSVar9,
                             (SRenderVertex *)(&DAT_007e5f64 + DAT_007e4d60 * 0xc));
                  DAT_007e4d60 = DAT_007e4d60 + 1;
                  break;
                case 2:
                  pSVar14 = pSVar9;
                  piVar4 = &DAT_007e5f64 + DAT_007e4d60 * 0xc;
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
                  DAT_007e4d60 = DAT_007e4d60 + 1;
                  engine_clipper_c_interpolateVertexTopClipAdvanced_FUN_0043ab20
                            (pSVar9,(SRenderVertex *)(&DAT_007e5964 + uVar6 * 0xc),
                             (SRenderVertex *)(&DAT_007e5f64 + DAT_007e4d60 * 0xc));
                  DAT_007e4d60 = DAT_007e4d60 + 1;
                }
                local_14 = local_14 + 1;
                pSVar9 = pSVar9 + 1;
              } while (local_14 < (int)DAT_007e4d5c);
            }
            if (2 < (int)DAT_007e4d60) {
              local_1c = 0;
              if (0 < (int)DAT_007e4d60) {
                pSVar9 = (SRenderVertex *)&DAT_007e5f64;
                do {
                  uVar6 = local_1c + 1;
                  if (uVar6 == DAT_007e4d60) {
                    uVar6 = uVar6 ^ DAT_007e4d60;
                  }
                  bVar1 = (pSVar9->projected_vertex).transformed_y <=
                          -(pSVar9->projected_vertex).transformed_z;
                  if (*(int *)(&DAT_007e5f68 + uVar6 * 0x30) <= (int)-(&DAT_007e5f6c)[uVar6 * 0xc])
                  {
                    bVar1 = bVar1 | 2;
                  }
                  switch(bVar1) {
                  case 0:
                    pSVar14 = pSVar9;
                    piVar4 = &DAT_007e3e8c + DAT_007e3e88 * 0xc;
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
                    DAT_007e3e88 = DAT_007e3e88 + 1;
                    break;
                  case 1:
                    engine_clipper_c_interpolateVertexBottomClipAdvanced_FUN_0043ac50
                              ((SRenderVertex *)(&DAT_007e5f64 + uVar6 * 0xc),pSVar9,
                               (SRenderVertex *)(&DAT_007e3e8c + DAT_007e3e88 * 0xc));
                    DAT_007e3e88 = DAT_007e3e88 + 1;
                    break;
                  case 2:
                    pSVar14 = pSVar9;
                    piVar4 = &DAT_007e3e8c + DAT_007e3e88 * 0xc;
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
                    DAT_007e3e88 = DAT_007e3e88 + 1;
                    engine_clipper_c_interpolateVertexBottomClipAdvanced_FUN_0043ac50
                              (pSVar9,(SRenderVertex *)(&DAT_007e5f64 + uVar6 * 0xc),
                               (SRenderVertex *)(&DAT_007e3e8c + DAT_007e3e88 * 0xc));
                    DAT_007e3e88 = DAT_007e3e88 + 1;
                  }
                  local_1c = local_1c + 1;
                  pSVar9 = pSVar9 + 1;
                } while (local_1c < (int)DAT_007e4d60);
              }
              if (2 < (int)DAT_007e3e88) {
                piVar4 = &DAT_007e3e8c;
                iVar2 = 0;
                if (0 < (int)DAT_007e3e88) {
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
                  } while (iVar2 < (int)DAT_007e3e88);
                }
              }
            }
          }
        }
      }
      if (2 < (int)DAT_007e3e88) {
        engine_prim_c_renderScanlinePolygon_FUN_00516de0
                  ((SRenderVertex *)&DAT_007e3e8c,DAT_007e3e88);
        return;
      }
    }
  }
  return;
}
