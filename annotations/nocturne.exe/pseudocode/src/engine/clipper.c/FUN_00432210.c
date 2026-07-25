// Name: FUN_00432210
// Address: 00432210
// Address Range: [[00432210, 00432b41]]
// Convention: unknown
// Signature: undefined4 FUN_00432210(uint param_1,int *param_2)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x00432ab1) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00432210(uint param_1,int *param_2)

{
  longlong lVar1;
  int *piVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  char cVar7;
  int iVar9;
  longlong *plVar10;
  int *piVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  longlong *plVar15;
  longlong *plVar16;
  longlong *plVar17;
  bool bVar18;
  byte bVar19;
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
  uint uVar8;
  
  bVar19 = 0;
  uVar8 = 0xffffffff;
  cVar7 = -1;
  iVar4 = 0;
  uVar12 = 0;
  piVar6 = param_2;
  if (0 < (int)param_1) {
    do {
      if (((&DAT_005c5024)[*piVar6 * 0xc] & 0x80000000) != 0) {
        uVar12 = uVar12 + 1;
      }
      iVar4 = iVar4 + 1;
      uVar8 = uVar8 & (&DAT_005c5024)[*piVar6 * 0xc];
      cVar7 = (char)uVar8;
      piVar6 = piVar6 + 1;
    } while (iVar4 < (int)param_1);
  }
  if ((uVar12 == param_1) && (cVar7 != '\0')) {
    DAT_00766c70 = uVar12 ^ param_1;
  }
  else {
    if (uVar12 == 0) {
      if ((_DAT_01c02594 == 0) || (DAT_006b0278 != 0)) {
        DAT_00766c70 = param_1;
        local_18 = 0;
        if (0 < (int)param_1) {
          plVar10 = (longlong *)&DAT_00766c74;
          do {
            iVar4 = 0x30;
            plVar17 = (longlong *)(&DAT_005c5014 + *param_2 * 0xc);
            plVar15 = plVar10;
            if (((uint)plVar10 & 7) != 0) {
              plVar15 = (longlong *)((int)plVar10 + 4);
              plVar17 = (longlong *)(&DAT_005c5018 + *param_2 * 0xc);
              *(int *)plVar10 = (int)*(longlong *)(&DAT_005c5014 + *param_2 * 0xc);
              iVar4 = 0x2c;
            }
            while (7 < iVar4) {
              lVar1 = *plVar17;
              plVar17 = plVar17 + 1;
              *plVar15 = (longlong)ROUND((float10)lVar1);
              plVar15 = plVar15 + 1;
              iVar4 = iVar4 + -8;
            }
            if (iVar4 != 0 && -9 < iVar4 + -8) {
              *(int *)plVar15 = (int)*plVar17;
              if (4 < iVar4) {
                *(uint *)((int)plVar15 + 4) = *(uint *)((int)plVar17 + 4);
              }
            }
            param_2 = param_2 + 1;
            local_18 = local_18 + 1;
            plVar10 = plVar10 + 6;
          } while (local_18 < (int)param_1);
        }
        return 0;
      }
      iVar4 = 0;
      if (0 < (int)param_1) {
        do {
          iVar9 = *param_2;
          iVar4 = iVar4 + 1;
          param_2 = param_2 + 1;
          *(uint **)(iVar4 * 4 + 0x767270) = &DAT_005c5014 + iVar9 * 0xc;
        } while (iVar4 < (int)param_1);
      }
      if (DAT_006b0280 != 0) {
        if ((int)param_1 < 4) {
          iVar4 = engine_prim_c_calculateTriangleWindingOrder_FUN_004f9a10
                            (DAT_00767274,DAT_00767278);
          bVar18 = iVar4 == 0;
        }
        else {
          local_28 = param_1 - 2;
          iVar9 = 0;
          iVar4 = local_28 * 4;
          iVar13 = 0;
          if (0 < iVar4) {
            do {
              iVar5 = engine_prim_c_calculateTriangleWindingOrder_FUN_004f9a10
                                (DAT_00767274,*(uint *)((int)&DAT_00767278 + iVar9));
              if (iVar5 == 0) {
                iVar13 = iVar13 + 1;
              }
              iVar9 = iVar9 + 4;
            } while (iVar9 < iVar4);
          }
          bVar18 = iVar13 == local_28;
        }
        if (bVar18) {
          return 1;
        }
      }
      _DAT_01e52ef8 = _DAT_01e52ef8 + 1;
      wincore_windll_cpp_drawPolygon2_FUN_00532650(&DAT_00767274,param_1);
      return 1;
    }
    iVar4 = 0;
    if (0 < (int)param_1) {
      do {
        iVar9 = *param_2;
        iVar4 = iVar4 + 1;
        param_2 = param_2 + 1;
        aiStack_d0[iVar4] = (int)(&DAT_005c5014 + iVar9 * 0xc);
      } while (iVar4 < (int)param_1);
    }
    DAT_00766c70 = param_1;
    local_48 = param_1;
    uVar8 = 0;
    DAT_00767b38 = 0;
    local_4c = (byte *)local_14c;
    local_44 = 0;
    if (0 < (int)param_1) {
      piVar6 = aiStack_d0;
      piVar11 = (int *)aiStack_d0[param_1];
      do {
        iVar4 = DAT_00767b38;
        piVar6 = piVar6 + 1;
        piVar2 = (int *)*piVar6;
        bVar3 = piVar11[2] <= *piVar11;
        if (piVar2[2] <= *piVar2) {
          bVar3 = bVar3 | 2;
        }
        switch(bVar3) {
        case 0:
          iVar4 = uVar8 * 4;
          uVar8 = uVar8 + 1;
          *(int **)(local_4c + iVar4) = piVar11;
          break;
        case 1:
          if (0xb < DAT_00767b38) {
            _DAT_01cc4800 = "..\\engine\\clipper.c";
            _DAT_01cc4804 = 0x5e;
            FUN_004c8440();
          }
          iVar9 = DAT_00767b38 * 0x30;
          DAT_00767b38 = DAT_00767b38 + 1;
          iVar4 = uVar8 * 4;
          uVar8 = uVar8 + 1;
          *(byte **)(local_4c + iVar4) = &DAT_007678f8 + iVar9;
          engine_clipper_c_interpolateVertexLeftClip_FUN_00431530(piVar2,piVar11);
          break;
        case 2:
          iVar9 = uVar8 + 1;
          *(int **)(local_4c + uVar8 * 4) = piVar11;
          if (0xb < iVar4) {
            _DAT_01cc4800 = "..\\engine\\clipper.c";
            _DAT_01cc4804 = 0x5e;
            FUN_004c8440();
          }
          iVar4 = DAT_00767b38 * 0x30;
          DAT_00767b38 = DAT_00767b38 + 1;
          uVar8 = uVar8 + 2;
          *(byte **)(local_4c + iVar9 * 4) = &DAT_007678f8 + iVar4;
          engine_clipper_c_interpolateVertexLeftClip_FUN_00431530(piVar11,piVar2);
        }
        local_44 = local_44 + 1;
        piVar11 = piVar2;
      } while (local_44 < (int)local_48);
    }
    DAT_00766c70 = uVar8;
    if (2 < (int)uVar8) {
      uVar12 = 0;
      local_40 = uVar8;
      local_3c = 0;
      piVar6 = (int *)local_14c[uVar8 - 1];
      piVar11 = local_14c;
      if (0 < (int)uVar8) {
        do {
          local_24 = piVar11;
          piVar11 = (int *)*local_24;
          bVar3 = *piVar6 <= -piVar6[2];
          if (*piVar11 <= -piVar11[2]) {
            bVar3 = bVar3 | 2;
          }
          switch(bVar3) {
          case 0:
            uVar12 = uVar12 + 1;
            aiStack_d0[uVar12] = (int)piVar6;
            break;
          case 1:
            if (0xb < DAT_00767b38) {
              _DAT_01cc4800 = "..\\engine\\clipper.c";
              _DAT_01cc4804 = 0x5e;
              FUN_004c8440();
            }
            iVar4 = DAT_00767b38 * 0x30;
            uVar12 = uVar12 + 1;
            DAT_00767b38 = DAT_00767b38 + 1;
            aiStack_d0[uVar12] = (int)(&DAT_007678f8 + iVar4);
            engine_clipper_c_interpolateVertexRightClip_FUN_00431630(piVar11,piVar6);
            break;
          case 2:
            aiStack_d0[uVar12 + 1] = (int)piVar6;
            if (0xb < DAT_00767b38) {
              _DAT_01cc4800 = "..\\engine\\clipper.c";
              _DAT_01cc4804 = 0x5e;
              FUN_004c8440();
            }
            iVar4 = DAT_00767b38 * 0x30;
            uVar12 = uVar12 + 2;
            DAT_00767b38 = DAT_00767b38 + 1;
            aiStack_d0[uVar12] = (int)(&DAT_007678f8 + iVar4);
            engine_clipper_c_interpolateVertexRightClip_FUN_00431630(piVar6,piVar11);
          }
          local_3c = local_3c + 1;
          local_24 = local_24 + 1;
          piVar6 = piVar11;
          piVar11 = local_24;
        } while (local_3c < (int)local_40);
      }
      DAT_00766c70 = uVar12;
      if (2 < (int)uVar12) {
        uVar8 = 0;
        local_38 = uVar12;
        local_34 = 0;
        iVar4 = aiStack_d0[uVar12];
        uVar14 = uVar8;
        piVar6 = aiStack_d0 + 1;
        if (0 < (int)uVar12) {
          do {
            local_20 = piVar6;
            iVar9 = *local_20;
            bVar3 = *(int *)(iVar4 + 8) <= *(int *)(iVar4 + 4);
            if (*(int *)(iVar9 + 8) <= *(int *)(iVar9 + 4)) {
              bVar3 = bVar3 | 2;
            }
            uVar8 = uVar14;
            switch(bVar3) {
            case 0:
              uVar8 = uVar14 + 1;
              local_14c[uVar14] = iVar4;
              break;
            case 1:
              if (0xb < DAT_00767b38) {
                _DAT_01cc4800 = "..\\engine\\clipper.c";
                _DAT_01cc4804 = 0x5e;
                FUN_004c8440();
              }
              iVar13 = DAT_00767b38 * 0x30;
              uVar8 = uVar14 + 1;
              DAT_00767b38 = DAT_00767b38 + 1;
              local_14c[uVar14] = (int)(&DAT_007678f8 + iVar13);
              engine_clipper_c_interpolateVertexBottomClip_FUN_00431730(iVar9,iVar4);
              break;
            case 2:
              local_14c[uVar14] = iVar4;
              if (0xb < DAT_00767b38) {
                _DAT_01cc4800 = "..\\engine\\clipper.c";
                _DAT_01cc4804 = 0x5e;
                FUN_004c8440();
              }
              iVar13 = DAT_00767b38 * 0x30;
              uVar8 = uVar14 + 2;
              DAT_00767b38 = DAT_00767b38 + 1;
              local_14c[uVar14 + 1] = (int)(&DAT_007678f8 + iVar13);
              engine_clipper_c_interpolateVertexBottomClip_FUN_00431730(iVar4,iVar9);
            }
            local_34 = local_34 + 1;
            local_20 = local_20 + 1;
            uVar14 = uVar8;
            iVar4 = iVar9;
            piVar6 = local_20;
          } while (local_34 < (int)local_38);
        }
        DAT_00766c70 = uVar8;
        if (2 < (int)uVar8) {
          uVar12 = 0;
          local_30 = uVar8;
          local_2c = 0;
          iVar4 = local_14c[uVar8 - 1];
          piVar6 = local_14c;
          if (0 < (int)uVar8) {
            do {
              local_1c = piVar6;
              iVar9 = *local_1c;
              bVar3 = *(int *)(iVar4 + 4) <= -*(int *)(iVar4 + 8);
              if (*(int *)(iVar9 + 4) <= -*(int *)(iVar9 + 8)) {
                bVar3 = bVar3 | 2;
              }
              switch(bVar3) {
              case 0:
                uVar12 = uVar12 + 1;
                aiStack_d0[uVar12] = iVar4;
                break;
              case 1:
                if (0xb < DAT_00767b38) {
                  _DAT_01cc4800 = "..\\engine\\clipper.c";
                  _DAT_01cc4804 = 0x5e;
                  FUN_004c8440();
                }
                iVar13 = DAT_00767b38 * 0x30;
                uVar12 = uVar12 + 1;
                DAT_00767b38 = DAT_00767b38 + 1;
                aiStack_d0[uVar12] = (int)(&DAT_007678f8 + iVar13);
                engine_clipper_c_interpolateVertexTopClip_FUN_00431830(iVar9,iVar4);
                break;
              case 2:
                aiStack_d0[uVar12 + 1] = iVar4;
                if (0xb < DAT_00767b38) {
                  _DAT_01cc4800 = "..\\engine\\clipper.c";
                  _DAT_01cc4804 = 0x5e;
                  FUN_004c8440();
                }
                iVar13 = DAT_00767b38 * 0x30;
                uVar12 = uVar12 + 2;
                DAT_00767b38 = DAT_00767b38 + 1;
                aiStack_d0[uVar12] = (int)(&DAT_007678f8 + iVar13);
                engine_clipper_c_interpolateVertexTopClip_FUN_00431830(iVar4,iVar9);
              }
              local_2c = local_2c + 1;
              local_1c = local_1c + 1;
              iVar4 = iVar9;
              piVar6 = local_1c;
            } while (local_2c < (int)local_30);
          }
          DAT_00766c70 = uVar12;
          if (2 < (int)uVar12) {
            iVar4 = 0;
            if (0 < (int)uVar12) {
              plVar10 = (longlong *)&DAT_00766c74;
              iVar9 = 0;
              do {
                plVar17 = *(longlong **)((int)aiStack_d0 + iVar9 + 4);
                iVar13 = 0x30;
                plVar15 = plVar17;
                plVar16 = plVar10;
                if (((uint)plVar10 & 7) != 0) {
                  plVar16 = (longlong *)((int)plVar10 + (uint)bVar19 * -8 + 4);
                  plVar15 = (longlong *)((int)plVar17 + (uint)bVar19 * -8 + 4);
                  *(int *)plVar10 = (int)*plVar17;
                  iVar13 = 0x2c;
                }
                while (7 < iVar13) {
                  lVar1 = *plVar15;
                  plVar15 = plVar15 + 1;
                  *plVar16 = (longlong)ROUND((float10)lVar1);
                  plVar16 = plVar16 + 1;
                  iVar13 = iVar13 + -8;
                }
                if (iVar13 != 0 && -9 < iVar13 + -8) {
                  *(int *)plVar16 = (int)*plVar15;
                  if (4 < iVar13) {
                    *(uint *)((int)plVar16 + (uint)bVar19 * -8 + 4) =
                         *(uint *)((int)plVar15 + (uint)bVar19 * -8 + 4);
                  }
                }
                iVar9 = iVar9 + 4;
                iVar4 = iVar4 + 1;
                plVar10 = plVar10 + 6;
              } while (iVar4 < (int)DAT_00766c70);
            }
            iVar4 = 0;
            if (DAT_005ad284 != 0) {
              if (0 < (int)DAT_00766c70) {
                iVar9 = 0;
                do {
                  if (iVar4 < *(int *)((int)&DAT_00766c7c + iVar9)) {
                    iVar4 = *(int *)((int)&DAT_00766c7c + iVar9);
                  }
                  iVar9 = iVar9 + 0x30;
                } while (iVar9 < (int)(DAT_00766c70 * 0x30));
              }
              if (DAT_005ad284 <= iVar4) {
                DAT_007672f4 = DAT_00766c70;
                plVar10 = (longlong *)&DAT_00766c74;
                plVar17 = (longlong *)&DAT_007672f8;
                iVar4 = DAT_00766c70 * 0x30;
                while (7 < iVar4) {
                  lVar1 = *plVar10;
                  plVar10 = plVar10 + 1;
                  *plVar17 = (longlong)ROUND((float10)lVar1);
                  plVar17 = plVar17 + 1;
                  iVar4 = iVar4 + -8;
                }
                if (iVar4 != 0 && -9 < iVar4 + -8) {
                  *(int *)plVar17 = (int)*plVar10;
                  if (4 < iVar4) {
                    *(uint *)((int)plVar17 + (uint)bVar19 * -8 + 4) =
                         *(uint *)((int)plVar10 + (uint)bVar19 * -8 + 4);
                  }
                }
                DAT_00766c70 = 0;
                local_14 = 0;
                if (0 < (int)DAT_007672f4) {
                  plVar10 = (longlong *)&DAT_007672f8;
                  do {
                    uVar8 = local_14 + 1;
                    if (uVar8 == DAT_007672f4) {
                      uVar8 = uVar8 ^ DAT_007672f4;
                    }
                    bVar3 = DAT_005ad284 <= (int)plVar10[1];
                    if (DAT_005ad284 <= (int)(&DAT_00767300)[uVar8 * 0xc]) {
                      bVar3 = bVar3 | 2;
                    }
                    switch(bVar3) {
                    case 0:
                      plVar16 = (longlong *)(&DAT_00766c74 + DAT_00766c70 * 0xc);
                      iVar4 = 0x30;
                      plVar17 = plVar10;
                      plVar15 = plVar16;
                      if (((uint)plVar16 & 7) != 0) {
                        plVar15 = (longlong *)
                                  (&DAT_00766c78 + DAT_00766c70 * 0xc + (uint)bVar19 * -2);
                        plVar17 = (longlong *)((int)plVar10 + (uint)bVar19 * -8 + 4);
                        *(int *)plVar16 = (int)*plVar10;
                        iVar4 = 0x2c;
                      }
                      while (7 < iVar4) {
                        lVar1 = *plVar17;
                        plVar17 = plVar17 + 1;
                        *plVar15 = (longlong)ROUND((float10)lVar1);
                        plVar15 = plVar15 + 1;
                        iVar4 = iVar4 + -8;
                      }
                      if (iVar4 != 0 && -9 < iVar4 + -8) {
                        *(int *)plVar15 = (int)*plVar17;
                        if (4 < iVar4) {
                          *(uint *)((int)plVar15 + (uint)bVar19 * -8 + 4) =
                               *(uint *)((int)plVar17 + (uint)bVar19 * -8 + 4);
                        }
                      }
                      DAT_00766c70 = DAT_00766c70 + 1;
                      break;
                    case 1:
                      engine_clipper_c_interpolateVertexNearClip_FUN_00431930
                                (&DAT_007672f8 + uVar8 * 0xc,plVar10);
                      DAT_00766c70 = DAT_00766c70 + 1;
                      break;
                    case 2:
                      plVar16 = (longlong *)(&DAT_00766c74 + DAT_00766c70 * 0xc);
                      iVar4 = 0x30;
                      plVar17 = plVar10;
                      plVar15 = plVar16;
                      if (((uint)plVar16 & 7) != 0) {
                        plVar15 = (longlong *)
                                  (&DAT_00766c78 + DAT_00766c70 * 0xc + (uint)bVar19 * -2);
                        plVar17 = (longlong *)((int)plVar10 + (uint)bVar19 * -8 + 4);
                        *(int *)plVar16 = (int)*plVar10;
                        iVar4 = 0x2c;
                      }
                      while (7 < iVar4) {
                        lVar1 = *plVar17;
                        plVar17 = plVar17 + 1;
                        *plVar15 = (longlong)ROUND((float10)lVar1);
                        plVar15 = plVar15 + 1;
                        iVar4 = iVar4 + -8;
                      }
                      if (iVar4 != 0 && -9 < iVar4 + -8) {
                        *(int *)plVar15 = (int)*plVar17;
                        if (4 < iVar4) {
                          *(uint *)((int)plVar15 + (uint)bVar19 * -8 + 4) =
                               *(uint *)((int)plVar17 + (uint)bVar19 * -8 + 4);
                        }
                      }
                      DAT_00766c70 = DAT_00766c70 + 1;
                      engine_clipper_c_interpolateVertexNearClip_FUN_00431930
                                (plVar10,&DAT_007672f8 + uVar8 * 0xc);
                      DAT_00766c70 = DAT_00766c70 + 1;
                    }
                    local_14 = local_14 + 1;
                    plVar10 = plVar10 + 6;
                  } while (local_14 < (int)DAT_007672f4);
                }
              }
            }
            if (2 < (int)DAT_00766c70) {
              iVar4 = 0;
              if (0 < (int)DAT_00766c70) {
                piVar6 = &DAT_00766c74;
                do {
                  iVar9 = piVar6[2];
                  if (iVar9 == 0) {
                    piVar6[2] = 1;
                    *piVar6 = 0;
                    iVar5 = 0;
LAB_0043274e:
                    piVar6[1] = iVar5;
                  }
                  else {
                    iVar13 = *piVar6;
                    if (iVar9 < iVar13) {
                      *piVar6 = iVar9;
                    }
                    else {
                      iVar5 = -iVar9;
                      if (-iVar13 == iVar9 || iVar5 < iVar13) {
                        iVar13 = piVar6[1];
                        if (piVar6[2] < iVar13) {
                          piVar6[1] = piVar6[2];
                        }
                        else if (-iVar13 != iVar9 && iVar13 <= iVar5) goto LAB_0043274e;
                      }
                      else {
                        *piVar6 = iVar5;
                      }
                    }
                  }
                  iVar4 = iVar4 + 1;
                  piVar6 = piVar6 + 0xc;
                } while (iVar4 < (int)DAT_00766c70);
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
