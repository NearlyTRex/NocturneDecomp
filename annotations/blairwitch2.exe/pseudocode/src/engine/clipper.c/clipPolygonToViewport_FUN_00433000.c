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
  char cVar4;
  uint *puVar6;
  int iVar7;
  int *piVar8;
  uint uVar9;
  int iVar10;
  int *piVar11;
  int *piVar12;
  uint *puVar13;
  int *piVar14;
  uint *puVar15;
  byte bVar16;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  uint uVar5;
  
  bVar16 = 0;
  if (DAT_006141e0 == 0) {
    engine_prim_c_renderIndexedPolygonAdvanced_FUN_0051e130(vertex_indices,vertex_count);
  }
  else {
    uVar5 = 0xffffffff;
    cVar4 = -1;
    uVar9 = 0;
    iVar2 = 0;
    piVar8 = vertex_indices;
    if (0 < vertex_count) {
      do {
        iVar7 = *piVar8;
        if (((&DAT_00622024)[iVar7 * 0xc] & 0x80000000) != 0) {
          uVar9 = uVar9 + 1;
        }
        piVar8 = piVar8 + 1;
        iVar2 = iVar2 + 1;
        uVar5 = uVar5 & (&DAT_00622024)[iVar7 * 0xc];
        cVar4 = (char)uVar5;
      } while (iVar2 < vertex_count);
    }
    if ((uVar9 == vertex_count) && (cVar4 != '\0')) {
      DAT_007bee30 = uVar9 ^ vertex_count;
    }
    else {
      if (uVar9 == 0) {
        if (_DAT_01c37788 != 0) {
          iVar2 = 0;
          if (0 < vertex_count) {
            do {
              iVar7 = *vertex_indices;
              iVar2 = iVar2 + 1;
              vertex_indices = vertex_indices + 1;
              *(uint **)(iVar2 * 4 + 0x7bf430) = &DAT_00622014 + iVar7 * 0xc;
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
              iVar7 = 0;
              iVar2 = (vertex_count + -2) * 4;
              iVar10 = 0;
              if (0 < iVar2) {
                do {
                  iVar3 = engine_prim_c_calculateTriangleWindingOrder_FUN_0051c760
                                    (DAT_007bf434,*(uint *)((int)&DAT_007bf438 + iVar7),
                                     *(uint *)((int)&DAT_007bf43c + iVar7));
                  if (iVar3 == 0) {
                    iVar10 = iVar10 + 1;
                  }
                  iVar7 = iVar7 + 4;
                } while (iVar7 < iVar2);
              }
              if (iVar10 == vertex_count + -2) {
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
          puVar6 = &DAT_007bee34;
          local_28 = 0;
          do {
            puVar13 = &DAT_00622014 + *vertex_indices * 0xc;
            puVar15 = puVar6;
            for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
              *puVar15 = *puVar13;
              puVar13 = puVar13 + 1;
              puVar15 = puVar15 + 1;
            }
            for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
              *(byte *)puVar15 = *(byte *)puVar13;
              puVar13 = (uint *)((int)puVar13 + 1);
              puVar15 = (uint *)((int)puVar15 + 1);
            }
            vertex_indices = vertex_indices + 1;
            local_28 = local_28 + 1;
            puVar6 = puVar6 + 0xc;
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
          puVar6 = &DAT_007c030c;
          do {
            puVar13 = &DAT_00622014 + *vertex_indices * 0xc;
            puVar15 = puVar6;
            for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
              *puVar15 = *puVar13;
              puVar13 = puVar13 + 1;
              puVar15 = puVar15 + 1;
            }
            for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
              *(byte *)puVar15 = *(byte *)puVar13;
              puVar13 = (uint *)((int)puVar13 + 1);
              puVar15 = (uint *)((int)puVar15 + 1);
            }
            vertex_indices = vertex_indices + 1;
            local_24 = local_24 + 1;
            puVar6 = puVar6 + 0xc;
          } while (local_24 < vertex_count);
        }
        local_20 = 0;
        if (0 < (int)DAT_007bfcfc) {
          piVar8 = &DAT_007c030c;
          do {
            uVar5 = local_20 + 1;
            if (uVar5 == DAT_007bfcfc) {
              uVar5 = uVar5 ^ DAT_007bfcfc;
            }
            piVar11 = &DAT_007c030c + uVar5 * 0xc;
            bVar1 = piVar8[2] <= *piVar8;
            if ((int)(&DAT_007c0314)[uVar5 * 0xc] <= *piVar11) {
              bVar1 = bVar1 | 2;
            }
            switch(bVar1) {
            case 0:
              piVar11 = piVar8;
              piVar12 = &DAT_007bfd0c + DAT_007bfd00 * 0xc;
              for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
                *piVar12 = *piVar11;
                piVar11 = piVar11 + (uint)bVar16 * -2 + 1;
                piVar12 = piVar12 + (uint)bVar16 * -2 + 1;
              }
              for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
                *(char *)piVar12 = (char)*piVar11;
                piVar11 = (int *)((int)piVar11 + (uint)bVar16 * -2 + 1);
                piVar12 = (int *)((int)piVar12 + (uint)bVar16 * -2 + 1);
              }
              DAT_007bfd00 = DAT_007bfd00 + 1;
              break;
            case 1:
              engine_clipper_c_interpolateVertexRightClipAdvanced_FUN_00431e10
                        (piVar11,piVar8,&DAT_007bfd0c + DAT_007bfd00 * 0xc);
              DAT_007bfd00 = DAT_007bfd00 + 1;
              break;
            case 2:
              piVar12 = piVar8;
              piVar14 = &DAT_007bfd0c + DAT_007bfd00 * 0xc;
              for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
                *piVar14 = *piVar12;
                piVar12 = piVar12 + (uint)bVar16 * -2 + 1;
                piVar14 = piVar14 + (uint)bVar16 * -2 + 1;
              }
              for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
                *(char *)piVar14 = (char)*piVar12;
                piVar12 = (int *)((int)piVar12 + (uint)bVar16 * -2 + 1);
                piVar14 = (int *)((int)piVar14 + (uint)bVar16 * -2 + 1);
              }
              DAT_007bfd00 = DAT_007bfd00 + 1;
              engine_clipper_c_interpolateVertexRightClipAdvanced_FUN_00431e10
                        (piVar8,piVar11,&DAT_007bfd0c + DAT_007bfd00 * 0xc);
              DAT_007bfd00 = DAT_007bfd00 + 1;
            }
            local_20 = local_20 + 1;
            piVar8 = piVar8 + 0xc;
          } while (local_20 < (int)DAT_007bfcfc);
        }
        if (2 < (int)DAT_007bfd00) {
          local_18 = 0;
          if (0 < (int)DAT_007bfd00) {
            piVar8 = &DAT_007bfd0c;
            do {
              uVar5 = local_18 + 1;
              if (uVar5 == DAT_007bfd00) {
                uVar5 = uVar5 ^ DAT_007bfd00;
              }
              piVar11 = &DAT_007bfd0c + uVar5 * 0xc;
              bVar1 = *piVar8 <= -piVar8[2];
              if (*piVar11 <= (int)-(&DAT_007bfd14)[uVar5 * 0xc]) {
                bVar1 = bVar1 | 2;
              }
              switch(bVar1) {
              case 0:
                piVar11 = piVar8;
                piVar12 = &DAT_007c090c + DAT_007bfd04 * 0xc;
                for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
                  *piVar12 = *piVar11;
                  piVar11 = piVar11 + (uint)bVar16 * -2 + 1;
                  piVar12 = piVar12 + (uint)bVar16 * -2 + 1;
                }
                for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
                  *(char *)piVar12 = (char)*piVar11;
                  piVar11 = (int *)((int)piVar11 + (uint)bVar16 * -2 + 1);
                  piVar12 = (int *)((int)piVar12 + (uint)bVar16 * -2 + 1);
                }
                DAT_007bfd04 = DAT_007bfd04 + 1;
                break;
              case 1:
                engine_clipper_c_interpolateVertexLeftClipAdvanced_FUN_00431f40
                          (piVar11,piVar8,&DAT_007c090c + DAT_007bfd04 * 0xc);
                DAT_007bfd04 = DAT_007bfd04 + 1;
                break;
              case 2:
                piVar12 = piVar8;
                piVar14 = &DAT_007c090c + DAT_007bfd04 * 0xc;
                for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
                  *piVar14 = *piVar12;
                  piVar12 = piVar12 + (uint)bVar16 * -2 + 1;
                  piVar14 = piVar14 + (uint)bVar16 * -2 + 1;
                }
                for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
                  *(char *)piVar14 = (char)*piVar12;
                  piVar12 = (int *)((int)piVar12 + (uint)bVar16 * -2 + 1);
                  piVar14 = (int *)((int)piVar14 + (uint)bVar16 * -2 + 1);
                }
                DAT_007bfd04 = DAT_007bfd04 + 1;
                engine_clipper_c_interpolateVertexLeftClipAdvanced_FUN_00431f40
                          (piVar8,piVar11,&DAT_007c090c + DAT_007bfd04 * 0xc);
                DAT_007bfd04 = DAT_007bfd04 + 1;
              }
              local_18 = local_18 + 1;
              piVar8 = piVar8 + 0xc;
            } while (local_18 < (int)DAT_007bfd00);
          }
          if (2 < (int)DAT_007bfd04) {
            local_14 = 0;
            if (0 < (int)DAT_007bfd04) {
              puVar6 = &DAT_007c090c;
              do {
                uVar5 = local_14 + 1;
                if (uVar5 == DAT_007bfd04) {
                  uVar5 = uVar5 ^ DAT_007bfd04;
                }
                bVar1 = (int)puVar6[2] <= (int)puVar6[1];
                if ((int)(&DAT_007c0914)[uVar5 * 0xc] <= (int)(&DAT_007c0910)[uVar5 * 0xc]) {
                  bVar1 = bVar1 | 2;
                }
                switch(bVar1) {
                case 0:
                  puVar13 = puVar6;
                  puVar15 = &DAT_007c0f0c + DAT_007bfd08 * 0xc;
                  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
                    *puVar15 = *puVar13;
                    puVar13 = puVar13 + (uint)bVar16 * -2 + 1;
                    puVar15 = puVar15 + (uint)bVar16 * -2 + 1;
                  }
                  for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
                    *(byte *)puVar15 = *(byte *)puVar13;
                    puVar13 = (uint *)((int)puVar13 + (uint)bVar16 * -2 + 1);
                    puVar15 = (uint *)((int)puVar15 + (uint)bVar16 * -2 + 1);
                  }
                  DAT_007bfd08 = DAT_007bfd08 + 1;
                  break;
                case 1:
                  engine_clipper_c_interpolateVertexTopClipAdvanced_FUN_00432070
                            (&DAT_007c090c + uVar5 * 0xc,puVar6,&DAT_007c0f0c + DAT_007bfd08 * 0xc);
                  DAT_007bfd08 = DAT_007bfd08 + 1;
                  break;
                case 2:
                  puVar13 = puVar6;
                  puVar15 = &DAT_007c0f0c + DAT_007bfd08 * 0xc;
                  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
                    *puVar15 = *puVar13;
                    puVar13 = puVar13 + (uint)bVar16 * -2 + 1;
                    puVar15 = puVar15 + (uint)bVar16 * -2 + 1;
                  }
                  for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
                    *(byte *)puVar15 = *(byte *)puVar13;
                    puVar13 = (uint *)((int)puVar13 + (uint)bVar16 * -2 + 1);
                    puVar15 = (uint *)((int)puVar15 + (uint)bVar16 * -2 + 1);
                  }
                  DAT_007bfd08 = DAT_007bfd08 + 1;
                  engine_clipper_c_interpolateVertexTopClipAdvanced_FUN_00432070
                            (puVar6,&DAT_007c090c + uVar5 * 0xc,&DAT_007c0f0c + DAT_007bfd08 * 0xc);
                  DAT_007bfd08 = DAT_007bfd08 + 1;
                }
                local_14 = local_14 + 1;
                puVar6 = puVar6 + 0xc;
              } while (local_14 < (int)DAT_007bfd04);
            }
            if (2 < (int)DAT_007bfd08) {
              local_1c = 0;
              if (0 < (int)DAT_007bfd08) {
                puVar6 = &DAT_007c0f0c;
                do {
                  uVar5 = local_1c + 1;
                  if (uVar5 == DAT_007bfd08) {
                    uVar5 = uVar5 ^ DAT_007bfd08;
                  }
                  bVar1 = (int)puVar6[1] <= (int)-puVar6[2];
                  if (*(int *)(&DAT_007c0f10 + uVar5 * 0x30) <= (int)-(&DAT_007c0f14)[uVar5 * 0xc])
                  {
                    bVar1 = bVar1 | 2;
                  }
                  switch(bVar1) {
                  case 0:
                    puVar13 = puVar6;
                    puVar15 = &DAT_007bee34 + DAT_007bee30 * 0xc;
                    for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
                      *puVar15 = *puVar13;
                      puVar13 = puVar13 + (uint)bVar16 * -2 + 1;
                      puVar15 = puVar15 + (uint)bVar16 * -2 + 1;
                    }
                    for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
                      *(byte *)puVar15 = *(byte *)puVar13;
                      puVar13 = (uint *)((int)puVar13 + (uint)bVar16 * -2 + 1);
                      puVar15 = (uint *)((int)puVar15 + (uint)bVar16 * -2 + 1);
                    }
                    DAT_007bee30 = DAT_007bee30 + 1;
                    break;
                  case 1:
                    engine_clipper_c_interpolateVertexBottomClipAdvanced_FUN_004321a0
                              (&DAT_007c0f0c + uVar5 * 0xc,puVar6,&DAT_007bee34 + DAT_007bee30 * 0xc
                              );
                    DAT_007bee30 = DAT_007bee30 + 1;
                    break;
                  case 2:
                    puVar13 = puVar6;
                    puVar15 = &DAT_007bee34 + DAT_007bee30 * 0xc;
                    for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
                      *puVar15 = *puVar13;
                      puVar13 = puVar13 + (uint)bVar16 * -2 + 1;
                      puVar15 = puVar15 + (uint)bVar16 * -2 + 1;
                    }
                    for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
                      *(byte *)puVar15 = *(byte *)puVar13;
                      puVar13 = (uint *)((int)puVar13 + (uint)bVar16 * -2 + 1);
                      puVar15 = (uint *)((int)puVar15 + (uint)bVar16 * -2 + 1);
                    }
                    DAT_007bee30 = DAT_007bee30 + 1;
                    engine_clipper_c_interpolateVertexBottomClipAdvanced_FUN_004321a0
                              (puVar6,&DAT_007c0f0c + uVar5 * 0xc,&DAT_007bee34 + DAT_007bee30 * 0xc
                              );
                    DAT_007bee30 = DAT_007bee30 + 1;
                  }
                  local_1c = local_1c + 1;
                  puVar6 = puVar6 + 0xc;
                } while (local_1c < (int)DAT_007bfd08);
              }
              if (2 < (int)DAT_007bee30) {
                piVar8 = &DAT_007bee34;
                iVar2 = 0;
                if (0 < (int)DAT_007bee30) {
                  do {
                    iVar7 = piVar8[2];
                    if (iVar7 == 0) {
                      piVar8[2] = 1;
                      *piVar8 = 0;
                      piVar8[1] = 0;
                    }
                    else if (iVar7 < *piVar8) {
                      *piVar8 = iVar7;
                    }
                    else {
                      iVar10 = -iVar7;
                      if (-*piVar8 == iVar7 || iVar10 < *piVar8) {
                        iVar3 = piVar8[1];
                        if (piVar8[2] < iVar3) {
                          piVar8[1] = piVar8[2];
                        }
                        else if (-iVar3 != iVar7 && iVar3 <= iVar10) {
                          piVar8[1] = iVar10;
                        }
                      }
                      else {
                        *piVar8 = iVar10;
                      }
                    }
                    iVar2 = iVar2 + 1;
                    piVar8 = piVar8 + 0xc;
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
