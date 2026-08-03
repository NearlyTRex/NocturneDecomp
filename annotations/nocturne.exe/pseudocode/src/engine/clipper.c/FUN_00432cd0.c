// Name: engine_clipper.c_FUN_00432cd0
// Address: 00432cd0
// Address Range: [[00432cd0, 0043376b]]
// Convention: unknown
// Signature: void engine_clipper_c_FUN_00432cd0(uint param_1,int *param_2)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x004335a5) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void engine_clipper_c_FUN_00432cd0(uint param_1,int *param_2)

{
  longlong lVar1;
  longlong lVar2;
  byte bVar3;
  int iVar4;
  int *piVar5;
  char cVar6;
  int iVar8;
  int iVar9;
  longlong *plVar10;
  uint *puVar11;
  SRenderVertex *pSVar12;
  uint uVar13;
  int iVar14;
  longlong *plVar15;
  SRenderVertex *pSVar16;
  longlong *plVar17;
  longlong *plVar18;
  byte bVar19;
  uint local_150 [31];
  uint auStack_d4 [33];
  int *local_50;
  byte *local_4c;
  uint local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  uint *local_24;
  uint *local_20;
  uint *local_1c;
  int local_18;
  int local_14;
  uint uVar7;
  
  bVar19 = 0;
  if (DAT_005b7644 == 0) {
    engine_prim_c_FUN_004fa2e0(param_2,param_1);
  }
  else {
    uVar7 = 0xffffffff;
    cVar6 = -1;
    local_50 = param_2;
    uVar13 = 0;
    iVar8 = 0;
    piVar5 = param_2;
    if (0 < (int)param_1) {
      do {
        iVar9 = *piVar5;
        if (((&DAT_005c5024)[iVar9 * 0xc] & 0x80000000) != 0) {
          uVar13 = uVar13 + 1;
        }
        piVar5 = piVar5 + 1;
        iVar8 = iVar8 + 1;
        uVar7 = uVar7 & (&DAT_005c5024)[iVar9 * 0xc];
        cVar6 = (char)uVar7;
      } while (iVar8 < (int)param_1);
    }
    if ((uVar13 == param_1) && (cVar6 != '\0')) {
      DAT_00766c70 = 0;
    }
    else {
      if (uVar13 == 0) {
        if ((_DAT_01c02594 != 0) && (DAT_006b0278 == 0)) {
          iVar8 = 0;
          if (0 < (int)param_1) {
            do {
              iVar9 = *param_2;
              iVar8 = iVar8 + 1;
              param_2 = param_2 + 1;
              *(uint **)(iVar8 * 4 + 0x767270) = &DAT_005c5014 + iVar9 * 0xc;
            } while (iVar8 < (int)param_1);
          }
          if (DAT_006b0280 != 0) {
            if ((int)param_1 < 4) {
              iVar8 = engine_prim_c_calculateTriangleWindingOrder_FUN_004f9a10
                                (DAT_00767274,DAT_00767278,DAT_0076727c);
              if (iVar8 == 0) {
                return;
              }
            }
            else {
              local_28 = param_1 - 2;
              iVar9 = 0;
              iVar8 = local_28 * 4;
              iVar14 = 0;
              if (0 < iVar8) {
                do {
                  iVar4 = engine_prim_c_calculateTriangleWindingOrder_FUN_004f9a10
                                    (DAT_00767274,*(SRenderVertex **)((int)&DAT_00767278 + iVar9),
                                     *(SRenderVertex **)((int)&DAT_0076727c + iVar9));
                  if (iVar4 == 0) {
                    iVar14 = iVar14 + 1;
                  }
                  iVar9 = iVar9 + 4;
                } while (iVar9 < iVar8);
              }
              if (iVar14 == local_28) {
                return;
              }
            }
          }
          _DAT_01e52ef8 = _DAT_01e52ef8 + 1;
          engine_special_cpp_drawPolygon2_FUN_00532650(&DAT_00767274,param_1,_DAT_01c039a0);
          return;
        }
        DAT_00766c70 = param_1;
        local_18 = 0;
        if (0 < (int)param_1) {
          plVar10 = (longlong *)&DAT_00766c74;
          do {
            iVar8 = 0x30;
            plVar18 = (longlong *)(&DAT_005c5014 + *param_2 * 0xc);
            plVar15 = plVar10;
            if (((uint)plVar10 & 7) != 0) {
              plVar15 = (longlong *)((int)plVar10 + 4);
              plVar18 = (longlong *)(&DAT_005c5018 + *param_2 * 0xc);
              *(int *)plVar10 = (int)*(longlong *)(&DAT_005c5014 + *param_2 * 0xc);
              iVar8 = 0x2c;
            }
            while (7 < iVar8) {
              lVar1 = *plVar18;
              plVar18 = plVar18 + 1;
              *plVar15 = (longlong)ROUND((float10)lVar1);
              plVar15 = plVar15 + 1;
              iVar8 = iVar8 + -8;
            }
            if (iVar8 != 0 && -9 < iVar8 + -8) {
              *(int *)plVar15 = (int)*plVar18;
              if (4 < iVar8) {
                *(uint *)((int)plVar15 + 4) = *(uint *)((int)plVar18 + 4);
              }
            }
            param_2 = param_2 + 1;
            local_18 = local_18 + 1;
            plVar10 = plVar10 + 6;
          } while (local_18 < (int)param_1);
        }
      }
      else {
        iVar8 = 0;
        if (0 < (int)param_1) {
          do {
            iVar9 = *param_2;
            iVar8 = iVar8 + 1;
            param_2 = param_2 + 1;
            auStack_d4[iVar8] = &DAT_005c5014 + iVar9 * 0xc;
          } while (iVar8 < (int)param_1);
        }
        DAT_00766c70 = param_1;
        local_48 = param_1;
        iVar8 = 0;
        DAT_00767b38 = 0;
        local_4c = (byte *)local_150;
        local_44 = 0;
        if (0 < (int)param_1) {
          puVar11 = auStack_d4;
          pSVar12 = (SRenderVertex *)auStack_d4[param_1];
          do {
            iVar9 = DAT_00767b38;
            puVar11 = puVar11 + 1;
            pSVar16 = (SRenderVertex *)*puVar11;
            bVar3 = (pSVar12->projected_vertex).transformed_z <=
                    (pSVar12->projected_vertex).transformed_x;
            if ((pSVar16->projected_vertex).transformed_z <=
                (pSVar16->projected_vertex).transformed_x) {
              bVar3 = bVar3 | 2;
            }
            switch(bVar3) {
            case 0:
              iVar9 = iVar8 * 4;
              iVar8 = iVar8 + 1;
              *(SRenderVertex **)(local_4c + iVar9) = pSVar12;
              break;
            case 1:
              if (0xb < DAT_00767b38) {
                g_CHAR_PTR_01cc4800 = "..\\engine\\clipper.c";
                g_INT_01cc4804 = 0x5e;
                core_main_c_FUN_004c8440();
              }
              iVar14 = DAT_00767b38 * 0x30;
              DAT_00767b38 = DAT_00767b38 + 1;
              iVar9 = iVar8 * 4;
              iVar8 = iVar8 + 1;
              *(SRenderVertex **)(local_4c + iVar9) = (SRenderVertex *)(&DAT_007678f8 + iVar14);
              engine_clipper_c_interpolateVertexLeftClip_FUN_00431530
                        (pSVar16,pSVar12,(SRenderVertex *)(&DAT_007678f8 + iVar14));
              break;
            case 2:
              iVar14 = iVar8 + 1;
              *(SRenderVertex **)(local_4c + iVar8 * 4) = pSVar12;
              if (0xb < iVar9) {
                g_CHAR_PTR_01cc4800 = "..\\engine\\clipper.c";
                g_INT_01cc4804 = 0x5e;
                core_main_c_FUN_004c8440();
              }
              iVar9 = DAT_00767b38 * 0x30;
              DAT_00767b38 = DAT_00767b38 + 1;
              iVar8 = iVar8 + 2;
              *(SRenderVertex **)(local_4c + iVar14 * 4) = (SRenderVertex *)(&DAT_007678f8 + iVar9);
              engine_clipper_c_interpolateVertexLeftClip_FUN_00431530
                        (pSVar12,pSVar16,(SRenderVertex *)(&DAT_007678f8 + iVar9));
            }
            local_44 = local_44 + 1;
            pSVar12 = pSVar16;
          } while (local_44 < (int)local_48);
        }
        if (iVar8 < 3) {
          DAT_00766c70 = iVar8;
          return;
        }
        iVar9 = 0;
        local_40 = iVar8;
        local_3c = 0;
        pSVar12 = (SRenderVertex *)local_150[iVar8 + -1];
        DAT_00766c70 = iVar8;
        puVar11 = local_150;
        if (0 < iVar8) {
          do {
            local_24 = puVar11;
            pSVar16 = (SRenderVertex *)*local_24;
            bVar3 = (pSVar12->projected_vertex).transformed_x <=
                    -(pSVar12->projected_vertex).transformed_z;
            if ((pSVar16->projected_vertex).transformed_x <=
                -(pSVar16->projected_vertex).transformed_z) {
              bVar3 = bVar3 | 2;
            }
            switch(bVar3) {
            case 0:
              iVar9 = iVar9 + 1;
              auStack_d4[iVar9] = pSVar12;
              break;
            case 1:
              if (0xb < DAT_00767b38) {
                g_CHAR_PTR_01cc4800 = "..\\engine\\clipper.c";
                g_INT_01cc4804 = 0x5e;
                core_main_c_FUN_004c8440();
              }
              iVar8 = DAT_00767b38 * 0x30;
              iVar9 = iVar9 + 1;
              DAT_00767b38 = DAT_00767b38 + 1;
              auStack_d4[iVar9] = (SRenderVertex *)(&DAT_007678f8 + iVar8);
              engine_clipper_c_interpolateVertexRightClip_FUN_00431630
                        (pSVar16,pSVar12,(SRenderVertex *)(&DAT_007678f8 + iVar8));
              break;
            case 2:
              auStack_d4[iVar9 + 1] = pSVar12;
              if (0xb < DAT_00767b38) {
                g_CHAR_PTR_01cc4800 = "..\\engine\\clipper.c";
                g_INT_01cc4804 = 0x5e;
                core_main_c_FUN_004c8440();
              }
              iVar8 = DAT_00767b38 * 0x30;
              iVar9 = iVar9 + 2;
              DAT_00767b38 = DAT_00767b38 + 1;
              auStack_d4[iVar9] = (SRenderVertex *)(&DAT_007678f8 + iVar8);
              engine_clipper_c_interpolateVertexRightClip_FUN_00431630
                        (pSVar12,pSVar16,(SRenderVertex *)(&DAT_007678f8 + iVar8));
            }
            local_3c = local_3c + 1;
            local_24 = local_24 + 1;
            pSVar12 = pSVar16;
            puVar11 = local_24;
          } while (local_3c < local_40);
        }
        if (iVar9 < 3) {
          DAT_00766c70 = iVar9;
          return;
        }
        iVar8 = 0;
        local_38 = iVar9;
        local_34 = 0;
        pSVar12 = (SRenderVertex *)auStack_d4[iVar9];
        iVar14 = iVar8;
        DAT_00766c70 = iVar9;
        puVar11 = auStack_d4 + 1;
        if (0 < iVar9) {
          do {
            local_20 = puVar11;
            pSVar16 = (SRenderVertex *)*local_20;
            bVar3 = (pSVar12->projected_vertex).transformed_z <=
                    (pSVar12->projected_vertex).transformed_y;
            if ((pSVar16->projected_vertex).transformed_z <=
                (pSVar16->projected_vertex).transformed_y) {
              bVar3 = bVar3 | 2;
            }
            iVar8 = iVar14;
            switch(bVar3) {
            case 0:
              iVar8 = iVar14 + 1;
              local_150[iVar14] = pSVar12;
              break;
            case 1:
              if (0xb < DAT_00767b38) {
                g_CHAR_PTR_01cc4800 = "..\\engine\\clipper.c";
                g_INT_01cc4804 = 0x5e;
                core_main_c_FUN_004c8440();
              }
              iVar9 = DAT_00767b38 * 0x30;
              iVar8 = iVar14 + 1;
              DAT_00767b38 = DAT_00767b38 + 1;
              local_150[iVar14] = (SRenderVertex *)(&DAT_007678f8 + iVar9);
              engine_clipper_c_interpolateVertexBottomClip_FUN_00431730
                        (pSVar16,pSVar12,(SRenderVertex *)(&DAT_007678f8 + iVar9));
              break;
            case 2:
              local_150[iVar14] = pSVar12;
              if (0xb < DAT_00767b38) {
                g_CHAR_PTR_01cc4800 = "..\\engine\\clipper.c";
                g_INT_01cc4804 = 0x5e;
                core_main_c_FUN_004c8440();
              }
              iVar9 = DAT_00767b38 * 0x30;
              iVar8 = iVar14 + 2;
              DAT_00767b38 = DAT_00767b38 + 1;
              local_150[iVar14 + 1] = (SRenderVertex *)(&DAT_007678f8 + iVar9);
              engine_clipper_c_interpolateVertexBottomClip_FUN_00431730
                        (pSVar12,pSVar16,(SRenderVertex *)(&DAT_007678f8 + iVar9));
            }
            local_34 = local_34 + 1;
            local_20 = local_20 + 1;
            iVar14 = iVar8;
            pSVar12 = pSVar16;
            puVar11 = local_20;
          } while (local_34 < local_38);
        }
        if (iVar8 < 3) {
          DAT_00766c70 = iVar8;
          return;
        }
        uVar7 = 0;
        local_30 = iVar8;
        local_2c = 0;
        pSVar12 = (SRenderVertex *)local_150[iVar8 + -1];
        DAT_00766c70 = iVar8;
        puVar11 = local_150;
        if (0 < iVar8) {
          do {
            local_1c = puVar11;
            pSVar16 = (SRenderVertex *)*local_1c;
            bVar3 = (pSVar12->projected_vertex).transformed_y <=
                    -(pSVar12->projected_vertex).transformed_z;
            if ((pSVar16->projected_vertex).transformed_y <=
                -(pSVar16->projected_vertex).transformed_z) {
              bVar3 = bVar3 | 2;
            }
            switch(bVar3) {
            case 0:
              uVar7 = uVar7 + 1;
              auStack_d4[uVar7] = pSVar12;
              break;
            case 1:
              if (0xb < DAT_00767b38) {
                g_CHAR_PTR_01cc4800 = "..\\engine\\clipper.c";
                g_INT_01cc4804 = 0x5e;
                core_main_c_FUN_004c8440();
              }
              iVar8 = DAT_00767b38 * 0x30;
              uVar7 = uVar7 + 1;
              DAT_00767b38 = DAT_00767b38 + 1;
              auStack_d4[uVar7] = (SRenderVertex *)(&DAT_007678f8 + iVar8);
              engine_clipper_c_interpolateVertexTopClip_FUN_00431830
                        (pSVar16,pSVar12,(SRenderVertex *)(&DAT_007678f8 + iVar8));
              break;
            case 2:
              auStack_d4[uVar7 + 1] = pSVar12;
              if (0xb < DAT_00767b38) {
                g_CHAR_PTR_01cc4800 = "..\\engine\\clipper.c";
                g_INT_01cc4804 = 0x5e;
                core_main_c_FUN_004c8440();
              }
              iVar8 = DAT_00767b38 * 0x30;
              uVar7 = uVar7 + 2;
              DAT_00767b38 = DAT_00767b38 + 1;
              auStack_d4[uVar7] = (SRenderVertex *)(&DAT_007678f8 + iVar8);
              engine_clipper_c_interpolateVertexTopClip_FUN_00431830
                        (pSVar12,pSVar16,(SRenderVertex *)(&DAT_007678f8 + iVar8));
            }
            local_2c = local_2c + 1;
            local_1c = local_1c + 1;
            pSVar12 = pSVar16;
            puVar11 = local_1c;
          } while (local_2c < local_30);
        }
        if ((int)uVar7 < 3) {
          DAT_00766c70 = uVar7;
          return;
        }
        iVar8 = 0;
        DAT_00766c70 = uVar7;
        if (0 < (int)uVar7) {
          plVar10 = (longlong *)&DAT_00766c74;
          iVar9 = 0;
          do {
            plVar18 = *(longlong **)((int)auStack_d4 + iVar9 + 4);
            iVar14 = 0x30;
            plVar15 = plVar18;
            plVar17 = plVar10;
            if (((uint)plVar10 & 7) != 0) {
              plVar17 = (longlong *)((int)plVar10 + (uint)bVar19 * -8 + 4);
              plVar15 = (longlong *)((int)plVar18 + (uint)bVar19 * -8 + 4);
              *(int *)plVar10 = (int)*plVar18;
              iVar14 = 0x2c;
            }
            while (7 < iVar14) {
              lVar1 = *plVar15;
              plVar15 = plVar15 + 1;
              *plVar17 = (longlong)ROUND((float10)lVar1);
              plVar17 = plVar17 + 1;
              iVar14 = iVar14 + -8;
            }
            if (iVar14 != 0 && -9 < iVar14 + -8) {
              *(int *)plVar17 = (int)*plVar15;
              if (4 < iVar14) {
                *(uint *)((int)plVar17 + (uint)bVar19 * -8 + 4) =
                     *(uint *)((int)plVar15 + (uint)bVar19 * -8 + 4);
              }
            }
            iVar9 = iVar9 + 4;
            iVar8 = iVar8 + 1;
            plVar10 = plVar10 + 6;
          } while (iVar8 < (int)DAT_00766c70);
        }
        iVar8 = 0;
        if (DAT_005ad284 != 0) {
          if (0 < (int)DAT_00766c70) {
            iVar9 = 0;
            do {
              if (iVar8 < *(int *)((int)&DAT_00766c7c + iVar9)) {
                iVar8 = *(int *)((int)&DAT_00766c7c + iVar9);
              }
              iVar9 = iVar9 + 0x30;
            } while (iVar9 < (int)(DAT_00766c70 * 0x30));
          }
          if (DAT_005ad284 <= iVar8) {
            plVar10 = (longlong *)&DAT_00766c74;
            DAT_007672f4 = DAT_00766c70;
            plVar18 = (longlong *)&DAT_007672f8;
            local_14 = 0;
            iVar8 = DAT_00766c70 * 0x30;
            while (7 < iVar8) {
              lVar1 = *plVar10;
              plVar10 = plVar10 + 1;
              *plVar18 = (longlong)ROUND((float10)lVar1);
              plVar18 = plVar18 + 1;
              iVar8 = iVar8 + -8;
            }
            if (iVar8 != 0 && -9 < iVar8 + -8) {
              *(int *)plVar18 = (int)*plVar10;
              if (4 < iVar8) {
                *(uint *)((int)plVar18 + (uint)bVar19 * -8 + 4) =
                     *(uint *)((int)plVar10 + (uint)bVar19 * -8 + 4);
              }
            }
            DAT_00766c70 = 0;
            if (0 < (int)DAT_007672f4) {
              pSVar12 = (SRenderVertex *)&DAT_007672f8;
              do {
                uVar7 = local_14 + 1;
                if (uVar7 == DAT_007672f4) {
                  uVar7 = uVar7 ^ DAT_007672f4;
                }
                bVar3 = DAT_005ad284 <= (pSVar12->projected_vertex).transformed_z;
                if (DAT_005ad284 <= (int)(&DAT_00767300)[uVar7 * 0xc]) {
                  bVar3 = bVar3 | 2;
                }
                switch(bVar3) {
                case 0:
                  plVar18 = (longlong *)(&DAT_00766c74 + DAT_00766c70 * 0xc);
                  iVar8 = 0x30;
                  pSVar16 = pSVar12;
                  plVar10 = plVar18;
                  if (((uint)plVar18 & 7) != 0) {
                    plVar10 = (longlong *)(&DAT_00766c78 + DAT_00766c70 * 0xc + (uint)bVar19 * -2);
                    pSVar16 = (SRenderVertex *)((int)pSVar12 + (uint)bVar19 * -8 + 4);
                    *(int *)plVar18 = (pSVar12->projected_vertex).transformed_x;
                    iVar8 = 0x2c;
                  }
                  while (7 < iVar8) {
                    lVar2._0_4_ = (pSVar16->projected_vertex).transformed_x;
                    lVar2._4_4_ = (pSVar16->projected_vertex).transformed_y;
                    pSVar16 = (SRenderVertex *)&(pSVar16->projected_vertex).transformed_z;
                    *plVar10 = (longlong)ROUND((float10)lVar2);
                    plVar10 = plVar10 + 1;
                    iVar8 = iVar8 + -8;
                  }
                  if (iVar8 != 0 && -9 < iVar8 + -8) {
                    *(int *)plVar10 = (pSVar16->projected_vertex).transformed_x;
                    if (4 < iVar8) {
                      *(uint *)((int)plVar10 + (uint)bVar19 * -8 + 4) =
                           *(uint *)((int)pSVar16 + (uint)bVar19 * -8 + 4);
                    }
                  }
                  DAT_00766c70 = DAT_00766c70 + 1;
                  break;
                case 1:
                  engine_clipper_c_interpolateVertexNearClip_FUN_00431930
                            ((SRenderVertex *)(&DAT_007672f8 + uVar7 * 0xc),pSVar12,
                             (SRenderVertex *)(&DAT_00766c74 + DAT_00766c70 * 0xc));
                  DAT_00766c70 = DAT_00766c70 + 1;
                  break;
                case 2:
                  plVar18 = (longlong *)(&DAT_00766c74 + DAT_00766c70 * 0xc);
                  iVar8 = 0x30;
                  pSVar16 = pSVar12;
                  plVar10 = plVar18;
                  if (((uint)plVar18 & 7) != 0) {
                    plVar10 = (longlong *)(&DAT_00766c78 + DAT_00766c70 * 0xc + (uint)bVar19 * -2);
                    pSVar16 = (SRenderVertex *)((int)pSVar12 + (uint)bVar19 * -8 + 4);
                    *(int *)plVar18 = (pSVar12->projected_vertex).transformed_x;
                    iVar8 = 0x2c;
                  }
                  while (7 < iVar8) {
                    lVar1._0_4_ = (pSVar16->projected_vertex).transformed_x;
                    lVar1._4_4_ = (pSVar16->projected_vertex).transformed_y;
                    pSVar16 = (SRenderVertex *)&(pSVar16->projected_vertex).transformed_z;
                    *plVar10 = (longlong)ROUND((float10)lVar1);
                    plVar10 = plVar10 + 1;
                    iVar8 = iVar8 + -8;
                  }
                  if (iVar8 != 0 && -9 < iVar8 + -8) {
                    *(int *)plVar10 = (pSVar16->projected_vertex).transformed_x;
                    if (4 < iVar8) {
                      *(uint *)((int)plVar10 + (uint)bVar19 * -8 + 4) =
                           *(uint *)((int)pSVar16 + (uint)bVar19 * -8 + 4);
                    }
                  }
                  DAT_00766c70 = DAT_00766c70 + 1;
                  engine_clipper_c_interpolateVertexNearClip_FUN_00431930
                            (pSVar12,(SRenderVertex *)(&DAT_007672f8 + uVar7 * 0xc),
                             (SRenderVertex *)(&DAT_00766c74 + DAT_00766c70 * 0xc));
                  DAT_00766c70 = DAT_00766c70 + 1;
                }
                local_14 = local_14 + 1;
                pSVar12 = pSVar12 + 1;
              } while (local_14 < (int)DAT_007672f4);
            }
          }
        }
        if ((int)DAT_00766c70 < 3) {
          return;
        }
        iVar8 = 0;
        if (0 < (int)DAT_00766c70) {
          piVar5 = &DAT_00766c74;
          do {
            iVar9 = piVar5[2];
            if (iVar9 == 0) {
              piVar5[2] = 1;
              *piVar5 = 0;
              piVar5[1] = 0;
            }
            else {
              iVar14 = *piVar5;
              iVar4 = iVar9;
              if ((iVar9 < iVar14) || (iVar4 = -iVar9, -iVar14 != iVar9 && iVar14 <= iVar4)) {
                *piVar5 = iVar4;
              }
              else {
                iVar14 = piVar5[1];
                if (piVar5[2] < iVar14) {
                  piVar5[1] = piVar5[2];
                }
                else if (-iVar14 != iVar9 && iVar14 <= iVar4) {
                  piVar5[1] = iVar4;
                }
              }
            }
            iVar8 = iVar8 + 1;
            piVar5 = piVar5 + 0xc;
          } while (iVar8 < (int)DAT_00766c70);
        }
      }
      if (2 < (int)DAT_00766c70) {
        engine_prim_c_FUN_004f9dd0((SRenderVertex *)&DAT_00766c74,DAT_00766c70);
        return;
      }
    }
  }
  return;
}
