// Name: engine_clipper.c_clipPolygonToViewFrustum_FUN_00439da0
// Address: 00439da0
// Address Range: [[00439da0, 0043a832]]
// Convention: __cdecl
// Signature: int __cdecl engine_clipper_c_clipPolygonToViewFrustum_FUN_00439da0(int vertex_count,int *vertex_indices)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x0043a66b) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl engine_clipper_c_clipPolygonToViewFrustum_FUN_00439da0(int vertex_count,int *vertex_indices)

{
  longlong lVar1;
  longlong lVar2;
  SRenderVertex *pSVar3;
  byte bVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  longlong *plVar10;
  uint uVar11;
  uint *puVar12;
  int iVar13;
  uint uVar14;
  longlong *plVar15;
  SRenderVertex *pSVar16;
  longlong *plVar17;
  longlong *plVar18;
  bool bVar19;
  byte bVar20;
  uint local_150 [31];
  uint auStack_d4 [33];
  uint local_50;
  byte *local_4c;
  int local_48;
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
  SRenderVertex *local_18;
  int local_14;
  
  bVar20 = 0;
  uVar8 = 0;
  local_50 = 0xffffffff;
  iVar7 = 0;
  piVar6 = vertex_indices;
  if (0 < vertex_count) {
    do {
      if (((&DAT_0060b024)[*piVar6 * 0xc] & 0x80000000) != 0) {
        uVar8 = uVar8 + 1;
      }
      iVar7 = iVar7 + 1;
      local_50 = local_50 & (&DAT_0060b024)[*piVar6 * 0xc];
      piVar6 = piVar6 + 1;
    } while (iVar7 < vertex_count);
  }
  if ((uVar8 == vertex_count) && ((char)local_50 != '\0')) {
    DAT_007e3e88 = uVar8 ^ vertex_count;
  }
  else {
    if (uVar8 == 0) {
      if ((_DAT_01c6cee8 == 0) || (DAT_007303f4 != 0)) {
        DAT_007e3e88 = vertex_count;
        local_14 = 0;
        if (0 < vertex_count) {
          plVar10 = (longlong *)&DAT_007e3e8c;
          do {
            iVar7 = 0x30;
            plVar18 = (longlong *)(&DAT_0060b014 + *vertex_indices * 0xc);
            plVar15 = plVar10;
            if (((uint)plVar10 & 7) != 0) {
              plVar15 = (longlong *)((int)plVar10 + 4);
              plVar18 = (longlong *)(&DAT_0060b018 + *vertex_indices * 0xc);
              *(int *)plVar10 = (int)*(longlong *)(&DAT_0060b014 + *vertex_indices * 0xc);
              iVar7 = 0x2c;
            }
            while (7 < iVar7) {
              lVar1 = *plVar18;
              plVar18 = plVar18 + 1;
              *plVar15 = (longlong)ROUND((float10)lVar1);
              plVar15 = plVar15 + 1;
              iVar7 = iVar7 + -8;
            }
            if (iVar7 != 0 && -9 < iVar7 + -8) {
              *(int *)plVar15 = (int)*plVar18;
              if (4 < iVar7) {
                *(uint *)((int)plVar15 + 4) = *(uint *)((int)plVar18 + 4);
              }
            }
            vertex_indices = vertex_indices + 1;
            local_14 = local_14 + 1;
            plVar10 = plVar10 + 6;
          } while (local_14 < vertex_count);
        }
        return 0;
      }
      iVar7 = 0;
      if (0 < vertex_count) {
        do {
          iVar9 = *vertex_indices;
          iVar7 = iVar7 + 1;
          vertex_indices = vertex_indices + 1;
          *(uint **)(iVar7 * 4 + 0x7e4488) = &DAT_0060b014 + iVar9 * 0xc;
        } while (iVar7 < vertex_count);
      }
      if (DAT_007303fc != 0) {
        if (vertex_count < 4) {
          iVar7 = engine_prim_c_calculateTriangleWindingOrder_FUN_00515ac0
                            (DAT_007e448c,DAT_007e4490,DAT_007e4494);
          bVar19 = iVar7 == 0;
        }
        else {
          local_28 = vertex_count + -2;
          iVar9 = 0;
          iVar7 = local_28 * 4;
          iVar13 = 0;
          if (0 < iVar7) {
            do {
              iVar5 = engine_prim_c_calculateTriangleWindingOrder_FUN_00515ac0
                                (DAT_007e448c,*(SRenderVertex **)((int)&DAT_007e4490 + iVar9),
                                 *(SRenderVertex **)((int)&DAT_007e4494 + iVar9));
              if (iVar5 == 0) {
                iVar13 = iVar13 + 1;
              }
              iVar9 = iVar9 + 4;
            } while (iVar9 < iVar7);
          }
          bVar19 = iVar13 == local_28;
        }
        if (bVar19) {
          return 1;
        }
      }
      _DAT_01ed3198 = _DAT_01ed3198 + vertex_count + -2;
      engine_special_cpp_drawPolygon2_FUN_00565c40(&DAT_007e448c,vertex_count,_DAT_01c6e2b4);
      return 1;
    }
    iVar7 = 0;
    if (0 < vertex_count) {
      do {
        iVar9 = *vertex_indices;
        iVar7 = iVar7 + 1;
        vertex_indices = vertex_indices + 1;
        auStack_d4[iVar7] = &DAT_0060b014 + iVar9 * 0xc;
      } while (iVar7 < vertex_count);
    }
    DAT_007e3e88 = vertex_count;
    local_48 = vertex_count;
    uVar8 = 0;
    DAT_007e4d50 = 0;
    local_44 = 0;
    local_4c = (byte *)local_150;
    if (0 < vertex_count) {
      puVar12 = auStack_d4;
      pSVar16 = (SRenderVertex *)auStack_d4[vertex_count];
      do {
        iVar7 = DAT_007e4d50;
        puVar12 = puVar12 + 1;
        pSVar3 = (SRenderVertex *)*puVar12;
        bVar4 = (pSVar16->projected_vertex).transformed_z <=
                (pSVar16->projected_vertex).transformed_x;
        if ((pSVar3->projected_vertex).transformed_z <= (pSVar3->projected_vertex).transformed_x) {
          bVar4 = bVar4 | 2;
        }
        switch(bVar4) {
        case 0:
          iVar7 = uVar8 * 4;
          uVar8 = uVar8 + 1;
          *(SRenderVertex **)(local_4c + iVar7) = pSVar16;
          break;
        case 1:
          if (0xb < DAT_007e4d50) {
            _DAT_01d71de0 = "..\\engine\\clipper.c";
            _DAT_01d71de4 = 0x5e;
            core_main_c_FUN_004e4330();
          }
          iVar9 = DAT_007e4d50 * 0x30;
          DAT_007e4d50 = DAT_007e4d50 + 1;
          iVar7 = uVar8 * 4;
          uVar8 = uVar8 + 1;
          *(SRenderVertex **)(local_4c + iVar7) = (SRenderVertex *)(&DAT_007e4b10 + iVar9);
          engine_clipper_c_interpolateVertexRightClip_FUN_004390c0
                    (pSVar3,pSVar16,(SRenderVertex *)(&DAT_007e4b10 + iVar9));
          break;
        case 2:
          iVar9 = uVar8 + 1;
          *(SRenderVertex **)(local_4c + uVar8 * 4) = pSVar16;
          if (0xb < iVar7) {
            _DAT_01d71de0 = "..\\engine\\clipper.c";
            _DAT_01d71de4 = 0x5e;
            core_main_c_FUN_004e4330();
          }
          iVar7 = DAT_007e4d50 * 0x30;
          DAT_007e4d50 = DAT_007e4d50 + 1;
          uVar8 = uVar8 + 2;
          *(SRenderVertex **)(local_4c + iVar9 * 4) = (SRenderVertex *)(&DAT_007e4b10 + iVar7);
          engine_clipper_c_interpolateVertexRightClip_FUN_004390c0
                    (pSVar16,pSVar3,(SRenderVertex *)(&DAT_007e4b10 + iVar7));
        }
        local_44 = local_44 + 1;
        pSVar16 = pSVar3;
      } while (local_44 < local_48);
    }
    DAT_007e3e88 = uVar8;
    if (2 < (int)uVar8) {
      uVar11 = 0;
      local_40 = uVar8;
      local_3c = 0;
      pSVar16 = (SRenderVertex *)local_150[uVar8 - 1];
      puVar12 = local_150;
      if (0 < (int)uVar8) {
        do {
          local_24 = puVar12;
          pSVar3 = (SRenderVertex *)*local_24;
          bVar4 = (pSVar16->projected_vertex).transformed_x <=
                  -(pSVar16->projected_vertex).transformed_z;
          if ((pSVar3->projected_vertex).transformed_x <= -(pSVar3->projected_vertex).transformed_z)
          {
            bVar4 = bVar4 | 2;
          }
          switch(bVar4) {
          case 0:
            uVar11 = uVar11 + 1;
            auStack_d4[uVar11] = pSVar16;
            break;
          case 1:
            if (0xb < DAT_007e4d50) {
              _DAT_01d71de0 = "..\\engine\\clipper.c";
              _DAT_01d71de4 = 0x5e;
              core_main_c_FUN_004e4330();
            }
            iVar7 = DAT_007e4d50 * 0x30;
            uVar11 = uVar11 + 1;
            DAT_007e4d50 = DAT_007e4d50 + 1;
            auStack_d4[uVar11] = (SRenderVertex *)(&DAT_007e4b10 + iVar7);
            engine_clipper_c_interpolateVertexLeftClip_FUN_004391c0
                      (pSVar3,pSVar16,(SRenderVertex *)(&DAT_007e4b10 + iVar7));
            break;
          case 2:
            auStack_d4[uVar11 + 1] = pSVar16;
            if (0xb < DAT_007e4d50) {
              _DAT_01d71de0 = "..\\engine\\clipper.c";
              _DAT_01d71de4 = 0x5e;
              core_main_c_FUN_004e4330();
            }
            iVar7 = DAT_007e4d50 * 0x30;
            uVar11 = uVar11 + 2;
            DAT_007e4d50 = DAT_007e4d50 + 1;
            auStack_d4[uVar11] = (SRenderVertex *)(&DAT_007e4b10 + iVar7);
            engine_clipper_c_interpolateVertexLeftClip_FUN_004391c0
                      (pSVar16,pSVar3,(SRenderVertex *)(&DAT_007e4b10 + iVar7));
          }
          local_3c = local_3c + 1;
          local_24 = local_24 + 1;
          pSVar16 = pSVar3;
          puVar12 = local_24;
        } while (local_3c < (int)local_40);
      }
      DAT_007e3e88 = uVar11;
      if (2 < (int)uVar11) {
        uVar8 = 0;
        local_38 = uVar11;
        local_34 = 0;
        if (0 < (int)uVar11) {
          local_20 = auStack_d4 + 1;
          uVar14 = uVar8;
          pSVar16 = (SRenderVertex *)auStack_d4[uVar11];
          do {
            pSVar3 = (SRenderVertex *)*local_20;
            bVar4 = (pSVar16->projected_vertex).transformed_z <=
                    (pSVar16->projected_vertex).transformed_y;
            if ((pSVar3->projected_vertex).transformed_z <= (pSVar3->projected_vertex).transformed_y
               ) {
              bVar4 = bVar4 | 2;
            }
            uVar8 = uVar14;
            switch(bVar4) {
            case 0:
              uVar8 = uVar14 + 1;
              local_150[uVar14] = pSVar16;
              break;
            case 1:
              if (0xb < DAT_007e4d50) {
                _DAT_01d71de0 = "..\\engine\\clipper.c";
                _DAT_01d71de4 = 0x5e;
                core_main_c_FUN_004e4330();
              }
              iVar7 = DAT_007e4d50 * 0x30;
              uVar8 = uVar14 + 1;
              DAT_007e4d50 = DAT_007e4d50 + 1;
              local_150[uVar14] = (SRenderVertex *)(&DAT_007e4b10 + iVar7);
              engine_clipper_c_interpolateVertexTopClip_FUN_004392c0
                        (pSVar3,pSVar16,(SRenderVertex *)(&DAT_007e4b10 + iVar7));
              break;
            case 2:
              local_150[uVar14] = pSVar16;
              if (0xb < DAT_007e4d50) {
                _DAT_01d71de0 = "..\\engine\\clipper.c";
                _DAT_01d71de4 = 0x5e;
                core_main_c_FUN_004e4330();
              }
              iVar7 = DAT_007e4d50 * 0x30;
              uVar8 = uVar14 + 2;
              DAT_007e4d50 = DAT_007e4d50 + 1;
              local_150[uVar14 + 1] = (SRenderVertex *)(&DAT_007e4b10 + iVar7);
              engine_clipper_c_interpolateVertexTopClip_FUN_004392c0
                        (pSVar16,pSVar3,(SRenderVertex *)(&DAT_007e4b10 + iVar7));
            }
            local_34 = local_34 + 1;
            local_20 = local_20 + 1;
            uVar14 = uVar8;
            pSVar16 = pSVar3;
          } while (local_34 < (int)local_38);
        }
        DAT_007e3e88 = uVar8;
        if (2 < (int)uVar8) {
          uVar11 = 0;
          local_30 = uVar8;
          local_2c = 0;
          pSVar16 = (SRenderVertex *)local_150[uVar8 - 1];
          puVar12 = local_150;
          if (0 < (int)uVar8) {
            do {
              local_1c = puVar12;
              pSVar3 = (SRenderVertex *)*local_1c;
              bVar4 = (pSVar16->projected_vertex).transformed_y <=
                      -(pSVar16->projected_vertex).transformed_z;
              if ((pSVar3->projected_vertex).transformed_y <=
                  -(pSVar3->projected_vertex).transformed_z) {
                bVar4 = bVar4 | 2;
              }
              switch(bVar4) {
              case 0:
                uVar11 = uVar11 + 1;
                auStack_d4[uVar11] = pSVar16;
                break;
              case 1:
                if (0xb < DAT_007e4d50) {
                  _DAT_01d71de0 = "..\\engine\\clipper.c";
                  _DAT_01d71de4 = 0x5e;
                  core_main_c_FUN_004e4330();
                }
                iVar7 = DAT_007e4d50 * 0x30;
                uVar11 = uVar11 + 1;
                DAT_007e4d50 = DAT_007e4d50 + 1;
                auStack_d4[uVar11] = (SRenderVertex *)(&DAT_007e4b10 + iVar7);
                engine_clipper_c_interpolateVertexBottomClip_FUN_004393c0
                          (pSVar3,pSVar16,(SRenderVertex *)(&DAT_007e4b10 + iVar7));
                break;
              case 2:
                auStack_d4[uVar11 + 1] = pSVar16;
                if (0xb < DAT_007e4d50) {
                  _DAT_01d71de0 = "..\\engine\\clipper.c";
                  _DAT_01d71de4 = 0x5e;
                  core_main_c_FUN_004e4330();
                }
                iVar7 = DAT_007e4d50 * 0x30;
                uVar11 = uVar11 + 2;
                auStack_d4[uVar11] = (SRenderVertex *)(&DAT_007e4b10 + iVar7);
                DAT_007e4d50 = DAT_007e4d50 + 1;
                engine_clipper_c_interpolateVertexBottomClip_FUN_004393c0
                          (pSVar16,pSVar3,(SRenderVertex *)(&DAT_007e4b10 + iVar7));
              }
              local_2c = local_2c + 1;
              local_1c = local_1c + 1;
              pSVar16 = pSVar3;
              puVar12 = local_1c;
            } while (local_2c < (int)local_30);
          }
          DAT_007e3e88 = uVar11;
          if (2 < (int)uVar11) {
            iVar7 = 0;
            if (0 < (int)uVar11) {
              plVar10 = (longlong *)&DAT_007e3e8c;
              iVar9 = 0;
              do {
                plVar18 = *(longlong **)((int)auStack_d4 + iVar9 + 4);
                iVar13 = 0x30;
                plVar15 = plVar18;
                plVar17 = plVar10;
                if (((uint)plVar10 & 7) != 0) {
                  plVar17 = (longlong *)((int)plVar10 + (uint)bVar20 * -8 + 4);
                  plVar15 = (longlong *)((int)plVar18 + (uint)bVar20 * -8 + 4);
                  *(int *)plVar10 = (int)*plVar18;
                  iVar13 = 0x2c;
                }
                while (7 < iVar13) {
                  lVar1 = *plVar15;
                  plVar15 = plVar15 + 1;
                  *plVar17 = (longlong)ROUND((float10)lVar1);
                  plVar17 = plVar17 + 1;
                  iVar13 = iVar13 + -8;
                }
                if (iVar13 != 0 && -9 < iVar13 + -8) {
                  *(int *)plVar17 = (int)*plVar15;
                  if (4 < iVar13) {
                    *(uint *)((int)plVar17 + (uint)bVar20 * -8 + 4) =
                         *(uint *)((int)plVar15 + (uint)bVar20 * -8 + 4);
                  }
                }
                iVar9 = iVar9 + 4;
                iVar7 = iVar7 + 1;
                plVar10 = plVar10 + 6;
              } while (iVar7 < (int)DAT_007e3e88);
            }
            iVar7 = 0;
            if (DAT_005f12f4 != 0) {
              if (0 < (int)DAT_007e3e88) {
                iVar9 = 0;
                do {
                  if (iVar7 < *(int *)((int)&DAT_007e3e94 + iVar9)) {
                    iVar7 = *(int *)((int)&DAT_007e3e94 + iVar9);
                  }
                  iVar9 = iVar9 + 0x30;
                } while (iVar9 < (int)(DAT_007e3e88 * 0x30));
              }
              if (DAT_005f12f4 <= iVar7) {
                DAT_007e450c = DAT_007e3e88;
                plVar10 = (longlong *)&DAT_007e3e8c;
                plVar18 = (longlong *)&DAT_007e4510;
                iVar9 = 0;
                iVar7 = DAT_007e3e88 * 0x30;
                while (7 < iVar7) {
                  lVar1 = *plVar10;
                  plVar10 = plVar10 + 1;
                  *plVar18 = (longlong)ROUND((float10)lVar1);
                  plVar18 = plVar18 + 1;
                  iVar7 = iVar7 + -8;
                }
                if (iVar7 != 0 && -9 < iVar7 + -8) {
                  *(int *)plVar18 = (int)*plVar10;
                  if (4 < iVar7) {
                    *(uint *)((int)plVar18 + (uint)bVar20 * -8 + 4) =
                         *(uint *)((int)plVar10 + (uint)bVar20 * -8 + 4);
                  }
                }
                DAT_007e3e88 = 0;
                if (0 < (int)DAT_007e450c) {
                  local_18 = (SRenderVertex *)&DAT_007e4510;
                  do {
                    uVar8 = iVar9 + 1;
                    if (uVar8 == DAT_007e450c) {
                      uVar8 = uVar8 ^ DAT_007e450c;
                    }
                    bVar4 = DAT_005f12f4 <= (local_18->projected_vertex).transformed_z;
                    if (DAT_005f12f4 <= (int)(&DAT_007e4518)[uVar8 * 0xc]) {
                      bVar4 = bVar4 | 2;
                    }
                    switch(bVar4) {
                    case 0:
                      plVar18 = (longlong *)(&DAT_007e3e8c + DAT_007e3e88 * 0xc);
                      iVar7 = 0x30;
                      pSVar16 = local_18;
                      plVar10 = plVar18;
                      if (((uint)plVar18 & 7) != 0) {
                        plVar10 = (longlong *)
                                  (&DAT_007e3e90 + DAT_007e3e88 * 0xc + (uint)bVar20 * -2);
                        pSVar16 = (SRenderVertex *)((int)local_18 + (uint)bVar20 * -8 + 4);
                        *(int *)plVar18 = (local_18->projected_vertex).transformed_x;
                        iVar7 = 0x2c;
                      }
                      while (7 < iVar7) {
                        lVar2._0_4_ = (pSVar16->projected_vertex).transformed_x;
                        lVar2._4_4_ = (pSVar16->projected_vertex).transformed_y;
                        pSVar16 = (SRenderVertex *)&(pSVar16->projected_vertex).transformed_z;
                        *plVar10 = (longlong)ROUND((float10)lVar2);
                        plVar10 = plVar10 + 1;
                        iVar7 = iVar7 + -8;
                      }
                      if (iVar7 != 0 && -9 < iVar7 + -8) {
                        *(int *)plVar10 = (pSVar16->projected_vertex).transformed_x;
                        if (4 < iVar7) {
                          *(uint *)((int)plVar10 + (uint)bVar20 * -8 + 4) =
                               *(uint *)((int)pSVar16 + (uint)bVar20 * -8 + 4);
                        }
                      }
                      DAT_007e3e88 = DAT_007e3e88 + 1;
                      break;
                    case 1:
                      engine_clipper_c_interpolateVertexFarClip_FUN_004394c0
                                ((SRenderVertex *)(&DAT_007e4510 + uVar8 * 0xc),local_18,
                                 (SRenderVertex *)(&DAT_007e3e8c + DAT_007e3e88 * 0xc));
                      DAT_007e3e88 = DAT_007e3e88 + 1;
                      break;
                    case 2:
                      plVar18 = (longlong *)(&DAT_007e3e8c + DAT_007e3e88 * 0xc);
                      iVar7 = 0x30;
                      pSVar16 = local_18;
                      plVar10 = plVar18;
                      if (((uint)plVar18 & 7) != 0) {
                        plVar10 = (longlong *)
                                  (&DAT_007e3e90 + DAT_007e3e88 * 0xc + (uint)bVar20 * -2);
                        pSVar16 = (SRenderVertex *)((int)local_18 + (uint)bVar20 * -8 + 4);
                        *(int *)plVar18 = (local_18->projected_vertex).transformed_x;
                        iVar7 = 0x2c;
                      }
                      while (7 < iVar7) {
                        lVar1._0_4_ = (pSVar16->projected_vertex).transformed_x;
                        lVar1._4_4_ = (pSVar16->projected_vertex).transformed_y;
                        pSVar16 = (SRenderVertex *)&(pSVar16->projected_vertex).transformed_z;
                        *plVar10 = (longlong)ROUND((float10)lVar1);
                        plVar10 = plVar10 + 1;
                        iVar7 = iVar7 + -8;
                      }
                      if (iVar7 != 0 && -9 < iVar7 + -8) {
                        *(int *)plVar10 = (pSVar16->projected_vertex).transformed_x;
                        if (4 < iVar7) {
                          *(uint *)((int)plVar10 + (uint)bVar20 * -8 + 4) =
                               *(uint *)((int)pSVar16 + (uint)bVar20 * -8 + 4);
                        }
                      }
                      DAT_007e3e88 = DAT_007e3e88 + 1;
                      engine_clipper_c_interpolateVertexFarClip_FUN_004394c0
                                (local_18,(SRenderVertex *)(&DAT_007e4510 + uVar8 * 0xc),
                                 (SRenderVertex *)(&DAT_007e3e8c + DAT_007e3e88 * 0xc));
                      DAT_007e3e88 = DAT_007e3e88 + 1;
                    }
                    local_18 = local_18 + 1;
                    iVar9 = iVar9 + 1;
                  } while (iVar9 < (int)DAT_007e450c);
                }
              }
            }
            if (2 < (int)DAT_007e3e88) {
              iVar7 = 0;
              if (0 < (int)DAT_007e3e88) {
                piVar6 = &DAT_007e3e8c;
                do {
                  iVar9 = piVar6[2];
                  if (iVar9 == 0) {
                    piVar6[2] = 1;
                    *piVar6 = 0;
                    iVar5 = 0;
LAB_0043a2ee:
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
                        else if (-iVar13 != iVar9 && iVar13 <= iVar5) goto LAB_0043a2ee;
                      }
                      else {
                        *piVar6 = iVar5;
                      }
                    }
                  }
                  iVar7 = iVar7 + 1;
                  piVar6 = piVar6 + 0xc;
                } while (iVar7 < (int)DAT_007e3e88);
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
