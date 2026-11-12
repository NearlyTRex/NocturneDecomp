// Name: engine_clipper.c_clipPolygonToViewport_FUN_00433000
// Address: 00433000
// Address Range: [[00433000, 0043375f]]
// Convention: __cdecl
// Signature: void __cdecl engine_clipper_c_clipPolygonToViewport_FUN_00433000(int vertex_count,int *vertex_indices)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_clipper_c_clipPolygonToViewport_FUN_00433000(int vertex_count,int *vertex_indices)

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
  if (DAT_006141e0 == 0) {
    engine_prim_c_renderIndexedPolygonAdvanced_FUN_0051e130(vertex_indices,vertex_count);
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
        if (((&DAT_00622024)[iVar8 * 0xc] & 0x80000000) != 0) {
          uVar10 = uVar10 + 1;
        }
        piVar4 = piVar4 + 1;
        iVar2 = iVar2 + 1;
        uVar6 = uVar6 & (&DAT_00622024)[iVar8 * 0xc];
        cVar5 = (char)uVar6;
      } while (iVar2 < vertex_count);
    }
    if ((uVar10 == vertex_count) && (cVar5 != '\0')) {
      DAT_007bee30 = uVar10 ^ vertex_count;
    }
    else {
      if (uVar10 == 0) {
        if (_DAT_01c37788 != 0) {
          iVar2 = 0;
          if (0 < vertex_count) {
            do {
              iVar8 = *vertex_indices;
              iVar2 = iVar2 + 1;
              vertex_indices = vertex_indices + 1;
              *(uint **)(iVar2 * 4 + 0x7bf430) = &DAT_00622014 + iVar8 * 0xc;
            } while (iVar2 < vertex_count);
          }
          if (DAT_0070ca7c != 0) {
            if (vertex_count < 4) {
              iVar2 = engine_prim_c_calculateTriangleWindingOrder_FUN_0051c760
                                (DAT_007bf434,DAT_007bf438,DAT_007bf43c);
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
                  iVar3 = engine_prim_c_calculateTriangleWindingOrder_FUN_0051c760
                                    (DAT_007bf434,*(SRenderVertex **)((int)&DAT_007bf438 + iVar8),
                                     *(SRenderVertex **)((int)&DAT_007bf43c + iVar8));
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
          _DAT_01e61b58 = _DAT_01e61b58 + vertex_count + -2;
          engine_special_cpp_drawPolygon2_FUN_0055f920(&DAT_007bf434,vertex_count,_DAT_01c38b54);
          return;
        }
        DAT_007bee30 = vertex_count;
        if (0 < vertex_count) {
          puVar7 = &DAT_007bee34;
          local_28 = 0;
          do {
            puVar12 = &DAT_00622014 + *vertex_indices * 0xc;
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
        DAT_007bfcfc = vertex_count;
        DAT_007bfd00 = 0;
        DAT_007bfd04 = 0;
        DAT_007bfd08 = 0;
        DAT_007bee30 = 0;
        local_24 = 0;
        if (0 < vertex_count) {
          puVar7 = &DAT_007c030c;
          do {
            puVar12 = &DAT_00622014 + *vertex_indices * 0xc;
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
        if (0 < (int)DAT_007bfcfc) {
          pSVar9 = (SRenderVertex *)&DAT_007c030c;
          do {
            uVar6 = local_20 + 1;
            if (uVar6 == DAT_007bfcfc) {
              uVar6 = uVar6 ^ DAT_007bfcfc;
            }
            pSVar14 = (SRenderVertex *)(&DAT_007c030c + uVar6 * 0xc);
            bVar1 = (pSVar9->projected_vertex).transformed_z <=
                    (pSVar9->projected_vertex).transformed_x;
            if ((int)(&DAT_007c0314)[uVar6 * 0xc] <= (pSVar14->projected_vertex).transformed_x) {
              bVar1 = bVar1 | 2;
            }
            switch(bVar1) {
            case 0:
              pSVar14 = pSVar9;
              piVar4 = &DAT_007bfd0c + DAT_007bfd00 * 0xc;
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
              DAT_007bfd00 = DAT_007bfd00 + 1;
              break;
            case 1:
              engine_clipper_c_interpolateVertexRightClipAdvanced_FUN_00431e10
                        (pSVar14,pSVar9,(SRenderVertex *)(&DAT_007bfd0c + DAT_007bfd00 * 0xc));
              DAT_007bfd00 = DAT_007bfd00 + 1;
              break;
            case 2:
              pSVar13 = pSVar9;
              piVar4 = &DAT_007bfd0c + DAT_007bfd00 * 0xc;
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
              DAT_007bfd00 = DAT_007bfd00 + 1;
              engine_clipper_c_interpolateVertexRightClipAdvanced_FUN_00431e10
                        (pSVar9,pSVar14,(SRenderVertex *)(&DAT_007bfd0c + DAT_007bfd00 * 0xc));
              DAT_007bfd00 = DAT_007bfd00 + 1;
            }
            local_20 = local_20 + 1;
            pSVar9 = pSVar9 + 1;
          } while (local_20 < (int)DAT_007bfcfc);
        }
        if (2 < (int)DAT_007bfd00) {
          local_18 = 0;
          if (0 < (int)DAT_007bfd00) {
            pSVar9 = (SRenderVertex *)&DAT_007bfd0c;
            do {
              uVar6 = local_18 + 1;
              if (uVar6 == DAT_007bfd00) {
                uVar6 = uVar6 ^ DAT_007bfd00;
              }
              pSVar14 = (SRenderVertex *)(&DAT_007bfd0c + uVar6 * 0xc);
              bVar1 = (pSVar9->projected_vertex).transformed_x <=
                      -(pSVar9->projected_vertex).transformed_z;
              if ((pSVar14->projected_vertex).transformed_x <= (int)-(&DAT_007bfd14)[uVar6 * 0xc]) {
                bVar1 = bVar1 | 2;
              }
              switch(bVar1) {
              case 0:
                pSVar14 = pSVar9;
                piVar4 = &DAT_007c090c + DAT_007bfd04 * 0xc;
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
                DAT_007bfd04 = DAT_007bfd04 + 1;
                break;
              case 1:
                engine_clipper_c_interpolateVertexLeftClipAdvanced_FUN_00431f40
                          (pSVar14,pSVar9,(SRenderVertex *)(&DAT_007c090c + DAT_007bfd04 * 0xc));
                DAT_007bfd04 = DAT_007bfd04 + 1;
                break;
              case 2:
                pSVar13 = pSVar9;
                piVar4 = &DAT_007c090c + DAT_007bfd04 * 0xc;
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
                DAT_007bfd04 = DAT_007bfd04 + 1;
                engine_clipper_c_interpolateVertexLeftClipAdvanced_FUN_00431f40
                          (pSVar9,pSVar14,(SRenderVertex *)(&DAT_007c090c + DAT_007bfd04 * 0xc));
                DAT_007bfd04 = DAT_007bfd04 + 1;
              }
              local_18 = local_18 + 1;
              pSVar9 = pSVar9 + 1;
            } while (local_18 < (int)DAT_007bfd00);
          }
          if (2 < (int)DAT_007bfd04) {
            local_14 = 0;
            if (0 < (int)DAT_007bfd04) {
              pSVar9 = (SRenderVertex *)&DAT_007c090c;
              do {
                uVar6 = local_14 + 1;
                if (uVar6 == DAT_007bfd04) {
                  uVar6 = uVar6 ^ DAT_007bfd04;
                }
                bVar1 = (pSVar9->projected_vertex).transformed_z <=
                        (pSVar9->projected_vertex).transformed_y;
                if ((int)(&DAT_007c0914)[uVar6 * 0xc] <= (int)(&DAT_007c0910)[uVar6 * 0xc]) {
                  bVar1 = bVar1 | 2;
                }
                switch(bVar1) {
                case 0:
                  pSVar14 = pSVar9;
                  piVar4 = &DAT_007c0f0c + DAT_007bfd08 * 0xc;
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
                  DAT_007bfd08 = DAT_007bfd08 + 1;
                  break;
                case 1:
                  engine_clipper_c_interpolateVertexTopClipAdvanced_FUN_00432070
                            ((SRenderVertex *)(&DAT_007c090c + uVar6 * 0xc),pSVar9,
                             (SRenderVertex *)(&DAT_007c0f0c + DAT_007bfd08 * 0xc));
                  DAT_007bfd08 = DAT_007bfd08 + 1;
                  break;
                case 2:
                  pSVar14 = pSVar9;
                  piVar4 = &DAT_007c0f0c + DAT_007bfd08 * 0xc;
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
                  DAT_007bfd08 = DAT_007bfd08 + 1;
                  engine_clipper_c_interpolateVertexTopClipAdvanced_FUN_00432070
                            (pSVar9,(SRenderVertex *)(&DAT_007c090c + uVar6 * 0xc),
                             (SRenderVertex *)(&DAT_007c0f0c + DAT_007bfd08 * 0xc));
                  DAT_007bfd08 = DAT_007bfd08 + 1;
                }
                local_14 = local_14 + 1;
                pSVar9 = pSVar9 + 1;
              } while (local_14 < (int)DAT_007bfd04);
            }
            if (2 < (int)DAT_007bfd08) {
              local_1c = 0;
              if (0 < (int)DAT_007bfd08) {
                pSVar9 = (SRenderVertex *)&DAT_007c0f0c;
                do {
                  uVar6 = local_1c + 1;
                  if (uVar6 == DAT_007bfd08) {
                    uVar6 = uVar6 ^ DAT_007bfd08;
                  }
                  bVar1 = (pSVar9->projected_vertex).transformed_y <=
                          -(pSVar9->projected_vertex).transformed_z;
                  if (*(int *)(&DAT_007c0f10 + uVar6 * 0x30) <= (int)-(&DAT_007c0f14)[uVar6 * 0xc])
                  {
                    bVar1 = bVar1 | 2;
                  }
                  switch(bVar1) {
                  case 0:
                    pSVar14 = pSVar9;
                    piVar4 = &DAT_007bee34 + DAT_007bee30 * 0xc;
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
                    DAT_007bee30 = DAT_007bee30 + 1;
                    break;
                  case 1:
                    engine_clipper_c_interpolateVertexBottomClipAdvanced_FUN_004321a0
                              ((SRenderVertex *)(&DAT_007c0f0c + uVar6 * 0xc),pSVar9,
                               (SRenderVertex *)(&DAT_007bee34 + DAT_007bee30 * 0xc));
                    DAT_007bee30 = DAT_007bee30 + 1;
                    break;
                  case 2:
                    pSVar14 = pSVar9;
                    piVar4 = &DAT_007bee34 + DAT_007bee30 * 0xc;
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
                    DAT_007bee30 = DAT_007bee30 + 1;
                    engine_clipper_c_interpolateVertexBottomClipAdvanced_FUN_004321a0
                              (pSVar9,(SRenderVertex *)(&DAT_007c0f0c + uVar6 * 0xc),
                               (SRenderVertex *)(&DAT_007bee34 + DAT_007bee30 * 0xc));
                    DAT_007bee30 = DAT_007bee30 + 1;
                  }
                  local_1c = local_1c + 1;
                  pSVar9 = pSVar9 + 1;
                } while (local_1c < (int)DAT_007bfd08);
              }
              if (2 < (int)DAT_007bee30) {
                piVar4 = &DAT_007bee34;
                iVar2 = 0;
                if (0 < (int)DAT_007bee30) {
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
                  } while (iVar2 < (int)DAT_007bee30);
                }
              }
            }
          }
        }
      }
      if (2 < (int)DAT_007bee30) {
        engine_prim_c_FUN_0051da80((SRenderVertex *)&DAT_007bee34,DAT_007bee30);
        return;
      }
    }
  }
  return;
}
