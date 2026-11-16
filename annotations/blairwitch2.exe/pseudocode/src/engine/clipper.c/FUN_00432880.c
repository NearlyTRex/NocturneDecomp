// Name: engine_clipper.c_FUN_00432880
// Address: 00432880
// Address Range: [[00432880, 00432fb7]]
// Convention: unknown
// Signature: undefined4 engine_clipper_c_FUN_00432880(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint engine_clipper_c_FUN_00432880(void)

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
      if (((&DAT_00622024)[*piVar3 * 0xc] & 0x80000000) != 0) {
        uVar10 = uVar10 + 1;
      }
      iVar6 = iVar6 + 1;
      uVar5 = uVar5 & (&DAT_00622024)[*piVar3 * 0xc];
      cVar4 = (char)uVar5;
      piVar3 = piVar3 + 1;
    } while (iVar6 < (int)in_stack_00000004);
  }
  if ((uVar10 == in_stack_00000004) && (cVar4 != '\0')) {
    DAT_007bee30 = 0;
    return 1;
  }
  if (uVar10 != 0) {
    DAT_007bfcfc = in_stack_00000004;
    DAT_007bfd00 = 0;
    DAT_007bfd04 = 0;
    DAT_007bfd08 = 0;
    DAT_007bee30 = 0;
    iStack_28 = 0;
    if (0 < (int)in_stack_00000004) {
      puVar7 = &DAT_007c030c;
      do {
        puVar12 = &DAT_00622014 + *in_stack_00000008 * 0xc;
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
    if (0 < (int)DAT_007bfcfc) {
      pSVar9 = (SRenderVertex *)&DAT_007c030c;
      do {
        uVar5 = iStack_20 + 1;
        if (uVar5 == DAT_007bfcfc) {
          uVar5 = uVar5 ^ DAT_007bfcfc;
        }
        pSVar14 = (SRenderVertex *)(&DAT_007c030c + uVar5 * 0xc);
        bVar1 = (pSVar9->projected_vertex).transformed_z <= (pSVar9->projected_vertex).transformed_x
        ;
        if ((int)(&DAT_007c0314)[uVar5 * 0xc] <= (pSVar14->projected_vertex).transformed_x) {
          bVar1 = bVar1 | 2;
        }
        switch(bVar1) {
        case 0:
          pSVar14 = pSVar9;
          piVar3 = &DAT_007bfd0c + DAT_007bfd00 * 0xc;
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
          DAT_007bfd00 = DAT_007bfd00 + 1;
          break;
        case 1:
          engine_clipper_c_interpolateVertexRightClipAdvanced_FUN_00431e10
                    (pSVar14,pSVar9,(SRenderVertex *)(&DAT_007bfd0c + DAT_007bfd00 * 0xc));
          DAT_007bfd00 = DAT_007bfd00 + 1;
          break;
        case 2:
          pSVar13 = pSVar9;
          piVar3 = &DAT_007bfd0c + DAT_007bfd00 * 0xc;
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
          DAT_007bfd00 = DAT_007bfd00 + 1;
          engine_clipper_c_interpolateVertexRightClipAdvanced_FUN_00431e10
                    (pSVar9,pSVar14,(SRenderVertex *)(&DAT_007bfd0c + DAT_007bfd00 * 0xc));
          DAT_007bfd00 = DAT_007bfd00 + 1;
        }
        iStack_20 = iStack_20 + 1;
        pSVar9 = pSVar9 + 1;
      } while (iStack_20 < (int)DAT_007bfcfc);
    }
    if (2 < (int)DAT_007bfd00) {
      iStack_1c = 0;
      if (0 < (int)DAT_007bfd00) {
        pSVar9 = (SRenderVertex *)&DAT_007bfd0c;
        do {
          uVar5 = iStack_1c + 1;
          if (uVar5 == DAT_007bfd00) {
            uVar5 = uVar5 ^ DAT_007bfd00;
          }
          pSVar14 = (SRenderVertex *)(&DAT_007bfd0c + uVar5 * 0xc);
          bVar1 = (pSVar9->projected_vertex).transformed_x <=
                  -(pSVar9->projected_vertex).transformed_z;
          if ((pSVar14->projected_vertex).transformed_x <= (int)-(&DAT_007bfd14)[uVar5 * 0xc]) {
            bVar1 = bVar1 | 2;
          }
          switch(bVar1) {
          case 0:
            pSVar14 = pSVar9;
            piVar3 = &DAT_007c090c + DAT_007bfd04 * 0xc;
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
            DAT_007bfd04 = DAT_007bfd04 + 1;
            break;
          case 1:
            engine_clipper_c_interpolateVertexLeftClipAdvanced_FUN_00431f40
                      (pSVar14,pSVar9,(SRenderVertex *)(&DAT_007c090c + DAT_007bfd04 * 0xc));
            DAT_007bfd04 = DAT_007bfd04 + 1;
            break;
          case 2:
            pSVar13 = pSVar9;
            piVar3 = &DAT_007c090c + DAT_007bfd04 * 0xc;
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
            DAT_007bfd04 = DAT_007bfd04 + 1;
            engine_clipper_c_interpolateVertexLeftClipAdvanced_FUN_00431f40
                      (pSVar9,pSVar14,(SRenderVertex *)(&DAT_007c090c + DAT_007bfd04 * 0xc));
            DAT_007bfd04 = DAT_007bfd04 + 1;
          }
          iStack_1c = iStack_1c + 1;
          pSVar9 = pSVar9 + 1;
        } while (iStack_1c < (int)DAT_007bfd00);
      }
      if (2 < (int)DAT_007bfd04) {
        iStack_14 = 0;
        if (0 < (int)DAT_007bfd04) {
          pSVar9 = (SRenderVertex *)&DAT_007c090c;
          do {
            uVar5 = iStack_14 + 1;
            if (uVar5 == DAT_007bfd04) {
              uVar5 = uVar5 ^ DAT_007bfd04;
            }
            bVar1 = (pSVar9->projected_vertex).transformed_z <=
                    (pSVar9->projected_vertex).transformed_y;
            if ((int)(&DAT_007c0914)[uVar5 * 0xc] <= (int)(&DAT_007c0910)[uVar5 * 0xc]) {
              bVar1 = bVar1 | 2;
            }
            switch(bVar1) {
            case 0:
              pSVar14 = pSVar9;
              piVar3 = &DAT_007c0f0c + DAT_007bfd08 * 0xc;
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
              DAT_007bfd08 = DAT_007bfd08 + 1;
              break;
            case 1:
              engine_clipper_c_interpolateVertexTopClipAdvanced_FUN_00432070
                        ((SRenderVertex *)(&DAT_007c090c + uVar5 * 0xc),pSVar9,
                         (SRenderVertex *)(&DAT_007c0f0c + DAT_007bfd08 * 0xc));
              DAT_007bfd08 = DAT_007bfd08 + 1;
              break;
            case 2:
              pSVar14 = pSVar9;
              piVar3 = &DAT_007c0f0c + DAT_007bfd08 * 0xc;
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
              DAT_007bfd08 = DAT_007bfd08 + 1;
              engine_clipper_c_interpolateVertexTopClipAdvanced_FUN_00432070
                        (pSVar9,(SRenderVertex *)(&DAT_007c090c + uVar5 * 0xc),
                         (SRenderVertex *)(&DAT_007c0f0c + DAT_007bfd08 * 0xc));
              DAT_007bfd08 = DAT_007bfd08 + 1;
            }
            iStack_14 = iStack_14 + 1;
            pSVar9 = pSVar9 + 1;
          } while (iStack_14 < (int)DAT_007bfd04);
        }
        if (2 < (int)DAT_007bfd08) {
          iStack_18 = 0;
          if (0 < (int)DAT_007bfd08) {
            pSVar9 = (SRenderVertex *)&DAT_007c0f0c;
            do {
              uVar5 = iStack_18 + 1;
              if (uVar5 == DAT_007bfd08) {
                uVar5 = uVar5 ^ DAT_007bfd08;
              }
              bVar1 = (pSVar9->projected_vertex).transformed_y <=
                      -(pSVar9->projected_vertex).transformed_z;
              if (*(int *)(&DAT_007c0f10 + uVar5 * 0x30) <= (int)-(&DAT_007c0f14)[uVar5 * 0xc]) {
                bVar1 = bVar1 | 2;
              }
              switch(bVar1) {
              case 0:
                pSVar14 = pSVar9;
                piVar3 = &DAT_007bee34 + DAT_007bee30 * 0xc;
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
                DAT_007bee30 = DAT_007bee30 + 1;
                break;
              case 1:
                engine_clipper_c_interpolateVertexBottomClipAdvanced_FUN_004321a0
                          ((SRenderVertex *)(&DAT_007c0f0c + uVar5 * 0xc),pSVar9,
                           (SRenderVertex *)(&DAT_007bee34 + DAT_007bee30 * 0xc));
                DAT_007bee30 = DAT_007bee30 + 1;
                break;
              case 2:
                pSVar14 = pSVar9;
                piVar3 = &DAT_007bee34 + DAT_007bee30 * 0xc;
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
                DAT_007bee30 = DAT_007bee30 + 1;
                engine_clipper_c_interpolateVertexBottomClipAdvanced_FUN_004321a0
                          (pSVar9,(SRenderVertex *)(&DAT_007c0f0c + uVar5 * 0xc),
                           (SRenderVertex *)(&DAT_007bee34 + DAT_007bee30 * 0xc));
                DAT_007bee30 = DAT_007bee30 + 1;
              }
              iStack_18 = iStack_18 + 1;
              pSVar9 = pSVar9 + 1;
            } while (iStack_18 < (int)DAT_007bfd08);
          }
          if (2 < (int)DAT_007bee30) {
            piVar3 = &DAT_007bee34;
            iVar6 = 0;
            if (0 < (int)DAT_007bee30) {
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
              } while (iVar6 < (int)DAT_007bee30);
            }
          }
        }
      }
    }
    return 0;
  }
  if (_DAT_01c37788 != 0) {
    iVar6 = 0;
    if (0 < (int)in_stack_00000004) {
      do {
        iVar8 = *in_stack_00000008;
        iVar6 = iVar6 + 1;
        in_stack_00000008 = in_stack_00000008 + 1;
        *(uint **)(iVar6 * 4 + 0x7bf430) = &DAT_00622014 + iVar8 * 0xc;
      } while (iVar6 < (int)in_stack_00000004);
    }
    if (DAT_0070ca7c != 0) {
      if ((int)in_stack_00000004 < 4) {
        iVar6 = engine_prim_c_calculateTriangleWindingOrder_FUN_0051c760
                          (DAT_007bf434,DAT_007bf438,DAT_007bf43c);
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
            iVar2 = engine_prim_c_calculateTriangleWindingOrder_FUN_0051c760
                              (DAT_007bf434,*(SRenderVertex **)((int)&DAT_007bf438 + iVar8),
                               *(SRenderVertex **)((int)&DAT_007bf43c + iVar8));
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
    _DAT_01e61b58 = _DAT_01e61b58 + (in_stack_00000004 - 2);
    engine_special_cpp_drawPolygon2_FUN_0055f920(&DAT_007bf434,in_stack_00000004,_DAT_01c38b54);
    return 1;
  }
  DAT_007bee30 = in_stack_00000004;
  if (0 < (int)in_stack_00000004) {
    puVar7 = &DAT_007bee34;
    iStack_24 = 0;
    do {
      puVar12 = &DAT_00622014 + *in_stack_00000008 * 0xc;
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
