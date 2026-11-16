// Name: engine_clipper.c_FUN_0043b330
// Address: 0043b330
// Address Range: [[0043b330, 0043b5ab] [0043b5d6, 0043b659] [0043b684, 0043b703] [0043b72e, 0043b865] [0043b8bc, 0043b8e4] [0043b93b, 0043b963] [0043b9ba, 0043ba76]]
// Convention: unknown
// Signature: undefined4 engine_clipper_c_FUN_0043b330(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint engine_clipper_c_FUN_0043b330(void)

{
  byte bVar1;
  int iVar2;
  int *piVar3;
  char cVar4;
  uint *puVar6;
  int iVar7;
  int iVar8;
  SRenderVertex *pSVar9;
  int iVar10;
  uint *puVar11;
  SRenderVertex *pSVar12;
  SRenderVertex *pSVar13;
  uint uVar14;
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
  iVar7 = 0;
  uVar14 = 0;
  piVar3 = in_stack_00000008;
  if (0 < (int)in_stack_00000004) {
    do {
      if (((&DAT_0060b024)[*piVar3 * 0xc] & 0x80000000) != 0) {
        uVar14 = uVar14 + 1;
      }
      iVar7 = iVar7 + 1;
      uVar5 = uVar5 & (&DAT_0060b024)[*piVar3 * 0xc];
      cVar4 = (char)uVar5;
      piVar3 = piVar3 + 1;
    } while (iVar7 < (int)in_stack_00000004);
  }
  if ((uVar14 == in_stack_00000004) && (cVar4 != '\0')) {
    DAT_007e3e88 = 0;
    return 1;
  }
  if (uVar14 != 0) {
    DAT_007e4d54 = in_stack_00000004;
    DAT_007e4d58 = 0;
    DAT_007e4d5c = 0;
    DAT_007e4d60 = 0;
    DAT_007e3e88 = 0;
    iStack_24 = 0;
    if (0 < (int)in_stack_00000004) {
      puVar6 = &DAT_007e5364;
      do {
        puVar11 = &DAT_0060b014 + *in_stack_00000008 * 0xc;
        puVar15 = puVar6;
        for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
          *puVar15 = *puVar11;
          puVar11 = puVar11 + 1;
          puVar15 = puVar15 + 1;
        }
        for (iVar7 = 0; iVar7 != 0; iVar7 = iVar7 + -1) {
          *(byte *)puVar15 = *(byte *)puVar11;
          puVar11 = (uint *)((int)puVar11 + 1);
          puVar15 = (uint *)((int)puVar15 + 1);
        }
        in_stack_00000008 = in_stack_00000008 + 1;
        iStack_24 = iStack_24 + 1;
        puVar6 = puVar6 + 0xc;
      } while (iStack_24 < (int)in_stack_00000004);
    }
    iStack_18 = 0;
    if (0 < (int)DAT_007e4d54) {
      pSVar9 = (SRenderVertex *)&DAT_007e5364;
      do {
        uVar5 = iStack_18 + 1;
        if (uVar5 == DAT_007e4d54) {
          uVar5 = uVar5 ^ DAT_007e4d54;
        }
        pSVar13 = (SRenderVertex *)(&DAT_007e5364 + uVar5 * 0xc);
        bVar1 = (pSVar9->projected_vertex).transformed_z <= (pSVar9->projected_vertex).transformed_x
        ;
        if ((int)(&DAT_007e536c)[uVar5 * 0xc] <= (pSVar13->projected_vertex).transformed_x) {
          bVar1 = bVar1 | 2;
        }
        switch(bVar1) {
        case 0:
          pSVar13 = pSVar9;
          piVar3 = &DAT_007e4d64 + DAT_007e4d58 * 0xc;
          for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
            *piVar3 = (pSVar13->projected_vertex).transformed_x;
            pSVar13 = (SRenderVertex *)((int)pSVar13 + (uint)bVar16 * -8 + 4);
            piVar3 = piVar3 + (uint)bVar16 * -2 + 1;
          }
          for (iVar7 = 0; iVar7 != 0; iVar7 = iVar7 + -1) {
            *(char *)piVar3 = (char)(pSVar13->projected_vertex).transformed_x;
            pSVar13 = (SRenderVertex *)((int)pSVar13 + (uint)bVar16 * -2 + 1);
            piVar3 = (int *)((int)piVar3 + (uint)bVar16 * -2 + 1);
          }
          DAT_007e4d58 = DAT_007e4d58 + 1;
          break;
        case 1:
          engine_clipper_c_interpolateVertexRightClipAdvanced_FUN_0043a8c0
                    (pSVar13,pSVar9,(SRenderVertex *)(&DAT_007e4d64 + DAT_007e4d58 * 0xc));
          DAT_007e4d58 = DAT_007e4d58 + 1;
          break;
        case 2:
          pSVar12 = pSVar9;
          piVar3 = &DAT_007e4d64 + DAT_007e4d58 * 0xc;
          for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
            *piVar3 = (pSVar12->projected_vertex).transformed_x;
            pSVar12 = (SRenderVertex *)((int)pSVar12 + (uint)bVar16 * -8 + 4);
            piVar3 = piVar3 + (uint)bVar16 * -2 + 1;
          }
          for (iVar7 = 0; iVar7 != 0; iVar7 = iVar7 + -1) {
            *(char *)piVar3 = (char)(pSVar12->projected_vertex).transformed_x;
            pSVar12 = (SRenderVertex *)((int)pSVar12 + (uint)bVar16 * -2 + 1);
            piVar3 = (int *)((int)piVar3 + (uint)bVar16 * -2 + 1);
          }
          DAT_007e4d58 = DAT_007e4d58 + 1;
          engine_clipper_c_interpolateVertexRightClipAdvanced_FUN_0043a8c0
                    (pSVar9,pSVar13,(SRenderVertex *)(&DAT_007e4d64 + DAT_007e4d58 * 0xc));
          DAT_007e4d58 = DAT_007e4d58 + 1;
        }
        iStack_18 = iStack_18 + 1;
        pSVar9 = pSVar9 + 1;
      } while (iStack_18 < (int)DAT_007e4d54);
    }
    if (2 < (int)DAT_007e4d58) {
      iStack_14 = 0;
      if (0 < (int)DAT_007e4d58) {
        pSVar9 = (SRenderVertex *)&DAT_007e4d64;
        do {
          uVar5 = iStack_14 + 1;
          if (uVar5 == DAT_007e4d58) {
            uVar5 = uVar5 ^ DAT_007e4d58;
          }
          pSVar13 = (SRenderVertex *)(&DAT_007e4d64 + uVar5 * 0xc);
          bVar1 = (pSVar9->projected_vertex).transformed_x <=
                  -(pSVar9->projected_vertex).transformed_z;
          if ((pSVar13->projected_vertex).transformed_x <= (int)-(&DAT_007e4d6c)[uVar5 * 0xc]) {
            bVar1 = bVar1 | 2;
          }
          switch(bVar1) {
          case 0:
            pSVar13 = pSVar9;
            piVar3 = &DAT_007e5964 + DAT_007e4d5c * 0xc;
            for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
              *piVar3 = (pSVar13->projected_vertex).transformed_x;
              pSVar13 = (SRenderVertex *)((int)pSVar13 + (uint)bVar16 * -8 + 4);
              piVar3 = piVar3 + (uint)bVar16 * -2 + 1;
            }
            for (iVar7 = 0; iVar7 != 0; iVar7 = iVar7 + -1) {
              *(char *)piVar3 = (char)(pSVar13->projected_vertex).transformed_x;
              pSVar13 = (SRenderVertex *)((int)pSVar13 + (uint)bVar16 * -2 + 1);
              piVar3 = (int *)((int)piVar3 + (uint)bVar16 * -2 + 1);
            }
            DAT_007e4d5c = DAT_007e4d5c + 1;
            break;
          case 1:
            engine_clipper_c_interpolateVertexLeftClipAdvanced_FUN_0043a9f0
                      (pSVar13,pSVar9,(SRenderVertex *)(&DAT_007e5964 + DAT_007e4d5c * 0xc));
            DAT_007e4d5c = DAT_007e4d5c + 1;
            break;
          case 2:
            pSVar12 = pSVar9;
            piVar3 = &DAT_007e5964 + DAT_007e4d5c * 0xc;
            for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
              *piVar3 = (pSVar12->projected_vertex).transformed_x;
              pSVar12 = (SRenderVertex *)((int)pSVar12 + (uint)bVar16 * -8 + 4);
              piVar3 = piVar3 + (uint)bVar16 * -2 + 1;
            }
            for (iVar7 = 0; iVar7 != 0; iVar7 = iVar7 + -1) {
              *(char *)piVar3 = (char)(pSVar12->projected_vertex).transformed_x;
              pSVar12 = (SRenderVertex *)((int)pSVar12 + (uint)bVar16 * -2 + 1);
              piVar3 = (int *)((int)piVar3 + (uint)bVar16 * -2 + 1);
            }
            DAT_007e4d5c = DAT_007e4d5c + 1;
            engine_clipper_c_interpolateVertexLeftClipAdvanced_FUN_0043a9f0
                      (pSVar9,pSVar13,(SRenderVertex *)(&DAT_007e5964 + DAT_007e4d5c * 0xc));
            DAT_007e4d5c = DAT_007e4d5c + 1;
          }
          iStack_14 = iStack_14 + 1;
          pSVar9 = pSVar9 + 1;
        } while (iStack_14 < (int)DAT_007e4d58);
      }
      if (2 < (int)DAT_007e4d5c) {
        iStack_1c = 0;
        if (0 < (int)DAT_007e4d5c) {
          pSVar9 = (SRenderVertex *)&DAT_007e5964;
          do {
            uVar5 = iStack_1c + 1;
            if (uVar5 == DAT_007e4d5c) {
              uVar5 = uVar5 ^ DAT_007e4d5c;
            }
            bVar1 = (pSVar9->projected_vertex).transformed_z <=
                    (pSVar9->projected_vertex).transformed_y;
            if ((int)(&DAT_007e596c)[uVar5 * 0xc] <= (int)(&DAT_007e5968)[uVar5 * 0xc]) {
              bVar1 = bVar1 | 2;
            }
            switch(bVar1) {
            case 0:
              pSVar13 = pSVar9;
              piVar3 = &DAT_007e5f64 + DAT_007e4d60 * 0xc;
              for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
                *piVar3 = (pSVar13->projected_vertex).transformed_x;
                pSVar13 = (SRenderVertex *)((int)pSVar13 + (uint)bVar16 * -8 + 4);
                piVar3 = piVar3 + (uint)bVar16 * -2 + 1;
              }
              for (iVar7 = 0; iVar7 != 0; iVar7 = iVar7 + -1) {
                *(char *)piVar3 = (char)(pSVar13->projected_vertex).transformed_x;
                pSVar13 = (SRenderVertex *)((int)pSVar13 + (uint)bVar16 * -2 + 1);
                piVar3 = (int *)((int)piVar3 + (uint)bVar16 * -2 + 1);
              }
              DAT_007e4d60 = DAT_007e4d60 + 1;
              break;
            case 1:
              engine_clipper_c_interpolateVertexTopClipAdvanced_FUN_0043ab20
                        ((SRenderVertex *)(&DAT_007e5964 + uVar5 * 0xc),pSVar9,
                         (SRenderVertex *)(&DAT_007e5f64 + DAT_007e4d60 * 0xc));
              DAT_007e4d60 = DAT_007e4d60 + 1;
              break;
            case 2:
              pSVar13 = pSVar9;
              piVar3 = &DAT_007e5f64 + DAT_007e4d60 * 0xc;
              for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
                *piVar3 = (pSVar13->projected_vertex).transformed_x;
                pSVar13 = (SRenderVertex *)((int)pSVar13 + (uint)bVar16 * -8 + 4);
                piVar3 = piVar3 + (uint)bVar16 * -2 + 1;
              }
              for (iVar7 = 0; iVar7 != 0; iVar7 = iVar7 + -1) {
                *(char *)piVar3 = (char)(pSVar13->projected_vertex).transformed_x;
                pSVar13 = (SRenderVertex *)((int)pSVar13 + (uint)bVar16 * -2 + 1);
                piVar3 = (int *)((int)piVar3 + (uint)bVar16 * -2 + 1);
              }
              DAT_007e4d60 = DAT_007e4d60 + 1;
              engine_clipper_c_interpolateVertexTopClipAdvanced_FUN_0043ab20
                        (pSVar9,(SRenderVertex *)(&DAT_007e5964 + uVar5 * 0xc),
                         (SRenderVertex *)(&DAT_007e5f64 + DAT_007e4d60 * 0xc));
              DAT_007e4d60 = DAT_007e4d60 + 1;
            }
            iStack_1c = iStack_1c + 1;
            pSVar9 = pSVar9 + 1;
          } while (iStack_1c < (int)DAT_007e4d5c);
        }
        if (2 < (int)DAT_007e4d60) {
          iStack_20 = 0;
          if (0 < (int)DAT_007e4d60) {
            pSVar9 = (SRenderVertex *)&DAT_007e5f64;
            do {
              uVar5 = iStack_20 + 1;
              if (uVar5 == DAT_007e4d60) {
                uVar5 = uVar5 ^ DAT_007e4d60;
              }
              bVar1 = (pSVar9->projected_vertex).transformed_y <=
                      -(pSVar9->projected_vertex).transformed_z;
              if (*(int *)(&DAT_007e5f68 + uVar5 * 0x30) <= (int)-(&DAT_007e5f6c)[uVar5 * 0xc]) {
                bVar1 = bVar1 | 2;
              }
              switch(bVar1) {
              case 0:
                pSVar13 = pSVar9;
                piVar3 = &DAT_007e3e8c + DAT_007e3e88 * 0xc;
                for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
                  *piVar3 = (pSVar13->projected_vertex).transformed_x;
                  pSVar13 = (SRenderVertex *)((int)pSVar13 + (uint)bVar16 * -8 + 4);
                  piVar3 = piVar3 + (uint)bVar16 * -2 + 1;
                }
                for (iVar7 = 0; iVar7 != 0; iVar7 = iVar7 + -1) {
                  *(char *)piVar3 = (char)(pSVar13->projected_vertex).transformed_x;
                  pSVar13 = (SRenderVertex *)((int)pSVar13 + (uint)bVar16 * -2 + 1);
                  piVar3 = (int *)((int)piVar3 + (uint)bVar16 * -2 + 1);
                }
                DAT_007e3e88 = DAT_007e3e88 + 1;
                break;
              case 1:
                engine_clipper_c_interpolateVertexBottomClipAdvanced_FUN_0043ac50
                          ((SRenderVertex *)(&DAT_007e5f64 + uVar5 * 0xc),pSVar9,
                           (SRenderVertex *)(&DAT_007e3e8c + DAT_007e3e88 * 0xc));
                DAT_007e3e88 = DAT_007e3e88 + 1;
                break;
              case 2:
                pSVar13 = pSVar9;
                piVar3 = &DAT_007e3e8c + DAT_007e3e88 * 0xc;
                for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
                  *piVar3 = (pSVar13->projected_vertex).transformed_x;
                  pSVar13 = (SRenderVertex *)((int)pSVar13 + (uint)bVar16 * -8 + 4);
                  piVar3 = piVar3 + (uint)bVar16 * -2 + 1;
                }
                for (iVar7 = 0; iVar7 != 0; iVar7 = iVar7 + -1) {
                  *(char *)piVar3 = (char)(pSVar13->projected_vertex).transformed_x;
                  pSVar13 = (SRenderVertex *)((int)pSVar13 + (uint)bVar16 * -2 + 1);
                  piVar3 = (int *)((int)piVar3 + (uint)bVar16 * -2 + 1);
                }
                DAT_007e3e88 = DAT_007e3e88 + 1;
                engine_clipper_c_interpolateVertexBottomClipAdvanced_FUN_0043ac50
                          (pSVar9,(SRenderVertex *)(&DAT_007e5f64 + uVar5 * 0xc),
                           (SRenderVertex *)(&DAT_007e3e8c + DAT_007e3e88 * 0xc));
                DAT_007e3e88 = DAT_007e3e88 + 1;
              }
              iStack_20 = iStack_20 + 1;
              pSVar9 = pSVar9 + 1;
            } while (iStack_20 < (int)DAT_007e4d60);
          }
          if (2 < (int)DAT_007e3e88) {
            piVar3 = &DAT_007e3e8c;
            iVar7 = 0;
            if (0 < (int)DAT_007e3e88) {
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
                  iVar10 = -iVar8;
                  if (-*piVar3 == iVar8 || iVar10 < *piVar3) {
                    iVar2 = piVar3[1];
                    if (piVar3[2] < iVar2) {
                      piVar3[1] = piVar3[2];
                    }
                    else if (-iVar2 != iVar8 && iVar2 <= iVar10) {
                      piVar3[1] = iVar10;
                    }
                  }
                  else {
                    *piVar3 = iVar10;
                  }
                }
                iVar7 = iVar7 + 1;
                piVar3 = piVar3 + 0xc;
              } while (iVar7 < (int)DAT_007e3e88);
            }
          }
        }
      }
    }
    return 0;
  }
  if (_DAT_01c6cee8 != 0) {
    iVar7 = 0;
    if (0 < (int)in_stack_00000004) {
      do {
        iVar8 = *in_stack_00000008;
        iVar7 = iVar7 + 1;
        in_stack_00000008 = in_stack_00000008 + 1;
        *(uint **)(iVar7 * 4 + 0x7e4488) = &DAT_0060b014 + iVar8 * 0xc;
      } while (iVar7 < (int)in_stack_00000004);
    }
    if (DAT_007303fc != 0) {
      if ((int)in_stack_00000004 < 4) {
        iVar7 = engine_prim_c_calculateTriangleWindingOrder_FUN_00515ac0
                          (DAT_007e448c,DAT_007e4490,DAT_007e4494);
        if (iVar7 == 0) {
          return 1;
        }
      }
      else {
        iVar8 = 0;
        iVar7 = (in_stack_00000004 - 2) * 4;
        iVar10 = 0;
        if (0 < iVar7) {
          do {
            iVar2 = engine_prim_c_calculateTriangleWindingOrder_FUN_00515ac0
                              (DAT_007e448c,*(SRenderVertex **)((int)&DAT_007e4490 + iVar8),
                               *(SRenderVertex **)((int)&DAT_007e4494 + iVar8));
            if (iVar2 == 0) {
              iVar10 = iVar10 + 1;
            }
            iVar8 = iVar8 + 4;
          } while (iVar8 < iVar7);
        }
        if (iVar10 == in_stack_00000004 - 2) {
          return 1;
        }
      }
    }
    _DAT_01ed3198 = _DAT_01ed3198 + (in_stack_00000004 - 2);
    engine_special_cpp_drawPolygon2_FUN_00565c40(&DAT_007e448c,in_stack_00000004,_DAT_01c6e2b4);
    return 1;
  }
  DAT_007e3e88 = in_stack_00000004;
  if (0 < (int)in_stack_00000004) {
    puVar6 = &DAT_007e3e8c;
    iStack_28 = 0;
    do {
      puVar11 = &DAT_0060b014 + *in_stack_00000008 * 0xc;
      puVar15 = puVar6;
      for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
        *puVar15 = *puVar11;
        puVar11 = puVar11 + 1;
        puVar15 = puVar15 + 1;
      }
      for (iVar7 = 0; iVar7 != 0; iVar7 = iVar7 + -1) {
        *(byte *)puVar15 = *(byte *)puVar11;
        puVar11 = (uint *)((int)puVar11 + 1);
        puVar15 = (uint *)((int)puVar15 + 1);
      }
      in_stack_00000008 = in_stack_00000008 + 1;
      iStack_28 = iStack_28 + 1;
      puVar6 = puVar6 + 0xc;
    } while (iStack_28 < (int)in_stack_00000004);
  }
  return 0;
}
