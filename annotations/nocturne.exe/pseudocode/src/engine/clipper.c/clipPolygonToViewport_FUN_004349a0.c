// Name: engine_clipper.c_clipPolygonToViewport_FUN_004349a0
// Address: 004349a0
// Address Range: [[004349a0, 004350ff]]
// Convention: __cdecl
// Signature: int * __cdecl engine_clipper_c_clipPolygonToViewport_FUN_004349a0(uint param_1,int *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * __cdecl engine_clipper_c_clipPolygonToViewport_FUN_004349a0(uint param_1,int *param_2)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  char cVar6;
  int iVar8;
  uint *puVar9;
  int iVar10;
  uint uVar11;
  int *piVar12;
  uint *puVar13;
  int *piVar14;
  uint *puVar15;
  byte bVar16;
  int *local_28;
  int *local_24;
  int local_20;
  int local_1c;
  int local_18;
  int *local_14;
  uint uVar7;
  
  bVar16 = 0;
  if (DAT_005b7644 == 0) {
    local_24 = (int *)engine_prim_c_renderIndexedPolygonAdvanced_FUN_004fb390(param_2,param_1);
  }
  else {
    uVar7 = 0xffffffff;
    cVar6 = -1;
    uVar11 = 0;
    local_24 = (int *)0x0;
    piVar5 = param_2;
    if (0 < (int)param_1) {
      do {
        iVar3 = *piVar5;
        if (((&DAT_005c5024)[iVar3 * 0xc] & 0x80000000) != 0) {
          uVar11 = uVar11 + 1;
        }
        piVar5 = piVar5 + 1;
        local_24 = (int *)((int)local_24 + 1);
        uVar7 = uVar7 & (&DAT_005c5024)[iVar3 * 0xc];
        cVar6 = (char)uVar7;
      } while ((int)local_24 < (int)param_1);
    }
    if ((uVar11 == param_1) && (cVar6 != '\0')) {
      DAT_00766c70 = 0;
    }
    else {
      if (uVar11 == 0) {
        if (_DAT_01c02594 != 0) {
          iVar3 = 0;
          if (0 < (int)param_1) {
            do {
              iVar8 = *param_2;
              iVar3 = iVar3 + 1;
              param_2 = param_2 + 1;
              *(uint **)(iVar3 * 4 + 0x767270) = &DAT_005c5014 + iVar8 * 0xc;
            } while (iVar3 < (int)param_1);
          }
          if (DAT_006b0280 != 0) {
            if ((int)param_1 < 4) {
              iVar3 = engine_prim_c_calculateTriangleWindingOrder_FUN_004f9a10
                                (DAT_00767274,DAT_00767278,DAT_0076727c);
              if (iVar3 == 0) {
                return (int *)0x0;
              }
            }
            else {
              piVar5 = (int *)(param_1 - 2);
              iVar3 = 0;
              piVar12 = (int *)0x0;
              piVar4 = piVar5;
              if (0 < (int)piVar5 * 4) {
                do {
                  piVar4 = (int *)engine_prim_c_calculateTriangleWindingOrder_FUN_004f9a10
                                            (DAT_00767274,
                                             *(uint *)((int)&DAT_00767278 + iVar3),
                                             *(uint *)((int)&DAT_0076727c + iVar3));
                  if (piVar4 == (int *)0x0) {
                    piVar12 = (int *)((int)piVar12 + 1);
                  }
                  iVar3 = iVar3 + 4;
                } while (iVar3 < (int)piVar5 * 4);
              }
              if (piVar12 == piVar5) {
                return piVar4;
              }
            }
          }
          _DAT_01e52ef8 = _DAT_01e52ef8 + 1;
          piVar5 = (int *)engine_special_cpp_drawPolygon2_FUN_00532650
                                    (&DAT_00767274,param_1,_DAT_01c039a0);
          return piVar5;
        }
        DAT_00766c70 = param_1;
        if (0 < (int)param_1) {
          puVar9 = &DAT_00766c74;
          local_24 = (int *)0x0;
          do {
            puVar13 = &DAT_005c5014 + *param_2 * 0xc;
            puVar15 = puVar9;
            for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
              *puVar15 = *puVar13;
              puVar13 = puVar13 + 1;
              puVar15 = puVar15 + 1;
            }
            for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
              *(byte *)puVar15 = *(byte *)puVar13;
              puVar13 = (uint *)((int)puVar13 + 1);
              puVar15 = (uint *)((int)puVar15 + 1);
            }
            param_2 = param_2 + 1;
            local_24 = (int *)((int)local_24 + 1);
            puVar9 = puVar9 + 0xc;
          } while ((int)local_24 < (int)param_1);
        }
      }
      else {
        iVar3 = 0;
        DAT_00767b3c = param_1;
        DAT_00767b40 = 0;
        DAT_00767b44 = 0;
        DAT_00767b48 = 0;
        DAT_00766c70 = 0;
        if (0 < (int)param_1) {
          puVar9 = &DAT_0076814c;
          local_28 = param_2;
          do {
            puVar13 = &DAT_005c5014 + *local_28 * 0xc;
            puVar15 = puVar9;
            for (iVar8 = 0xc; iVar8 != 0; iVar8 = iVar8 + -1) {
              *puVar15 = *puVar13;
              puVar13 = puVar13 + 1;
              puVar15 = puVar15 + 1;
            }
            for (iVar8 = 0; iVar8 != 0; iVar8 = iVar8 + -1) {
              *(byte *)puVar15 = *(byte *)puVar13;
              puVar13 = (uint *)((int)puVar13 + 1);
              puVar15 = (uint *)((int)puVar15 + 1);
            }
            iVar3 = iVar3 + 1;
            local_28 = local_28 + 1;
            puVar9 = puVar9 + 0xc;
          } while (iVar3 < (int)param_1);
          local_24 = (int *)0x30;
        }
        local_14 = (int *)0x0;
        if (0 < (int)DAT_00767b3c) {
          piVar5 = &DAT_0076814c;
          do {
            uVar7 = (int)local_14 + 1;
            if (uVar7 == DAT_00767b3c) {
              uVar7 = uVar7 ^ DAT_00767b3c;
            }
            piVar4 = &DAT_0076814c + uVar7 * 0xc;
            bVar2 = piVar5[2] <= *piVar5;
            if ((int)(&DAT_00768154)[uVar7 * 0xc] <= *piVar4) {
              bVar2 = bVar2 | 2;
            }
            switch(bVar2) {
            case 0:
              piVar4 = piVar5;
              piVar12 = &DAT_00767b4c + DAT_00767b40 * 0xc;
              for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
                *piVar12 = *piVar4;
                piVar4 = piVar4 + (uint)bVar16 * -2 + 1;
                piVar12 = piVar12 + (uint)bVar16 * -2 + 1;
              }
              for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
                *(char *)piVar12 = (char)*piVar4;
                piVar4 = (int *)((int)piVar4 + (uint)bVar16 * -2 + 1);
                piVar12 = (int *)((int)piVar12 + (uint)bVar16 * -2 + 1);
              }
              DAT_00767b40 = DAT_00767b40 + 1;
              break;
            case 1:
              engine_clipper_c_interpolateVertexLeftClipAdvanced_FUN_004337a0
                        (piVar4,piVar5,&DAT_00767b4c + DAT_00767b40 * 0xc);
              DAT_00767b40 = DAT_00767b40 + 1;
              break;
            case 2:
              piVar12 = piVar5;
              piVar14 = &DAT_00767b4c + DAT_00767b40 * 0xc;
              for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
                *piVar14 = *piVar12;
                piVar12 = piVar12 + (uint)bVar16 * -2 + 1;
                piVar14 = piVar14 + (uint)bVar16 * -2 + 1;
              }
              for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
                *(char *)piVar14 = (char)*piVar12;
                piVar12 = (int *)((int)piVar12 + (uint)bVar16 * -2 + 1);
                piVar14 = (int *)((int)piVar14 + (uint)bVar16 * -2 + 1);
              }
              DAT_00767b40 = DAT_00767b40 + 1;
              engine_clipper_c_interpolateVertexLeftClipAdvanced_FUN_004337a0
                        (piVar5,piVar4,&DAT_00767b4c + DAT_00767b40 * 0xc);
              DAT_00767b40 = DAT_00767b40 + 1;
            }
            local_24 = (int *)((int)local_14 + 1);
            piVar5 = piVar5 + 0xc;
            local_14 = local_24;
          } while ((int)local_24 < (int)DAT_00767b3c);
        }
        if (2 < (int)DAT_00767b40) {
          local_20 = 0;
          if (0 < (int)DAT_00767b40) {
            piVar5 = &DAT_00767b4c;
            do {
              uVar7 = local_20 + 1;
              if (uVar7 == DAT_00767b40) {
                uVar7 = uVar7 ^ DAT_00767b40;
              }
              piVar4 = &DAT_00767b4c + uVar7 * 0xc;
              bVar2 = *piVar5 <= -piVar5[2];
              if (*piVar4 <= (int)-(&DAT_00767b54)[uVar7 * 0xc]) {
                bVar2 = bVar2 | 2;
              }
              local_24 = (int *)(uint)bVar2;
              switch(local_24) {
              case (int *)0x0:
                local_24 = (int *)0x30;
                piVar4 = piVar5;
                piVar12 = &DAT_0076874c + DAT_00767b44 * 0xc;
                for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
                  *piVar12 = *piVar4;
                  piVar4 = piVar4 + (uint)bVar16 * -2 + 1;
                  piVar12 = piVar12 + (uint)bVar16 * -2 + 1;
                }
                for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
                  *(char *)piVar12 = (char)*piVar4;
                  piVar4 = (int *)((int)piVar4 + (uint)bVar16 * -2 + 1);
                  piVar12 = (int *)((int)piVar12 + (uint)bVar16 * -2 + 1);
                }
                DAT_00767b44 = DAT_00767b44 + 1;
                break;
              case (int *)0x1:
                local_24 = (int *)engine_clipper_c_interpolateVertexRightClipAdvanced_FUN_004338d0
                                            (piVar4,piVar5,&DAT_0076874c + DAT_00767b44 * 0xc);
                DAT_00767b44 = DAT_00767b44 + 1;
                break;
              case (int *)0x2:
                piVar12 = piVar5;
                piVar14 = &DAT_0076874c + DAT_00767b44 * 0xc;
                for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
                  *piVar14 = *piVar12;
                  piVar12 = piVar12 + (uint)bVar16 * -2 + 1;
                  piVar14 = piVar14 + (uint)bVar16 * -2 + 1;
                }
                for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
                  *(char *)piVar14 = (char)*piVar12;
                  piVar12 = (int *)((int)piVar12 + (uint)bVar16 * -2 + 1);
                  piVar14 = (int *)((int)piVar14 + (uint)bVar16 * -2 + 1);
                }
                DAT_00767b44 = DAT_00767b44 + 1;
                local_24 = (int *)engine_clipper_c_interpolateVertexRightClipAdvanced_FUN_004338d0
                                            (piVar5,piVar4,&DAT_0076874c + DAT_00767b44 * 0xc);
                DAT_00767b44 = DAT_00767b44 + 1;
              }
              local_20 = local_20 + 1;
              piVar5 = piVar5 + 0xc;
            } while (local_20 < (int)DAT_00767b40);
          }
          if (2 < (int)DAT_00767b44) {
            local_1c = 0;
            if (0 < (int)DAT_00767b44) {
              puVar9 = &DAT_0076874c;
              do {
                uVar7 = local_1c + 1;
                if (uVar7 == DAT_00767b44) {
                  uVar7 = uVar7 ^ DAT_00767b44;
                }
                bVar2 = (int)puVar9[2] <= (int)puVar9[1];
                if ((int)(&DAT_00768754)[uVar7 * 0xc] <= (int)(&DAT_00768750)[uVar7 * 0xc]) {
                  bVar2 = bVar2 | 2;
                }
                local_24 = (int *)(uint)bVar2;
                switch(local_24) {
                case (int *)0x0:
                  local_24 = (int *)0x30;
                  puVar13 = puVar9;
                  puVar15 = &DAT_00768d4c + DAT_00767b48 * 0xc;
                  for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
                    *puVar15 = *puVar13;
                    puVar13 = puVar13 + (uint)bVar16 * -2 + 1;
                    puVar15 = puVar15 + (uint)bVar16 * -2 + 1;
                  }
                  for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
                    *(byte *)puVar15 = *(byte *)puVar13;
                    puVar13 = (uint *)((int)puVar13 + (uint)bVar16 * -2 + 1);
                    puVar15 = (uint *)((int)puVar15 + (uint)bVar16 * -2 + 1);
                  }
                  DAT_00767b48 = DAT_00767b48 + 1;
                  break;
                case (int *)0x1:
                  local_24 = (int *)engine_clipper_c_interpolateVertexBottomClipAdvanced_FUN_00433a00
                                              (&DAT_0076874c + uVar7 * 0xc,puVar9,
                                               &DAT_00768d4c + DAT_00767b48 * 0xc);
                  DAT_00767b48 = DAT_00767b48 + 1;
                  break;
                case (int *)0x2:
                  puVar13 = puVar9;
                  puVar15 = &DAT_00768d4c + DAT_00767b48 * 0xc;
                  for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
                    *puVar15 = *puVar13;
                    puVar13 = puVar13 + (uint)bVar16 * -2 + 1;
                    puVar15 = puVar15 + (uint)bVar16 * -2 + 1;
                  }
                  for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
                    *(byte *)puVar15 = *(byte *)puVar13;
                    puVar13 = (uint *)((int)puVar13 + (uint)bVar16 * -2 + 1);
                    puVar15 = (uint *)((int)puVar15 + (uint)bVar16 * -2 + 1);
                  }
                  DAT_00767b48 = DAT_00767b48 + 1;
                  local_24 = (int *)engine_clipper_c_interpolateVertexBottomClipAdvanced_FUN_00433a00
                                              (puVar9,&DAT_0076874c + uVar7 * 0xc,
                                               &DAT_00768d4c + DAT_00767b48 * 0xc);
                  DAT_00767b48 = DAT_00767b48 + 1;
                }
                local_1c = local_1c + 1;
                puVar9 = puVar9 + 0xc;
              } while (local_1c < (int)DAT_00767b44);
            }
            if (2 < (int)DAT_00767b48) {
              local_18 = 0;
              if (0 < (int)DAT_00767b48) {
                puVar9 = &DAT_00768d4c;
                do {
                  uVar7 = local_18 + 1;
                  if (uVar7 == DAT_00767b48) {
                    uVar7 = uVar7 ^ DAT_00767b48;
                  }
                  bVar2 = (int)puVar9[1] <= (int)-puVar9[2];
                  if ((int)(&DAT_00768d50)[uVar7 * 0xc] <= (int)-(&DAT_00768d54)[uVar7 * 0xc]) {
                    bVar2 = bVar2 | 2;
                  }
                  local_24 = (int *)(uint)bVar2;
                  switch(local_24) {
                  case (int *)0x0:
                    local_24 = (int *)0x30;
                    puVar13 = puVar9;
                    puVar15 = &DAT_00766c74 + DAT_00766c70 * 0xc;
                    for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
                      *puVar15 = *puVar13;
                      puVar13 = puVar13 + (uint)bVar16 * -2 + 1;
                      puVar15 = puVar15 + (uint)bVar16 * -2 + 1;
                    }
                    for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
                      *(byte *)puVar15 = *(byte *)puVar13;
                      puVar13 = (uint *)((int)puVar13 + (uint)bVar16 * -2 + 1);
                      puVar15 = (uint *)((int)puVar15 + (uint)bVar16 * -2 + 1);
                    }
                    DAT_00766c70 = DAT_00766c70 + 1;
                    break;
                  case (int *)0x1:
                    local_24 = (int *)engine_clipper_c_interpolateVertexTopClipAdvanced_FUN_00433b30
                                                (&DAT_00768d4c + uVar7 * 0xc,puVar9,
                                                 &DAT_00766c74 + DAT_00766c70 * 0xc);
                    DAT_00766c70 = DAT_00766c70 + 1;
                    break;
                  case (int *)0x2:
                    puVar13 = puVar9;
                    puVar15 = &DAT_00766c74 + DAT_00766c70 * 0xc;
                    for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
                      *puVar15 = *puVar13;
                      puVar13 = puVar13 + (uint)bVar16 * -2 + 1;
                      puVar15 = puVar15 + (uint)bVar16 * -2 + 1;
                    }
                    for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
                      *(byte *)puVar15 = *(byte *)puVar13;
                      puVar13 = (uint *)((int)puVar13 + (uint)bVar16 * -2 + 1);
                      puVar15 = (uint *)((int)puVar15 + (uint)bVar16 * -2 + 1);
                    }
                    DAT_00766c70 = DAT_00766c70 + 1;
                    local_24 = (int *)engine_clipper_c_interpolateVertexTopClipAdvanced_FUN_00433b30
                                                (puVar9,&DAT_00768d4c + uVar7 * 0xc,
                                                 &DAT_00766c74 + DAT_00766c70 * 0xc);
                    DAT_00766c70 = DAT_00766c70 + 1;
                  }
                  local_18 = local_18 + 1;
                  puVar9 = puVar9 + 0xc;
                } while (local_18 < (int)DAT_00767b48);
              }
              if (2 < (int)DAT_00766c70) {
                local_24 = &DAT_00766c74;
                iVar3 = 0;
                if (0 < (int)DAT_00766c70) {
                  do {
                    iVar8 = local_24[2];
                    if (iVar8 == 0) {
                      local_24[2] = 1;
                      *local_24 = 0;
                      local_24[1] = 0;
                    }
                    else if (iVar8 < *local_24) {
                      *local_24 = iVar8;
                    }
                    else {
                      iVar10 = -iVar8;
                      if (-*local_24 == iVar8 || iVar10 < *local_24) {
                        iVar1 = local_24[1];
                        if (local_24[2] < iVar1) {
                          local_24[1] = local_24[2];
                        }
                        else if (-iVar1 != iVar8 && iVar1 <= iVar10) {
                          local_24[1] = iVar10;
                        }
                      }
                      else {
                        *local_24 = iVar10;
                      }
                    }
                    iVar3 = iVar3 + 1;
                    local_24 = local_24 + 0xc;
                  } while (iVar3 < (int)DAT_00766c70);
                }
              }
            }
          }
        }
      }
      if (2 < (int)DAT_00766c70) {
        piVar5 = (int *)engine_prim_c_renderScanlinePolygon_FUN_004fad00(&DAT_00766c74,DAT_00766c70)
        ;
        return piVar5;
      }
    }
  }
  return local_24;
}
