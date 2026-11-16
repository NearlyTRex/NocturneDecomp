// Name: engine_clipper.c_clipPolygonToViewFrustumAdvanced_FUN_0043b330
// Address: 0043b330
// Address Range: [[0043b330, 0043b5ab] [0043b5d6, 0043b659] [0043b684, 0043b703] [0043b72e, 0043b865] [0043b8bc, 0043b8e4] [0043b93b, 0043b963] [0043b9ba, 0043ba76]]
// Convention: __cdecl
// Signature: int __cdecl engine_clipper_c_clipPolygonToViewFrustumAdvanced_FUN_0043b330(int vertex_count,int *vertex_indices)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl engine_clipper_c_clipPolygonToViewFrustumAdvanced_FUN_0043b330(int vertex_count,int *vertex_indices)

{
  byte bVar1;
  int iVar2;
  int *piVar3;
  char cVar4;
  uint *puVar6;
  int iVar7;
  SRenderVertex *pSVar8;
  int iVar9;
  uint *puVar10;
  SRenderVertex *pSVar11;
  SRenderVertex *pSVar12;
  int iVar13;
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
  iVar7 = 0;
  iVar13 = 0;
  piVar3 = vertex_indices;
  if (0 < vertex_count) {
    do {
      if (((&DAT_0060b024)[*piVar3 * 0xc] & 0x80000000) != 0) {
        iVar13 = iVar13 + 1;
      }
      iVar7 = iVar7 + 1;
      uVar5 = uVar5 & (&DAT_0060b024)[*piVar3 * 0xc];
      cVar4 = (char)uVar5;
      piVar3 = piVar3 + 1;
    } while (iVar7 < vertex_count);
  }
  if ((iVar13 == vertex_count) && (cVar4 != '\0')) {
    DAT_007e3e88 = 0;
    return 1;
  }
  if (iVar13 != 0) {
    DAT_007e4d54 = vertex_count;
    DAT_007e4d58 = 0;
    DAT_007e4d5c = 0;
    DAT_007e4d60 = 0;
    DAT_007e3e88 = 0;
    iStack_24 = 0;
    if (0 < vertex_count) {
      puVar6 = &DAT_007e5364;
      do {
        puVar10 = &DAT_0060b014 + *vertex_indices * 0xc;
        puVar14 = puVar6;
        for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
          *puVar14 = *puVar10;
          puVar10 = puVar10 + 1;
          puVar14 = puVar14 + 1;
        }
        for (iVar7 = 0; iVar7 != 0; iVar7 = iVar7 + -1) {
          *(byte *)puVar14 = *(byte *)puVar10;
          puVar10 = (uint *)((int)puVar10 + 1);
          puVar14 = (uint *)((int)puVar14 + 1);
        }
        vertex_indices = vertex_indices + 1;
        iStack_24 = iStack_24 + 1;
        puVar6 = puVar6 + 0xc;
      } while (iStack_24 < vertex_count);
    }
    iStack_18 = 0;
    if (0 < (int)DAT_007e4d54) {
      pSVar8 = (SRenderVertex *)&DAT_007e5364;
      do {
        uVar5 = iStack_18 + 1;
        if (uVar5 == DAT_007e4d54) {
          uVar5 = uVar5 ^ DAT_007e4d54;
        }
        pSVar12 = (SRenderVertex *)(&DAT_007e5364 + uVar5 * 0xc);
        bVar1 = (pSVar8->projected_vertex).transformed_z <= (pSVar8->projected_vertex).transformed_x
        ;
        if ((int)(&DAT_007e536c)[uVar5 * 0xc] <= (pSVar12->projected_vertex).transformed_x) {
          bVar1 = bVar1 | 2;
        }
        switch(bVar1) {
        case 0:
          pSVar12 = pSVar8;
          piVar3 = &DAT_007e4d64 + DAT_007e4d58 * 0xc;
          for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
            *piVar3 = (pSVar12->projected_vertex).transformed_x;
            pSVar12 = (SRenderVertex *)((int)pSVar12 + (uint)bVar15 * -8 + 4);
            piVar3 = piVar3 + (uint)bVar15 * -2 + 1;
          }
          for (iVar7 = 0; iVar7 != 0; iVar7 = iVar7 + -1) {
            *(char *)piVar3 = (char)(pSVar12->projected_vertex).transformed_x;
            pSVar12 = (SRenderVertex *)((int)pSVar12 + (uint)bVar15 * -2 + 1);
            piVar3 = (int *)((int)piVar3 + (uint)bVar15 * -2 + 1);
          }
          DAT_007e4d58 = DAT_007e4d58 + 1;
          break;
        case 1:
          engine_clipper_c_interpolateVertexRightClipAdvanced_FUN_0043a8c0
                    (pSVar12,pSVar8,(SRenderVertex *)(&DAT_007e4d64 + DAT_007e4d58 * 0xc));
          DAT_007e4d58 = DAT_007e4d58 + 1;
          break;
        case 2:
          pSVar11 = pSVar8;
          piVar3 = &DAT_007e4d64 + DAT_007e4d58 * 0xc;
          for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
            *piVar3 = (pSVar11->projected_vertex).transformed_x;
            pSVar11 = (SRenderVertex *)((int)pSVar11 + (uint)bVar15 * -8 + 4);
            piVar3 = piVar3 + (uint)bVar15 * -2 + 1;
          }
          for (iVar7 = 0; iVar7 != 0; iVar7 = iVar7 + -1) {
            *(char *)piVar3 = (char)(pSVar11->projected_vertex).transformed_x;
            pSVar11 = (SRenderVertex *)((int)pSVar11 + (uint)bVar15 * -2 + 1);
            piVar3 = (int *)((int)piVar3 + (uint)bVar15 * -2 + 1);
          }
          DAT_007e4d58 = DAT_007e4d58 + 1;
          engine_clipper_c_interpolateVertexRightClipAdvanced_FUN_0043a8c0
                    (pSVar8,pSVar12,(SRenderVertex *)(&DAT_007e4d64 + DAT_007e4d58 * 0xc));
          DAT_007e4d58 = DAT_007e4d58 + 1;
        }
        iStack_18 = iStack_18 + 1;
        pSVar8 = pSVar8 + 1;
      } while (iStack_18 < (int)DAT_007e4d54);
    }
    if (2 < (int)DAT_007e4d58) {
      iStack_14 = 0;
      if (0 < (int)DAT_007e4d58) {
        pSVar8 = (SRenderVertex *)&DAT_007e4d64;
        do {
          uVar5 = iStack_14 + 1;
          if (uVar5 == DAT_007e4d58) {
            uVar5 = uVar5 ^ DAT_007e4d58;
          }
          pSVar12 = (SRenderVertex *)(&DAT_007e4d64 + uVar5 * 0xc);
          bVar1 = (pSVar8->projected_vertex).transformed_x <=
                  -(pSVar8->projected_vertex).transformed_z;
          if ((pSVar12->projected_vertex).transformed_x <= (int)-(&DAT_007e4d6c)[uVar5 * 0xc]) {
            bVar1 = bVar1 | 2;
          }
          switch(bVar1) {
          case 0:
            pSVar12 = pSVar8;
            piVar3 = &DAT_007e5964 + DAT_007e4d5c * 0xc;
            for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
              *piVar3 = (pSVar12->projected_vertex).transformed_x;
              pSVar12 = (SRenderVertex *)((int)pSVar12 + (uint)bVar15 * -8 + 4);
              piVar3 = piVar3 + (uint)bVar15 * -2 + 1;
            }
            for (iVar7 = 0; iVar7 != 0; iVar7 = iVar7 + -1) {
              *(char *)piVar3 = (char)(pSVar12->projected_vertex).transformed_x;
              pSVar12 = (SRenderVertex *)((int)pSVar12 + (uint)bVar15 * -2 + 1);
              piVar3 = (int *)((int)piVar3 + (uint)bVar15 * -2 + 1);
            }
            DAT_007e4d5c = DAT_007e4d5c + 1;
            break;
          case 1:
            engine_clipper_c_interpolateVertexLeftClipAdvanced_FUN_0043a9f0
                      (pSVar12,pSVar8,(SRenderVertex *)(&DAT_007e5964 + DAT_007e4d5c * 0xc));
            DAT_007e4d5c = DAT_007e4d5c + 1;
            break;
          case 2:
            pSVar11 = pSVar8;
            piVar3 = &DAT_007e5964 + DAT_007e4d5c * 0xc;
            for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
              *piVar3 = (pSVar11->projected_vertex).transformed_x;
              pSVar11 = (SRenderVertex *)((int)pSVar11 + (uint)bVar15 * -8 + 4);
              piVar3 = piVar3 + (uint)bVar15 * -2 + 1;
            }
            for (iVar7 = 0; iVar7 != 0; iVar7 = iVar7 + -1) {
              *(char *)piVar3 = (char)(pSVar11->projected_vertex).transformed_x;
              pSVar11 = (SRenderVertex *)((int)pSVar11 + (uint)bVar15 * -2 + 1);
              piVar3 = (int *)((int)piVar3 + (uint)bVar15 * -2 + 1);
            }
            DAT_007e4d5c = DAT_007e4d5c + 1;
            engine_clipper_c_interpolateVertexLeftClipAdvanced_FUN_0043a9f0
                      (pSVar8,pSVar12,(SRenderVertex *)(&DAT_007e5964 + DAT_007e4d5c * 0xc));
            DAT_007e4d5c = DAT_007e4d5c + 1;
          }
          iStack_14 = iStack_14 + 1;
          pSVar8 = pSVar8 + 1;
        } while (iStack_14 < (int)DAT_007e4d58);
      }
      if (2 < (int)DAT_007e4d5c) {
        iStack_1c = 0;
        if (0 < (int)DAT_007e4d5c) {
          pSVar8 = (SRenderVertex *)&DAT_007e5964;
          do {
            uVar5 = iStack_1c + 1;
            if (uVar5 == DAT_007e4d5c) {
              uVar5 = uVar5 ^ DAT_007e4d5c;
            }
            bVar1 = (pSVar8->projected_vertex).transformed_z <=
                    (pSVar8->projected_vertex).transformed_y;
            if ((int)(&DAT_007e596c)[uVar5 * 0xc] <= (int)(&DAT_007e5968)[uVar5 * 0xc]) {
              bVar1 = bVar1 | 2;
            }
            switch(bVar1) {
            case 0:
              pSVar12 = pSVar8;
              piVar3 = &DAT_007e5f64 + DAT_007e4d60 * 0xc;
              for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
                *piVar3 = (pSVar12->projected_vertex).transformed_x;
                pSVar12 = (SRenderVertex *)((int)pSVar12 + (uint)bVar15 * -8 + 4);
                piVar3 = piVar3 + (uint)bVar15 * -2 + 1;
              }
              for (iVar7 = 0; iVar7 != 0; iVar7 = iVar7 + -1) {
                *(char *)piVar3 = (char)(pSVar12->projected_vertex).transformed_x;
                pSVar12 = (SRenderVertex *)((int)pSVar12 + (uint)bVar15 * -2 + 1);
                piVar3 = (int *)((int)piVar3 + (uint)bVar15 * -2 + 1);
              }
              DAT_007e4d60 = DAT_007e4d60 + 1;
              break;
            case 1:
              engine_clipper_c_interpolateVertexTopClipAdvanced_FUN_0043ab20
                        ((SRenderVertex *)(&DAT_007e5964 + uVar5 * 0xc),pSVar8,
                         (SRenderVertex *)(&DAT_007e5f64 + DAT_007e4d60 * 0xc));
              DAT_007e4d60 = DAT_007e4d60 + 1;
              break;
            case 2:
              pSVar12 = pSVar8;
              piVar3 = &DAT_007e5f64 + DAT_007e4d60 * 0xc;
              for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
                *piVar3 = (pSVar12->projected_vertex).transformed_x;
                pSVar12 = (SRenderVertex *)((int)pSVar12 + (uint)bVar15 * -8 + 4);
                piVar3 = piVar3 + (uint)bVar15 * -2 + 1;
              }
              for (iVar7 = 0; iVar7 != 0; iVar7 = iVar7 + -1) {
                *(char *)piVar3 = (char)(pSVar12->projected_vertex).transformed_x;
                pSVar12 = (SRenderVertex *)((int)pSVar12 + (uint)bVar15 * -2 + 1);
                piVar3 = (int *)((int)piVar3 + (uint)bVar15 * -2 + 1);
              }
              DAT_007e4d60 = DAT_007e4d60 + 1;
              engine_clipper_c_interpolateVertexTopClipAdvanced_FUN_0043ab20
                        (pSVar8,(SRenderVertex *)(&DAT_007e5964 + uVar5 * 0xc),
                         (SRenderVertex *)(&DAT_007e5f64 + DAT_007e4d60 * 0xc));
              DAT_007e4d60 = DAT_007e4d60 + 1;
            }
            iStack_1c = iStack_1c + 1;
            pSVar8 = pSVar8 + 1;
          } while (iStack_1c < (int)DAT_007e4d5c);
        }
        if (2 < (int)DAT_007e4d60) {
          iStack_20 = 0;
          if (0 < (int)DAT_007e4d60) {
            pSVar8 = (SRenderVertex *)&DAT_007e5f64;
            do {
              uVar5 = iStack_20 + 1;
              if (uVar5 == DAT_007e4d60) {
                uVar5 = uVar5 ^ DAT_007e4d60;
              }
              bVar1 = (pSVar8->projected_vertex).transformed_y <=
                      -(pSVar8->projected_vertex).transformed_z;
              if (*(int *)(&DAT_007e5f68 + uVar5 * 0x30) <= (int)-(&DAT_007e5f6c)[uVar5 * 0xc]) {
                bVar1 = bVar1 | 2;
              }
              switch(bVar1) {
              case 0:
                pSVar12 = pSVar8;
                piVar3 = &DAT_007e3e8c + DAT_007e3e88 * 0xc;
                for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
                  *piVar3 = (pSVar12->projected_vertex).transformed_x;
                  pSVar12 = (SRenderVertex *)((int)pSVar12 + (uint)bVar15 * -8 + 4);
                  piVar3 = piVar3 + (uint)bVar15 * -2 + 1;
                }
                for (iVar7 = 0; iVar7 != 0; iVar7 = iVar7 + -1) {
                  *(char *)piVar3 = (char)(pSVar12->projected_vertex).transformed_x;
                  pSVar12 = (SRenderVertex *)((int)pSVar12 + (uint)bVar15 * -2 + 1);
                  piVar3 = (int *)((int)piVar3 + (uint)bVar15 * -2 + 1);
                }
                DAT_007e3e88 = DAT_007e3e88 + 1;
                break;
              case 1:
                engine_clipper_c_interpolateVertexBottomClipAdvanced_FUN_0043ac50
                          ((SRenderVertex *)(&DAT_007e5f64 + uVar5 * 0xc),pSVar8,
                           (SRenderVertex *)(&DAT_007e3e8c + DAT_007e3e88 * 0xc));
                DAT_007e3e88 = DAT_007e3e88 + 1;
                break;
              case 2:
                pSVar12 = pSVar8;
                piVar3 = &DAT_007e3e8c + DAT_007e3e88 * 0xc;
                for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
                  *piVar3 = (pSVar12->projected_vertex).transformed_x;
                  pSVar12 = (SRenderVertex *)((int)pSVar12 + (uint)bVar15 * -8 + 4);
                  piVar3 = piVar3 + (uint)bVar15 * -2 + 1;
                }
                for (iVar7 = 0; iVar7 != 0; iVar7 = iVar7 + -1) {
                  *(char *)piVar3 = (char)(pSVar12->projected_vertex).transformed_x;
                  pSVar12 = (SRenderVertex *)((int)pSVar12 + (uint)bVar15 * -2 + 1);
                  piVar3 = (int *)((int)piVar3 + (uint)bVar15 * -2 + 1);
                }
                DAT_007e3e88 = DAT_007e3e88 + 1;
                engine_clipper_c_interpolateVertexBottomClipAdvanced_FUN_0043ac50
                          (pSVar8,(SRenderVertex *)(&DAT_007e5f64 + uVar5 * 0xc),
                           (SRenderVertex *)(&DAT_007e3e8c + DAT_007e3e88 * 0xc));
                DAT_007e3e88 = DAT_007e3e88 + 1;
              }
              iStack_20 = iStack_20 + 1;
              pSVar8 = pSVar8 + 1;
            } while (iStack_20 < (int)DAT_007e4d60);
          }
          if (2 < DAT_007e3e88) {
            piVar3 = &DAT_007e3e8c;
            iVar7 = 0;
            if (0 < DAT_007e3e88) {
              do {
                iVar13 = piVar3[2];
                if (iVar13 == 0) {
                  piVar3[2] = 1;
                  *piVar3 = 0;
                  piVar3[1] = 0;
                }
                else if (iVar13 < *piVar3) {
                  *piVar3 = iVar13;
                }
                else {
                  iVar9 = -iVar13;
                  if (-*piVar3 == iVar13 || iVar9 < *piVar3) {
                    iVar2 = piVar3[1];
                    if (piVar3[2] < iVar2) {
                      piVar3[1] = piVar3[2];
                    }
                    else if (-iVar2 != iVar13 && iVar2 <= iVar9) {
                      piVar3[1] = iVar9;
                    }
                  }
                  else {
                    *piVar3 = iVar9;
                  }
                }
                iVar7 = iVar7 + 1;
                piVar3 = piVar3 + 0xc;
              } while (iVar7 < DAT_007e3e88);
            }
          }
        }
      }
    }
    return 0;
  }
  if (_DAT_01c6cee8 != 0) {
    iVar7 = 0;
    if (0 < vertex_count) {
      do {
        iVar13 = *vertex_indices;
        iVar7 = iVar7 + 1;
        vertex_indices = vertex_indices + 1;
        *(uint **)(iVar7 * 4 + 0x7e4488) = &DAT_0060b014 + iVar13 * 0xc;
      } while (iVar7 < vertex_count);
    }
    if (DAT_007303fc != 0) {
      if (vertex_count < 4) {
        iVar7 = engine_prim_c_calculateTriangleWindingOrder_FUN_00515ac0
                          (DAT_007e448c,DAT_007e4490,DAT_007e4494);
        if (iVar7 == 0) {
          return 1;
        }
      }
      else {
        iVar13 = 0;
        iVar7 = (vertex_count + -2) * 4;
        iVar9 = 0;
        if (0 < iVar7) {
          do {
            iVar2 = engine_prim_c_calculateTriangleWindingOrder_FUN_00515ac0
                              (DAT_007e448c,*(SRenderVertex **)((int)&DAT_007e4490 + iVar13),
                               *(SRenderVertex **)((int)&DAT_007e4494 + iVar13));
            if (iVar2 == 0) {
              iVar9 = iVar9 + 1;
            }
            iVar13 = iVar13 + 4;
          } while (iVar13 < iVar7);
        }
        if (iVar9 == vertex_count + -2) {
          return 1;
        }
      }
    }
    _DAT_01ed3198 = _DAT_01ed3198 + vertex_count + -2;
    engine_special_cpp_drawPolygon2_FUN_00565c40(&DAT_007e448c,vertex_count,_DAT_01c6e2b4);
    return 1;
  }
  DAT_007e3e88 = vertex_count;
  if (0 < vertex_count) {
    puVar6 = &DAT_007e3e8c;
    iStack_28 = 0;
    do {
      puVar10 = &DAT_0060b014 + *vertex_indices * 0xc;
      puVar14 = puVar6;
      for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
        *puVar14 = *puVar10;
        puVar10 = puVar10 + 1;
        puVar14 = puVar14 + 1;
      }
      for (iVar7 = 0; iVar7 != 0; iVar7 = iVar7 + -1) {
        *(byte *)puVar14 = *(byte *)puVar10;
        puVar10 = (uint *)((int)puVar10 + 1);
        puVar14 = (uint *)((int)puVar14 + 1);
      }
      vertex_indices = vertex_indices + 1;
      iStack_28 = iStack_28 + 1;
      puVar6 = puVar6 + 0xc;
    } while (iStack_28 < vertex_count);
  }
  return 0;
}
