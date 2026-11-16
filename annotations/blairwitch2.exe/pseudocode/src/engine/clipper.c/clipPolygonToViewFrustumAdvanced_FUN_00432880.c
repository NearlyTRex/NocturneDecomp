// Name: engine_clipper.c_clipPolygonToViewFrustumAdvanced_FUN_00432880
// Address: 00432880
// Address Range: [[00432880, 00432fb7]]
// Convention: __cdecl
// Signature: int __cdecl engine_clipper_c_clipPolygonToViewFrustumAdvanced_FUN_00432880(int vertex_count,int *vertex_indices)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl engine_clipper_c_clipPolygonToViewFrustumAdvanced_FUN_00432880(int vertex_count,int *vertex_indices)

{
  byte bVar1;
  int iVar2;
  int *piVar3;
  char cVar4;
  int iVar6;
  uint *puVar7;
  SRenderVertex *pSVar8;
  int iVar9;
  int iVar10;
  uint *puVar11;
  SRenderVertex *pSVar12;
  SRenderVertex *pSVar13;
  uint *puVar14;
  byte bVar15;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  uint uVar5;
  
  bVar15 = 0;
  uVar5 = 0xffffffff;
  cVar4 = -1;
  iVar6 = 0;
  iVar9 = 0;
  piVar3 = vertex_indices;
  if (0 < vertex_count) {
    do {
      if (((&DAT_00622024)[*piVar3 * 0xc] & 0x80000000) != 0) {
        iVar9 = iVar9 + 1;
      }
      iVar6 = iVar6 + 1;
      uVar5 = uVar5 & (&DAT_00622024)[*piVar3 * 0xc];
      cVar4 = (char)uVar5;
      piVar3 = piVar3 + 1;
    } while (iVar6 < vertex_count);
  }
  if ((iVar9 == vertex_count) && (cVar4 != '\0')) {
    DAT_007bee30 = 0;
    return 1;
  }
  if (iVar9 != 0) {
    DAT_007bfcfc = vertex_count;
    DAT_007bfd00 = 0;
    DAT_007bfd04 = 0;
    DAT_007bfd08 = 0;
    DAT_007bee30 = 0;
    iStack_28 = 0;
    if (0 < vertex_count) {
      puVar7 = &DAT_007c030c;
      do {
        puVar11 = &DAT_00622014 + *vertex_indices * 0xc;
        puVar14 = puVar7;
        for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
          *puVar14 = *puVar11;
          puVar11 = puVar11 + 1;
          puVar14 = puVar14 + 1;
        }
        for (iVar6 = 0; iVar6 != 0; iVar6 = iVar6 + -1) {
          *(byte *)puVar14 = *(byte *)puVar11;
          puVar11 = (uint *)((int)puVar11 + 1);
          puVar14 = (uint *)((int)puVar14 + 1);
        }
        vertex_indices = vertex_indices + 1;
        iStack_28 = iStack_28 + 1;
        puVar7 = puVar7 + 0xc;
      } while (iStack_28 < vertex_count);
    }
    iStack_20 = 0;
    if (0 < (int)DAT_007bfcfc) {
      pSVar8 = (SRenderVertex *)&DAT_007c030c;
      do {
        uVar5 = iStack_20 + 1;
        if (uVar5 == DAT_007bfcfc) {
          uVar5 = uVar5 ^ DAT_007bfcfc;
        }
        pSVar13 = (SRenderVertex *)(&DAT_007c030c + uVar5 * 0xc);
        bVar1 = (pSVar8->projected_vertex).transformed_z <= (pSVar8->projected_vertex).transformed_x
        ;
        if ((int)(&DAT_007c0314)[uVar5 * 0xc] <= (pSVar13->projected_vertex).transformed_x) {
          bVar1 = bVar1 | 2;
        }
        switch(bVar1) {
        case 0:
          pSVar13 = pSVar8;
          piVar3 = &DAT_007bfd0c + DAT_007bfd00 * 0xc;
          for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
            *piVar3 = (pSVar13->projected_vertex).transformed_x;
            pSVar13 = (SRenderVertex *)((int)pSVar13 + (uint)bVar15 * -8 + 4);
            piVar3 = piVar3 + (uint)bVar15 * -2 + 1;
          }
          for (iVar6 = 0; iVar6 != 0; iVar6 = iVar6 + -1) {
            *(char *)piVar3 = (char)(pSVar13->projected_vertex).transformed_x;
            pSVar13 = (SRenderVertex *)((int)pSVar13 + (uint)bVar15 * -2 + 1);
            piVar3 = (int *)((int)piVar3 + (uint)bVar15 * -2 + 1);
          }
          DAT_007bfd00 = DAT_007bfd00 + 1;
          break;
        case 1:
          engine_clipper_c_interpolateVertexRightClipAdvanced_FUN_00431e10
                    (pSVar13,pSVar8,(SRenderVertex *)(&DAT_007bfd0c + DAT_007bfd00 * 0xc));
          DAT_007bfd00 = DAT_007bfd00 + 1;
          break;
        case 2:
          pSVar12 = pSVar8;
          piVar3 = &DAT_007bfd0c + DAT_007bfd00 * 0xc;
          for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
            *piVar3 = (pSVar12->projected_vertex).transformed_x;
            pSVar12 = (SRenderVertex *)((int)pSVar12 + (uint)bVar15 * -8 + 4);
            piVar3 = piVar3 + (uint)bVar15 * -2 + 1;
          }
          for (iVar6 = 0; iVar6 != 0; iVar6 = iVar6 + -1) {
            *(char *)piVar3 = (char)(pSVar12->projected_vertex).transformed_x;
            pSVar12 = (SRenderVertex *)((int)pSVar12 + (uint)bVar15 * -2 + 1);
            piVar3 = (int *)((int)piVar3 + (uint)bVar15 * -2 + 1);
          }
          DAT_007bfd00 = DAT_007bfd00 + 1;
          engine_clipper_c_interpolateVertexRightClipAdvanced_FUN_00431e10
                    (pSVar8,pSVar13,(SRenderVertex *)(&DAT_007bfd0c + DAT_007bfd00 * 0xc));
          DAT_007bfd00 = DAT_007bfd00 + 1;
        }
        iStack_20 = iStack_20 + 1;
        pSVar8 = pSVar8 + 1;
      } while (iStack_20 < (int)DAT_007bfcfc);
    }
    if (2 < (int)DAT_007bfd00) {
      iStack_1c = 0;
      if (0 < (int)DAT_007bfd00) {
        pSVar8 = (SRenderVertex *)&DAT_007bfd0c;
        do {
          uVar5 = iStack_1c + 1;
          if (uVar5 == DAT_007bfd00) {
            uVar5 = uVar5 ^ DAT_007bfd00;
          }
          pSVar13 = (SRenderVertex *)(&DAT_007bfd0c + uVar5 * 0xc);
          bVar1 = (pSVar8->projected_vertex).transformed_x <=
                  -(pSVar8->projected_vertex).transformed_z;
          if ((pSVar13->projected_vertex).transformed_x <= (int)-(&DAT_007bfd14)[uVar5 * 0xc]) {
            bVar1 = bVar1 | 2;
          }
          switch(bVar1) {
          case 0:
            pSVar13 = pSVar8;
            piVar3 = &DAT_007c090c + DAT_007bfd04 * 0xc;
            for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
              *piVar3 = (pSVar13->projected_vertex).transformed_x;
              pSVar13 = (SRenderVertex *)((int)pSVar13 + (uint)bVar15 * -8 + 4);
              piVar3 = piVar3 + (uint)bVar15 * -2 + 1;
            }
            for (iVar6 = 0; iVar6 != 0; iVar6 = iVar6 + -1) {
              *(char *)piVar3 = (char)(pSVar13->projected_vertex).transformed_x;
              pSVar13 = (SRenderVertex *)((int)pSVar13 + (uint)bVar15 * -2 + 1);
              piVar3 = (int *)((int)piVar3 + (uint)bVar15 * -2 + 1);
            }
            DAT_007bfd04 = DAT_007bfd04 + 1;
            break;
          case 1:
            engine_clipper_c_interpolateVertexLeftClipAdvanced_FUN_00431f40
                      (pSVar13,pSVar8,(SRenderVertex *)(&DAT_007c090c + DAT_007bfd04 * 0xc));
            DAT_007bfd04 = DAT_007bfd04 + 1;
            break;
          case 2:
            pSVar12 = pSVar8;
            piVar3 = &DAT_007c090c + DAT_007bfd04 * 0xc;
            for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
              *piVar3 = (pSVar12->projected_vertex).transformed_x;
              pSVar12 = (SRenderVertex *)((int)pSVar12 + (uint)bVar15 * -8 + 4);
              piVar3 = piVar3 + (uint)bVar15 * -2 + 1;
            }
            for (iVar6 = 0; iVar6 != 0; iVar6 = iVar6 + -1) {
              *(char *)piVar3 = (char)(pSVar12->projected_vertex).transformed_x;
              pSVar12 = (SRenderVertex *)((int)pSVar12 + (uint)bVar15 * -2 + 1);
              piVar3 = (int *)((int)piVar3 + (uint)bVar15 * -2 + 1);
            }
            DAT_007bfd04 = DAT_007bfd04 + 1;
            engine_clipper_c_interpolateVertexLeftClipAdvanced_FUN_00431f40
                      (pSVar8,pSVar13,(SRenderVertex *)(&DAT_007c090c + DAT_007bfd04 * 0xc));
            DAT_007bfd04 = DAT_007bfd04 + 1;
          }
          iStack_1c = iStack_1c + 1;
          pSVar8 = pSVar8 + 1;
        } while (iStack_1c < (int)DAT_007bfd00);
      }
      if (2 < (int)DAT_007bfd04) {
        iStack_14 = 0;
        if (0 < (int)DAT_007bfd04) {
          pSVar8 = (SRenderVertex *)&DAT_007c090c;
          do {
            uVar5 = iStack_14 + 1;
            if (uVar5 == DAT_007bfd04) {
              uVar5 = uVar5 ^ DAT_007bfd04;
            }
            bVar1 = (pSVar8->projected_vertex).transformed_z <=
                    (pSVar8->projected_vertex).transformed_y;
            if ((int)(&DAT_007c0914)[uVar5 * 0xc] <= (int)(&DAT_007c0910)[uVar5 * 0xc]) {
              bVar1 = bVar1 | 2;
            }
            switch(bVar1) {
            case 0:
              pSVar13 = pSVar8;
              piVar3 = &DAT_007c0f0c + DAT_007bfd08 * 0xc;
              for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
                *piVar3 = (pSVar13->projected_vertex).transformed_x;
                pSVar13 = (SRenderVertex *)((int)pSVar13 + (uint)bVar15 * -8 + 4);
                piVar3 = piVar3 + (uint)bVar15 * -2 + 1;
              }
              for (iVar6 = 0; iVar6 != 0; iVar6 = iVar6 + -1) {
                *(char *)piVar3 = (char)(pSVar13->projected_vertex).transformed_x;
                pSVar13 = (SRenderVertex *)((int)pSVar13 + (uint)bVar15 * -2 + 1);
                piVar3 = (int *)((int)piVar3 + (uint)bVar15 * -2 + 1);
              }
              DAT_007bfd08 = DAT_007bfd08 + 1;
              break;
            case 1:
              engine_clipper_c_interpolateVertexTopClipAdvanced_FUN_00432070
                        ((SRenderVertex *)(&DAT_007c090c + uVar5 * 0xc),pSVar8,
                         (SRenderVertex *)(&DAT_007c0f0c + DAT_007bfd08 * 0xc));
              DAT_007bfd08 = DAT_007bfd08 + 1;
              break;
            case 2:
              pSVar13 = pSVar8;
              piVar3 = &DAT_007c0f0c + DAT_007bfd08 * 0xc;
              for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
                *piVar3 = (pSVar13->projected_vertex).transformed_x;
                pSVar13 = (SRenderVertex *)((int)pSVar13 + (uint)bVar15 * -8 + 4);
                piVar3 = piVar3 + (uint)bVar15 * -2 + 1;
              }
              for (iVar6 = 0; iVar6 != 0; iVar6 = iVar6 + -1) {
                *(char *)piVar3 = (char)(pSVar13->projected_vertex).transformed_x;
                pSVar13 = (SRenderVertex *)((int)pSVar13 + (uint)bVar15 * -2 + 1);
                piVar3 = (int *)((int)piVar3 + (uint)bVar15 * -2 + 1);
              }
              DAT_007bfd08 = DAT_007bfd08 + 1;
              engine_clipper_c_interpolateVertexTopClipAdvanced_FUN_00432070
                        (pSVar8,(SRenderVertex *)(&DAT_007c090c + uVar5 * 0xc),
                         (SRenderVertex *)(&DAT_007c0f0c + DAT_007bfd08 * 0xc));
              DAT_007bfd08 = DAT_007bfd08 + 1;
            }
            iStack_14 = iStack_14 + 1;
            pSVar8 = pSVar8 + 1;
          } while (iStack_14 < (int)DAT_007bfd04);
        }
        if (2 < (int)DAT_007bfd08) {
          iStack_18 = 0;
          if (0 < (int)DAT_007bfd08) {
            pSVar8 = (SRenderVertex *)&DAT_007c0f0c;
            do {
              uVar5 = iStack_18 + 1;
              if (uVar5 == DAT_007bfd08) {
                uVar5 = uVar5 ^ DAT_007bfd08;
              }
              bVar1 = (pSVar8->projected_vertex).transformed_y <=
                      -(pSVar8->projected_vertex).transformed_z;
              if (*(int *)(&DAT_007c0f10 + uVar5 * 0x30) <= (int)-(&DAT_007c0f14)[uVar5 * 0xc]) {
                bVar1 = bVar1 | 2;
              }
              switch(bVar1) {
              case 0:
                pSVar13 = pSVar8;
                piVar3 = &DAT_007bee34 + DAT_007bee30 * 0xc;
                for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
                  *piVar3 = (pSVar13->projected_vertex).transformed_x;
                  pSVar13 = (SRenderVertex *)((int)pSVar13 + (uint)bVar15 * -8 + 4);
                  piVar3 = piVar3 + (uint)bVar15 * -2 + 1;
                }
                for (iVar6 = 0; iVar6 != 0; iVar6 = iVar6 + -1) {
                  *(char *)piVar3 = (char)(pSVar13->projected_vertex).transformed_x;
                  pSVar13 = (SRenderVertex *)((int)pSVar13 + (uint)bVar15 * -2 + 1);
                  piVar3 = (int *)((int)piVar3 + (uint)bVar15 * -2 + 1);
                }
                DAT_007bee30 = DAT_007bee30 + 1;
                break;
              case 1:
                engine_clipper_c_interpolateVertexBottomClipAdvanced_FUN_004321a0
                          ((SRenderVertex *)(&DAT_007c0f0c + uVar5 * 0xc),pSVar8,
                           (SRenderVertex *)(&DAT_007bee34 + DAT_007bee30 * 0xc));
                DAT_007bee30 = DAT_007bee30 + 1;
                break;
              case 2:
                pSVar13 = pSVar8;
                piVar3 = &DAT_007bee34 + DAT_007bee30 * 0xc;
                for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
                  *piVar3 = (pSVar13->projected_vertex).transformed_x;
                  pSVar13 = (SRenderVertex *)((int)pSVar13 + (uint)bVar15 * -8 + 4);
                  piVar3 = piVar3 + (uint)bVar15 * -2 + 1;
                }
                for (iVar6 = 0; iVar6 != 0; iVar6 = iVar6 + -1) {
                  *(char *)piVar3 = (char)(pSVar13->projected_vertex).transformed_x;
                  pSVar13 = (SRenderVertex *)((int)pSVar13 + (uint)bVar15 * -2 + 1);
                  piVar3 = (int *)((int)piVar3 + (uint)bVar15 * -2 + 1);
                }
                DAT_007bee30 = DAT_007bee30 + 1;
                engine_clipper_c_interpolateVertexBottomClipAdvanced_FUN_004321a0
                          (pSVar8,(SRenderVertex *)(&DAT_007c0f0c + uVar5 * 0xc),
                           (SRenderVertex *)(&DAT_007bee34 + DAT_007bee30 * 0xc));
                DAT_007bee30 = DAT_007bee30 + 1;
              }
              iStack_18 = iStack_18 + 1;
              pSVar8 = pSVar8 + 1;
            } while (iStack_18 < (int)DAT_007bfd08);
          }
          if (2 < DAT_007bee30) {
            piVar3 = &DAT_007bee34;
            iVar6 = 0;
            if (0 < DAT_007bee30) {
              do {
                iVar9 = piVar3[2];
                if (iVar9 == 0) {
                  piVar3[2] = 1;
                  *piVar3 = 0;
                  piVar3[1] = 0;
                }
                else if (iVar9 < *piVar3) {
                  *piVar3 = iVar9;
                }
                else {
                  iVar10 = -iVar9;
                  if (-*piVar3 == iVar9 || iVar10 < *piVar3) {
                    iVar2 = piVar3[1];
                    if (piVar3[2] < iVar2) {
                      piVar3[1] = piVar3[2];
                    }
                    else if (-iVar2 != iVar9 && iVar2 <= iVar10) {
                      piVar3[1] = iVar10;
                    }
                  }
                  else {
                    *piVar3 = iVar10;
                  }
                }
                iVar6 = iVar6 + 1;
                piVar3 = piVar3 + 0xc;
              } while (iVar6 < DAT_007bee30);
            }
          }
        }
      }
    }
    return 0;
  }
  if (_DAT_01c37788 != 0) {
    iVar6 = 0;
    if (0 < vertex_count) {
      do {
        iVar9 = *vertex_indices;
        iVar6 = iVar6 + 1;
        vertex_indices = vertex_indices + 1;
        *(uint **)(iVar6 * 4 + 0x7bf430) = &DAT_00622014 + iVar9 * 0xc;
      } while (iVar6 < vertex_count);
    }
    if (DAT_0070ca7c != 0) {
      if (vertex_count < 4) {
        iVar6 = engine_prim_c_calculateTriangleWindingOrder_FUN_0051c760
                          (DAT_007bf434,DAT_007bf438,DAT_007bf43c);
        if (iVar6 == 0) {
          return 1;
        }
      }
      else {
        iVar9 = 0;
        iVar6 = (vertex_count + -2) * 4;
        iVar10 = 0;
        if (0 < iVar6) {
          do {
            iVar2 = engine_prim_c_calculateTriangleWindingOrder_FUN_0051c760
                              (DAT_007bf434,*(SRenderVertex **)((int)&DAT_007bf438 + iVar9),
                               *(SRenderVertex **)((int)&DAT_007bf43c + iVar9));
            if (iVar2 == 0) {
              iVar10 = iVar10 + 1;
            }
            iVar9 = iVar9 + 4;
          } while (iVar9 < iVar6);
        }
        if (iVar10 == vertex_count + -2) {
          return 1;
        }
      }
    }
    _DAT_01e61b58 = _DAT_01e61b58 + vertex_count + -2;
    engine_special_cpp_drawPolygon2_FUN_0055f920(&DAT_007bf434,vertex_count,_DAT_01c38b54);
    return 1;
  }
  DAT_007bee30 = vertex_count;
  if (0 < vertex_count) {
    puVar7 = &DAT_007bee34;
    iStack_24 = 0;
    do {
      puVar11 = &DAT_00622014 + *vertex_indices * 0xc;
      puVar14 = puVar7;
      for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
        *puVar14 = *puVar11;
        puVar11 = puVar11 + 1;
        puVar14 = puVar14 + 1;
      }
      for (iVar6 = 0; iVar6 != 0; iVar6 = iVar6 + -1) {
        *(byte *)puVar14 = *(byte *)puVar11;
        puVar11 = (uint *)((int)puVar11 + 1);
        puVar14 = (uint *)((int)puVar14 + 1);
      }
      vertex_indices = vertex_indices + 1;
      iStack_24 = iStack_24 + 1;
      puVar7 = puVar7 + 0xc;
    } while (iStack_24 < vertex_count);
  }
  return 0;
}
