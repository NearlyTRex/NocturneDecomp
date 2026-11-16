// Name: engine_clipper.c_FUN_0043d6e0
// Address: 0043d6e0
// Address Range: [[0043d6e0, 0043db54] [0043db7f, 0043dd83] [0043ddda, 0043de17]]
// Convention: unknown
// Signature: undefined4 engine_clipper_c_FUN_0043d6e0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint engine_clipper_c_FUN_0043d6e0(void)

{
  byte bVar1;
  int iVar2;
  int *piVar3;
  char cVar4;
  int iVar6;
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
  uint in_stack_00000004;
  int *in_stack_00000008;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  uint uVar5;
  
  bVar16 = 0;
  uVar5 = 0xffffffff;
  cVar4 = -1;
  iVar6 = 0;
  uVar10 = 0;
  piVar3 = in_stack_00000008;
  if (0 < (int)in_stack_00000004) {
    do {
      if (((&DAT_00629024)[*piVar3 * 0xc] & 0x80000000) != 0) {
        uVar10 = uVar10 + 1;
      }
      iVar6 = iVar6 + 1;
      uVar5 = uVar5 & (&DAT_00629024)[*piVar3 * 0xc];
      cVar4 = (char)uVar5;
      piVar3 = piVar3 + 1;
    } while (iVar6 < (int)in_stack_00000004);
  }
  if ((uVar10 == in_stack_00000004) && (cVar4 != '\0')) {
    DAT_007c7554 = 0;
    return 1;
  }
  if (uVar10 != 0) {
    DAT_007c8420 = in_stack_00000004;
    DAT_007c8424 = 0;
    DAT_007c8428 = 0;
    DAT_007c842c = 0;
    DAT_007c7554 = 0;
    iStack_28 = 0;
    if (0 < (int)in_stack_00000004) {
      puVar7 = &DAT_007c8a30;
      do {
        puVar12 = &DAT_00629014 + *in_stack_00000008 * 0xc;
        puVar15 = puVar7;
        for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
          *puVar15 = *puVar12;
          puVar12 = puVar12 + 1;
          puVar15 = puVar15 + 1;
        }
        for (iVar6 = 0; iVar6 != 0; iVar6 = iVar6 + -1) {
          *(byte *)puVar15 = *(byte *)puVar12;
          puVar12 = (uint *)((int)puVar12 + 1);
          puVar15 = (uint *)((int)puVar15 + 1);
        }
        in_stack_00000008 = in_stack_00000008 + 1;
        iStack_28 = iStack_28 + 1;
        puVar7 = puVar7 + 0xc;
      } while (iStack_28 < (int)in_stack_00000004);
    }
    iStack_20 = 0;
    if (0 < (int)DAT_007c8420) {
      pSVar9 = (SRenderVertex *)&DAT_007c8a30;
      do {
        uVar5 = iStack_20 + 1;
        if (uVar5 == DAT_007c8420) {
          uVar5 = uVar5 ^ DAT_007c8420;
        }
        pSVar14 = (SRenderVertex *)(&DAT_007c8a30 + uVar5 * 0xc);
        bVar1 = (pSVar9->projected_vertex).transformed_z <= (pSVar9->projected_vertex).transformed_x
        ;
        if ((int)(&DAT_007c8a38)[uVar5 * 0xc] <= (pSVar14->projected_vertex).transformed_x) {
          bVar1 = bVar1 | 2;
        }
        switch(bVar1) {
        case 0:
          pSVar14 = pSVar9;
          piVar3 = &DAT_007c8430 + DAT_007c8424 * 0xc;
          for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
            *piVar3 = (pSVar14->projected_vertex).transformed_x;
            pSVar14 = (SRenderVertex *)((int)pSVar14 + (uint)bVar16 * -8 + 4);
            piVar3 = piVar3 + (uint)bVar16 * -2 + 1;
          }
          for (iVar6 = 0; iVar6 != 0; iVar6 = iVar6 + -1) {
            *(char *)piVar3 = (char)(pSVar14->projected_vertex).transformed_x;
            pSVar14 = (SRenderVertex *)((int)pSVar14 + (uint)bVar16 * -2 + 1);
            piVar3 = (int *)((int)piVar3 + (uint)bVar16 * -2 + 1);
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
          piVar3 = &DAT_007c8430 + DAT_007c8424 * 0xc;
          for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
            *piVar3 = (pSVar13->projected_vertex).transformed_x;
            pSVar13 = (SRenderVertex *)((int)pSVar13 + (uint)bVar16 * -8 + 4);
            piVar3 = piVar3 + (uint)bVar16 * -2 + 1;
          }
          for (iVar6 = 0; iVar6 != 0; iVar6 = iVar6 + -1) {
            *(char *)piVar3 = (char)(pSVar13->projected_vertex).transformed_x;
            pSVar13 = (SRenderVertex *)((int)pSVar13 + (uint)bVar16 * -2 + 1);
            piVar3 = (int *)((int)piVar3 + (uint)bVar16 * -2 + 1);
          }
          DAT_007c8424 = DAT_007c8424 + 1;
          engine_clipper_c_interpolateVertexRightClipAdvanced_FUN_0043cc70
                    (pSVar9,pSVar14,(SRenderVertex *)(&DAT_007c8430 + DAT_007c8424 * 0xc));
          DAT_007c8424 = DAT_007c8424 + 1;
        }
        iStack_20 = iStack_20 + 1;
        pSVar9 = pSVar9 + 1;
      } while (iStack_20 < (int)DAT_007c8420);
    }
    if (2 < (int)DAT_007c8424) {
      iStack_1c = 0;
      if (0 < (int)DAT_007c8424) {
        pSVar9 = (SRenderVertex *)&DAT_007c8430;
        do {
          uVar5 = iStack_1c + 1;
          if (uVar5 == DAT_007c8424) {
            uVar5 = uVar5 ^ DAT_007c8424;
          }
          pSVar14 = (SRenderVertex *)(&DAT_007c8430 + uVar5 * 0xc);
          bVar1 = (pSVar9->projected_vertex).transformed_x <=
                  -(pSVar9->projected_vertex).transformed_z;
          if ((pSVar14->projected_vertex).transformed_x <= (int)-(&DAT_007c8438)[uVar5 * 0xc]) {
            bVar1 = bVar1 | 2;
          }
          switch(bVar1) {
          case 0:
            pSVar14 = pSVar9;
            piVar3 = &DAT_007c9030 + DAT_007c8428 * 0xc;
            for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
              *piVar3 = (pSVar14->projected_vertex).transformed_x;
              pSVar14 = (SRenderVertex *)((int)pSVar14 + (uint)bVar16 * -8 + 4);
              piVar3 = piVar3 + (uint)bVar16 * -2 + 1;
            }
            for (iVar6 = 0; iVar6 != 0; iVar6 = iVar6 + -1) {
              *(char *)piVar3 = (char)(pSVar14->projected_vertex).transformed_x;
              pSVar14 = (SRenderVertex *)((int)pSVar14 + (uint)bVar16 * -2 + 1);
              piVar3 = (int *)((int)piVar3 + (uint)bVar16 * -2 + 1);
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
            piVar3 = &DAT_007c9030 + DAT_007c8428 * 0xc;
            for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
              *piVar3 = (pSVar13->projected_vertex).transformed_x;
              pSVar13 = (SRenderVertex *)((int)pSVar13 + (uint)bVar16 * -8 + 4);
              piVar3 = piVar3 + (uint)bVar16 * -2 + 1;
            }
            for (iVar6 = 0; iVar6 != 0; iVar6 = iVar6 + -1) {
              *(char *)piVar3 = (char)(pSVar13->projected_vertex).transformed_x;
              pSVar13 = (SRenderVertex *)((int)pSVar13 + (uint)bVar16 * -2 + 1);
              piVar3 = (int *)((int)piVar3 + (uint)bVar16 * -2 + 1);
            }
            DAT_007c8428 = DAT_007c8428 + 1;
            engine_clipper_c_interpolateVertexLeftClipAdvanced_FUN_0043cda0
                      (pSVar9,pSVar14,(SRenderVertex *)(&DAT_007c9030 + DAT_007c8428 * 0xc));
            DAT_007c8428 = DAT_007c8428 + 1;
          }
          iStack_1c = iStack_1c + 1;
          pSVar9 = pSVar9 + 1;
        } while (iStack_1c < (int)DAT_007c8424);
      }
      if (2 < (int)DAT_007c8428) {
        iStack_14 = 0;
        if (0 < (int)DAT_007c8428) {
          pSVar9 = (SRenderVertex *)&DAT_007c9030;
          do {
            uVar5 = iStack_14 + 1;
            if (uVar5 == DAT_007c8428) {
              uVar5 = uVar5 ^ DAT_007c8428;
            }
            bVar1 = (pSVar9->projected_vertex).transformed_z <=
                    (pSVar9->projected_vertex).transformed_y;
            if ((int)(&DAT_007c9038)[uVar5 * 0xc] <= (int)(&DAT_007c9034)[uVar5 * 0xc]) {
              bVar1 = bVar1 | 2;
            }
            switch(bVar1) {
            case 0:
              pSVar14 = pSVar9;
              piVar3 = &DAT_007c9630 + DAT_007c842c * 0xc;
              for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
                *piVar3 = (pSVar14->projected_vertex).transformed_x;
                pSVar14 = (SRenderVertex *)((int)pSVar14 + (uint)bVar16 * -8 + 4);
                piVar3 = piVar3 + (uint)bVar16 * -2 + 1;
              }
              for (iVar6 = 0; iVar6 != 0; iVar6 = iVar6 + -1) {
                *(char *)piVar3 = (char)(pSVar14->projected_vertex).transformed_x;
                pSVar14 = (SRenderVertex *)((int)pSVar14 + (uint)bVar16 * -2 + 1);
                piVar3 = (int *)((int)piVar3 + (uint)bVar16 * -2 + 1);
              }
              DAT_007c842c = DAT_007c842c + 1;
              break;
            case 1:
              engine_clipper_c_interpolateVertexTopClipAdvanced_FUN_0043ced0
                        ((SRenderVertex *)(&DAT_007c9030 + uVar5 * 0xc),pSVar9,
                         (SRenderVertex *)(&DAT_007c9630 + DAT_007c842c * 0xc));
              DAT_007c842c = DAT_007c842c + 1;
              break;
            case 2:
              pSVar14 = pSVar9;
              piVar3 = &DAT_007c9630 + DAT_007c842c * 0xc;
              for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
                *piVar3 = (pSVar14->projected_vertex).transformed_x;
                pSVar14 = (SRenderVertex *)((int)pSVar14 + (uint)bVar16 * -8 + 4);
                piVar3 = piVar3 + (uint)bVar16 * -2 + 1;
              }
              for (iVar6 = 0; iVar6 != 0; iVar6 = iVar6 + -1) {
                *(char *)piVar3 = (char)(pSVar14->projected_vertex).transformed_x;
                pSVar14 = (SRenderVertex *)((int)pSVar14 + (uint)bVar16 * -2 + 1);
                piVar3 = (int *)((int)piVar3 + (uint)bVar16 * -2 + 1);
              }
              DAT_007c842c = DAT_007c842c + 1;
              engine_clipper_c_interpolateVertexTopClipAdvanced_FUN_0043ced0
                        (pSVar9,(SRenderVertex *)(&DAT_007c9030 + uVar5 * 0xc),
                         (SRenderVertex *)(&DAT_007c9630 + DAT_007c842c * 0xc));
              DAT_007c842c = DAT_007c842c + 1;
            }
            iStack_14 = iStack_14 + 1;
            pSVar9 = pSVar9 + 1;
          } while (iStack_14 < (int)DAT_007c8428);
        }
        if (2 < (int)DAT_007c842c) {
          iStack_18 = 0;
          if (0 < (int)DAT_007c842c) {
            pSVar9 = (SRenderVertex *)&DAT_007c9630;
            do {
              uVar5 = iStack_18 + 1;
              if (uVar5 == DAT_007c842c) {
                uVar5 = uVar5 ^ DAT_007c842c;
              }
              bVar1 = (pSVar9->projected_vertex).transformed_y <=
                      -(pSVar9->projected_vertex).transformed_z;
              if ((int)(&DAT_007c9634)[uVar5 * 0xc] <= (int)-(&DAT_007c9638)[uVar5 * 0xc]) {
                bVar1 = bVar1 | 2;
              }
              switch(bVar1) {
              case 0:
                pSVar14 = pSVar9;
                piVar3 = &DAT_007c7558 + DAT_007c7554 * 0xc;
                for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
                  *piVar3 = (pSVar14->projected_vertex).transformed_x;
                  pSVar14 = (SRenderVertex *)((int)pSVar14 + (uint)bVar16 * -8 + 4);
                  piVar3 = piVar3 + (uint)bVar16 * -2 + 1;
                }
                for (iVar6 = 0; iVar6 != 0; iVar6 = iVar6 + -1) {
                  *(char *)piVar3 = (char)(pSVar14->projected_vertex).transformed_x;
                  pSVar14 = (SRenderVertex *)((int)pSVar14 + (uint)bVar16 * -2 + 1);
                  piVar3 = (int *)((int)piVar3 + (uint)bVar16 * -2 + 1);
                }
                DAT_007c7554 = DAT_007c7554 + 1;
                break;
              case 1:
                engine_clipper_c_interpolateVertexBottomClipAdvanced_FUN_0043d000
                          ((SRenderVertex *)(&DAT_007c9630 + uVar5 * 0xc),pSVar9,
                           (SRenderVertex *)(&DAT_007c7558 + DAT_007c7554 * 0xc));
                DAT_007c7554 = DAT_007c7554 + 1;
                break;
              case 2:
                pSVar14 = pSVar9;
                piVar3 = &DAT_007c7558 + DAT_007c7554 * 0xc;
                for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
                  *piVar3 = (pSVar14->projected_vertex).transformed_x;
                  pSVar14 = (SRenderVertex *)((int)pSVar14 + (uint)bVar16 * -8 + 4);
                  piVar3 = piVar3 + (uint)bVar16 * -2 + 1;
                }
                for (iVar6 = 0; iVar6 != 0; iVar6 = iVar6 + -1) {
                  *(char *)piVar3 = (char)(pSVar14->projected_vertex).transformed_x;
                  pSVar14 = (SRenderVertex *)((int)pSVar14 + (uint)bVar16 * -2 + 1);
                  piVar3 = (int *)((int)piVar3 + (uint)bVar16 * -2 + 1);
                }
                DAT_007c7554 = DAT_007c7554 + 1;
                engine_clipper_c_interpolateVertexBottomClipAdvanced_FUN_0043d000
                          (pSVar9,(SRenderVertex *)(&DAT_007c9630 + uVar5 * 0xc),
                           (SRenderVertex *)(&DAT_007c7558 + DAT_007c7554 * 0xc));
                DAT_007c7554 = DAT_007c7554 + 1;
              }
              iStack_18 = iStack_18 + 1;
              pSVar9 = pSVar9 + 1;
            } while (iStack_18 < (int)DAT_007c842c);
          }
          if (2 < (int)DAT_007c7554) {
            piVar3 = &DAT_007c7558;
            iVar6 = 0;
            if (0 < (int)DAT_007c7554) {
              do {
                iVar8 = piVar3[2];
                if (iVar8 == 0) {
                  piVar3[2] = 1;
                  *piVar3 = 0;
                  piVar3[1] = 0;
                }
                else if (iVar8 < *piVar3) {
                  *piVar3 = iVar8;
                }
                else {
                  iVar11 = -iVar8;
                  if (-*piVar3 == iVar8 || iVar11 < *piVar3) {
                    iVar2 = piVar3[1];
                    if (piVar3[2] < iVar2) {
                      piVar3[1] = piVar3[2];
                    }
                    else if (-iVar2 != iVar8 && iVar2 <= iVar11) {
                      piVar3[1] = iVar11;
                    }
                  }
                  else {
                    *piVar3 = iVar11;
                  }
                }
                iVar6 = iVar6 + 1;
                piVar3 = piVar3 + 0xc;
              } while (iVar6 < (int)DAT_007c7554);
            }
          }
        }
      }
    }
    return 0;
  }
  if (_DAT_01c50948 != 0) {
    iVar6 = 0;
    if (0 < (int)in_stack_00000004) {
      do {
        iVar8 = *in_stack_00000008;
        iVar6 = iVar6 + 1;
        in_stack_00000008 = in_stack_00000008 + 1;
        *(uint **)(iVar6 * 4 + 0x7c7b54) = &DAT_00629014 + iVar8 * 0xc;
      } while (iVar6 < (int)in_stack_00000004);
    }
    if (DAT_00713a7c != 0) {
      if ((int)in_stack_00000004 < 4) {
        iVar6 = engine_prim_c_calculateTriangleWindingOrder_FUN_0053dd60
                          (DAT_007c7b58,DAT_007c7b5c,DAT_007c7b60);
        if (iVar6 == 0) {
          return 1;
        }
      }
      else {
        iVar8 = 0;
        iVar6 = (in_stack_00000004 - 2) * 4;
        iVar11 = 0;
        if (0 < iVar6) {
          do {
            iVar2 = engine_prim_c_calculateTriangleWindingOrder_FUN_0053dd60
                              (DAT_007c7b58,*(SRenderVertex **)((int)&DAT_007c7b5c + iVar8),
                               *(SRenderVertex **)((int)&DAT_007c7b60 + iVar8));
            if (iVar2 == 0) {
              iVar11 = iVar11 + 1;
            }
            iVar8 = iVar8 + 4;
          } while (iVar8 < iVar6);
        }
        if (iVar11 == in_stack_00000004 - 2) {
          return 1;
        }
      }
    }
    _DAT_01e7dac8 = _DAT_01e7dac8 + (in_stack_00000004 - 2);
    engine_special_cpp_drawPolygon2_FUN_00582370(&DAT_007c7b58,in_stack_00000004,_DAT_01c51d14);
    return 1;
  }
  DAT_007c7554 = in_stack_00000004;
  if (0 < (int)in_stack_00000004) {
    puVar7 = &DAT_007c7558;
    iStack_24 = 0;
    do {
      puVar12 = &DAT_00629014 + *in_stack_00000008 * 0xc;
      puVar15 = puVar7;
      for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
        *puVar15 = *puVar12;
        puVar12 = puVar12 + 1;
        puVar15 = puVar15 + 1;
      }
      for (iVar6 = 0; iVar6 != 0; iVar6 = iVar6 + -1) {
        *(byte *)puVar15 = *(byte *)puVar12;
        puVar12 = (uint *)((int)puVar12 + 1);
        puVar15 = (uint *)((int)puVar15 + 1);
      }
      in_stack_00000008 = in_stack_00000008 + 1;
      iStack_24 = iStack_24 + 1;
      puVar7 = puVar7 + 0xc;
    } while (iStack_24 < (int)in_stack_00000004);
  }
  return 0;
}
