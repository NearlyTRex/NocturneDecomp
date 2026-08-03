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
  byte bVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  char cVar7;
  int iVar9;
  longlong *plVar10;
  uint *puVar11;
  SRenderVertex *pSVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  longlong *plVar16;
  SRenderVertex *pSVar17;
  longlong *plVar18;
  longlong *plVar19;
  bool bVar20;
  byte bVar21;
  uint local_14c [31];
  uint auStack_d0 [33];
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
  uint *local_20;
  uint *local_1c;
  int local_18;
  int local_14;
  uint uVar8;
  
  bVar21 = 0;
  uVar8 = 0xffffffff;
  cVar7 = -1;
  iVar4 = 0;
  uVar13 = 0;
  piVar6 = param_2;
  if (0 < (int)param_1) {
    do {
      if (((&DAT_005c5024)[*piVar6 * 0xc] & 0x80000000) != 0) {
        uVar13 = uVar13 + 1;
      }
      iVar4 = iVar4 + 1;
      uVar8 = uVar8 & (&DAT_005c5024)[*piVar6 * 0xc];
      cVar7 = (char)uVar8;
      piVar6 = piVar6 + 1;
    } while (iVar4 < (int)param_1);
  }
  if ((uVar13 == param_1) && (cVar7 != '\0')) {
    DAT_00766c70 = uVar13 ^ param_1;
  }
  else {
    if (uVar13 == 0) {
      if ((_DAT_01c02594 == 0) || (DAT_006b0278 != 0)) {
        DAT_00766c70 = param_1;
        local_18 = 0;
        if (0 < (int)param_1) {
          plVar10 = (longlong *)&DAT_00766c74;
          do {
            iVar4 = 0x30;
            plVar19 = (longlong *)(&DAT_005c5014 + *param_2 * 0xc);
            plVar16 = plVar10;
            if (((uint)plVar10 & 7) != 0) {
              plVar16 = (longlong *)((int)plVar10 + 4);
              plVar19 = (longlong *)(&DAT_005c5018 + *param_2 * 0xc);
              *(int *)plVar10 = (int)*(longlong *)(&DAT_005c5014 + *param_2 * 0xc);
              iVar4 = 0x2c;
            }
            while (7 < iVar4) {
              lVar1 = *plVar19;
              plVar19 = plVar19 + 1;
              *plVar16 = (longlong)ROUND((float10)lVar1);
              plVar16 = plVar16 + 1;
              iVar4 = iVar4 + -8;
            }
            if (iVar4 != 0 && -9 < iVar4 + -8) {
              *(int *)plVar16 = (int)*plVar19;
              if (4 < iVar4) {
                *(uint *)((int)plVar16 + 4) = *(uint *)((int)plVar19 + 4);
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
                            (DAT_00767274,DAT_00767278,DAT_0076727c);
          bVar20 = iVar4 == 0;
        }
        else {
          local_28 = param_1 - 2;
          iVar9 = 0;
          iVar4 = local_28 * 4;
          iVar14 = 0;
          if (0 < iVar4) {
            do {
              iVar5 = engine_prim_c_calculateTriangleWindingOrder_FUN_004f9a10
                                (DAT_00767274,*(SRenderVertex **)((int)&DAT_00767278 + iVar9),
                                 *(SRenderVertex **)((int)&DAT_0076727c + iVar9));
              if (iVar5 == 0) {
                iVar14 = iVar14 + 1;
              }
              iVar9 = iVar9 + 4;
            } while (iVar9 < iVar4);
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
    iVar4 = 0;
    if (0 < (int)param_1) {
      do {
        iVar9 = *param_2;
        iVar4 = iVar4 + 1;
        param_2 = param_2 + 1;
        auStack_d0[iVar4] = &DAT_005c5014 + iVar9 * 0xc;
      } while (iVar4 < (int)param_1);
    }
    DAT_00766c70 = param_1;
    local_48 = param_1;
    uVar8 = 0;
    DAT_00767b38 = 0;
    local_4c = (byte *)local_14c;
    local_44 = 0;
    if (0 < (int)param_1) {
      puVar11 = auStack_d0;
      pSVar12 = (SRenderVertex *)auStack_d0[param_1];
      do {
        iVar4 = DAT_00767b38;
        puVar11 = puVar11 + 1;
        pSVar17 = (SRenderVertex *)*puVar11;
        bVar3 = (pSVar12->projected_vertex).transformed_z <=
                (pSVar12->projected_vertex).transformed_x;
        if ((pSVar17->projected_vertex).transformed_z <= (pSVar17->projected_vertex).transformed_x)
        {
          bVar3 = bVar3 | 2;
        }
        switch(bVar3) {
        case 0:
          iVar4 = uVar8 * 4;
          uVar8 = uVar8 + 1;
          *(SRenderVertex **)(local_4c + iVar4) = pSVar12;
          break;
        case 1:
          if (0xb < DAT_00767b38) {
            g_CHAR_PTR_01cc4800 = "..\\engine\\clipper.c";
            g_INT_01cc4804 = 0x5e;
            core_main_c_FUN_004c8440();
          }
          iVar9 = DAT_00767b38 * 0x30;
          DAT_00767b38 = DAT_00767b38 + 1;
          iVar4 = uVar8 * 4;
          uVar8 = uVar8 + 1;
          *(SRenderVertex **)(local_4c + iVar4) = (SRenderVertex *)(&DAT_007678f8 + iVar9);
          engine_clipper_c_interpolateVertexLeftClip_FUN_00431530
                    (pSVar17,pSVar12,(SRenderVertex *)(&DAT_007678f8 + iVar9));
          break;
        case 2:
          iVar9 = uVar8 + 1;
          *(SRenderVertex **)(local_4c + uVar8 * 4) = pSVar12;
          if (0xb < iVar4) {
            g_CHAR_PTR_01cc4800 = "..\\engine\\clipper.c";
            g_INT_01cc4804 = 0x5e;
            core_main_c_FUN_004c8440();
          }
          iVar4 = DAT_00767b38 * 0x30;
          DAT_00767b38 = DAT_00767b38 + 1;
          uVar8 = uVar8 + 2;
          *(SRenderVertex **)(local_4c + iVar9 * 4) = (SRenderVertex *)(&DAT_007678f8 + iVar4);
          engine_clipper_c_interpolateVertexLeftClip_FUN_00431530
                    (pSVar12,pSVar17,(SRenderVertex *)(&DAT_007678f8 + iVar4));
        }
        local_44 = local_44 + 1;
        pSVar12 = pSVar17;
      } while (local_44 < (int)local_48);
    }
    DAT_00766c70 = uVar8;
    if (2 < (int)uVar8) {
      uVar13 = 0;
      local_40 = uVar8;
      local_3c = 0;
      pSVar12 = (SRenderVertex *)local_14c[uVar8 - 1];
      puVar11 = local_14c;
      if (0 < (int)uVar8) {
        do {
          local_24 = puVar11;
          pSVar17 = (SRenderVertex *)*local_24;
          bVar3 = (pSVar12->projected_vertex).transformed_x <=
                  -(pSVar12->projected_vertex).transformed_z;
          if ((pSVar17->projected_vertex).transformed_x <=
              -(pSVar17->projected_vertex).transformed_z) {
            bVar3 = bVar3 | 2;
          }
          switch(bVar3) {
          case 0:
            uVar13 = uVar13 + 1;
            auStack_d0[uVar13] = pSVar12;
            break;
          case 1:
            if (0xb < DAT_00767b38) {
              g_CHAR_PTR_01cc4800 = "..\\engine\\clipper.c";
              g_INT_01cc4804 = 0x5e;
              core_main_c_FUN_004c8440();
            }
            iVar4 = DAT_00767b38 * 0x30;
            uVar13 = uVar13 + 1;
            DAT_00767b38 = DAT_00767b38 + 1;
            auStack_d0[uVar13] = (SRenderVertex *)(&DAT_007678f8 + iVar4);
            engine_clipper_c_interpolateVertexRightClip_FUN_00431630
                      (pSVar17,pSVar12,(SRenderVertex *)(&DAT_007678f8 + iVar4));
            break;
          case 2:
            auStack_d0[uVar13 + 1] = pSVar12;
            if (0xb < DAT_00767b38) {
              g_CHAR_PTR_01cc4800 = "..\\engine\\clipper.c";
              g_INT_01cc4804 = 0x5e;
              core_main_c_FUN_004c8440();
            }
            iVar4 = DAT_00767b38 * 0x30;
            uVar13 = uVar13 + 2;
            DAT_00767b38 = DAT_00767b38 + 1;
            auStack_d0[uVar13] = (SRenderVertex *)(&DAT_007678f8 + iVar4);
            engine_clipper_c_interpolateVertexRightClip_FUN_00431630
                      (pSVar12,pSVar17,(SRenderVertex *)(&DAT_007678f8 + iVar4));
          }
          local_3c = local_3c + 1;
          local_24 = local_24 + 1;
          pSVar12 = pSVar17;
          puVar11 = local_24;
        } while (local_3c < (int)local_40);
      }
      DAT_00766c70 = uVar13;
      if (2 < (int)uVar13) {
        uVar8 = 0;
        local_38 = uVar13;
        local_34 = 0;
        pSVar12 = (SRenderVertex *)auStack_d0[uVar13];
        uVar15 = uVar8;
        puVar11 = auStack_d0 + 1;
        if (0 < (int)uVar13) {
          do {
            local_20 = puVar11;
            pSVar17 = (SRenderVertex *)*local_20;
            bVar3 = (pSVar12->projected_vertex).transformed_z <=
                    (pSVar12->projected_vertex).transformed_y;
            if ((pSVar17->projected_vertex).transformed_z <=
                (pSVar17->projected_vertex).transformed_y) {
              bVar3 = bVar3 | 2;
            }
            uVar8 = uVar15;
            switch(bVar3) {
            case 0:
              uVar8 = uVar15 + 1;
              local_14c[uVar15] = pSVar12;
              break;
            case 1:
              if (0xb < DAT_00767b38) {
                g_CHAR_PTR_01cc4800 = "..\\engine\\clipper.c";
                g_INT_01cc4804 = 0x5e;
                core_main_c_FUN_004c8440();
              }
              iVar4 = DAT_00767b38 * 0x30;
              uVar8 = uVar15 + 1;
              DAT_00767b38 = DAT_00767b38 + 1;
              local_14c[uVar15] = (SRenderVertex *)(&DAT_007678f8 + iVar4);
              engine_clipper_c_interpolateVertexBottomClip_FUN_00431730
                        (pSVar17,pSVar12,(SRenderVertex *)(&DAT_007678f8 + iVar4));
              break;
            case 2:
              local_14c[uVar15] = pSVar12;
              if (0xb < DAT_00767b38) {
                g_CHAR_PTR_01cc4800 = "..\\engine\\clipper.c";
                g_INT_01cc4804 = 0x5e;
                core_main_c_FUN_004c8440();
              }
              iVar4 = DAT_00767b38 * 0x30;
              uVar8 = uVar15 + 2;
              DAT_00767b38 = DAT_00767b38 + 1;
              local_14c[uVar15 + 1] = (SRenderVertex *)(&DAT_007678f8 + iVar4);
              engine_clipper_c_interpolateVertexBottomClip_FUN_00431730
                        (pSVar12,pSVar17,(SRenderVertex *)(&DAT_007678f8 + iVar4));
            }
            local_34 = local_34 + 1;
            local_20 = local_20 + 1;
            uVar15 = uVar8;
            pSVar12 = pSVar17;
            puVar11 = local_20;
          } while (local_34 < (int)local_38);
        }
        DAT_00766c70 = uVar8;
        if (2 < (int)uVar8) {
          uVar13 = 0;
          local_30 = uVar8;
          local_2c = 0;
          pSVar12 = (SRenderVertex *)local_14c[uVar8 - 1];
          puVar11 = local_14c;
          if (0 < (int)uVar8) {
            do {
              local_1c = puVar11;
              pSVar17 = (SRenderVertex *)*local_1c;
              bVar3 = (pSVar12->projected_vertex).transformed_y <=
                      -(pSVar12->projected_vertex).transformed_z;
              if ((pSVar17->projected_vertex).transformed_y <=
                  -(pSVar17->projected_vertex).transformed_z) {
                bVar3 = bVar3 | 2;
              }
              switch(bVar3) {
              case 0:
                uVar13 = uVar13 + 1;
                auStack_d0[uVar13] = pSVar12;
                break;
              case 1:
                if (0xb < DAT_00767b38) {
                  g_CHAR_PTR_01cc4800 = "..\\engine\\clipper.c";
                  g_INT_01cc4804 = 0x5e;
                  core_main_c_FUN_004c8440();
                }
                iVar4 = DAT_00767b38 * 0x30;
                uVar13 = uVar13 + 1;
                DAT_00767b38 = DAT_00767b38 + 1;
                auStack_d0[uVar13] = (SRenderVertex *)(&DAT_007678f8 + iVar4);
                engine_clipper_c_interpolateVertexTopClip_FUN_00431830
                          (pSVar17,pSVar12,(SRenderVertex *)(&DAT_007678f8 + iVar4));
                break;
              case 2:
                auStack_d0[uVar13 + 1] = pSVar12;
                if (0xb < DAT_00767b38) {
                  g_CHAR_PTR_01cc4800 = "..\\engine\\clipper.c";
                  g_INT_01cc4804 = 0x5e;
                  core_main_c_FUN_004c8440();
                }
                iVar4 = DAT_00767b38 * 0x30;
                uVar13 = uVar13 + 2;
                DAT_00767b38 = DAT_00767b38 + 1;
                auStack_d0[uVar13] = (SRenderVertex *)(&DAT_007678f8 + iVar4);
                engine_clipper_c_interpolateVertexTopClip_FUN_00431830
                          (pSVar12,pSVar17,(SRenderVertex *)(&DAT_007678f8 + iVar4));
              }
              local_2c = local_2c + 1;
              local_1c = local_1c + 1;
              pSVar12 = pSVar17;
              puVar11 = local_1c;
            } while (local_2c < (int)local_30);
          }
          DAT_00766c70 = uVar13;
          if (2 < (int)uVar13) {
            iVar4 = 0;
            if (0 < (int)uVar13) {
              plVar10 = (longlong *)&DAT_00766c74;
              iVar9 = 0;
              do {
                plVar19 = *(longlong **)((int)auStack_d0 + iVar9 + 4);
                iVar14 = 0x30;
                plVar16 = plVar19;
                plVar18 = plVar10;
                if (((uint)plVar10 & 7) != 0) {
                  plVar18 = (longlong *)((int)plVar10 + (uint)bVar21 * -8 + 4);
                  plVar16 = (longlong *)((int)plVar19 + (uint)bVar21 * -8 + 4);
                  *(int *)plVar10 = (int)*plVar19;
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
                plVar19 = (longlong *)&DAT_007672f8;
                iVar4 = DAT_00766c70 * 0x30;
                while (7 < iVar4) {
                  lVar1 = *plVar10;
                  plVar10 = plVar10 + 1;
                  *plVar19 = (longlong)ROUND((float10)lVar1);
                  plVar19 = plVar19 + 1;
                  iVar4 = iVar4 + -8;
                }
                if (iVar4 != 0 && -9 < iVar4 + -8) {
                  *(int *)plVar19 = (int)*plVar10;
                  if (4 < iVar4) {
                    *(uint *)((int)plVar19 + (uint)bVar21 * -8 + 4) =
                         *(uint *)((int)plVar10 + (uint)bVar21 * -8 + 4);
                  }
                }
                DAT_00766c70 = 0;
                local_14 = 0;
                if (0 < (int)DAT_007672f4) {
                  pSVar12 = (SRenderVertex *)&DAT_007672f8;
                  do {
                    uVar8 = local_14 + 1;
                    if (uVar8 == DAT_007672f4) {
                      uVar8 = uVar8 ^ DAT_007672f4;
                    }
                    bVar3 = DAT_005ad284 <= (pSVar12->projected_vertex).transformed_z;
                    if (DAT_005ad284 <= (int)(&DAT_00767300)[uVar8 * 0xc]) {
                      bVar3 = bVar3 | 2;
                    }
                    switch(bVar3) {
                    case 0:
                      plVar19 = (longlong *)(&DAT_00766c74 + DAT_00766c70 * 0xc);
                      iVar4 = 0x30;
                      pSVar17 = pSVar12;
                      plVar10 = plVar19;
                      if (((uint)plVar19 & 7) != 0) {
                        plVar10 = (longlong *)
                                  (&DAT_00766c78 + DAT_00766c70 * 0xc + (uint)bVar21 * -2);
                        pSVar17 = (SRenderVertex *)((int)pSVar12 + (uint)bVar21 * -8 + 4);
                        *(int *)plVar19 = (pSVar12->projected_vertex).transformed_x;
                        iVar4 = 0x2c;
                      }
                      while (7 < iVar4) {
                        lVar2._0_4_ = (pSVar17->projected_vertex).transformed_x;
                        lVar2._4_4_ = (pSVar17->projected_vertex).transformed_y;
                        pSVar17 = (SRenderVertex *)&(pSVar17->projected_vertex).transformed_z;
                        *plVar10 = (longlong)ROUND((float10)lVar2);
                        plVar10 = plVar10 + 1;
                        iVar4 = iVar4 + -8;
                      }
                      if (iVar4 != 0 && -9 < iVar4 + -8) {
                        *(int *)plVar10 = (pSVar17->projected_vertex).transformed_x;
                        if (4 < iVar4) {
                          *(uint *)((int)plVar10 + (uint)bVar21 * -8 + 4) =
                               *(uint *)((int)pSVar17 + (uint)bVar21 * -8 + 4);
                        }
                      }
                      DAT_00766c70 = DAT_00766c70 + 1;
                      break;
                    case 1:
                      engine_clipper_c_interpolateVertexNearClip_FUN_00431930
                                ((SRenderVertex *)(&DAT_007672f8 + uVar8 * 0xc),pSVar12,
                                 (SRenderVertex *)(&DAT_00766c74 + DAT_00766c70 * 0xc));
                      DAT_00766c70 = DAT_00766c70 + 1;
                      break;
                    case 2:
                      plVar19 = (longlong *)(&DAT_00766c74 + DAT_00766c70 * 0xc);
                      iVar4 = 0x30;
                      pSVar17 = pSVar12;
                      plVar10 = plVar19;
                      if (((uint)plVar19 & 7) != 0) {
                        plVar10 = (longlong *)
                                  (&DAT_00766c78 + DAT_00766c70 * 0xc + (uint)bVar21 * -2);
                        pSVar17 = (SRenderVertex *)((int)pSVar12 + (uint)bVar21 * -8 + 4);
                        *(int *)plVar19 = (pSVar12->projected_vertex).transformed_x;
                        iVar4 = 0x2c;
                      }
                      while (7 < iVar4) {
                        lVar1._0_4_ = (pSVar17->projected_vertex).transformed_x;
                        lVar1._4_4_ = (pSVar17->projected_vertex).transformed_y;
                        pSVar17 = (SRenderVertex *)&(pSVar17->projected_vertex).transformed_z;
                        *plVar10 = (longlong)ROUND((float10)lVar1);
                        plVar10 = plVar10 + 1;
                        iVar4 = iVar4 + -8;
                      }
                      if (iVar4 != 0 && -9 < iVar4 + -8) {
                        *(int *)plVar10 = (pSVar17->projected_vertex).transformed_x;
                        if (4 < iVar4) {
                          *(uint *)((int)plVar10 + (uint)bVar21 * -8 + 4) =
                               *(uint *)((int)pSVar17 + (uint)bVar21 * -8 + 4);
                        }
                      }
                      DAT_00766c70 = DAT_00766c70 + 1;
                      engine_clipper_c_interpolateVertexNearClip_FUN_00431930
                                (pSVar12,(SRenderVertex *)(&DAT_007672f8 + uVar8 * 0xc),
                                 (SRenderVertex *)(&DAT_00766c74 + DAT_00766c70 * 0xc));
                      DAT_00766c70 = DAT_00766c70 + 1;
                    }
                    local_14 = local_14 + 1;
                    pSVar12 = pSVar12 + 1;
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
                    iVar14 = *piVar6;
                    if (iVar9 < iVar14) {
                      *piVar6 = iVar9;
                    }
                    else {
                      iVar5 = -iVar9;
                      if (-iVar14 == iVar9 || iVar5 < iVar14) {
                        iVar14 = piVar6[1];
                        if (piVar6[2] < iVar14) {
                          piVar6[1] = piVar6[2];
                        }
                        else if (-iVar14 != iVar9 && iVar14 <= iVar5) goto LAB_0043274e;
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
