// Name: engine_clipper.c_clipPolygonToViewFrustum_FUN_00431330
// Address: 00431330
// Address Range: [[00431330, 00431d8b]]
// Convention: __cdecl
// Signature: int __cdecl engine_clipper_c_clipPolygonToViewFrustum_FUN_00431330(int vertex_count,int *vertex_indices)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x00431bc1) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl engine_clipper_c_clipPolygonToViewFrustum_FUN_00431330(int vertex_count,int *vertex_indices)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  uint *puVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  char cVar9;
  int iVar11;
  longlong *plVar12;
  uint uVar13;
  int *piVar14;
  SRenderVertex *pSVar15;
  uint uVar16;
  int iVar17;
  longlong *plVar18;
  SRenderVertex *pSVar19;
  longlong *plVar20;
  longlong *plVar21;
  bool bVar22;
  byte bVar23;
  int local_14c [31];
  uint uStack_d0;
  byte local_cc [128];
  int local_4c;
  uint local_48;
  int local_44;
  uint local_40;
  uint local_3c;
  uint *local_38;
  uint *local_34;
  int local_30;
  uint *local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  uint uVar10;
  
  bVar23 = 0;
  piVar14 = local_14c;
  uVar10 = 0xffffffff;
  cVar9 = -1;
  iVar6 = 0;
  uVar16 = 0;
  piVar8 = vertex_indices;
  if (0 < vertex_count) {
    do {
      if (((&DAT_00622024)[*piVar8 * 0xc] & 0x80000000) != 0) {
        uVar16 = uVar16 + 1;
      }
      iVar6 = iVar6 + 1;
      uVar10 = uVar10 & (&DAT_00622024)[*piVar8 * 0xc];
      cVar9 = (char)uVar10;
      piVar8 = piVar8 + 1;
    } while (iVar6 < vertex_count);
  }
  if ((uVar16 == vertex_count) && (cVar9 != '\0')) {
    DAT_007bee30 = uVar16 ^ vertex_count;
  }
  else {
    if (uVar16 == 0) {
      if ((_DAT_01c37788 == 0) || (DAT_0070ca74 != 0)) {
        DAT_007bee30 = vertex_count;
        local_1c = 0;
        if (0 < vertex_count) {
          plVar12 = (longlong *)&DAT_007bee34;
          do {
            iVar6 = 0x30;
            plVar21 = (longlong *)(&DAT_00622014 + *vertex_indices * 0xc);
            plVar18 = plVar12;
            if (((uint)plVar12 & 7) != 0) {
              plVar18 = (longlong *)((int)plVar12 + 4);
              plVar21 = (longlong *)(&DAT_00622018 + *vertex_indices * 0xc);
              *(int *)plVar12 = (int)*(longlong *)(&DAT_00622014 + *vertex_indices * 0xc);
              iVar6 = 0x2c;
            }
            while (7 < iVar6) {
              lVar1 = *plVar21;
              plVar21 = plVar21 + 1;
              *plVar18 = (longlong)ROUND((float10)lVar1);
              plVar18 = plVar18 + 1;
              iVar6 = iVar6 + -8;
            }
            if (iVar6 != 0 && -9 < iVar6 + -8) {
              *(int *)plVar18 = (int)*plVar21;
              if (4 < iVar6) {
                *(uint *)((int)plVar18 + 4) = *(uint *)((int)plVar21 + 4);
              }
            }
            vertex_indices = vertex_indices + 1;
            local_1c = local_1c + 1;
            plVar12 = plVar12 + 6;
          } while (local_1c < vertex_count);
        }
        return 0;
      }
      iVar6 = 0;
      if (0 < vertex_count) {
        do {
          iVar11 = *vertex_indices;
          iVar6 = iVar6 + 1;
          vertex_indices = vertex_indices + 1;
          *(uint **)(iVar6 * 4 + 0x7bf430) = &DAT_00622014 + iVar11 * 0xc;
        } while (iVar6 < vertex_count);
      }
      if (DAT_0070ca7c != 0) {
        if (vertex_count < 4) {
          iVar6 = engine_prim_c_calculateTriangleWindingOrder_FUN_0051c760
                            (DAT_007bf434,DAT_007bf438,DAT_007bf43c);
          bVar22 = iVar6 == 0;
        }
        else {
          local_4c = vertex_count + -2;
          iVar11 = 0;
          iVar6 = local_4c * 4;
          iVar17 = 0;
          if (0 < iVar6) {
            do {
              iVar7 = engine_prim_c_calculateTriangleWindingOrder_FUN_0051c760
                                (DAT_007bf434,*(SRenderVertex **)((int)&DAT_007bf438 + iVar11),
                                 *(SRenderVertex **)((int)&DAT_007bf43c + iVar11));
              if (iVar7 == 0) {
                iVar17 = iVar17 + 1;
              }
              iVar11 = iVar11 + 4;
            } while (iVar11 < iVar6);
          }
          bVar22 = iVar17 == local_4c;
        }
        if (bVar22) {
          return 1;
        }
      }
      _DAT_01e61b58 = _DAT_01e61b58 + vertex_count + -2;
      engine_special_cpp_drawPolygon2_FUN_0055f920(&DAT_007bf434,vertex_count,_DAT_01c38b54);
      return 1;
    }
    iVar6 = 0;
    if (0 < vertex_count) {
      do {
        iVar11 = *vertex_indices;
        iVar17 = iVar6 + 1;
        vertex_indices = vertex_indices + 1;
        local_14c[iVar6] = (int)(&DAT_00622014 + iVar11 * 0xc);
        iVar6 = iVar17;
      } while (iVar17 < vertex_count);
    }
    DAT_007bee30 = vertex_count;
    local_44 = vertex_count;
    uVar10 = 0;
    DAT_007bfcf8 = 0;
    local_18 = (int)local_cc;
    local_20 = 0;
    pSVar15 = (SRenderVertex *)local_14c[vertex_count + -1];
    if (0 < vertex_count) {
      do {
        iVar6 = DAT_007bfcf8;
        pSVar19 = (SRenderVertex *)*piVar14;
        bVar5 = (pSVar15->projected_vertex).transformed_z <=
                (pSVar15->projected_vertex).transformed_x;
        if ((pSVar19->projected_vertex).transformed_z <= (pSVar19->projected_vertex).transformed_x)
        {
          bVar5 = bVar5 | 2;
        }
        switch(bVar5) {
        case 0:
          uVar3 = uVar10 * 4;
          uVar10 = uVar10 + 1;
          *(SRenderVertex **)(local_18 + uVar3) = pSVar15;
          break;
        case 1:
          if (0xb < DAT_007bfcf8) {
            _DAT_01d046a0 = "..\\engine\\clipper.c";
            _DAT_01d046a4 = 0x5e;
            core_main_c_FUN_004e4500();
          }
          iVar6 = DAT_007bfcf8 * 0x30;
          DAT_007bfcf8 = DAT_007bfcf8 + 1;
          uVar3 = uVar10 * 4;
          uVar10 = uVar10 + 1;
          *(SRenderVertex **)(local_18 + uVar3) = (SRenderVertex *)(&DAT_007bfab8 + iVar6);
          engine_clipper_c_interpolateVertexRightClip_FUN_00430650
                    (pSVar19,pSVar15,(SRenderVertex *)(&DAT_007bfab8 + iVar6));
          break;
        case 2:
          iVar11 = uVar10 + 1;
          *(SRenderVertex **)(local_18 + uVar10 * 4) = pSVar15;
          if (0xb < iVar6) {
            _DAT_01d046a0 = "..\\engine\\clipper.c";
            _DAT_01d046a4 = 0x5e;
            core_main_c_FUN_004e4500();
          }
          iVar6 = DAT_007bfcf8 * 0x30;
          DAT_007bfcf8 = DAT_007bfcf8 + 1;
          uVar10 = uVar10 + 2;
          *(SRenderVertex **)(local_18 + iVar11 * 4) = (SRenderVertex *)(&DAT_007bfab8 + iVar6);
          engine_clipper_c_interpolateVertexRightClip_FUN_00430650
                    (pSVar15,pSVar19,(SRenderVertex *)(&DAT_007bfab8 + iVar6));
        }
        local_20 = local_20 + 1;
        piVar14 = piVar14 + 1;
        pSVar15 = pSVar19;
      } while (local_20 < local_44);
    }
    DAT_007bee30 = uVar10;
    if (2 < (int)uVar10) {
      uVar16 = 0;
      local_48 = uVar10;
      local_30 = 0;
      pSVar15 = (SRenderVertex *)(&uStack_d0)[uVar10];
      uVar13 = uVar16;
      puVar4 = (uint *)local_cc;
      if (0 < (int)uVar10) {
        do {
          local_38 = puVar4;
          pSVar19 = (SRenderVertex *)*local_38;
          bVar5 = (pSVar15->projected_vertex).transformed_x <=
                  -(pSVar15->projected_vertex).transformed_z;
          if ((pSVar19->projected_vertex).transformed_x <=
              -(pSVar19->projected_vertex).transformed_z) {
            bVar5 = bVar5 | 2;
          }
          uVar16 = uVar13;
          switch(bVar5) {
          case 0:
            uVar16 = uVar13 + 1;
            local_14c[uVar13] = (int)pSVar15;
            break;
          case 1:
            if (0xb < DAT_007bfcf8) {
              _DAT_01d046a0 = "..\\engine\\clipper.c";
              _DAT_01d046a4 = 0x5e;
              core_main_c_FUN_004e4500();
            }
            iVar6 = DAT_007bfcf8 * 0x30;
            uVar16 = uVar13 + 1;
            DAT_007bfcf8 = DAT_007bfcf8 + 1;
            local_14c[uVar13] = (int)(&DAT_007bfab8 + iVar6);
            engine_clipper_c_interpolateVertexLeftClip_FUN_00430750
                      (pSVar19,pSVar15,(SRenderVertex *)(&DAT_007bfab8 + iVar6));
            break;
          case 2:
            local_14c[uVar13] = (int)pSVar15;
            if (0xb < DAT_007bfcf8) {
              _DAT_01d046a0 = "..\\engine\\clipper.c";
              _DAT_01d046a4 = 0x5e;
              core_main_c_FUN_004e4500();
            }
            iVar6 = DAT_007bfcf8 * 0x30;
            uVar16 = uVar13 + 2;
            DAT_007bfcf8 = DAT_007bfcf8 + 1;
            local_14c[uVar13 + 1] = (int)(&DAT_007bfab8 + iVar6);
            engine_clipper_c_interpolateVertexLeftClip_FUN_00430750
                      (pSVar15,pSVar19,(SRenderVertex *)(&DAT_007bfab8 + iVar6));
          }
          local_30 = local_30 + 1;
          local_38 = local_38 + 1;
          uVar13 = uVar16;
          pSVar15 = pSVar19;
          puVar4 = local_38;
        } while (local_30 < (int)local_48);
      }
      DAT_007bee30 = uVar16;
      if (2 < (int)uVar16) {
        uVar10 = 0;
        local_3c = uVar16;
        local_24 = 0;
        pSVar15 = (SRenderVertex *)local_14c[uVar16 - 1];
        piVar8 = local_14c;
        if (0 < (int)uVar16) {
          do {
            local_2c = piVar8;
            pSVar19 = (SRenderVertex *)*local_2c;
            bVar5 = (pSVar15->projected_vertex).transformed_z <=
                    (pSVar15->projected_vertex).transformed_y;
            if ((pSVar19->projected_vertex).transformed_z <=
                (pSVar19->projected_vertex).transformed_y) {
              bVar5 = bVar5 | 2;
            }
            switch(bVar5) {
            case 0:
              uVar10 = uVar10 + 1;
              (&uStack_d0)[uVar10] = pSVar15;
              break;
            case 1:
              if (0xb < DAT_007bfcf8) {
                _DAT_01d046a0 = "..\\engine\\clipper.c";
                _DAT_01d046a4 = 0x5e;
                core_main_c_FUN_004e4500();
              }
              iVar6 = DAT_007bfcf8 * 0x30;
              uVar10 = uVar10 + 1;
              DAT_007bfcf8 = DAT_007bfcf8 + 1;
              (&uStack_d0)[uVar10] = (SRenderVertex *)(&DAT_007bfab8 + iVar6);
              engine_clipper_c_interpolateVertexTopClip_FUN_00430850
                        (pSVar19,pSVar15,(SRenderVertex *)(&DAT_007bfab8 + iVar6));
              break;
            case 2:
              (&uStack_d0)[uVar10 + 1] = pSVar15;
              if (0xb < DAT_007bfcf8) {
                _DAT_01d046a0 = "..\\engine\\clipper.c";
                _DAT_01d046a4 = 0x5e;
                core_main_c_FUN_004e4500();
              }
              iVar6 = DAT_007bfcf8 * 0x30;
              uVar10 = uVar10 + 2;
              DAT_007bfcf8 = DAT_007bfcf8 + 1;
              (&uStack_d0)[uVar10] = (SRenderVertex *)(&DAT_007bfab8 + iVar6);
              engine_clipper_c_interpolateVertexTopClip_FUN_00430850
                        (pSVar15,pSVar19,(SRenderVertex *)(&DAT_007bfab8 + iVar6));
            }
            local_24 = local_24 + 1;
            local_2c = local_2c + 1;
            pSVar15 = pSVar19;
            piVar8 = local_2c;
          } while (local_24 < (int)local_3c);
        }
        DAT_007bee30 = uVar10;
        if (2 < (int)uVar10) {
          uVar16 = 0;
          local_40 = uVar10;
          local_28 = 0;
          pSVar15 = (SRenderVertex *)(&uStack_d0)[uVar10];
          uVar13 = uVar16;
          puVar4 = (uint *)local_cc;
          if (0 < (int)uVar10) {
            do {
              local_34 = puVar4;
              pSVar19 = (SRenderVertex *)*local_34;
              bVar5 = (pSVar15->projected_vertex).transformed_y <=
                      -(pSVar15->projected_vertex).transformed_z;
              if ((pSVar19->projected_vertex).transformed_y <=
                  -(pSVar19->projected_vertex).transformed_z) {
                bVar5 = bVar5 | 2;
              }
              uVar16 = uVar13;
              switch(bVar5) {
              case 0:
                uVar16 = uVar13 + 1;
                local_14c[uVar13] = (int)pSVar15;
                break;
              case 1:
                if (0xb < DAT_007bfcf8) {
                  _DAT_01d046a0 = "..\\engine\\clipper.c";
                  _DAT_01d046a4 = 0x5e;
                  core_main_c_FUN_004e4500();
                }
                iVar6 = DAT_007bfcf8 * 0x30;
                uVar16 = uVar13 + 1;
                DAT_007bfcf8 = DAT_007bfcf8 + 1;
                local_14c[uVar13] = (int)(&DAT_007bfab8 + iVar6);
                engine_clipper_c_interpolateVertexBottomClip_FUN_00430950
                          (pSVar19,pSVar15,(SRenderVertex *)(&DAT_007bfab8 + iVar6));
                break;
              case 2:
                local_14c[uVar13] = (int)pSVar15;
                if (0xb < DAT_007bfcf8) {
                  _DAT_01d046a0 = "..\\engine\\clipper.c";
                  _DAT_01d046a4 = 0x5e;
                  core_main_c_FUN_004e4500();
                }
                iVar6 = DAT_007bfcf8 * 0x30;
                uVar16 = uVar13 + 2;
                DAT_007bfcf8 = DAT_007bfcf8 + 1;
                local_14c[uVar13 + 1] = (int)(&DAT_007bfab8 + iVar6);
                engine_clipper_c_interpolateVertexBottomClip_FUN_00430950
                          (pSVar15,pSVar19,(SRenderVertex *)(&DAT_007bfab8 + iVar6));
              }
              local_28 = local_28 + 1;
              local_34 = local_34 + 1;
              uVar13 = uVar16;
              pSVar15 = pSVar19;
              puVar4 = local_34;
            } while (local_28 < (int)local_40);
          }
          DAT_007bee30 = uVar16;
          if (2 < (int)uVar16) {
            iVar6 = 0;
            if (0 < (int)uVar16) {
              plVar12 = (longlong *)&DAT_007bee34;
              iVar11 = 0;
              do {
                plVar21 = *(longlong **)((int)local_14c + iVar11);
                iVar17 = 0x30;
                plVar18 = plVar21;
                plVar20 = plVar12;
                if (((uint)plVar12 & 7) != 0) {
                  plVar20 = (longlong *)((int)plVar12 + (uint)bVar23 * -8 + 4);
                  plVar18 = (longlong *)((int)plVar21 + (uint)bVar23 * -8 + 4);
                  *(int *)plVar12 = (int)*plVar21;
                  iVar17 = 0x2c;
                }
                while (7 < iVar17) {
                  lVar1 = *plVar18;
                  plVar18 = plVar18 + 1;
                  *plVar20 = (longlong)ROUND((float10)lVar1);
                  plVar20 = plVar20 + 1;
                  iVar17 = iVar17 + -8;
                }
                if (iVar17 != 0 && -9 < iVar17 + -8) {
                  *(int *)plVar20 = (int)*plVar18;
                  if (4 < iVar17) {
                    *(uint *)((int)plVar20 + (uint)bVar23 * -8 + 4) =
                         *(uint *)((int)plVar18 + (uint)bVar23 * -8 + 4);
                  }
                }
                iVar11 = iVar11 + 4;
                iVar6 = iVar6 + 1;
                plVar12 = plVar12 + 6;
              } while (iVar6 < (int)DAT_007bee30);
            }
            iVar6 = 0;
            if (DAT_00609b34 != 0) {
              if (0 < (int)DAT_007bee30) {
                iVar11 = 0;
                do {
                  if (iVar6 < *(int *)((int)&DAT_007bee3c + iVar11)) {
                    iVar6 = *(int *)((int)&DAT_007bee3c + iVar11);
                  }
                  iVar11 = iVar11 + 0x30;
                } while (iVar11 < (int)(DAT_007bee30 * 0x30));
              }
              if (DAT_00609b34 <= iVar6) {
                DAT_007bf4b4 = DAT_007bee30;
                plVar12 = (longlong *)&DAT_007bee34;
                plVar21 = (longlong *)&DAT_007bf4b8;
                iVar6 = DAT_007bee30 * 0x30;
                while (7 < iVar6) {
                  lVar1 = *plVar12;
                  plVar12 = plVar12 + 1;
                  *plVar21 = (longlong)ROUND((float10)lVar1);
                  plVar21 = plVar21 + 1;
                  iVar6 = iVar6 + -8;
                }
                if (iVar6 != 0 && -9 < iVar6 + -8) {
                  *(int *)plVar21 = (int)*plVar12;
                  if (4 < iVar6) {
                    *(uint *)((int)plVar21 + (uint)bVar23 * -8 + 4) =
                         *(uint *)((int)plVar12 + (uint)bVar23 * -8 + 4);
                  }
                }
                DAT_007bee30 = 0;
                local_14 = 0;
                if (0 < (int)DAT_007bf4b4) {
                  pSVar15 = (SRenderVertex *)&DAT_007bf4b8;
                  do {
                    uVar10 = local_14 + 1;
                    if (uVar10 == DAT_007bf4b4) {
                      uVar10 = uVar10 ^ DAT_007bf4b4;
                    }
                    bVar5 = DAT_00609b34 <= (pSVar15->projected_vertex).transformed_z;
                    if (DAT_00609b34 <= (int)(&DAT_007bf4c0)[uVar10 * 0xc]) {
                      bVar5 = bVar5 | 2;
                    }
                    switch(bVar5) {
                    case 0:
                      plVar21 = (longlong *)(&DAT_007bee34 + DAT_007bee30 * 0xc);
                      iVar6 = 0x30;
                      pSVar19 = pSVar15;
                      plVar12 = plVar21;
                      if (((uint)plVar21 & 7) != 0) {
                        plVar12 = (longlong *)
                                  (&DAT_007bee38 + DAT_007bee30 * 0xc + (uint)bVar23 * -2);
                        pSVar19 = (SRenderVertex *)((int)pSVar15 + (uint)bVar23 * -8 + 4);
                        *(int *)plVar21 = (pSVar15->projected_vertex).transformed_x;
                        iVar6 = 0x2c;
                      }
                      while (7 < iVar6) {
                        lVar2._0_4_ = (pSVar19->projected_vertex).transformed_x;
                        lVar2._4_4_ = (pSVar19->projected_vertex).transformed_y;
                        pSVar19 = (SRenderVertex *)&(pSVar19->projected_vertex).transformed_z;
                        *plVar12 = (longlong)ROUND((float10)lVar2);
                        plVar12 = plVar12 + 1;
                        iVar6 = iVar6 + -8;
                      }
                      if (iVar6 != 0 && -9 < iVar6 + -8) {
                        *(int *)plVar12 = (pSVar19->projected_vertex).transformed_x;
                        if (4 < iVar6) {
                          *(uint *)((int)plVar12 + (uint)bVar23 * -8 + 4) =
                               *(uint *)((int)pSVar19 + (uint)bVar23 * -8 + 4);
                        }
                      }
                      DAT_007bee30 = DAT_007bee30 + 1;
                      break;
                    case 1:
                      engine_clipper_c_interpolateVertexFarClip_FUN_00430a50
                                ((SRenderVertex *)(&DAT_007bf4b8 + uVar10 * 0xc),pSVar15,
                                 (SRenderVertex *)(&DAT_007bee34 + DAT_007bee30 * 0xc));
                      DAT_007bee30 = DAT_007bee30 + 1;
                      break;
                    case 2:
                      plVar21 = (longlong *)(&DAT_007bee34 + DAT_007bee30 * 0xc);
                      iVar6 = 0x30;
                      pSVar19 = pSVar15;
                      plVar12 = plVar21;
                      if (((uint)plVar21 & 7) != 0) {
                        plVar12 = (longlong *)
                                  (&DAT_007bee38 + DAT_007bee30 * 0xc + (uint)bVar23 * -2);
                        pSVar19 = (SRenderVertex *)((int)pSVar15 + (uint)bVar23 * -8 + 4);
                        *(int *)plVar21 = (pSVar15->projected_vertex).transformed_x;
                        iVar6 = 0x2c;
                      }
                      while (7 < iVar6) {
                        lVar1._0_4_ = (pSVar19->projected_vertex).transformed_x;
                        lVar1._4_4_ = (pSVar19->projected_vertex).transformed_y;
                        pSVar19 = (SRenderVertex *)&(pSVar19->projected_vertex).transformed_z;
                        *plVar12 = (longlong)ROUND((float10)lVar1);
                        plVar12 = plVar12 + 1;
                        iVar6 = iVar6 + -8;
                      }
                      if (iVar6 != 0 && -9 < iVar6 + -8) {
                        *(int *)plVar12 = (pSVar19->projected_vertex).transformed_x;
                        if (4 < iVar6) {
                          *(uint *)((int)plVar12 + (uint)bVar23 * -8 + 4) =
                               *(uint *)((int)pSVar19 + (uint)bVar23 * -8 + 4);
                        }
                      }
                      DAT_007bee30 = DAT_007bee30 + 1;
                      engine_clipper_c_interpolateVertexFarClip_FUN_00430a50
                                (pSVar15,(SRenderVertex *)(&DAT_007bf4b8 + uVar10 * 0xc),
                                 (SRenderVertex *)(&DAT_007bee34 + DAT_007bee30 * 0xc));
                      DAT_007bee30 = DAT_007bee30 + 1;
                    }
                    local_14 = local_14 + 1;
                    pSVar15 = pSVar15 + 1;
                  } while (local_14 < (int)DAT_007bf4b4);
                }
              }
            }
            if (2 < (int)DAT_007bee30) {
              iVar6 = 0;
              if (0 < (int)DAT_007bee30) {
                piVar8 = &DAT_007bee34;
                do {
                  iVar11 = piVar8[2];
                  if (iVar11 == 0) {
                    piVar8[2] = 1;
                    *piVar8 = 0;
                    iVar7 = 0;
LAB_0043185e:
                    piVar8[1] = iVar7;
                  }
                  else {
                    iVar17 = *piVar8;
                    if (iVar11 < iVar17) {
                      *piVar8 = iVar11;
                    }
                    else {
                      iVar7 = -iVar11;
                      if (-iVar17 == iVar11 || iVar7 < iVar17) {
                        iVar17 = piVar8[1];
                        if (piVar8[2] < iVar17) {
                          piVar8[1] = piVar8[2];
                        }
                        else if (-iVar17 != iVar11 && iVar17 <= iVar7) goto LAB_0043185e;
                      }
                      else {
                        *piVar8 = iVar7;
                      }
                    }
                  }
                  iVar6 = iVar6 + 1;
                  piVar8 = piVar8 + 0xc;
                } while (iVar6 < (int)DAT_007bee30);
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
