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
  int *piVar3;
  char cVar4;
  uint *puVar6;
  int iVar7;
  int iVar8;
  SRenderVertex *pSVar9;
  uint uVar10;
  int iVar11;
  uint *puVar12;
  SRenderVertex *pSVar13;
  SRenderVertex *pSVar14;
  uint *puVar15;
  byte bVar16;
  int *local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  uint uVar5;
  
  bVar16 = 0;
  uVar5 = 0xffffffff;
  cVar4 = -1;
  iVar7 = 0;
  uVar10 = 0;
  piVar3 = param_2;
  if (0 < (int)param_1) {
    do {
      if (((&DAT_005c5024)[*piVar3 * 0xc] & 0x80000000) != 0) {
        uVar10 = uVar10 + 1;
      }
      iVar7 = iVar7 + 1;
      uVar5 = uVar5 & (&DAT_005c5024)[*piVar3 * 0xc];
      cVar4 = (char)uVar5;
      piVar3 = piVar3 + 1;
    } while (iVar7 < (int)param_1);
  }
  if ((uVar10 == param_1) && (cVar4 != '\0')) {
    DAT_00766c70 = 0;
    return 1;
  }
  if (uVar10 != 0) {
    DAT_00767b3c = param_1;
    iVar7 = 0;
    DAT_00767b40 = 0;
    DAT_00767b44 = 0;
    DAT_00767b48 = 0;
    DAT_00766c70 = 0;
    if (0 < (int)param_1) {
      puVar6 = &DAT_0076814c;
      local_28 = param_2;
      do {
        puVar12 = &DAT_005c5014 + *local_28 * 0xc;
        puVar15 = puVar6;
        for (iVar8 = 0xc; iVar8 != 0; iVar8 = iVar8 + -1) {
          *puVar15 = *puVar12;
          puVar12 = puVar12 + 1;
          puVar15 = puVar15 + 1;
        }
        for (iVar8 = 0; iVar8 != 0; iVar8 = iVar8 + -1) {
          *(byte *)puVar15 = *(byte *)puVar12;
          puVar12 = (uint *)((int)puVar12 + 1);
          puVar15 = (uint *)((int)puVar15 + 1);
        }
        iVar7 = iVar7 + 1;
        local_28 = local_28 + 1;
        puVar6 = puVar6 + 0xc;
      } while (iVar7 < (int)param_1);
    }
    local_14 = 0;
    if (0 < (int)DAT_00767b3c) {
      pSVar9 = (SRenderVertex *)&DAT_0076814c;
      do {
        uVar5 = local_14 + 1;
        if (uVar5 == DAT_00767b3c) {
          uVar5 = uVar5 ^ DAT_00767b3c;
        }
        pSVar14 = (SRenderVertex *)(&DAT_0076814c + uVar5 * 0xc);
        bVar1 = (pSVar9->projected_vertex).transformed_z <= (pSVar9->projected_vertex).transformed_x
        ;
        if ((int)(&DAT_00768154)[uVar5 * 0xc] <= (pSVar14->projected_vertex).transformed_x) {
          bVar1 = bVar1 | 2;
        }
        switch(bVar1) {
        case 0:
          pSVar14 = pSVar9;
          piVar3 = &DAT_00767b4c + DAT_00767b40 * 0xc;
          for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
            *piVar3 = (pSVar14->projected_vertex).transformed_x;
            pSVar14 = (SRenderVertex *)((int)pSVar14 + (uint)bVar16 * -8 + 4);
            piVar3 = piVar3 + (uint)bVar16 * -2 + 1;
          }
          for (iVar7 = 0; iVar7 != 0; iVar7 = iVar7 + -1) {
            *(char *)piVar3 = (char)(pSVar14->projected_vertex).transformed_x;
            pSVar14 = (SRenderVertex *)((int)pSVar14 + (uint)bVar16 * -2 + 1);
            piVar3 = (int *)((int)piVar3 + (uint)bVar16 * -2 + 1);
          }
          DAT_00767b40 = DAT_00767b40 + 1;
          break;
        case 1:
          engine_clipper_c_interpolateVertexLeftClipAdvanced_FUN_004337a0
                    (pSVar14,pSVar9,(SRenderVertex *)(&DAT_00767b4c + DAT_00767b40 * 0xc));
          DAT_00767b40 = DAT_00767b40 + 1;
          break;
        case 2:
          pSVar13 = pSVar9;
          piVar3 = &DAT_00767b4c + DAT_00767b40 * 0xc;
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
          DAT_00767b40 = DAT_00767b40 + 1;
          engine_clipper_c_interpolateVertexLeftClipAdvanced_FUN_004337a0
                    (pSVar9,pSVar14,(SRenderVertex *)(&DAT_00767b4c + DAT_00767b40 * 0xc));
          DAT_00767b40 = DAT_00767b40 + 1;
        }
        local_14 = local_14 + 1;
        pSVar9 = pSVar9 + 1;
      } while (local_14 < (int)DAT_00767b3c);
    }
    if (2 < (int)DAT_00767b40) {
      local_20 = 0;
      if (0 < (int)DAT_00767b40) {
        pSVar9 = (SRenderVertex *)&DAT_00767b4c;
        do {
          uVar5 = local_20 + 1;
          if (uVar5 == DAT_00767b40) {
            uVar5 = uVar5 ^ DAT_00767b40;
          }
          pSVar14 = (SRenderVertex *)(&DAT_00767b4c + uVar5 * 0xc);
          bVar1 = (pSVar9->projected_vertex).transformed_x <=
                  -(pSVar9->projected_vertex).transformed_z;
          if ((pSVar14->projected_vertex).transformed_x <= (int)-(&DAT_00767b54)[uVar5 * 0xc]) {
            bVar1 = bVar1 | 2;
          }
          switch(bVar1) {
          case 0:
            pSVar14 = pSVar9;
            piVar3 = &DAT_0076874c + DAT_00767b44 * 0xc;
            for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
              *piVar3 = (pSVar14->projected_vertex).transformed_x;
              pSVar14 = (SRenderVertex *)((int)pSVar14 + (uint)bVar16 * -8 + 4);
              piVar3 = piVar3 + (uint)bVar16 * -2 + 1;
            }
            for (iVar7 = 0; iVar7 != 0; iVar7 = iVar7 + -1) {
              *(char *)piVar3 = (char)(pSVar14->projected_vertex).transformed_x;
              pSVar14 = (SRenderVertex *)((int)pSVar14 + (uint)bVar16 * -2 + 1);
              piVar3 = (int *)((int)piVar3 + (uint)bVar16 * -2 + 1);
            }
            DAT_00767b44 = DAT_00767b44 + 1;
            break;
          case 1:
            engine_clipper_c_interpolateVertexRightClipAdvanced_FUN_004338d0
                      (pSVar14,pSVar9,(SRenderVertex *)(&DAT_0076874c + DAT_00767b44 * 0xc));
            DAT_00767b44 = DAT_00767b44 + 1;
            break;
          case 2:
            pSVar13 = pSVar9;
            piVar3 = &DAT_0076874c + DAT_00767b44 * 0xc;
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
            DAT_00767b44 = DAT_00767b44 + 1;
            engine_clipper_c_interpolateVertexRightClipAdvanced_FUN_004338d0
                      (pSVar9,pSVar14,(SRenderVertex *)(&DAT_0076874c + DAT_00767b44 * 0xc));
            DAT_00767b44 = DAT_00767b44 + 1;
          }
          local_20 = local_20 + 1;
          pSVar9 = pSVar9 + 1;
        } while (local_20 < (int)DAT_00767b40);
      }
      if (2 < (int)DAT_00767b44) {
        local_1c = 0;
        if (0 < (int)DAT_00767b44) {
          pSVar9 = (SRenderVertex *)&DAT_0076874c;
          do {
            uVar5 = local_1c + 1;
            if (uVar5 == DAT_00767b44) {
              uVar5 = uVar5 ^ DAT_00767b44;
            }
            bVar1 = (pSVar9->projected_vertex).transformed_z <=
                    (pSVar9->projected_vertex).transformed_y;
            if ((int)(&DAT_00768754)[uVar5 * 0xc] <= (int)(&DAT_00768750)[uVar5 * 0xc]) {
              bVar1 = bVar1 | 2;
            }
            switch(bVar1) {
            case 0:
              pSVar14 = pSVar9;
              piVar3 = &DAT_00768d4c + DAT_00767b48 * 0xc;
              for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
                *piVar3 = (pSVar14->projected_vertex).transformed_x;
                pSVar14 = (SRenderVertex *)((int)pSVar14 + (uint)bVar16 * -8 + 4);
                piVar3 = piVar3 + (uint)bVar16 * -2 + 1;
              }
              for (iVar7 = 0; iVar7 != 0; iVar7 = iVar7 + -1) {
                *(char *)piVar3 = (char)(pSVar14->projected_vertex).transformed_x;
                pSVar14 = (SRenderVertex *)((int)pSVar14 + (uint)bVar16 * -2 + 1);
                piVar3 = (int *)((int)piVar3 + (uint)bVar16 * -2 + 1);
              }
              DAT_00767b48 = DAT_00767b48 + 1;
              break;
            case 1:
              engine_clipper_c_interpolateVertexBottomClipAdvanced_FUN_00433a00
                        ((SRenderVertex *)(&DAT_0076874c + uVar5 * 0xc),pSVar9,
                         (SRenderVertex *)(&DAT_00768d4c + DAT_00767b48 * 0xc));
              DAT_00767b48 = DAT_00767b48 + 1;
              break;
            case 2:
              pSVar14 = pSVar9;
              piVar3 = &DAT_00768d4c + DAT_00767b48 * 0xc;
              for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
                *piVar3 = (pSVar14->projected_vertex).transformed_x;
                pSVar14 = (SRenderVertex *)((int)pSVar14 + (uint)bVar16 * -8 + 4);
                piVar3 = piVar3 + (uint)bVar16 * -2 + 1;
              }
              for (iVar7 = 0; iVar7 != 0; iVar7 = iVar7 + -1) {
                *(char *)piVar3 = (char)(pSVar14->projected_vertex).transformed_x;
                pSVar14 = (SRenderVertex *)((int)pSVar14 + (uint)bVar16 * -2 + 1);
                piVar3 = (int *)((int)piVar3 + (uint)bVar16 * -2 + 1);
              }
              DAT_00767b48 = DAT_00767b48 + 1;
              engine_clipper_c_interpolateVertexBottomClipAdvanced_FUN_00433a00
                        (pSVar9,(SRenderVertex *)(&DAT_0076874c + uVar5 * 0xc),
                         (SRenderVertex *)(&DAT_00768d4c + DAT_00767b48 * 0xc));
              DAT_00767b48 = DAT_00767b48 + 1;
            }
            local_1c = local_1c + 1;
            pSVar9 = pSVar9 + 1;
          } while (local_1c < (int)DAT_00767b44);
        }
        if (2 < (int)DAT_00767b48) {
          local_18 = 0;
          if (0 < (int)DAT_00767b48) {
            pSVar9 = (SRenderVertex *)&DAT_00768d4c;
            do {
              uVar5 = local_18 + 1;
              if (uVar5 == DAT_00767b48) {
                uVar5 = uVar5 ^ DAT_00767b48;
              }
              bVar1 = (pSVar9->projected_vertex).transformed_y <=
                      -(pSVar9->projected_vertex).transformed_z;
              if ((int)(&DAT_00768d50)[uVar5 * 0xc] <= (int)-(&DAT_00768d54)[uVar5 * 0xc]) {
                bVar1 = bVar1 | 2;
              }
              switch(bVar1) {
              case 0:
                pSVar14 = pSVar9;
                piVar3 = &DAT_00766c74 + DAT_00766c70 * 0xc;
                for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
                  *piVar3 = (pSVar14->projected_vertex).transformed_x;
                  pSVar14 = (SRenderVertex *)((int)pSVar14 + (uint)bVar16 * -8 + 4);
                  piVar3 = piVar3 + (uint)bVar16 * -2 + 1;
                }
                for (iVar7 = 0; iVar7 != 0; iVar7 = iVar7 + -1) {
                  *(char *)piVar3 = (char)(pSVar14->projected_vertex).transformed_x;
                  pSVar14 = (SRenderVertex *)((int)pSVar14 + (uint)bVar16 * -2 + 1);
                  piVar3 = (int *)((int)piVar3 + (uint)bVar16 * -2 + 1);
                }
                DAT_00766c70 = DAT_00766c70 + 1;
                break;
              case 1:
                engine_clipper_c_interpolateVertexTopClipAdvanced_FUN_00433b30
                          ((SRenderVertex *)(&DAT_00768d4c + uVar5 * 0xc),pSVar9,
                           (SRenderVertex *)(&DAT_00766c74 + DAT_00766c70 * 0xc));
                DAT_00766c70 = DAT_00766c70 + 1;
                break;
              case 2:
                pSVar14 = pSVar9;
                piVar3 = &DAT_00766c74 + DAT_00766c70 * 0xc;
                for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
                  *piVar3 = (pSVar14->projected_vertex).transformed_x;
                  pSVar14 = (SRenderVertex *)((int)pSVar14 + (uint)bVar16 * -8 + 4);
                  piVar3 = piVar3 + (uint)bVar16 * -2 + 1;
                }
                for (iVar7 = 0; iVar7 != 0; iVar7 = iVar7 + -1) {
                  *(char *)piVar3 = (char)(pSVar14->projected_vertex).transformed_x;
                  pSVar14 = (SRenderVertex *)((int)pSVar14 + (uint)bVar16 * -2 + 1);
                  piVar3 = (int *)((int)piVar3 + (uint)bVar16 * -2 + 1);
                }
                DAT_00766c70 = DAT_00766c70 + 1;
                engine_clipper_c_interpolateVertexTopClipAdvanced_FUN_00433b30
                          (pSVar9,(SRenderVertex *)(&DAT_00768d4c + uVar5 * 0xc),
                           (SRenderVertex *)(&DAT_00766c74 + DAT_00766c70 * 0xc));
                DAT_00766c70 = DAT_00766c70 + 1;
              }
              local_18 = local_18 + 1;
              pSVar9 = pSVar9 + 1;
            } while (local_18 < (int)DAT_00767b48);
          }
          if (2 < (int)DAT_00766c70) {
            piVar3 = &DAT_00766c74;
            iVar7 = 0;
            if (0 < (int)DAT_00766c70) {
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
                iVar7 = iVar7 + 1;
                piVar3 = piVar3 + 0xc;
              } while (iVar7 < (int)DAT_00766c70);
            }
          }
        }
      }
    }
    return 0;
  }
  if (g_UseExternalRenderer != 0) {
    iVar7 = 0;
    if (0 < (int)param_1) {
      do {
        iVar8 = *param_2;
        iVar7 = iVar7 + 1;
        param_2 = param_2 + 1;
        *(uint **)(iVar7 * 4 + 0x767270) = &DAT_005c5014 + iVar8 * 0xc;
      } while (iVar7 < (int)param_1);
    }
    if (DAT_006b0280 != 0) {
      if ((int)param_1 < 4) {
        iVar7 = engine_prim_c_calculateTriangleWindingOrder_FUN_004f9a10
                          (DAT_00767274,DAT_00767278,DAT_0076727c);
        if (iVar7 == 0) {
          return 1;
        }
      }
      else {
        iVar8 = 0;
        iVar7 = (param_1 - 2) * 4;
        iVar11 = 0;
        if (0 < iVar7) {
          do {
            iVar2 = engine_prim_c_calculateTriangleWindingOrder_FUN_004f9a10
                              (DAT_00767274,*(SRenderVertex **)((int)&DAT_00767278 + iVar8),
                               *(SRenderVertex **)((int)&DAT_0076727c + iVar8));
            if (iVar2 == 0) {
              iVar11 = iVar11 + 1;
            }
            iVar8 = iVar8 + 4;
          } while (iVar8 < iVar7);
        }
        if (iVar11 == param_1 - 2) {
          return 1;
        }
      }
    }
    _DAT_01e52ef8 = _DAT_01e52ef8 + 1;
    engine_special_cpp_drawPolygon2_FUN_00532650(&DAT_00767274,param_1,g_RenderStateFlags.dword);
    return 1;
  }
  DAT_00766c70 = param_1;
  if (0 < (int)param_1) {
    puVar6 = &DAT_00766c74;
    local_24 = 0;
    do {
      puVar12 = &DAT_005c5014 + *param_2 * 0xc;
      puVar15 = puVar6;
      for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
        *puVar15 = *puVar12;
        puVar12 = puVar12 + 1;
        puVar15 = puVar15 + 1;
      }
      for (iVar7 = 0; iVar7 != 0; iVar7 = iVar7 + -1) {
        *(byte *)puVar15 = *(byte *)puVar12;
        puVar12 = (uint *)((int)puVar12 + 1);
        puVar15 = (uint *)((int)puVar15 + 1);
      }
      param_2 = param_2 + 1;
      local_24 = local_24 + 1;
      puVar6 = puVar6 + 0xc;
    } while (local_24 < (int)param_1);
  }
  return 0;
}
