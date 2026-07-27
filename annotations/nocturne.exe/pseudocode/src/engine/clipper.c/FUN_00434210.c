// Name: engine_clipper.c_FUN_00434210
// Address: 00434210
// Address Range: [[00434210, 0043448b]]
// Convention: unknown
// Signature: undefined4 engine_clipper_c_FUN_00434210(uint param_1,int *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint engine_clipper_c_FUN_00434210(uint param_1,int *param_2)

{
  byte bVar1;
  int iVar2;
  char cVar3;
  uint *puVar5;
  int iVar6;
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
  int *local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  uint uVar4;
  
  bVar16 = 0;
  uVar4 = 0xffffffff;
  cVar3 = -1;
  iVar6 = 0;
  uVar9 = 0;
  piVar8 = param_2;
  if (0 < (int)param_1) {
    do {
      if (((&DAT_005c5024)[*piVar8 * 0xc] & 0x80000000) != 0) {
        uVar9 = uVar9 + 1;
      }
      iVar6 = iVar6 + 1;
      uVar4 = uVar4 & (&DAT_005c5024)[*piVar8 * 0xc];
      cVar3 = (char)uVar4;
      piVar8 = piVar8 + 1;
    } while (iVar6 < (int)param_1);
  }
  if ((uVar9 == param_1) && (cVar3 != '\0')) {
    DAT_00766c70 = 0;
    return 1;
  }
  if (uVar9 != 0) {
    DAT_00767b3c = param_1;
    iVar6 = 0;
    DAT_00767b40 = 0;
    DAT_00767b44 = 0;
    DAT_00767b48 = 0;
    DAT_00766c70 = 0;
    if (0 < (int)param_1) {
      puVar5 = &DAT_0076814c;
      local_28 = param_2;
      do {
        puVar13 = &DAT_005c5014 + *local_28 * 0xc;
        puVar15 = puVar5;
        for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
          *puVar15 = *puVar13;
          puVar13 = puVar13 + 1;
          puVar15 = puVar15 + 1;
        }
        for (iVar7 = 0; iVar7 != 0; iVar7 = iVar7 + -1) {
          *(byte *)puVar15 = *(byte *)puVar13;
          puVar13 = (uint *)((int)puVar13 + 1);
          puVar15 = (uint *)((int)puVar15 + 1);
        }
        iVar6 = iVar6 + 1;
        local_28 = local_28 + 1;
        puVar5 = puVar5 + 0xc;
      } while (iVar6 < (int)param_1);
    }
    local_14 = 0;
    if (0 < (int)DAT_00767b3c) {
      piVar8 = &DAT_0076814c;
      do {
        uVar4 = local_14 + 1;
        if (uVar4 == DAT_00767b3c) {
          uVar4 = uVar4 ^ DAT_00767b3c;
        }
        piVar11 = &DAT_0076814c + uVar4 * 0xc;
        bVar1 = piVar8[2] <= *piVar8;
        if ((int)(&DAT_00768154)[uVar4 * 0xc] <= *piVar11) {
          bVar1 = bVar1 | 2;
        }
        switch(bVar1) {
        case 0:
          piVar11 = piVar8;
          piVar12 = &DAT_00767b4c + DAT_00767b40 * 0xc;
          for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
            *piVar12 = *piVar11;
            piVar11 = piVar11 + (uint)bVar16 * -2 + 1;
            piVar12 = piVar12 + (uint)bVar16 * -2 + 1;
          }
          for (iVar6 = 0; iVar6 != 0; iVar6 = iVar6 + -1) {
            *(char *)piVar12 = (char)*piVar11;
            piVar11 = (int *)((int)piVar11 + (uint)bVar16 * -2 + 1);
            piVar12 = (int *)((int)piVar12 + (uint)bVar16 * -2 + 1);
          }
          DAT_00767b40 = DAT_00767b40 + 1;
          break;
        case 1:
          engine_clipper_c_interpolateVertexLeftClipAdvanced_FUN_004337a0
                    (piVar11,piVar8,&DAT_00767b4c + DAT_00767b40 * 0xc);
          DAT_00767b40 = DAT_00767b40 + 1;
          break;
        case 2:
          piVar12 = piVar8;
          piVar14 = &DAT_00767b4c + DAT_00767b40 * 0xc;
          for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
            *piVar14 = *piVar12;
            piVar12 = piVar12 + (uint)bVar16 * -2 + 1;
            piVar14 = piVar14 + (uint)bVar16 * -2 + 1;
          }
          for (iVar6 = 0; iVar6 != 0; iVar6 = iVar6 + -1) {
            *(char *)piVar14 = (char)*piVar12;
            piVar12 = (int *)((int)piVar12 + (uint)bVar16 * -2 + 1);
            piVar14 = (int *)((int)piVar14 + (uint)bVar16 * -2 + 1);
          }
          DAT_00767b40 = DAT_00767b40 + 1;
          engine_clipper_c_interpolateVertexLeftClipAdvanced_FUN_004337a0
                    (piVar8,piVar11,&DAT_00767b4c + DAT_00767b40 * 0xc);
          DAT_00767b40 = DAT_00767b40 + 1;
        }
        local_14 = local_14 + 1;
        piVar8 = piVar8 + 0xc;
      } while (local_14 < (int)DAT_00767b3c);
    }
    if (2 < (int)DAT_00767b40) {
      local_20 = 0;
      if (0 < (int)DAT_00767b40) {
        piVar8 = &DAT_00767b4c;
        do {
          uVar4 = local_20 + 1;
          if (uVar4 == DAT_00767b40) {
            uVar4 = uVar4 ^ DAT_00767b40;
          }
          piVar11 = &DAT_00767b4c + uVar4 * 0xc;
          bVar1 = *piVar8 <= -piVar8[2];
          if (*piVar11 <= (int)-(&DAT_00767b54)[uVar4 * 0xc]) {
            bVar1 = bVar1 | 2;
          }
          switch(bVar1) {
          case 0:
            piVar11 = piVar8;
            piVar12 = &DAT_0076874c + DAT_00767b44 * 0xc;
            for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
              *piVar12 = *piVar11;
              piVar11 = piVar11 + (uint)bVar16 * -2 + 1;
              piVar12 = piVar12 + (uint)bVar16 * -2 + 1;
            }
            for (iVar6 = 0; iVar6 != 0; iVar6 = iVar6 + -1) {
              *(char *)piVar12 = (char)*piVar11;
              piVar11 = (int *)((int)piVar11 + (uint)bVar16 * -2 + 1);
              piVar12 = (int *)((int)piVar12 + (uint)bVar16 * -2 + 1);
            }
            DAT_00767b44 = DAT_00767b44 + 1;
            break;
          case 1:
            engine_clipper_c_interpolateVertexRightClipAdvanced_FUN_004338d0
                      (piVar11,piVar8,&DAT_0076874c + DAT_00767b44 * 0xc);
            DAT_00767b44 = DAT_00767b44 + 1;
            break;
          case 2:
            piVar12 = piVar8;
            piVar14 = &DAT_0076874c + DAT_00767b44 * 0xc;
            for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
              *piVar14 = *piVar12;
              piVar12 = piVar12 + (uint)bVar16 * -2 + 1;
              piVar14 = piVar14 + (uint)bVar16 * -2 + 1;
            }
            for (iVar6 = 0; iVar6 != 0; iVar6 = iVar6 + -1) {
              *(char *)piVar14 = (char)*piVar12;
              piVar12 = (int *)((int)piVar12 + (uint)bVar16 * -2 + 1);
              piVar14 = (int *)((int)piVar14 + (uint)bVar16 * -2 + 1);
            }
            DAT_00767b44 = DAT_00767b44 + 1;
            engine_clipper_c_interpolateVertexRightClipAdvanced_FUN_004338d0
                      (piVar8,piVar11,&DAT_0076874c + DAT_00767b44 * 0xc);
            DAT_00767b44 = DAT_00767b44 + 1;
          }
          local_20 = local_20 + 1;
          piVar8 = piVar8 + 0xc;
        } while (local_20 < (int)DAT_00767b40);
      }
      if (2 < (int)DAT_00767b44) {
        local_1c = 0;
        if (0 < (int)DAT_00767b44) {
          puVar5 = &DAT_0076874c;
          do {
            uVar4 = local_1c + 1;
            if (uVar4 == DAT_00767b44) {
              uVar4 = uVar4 ^ DAT_00767b44;
            }
            bVar1 = (int)puVar5[2] <= (int)puVar5[1];
            if ((int)(&DAT_00768754)[uVar4 * 0xc] <= (int)(&DAT_00768750)[uVar4 * 0xc]) {
              bVar1 = bVar1 | 2;
            }
            switch(bVar1) {
            case 0:
              puVar13 = puVar5;
              puVar15 = &DAT_00768d4c + DAT_00767b48 * 0xc;
              for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
                *puVar15 = *puVar13;
                puVar13 = puVar13 + (uint)bVar16 * -2 + 1;
                puVar15 = puVar15 + (uint)bVar16 * -2 + 1;
              }
              for (iVar6 = 0; iVar6 != 0; iVar6 = iVar6 + -1) {
                *(byte *)puVar15 = *(byte *)puVar13;
                puVar13 = (uint *)((int)puVar13 + (uint)bVar16 * -2 + 1);
                puVar15 = (uint *)((int)puVar15 + (uint)bVar16 * -2 + 1);
              }
              DAT_00767b48 = DAT_00767b48 + 1;
              break;
            case 1:
              engine_clipper_c_interpolateVertexBottomClipAdvanced_FUN_00433a00
                        (&DAT_0076874c + uVar4 * 0xc,puVar5,&DAT_00768d4c + DAT_00767b48 * 0xc);
              DAT_00767b48 = DAT_00767b48 + 1;
              break;
            case 2:
              puVar13 = puVar5;
              puVar15 = &DAT_00768d4c + DAT_00767b48 * 0xc;
              for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
                *puVar15 = *puVar13;
                puVar13 = puVar13 + (uint)bVar16 * -2 + 1;
                puVar15 = puVar15 + (uint)bVar16 * -2 + 1;
              }
              for (iVar6 = 0; iVar6 != 0; iVar6 = iVar6 + -1) {
                *(byte *)puVar15 = *(byte *)puVar13;
                puVar13 = (uint *)((int)puVar13 + (uint)bVar16 * -2 + 1);
                puVar15 = (uint *)((int)puVar15 + (uint)bVar16 * -2 + 1);
              }
              DAT_00767b48 = DAT_00767b48 + 1;
              engine_clipper_c_interpolateVertexBottomClipAdvanced_FUN_00433a00
                        (puVar5,&DAT_0076874c + uVar4 * 0xc,&DAT_00768d4c + DAT_00767b48 * 0xc);
              DAT_00767b48 = DAT_00767b48 + 1;
            }
            local_1c = local_1c + 1;
            puVar5 = puVar5 + 0xc;
          } while (local_1c < (int)DAT_00767b44);
        }
        if (2 < (int)DAT_00767b48) {
          local_18 = 0;
          if (0 < (int)DAT_00767b48) {
            puVar5 = &DAT_00768d4c;
            do {
              uVar4 = local_18 + 1;
              if (uVar4 == DAT_00767b48) {
                uVar4 = uVar4 ^ DAT_00767b48;
              }
              bVar1 = (int)puVar5[1] <= (int)-puVar5[2];
              if ((int)(&DAT_00768d50)[uVar4 * 0xc] <= (int)-(&DAT_00768d54)[uVar4 * 0xc]) {
                bVar1 = bVar1 | 2;
              }
              switch(bVar1) {
              case 0:
                puVar13 = puVar5;
                puVar15 = &DAT_00766c74 + DAT_00766c70 * 0xc;
                for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
                  *puVar15 = *puVar13;
                  puVar13 = puVar13 + (uint)bVar16 * -2 + 1;
                  puVar15 = puVar15 + (uint)bVar16 * -2 + 1;
                }
                for (iVar6 = 0; iVar6 != 0; iVar6 = iVar6 + -1) {
                  *(byte *)puVar15 = *(byte *)puVar13;
                  puVar13 = (uint *)((int)puVar13 + (uint)bVar16 * -2 + 1);
                  puVar15 = (uint *)((int)puVar15 + (uint)bVar16 * -2 + 1);
                }
                DAT_00766c70 = DAT_00766c70 + 1;
                break;
              case 1:
                engine_clipper_c_interpolateVertexTopClipAdvanced_FUN_00433b30
                          (&DAT_00768d4c + uVar4 * 0xc,puVar5,&DAT_00766c74 + DAT_00766c70 * 0xc);
                DAT_00766c70 = DAT_00766c70 + 1;
                break;
              case 2:
                puVar13 = puVar5;
                puVar15 = &DAT_00766c74 + DAT_00766c70 * 0xc;
                for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
                  *puVar15 = *puVar13;
                  puVar13 = puVar13 + (uint)bVar16 * -2 + 1;
                  puVar15 = puVar15 + (uint)bVar16 * -2 + 1;
                }
                for (iVar6 = 0; iVar6 != 0; iVar6 = iVar6 + -1) {
                  *(byte *)puVar15 = *(byte *)puVar13;
                  puVar13 = (uint *)((int)puVar13 + (uint)bVar16 * -2 + 1);
                  puVar15 = (uint *)((int)puVar15 + (uint)bVar16 * -2 + 1);
                }
                DAT_00766c70 = DAT_00766c70 + 1;
                engine_clipper_c_interpolateVertexTopClipAdvanced_FUN_00433b30
                          (puVar5,&DAT_00768d4c + uVar4 * 0xc,&DAT_00766c74 + DAT_00766c70 * 0xc);
                DAT_00766c70 = DAT_00766c70 + 1;
              }
              local_18 = local_18 + 1;
              puVar5 = puVar5 + 0xc;
            } while (local_18 < (int)DAT_00767b48);
          }
          if (2 < (int)DAT_00766c70) {
            piVar8 = &DAT_00766c74;
            iVar6 = 0;
            if (0 < (int)DAT_00766c70) {
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
                    iVar2 = piVar8[1];
                    if (piVar8[2] < iVar2) {
                      piVar8[1] = piVar8[2];
                    }
                    else if (-iVar2 != iVar7 && iVar2 <= iVar10) {
                      piVar8[1] = iVar10;
                    }
                  }
                  else {
                    *piVar8 = iVar10;
                  }
                }
                iVar6 = iVar6 + 1;
                piVar8 = piVar8 + 0xc;
              } while (iVar6 < (int)DAT_00766c70);
            }
          }
        }
      }
    }
    return 0;
  }
  if (_DAT_01c02594 != 0) {
    iVar6 = 0;
    if (0 < (int)param_1) {
      do {
        iVar7 = *param_2;
        iVar6 = iVar6 + 1;
        param_2 = param_2 + 1;
        *(uint **)(iVar6 * 4 + 0x767270) = &DAT_005c5014 + iVar7 * 0xc;
      } while (iVar6 < (int)param_1);
    }
    if (DAT_006b0280 != 0) {
      if ((int)param_1 < 4) {
        iVar6 = engine_prim_c_calculateTriangleWindingOrder_FUN_004f9a10
                          (DAT_00767274,DAT_00767278,DAT_0076727c);
        if (iVar6 == 0) {
          return 1;
        }
      }
      else {
        iVar7 = 0;
        iVar6 = (param_1 - 2) * 4;
        iVar10 = 0;
        if (0 < iVar6) {
          do {
            iVar2 = engine_prim_c_calculateTriangleWindingOrder_FUN_004f9a10
                              (DAT_00767274,*(uint *)((int)&DAT_00767278 + iVar7),
                               *(uint *)((int)&DAT_0076727c + iVar7));
            if (iVar2 == 0) {
              iVar10 = iVar10 + 1;
            }
            iVar7 = iVar7 + 4;
          } while (iVar7 < iVar6);
        }
        if (iVar10 == param_1 - 2) {
          return 1;
        }
      }
    }
    _DAT_01e52ef8 = _DAT_01e52ef8 + 1;
    engine_special_cpp_drawPolygon2_FUN_00532650(&DAT_00767274,param_1,_DAT_01c039a0);
    return 1;
  }
  DAT_00766c70 = param_1;
  if (0 < (int)param_1) {
    puVar5 = &DAT_00766c74;
    local_24 = 0;
    do {
      puVar13 = &DAT_005c5014 + *param_2 * 0xc;
      puVar15 = puVar5;
      for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
        *puVar15 = *puVar13;
        puVar13 = puVar13 + 1;
        puVar15 = puVar15 + 1;
      }
      for (iVar6 = 0; iVar6 != 0; iVar6 = iVar6 + -1) {
        *(byte *)puVar15 = *(byte *)puVar13;
        puVar13 = (uint *)((int)puVar13 + 1);
        puVar15 = (uint *)((int)puVar15 + 1);
      }
      param_2 = param_2 + 1;
      local_24 = local_24 + 1;
      puVar5 = puVar5 + 0xc;
    } while (local_24 < (int)param_1);
  }
  return 0;
}
