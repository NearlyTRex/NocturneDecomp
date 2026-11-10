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
  if (DAT_0061b4c0 == 0) {
    engine_prim_c_renderIndexedPolygonAdvanced_FUN_0053f720(vertex_indices,vertex_count);
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
        if (((&DAT_00629024)[iVar7 * 0xc] & 0x80000000) != 0) {
          uVar9 = uVar9 + 1;
        }
        piVar8 = piVar8 + 1;
        iVar2 = iVar2 + 1;
        uVar5 = uVar5 & (&DAT_00629024)[iVar7 * 0xc];
        cVar4 = (char)uVar5;
      } while (iVar2 < vertex_count);
    }
    if ((uVar9 == vertex_count) && (cVar4 != '\0')) {
      DAT_007c7554 = uVar9 ^ vertex_count;
    }
    else {
      if (uVar9 == 0) {
        if (_DAT_01c50948 != 0) {
          iVar2 = 0;
          if (0 < vertex_count) {
            do {
              iVar7 = *vertex_indices;
              iVar2 = iVar2 + 1;
              vertex_indices = vertex_indices + 1;
              *(uint **)(iVar2 * 4 + 0x7c7b54) = &DAT_00629014 + iVar7 * 0xc;
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
              iVar7 = 0;
              iVar2 = (vertex_count + -2) * 4;
              iVar10 = 0;
              if (0 < iVar2) {
                do {
                  iVar3 = engine_prim_c_calculateTriangleWindingOrder_FUN_0053dd60
                                    (DAT_007c7b58,*(uint *)((int)&DAT_007c7b5c + iVar7),
                                     *(uint *)((int)&DAT_007c7b60 + iVar7));
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
          _DAT_01e7dac8 = _DAT_01e7dac8 + vertex_count + -2;
          engine_special_cpp_drawPolygon2_FUN_00582370(&DAT_007c7b58,vertex_count,_DAT_01c51d14);
          return;
        }
        DAT_007c7554 = vertex_count;
        if (0 < vertex_count) {
          puVar6 = &DAT_007c7558;
          local_28 = 0;
          do {
            puVar13 = &DAT_00629014 + *vertex_indices * 0xc;
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
        DAT_007c8420 = vertex_count;
        DAT_007c8424 = 0;
        DAT_007c8428 = 0;
        DAT_007c842c = 0;
        DAT_007c7554 = 0;
        local_24 = 0;
        if (0 < vertex_count) {
          puVar6 = &DAT_007c8a30;
          do {
            puVar13 = &DAT_00629014 + *vertex_indices * 0xc;
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
        if (0 < (int)DAT_007c8420) {
          piVar8 = &DAT_007c8a30;
          do {
            uVar5 = local_20 + 1;
            if (uVar5 == DAT_007c8420) {
              uVar5 = uVar5 ^ DAT_007c8420;
            }
            piVar11 = &DAT_007c8a30 + uVar5 * 0xc;
            bVar1 = piVar8[2] <= *piVar8;
            if ((int)(&DAT_007c8a38)[uVar5 * 0xc] <= *piVar11) {
              bVar1 = bVar1 | 2;
            }
            switch(bVar1) {
            case 0:
              piVar11 = piVar8;
              piVar12 = &DAT_007c8430 + DAT_007c8424 * 0xc;
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
              DAT_007c8424 = DAT_007c8424 + 1;
              break;
            case 1:
              engine_clipper_c_interpolateVertexRightClipAdvanced_FUN_0043cc70
                        (piVar11,piVar8,&DAT_007c8430 + DAT_007c8424 * 0xc);
              DAT_007c8424 = DAT_007c8424 + 1;
              break;
            case 2:
              piVar12 = piVar8;
              piVar14 = &DAT_007c8430 + DAT_007c8424 * 0xc;
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
              DAT_007c8424 = DAT_007c8424 + 1;
              engine_clipper_c_interpolateVertexRightClipAdvanced_FUN_0043cc70
                        (piVar8,piVar11,&DAT_007c8430 + DAT_007c8424 * 0xc);
              DAT_007c8424 = DAT_007c8424 + 1;
            }
            local_20 = local_20 + 1;
            piVar8 = piVar8 + 0xc;
          } while (local_20 < (int)DAT_007c8420);
        }
        if (2 < (int)DAT_007c8424) {
          local_18 = 0;
          if (0 < (int)DAT_007c8424) {
            piVar8 = &DAT_007c8430;
            do {
              uVar5 = local_18 + 1;
              if (uVar5 == DAT_007c8424) {
                uVar5 = uVar5 ^ DAT_007c8424;
              }
              piVar11 = &DAT_007c8430 + uVar5 * 0xc;
              bVar1 = *piVar8 <= -piVar8[2];
              if (*piVar11 <= (int)-(&DAT_007c8438)[uVar5 * 0xc]) {
                bVar1 = bVar1 | 2;
              }
              switch(bVar1) {
              case 0:
                piVar11 = piVar8;
                piVar12 = &DAT_007c9030 + DAT_007c8428 * 0xc;
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
                DAT_007c8428 = DAT_007c8428 + 1;
                break;
              case 1:
                engine_clipper_c_interpolateVertexLeftClipAdvanced_FUN_0043cda0
                          (piVar11,piVar8,&DAT_007c9030 + DAT_007c8428 * 0xc);
                DAT_007c8428 = DAT_007c8428 + 1;
                break;
              case 2:
                piVar12 = piVar8;
                piVar14 = &DAT_007c9030 + DAT_007c8428 * 0xc;
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
                DAT_007c8428 = DAT_007c8428 + 1;
                engine_clipper_c_interpolateVertexLeftClipAdvanced_FUN_0043cda0
                          (piVar8,piVar11,&DAT_007c9030 + DAT_007c8428 * 0xc);
                DAT_007c8428 = DAT_007c8428 + 1;
              }
              local_18 = local_18 + 1;
              piVar8 = piVar8 + 0xc;
            } while (local_18 < (int)DAT_007c8424);
          }
          if (2 < (int)DAT_007c8428) {
            local_14 = 0;
            if (0 < (int)DAT_007c8428) {
              puVar6 = &DAT_007c9030;
              do {
                uVar5 = local_14 + 1;
                if (uVar5 == DAT_007c8428) {
                  uVar5 = uVar5 ^ DAT_007c8428;
                }
                bVar1 = (int)puVar6[2] <= (int)puVar6[1];
                if ((int)(&DAT_007c9038)[uVar5 * 0xc] <= (int)(&DAT_007c9034)[uVar5 * 0xc]) {
                  bVar1 = bVar1 | 2;
                }
                switch(bVar1) {
                case 0:
                  puVar13 = puVar6;
                  puVar15 = &DAT_007c9630 + DAT_007c842c * 0xc;
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
                  DAT_007c842c = DAT_007c842c + 1;
                  break;
                case 1:
                  engine_clipper_c_interpolateVertexTopClipAdvanced_FUN_0043ced0
                            (&DAT_007c9030 + uVar5 * 0xc,puVar6,&DAT_007c9630 + DAT_007c842c * 0xc);
                  DAT_007c842c = DAT_007c842c + 1;
                  break;
                case 2:
                  puVar13 = puVar6;
                  puVar15 = &DAT_007c9630 + DAT_007c842c * 0xc;
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
                  DAT_007c842c = DAT_007c842c + 1;
                  engine_clipper_c_interpolateVertexTopClipAdvanced_FUN_0043ced0
                            (puVar6,&DAT_007c9030 + uVar5 * 0xc,&DAT_007c9630 + DAT_007c842c * 0xc);
                  DAT_007c842c = DAT_007c842c + 1;
                }
                local_14 = local_14 + 1;
                puVar6 = puVar6 + 0xc;
              } while (local_14 < (int)DAT_007c8428);
            }
            if (2 < (int)DAT_007c842c) {
              local_1c = 0;
              if (0 < (int)DAT_007c842c) {
                puVar6 = &DAT_007c9630;
                do {
                  uVar5 = local_1c + 1;
                  if (uVar5 == DAT_007c842c) {
                    uVar5 = uVar5 ^ DAT_007c842c;
                  }
                  bVar1 = (int)puVar6[1] <= (int)-puVar6[2];
                  if ((int)(&DAT_007c9634)[uVar5 * 0xc] <= (int)-(&DAT_007c9638)[uVar5 * 0xc]) {
                    bVar1 = bVar1 | 2;
                  }
                  switch(bVar1) {
                  case 0:
                    puVar13 = puVar6;
                    puVar15 = &DAT_007c7558 + DAT_007c7554 * 0xc;
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
                    DAT_007c7554 = DAT_007c7554 + 1;
                    break;
                  case 1:
                    engine_clipper_c_interpolateVertexBottomClipAdvanced_FUN_0043d000
                              (&DAT_007c9630 + uVar5 * 0xc,puVar6,&DAT_007c7558 + DAT_007c7554 * 0xc
                              );
                    DAT_007c7554 = DAT_007c7554 + 1;
                    break;
                  case 2:
                    puVar13 = puVar6;
                    puVar15 = &DAT_007c7558 + DAT_007c7554 * 0xc;
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
                    DAT_007c7554 = DAT_007c7554 + 1;
                    engine_clipper_c_interpolateVertexBottomClipAdvanced_FUN_0043d000
                              (puVar6,&DAT_007c9630 + uVar5 * 0xc,&DAT_007c7558 + DAT_007c7554 * 0xc
                              );
                    DAT_007c7554 = DAT_007c7554 + 1;
                  }
                  local_1c = local_1c + 1;
                  puVar6 = puVar6 + 0xc;
                } while (local_1c < (int)DAT_007c842c);
              }
              if (2 < (int)DAT_007c7554) {
                piVar8 = &DAT_007c7558;
                iVar2 = 0;
                if (0 < (int)DAT_007c7554) {
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
