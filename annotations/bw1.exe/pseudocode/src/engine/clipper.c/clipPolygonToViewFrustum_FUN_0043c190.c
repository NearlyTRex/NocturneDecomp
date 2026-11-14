// Name: engine_clipper.c_clipPolygonToViewFrustum_FUN_0043c190
// Address: 0043c190
// Address Range: [[0043c190, 0043cbeb]]
// Convention: __cdecl
// Signature: int __cdecl engine_clipper_c_clipPolygonToViewFrustum_FUN_0043c190(int vertex_count,int *vertex_indices)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x0043cb5e) */
/* WARNING: Removing unreachable block (ram,0x0043c33f) */
/* WARNING: Removing unreachable block (ram,0x0043c64b) */
/* WARNING: Removing unreachable block (ram,0x0043cace) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl engine_clipper_c_clipPolygonToViewFrustum_FUN_0043c190(int vertex_count,int *vertex_indices)

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
  longlong *plVar19;
  SRenderVertex *pSVar20;
  bool bVar21;
  byte bVar22;
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
  
  bVar22 = 0;
  piVar14 = local_14c;
  uVar10 = 0xffffffff;
  cVar9 = -1;
  iVar6 = 0;
  uVar16 = 0;
  piVar8 = vertex_indices;
  if (0 < vertex_count) {
    do {
      if (((&DAT_00629024)[*piVar8 * 0xc] & 0x80000000) != 0) {
        uVar16 = uVar16 + 1;
      }
      iVar6 = iVar6 + 1;
      uVar10 = uVar10 & (&DAT_00629024)[*piVar8 * 0xc];
      cVar9 = (char)uVar10;
      piVar8 = piVar8 + 1;
    } while (iVar6 < vertex_count);
  }
  if ((uVar16 == vertex_count) && (cVar9 != '\0')) {
    DAT_007c7554 = uVar16 ^ vertex_count;
  }
  else {
    if (uVar16 == 0) {
      if ((_DAT_01c50948 == 0) || (DAT_00713a74 != 0)) {
        DAT_007c7554 = vertex_count;
        local_1c = 0;
        if (0 < vertex_count) {
          plVar12 = (longlong *)&DAT_007c7558;
          do {
            plVar18 = (longlong *)(&DAT_00629014 + *vertex_indices * 0xc);
            iVar6 = 0x30;
            plVar19 = plVar12;
            while (7 < iVar6) {
              lVar1 = *plVar18;
              plVar18 = plVar18 + 1;
              *plVar19 = (longlong)ROUND((float10)lVar1);
              plVar19 = plVar19 + 1;
              iVar6 = iVar6 + -8;
            }
            if (iVar6 != 0 && -9 < iVar6 + -8) {
              *(int *)plVar19 = (int)*plVar18;
              if (4 < iVar6) {
                *(uint *)((int)plVar19 + 4) = *(uint *)((int)plVar18 + 4);
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
          *(uint **)(iVar6 * 4 + 0x7c7b54) = &DAT_00629014 + iVar11 * 0xc;
        } while (iVar6 < vertex_count);
      }
      if (DAT_00713a7c != 0) {
        if (vertex_count < 4) {
          iVar6 = engine_prim_c_calculateTriangleWindingOrder_FUN_0053dd60
                            (DAT_007c7b58,DAT_007c7b5c,DAT_007c7b60);
          bVar21 = iVar6 == 0;
        }
        else {
          local_4c = vertex_count + -2;
          iVar11 = 0;
          iVar6 = local_4c * 4;
          iVar17 = 0;
          if (0 < iVar6) {
            do {
              iVar7 = engine_prim_c_calculateTriangleWindingOrder_FUN_0053dd60
                                (DAT_007c7b58,*(SRenderVertex **)((int)&DAT_007c7b5c + iVar11),
                                 *(SRenderVertex **)((int)&DAT_007c7b60 + iVar11));
              if (iVar7 == 0) {
                iVar17 = iVar17 + 1;
              }
              iVar11 = iVar11 + 4;
            } while (iVar11 < iVar6);
          }
          bVar21 = iVar17 == local_4c;
        }
        if (bVar21) {
          return 1;
        }
      }
      _DAT_01e7dac8 = _DAT_01e7dac8 + vertex_count + -2;
      engine_special_cpp_drawPolygon2_FUN_00582370(&DAT_007c7b58,vertex_count,_DAT_01c51d14);
      return 1;
    }
    iVar6 = 0;
    if (0 < vertex_count) {
      do {
        iVar11 = *vertex_indices;
        iVar17 = iVar6 + 1;
        vertex_indices = vertex_indices + 1;
        local_14c[iVar6] = (int)(&DAT_00629014 + iVar11 * 0xc);
        iVar6 = iVar17;
      } while (iVar17 < vertex_count);
    }
    DAT_007c7554 = vertex_count;
    local_44 = vertex_count;
    uVar10 = 0;
    DAT_007c841c = 0;
    local_18 = (int)local_cc;
    local_20 = 0;
    pSVar15 = (SRenderVertex *)local_14c[vertex_count + -1];
    if (0 < vertex_count) {
      do {
        iVar6 = DAT_007c841c;
        pSVar20 = (SRenderVertex *)*piVar14;
        bVar5 = (pSVar15->projected_vertex).transformed_z <=
                (pSVar15->projected_vertex).transformed_x;
        if ((pSVar20->projected_vertex).transformed_z <= (pSVar20->projected_vertex).transformed_x)
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
          if (0xb < DAT_007c841c) {
            _DAT_01d1d400 = "..\\engine\\clipper.c";
            _DAT_01d1d404 = 0x5e;
            core_main_c_FUN_005030e0();
          }
          iVar6 = DAT_007c841c * 0x30;
          DAT_007c841c = DAT_007c841c + 1;
          uVar3 = uVar10 * 4;
          uVar10 = uVar10 + 1;
          *(SRenderVertex **)(local_18 + uVar3) = (SRenderVertex *)(&DAT_007c81dc + iVar6);
          engine_clipper_c_interpolateVertexRightClip_FUN_0043b4b0
                    (pSVar20,pSVar15,(SRenderVertex *)(&DAT_007c81dc + iVar6));
          break;
        case 2:
          iVar11 = uVar10 + 1;
          *(SRenderVertex **)(local_18 + uVar10 * 4) = pSVar15;
          if (0xb < iVar6) {
            _DAT_01d1d400 = "..\\engine\\clipper.c";
            _DAT_01d1d404 = 0x5e;
            core_main_c_FUN_005030e0();
          }
          iVar6 = DAT_007c841c * 0x30;
          DAT_007c841c = DAT_007c841c + 1;
          uVar10 = uVar10 + 2;
          *(SRenderVertex **)(local_18 + iVar11 * 4) = (SRenderVertex *)(&DAT_007c81dc + iVar6);
          engine_clipper_c_interpolateVertexRightClip_FUN_0043b4b0
                    (pSVar15,pSVar20,(SRenderVertex *)(&DAT_007c81dc + iVar6));
        }
        local_20 = local_20 + 1;
        piVar14 = piVar14 + 1;
        pSVar15 = pSVar20;
      } while (local_20 < local_44);
    }
    DAT_007c7554 = uVar10;
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
          pSVar20 = (SRenderVertex *)*local_38;
          bVar5 = (pSVar15->projected_vertex).transformed_x <=
                  -(pSVar15->projected_vertex).transformed_z;
          if ((pSVar20->projected_vertex).transformed_x <=
              -(pSVar20->projected_vertex).transformed_z) {
            bVar5 = bVar5 | 2;
          }
          uVar16 = uVar13;
          switch(bVar5) {
          case 0:
            uVar16 = uVar13 + 1;
            local_14c[uVar13] = (int)pSVar15;
            break;
          case 1:
            if (0xb < DAT_007c841c) {
              _DAT_01d1d400 = "..\\engine\\clipper.c";
              _DAT_01d1d404 = 0x5e;
              core_main_c_FUN_005030e0();
            }
            iVar6 = DAT_007c841c * 0x30;
            uVar16 = uVar13 + 1;
            DAT_007c841c = DAT_007c841c + 1;
            local_14c[uVar13] = (int)(&DAT_007c81dc + iVar6);
            engine_clipper_c_interpolateVertexLeftClip_FUN_0043b5b0
                      (pSVar20,pSVar15,(SRenderVertex *)(&DAT_007c81dc + iVar6));
            break;
          case 2:
            local_14c[uVar13] = (int)pSVar15;
            if (0xb < DAT_007c841c) {
              _DAT_01d1d400 = "..\\engine\\clipper.c";
              _DAT_01d1d404 = 0x5e;
              core_main_c_FUN_005030e0();
            }
            iVar6 = DAT_007c841c * 0x30;
            uVar16 = uVar13 + 2;
            DAT_007c841c = DAT_007c841c + 1;
            local_14c[uVar13 + 1] = (int)(&DAT_007c81dc + iVar6);
            engine_clipper_c_interpolateVertexLeftClip_FUN_0043b5b0
                      (pSVar15,pSVar20,(SRenderVertex *)(&DAT_007c81dc + iVar6));
          }
          local_30 = local_30 + 1;
          local_38 = local_38 + 1;
          uVar13 = uVar16;
          pSVar15 = pSVar20;
          puVar4 = local_38;
        } while (local_30 < (int)local_48);
      }
      DAT_007c7554 = uVar16;
      if (2 < (int)uVar16) {
        uVar10 = 0;
        local_3c = uVar16;
        local_24 = 0;
        pSVar15 = (SRenderVertex *)local_14c[uVar16 - 1];
        piVar8 = local_14c;
        if (0 < (int)uVar16) {
          do {
            local_2c = piVar8;
            pSVar20 = (SRenderVertex *)*local_2c;
            bVar5 = (pSVar15->projected_vertex).transformed_z <=
                    (pSVar15->projected_vertex).transformed_y;
            if ((pSVar20->projected_vertex).transformed_z <=
                (pSVar20->projected_vertex).transformed_y) {
              bVar5 = bVar5 | 2;
            }
            switch(bVar5) {
            case 0:
              uVar10 = uVar10 + 1;
              (&uStack_d0)[uVar10] = pSVar15;
              break;
            case 1:
              if (0xb < DAT_007c841c) {
                _DAT_01d1d400 = "..\\engine\\clipper.c";
                _DAT_01d1d404 = 0x5e;
                core_main_c_FUN_005030e0();
              }
              iVar6 = DAT_007c841c * 0x30;
              uVar10 = uVar10 + 1;
              DAT_007c841c = DAT_007c841c + 1;
              (&uStack_d0)[uVar10] = (SRenderVertex *)(&DAT_007c81dc + iVar6);
              engine_clipper_c_interpolateVertexTopClip_FUN_0043b6b0
                        (pSVar20,pSVar15,(SRenderVertex *)(&DAT_007c81dc + iVar6));
              break;
            case 2:
              (&uStack_d0)[uVar10 + 1] = pSVar15;
              if (0xb < DAT_007c841c) {
                _DAT_01d1d400 = "..\\engine\\clipper.c";
                _DAT_01d1d404 = 0x5e;
                core_main_c_FUN_005030e0();
              }
              iVar6 = DAT_007c841c * 0x30;
              uVar10 = uVar10 + 2;
              DAT_007c841c = DAT_007c841c + 1;
              (&uStack_d0)[uVar10] = (SRenderVertex *)(&DAT_007c81dc + iVar6);
              engine_clipper_c_interpolateVertexTopClip_FUN_0043b6b0
                        (pSVar15,pSVar20,(SRenderVertex *)(&DAT_007c81dc + iVar6));
            }
            local_24 = local_24 + 1;
            local_2c = local_2c + 1;
            pSVar15 = pSVar20;
            piVar8 = local_2c;
          } while (local_24 < (int)local_3c);
        }
        DAT_007c7554 = uVar10;
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
              pSVar20 = (SRenderVertex *)*local_34;
              bVar5 = (pSVar15->projected_vertex).transformed_y <=
                      -(pSVar15->projected_vertex).transformed_z;
              if ((pSVar20->projected_vertex).transformed_y <=
                  -(pSVar20->projected_vertex).transformed_z) {
                bVar5 = bVar5 | 2;
              }
              uVar16 = uVar13;
              switch(bVar5) {
              case 0:
                uVar16 = uVar13 + 1;
                local_14c[uVar13] = (int)pSVar15;
                break;
              case 1:
                if (0xb < DAT_007c841c) {
                  _DAT_01d1d400 = "..\\engine\\clipper.c";
                  _DAT_01d1d404 = 0x5e;
                  core_main_c_FUN_005030e0();
                }
                iVar6 = DAT_007c841c * 0x30;
                uVar16 = uVar13 + 1;
                DAT_007c841c = DAT_007c841c + 1;
                local_14c[uVar13] = (int)(&DAT_007c81dc + iVar6);
                engine_clipper_c_interpolateVertexBottomClip_FUN_0043b7b0
                          (pSVar20,pSVar15,(SRenderVertex *)(&DAT_007c81dc + iVar6));
                break;
              case 2:
                local_14c[uVar13] = (int)pSVar15;
                if (0xb < DAT_007c841c) {
                  _DAT_01d1d400 = "..\\engine\\clipper.c";
                  _DAT_01d1d404 = 0x5e;
                  core_main_c_FUN_005030e0();
                }
                iVar6 = DAT_007c841c * 0x30;
                uVar16 = uVar13 + 2;
                DAT_007c841c = DAT_007c841c + 1;
                local_14c[uVar13 + 1] = (int)(&DAT_007c81dc + iVar6);
                engine_clipper_c_interpolateVertexBottomClip_FUN_0043b7b0
                          (pSVar15,pSVar20,(SRenderVertex *)(&DAT_007c81dc + iVar6));
              }
              local_28 = local_28 + 1;
              local_34 = local_34 + 1;
              uVar13 = uVar16;
              pSVar15 = pSVar20;
              puVar4 = local_34;
            } while (local_28 < (int)local_40);
          }
          DAT_007c7554 = uVar16;
          if (2 < (int)uVar16) {
            iVar6 = 0;
            if (0 < (int)uVar16) {
              plVar12 = (longlong *)&DAT_007c7558;
              iVar11 = 0;
              do {
                plVar19 = *(longlong **)((int)local_14c + iVar11);
                iVar17 = 0x30;
                plVar18 = plVar12;
                while (7 < iVar17) {
                  lVar1 = *plVar19;
                  plVar19 = plVar19 + 1;
                  *plVar18 = (longlong)ROUND((float10)lVar1);
                  plVar18 = plVar18 + 1;
                  iVar17 = iVar17 + -8;
                }
                if (iVar17 != 0 && -9 < iVar17 + -8) {
                  *(int *)plVar18 = (int)*plVar19;
                  if (4 < iVar17) {
                    *(uint *)((int)plVar18 + (uint)bVar22 * -8 + 4) =
                         *(uint *)((int)plVar19 + (uint)bVar22 * -8 + 4);
                  }
                }
                iVar11 = iVar11 + 4;
                iVar6 = iVar6 + 1;
                plVar12 = plVar12 + 6;
              } while (iVar6 < (int)DAT_007c7554);
            }
            iVar6 = 0;
            if (DAT_00610d44 != 0) {
              if (0 < (int)DAT_007c7554) {
                iVar11 = 0;
                do {
                  if (iVar6 < *(int *)((int)&DAT_007c7560 + iVar11)) {
                    iVar6 = *(int *)((int)&DAT_007c7560 + iVar11);
                  }
                  iVar11 = iVar11 + 0x30;
                } while (iVar11 < (int)(DAT_007c7554 * 0x30));
              }
              if (DAT_00610d44 <= iVar6) {
                DAT_007c7bd8 = DAT_007c7554;
                plVar19 = &DAT_007c7be0 + -(uint)bVar22;
                plVar12 = (longlong *)(&DAT_007c755c + (uint)bVar22 * -2);
                DAT_007c7bdc = DAT_007c7558;
                iVar6 = DAT_007c7554 * 0x30 + -4;
                if (iVar6 != 0 && 3 < (int)(DAT_007c7554 * 0x30)) {
                  while (7 < iVar6) {
                    lVar1 = *plVar12;
                    plVar12 = plVar12 + 1;
                    *plVar19 = (longlong)ROUND((float10)lVar1);
                    plVar19 = plVar19 + 1;
                    iVar6 = iVar6 + -8;
                  }
                  if (iVar6 != 0 && -9 < iVar6 + -8) {
                    *(int *)plVar19 = (int)*plVar12;
                    if (4 < iVar6) {
                      *(uint *)((int)plVar19 + (uint)bVar22 * -8 + 4) =
                           *(uint *)((int)plVar12 + (uint)bVar22 * -8 + 4);
                    }
                  }
                }
                DAT_007c7554 = 0;
                local_14 = 0;
                if (0 < (int)DAT_007c7bd8) {
                  pSVar15 = (SRenderVertex *)&DAT_007c7bdc;
                  do {
                    uVar10 = local_14 + 1;
                    if (uVar10 == DAT_007c7bd8) {
                      uVar10 = uVar10 ^ DAT_007c7bd8;
                    }
                    bVar5 = DAT_00610d44 <= (pSVar15->projected_vertex).transformed_z;
                    if (DAT_00610d44 <= *(int *)((int)&DAT_007c7be0 + uVar10 * 0x30 + 4)) {
                      bVar5 = bVar5 | 2;
                    }
                    switch(bVar5) {
                    case 0:
                      plVar12 = (longlong *)(&DAT_007c7558 + DAT_007c7554 * 0xc);
                      iVar6 = 0x30;
                      pSVar20 = pSVar15;
                      while (7 < iVar6) {
                        lVar2._0_4_ = (pSVar20->projected_vertex).transformed_x;
                        lVar2._4_4_ = (pSVar20->projected_vertex).transformed_y;
                        pSVar20 = (SRenderVertex *)&(pSVar20->projected_vertex).transformed_z;
                        *plVar12 = (longlong)ROUND((float10)lVar2);
                        plVar12 = plVar12 + 1;
                        iVar6 = iVar6 + -8;
                      }
                      if (iVar6 != 0 && -9 < iVar6 + -8) {
                        *(int *)plVar12 = (pSVar20->projected_vertex).transformed_x;
                        if (4 < iVar6) {
                          *(uint *)((int)plVar12 + (uint)bVar22 * -8 + 4) =
                               *(uint *)((int)pSVar20 + (uint)bVar22 * -8 + 4);
                        }
                      }
                      DAT_007c7554 = DAT_007c7554 + 1;
                      break;
                    case 1:
                      engine_clipper_c_interpolateVertexFarClip_FUN_0043b8b0
                                ((SRenderVertex *)(&DAT_007c7bdc + uVar10 * 0xc),pSVar15,
                                 (SRenderVertex *)(&DAT_007c7558 + DAT_007c7554 * 0xc));
                      DAT_007c7554 = DAT_007c7554 + 1;
                      break;
                    case 2:
                      plVar12 = (longlong *)(&DAT_007c7558 + DAT_007c7554 * 0xc);
                      iVar6 = 0x30;
                      pSVar20 = pSVar15;
                      while (7 < iVar6) {
                        lVar1._0_4_ = (pSVar20->projected_vertex).transformed_x;
                        lVar1._4_4_ = (pSVar20->projected_vertex).transformed_y;
                        pSVar20 = (SRenderVertex *)&(pSVar20->projected_vertex).transformed_z;
                        *plVar12 = (longlong)ROUND((float10)lVar1);
                        plVar12 = plVar12 + 1;
                        iVar6 = iVar6 + -8;
                      }
                      if (iVar6 != 0 && -9 < iVar6 + -8) {
                        *(int *)plVar12 = (pSVar20->projected_vertex).transformed_x;
                        if (4 < iVar6) {
                          *(uint *)((int)plVar12 + (uint)bVar22 * -8 + 4) =
                               *(uint *)((int)pSVar20 + (uint)bVar22 * -8 + 4);
                        }
                      }
                      DAT_007c7554 = DAT_007c7554 + 1;
                      engine_clipper_c_interpolateVertexFarClip_FUN_0043b8b0
                                (pSVar15,(SRenderVertex *)(&DAT_007c7bdc + uVar10 * 0xc),
                                 (SRenderVertex *)(&DAT_007c7558 + DAT_007c7554 * 0xc));
                      DAT_007c7554 = DAT_007c7554 + 1;
                    }
                    local_14 = local_14 + 1;
                    pSVar15 = pSVar15 + 1;
                  } while (local_14 < (int)DAT_007c7bd8);
                }
              }
            }
            if (2 < (int)DAT_007c7554) {
              iVar6 = 0;
              if (0 < (int)DAT_007c7554) {
                piVar8 = &DAT_007c7558;
                do {
                  iVar11 = piVar8[2];
                  if (iVar11 == 0) {
                    piVar8[2] = 1;
                    *piVar8 = 0;
                    iVar7 = 0;
LAB_0043c6be:
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
                        else if (-iVar17 != iVar11 && iVar17 <= iVar7) goto LAB_0043c6be;
                      }
                      else {
                        *piVar8 = iVar7;
                      }
                    }
                  }
                  iVar6 = iVar6 + 1;
                  piVar8 = piVar8 + 0xc;
                } while (iVar6 < (int)DAT_007c7554);
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
