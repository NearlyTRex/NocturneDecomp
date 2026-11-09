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
  if (DAT_005fba40 == 0) {
    engine_prim_c_FUN_00517480(vertex_indices,vertex_count);
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
        if (((&DAT_0060b024)[iVar7 * 0xc] & 0x80000000) != 0) {
          uVar9 = uVar9 + 1;
        }
        piVar8 = piVar8 + 1;
        iVar2 = iVar2 + 1;
        uVar5 = uVar5 & (&DAT_0060b024)[iVar7 * 0xc];
        cVar4 = (char)uVar5;
      } while (iVar2 < vertex_count);
    }
    if ((uVar9 == vertex_count) && (cVar4 != '\0')) {
      DAT_007e3e88 = uVar9 ^ vertex_count;
    }
    else {
      if (uVar9 == 0) {
        if (_DAT_01c6cee8 != 0) {
          iVar2 = 0;
          if (0 < vertex_count) {
            do {
              iVar7 = *vertex_indices;
              iVar2 = iVar2 + 1;
              vertex_indices = vertex_indices + 1;
              *(uint **)(iVar2 * 4 + 0x7e4488) = &DAT_0060b014 + iVar7 * 0xc;
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
              iVar7 = 0;
              iVar2 = (vertex_count + -2) * 4;
              iVar10 = 0;
              if (0 < iVar2) {
                do {
                  iVar3 = engine_prim_c_calculateTriangleWindingOrder_FUN_00515ac0
                                    (DAT_007e448c,*(uint *)((int)&DAT_007e4490 + iVar7),
                                     *(uint *)((int)&DAT_007e4494 + iVar7));
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
          _DAT_01ed3198 = _DAT_01ed3198 + vertex_count + -2;
          engine_special_cpp_drawPolygon2_FUN_00565c40(&DAT_007e448c,vertex_count,_DAT_01c6e2b4);
          return;
        }
        DAT_007e3e88 = vertex_count;
        if (0 < vertex_count) {
          puVar6 = &DAT_007e3e8c;
          local_28 = 0;
          do {
            puVar13 = &DAT_0060b014 + *vertex_indices * 0xc;
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
        DAT_007e4d54 = vertex_count;
        DAT_007e4d58 = 0;
        DAT_007e4d5c = 0;
        DAT_007e4d60 = 0;
        DAT_007e3e88 = 0;
        local_24 = 0;
        if (0 < vertex_count) {
          puVar6 = &DAT_007e5364;
          do {
            puVar13 = &DAT_0060b014 + *vertex_indices * 0xc;
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
        if (0 < (int)DAT_007e4d54) {
          piVar8 = &DAT_007e5364;
          do {
            uVar5 = local_20 + 1;
            if (uVar5 == DAT_007e4d54) {
              uVar5 = uVar5 ^ DAT_007e4d54;
            }
            piVar11 = &DAT_007e5364 + uVar5 * 0xc;
            bVar1 = piVar8[2] <= *piVar8;
            if ((int)(&DAT_007e536c)[uVar5 * 0xc] <= *piVar11) {
              bVar1 = bVar1 | 2;
            }
            switch(bVar1) {
            case 0:
              piVar11 = piVar8;
              piVar12 = &DAT_007e4d64 + DAT_007e4d58 * 0xc;
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
              DAT_007e4d58 = DAT_007e4d58 + 1;
              break;
            case 1:
              engine_clipper_c_interpolateVertexRightClipAdvanced_FUN_0043a8c0
                        (piVar11,piVar8,&DAT_007e4d64 + DAT_007e4d58 * 0xc);
              DAT_007e4d58 = DAT_007e4d58 + 1;
              break;
            case 2:
              piVar12 = piVar8;
              piVar14 = &DAT_007e4d64 + DAT_007e4d58 * 0xc;
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
              DAT_007e4d58 = DAT_007e4d58 + 1;
              engine_clipper_c_interpolateVertexRightClipAdvanced_FUN_0043a8c0
                        (piVar8,piVar11,&DAT_007e4d64 + DAT_007e4d58 * 0xc);
              DAT_007e4d58 = DAT_007e4d58 + 1;
            }
            local_20 = local_20 + 1;
            piVar8 = piVar8 + 0xc;
          } while (local_20 < (int)DAT_007e4d54);
        }
        if (2 < (int)DAT_007e4d58) {
          local_18 = 0;
          if (0 < (int)DAT_007e4d58) {
            piVar8 = &DAT_007e4d64;
            do {
              uVar5 = local_18 + 1;
              if (uVar5 == DAT_007e4d58) {
                uVar5 = uVar5 ^ DAT_007e4d58;
              }
              piVar11 = &DAT_007e4d64 + uVar5 * 0xc;
              bVar1 = *piVar8 <= -piVar8[2];
              if (*piVar11 <= (int)-(&DAT_007e4d6c)[uVar5 * 0xc]) {
                bVar1 = bVar1 | 2;
              }
              switch(bVar1) {
              case 0:
                piVar11 = piVar8;
                piVar12 = &DAT_007e5964 + DAT_007e4d5c * 0xc;
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
                DAT_007e4d5c = DAT_007e4d5c + 1;
                break;
              case 1:
                engine_clipper_c_interpolateVertexLeftClipAdvanced_FUN_0043a9f0
                          (piVar11,piVar8,&DAT_007e5964 + DAT_007e4d5c * 0xc);
                DAT_007e4d5c = DAT_007e4d5c + 1;
                break;
              case 2:
                piVar12 = piVar8;
                piVar14 = &DAT_007e5964 + DAT_007e4d5c * 0xc;
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
                DAT_007e4d5c = DAT_007e4d5c + 1;
                engine_clipper_c_interpolateVertexLeftClipAdvanced_FUN_0043a9f0
                          (piVar8,piVar11,&DAT_007e5964 + DAT_007e4d5c * 0xc);
                DAT_007e4d5c = DAT_007e4d5c + 1;
              }
              local_18 = local_18 + 1;
              piVar8 = piVar8 + 0xc;
            } while (local_18 < (int)DAT_007e4d58);
          }
          if (2 < (int)DAT_007e4d5c) {
            local_14 = 0;
            if (0 < (int)DAT_007e4d5c) {
              puVar6 = &DAT_007e5964;
              do {
                uVar5 = local_14 + 1;
                if (uVar5 == DAT_007e4d5c) {
                  uVar5 = uVar5 ^ DAT_007e4d5c;
                }
                bVar1 = (int)puVar6[2] <= (int)puVar6[1];
                if ((int)(&DAT_007e596c)[uVar5 * 0xc] <= (int)(&DAT_007e5968)[uVar5 * 0xc]) {
                  bVar1 = bVar1 | 2;
                }
                switch(bVar1) {
                case 0:
                  puVar13 = puVar6;
                  puVar15 = &DAT_007e5f64 + DAT_007e4d60 * 0xc;
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
                  DAT_007e4d60 = DAT_007e4d60 + 1;
                  break;
                case 1:
                  engine_clipper_c_interpolateVertexTopClipAdvanced_FUN_0043ab20
                            (&DAT_007e5964 + uVar5 * 0xc,puVar6,&DAT_007e5f64 + DAT_007e4d60 * 0xc);
                  DAT_007e4d60 = DAT_007e4d60 + 1;
                  break;
                case 2:
                  puVar13 = puVar6;
                  puVar15 = &DAT_007e5f64 + DAT_007e4d60 * 0xc;
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
                  DAT_007e4d60 = DAT_007e4d60 + 1;
                  engine_clipper_c_interpolateVertexTopClipAdvanced_FUN_0043ab20
                            (puVar6,&DAT_007e5964 + uVar5 * 0xc,&DAT_007e5f64 + DAT_007e4d60 * 0xc);
                  DAT_007e4d60 = DAT_007e4d60 + 1;
                }
                local_14 = local_14 + 1;
                puVar6 = puVar6 + 0xc;
              } while (local_14 < (int)DAT_007e4d5c);
            }
            if (2 < (int)DAT_007e4d60) {
              local_1c = 0;
              if (0 < (int)DAT_007e4d60) {
                puVar6 = &DAT_007e5f64;
                do {
                  uVar5 = local_1c + 1;
                  if (uVar5 == DAT_007e4d60) {
                    uVar5 = uVar5 ^ DAT_007e4d60;
                  }
                  bVar1 = (int)puVar6[1] <= (int)-puVar6[2];
                  if (*(int *)(&DAT_007e5f68 + uVar5 * 0x30) <= (int)-(&DAT_007e5f6c)[uVar5 * 0xc])
                  {
                    bVar1 = bVar1 | 2;
                  }
                  switch(bVar1) {
                  case 0:
                    puVar13 = puVar6;
                    puVar15 = &DAT_007e3e8c + DAT_007e3e88 * 0xc;
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
                    DAT_007e3e88 = DAT_007e3e88 + 1;
                    break;
                  case 1:
                    engine_clipper_c_interpolateVertexBottomClipAdvanced_FUN_0043ac50
                              (&DAT_007e5f64 + uVar5 * 0xc,puVar6,&DAT_007e3e8c + DAT_007e3e88 * 0xc
                              );
                    DAT_007e3e88 = DAT_007e3e88 + 1;
                    break;
                  case 2:
                    puVar13 = puVar6;
                    puVar15 = &DAT_007e3e8c + DAT_007e3e88 * 0xc;
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
                    DAT_007e3e88 = DAT_007e3e88 + 1;
                    engine_clipper_c_interpolateVertexBottomClipAdvanced_FUN_0043ac50
                              (puVar6,&DAT_007e5f64 + uVar5 * 0xc,&DAT_007e3e8c + DAT_007e3e88 * 0xc
                              );
                    DAT_007e3e88 = DAT_007e3e88 + 1;
                  }
                  local_1c = local_1c + 1;
                  puVar6 = puVar6 + 0xc;
                } while (local_1c < (int)DAT_007e4d60);
              }
              if (2 < (int)DAT_007e3e88) {
                piVar8 = &DAT_007e3e8c;
                iVar2 = 0;
                if (0 < (int)DAT_007e3e88) {
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
                  } while (iVar2 < (int)DAT_007e3e88);
                }
              }
            }
          }
        }
      }
      if (2 < (int)DAT_007e3e88) {
        engine_prim_c_FUN_00516de0((SRenderVertex *)&DAT_007e3e8c,DAT_007e3e88);
        return;
      }
    }
  }
  return;
}
