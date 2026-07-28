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
  int *piVar3;
  byte bVar4;
  int iVar5;
  int *piVar6;
  char cVar7;
  int iVar9;
  int iVar10;
  int iVar11;
  longlong *plVar12;
  int *piVar13;
  SRenderVertex *v1;
  uint uVar14;
  int iVar15;
  longlong *plVar16;
  SRenderVertex *pSVar17;
  longlong *plVar18;
  longlong *plVar19;
  byte bVar20;
  int local_150 [31];
  int aiStack_d4 [33];
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
  int *local_20;
  int *local_1c;
  int local_18;
  int local_14;
  uint uVar8;
  
  bVar20 = 0;
  if (DAT_005b7644 == 0) {
    engine_prim_c_FUN_004fa2e0(param_2);
  }
  else {
    uVar8 = 0xffffffff;
    cVar7 = -1;
    local_50 = param_2;
    uVar14 = 0;
    iVar9 = 0;
    piVar6 = param_2;
    if (0 < (int)param_1) {
      do {
        iVar11 = *piVar6;
        if (((&DAT_005c5024)[iVar11 * 0xc] & 0x80000000) != 0) {
          uVar14 = uVar14 + 1;
        }
        piVar6 = piVar6 + 1;
        iVar9 = iVar9 + 1;
        uVar8 = uVar8 & (&DAT_005c5024)[iVar11 * 0xc];
        cVar7 = (char)uVar8;
      } while (iVar9 < (int)param_1);
    }
    if ((uVar14 == param_1) && (cVar7 != '\0')) {
      DAT_00766c70 = 0;
    }
    else {
      if (uVar14 == 0) {
        if ((_DAT_01c02594 != 0) && (DAT_006b0278 == 0)) {
          iVar9 = 0;
          if (0 < (int)param_1) {
            do {
              iVar11 = *param_2;
              iVar9 = iVar9 + 1;
              param_2 = param_2 + 1;
              *(uint **)(iVar9 * 4 + 0x767270) = &DAT_005c5014 + iVar11 * 0xc;
            } while (iVar9 < (int)param_1);
          }
          if (DAT_006b0280 != 0) {
            if ((int)param_1 < 4) {
              iVar9 = engine_prim_c_calculateTriangleWindingOrder_FUN_004f9a10
                                (DAT_00767274,DAT_00767278,DAT_0076727c);
              if (iVar9 == 0) {
                return;
              }
            }
            else {
              local_28 = param_1 - 2;
              iVar11 = 0;
              iVar9 = local_28 * 4;
              iVar15 = 0;
              if (0 < iVar9) {
                do {
                  iVar5 = engine_prim_c_calculateTriangleWindingOrder_FUN_004f9a10
                                    (DAT_00767274,*(SRenderVertex **)((int)&DAT_00767278 + iVar11),
                                     *(SRenderVertex **)((int)&DAT_0076727c + iVar11));
                  if (iVar5 == 0) {
                    iVar15 = iVar15 + 1;
                  }
                  iVar11 = iVar11 + 4;
                } while (iVar11 < iVar9);
              }
              if (iVar15 == local_28) {
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
          plVar12 = (longlong *)&DAT_00766c74;
          do {
            iVar9 = 0x30;
            plVar19 = (longlong *)(&DAT_005c5014 + *param_2 * 0xc);
            plVar16 = plVar12;
            if (((uint)plVar12 & 7) != 0) {
              plVar16 = (longlong *)((int)plVar12 + 4);
              plVar19 = (longlong *)(&DAT_005c5018 + *param_2 * 0xc);
              *(int *)plVar12 = (int)*(longlong *)(&DAT_005c5014 + *param_2 * 0xc);
              iVar9 = 0x2c;
            }
            while (7 < iVar9) {
              lVar1 = *plVar19;
              plVar19 = plVar19 + 1;
              *plVar16 = (longlong)ROUND((float10)lVar1);
              plVar16 = plVar16 + 1;
              iVar9 = iVar9 + -8;
            }
            if (iVar9 != 0 && -9 < iVar9 + -8) {
              *(int *)plVar16 = (int)*plVar19;
              if (4 < iVar9) {
                *(uint *)((int)plVar16 + 4) = *(uint *)((int)plVar19 + 4);
              }
            }
            param_2 = param_2 + 1;
            local_18 = local_18 + 1;
            plVar12 = plVar12 + 6;
          } while (local_18 < (int)param_1);
        }
      }
      else {
        iVar9 = 0;
        if (0 < (int)param_1) {
          do {
            iVar11 = *param_2;
            iVar9 = iVar9 + 1;
            param_2 = param_2 + 1;
            aiStack_d4[iVar9] = (int)(&DAT_005c5014 + iVar11 * 0xc);
          } while (iVar9 < (int)param_1);
        }
        DAT_00766c70 = param_1;
        local_48 = param_1;
        iVar9 = 0;
        DAT_00767b38 = 0;
        local_4c = (byte *)local_150;
        local_44 = 0;
        if (0 < (int)param_1) {
          piVar6 = aiStack_d4;
          piVar13 = (int *)aiStack_d4[param_1];
          do {
            iVar11 = DAT_00767b38;
            piVar6 = piVar6 + 1;
            piVar3 = (int *)*piVar6;
            bVar4 = piVar13[2] <= *piVar13;
            if (piVar3[2] <= *piVar3) {
              bVar4 = bVar4 | 2;
            }
            switch(bVar4) {
            case 0:
              iVar11 = iVar9 * 4;
              iVar9 = iVar9 + 1;
              *(int **)(local_4c + iVar11) = piVar13;
              break;
            case 1:
              if (0xb < DAT_00767b38) {
                PTR_01cc4800 = "..\\engine\\clipper.c";
                INT_01cc4804 = 0x5e;
                core_main_c_FUN_004c8440();
              }
              iVar15 = DAT_00767b38 * 0x30;
              DAT_00767b38 = DAT_00767b38 + 1;
              iVar11 = iVar9 * 4;
              iVar9 = iVar9 + 1;
              *(byte **)(local_4c + iVar11) = &DAT_007678f8 + iVar15;
              engine_clipper_c_interpolateVertexLeftClip_FUN_00431530(piVar3,piVar13);
              break;
            case 2:
              iVar15 = iVar9 + 1;
              *(int **)(local_4c + iVar9 * 4) = piVar13;
              if (0xb < iVar11) {
                PTR_01cc4800 = "..\\engine\\clipper.c";
                INT_01cc4804 = 0x5e;
                core_main_c_FUN_004c8440();
              }
              iVar11 = DAT_00767b38 * 0x30;
              DAT_00767b38 = DAT_00767b38 + 1;
              iVar9 = iVar9 + 2;
              *(byte **)(local_4c + iVar15 * 4) = &DAT_007678f8 + iVar11;
              engine_clipper_c_interpolateVertexLeftClip_FUN_00431530(piVar13,piVar3);
            }
            local_44 = local_44 + 1;
            piVar13 = piVar3;
          } while (local_44 < (int)local_48);
        }
        if (iVar9 < 3) {
          DAT_00766c70 = iVar9;
          return;
        }
        iVar11 = 0;
        local_40 = iVar9;
        local_3c = 0;
        piVar6 = (int *)local_150[iVar9 + -1];
        DAT_00766c70 = iVar9;
        piVar13 = local_150;
        if (0 < iVar9) {
          do {
            local_24 = piVar13;
            piVar13 = (int *)*local_24;
            bVar4 = *piVar6 <= -piVar6[2];
            if (*piVar13 <= -piVar13[2]) {
              bVar4 = bVar4 | 2;
            }
            switch(bVar4) {
            case 0:
              iVar11 = iVar11 + 1;
              aiStack_d4[iVar11] = (int)piVar6;
              break;
            case 1:
              if (0xb < DAT_00767b38) {
                PTR_01cc4800 = "..\\engine\\clipper.c";
                INT_01cc4804 = 0x5e;
                core_main_c_FUN_004c8440();
              }
              iVar9 = DAT_00767b38 * 0x30;
              iVar11 = iVar11 + 1;
              DAT_00767b38 = DAT_00767b38 + 1;
              aiStack_d4[iVar11] = (int)(&DAT_007678f8 + iVar9);
              engine_clipper_c_interpolateVertexRightClip_FUN_00431630(piVar13,piVar6);
              break;
            case 2:
              aiStack_d4[iVar11 + 1] = (int)piVar6;
              if (0xb < DAT_00767b38) {
                PTR_01cc4800 = "..\\engine\\clipper.c";
                INT_01cc4804 = 0x5e;
                core_main_c_FUN_004c8440();
              }
              iVar9 = DAT_00767b38 * 0x30;
              iVar11 = iVar11 + 2;
              DAT_00767b38 = DAT_00767b38 + 1;
              aiStack_d4[iVar11] = (int)(&DAT_007678f8 + iVar9);
              engine_clipper_c_interpolateVertexRightClip_FUN_00431630(piVar6,piVar13);
            }
            local_3c = local_3c + 1;
            local_24 = local_24 + 1;
            piVar6 = piVar13;
            piVar13 = local_24;
          } while (local_3c < local_40);
        }
        if (iVar11 < 3) {
          DAT_00766c70 = iVar11;
          return;
        }
        iVar15 = 0;
        local_38 = iVar11;
        local_34 = 0;
        iVar9 = aiStack_d4[iVar11];
        iVar5 = iVar15;
        DAT_00766c70 = iVar11;
        piVar6 = aiStack_d4 + 1;
        if (0 < iVar11) {
          do {
            local_20 = piVar6;
            iVar11 = *local_20;
            bVar4 = *(int *)(iVar9 + 8) <= *(int *)(iVar9 + 4);
            if (*(int *)(iVar11 + 8) <= *(int *)(iVar11 + 4)) {
              bVar4 = bVar4 | 2;
            }
            iVar15 = iVar5;
            switch(bVar4) {
            case 0:
              iVar15 = iVar5 + 1;
              local_150[iVar5] = iVar9;
              break;
            case 1:
              if (0xb < DAT_00767b38) {
                PTR_01cc4800 = "..\\engine\\clipper.c";
                INT_01cc4804 = 0x5e;
                core_main_c_FUN_004c8440();
              }
              iVar10 = DAT_00767b38 * 0x30;
              iVar15 = iVar5 + 1;
              DAT_00767b38 = DAT_00767b38 + 1;
              local_150[iVar5] = (int)(&DAT_007678f8 + iVar10);
              engine_clipper_c_interpolateVertexBottomClip_FUN_00431730(iVar11,iVar9);
              break;
            case 2:
              local_150[iVar5] = iVar9;
              if (0xb < DAT_00767b38) {
                PTR_01cc4800 = "..\\engine\\clipper.c";
                INT_01cc4804 = 0x5e;
                core_main_c_FUN_004c8440();
              }
              iVar10 = DAT_00767b38 * 0x30;
              iVar15 = iVar5 + 2;
              DAT_00767b38 = DAT_00767b38 + 1;
              local_150[iVar5 + 1] = (int)(&DAT_007678f8 + iVar10);
              engine_clipper_c_interpolateVertexBottomClip_FUN_00431730(iVar9,iVar11);
            }
            local_34 = local_34 + 1;
            local_20 = local_20 + 1;
            iVar5 = iVar15;
            iVar9 = iVar11;
            piVar6 = local_20;
          } while (local_34 < local_38);
        }
        if (iVar15 < 3) {
          DAT_00766c70 = iVar15;
          return;
        }
        uVar8 = 0;
        local_30 = iVar15;
        local_2c = 0;
        iVar9 = local_150[iVar15 + -1];
        DAT_00766c70 = iVar15;
        piVar6 = local_150;
        if (0 < iVar15) {
          do {
            local_1c = piVar6;
            iVar11 = *local_1c;
            bVar4 = *(int *)(iVar9 + 4) <= -*(int *)(iVar9 + 8);
            if (*(int *)(iVar11 + 4) <= -*(int *)(iVar11 + 8)) {
              bVar4 = bVar4 | 2;
            }
            switch(bVar4) {
            case 0:
              uVar8 = uVar8 + 1;
              aiStack_d4[uVar8] = iVar9;
              break;
            case 1:
              if (0xb < DAT_00767b38) {
                PTR_01cc4800 = "..\\engine\\clipper.c";
                INT_01cc4804 = 0x5e;
                core_main_c_FUN_004c8440();
              }
              iVar15 = DAT_00767b38 * 0x30;
              uVar8 = uVar8 + 1;
              DAT_00767b38 = DAT_00767b38 + 1;
              aiStack_d4[uVar8] = (int)(&DAT_007678f8 + iVar15);
              engine_clipper_c_interpolateVertexTopClip_FUN_00431830(iVar11,iVar9);
              break;
            case 2:
              aiStack_d4[uVar8 + 1] = iVar9;
              if (0xb < DAT_00767b38) {
                PTR_01cc4800 = "..\\engine\\clipper.c";
                INT_01cc4804 = 0x5e;
                core_main_c_FUN_004c8440();
              }
              iVar15 = DAT_00767b38 * 0x30;
              uVar8 = uVar8 + 2;
              DAT_00767b38 = DAT_00767b38 + 1;
              aiStack_d4[uVar8] = (int)(&DAT_007678f8 + iVar15);
              engine_clipper_c_interpolateVertexTopClip_FUN_00431830(iVar9,iVar11);
            }
            local_2c = local_2c + 1;
            local_1c = local_1c + 1;
            iVar9 = iVar11;
            piVar6 = local_1c;
          } while (local_2c < local_30);
        }
        if ((int)uVar8 < 3) {
          DAT_00766c70 = uVar8;
          return;
        }
        iVar9 = 0;
        DAT_00766c70 = uVar8;
        if (0 < (int)uVar8) {
          plVar12 = (longlong *)&DAT_00766c74;
          iVar11 = 0;
          do {
            plVar19 = *(longlong **)((int)aiStack_d4 + iVar11 + 4);
            iVar15 = 0x30;
            plVar16 = plVar19;
            plVar18 = plVar12;
            if (((uint)plVar12 & 7) != 0) {
              plVar18 = (longlong *)((int)plVar12 + (uint)bVar20 * -8 + 4);
              plVar16 = (longlong *)((int)plVar19 + (uint)bVar20 * -8 + 4);
              *(int *)plVar12 = (int)*plVar19;
              iVar15 = 0x2c;
            }
            while (7 < iVar15) {
              lVar1 = *plVar16;
              plVar16 = plVar16 + 1;
              *plVar18 = (longlong)ROUND((float10)lVar1);
              plVar18 = plVar18 + 1;
              iVar15 = iVar15 + -8;
            }
            if (iVar15 != 0 && -9 < iVar15 + -8) {
              *(int *)plVar18 = (int)*plVar16;
              if (4 < iVar15) {
                *(uint *)((int)plVar18 + (uint)bVar20 * -8 + 4) =
                     *(uint *)((int)plVar16 + (uint)bVar20 * -8 + 4);
              }
            }
            iVar11 = iVar11 + 4;
            iVar9 = iVar9 + 1;
            plVar12 = plVar12 + 6;
          } while (iVar9 < (int)DAT_00766c70);
        }
        iVar9 = 0;
        if (DAT_005ad284 != 0) {
          if (0 < (int)DAT_00766c70) {
            iVar11 = 0;
            do {
              if (iVar9 < *(int *)((int)&DAT_00766c7c + iVar11)) {
                iVar9 = *(int *)((int)&DAT_00766c7c + iVar11);
              }
              iVar11 = iVar11 + 0x30;
            } while (iVar11 < (int)(DAT_00766c70 * 0x30));
          }
          if (DAT_005ad284 <= iVar9) {
            plVar12 = (longlong *)&DAT_00766c74;
            DAT_007672f4 = DAT_00766c70;
            plVar19 = (longlong *)&DAT_007672f8;
            local_14 = 0;
            iVar9 = DAT_00766c70 * 0x30;
            while (7 < iVar9) {
              lVar1 = *plVar12;
              plVar12 = plVar12 + 1;
              *plVar19 = (longlong)ROUND((float10)lVar1);
              plVar19 = plVar19 + 1;
              iVar9 = iVar9 + -8;
            }
            if (iVar9 != 0 && -9 < iVar9 + -8) {
              *(int *)plVar19 = (int)*plVar12;
              if (4 < iVar9) {
                *(uint *)((int)plVar19 + (uint)bVar20 * -8 + 4) =
                     *(uint *)((int)plVar12 + (uint)bVar20 * -8 + 4);
              }
            }
            DAT_00766c70 = 0;
            if (0 < (int)DAT_007672f4) {
              v1 = (SRenderVertex *)&DAT_007672f8;
              do {
                uVar8 = local_14 + 1;
                if (uVar8 == DAT_007672f4) {
                  uVar8 = uVar8 ^ DAT_007672f4;
                }
                bVar4 = DAT_005ad284 <= (v1->projected_vertex).transformed_z;
                if (DAT_005ad284 <= (int)(&DAT_00767300)[uVar8 * 0xc]) {
                  bVar4 = bVar4 | 2;
                }
                switch(bVar4) {
                case 0:
                  plVar19 = (longlong *)(&DAT_00766c74 + DAT_00766c70 * 0xc);
                  iVar9 = 0x30;
                  pSVar17 = v1;
                  plVar12 = plVar19;
                  if (((uint)plVar19 & 7) != 0) {
                    plVar12 = (longlong *)(&DAT_00766c78 + DAT_00766c70 * 0xc + (uint)bVar20 * -2);
                    pSVar17 = (SRenderVertex *)((int)v1 + (uint)bVar20 * -8 + 4);
                    *(int *)plVar19 = (v1->projected_vertex).transformed_x;
                    iVar9 = 0x2c;
                  }
                  while (7 < iVar9) {
                    lVar2._0_4_ = (pSVar17->projected_vertex).transformed_x;
                    lVar2._4_4_ = (pSVar17->projected_vertex).transformed_y;
                    pSVar17 = (SRenderVertex *)&(pSVar17->projected_vertex).transformed_z;
                    *plVar12 = (longlong)ROUND((float10)lVar2);
                    plVar12 = plVar12 + 1;
                    iVar9 = iVar9 + -8;
                  }
                  if (iVar9 != 0 && -9 < iVar9 + -8) {
                    *(int *)plVar12 = (pSVar17->projected_vertex).transformed_x;
                    if (4 < iVar9) {
                      *(uint *)((int)plVar12 + (uint)bVar20 * -8 + 4) =
                           *(uint *)((int)pSVar17 + (uint)bVar20 * -8 + 4);
                    }
                  }
                  DAT_00766c70 = DAT_00766c70 + 1;
                  break;
                case 1:
                  engine_clipper_c_interpolateVertexNearClip_FUN_00431930
                            ((SRenderVertex *)(&DAT_007672f8 + uVar8 * 0xc),v1,
                             (SRenderVertex *)(&DAT_00766c74 + DAT_00766c70 * 0xc));
                  DAT_00766c70 = DAT_00766c70 + 1;
                  break;
                case 2:
                  plVar19 = (longlong *)(&DAT_00766c74 + DAT_00766c70 * 0xc);
                  iVar9 = 0x30;
                  pSVar17 = v1;
                  plVar12 = plVar19;
                  if (((uint)plVar19 & 7) != 0) {
                    plVar12 = (longlong *)(&DAT_00766c78 + DAT_00766c70 * 0xc + (uint)bVar20 * -2);
                    pSVar17 = (SRenderVertex *)((int)v1 + (uint)bVar20 * -8 + 4);
                    *(int *)plVar19 = (v1->projected_vertex).transformed_x;
                    iVar9 = 0x2c;
                  }
                  while (7 < iVar9) {
                    lVar1._0_4_ = (pSVar17->projected_vertex).transformed_x;
                    lVar1._4_4_ = (pSVar17->projected_vertex).transformed_y;
                    pSVar17 = (SRenderVertex *)&(pSVar17->projected_vertex).transformed_z;
                    *plVar12 = (longlong)ROUND((float10)lVar1);
                    plVar12 = plVar12 + 1;
                    iVar9 = iVar9 + -8;
                  }
                  if (iVar9 != 0 && -9 < iVar9 + -8) {
                    *(int *)plVar12 = (pSVar17->projected_vertex).transformed_x;
                    if (4 < iVar9) {
                      *(uint *)((int)plVar12 + (uint)bVar20 * -8 + 4) =
                           *(uint *)((int)pSVar17 + (uint)bVar20 * -8 + 4);
                    }
                  }
                  DAT_00766c70 = DAT_00766c70 + 1;
                  engine_clipper_c_interpolateVertexNearClip_FUN_00431930
                            (v1,(SRenderVertex *)(&DAT_007672f8 + uVar8 * 0xc),
                             (SRenderVertex *)(&DAT_00766c74 + DAT_00766c70 * 0xc));
                  DAT_00766c70 = DAT_00766c70 + 1;
                }
                local_14 = local_14 + 1;
                v1 = v1 + 1;
              } while (local_14 < (int)DAT_007672f4);
            }
          }
        }
        if ((int)DAT_00766c70 < 3) {
          return;
        }
        iVar9 = 0;
        if (0 < (int)DAT_00766c70) {
          piVar6 = &DAT_00766c74;
          do {
            iVar11 = piVar6[2];
            if (iVar11 == 0) {
              piVar6[2] = 1;
              *piVar6 = 0;
              piVar6[1] = 0;
            }
            else {
              iVar15 = *piVar6;
              iVar5 = iVar11;
              if ((iVar11 < iVar15) || (iVar5 = -iVar11, -iVar15 != iVar11 && iVar15 <= iVar5)) {
                *piVar6 = iVar5;
              }
              else {
                iVar15 = piVar6[1];
                if (piVar6[2] < iVar15) {
                  piVar6[1] = piVar6[2];
                }
                else if (-iVar15 != iVar11 && iVar15 <= iVar5) {
                  piVar6[1] = iVar5;
                }
              }
            }
            iVar9 = iVar9 + 1;
            piVar6 = piVar6 + 0xc;
          } while (iVar9 < (int)DAT_00766c70);
        }
      }
      if (2 < (int)DAT_00766c70) {
        engine_prim_c_FUN_004f9dd0(&DAT_00766c74);
        return;
      }
    }
  }
  return;
}
