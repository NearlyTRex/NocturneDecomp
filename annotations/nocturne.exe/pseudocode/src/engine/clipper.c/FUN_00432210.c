// Name: engine_clipper.c_FUN_00432210
// Address: 00432210
// Address Range: [[00432210, 00432b41]]
// Convention: unknown
// Signature: undefined4 engine_clipper_c_FUN_00432210(uint param_1,int *param_2)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x00432ab1) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint engine_clipper_c_FUN_00432210(uint param_1,int *param_2)

{
  longlong lVar1;
  longlong lVar2;
  int *piVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  char cVar8;
  int iVar10;
  longlong *plVar11;
  int *piVar12;
  SRenderVertex *v1;
  uint uVar13;
  int iVar14;
  uint uVar15;
  longlong *plVar16;
  SRenderVertex *pSVar17;
  longlong *plVar18;
  longlong *plVar19;
  bool bVar20;
  byte bVar21;
  int local_14c [31];
  int aiStack_d0 [33];
  byte *local_4c;
  uint local_48;
  int local_44;
  uint local_40;
  int local_3c;
  uint local_38;
  int local_34;
  uint local_30;
  int local_2c;
  int local_28;
  uint *local_24;
  int *local_20;
  int *local_1c;
  int local_18;
  int local_14;
  uint uVar9;
  
  bVar21 = 0;
  uVar9 = 0xffffffff;
  cVar8 = -1;
  iVar5 = 0;
  uVar13 = 0;
  piVar7 = param_2;
  if (0 < (int)param_1) {
    do {
      if (((&DAT_005c5024)[*piVar7 * 0xc] & 0x80000000) != 0) {
        uVar13 = uVar13 + 1;
      }
      iVar5 = iVar5 + 1;
      uVar9 = uVar9 & (&DAT_005c5024)[*piVar7 * 0xc];
      cVar8 = (char)uVar9;
      piVar7 = piVar7 + 1;
    } while (iVar5 < (int)param_1);
  }
  if ((uVar13 == param_1) && (cVar8 != '\0')) {
    DAT_00766c70 = uVar13 ^ param_1;
  }
  else {
    if (uVar13 == 0) {
      if ((_DAT_01c02594 == 0) || (DAT_006b0278 != 0)) {
        DAT_00766c70 = param_1;
        local_18 = 0;
        if (0 < (int)param_1) {
          plVar11 = (longlong *)&DAT_00766c74;
          do {
            iVar5 = 0x30;
            plVar19 = (longlong *)(&DAT_005c5014 + *param_2 * 0xc);
            plVar16 = plVar11;
            if (((uint)plVar11 & 7) != 0) {
              plVar16 = (longlong *)((int)plVar11 + 4);
              plVar19 = (longlong *)(&DAT_005c5018 + *param_2 * 0xc);
              *(int *)plVar11 = (int)*(longlong *)(&DAT_005c5014 + *param_2 * 0xc);
              iVar5 = 0x2c;
            }
            while (7 < iVar5) {
              lVar1 = *plVar19;
              plVar19 = plVar19 + 1;
              *plVar16 = (longlong)ROUND((float10)lVar1);
              plVar16 = plVar16 + 1;
              iVar5 = iVar5 + -8;
            }
            if (iVar5 != 0 && -9 < iVar5 + -8) {
              *(int *)plVar16 = (int)*plVar19;
              if (4 < iVar5) {
                *(uint *)((int)plVar16 + 4) = *(uint *)((int)plVar19 + 4);
              }
            }
            param_2 = param_2 + 1;
            local_18 = local_18 + 1;
            plVar11 = plVar11 + 6;
          } while (local_18 < (int)param_1);
        }
        return 0;
      }
      iVar5 = 0;
      if (0 < (int)param_1) {
        do {
          iVar10 = *param_2;
          iVar5 = iVar5 + 1;
          param_2 = param_2 + 1;
          *(uint **)(iVar5 * 4 + 0x767270) = &DAT_005c5014 + iVar10 * 0xc;
        } while (iVar5 < (int)param_1);
      }
      if (DAT_006b0280 != 0) {
        if ((int)param_1 < 4) {
          iVar5 = engine_prim_c_calculateTriangleWindingOrder_FUN_004f9a10
                            (DAT_00767274,DAT_00767278,DAT_0076727c);
          bVar20 = iVar5 == 0;
        }
        else {
          local_28 = param_1 - 2;
          iVar10 = 0;
          iVar5 = local_28 * 4;
          iVar14 = 0;
          if (0 < iVar5) {
            do {
              iVar6 = engine_prim_c_calculateTriangleWindingOrder_FUN_004f9a10
                                (DAT_00767274,*(SRenderVertex **)((int)&DAT_00767278 + iVar10),
                                 *(SRenderVertex **)((int)&DAT_0076727c + iVar10));
              if (iVar6 == 0) {
                iVar14 = iVar14 + 1;
              }
              iVar10 = iVar10 + 4;
            } while (iVar10 < iVar5);
          }
          bVar20 = iVar14 == local_28;
        }
        if (bVar20) {
          return 1;
        }
      }
      _DAT_01e52ef8 = _DAT_01e52ef8 + 1;
      engine_special_cpp_drawPolygon2_FUN_00532650(&DAT_00767274,param_1,_DAT_01c039a0);
      return 1;
    }
    iVar5 = 0;
    if (0 < (int)param_1) {
      do {
        iVar10 = *param_2;
        iVar5 = iVar5 + 1;
        param_2 = param_2 + 1;
        aiStack_d0[iVar5] = (int)(&DAT_005c5014 + iVar10 * 0xc);
      } while (iVar5 < (int)param_1);
    }
    DAT_00766c70 = param_1;
    local_48 = param_1;
    uVar9 = 0;
    DAT_00767b38 = 0;
    local_4c = (byte *)local_14c;
    local_44 = 0;
    if (0 < (int)param_1) {
      piVar7 = aiStack_d0;
      piVar12 = (int *)aiStack_d0[param_1];
      do {
        iVar5 = DAT_00767b38;
        piVar7 = piVar7 + 1;
        piVar3 = (int *)*piVar7;
        bVar4 = piVar12[2] <= *piVar12;
        if (piVar3[2] <= *piVar3) {
          bVar4 = bVar4 | 2;
        }
        switch(bVar4) {
        case 0:
          iVar5 = uVar9 * 4;
          uVar9 = uVar9 + 1;
          *(int **)(local_4c + iVar5) = piVar12;
          break;
        case 1:
          if (0xb < DAT_00767b38) {
            PTR_01cc4800 = "..\\engine\\clipper.c";
            INT_01cc4804 = 0x5e;
            core_main_c_FUN_004c8440();
          }
          iVar10 = DAT_00767b38 * 0x30;
          DAT_00767b38 = DAT_00767b38 + 1;
          iVar5 = uVar9 * 4;
          uVar9 = uVar9 + 1;
          *(byte **)(local_4c + iVar5) = &DAT_007678f8 + iVar10;
          engine_clipper_c_interpolateVertexLeftClip_FUN_00431530(piVar3,piVar12);
          break;
        case 2:
          iVar10 = uVar9 + 1;
          *(int **)(local_4c + uVar9 * 4) = piVar12;
          if (0xb < iVar5) {
            PTR_01cc4800 = "..\\engine\\clipper.c";
            INT_01cc4804 = 0x5e;
            core_main_c_FUN_004c8440();
          }
          iVar5 = DAT_00767b38 * 0x30;
          DAT_00767b38 = DAT_00767b38 + 1;
          uVar9 = uVar9 + 2;
          *(byte **)(local_4c + iVar10 * 4) = &DAT_007678f8 + iVar5;
          engine_clipper_c_interpolateVertexLeftClip_FUN_00431530(piVar12,piVar3);
        }
        local_44 = local_44 + 1;
        piVar12 = piVar3;
      } while (local_44 < (int)local_48);
    }
    DAT_00766c70 = uVar9;
    if (2 < (int)uVar9) {
      uVar13 = 0;
      local_40 = uVar9;
      local_3c = 0;
      piVar7 = (int *)local_14c[uVar9 - 1];
      piVar12 = local_14c;
      if (0 < (int)uVar9) {
        do {
          local_24 = piVar12;
          piVar12 = (int *)*local_24;
          bVar4 = *piVar7 <= -piVar7[2];
          if (*piVar12 <= -piVar12[2]) {
            bVar4 = bVar4 | 2;
          }
          switch(bVar4) {
          case 0:
            uVar13 = uVar13 + 1;
            aiStack_d0[uVar13] = (int)piVar7;
            break;
          case 1:
            if (0xb < DAT_00767b38) {
              PTR_01cc4800 = "..\\engine\\clipper.c";
              INT_01cc4804 = 0x5e;
              core_main_c_FUN_004c8440();
            }
            iVar5 = DAT_00767b38 * 0x30;
            uVar13 = uVar13 + 1;
            DAT_00767b38 = DAT_00767b38 + 1;
            aiStack_d0[uVar13] = (int)(&DAT_007678f8 + iVar5);
            engine_clipper_c_interpolateVertexRightClip_FUN_00431630(piVar12,piVar7);
            break;
          case 2:
            aiStack_d0[uVar13 + 1] = (int)piVar7;
            if (0xb < DAT_00767b38) {
              PTR_01cc4800 = "..\\engine\\clipper.c";
              INT_01cc4804 = 0x5e;
              core_main_c_FUN_004c8440();
            }
            iVar5 = DAT_00767b38 * 0x30;
            uVar13 = uVar13 + 2;
            DAT_00767b38 = DAT_00767b38 + 1;
            aiStack_d0[uVar13] = (int)(&DAT_007678f8 + iVar5);
            engine_clipper_c_interpolateVertexRightClip_FUN_00431630(piVar7,piVar12);
          }
          local_3c = local_3c + 1;
          local_24 = local_24 + 1;
          piVar7 = piVar12;
          piVar12 = local_24;
        } while (local_3c < (int)local_40);
      }
      DAT_00766c70 = uVar13;
      if (2 < (int)uVar13) {
        uVar9 = 0;
        local_38 = uVar13;
        local_34 = 0;
        iVar5 = aiStack_d0[uVar13];
        uVar15 = uVar9;
        piVar7 = aiStack_d0 + 1;
        if (0 < (int)uVar13) {
          do {
            local_20 = piVar7;
            iVar10 = *local_20;
            bVar4 = *(int *)(iVar5 + 8) <= *(int *)(iVar5 + 4);
            if (*(int *)(iVar10 + 8) <= *(int *)(iVar10 + 4)) {
              bVar4 = bVar4 | 2;
            }
            uVar9 = uVar15;
            switch(bVar4) {
            case 0:
              uVar9 = uVar15 + 1;
              local_14c[uVar15] = iVar5;
              break;
            case 1:
              if (0xb < DAT_00767b38) {
                PTR_01cc4800 = "..\\engine\\clipper.c";
                INT_01cc4804 = 0x5e;
                core_main_c_FUN_004c8440();
              }
              iVar14 = DAT_00767b38 * 0x30;
              uVar9 = uVar15 + 1;
              DAT_00767b38 = DAT_00767b38 + 1;
              local_14c[uVar15] = (int)(&DAT_007678f8 + iVar14);
              engine_clipper_c_interpolateVertexBottomClip_FUN_00431730(iVar10,iVar5);
              break;
            case 2:
              local_14c[uVar15] = iVar5;
              if (0xb < DAT_00767b38) {
                PTR_01cc4800 = "..\\engine\\clipper.c";
                INT_01cc4804 = 0x5e;
                core_main_c_FUN_004c8440();
              }
              iVar14 = DAT_00767b38 * 0x30;
              uVar9 = uVar15 + 2;
              DAT_00767b38 = DAT_00767b38 + 1;
              local_14c[uVar15 + 1] = (int)(&DAT_007678f8 + iVar14);
              engine_clipper_c_interpolateVertexBottomClip_FUN_00431730(iVar5,iVar10);
            }
            local_34 = local_34 + 1;
            local_20 = local_20 + 1;
            uVar15 = uVar9;
            iVar5 = iVar10;
            piVar7 = local_20;
          } while (local_34 < (int)local_38);
        }
        DAT_00766c70 = uVar9;
        if (2 < (int)uVar9) {
          uVar13 = 0;
          local_30 = uVar9;
          local_2c = 0;
          iVar5 = local_14c[uVar9 - 1];
          piVar7 = local_14c;
          if (0 < (int)uVar9) {
            do {
              local_1c = piVar7;
              iVar10 = *local_1c;
              bVar4 = *(int *)(iVar5 + 4) <= -*(int *)(iVar5 + 8);
              if (*(int *)(iVar10 + 4) <= -*(int *)(iVar10 + 8)) {
                bVar4 = bVar4 | 2;
              }
              switch(bVar4) {
              case 0:
                uVar13 = uVar13 + 1;
                aiStack_d0[uVar13] = iVar5;
                break;
              case 1:
                if (0xb < DAT_00767b38) {
                  PTR_01cc4800 = "..\\engine\\clipper.c";
                  INT_01cc4804 = 0x5e;
                  core_main_c_FUN_004c8440();
                }
                iVar14 = DAT_00767b38 * 0x30;
                uVar13 = uVar13 + 1;
                DAT_00767b38 = DAT_00767b38 + 1;
                aiStack_d0[uVar13] = (int)(&DAT_007678f8 + iVar14);
                engine_clipper_c_interpolateVertexTopClip_FUN_00431830(iVar10,iVar5);
                break;
              case 2:
                aiStack_d0[uVar13 + 1] = iVar5;
                if (0xb < DAT_00767b38) {
                  PTR_01cc4800 = "..\\engine\\clipper.c";
                  INT_01cc4804 = 0x5e;
                  core_main_c_FUN_004c8440();
                }
                iVar14 = DAT_00767b38 * 0x30;
                uVar13 = uVar13 + 2;
                DAT_00767b38 = DAT_00767b38 + 1;
                aiStack_d0[uVar13] = (int)(&DAT_007678f8 + iVar14);
                engine_clipper_c_interpolateVertexTopClip_FUN_00431830(iVar5,iVar10);
              }
              local_2c = local_2c + 1;
              local_1c = local_1c + 1;
              iVar5 = iVar10;
              piVar7 = local_1c;
            } while (local_2c < (int)local_30);
          }
          DAT_00766c70 = uVar13;
          if (2 < (int)uVar13) {
            iVar5 = 0;
            if (0 < (int)uVar13) {
              plVar11 = (longlong *)&DAT_00766c74;
              iVar10 = 0;
              do {
                plVar19 = *(longlong **)((int)aiStack_d0 + iVar10 + 4);
                iVar14 = 0x30;
                plVar16 = plVar19;
                plVar18 = plVar11;
                if (((uint)plVar11 & 7) != 0) {
                  plVar18 = (longlong *)((int)plVar11 + (uint)bVar21 * -8 + 4);
                  plVar16 = (longlong *)((int)plVar19 + (uint)bVar21 * -8 + 4);
                  *(int *)plVar11 = (int)*plVar19;
                  iVar14 = 0x2c;
                }
                while (7 < iVar14) {
                  lVar1 = *plVar16;
                  plVar16 = plVar16 + 1;
                  *plVar18 = (longlong)ROUND((float10)lVar1);
                  plVar18 = plVar18 + 1;
                  iVar14 = iVar14 + -8;
                }
                if (iVar14 != 0 && -9 < iVar14 + -8) {
                  *(int *)plVar18 = (int)*plVar16;
                  if (4 < iVar14) {
                    *(uint *)((int)plVar18 + (uint)bVar21 * -8 + 4) =
                         *(uint *)((int)plVar16 + (uint)bVar21 * -8 + 4);
                  }
                }
                iVar10 = iVar10 + 4;
                iVar5 = iVar5 + 1;
                plVar11 = plVar11 + 6;
              } while (iVar5 < (int)DAT_00766c70);
            }
            iVar5 = 0;
            if (DAT_005ad284 != 0) {
              if (0 < (int)DAT_00766c70) {
                iVar10 = 0;
                do {
                  if (iVar5 < *(int *)((int)&DAT_00766c7c + iVar10)) {
                    iVar5 = *(int *)((int)&DAT_00766c7c + iVar10);
                  }
                  iVar10 = iVar10 + 0x30;
                } while (iVar10 < (int)(DAT_00766c70 * 0x30));
              }
              if (DAT_005ad284 <= iVar5) {
                DAT_007672f4 = DAT_00766c70;
                plVar11 = (longlong *)&DAT_00766c74;
                plVar19 = (longlong *)&DAT_007672f8;
                iVar5 = DAT_00766c70 * 0x30;
                while (7 < iVar5) {
                  lVar1 = *plVar11;
                  plVar11 = plVar11 + 1;
                  *plVar19 = (longlong)ROUND((float10)lVar1);
                  plVar19 = plVar19 + 1;
                  iVar5 = iVar5 + -8;
                }
                if (iVar5 != 0 && -9 < iVar5 + -8) {
                  *(int *)plVar19 = (int)*plVar11;
                  if (4 < iVar5) {
                    *(uint *)((int)plVar19 + (uint)bVar21 * -8 + 4) =
                         *(uint *)((int)plVar11 + (uint)bVar21 * -8 + 4);
                  }
                }
                DAT_00766c70 = 0;
                local_14 = 0;
                if (0 < (int)DAT_007672f4) {
                  v1 = (SRenderVertex *)&DAT_007672f8;
                  do {
                    uVar9 = local_14 + 1;
                    if (uVar9 == DAT_007672f4) {
                      uVar9 = uVar9 ^ DAT_007672f4;
                    }
                    bVar4 = DAT_005ad284 <= (v1->projected_vertex).transformed_z;
                    if (DAT_005ad284 <= (int)(&DAT_00767300)[uVar9 * 0xc]) {
                      bVar4 = bVar4 | 2;
                    }
                    switch(bVar4) {
                    case 0:
                      plVar19 = (longlong *)(&DAT_00766c74 + DAT_00766c70 * 0xc);
                      iVar5 = 0x30;
                      pSVar17 = v1;
                      plVar11 = plVar19;
                      if (((uint)plVar19 & 7) != 0) {
                        plVar11 = (longlong *)
                                  (&DAT_00766c78 + DAT_00766c70 * 0xc + (uint)bVar21 * -2);
                        pSVar17 = (SRenderVertex *)((int)v1 + (uint)bVar21 * -8 + 4);
                        *(int *)plVar19 = (v1->projected_vertex).transformed_x;
                        iVar5 = 0x2c;
                      }
                      while (7 < iVar5) {
                        lVar2._0_4_ = (pSVar17->projected_vertex).transformed_x;
                        lVar2._4_4_ = (pSVar17->projected_vertex).transformed_y;
                        pSVar17 = (SRenderVertex *)&(pSVar17->projected_vertex).transformed_z;
                        *plVar11 = (longlong)ROUND((float10)lVar2);
                        plVar11 = plVar11 + 1;
                        iVar5 = iVar5 + -8;
                      }
                      if (iVar5 != 0 && -9 < iVar5 + -8) {
                        *(int *)plVar11 = (pSVar17->projected_vertex).transformed_x;
                        if (4 < iVar5) {
                          *(uint *)((int)plVar11 + (uint)bVar21 * -8 + 4) =
                               *(uint *)((int)pSVar17 + (uint)bVar21 * -8 + 4);
                        }
                      }
                      DAT_00766c70 = DAT_00766c70 + 1;
                      break;
                    case 1:
                      engine_clipper_c_interpolateVertexNearClip_FUN_00431930
                                ((SRenderVertex *)(&DAT_007672f8 + uVar9 * 0xc),v1,
                                 (SRenderVertex *)(&DAT_00766c74 + DAT_00766c70 * 0xc));
                      DAT_00766c70 = DAT_00766c70 + 1;
                      break;
                    case 2:
                      plVar19 = (longlong *)(&DAT_00766c74 + DAT_00766c70 * 0xc);
                      iVar5 = 0x30;
                      pSVar17 = v1;
                      plVar11 = plVar19;
                      if (((uint)plVar19 & 7) != 0) {
                        plVar11 = (longlong *)
                                  (&DAT_00766c78 + DAT_00766c70 * 0xc + (uint)bVar21 * -2);
                        pSVar17 = (SRenderVertex *)((int)v1 + (uint)bVar21 * -8 + 4);
                        *(int *)plVar19 = (v1->projected_vertex).transformed_x;
                        iVar5 = 0x2c;
                      }
                      while (7 < iVar5) {
                        lVar1._0_4_ = (pSVar17->projected_vertex).transformed_x;
                        lVar1._4_4_ = (pSVar17->projected_vertex).transformed_y;
                        pSVar17 = (SRenderVertex *)&(pSVar17->projected_vertex).transformed_z;
                        *plVar11 = (longlong)ROUND((float10)lVar1);
                        plVar11 = plVar11 + 1;
                        iVar5 = iVar5 + -8;
                      }
                      if (iVar5 != 0 && -9 < iVar5 + -8) {
                        *(int *)plVar11 = (pSVar17->projected_vertex).transformed_x;
                        if (4 < iVar5) {
                          *(uint *)((int)plVar11 + (uint)bVar21 * -8 + 4) =
                               *(uint *)((int)pSVar17 + (uint)bVar21 * -8 + 4);
                        }
                      }
                      DAT_00766c70 = DAT_00766c70 + 1;
                      engine_clipper_c_interpolateVertexNearClip_FUN_00431930
                                (v1,(SRenderVertex *)(&DAT_007672f8 + uVar9 * 0xc),
                                 (SRenderVertex *)(&DAT_00766c74 + DAT_00766c70 * 0xc));
                      DAT_00766c70 = DAT_00766c70 + 1;
                    }
                    local_14 = local_14 + 1;
                    v1 = v1 + 1;
                  } while (local_14 < (int)DAT_007672f4);
                }
              }
            }
            if (2 < (int)DAT_00766c70) {
              iVar5 = 0;
              if (0 < (int)DAT_00766c70) {
                piVar7 = &DAT_00766c74;
                do {
                  iVar10 = piVar7[2];
                  if (iVar10 == 0) {
                    piVar7[2] = 1;
                    *piVar7 = 0;
                    iVar6 = 0;
LAB_0043274e:
                    piVar7[1] = iVar6;
                  }
                  else {
                    iVar14 = *piVar7;
                    if (iVar10 < iVar14) {
                      *piVar7 = iVar10;
                    }
                    else {
                      iVar6 = -iVar10;
                      if (-iVar14 == iVar10 || iVar6 < iVar14) {
                        iVar14 = piVar7[1];
                        if (piVar7[2] < iVar14) {
                          piVar7[1] = piVar7[2];
                        }
                        else if (-iVar14 != iVar10 && iVar14 <= iVar6) goto LAB_0043274e;
                      }
                      else {
                        *piVar7 = iVar6;
                      }
                    }
                  }
                  iVar5 = iVar5 + 1;
                  piVar7 = piVar7 + 0xc;
                } while (iVar5 < (int)DAT_00766c70);
              }
              return 0;
            }
          }
        }
      }
    }
  }
  return 1;
}
