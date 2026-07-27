// Name: engine_clipper.c_FUN_00432cd0
// Address: 00432cd0
// Address Range: [[00432cd0, 0043376b]]
// Convention: unknown
// Signature: int * engine_clipper_c_FUN_00432cd0(int *param_1,int *param_2)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x004335a5) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * engine_clipper_c_FUN_00432cd0(int *param_1,int *param_2)

{
  longlong lVar1;
  int *piVar2;
  byte bVar3;
  int *piVar4;
  char cVar5;
  int iVar7;
  int iVar8;
  int iVar9;
  longlong *plVar10;
  int iVar11;
  int *piVar12;
  int *piVar13;
  int iVar14;
  longlong *plVar15;
  longlong *plVar16;
  longlong *plVar17;
  byte bVar18;
  int local_150 [31];
  int aiStack_d4 [33];
  int *local_50;
  byte *local_4c;
  int *local_48;
  int *local_44;
  int local_40;
  int *local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int *local_28;
  uint *local_24;
  int *local_20;
  int *local_1c;
  int *local_18;
  int local_14;
  uint uVar6;
  
  bVar18 = 0;
  piVar4 = local_150;
  if (DAT_005b7644 == 0) {
    piVar13 = (int *)engine_prim_c_FUN_004fa2e0(param_2);
  }
  else {
    uVar6 = 0xffffffff;
    cVar5 = -1;
    local_50 = param_2;
    piVar12 = (int *)0x0;
    iVar7 = 0;
    piVar13 = param_2;
    if (0 < (int)param_1) {
      do {
        iVar9 = *piVar13;
        if (((&DAT_005c5024)[iVar9 * 0xc] & 0x80000000) != 0) {
          piVar12 = (int *)((int)piVar12 + 1);
        }
        piVar13 = piVar13 + 1;
        iVar7 = iVar7 + 1;
        uVar6 = uVar6 & (&DAT_005c5024)[iVar9 * 0xc];
        cVar5 = (char)uVar6;
      } while (iVar7 < (int)param_1);
    }
    if ((piVar12 == param_1) && (cVar5 != '\0')) {
      DAT_00766c70 = (int *)0x0;
    }
    else {
      if (piVar12 == (int *)0x0) {
        if ((_DAT_01c02594 != 0) && (DAT_006b0278 == 0)) {
          iVar7 = 0;
          if (0 < (int)param_1) {
            do {
              iVar9 = *param_2;
              iVar7 = iVar7 + 1;
              param_2 = param_2 + 1;
              *(uint **)(iVar7 * 4 + 0x767270) = &DAT_005c5014 + iVar9 * 0xc;
            } while (iVar7 < (int)param_1);
          }
          if (DAT_006b0280 != 0) {
            if ((int)param_1 < 4) {
              iVar7 = engine_prim_c_calculateTriangleWindingOrder_FUN_004f9a10
                                (DAT_00767274,DAT_00767278);
              if (iVar7 == 0) {
                return (int *)0x0;
              }
            }
            else {
              piVar4 = (int *)((int)param_1 + -2);
              iVar9 = 0;
              iVar7 = (int)piVar4 * 4;
              piVar13 = (int *)0x0;
              local_28 = piVar4;
              if (0 < iVar7) {
                do {
                  piVar4 = (int *)engine_prim_c_calculateTriangleWindingOrder_FUN_004f9a10
                                            (DAT_00767274,
                                             *(uint *)((int)&DAT_00767278 + iVar9));
                  if (piVar4 == (int *)0x0) {
                    piVar13 = (int *)((int)piVar13 + 1);
                  }
                  iVar9 = iVar9 + 4;
                } while (iVar9 < iVar7);
              }
              if (piVar13 == local_28) {
                return piVar4;
              }
            }
          }
          _DAT_01e52ef8 = _DAT_01e52ef8 + 1;
          piVar4 = (int *)engine_special_cpp_drawPolygon2_FUN_00532650(&DAT_00767274,param_1);
          return piVar4;
        }
        DAT_00766c70 = param_1;
        local_18 = (int *)0x0;
        if (0 < (int)param_1) {
          plVar10 = (longlong *)&DAT_00766c74;
          do {
            iVar7 = 0x30;
            plVar17 = (longlong *)(&DAT_005c5014 + *param_2 * 0xc);
            plVar15 = plVar10;
            if (((uint)plVar10 & 7) != 0) {
              plVar15 = (longlong *)((int)plVar10 + 4);
              plVar17 = (longlong *)(&DAT_005c5018 + *param_2 * 0xc);
              *(int *)plVar10 = (int)*(longlong *)(&DAT_005c5014 + *param_2 * 0xc);
              iVar7 = 0x2c;
            }
            while (7 < iVar7) {
              lVar1 = *plVar17;
              plVar17 = plVar17 + 1;
              *plVar15 = (longlong)ROUND((float10)lVar1);
              plVar15 = plVar15 + 1;
              iVar7 = iVar7 + -8;
            }
            if (iVar7 != 0 && -9 < iVar7 + -8) {
              *(int *)plVar15 = (int)*plVar17;
              if (4 < iVar7) {
                *(uint *)((int)plVar15 + 4) = *(uint *)((int)plVar17 + 4);
              }
            }
            param_2 = param_2 + 1;
            piVar13 = (int *)((int)local_18 + 1);
            plVar10 = plVar10 + 6;
            local_18 = piVar13;
          } while ((int)piVar13 < (int)param_1);
        }
      }
      else {
        iVar7 = 0;
        if (0 < (int)param_1) {
          do {
            iVar9 = *param_2;
            iVar7 = iVar7 + 1;
            param_2 = param_2 + 1;
            aiStack_d4[iVar7] = (int)(&DAT_005c5014 + iVar9 * 0xc);
          } while (iVar7 < (int)param_1);
        }
        DAT_00766c70 = param_1;
        local_48 = param_1;
        iVar7 = 0;
        DAT_00767b38 = 0;
        local_4c = (byte *)local_150;
        local_44 = (int *)0x0;
        if (0 < (int)param_1) {
          piVar13 = aiStack_d4;
          piVar12 = (int *)aiStack_d4[(int)param_1];
          do {
            iVar9 = DAT_00767b38;
            piVar13 = piVar13 + 1;
            piVar2 = (int *)*piVar13;
            bVar3 = piVar12[2] <= *piVar12;
            if (piVar2[2] <= *piVar2) {
              bVar3 = bVar3 | 2;
            }
            switch(bVar3) {
            case 0:
              iVar9 = iVar7 * 4;
              iVar7 = iVar7 + 1;
              *(int **)(local_4c + iVar9) = piVar12;
              break;
            case 1:
              if (0xb < DAT_00767b38) {
                PTR_01cc4800 = "..\\engine\\clipper.c";
                INT_01cc4804 = 0x5e;
                core_main_c_FUN_004c8440();
              }
              iVar14 = DAT_00767b38 * 0x30;
              DAT_00767b38 = DAT_00767b38 + 1;
              iVar9 = iVar7 * 4;
              iVar7 = iVar7 + 1;
              *(byte **)(local_4c + iVar9) = &DAT_007678f8 + iVar14;
              engine_clipper_c_interpolateVertexLeftClip_FUN_00431530(piVar2,piVar12);
              break;
            case 2:
              iVar14 = iVar7 + 1;
              *(int **)(local_4c + iVar7 * 4) = piVar12;
              if (0xb < iVar9) {
                PTR_01cc4800 = "..\\engine\\clipper.c";
                INT_01cc4804 = 0x5e;
                core_main_c_FUN_004c8440();
              }
              iVar9 = DAT_00767b38 * 0x30;
              DAT_00767b38 = DAT_00767b38 + 1;
              iVar7 = iVar7 + 2;
              *(byte **)(local_4c + iVar14 * 4) = &DAT_007678f8 + iVar9;
              engine_clipper_c_interpolateVertexLeftClip_FUN_00431530(piVar12,piVar2);
            }
            piVar4 = (int *)((int)local_44 + 1);
            local_44 = piVar4;
            piVar12 = piVar2;
          } while ((int)piVar4 < (int)local_48);
        }
        if (iVar7 < 3) {
          DAT_00766c70 = (int *)iVar7;
          return piVar4;
        }
        iVar9 = 0;
        local_40 = iVar7;
        local_3c = (int *)0x0;
        piVar13 = (int *)local_150[iVar7 + -1];
        DAT_00766c70 = (int *)iVar7;
        piVar12 = local_150;
        if (0 < iVar7) {
          do {
            local_24 = piVar12;
            piVar12 = (int *)*local_24;
            bVar3 = *piVar13 <= -piVar13[2];
            if (*piVar12 <= -piVar12[2]) {
              bVar3 = bVar3 | 2;
            }
            switch(bVar3) {
            case 0:
              iVar9 = iVar9 + 1;
              aiStack_d4[iVar9] = (int)piVar13;
              break;
            case 1:
              if (0xb < DAT_00767b38) {
                PTR_01cc4800 = "..\\engine\\clipper.c";
                INT_01cc4804 = 0x5e;
                core_main_c_FUN_004c8440();
              }
              iVar7 = DAT_00767b38 * 0x30;
              iVar9 = iVar9 + 1;
              DAT_00767b38 = DAT_00767b38 + 1;
              aiStack_d4[iVar9] = (int)(&DAT_007678f8 + iVar7);
              engine_clipper_c_interpolateVertexRightClip_FUN_00431630(piVar12,piVar13);
              break;
            case 2:
              aiStack_d4[iVar9 + 1] = (int)piVar13;
              if (0xb < DAT_00767b38) {
                PTR_01cc4800 = "..\\engine\\clipper.c";
                INT_01cc4804 = 0x5e;
                core_main_c_FUN_004c8440();
              }
              iVar7 = DAT_00767b38 * 0x30;
              iVar9 = iVar9 + 2;
              DAT_00767b38 = DAT_00767b38 + 1;
              aiStack_d4[iVar9] = (int)(&DAT_007678f8 + iVar7);
              engine_clipper_c_interpolateVertexRightClip_FUN_00431630(piVar13,piVar12);
            }
            piVar4 = (int *)((int)local_3c + 1);
            local_3c = piVar4;
            local_24 = local_24 + 1;
            piVar13 = piVar12;
            piVar12 = local_24;
          } while ((int)piVar4 < local_40);
        }
        if (iVar9 < 3) {
          DAT_00766c70 = (int *)iVar9;
          return piVar4;
        }
        piVar13 = aiStack_d4 + 1;
        iVar14 = 0;
        local_38 = iVar9;
        local_34 = 0;
        iVar7 = aiStack_d4[iVar9];
        iVar11 = iVar14;
        DAT_00766c70 = (int *)iVar9;
        piVar4 = piVar13;
        if (0 < iVar9) {
          do {
            local_20 = piVar4;
            iVar9 = *local_20;
            bVar3 = *(int *)(iVar7 + 8) <= *(int *)(iVar7 + 4);
            if (*(int *)(iVar9 + 8) <= *(int *)(iVar9 + 4)) {
              bVar3 = bVar3 | 2;
            }
            piVar13 = (int *)(uint)bVar3;
            iVar14 = iVar11;
            switch(piVar13) {
            case (int *)0x0:
              iVar14 = iVar11 + 1;
              local_150[iVar11] = iVar7;
              break;
            case (int *)0x1:
              if (0xb < DAT_00767b38) {
                PTR_01cc4800 = "..\\engine\\clipper.c";
                INT_01cc4804 = 0x5e;
                core_main_c_FUN_004c8440();
              }
              iVar8 = DAT_00767b38 * 0x30;
              iVar14 = iVar11 + 1;
              DAT_00767b38 = DAT_00767b38 + 1;
              local_150[iVar11] = (int)(&DAT_007678f8 + iVar8);
              piVar13 = (int *)engine_clipper_c_interpolateVertexBottomClip_FUN_00431730
                                         (iVar9,iVar7);
              break;
            case (int *)0x2:
              local_150[iVar11] = iVar7;
              if (0xb < DAT_00767b38) {
                PTR_01cc4800 = "..\\engine\\clipper.c";
                INT_01cc4804 = 0x5e;
                core_main_c_FUN_004c8440();
              }
              iVar8 = DAT_00767b38 * 0x30;
              iVar14 = iVar11 + 2;
              DAT_00767b38 = DAT_00767b38 + 1;
              local_150[iVar11 + 1] = (int)(&DAT_007678f8 + iVar8);
              piVar13 = (int *)engine_clipper_c_interpolateVertexBottomClip_FUN_00431730
                                         (iVar7,iVar9);
            }
            local_34 = local_34 + 1;
            local_20 = local_20 + 1;
            iVar11 = iVar14;
            iVar7 = iVar9;
            piVar4 = local_20;
          } while (local_34 < local_38);
        }
        if (iVar14 < 3) {
          DAT_00766c70 = (int *)iVar14;
          return piVar13;
        }
        piVar12 = (int *)0x0;
        local_30 = iVar14;
        local_2c = 0;
        iVar7 = local_150[iVar14 + -1];
        DAT_00766c70 = (int *)iVar14;
        piVar4 = local_150;
        if (0 < iVar14) {
          do {
            local_1c = piVar4;
            iVar9 = *local_1c;
            bVar3 = *(int *)(iVar7 + 4) <= -*(int *)(iVar7 + 8);
            if (*(int *)(iVar9 + 4) <= -*(int *)(iVar9 + 8)) {
              bVar3 = bVar3 | 2;
            }
            piVar13 = (int *)(uint)bVar3;
            switch(piVar13) {
            case (int *)0x0:
              piVar12 = (int *)((int)piVar12 + 1);
              aiStack_d4[(int)piVar12] = iVar7;
              break;
            case (int *)0x1:
              if (0xb < DAT_00767b38) {
                PTR_01cc4800 = "..\\engine\\clipper.c";
                INT_01cc4804 = 0x5e;
                core_main_c_FUN_004c8440();
              }
              iVar14 = DAT_00767b38 * 0x30;
              piVar12 = (int *)((int)piVar12 + 1);
              DAT_00767b38 = DAT_00767b38 + 1;
              aiStack_d4[(int)piVar12] = (int)(&DAT_007678f8 + iVar14);
              piVar13 = (int *)engine_clipper_c_interpolateVertexTopClip_FUN_00431830(iVar9,iVar7);
              break;
            case (int *)0x2:
              aiStack_d4[(int)piVar12 + 1] = iVar7;
              if (0xb < DAT_00767b38) {
                PTR_01cc4800 = "..\\engine\\clipper.c";
                INT_01cc4804 = 0x5e;
                core_main_c_FUN_004c8440();
              }
              iVar14 = DAT_00767b38 * 0x30;
              piVar12 = (int *)((int)piVar12 + 2);
              DAT_00767b38 = DAT_00767b38 + 1;
              aiStack_d4[(int)piVar12] = (int)(&DAT_007678f8 + iVar14);
              piVar13 = (int *)engine_clipper_c_interpolateVertexTopClip_FUN_00431830(iVar7,iVar9);
            }
            local_2c = local_2c + 1;
            local_1c = local_1c + 1;
            iVar7 = iVar9;
            piVar4 = local_1c;
          } while (local_2c < local_30);
        }
        if ((int)piVar12 < 3) {
          DAT_00766c70 = piVar12;
          return piVar13;
        }
        iVar7 = 0;
        DAT_00766c70 = piVar12;
        if (0 < (int)piVar12) {
          plVar10 = (longlong *)&DAT_00766c74;
          iVar9 = 0;
          do {
            plVar17 = *(longlong **)((int)aiStack_d4 + iVar9 + 4);
            iVar14 = 0x30;
            plVar15 = plVar17;
            plVar16 = plVar10;
            if (((uint)plVar10 & 7) != 0) {
              plVar16 = (longlong *)((int)plVar10 + (uint)bVar18 * -8 + 4);
              plVar15 = (longlong *)((int)plVar17 + (uint)bVar18 * -8 + 4);
              *(int *)plVar10 = (int)*plVar17;
              iVar14 = 0x2c;
            }
            while (7 < iVar14) {
              lVar1 = *plVar15;
              plVar15 = plVar15 + 1;
              *plVar16 = (longlong)ROUND((float10)lVar1);
              plVar16 = plVar16 + 1;
              iVar14 = iVar14 + -8;
            }
            if (iVar14 != 0 && -9 < iVar14 + -8) {
              *(int *)plVar16 = (int)*plVar15;
              if (4 < iVar14) {
                *(uint *)((int)plVar16 + (uint)bVar18 * -8 + 4) =
                     *(uint *)((int)plVar15 + (uint)bVar18 * -8 + 4);
              }
            }
            iVar9 = iVar9 + 4;
            iVar7 = iVar7 + 1;
            plVar10 = plVar10 + 6;
          } while (iVar7 < (int)DAT_00766c70);
        }
        piVar4 = DAT_00766c70;
        iVar7 = 0;
        if (DAT_005ad284 != 0) {
          if (0 < (int)DAT_00766c70) {
            piVar13 = (int *)0x0;
            do {
              if (iVar7 < piVar13[0x1d9b1f]) {
                iVar7 = piVar13[0x1d9b1f];
              }
              piVar13 = piVar13 + 0xc;
            } while ((int)piVar13 < (int)DAT_00766c70 * 0x30);
          }
          if (DAT_005ad284 <= iVar7) {
            plVar10 = (longlong *)&DAT_00766c74;
            DAT_007672f4 = DAT_00766c70;
            plVar17 = (longlong *)&DAT_007672f8;
            local_14 = 0;
            iVar7 = (int)DAT_00766c70 * 0x30;
            while (7 < iVar7) {
              lVar1 = *plVar10;
              plVar10 = plVar10 + 1;
              *plVar17 = (longlong)ROUND((float10)lVar1);
              plVar17 = plVar17 + 1;
              iVar7 = iVar7 + -8;
            }
            if (iVar7 != 0 && -9 < iVar7 + -8) {
              *(int *)plVar17 = (int)*plVar10;
              if (4 < iVar7) {
                *(uint *)((int)plVar17 + (uint)bVar18 * -8 + 4) =
                     *(uint *)((int)plVar10 + (uint)bVar18 * -8 + 4);
              }
            }
            DAT_00766c70 = (int *)0x0;
            piVar13 = piVar4;
            if (0 < (int)DAT_007672f4) {
              plVar10 = (longlong *)&DAT_007672f8;
              do {
                piVar4 = (int *)(local_14 + 1);
                if (piVar4 == DAT_007672f4) {
                  piVar4 = (int *)((uint)piVar4 ^ (uint)DAT_007672f4);
                }
                bVar3 = DAT_005ad284 <= (int)plVar10[1];
                if (DAT_005ad284 <= (int)(&DAT_00767300)[(int)piVar4 * 0xc]) {
                  bVar3 = bVar3 | 2;
                }
                piVar13 = (int *)(uint)bVar3;
                switch(piVar13) {
                case (int *)0x0:
                  plVar16 = (longlong *)(&DAT_00766c74 + (int)DAT_00766c70 * 0xc);
                  iVar7 = 0x30;
                  plVar17 = plVar10;
                  plVar15 = plVar16;
                  if (((uint)plVar16 & 7) != 0) {
                    plVar15 = (longlong *)
                              (&DAT_00766c78 + (int)DAT_00766c70 * 0xc + (uint)bVar18 * -2);
                    plVar17 = (longlong *)((int)plVar10 + (uint)bVar18 * -8 + 4);
                    *(int *)plVar16 = (int)*plVar10;
                    iVar7 = 0x2c;
                  }
                  while (7 < iVar7) {
                    lVar1 = *plVar17;
                    plVar17 = plVar17 + 1;
                    *plVar15 = (longlong)ROUND((float10)lVar1);
                    plVar15 = plVar15 + 1;
                    iVar7 = iVar7 + -8;
                  }
                  if (iVar7 != 0 && -9 < iVar7 + -8) {
                    *(int *)plVar15 = (int)*plVar17;
                    if (4 < iVar7) {
                      *(uint *)((int)plVar15 + (uint)bVar18 * -8 + 4) =
                           *(uint *)((int)plVar17 + (uint)bVar18 * -8 + 4);
                    }
                  }
                  DAT_00766c70 = (int *)((int)DAT_00766c70 + 1);
                  break;
                case (int *)0x1:
                  piVar13 = (int *)engine_clipper_c_interpolateVertexNearClip_FUN_00431930
                                             (&DAT_007672f8 + (int)piVar4 * 0xc,plVar10);
                  DAT_00766c70 = (int *)((int)DAT_00766c70 + 1);
                  break;
                case (int *)0x2:
                  plVar16 = (longlong *)(&DAT_00766c74 + (int)DAT_00766c70 * 0xc);
                  iVar7 = 0x30;
                  plVar17 = plVar10;
                  plVar15 = plVar16;
                  if (((uint)plVar16 & 7) != 0) {
                    plVar15 = (longlong *)
                              (&DAT_00766c78 + (int)DAT_00766c70 * 0xc + (uint)bVar18 * -2);
                    plVar17 = (longlong *)((int)plVar10 + (uint)bVar18 * -8 + 4);
                    *(int *)plVar16 = (int)*plVar10;
                    iVar7 = 0x2c;
                  }
                  while (7 < iVar7) {
                    lVar1 = *plVar17;
                    plVar17 = plVar17 + 1;
                    *plVar15 = (longlong)ROUND((float10)lVar1);
                    plVar15 = plVar15 + 1;
                    iVar7 = iVar7 + -8;
                  }
                  if (iVar7 != 0 && -9 < iVar7 + -8) {
                    *(int *)plVar15 = (int)*plVar17;
                    if (4 < iVar7) {
                      *(uint *)((int)plVar15 + (uint)bVar18 * -8 + 4) =
                           *(uint *)((int)plVar17 + (uint)bVar18 * -8 + 4);
                    }
                  }
                  DAT_00766c70 = (int *)((int)DAT_00766c70 + 1);
                  piVar13 = (int *)engine_clipper_c_interpolateVertexNearClip_FUN_00431930
                                             (plVar10,&DAT_007672f8 + (int)piVar4 * 0xc);
                  DAT_00766c70 = (int *)((int)DAT_00766c70 + 1);
                }
                local_14 = local_14 + 1;
                plVar10 = plVar10 + 6;
              } while (local_14 < (int)DAT_007672f4);
            }
          }
        }
        if ((int)DAT_00766c70 < 3) {
          return piVar13;
        }
        iVar7 = 0;
        if (0 < (int)DAT_00766c70) {
          piVar13 = &DAT_00766c74;
          do {
            iVar9 = piVar13[2];
            if (iVar9 == 0) {
              piVar13[2] = 1;
              *piVar13 = 0;
              piVar13[1] = 0;
            }
            else {
              iVar14 = *piVar13;
              iVar11 = iVar9;
              if ((iVar9 < iVar14) || (iVar11 = -iVar9, -iVar14 != iVar9 && iVar14 <= iVar11)) {
                *piVar13 = iVar11;
              }
              else {
                iVar14 = piVar13[1];
                if (piVar13[2] < iVar14) {
                  piVar13[1] = piVar13[2];
                }
                else if (-iVar14 != iVar9 && iVar14 <= iVar11) {
                  piVar13[1] = iVar11;
                }
              }
            }
            iVar7 = iVar7 + 1;
            piVar13 = piVar13 + 0xc;
          } while (iVar7 < (int)DAT_00766c70);
        }
      }
      if (2 < (int)DAT_00766c70) {
        piVar4 = (int *)engine_prim_c_FUN_004f9dd0(&DAT_00766c74);
        return piVar4;
      }
    }
  }
  return piVar13;
}
