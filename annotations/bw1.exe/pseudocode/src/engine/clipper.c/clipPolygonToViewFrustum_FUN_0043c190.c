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

int __cdecl engine_clipper_c_clipPolygonToViewFrustum_FUN_0043c190(int vertex_count,int *vertex_indices)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint *puVar7;
  byte bVar8;
  int iVar9;
  int iVar10;
  char cVar11;
  int *piVar13;
  int iVar14;
  SRenderVertex *pSVar15;
  int *piVar16;
  uint uVar17;
  int iVar18;
  SRenderVertex *pSVar19;
  longlong *plVar20;
  SRenderVertex *pSVar21;
  longlong *plVar22;
  bool bVar23;
  byte bVar24;
  int local_14c [31];
  uint uStack_d0;
  byte local_cc [128];
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
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
  uint uVar12;
  
  bVar24 = 0;
  piVar16 = local_14c;
  uVar12 = 0xffffffff;
  cVar11 = -1;
  iVar9 = 0;
  uVar17 = 0;
  piVar13 = vertex_indices;
  if (0 < vertex_count) {
    do {
      uVar4 = g_SRenderVertex_ARRAY_00629014[*piVar13].projected_vertex.screen_x;
      if ((uVar4 & 0x80000000) != 0) {
        uVar17 = uVar17 + 1;
      }
      iVar9 = iVar9 + 1;
      uVar12 = uVar12 & uVar4;
      cVar11 = (char)uVar12;
      piVar13 = piVar13 + 1;
    } while (iVar9 < vertex_count);
  }
  if ((uVar17 == vertex_count) && (cVar11 != '\0')) {
    g_INT_007c7554 = uVar17 ^ vertex_count;
  }
  else {
    if (uVar17 == 0) {
      if ((g_INT_01c50948 == 0) || (g_TexturesDisabled != 0)) {
        g_INT_007c7554 = vertex_count;
        local_1c = 0;
        if (0 < vertex_count) {
          pSVar15 = g_SRenderVertex_ARRAY_007c7558;
          do {
            pSVar19 = g_SRenderVertex_ARRAY_00629014 + *vertex_indices;
            iVar9 = 0x30;
            pSVar21 = pSVar15;
            while (7 < iVar9) {
              lVar1._0_4_ = (pSVar19->projected_vertex).transformed_x;
              lVar1._4_4_ = (pSVar19->projected_vertex).transformed_y;
              pSVar19 = (SRenderVertex *)&(pSVar19->projected_vertex).transformed_z;
              (pSVar21->projected_vertex).transformed_x = (int)(longlong)ROUND((float10)lVar1);
              (pSVar21->projected_vertex).transformed_y =
                   (int)((ulonglong)(longlong)ROUND((float10)lVar1) >> 0x20);
              pSVar21 = (SRenderVertex *)&(pSVar21->projected_vertex).transformed_z;
              iVar9 = iVar9 + -8;
            }
            if (iVar9 != 0 && -9 < iVar9 + -8) {
              (pSVar21->projected_vertex).transformed_x = (pSVar19->projected_vertex).transformed_x;
              if (4 < iVar9) {
                (pSVar21->projected_vertex).transformed_y =
                     (pSVar19->projected_vertex).transformed_y;
              }
            }
            vertex_indices = vertex_indices + 1;
            local_1c = local_1c + 1;
            pSVar15 = pSVar15 + 1;
          } while (local_1c < vertex_count);
        }
        return 0;
      }
      iVar9 = 0;
      if (0 < vertex_count) {
        do {
          iVar14 = *vertex_indices;
          iVar9 = iVar9 + 1;
          vertex_indices = vertex_indices + 1;
          g_INT_ARRAY_007c7b54[iVar9] = (int)(g_SRenderVertex_ARRAY_00629014 + iVar14);
        } while (iVar9 < vertex_count);
      }
      if (g_CullingMode != 0) {
        if (vertex_count < 4) {
          iVar9 = engine_prim_c_calculateTriangleWindingOrder_FUN_0053dd60
                            (g_ClipperCullingPointers[0],g_ClipperCullingPointers[1],
                             g_ClipperCullingPointers[2]);
          bVar23 = iVar9 == 0;
        }
        else {
          local_4c = vertex_count + -2;
          iVar14 = 0;
          iVar9 = local_4c * 4;
          iVar18 = 0;
          if (0 < iVar9) {
            do {
              iVar10 = engine_prim_c_calculateTriangleWindingOrder_FUN_0053dd60
                                 (g_ClipperCullingPointers[0],
                                  *(SRenderVertex **)((int)g_ClipperCullingPointers + iVar14 + 4),
                                  *(SRenderVertex **)((int)g_ClipperCullingPointers + iVar14 + 8));
              if (iVar10 == 0) {
                iVar18 = iVar18 + 1;
              }
              iVar14 = iVar14 + 4;
            } while (iVar14 < iVar9);
          }
          bVar23 = iVar18 == local_4c;
        }
        if (bVar23) {
          return 1;
        }
      }
      g_RenderedTriangleCount = g_RenderedTriangleCount + vertex_count + -2;
      engine_special_cpp_drawPolygon2_FUN_00582370
                (g_ClipperCullingPointers,vertex_count,g_RenderStateFlags.dword);
      return 1;
    }
    iVar9 = 0;
    if (0 < vertex_count) {
      do {
        iVar14 = *vertex_indices;
        iVar18 = iVar9 + 1;
        vertex_indices = vertex_indices + 1;
        local_14c[iVar9] = (int)(g_SRenderVertex_ARRAY_00629014 + iVar14);
        iVar9 = iVar18;
      } while (iVar18 < vertex_count);
    }
    g_INT_007c7554 = vertex_count;
    local_44 = vertex_count;
    iVar9 = 0;
    g_ClipperTempCount = 0;
    local_18 = (int)local_cc;
    local_20 = 0;
    pSVar15 = (SRenderVertex *)local_14c[vertex_count + -1];
    if (0 < vertex_count) {
      do {
        iVar14 = g_ClipperTempCount;
        pSVar21 = (SRenderVertex *)*piVar16;
        bVar8 = (pSVar15->projected_vertex).transformed_z <=
                (pSVar15->projected_vertex).transformed_x;
        if ((pSVar21->projected_vertex).transformed_z <= (pSVar21->projected_vertex).transformed_x)
        {
          bVar8 = bVar8 | 2;
        }
        switch(bVar8) {
        case 0:
          uVar6 = iVar9 * 4;
          iVar9 = iVar9 + 1;
          *(SRenderVertex **)(local_18 + uVar6) = pSVar15;
          break;
        case 1:
          if (0xb < g_ClipperTempCount) {
            g_CHAR_PTR_01d1d400 = "..\\engine\\clipper.c";
            g_INT_01d1d404 = 0x5e;
            core_main_c_displayErrorAndQuit_FUN_005030e0("Ran out of clipped verts!");
          }
          pSVar19 = g_ClipperTempBuffer + g_ClipperTempCount;
          g_ClipperTempCount = g_ClipperTempCount + 1;
          uVar6 = iVar9 * 4;
          iVar9 = iVar9 + 1;
          *(SRenderVertex **)(local_18 + uVar6) = pSVar19;
          engine_clipper_c_interpolateVertexRightClip_FUN_0043b4b0(pSVar21,pSVar15,pSVar19);
          break;
        case 2:
          iVar18 = iVar9 + 1;
          *(SRenderVertex **)(local_18 + iVar9 * 4) = pSVar15;
          if (0xb < iVar14) {
            g_CHAR_PTR_01d1d400 = "..\\engine\\clipper.c";
            g_INT_01d1d404 = 0x5e;
            core_main_c_displayErrorAndQuit_FUN_005030e0("Ran out of clipped verts!");
          }
          pSVar19 = g_ClipperTempBuffer + g_ClipperTempCount;
          g_ClipperTempCount = g_ClipperTempCount + 1;
          iVar9 = iVar9 + 2;
          *(SRenderVertex **)(local_18 + iVar18 * 4) = pSVar19;
          engine_clipper_c_interpolateVertexRightClip_FUN_0043b4b0(pSVar15,pSVar21,pSVar19);
        }
        local_20 = local_20 + 1;
        piVar16 = piVar16 + 1;
        pSVar15 = pSVar21;
      } while (local_20 < local_44);
    }
    g_INT_007c7554 = iVar9;
    if (2 < iVar9) {
      iVar14 = 0;
      local_48 = iVar9;
      local_30 = 0;
      pSVar15 = (SRenderVertex *)(&uStack_d0)[iVar9];
      iVar18 = iVar14;
      puVar7 = (uint *)local_cc;
      if (0 < iVar9) {
        do {
          local_38 = puVar7;
          pSVar21 = (SRenderVertex *)*local_38;
          bVar8 = (pSVar15->projected_vertex).transformed_x <=
                  -(pSVar15->projected_vertex).transformed_z;
          if ((pSVar21->projected_vertex).transformed_x <=
              -(pSVar21->projected_vertex).transformed_z) {
            bVar8 = bVar8 | 2;
          }
          iVar14 = iVar18;
          switch(bVar8) {
          case 0:
            iVar14 = iVar18 + 1;
            local_14c[iVar18] = (int)pSVar15;
            break;
          case 1:
            if (0xb < g_ClipperTempCount) {
              g_CHAR_PTR_01d1d400 = "..\\engine\\clipper.c";
              g_INT_01d1d404 = 0x5e;
              core_main_c_displayErrorAndQuit_FUN_005030e0("Ran out of clipped verts!");
            }
            pSVar19 = g_ClipperTempBuffer + g_ClipperTempCount;
            iVar14 = iVar18 + 1;
            g_ClipperTempCount = g_ClipperTempCount + 1;
            local_14c[iVar18] = (int)pSVar19;
            engine_clipper_c_interpolateVertexLeftClip_FUN_0043b5b0(pSVar21,pSVar15,pSVar19);
            break;
          case 2:
            local_14c[iVar18] = (int)pSVar15;
            if (0xb < g_ClipperTempCount) {
              g_CHAR_PTR_01d1d400 = "..\\engine\\clipper.c";
              g_INT_01d1d404 = 0x5e;
              core_main_c_displayErrorAndQuit_FUN_005030e0("Ran out of clipped verts!");
            }
            pSVar19 = g_ClipperTempBuffer + g_ClipperTempCount;
            iVar14 = iVar18 + 2;
            g_ClipperTempCount = g_ClipperTempCount + 1;
            local_14c[iVar18 + 1] = (int)pSVar19;
            engine_clipper_c_interpolateVertexLeftClip_FUN_0043b5b0(pSVar15,pSVar21,pSVar19);
          }
          local_30 = local_30 + 1;
          local_38 = local_38 + 1;
          iVar18 = iVar14;
          pSVar15 = pSVar21;
          puVar7 = local_38;
        } while (local_30 < local_48);
      }
      g_INT_007c7554 = iVar14;
      if (2 < iVar14) {
        iVar9 = 0;
        local_3c = iVar14;
        local_24 = 0;
        pSVar15 = (SRenderVertex *)local_14c[iVar14 + -1];
        piVar13 = local_14c;
        if (0 < iVar14) {
          do {
            local_2c = piVar13;
            pSVar21 = (SRenderVertex *)*local_2c;
            bVar8 = (pSVar15->projected_vertex).transformed_z <=
                    (pSVar15->projected_vertex).transformed_y;
            if ((pSVar21->projected_vertex).transformed_z <=
                (pSVar21->projected_vertex).transformed_y) {
              bVar8 = bVar8 | 2;
            }
            switch(bVar8) {
            case 0:
              iVar9 = iVar9 + 1;
              (&uStack_d0)[iVar9] = pSVar15;
              break;
            case 1:
              if (0xb < g_ClipperTempCount) {
                g_CHAR_PTR_01d1d400 = "..\\engine\\clipper.c";
                g_INT_01d1d404 = 0x5e;
                core_main_c_displayErrorAndQuit_FUN_005030e0("Ran out of clipped verts!");
              }
              pSVar19 = g_ClipperTempBuffer + g_ClipperTempCount;
              iVar9 = iVar9 + 1;
              g_ClipperTempCount = g_ClipperTempCount + 1;
              (&uStack_d0)[iVar9] = pSVar19;
              engine_clipper_c_interpolateVertexTopClip_FUN_0043b6b0(pSVar21,pSVar15,pSVar19);
              break;
            case 2:
              (&uStack_d0)[iVar9 + 1] = pSVar15;
              if (0xb < g_ClipperTempCount) {
                g_CHAR_PTR_01d1d400 = "..\\engine\\clipper.c";
                g_INT_01d1d404 = 0x5e;
                core_main_c_displayErrorAndQuit_FUN_005030e0("Ran out of clipped verts!");
              }
              pSVar19 = g_ClipperTempBuffer + g_ClipperTempCount;
              iVar9 = iVar9 + 2;
              g_ClipperTempCount = g_ClipperTempCount + 1;
              (&uStack_d0)[iVar9] = pSVar19;
              engine_clipper_c_interpolateVertexTopClip_FUN_0043b6b0(pSVar15,pSVar21,pSVar19);
            }
            local_24 = local_24 + 1;
            local_2c = local_2c + 1;
            pSVar15 = pSVar21;
            piVar13 = local_2c;
          } while (local_24 < local_3c);
        }
        g_INT_007c7554 = iVar9;
        if (2 < iVar9) {
          iVar14 = 0;
          local_40 = iVar9;
          local_28 = 0;
          pSVar15 = (SRenderVertex *)(&uStack_d0)[iVar9];
          iVar18 = iVar14;
          puVar7 = (uint *)local_cc;
          if (0 < iVar9) {
            do {
              local_34 = puVar7;
              pSVar21 = (SRenderVertex *)*local_34;
              bVar8 = (pSVar15->projected_vertex).transformed_y <=
                      -(pSVar15->projected_vertex).transformed_z;
              if ((pSVar21->projected_vertex).transformed_y <=
                  -(pSVar21->projected_vertex).transformed_z) {
                bVar8 = bVar8 | 2;
              }
              iVar14 = iVar18;
              switch(bVar8) {
              case 0:
                iVar14 = iVar18 + 1;
                local_14c[iVar18] = (int)pSVar15;
                break;
              case 1:
                if (0xb < g_ClipperTempCount) {
                  g_CHAR_PTR_01d1d400 = "..\\engine\\clipper.c";
                  g_INT_01d1d404 = 0x5e;
                  core_main_c_displayErrorAndQuit_FUN_005030e0("Ran out of clipped verts!");
                }
                pSVar19 = g_ClipperTempBuffer + g_ClipperTempCount;
                iVar14 = iVar18 + 1;
                g_ClipperTempCount = g_ClipperTempCount + 1;
                local_14c[iVar18] = (int)pSVar19;
                engine_clipper_c_interpolateVertexBottomClip_FUN_0043b7b0(pSVar21,pSVar15,pSVar19);
                break;
              case 2:
                local_14c[iVar18] = (int)pSVar15;
                if (0xb < g_ClipperTempCount) {
                  g_CHAR_PTR_01d1d400 = "..\\engine\\clipper.c";
                  g_INT_01d1d404 = 0x5e;
                  core_main_c_displayErrorAndQuit_FUN_005030e0("Ran out of clipped verts!");
                }
                pSVar19 = g_ClipperTempBuffer + g_ClipperTempCount;
                iVar14 = iVar18 + 2;
                g_ClipperTempCount = g_ClipperTempCount + 1;
                local_14c[iVar18 + 1] = (int)pSVar19;
                engine_clipper_c_interpolateVertexBottomClip_FUN_0043b7b0(pSVar15,pSVar21,pSVar19);
              }
              local_28 = local_28 + 1;
              local_34 = local_34 + 1;
              iVar18 = iVar14;
              pSVar15 = pSVar21;
              puVar7 = local_34;
            } while (local_28 < local_40);
          }
          g_INT_007c7554 = iVar14;
          if (2 < iVar14) {
            iVar9 = 0;
            if (0 < iVar14) {
              pSVar15 = g_SRenderVertex_ARRAY_007c7558;
              iVar14 = 0;
              do {
                plVar20 = *(longlong **)((int)local_14c + iVar14);
                iVar18 = 0x30;
                pSVar21 = pSVar15;
                while (7 < iVar18) {
                  lVar1 = *plVar20;
                  plVar20 = plVar20 + 1;
                  (pSVar21->projected_vertex).transformed_x = (int)(longlong)ROUND((float10)lVar1);
                  (pSVar21->projected_vertex).transformed_y =
                       (int)((ulonglong)(longlong)ROUND((float10)lVar1) >> 0x20);
                  pSVar21 = (SRenderVertex *)&(pSVar21->projected_vertex).transformed_z;
                  iVar18 = iVar18 + -8;
                }
                if (iVar18 != 0 && -9 < iVar18 + -8) {
                  (pSVar21->projected_vertex).transformed_x = (int)*plVar20;
                  if (4 < iVar18) {
                    *(uint *)((int)pSVar21 + (uint)bVar24 * -8 + 4) =
                         *(uint *)((int)plVar20 + (uint)bVar24 * -8 + 4);
                  }
                }
                iVar14 = iVar14 + 4;
                iVar9 = iVar9 + 1;
                pSVar15 = pSVar15 + 1;
              } while (iVar9 < g_INT_007c7554);
            }
            iVar9 = 0;
            if (g_FarPlaneDistance != 0) {
              if (0 < g_INT_007c7554) {
                iVar14 = 0;
                do {
                  iVar18 = *(int *)((int)&g_SRenderVertex_ARRAY_007c7558[0].projected_vertex.
                                          transformed_z + iVar14);
                  if (iVar9 < iVar18) {
                    iVar9 = iVar18;
                  }
                  iVar14 = iVar14 + 0x30;
                } while (iVar14 < g_INT_007c7554 * 0x30);
              }
              if (g_FarPlaneDistance <= iVar9) {
                g_INT_007c7bd8 = g_INT_007c7554;
                plVar22 = (longlong *)((int)g_SRenderVertex_ARRAY_007c7bdc + (uint)bVar24 * -8 + 4);
                plVar20 = (longlong *)((int)g_SRenderVertex_ARRAY_007c7558 + (uint)bVar24 * -8 + 4);
                g_SRenderVertex_ARRAY_007c7bdc[0].projected_vertex.transformed_x =
                     g_SRenderVertex_ARRAY_007c7558[0].projected_vertex.transformed_x;
                iVar9 = g_INT_007c7554 * 0x30 + -4;
                if (iVar9 != 0 && 3 < g_INT_007c7554 * 0x30) {
                  while (7 < iVar9) {
                    lVar1 = *plVar20;
                    plVar20 = plVar20 + 1;
                    *plVar22 = (longlong)ROUND((float10)lVar1);
                    plVar22 = plVar22 + 1;
                    iVar9 = iVar9 + -8;
                  }
                  if (iVar9 != 0 && -9 < iVar9 + -8) {
                    *(int *)plVar22 = (int)*plVar20;
                    if (4 < iVar9) {
                      *(uint *)((int)plVar22 + (uint)bVar24 * -8 + 4) =
                           *(uint *)((int)plVar20 + (uint)bVar24 * -8 + 4);
                    }
                  }
                }
                g_INT_007c7554 = 0;
                local_14 = 0;
                if (0 < g_INT_007c7bd8) {
                  pSVar15 = g_SRenderVertex_ARRAY_007c7bdc;
                  do {
                    uVar12 = local_14 + 1;
                    if (uVar12 == g_INT_007c7bd8) {
                      uVar12 = uVar12 ^ g_INT_007c7bd8;
                    }
                    bVar8 = g_FarPlaneDistance <= (pSVar15->projected_vertex).transformed_z;
                    if (g_FarPlaneDistance <=
                        g_SRenderVertex_ARRAY_007c7bdc[uVar12].projected_vertex.transformed_z) {
                      bVar8 = bVar8 | 2;
                    }
                    switch(bVar8) {
                    case 0:
                      pSVar19 = g_SRenderVertex_ARRAY_007c7558 + g_INT_007c7554;
                      iVar9 = 0x30;
                      pSVar21 = pSVar15;
                      while (7 < iVar9) {
                        lVar2._0_4_ = (pSVar21->projected_vertex).transformed_x;
                        lVar2._4_4_ = (pSVar21->projected_vertex).transformed_y;
                        pSVar21 = (SRenderVertex *)&(pSVar21->projected_vertex).transformed_z;
                        (pSVar19->projected_vertex).transformed_x =
                             (int)(longlong)ROUND((float10)lVar2);
                        (pSVar19->projected_vertex).transformed_y =
                             (int)((ulonglong)(longlong)ROUND((float10)lVar2) >> 0x20);
                        pSVar19 = (SRenderVertex *)&(pSVar19->projected_vertex).transformed_z;
                        iVar9 = iVar9 + -8;
                      }
                      if (iVar9 != 0 && -9 < iVar9 + -8) {
                        (pSVar19->projected_vertex).transformed_x =
                             (pSVar21->projected_vertex).transformed_x;
                        if (4 < iVar9) {
                          *(uint *)((int)pSVar19 + (uint)bVar24 * -8 + 4) =
                               *(uint *)((int)pSVar21 + (uint)bVar24 * -8 + 4);
                        }
                      }
                      g_INT_007c7554 = g_INT_007c7554 + 1;
                      break;
                    case 1:
                      engine_clipper_c_interpolateVertexFarClip_FUN_0043b8b0
                                (g_SRenderVertex_ARRAY_007c7bdc + uVar12,pSVar15,
                                 g_SRenderVertex_ARRAY_007c7558 + g_INT_007c7554);
                      g_INT_007c7554 = g_INT_007c7554 + 1;
                      break;
                    case 2:
                      pSVar19 = g_SRenderVertex_ARRAY_007c7558 + g_INT_007c7554;
                      iVar9 = 0x30;
                      pSVar21 = pSVar15;
                      while (7 < iVar9) {
                        lVar3._0_4_ = (pSVar21->projected_vertex).transformed_x;
                        lVar3._4_4_ = (pSVar21->projected_vertex).transformed_y;
                        pSVar21 = (SRenderVertex *)&(pSVar21->projected_vertex).transformed_z;
                        (pSVar19->projected_vertex).transformed_x =
                             (int)(longlong)ROUND((float10)lVar3);
                        (pSVar19->projected_vertex).transformed_y =
                             (int)((ulonglong)(longlong)ROUND((float10)lVar3) >> 0x20);
                        pSVar19 = (SRenderVertex *)&(pSVar19->projected_vertex).transformed_z;
                        iVar9 = iVar9 + -8;
                      }
                      if (iVar9 != 0 && -9 < iVar9 + -8) {
                        (pSVar19->projected_vertex).transformed_x =
                             (pSVar21->projected_vertex).transformed_x;
                        if (4 < iVar9) {
                          *(uint *)((int)pSVar19 + (uint)bVar24 * -8 + 4) =
                               *(uint *)((int)pSVar21 + (uint)bVar24 * -8 + 4);
                        }
                      }
                      g_INT_007c7554 = g_INT_007c7554 + 1;
                      engine_clipper_c_interpolateVertexFarClip_FUN_0043b8b0
                                (pSVar15,g_SRenderVertex_ARRAY_007c7bdc + uVar12,
                                 g_SRenderVertex_ARRAY_007c7558 + g_INT_007c7554);
                      g_INT_007c7554 = g_INT_007c7554 + 1;
                    }
                    local_14 = local_14 + 1;
                    pSVar15 = pSVar15 + 1;
                  } while (local_14 < g_INT_007c7bd8);
                }
              }
            }
            if (2 < g_INT_007c7554) {
              iVar9 = 0;
              if (0 < g_INT_007c7554) {
                pSVar15 = g_SRenderVertex_ARRAY_007c7558;
                do {
                  iVar14 = (pSVar15->projected_vertex).transformed_z;
                  if (iVar14 == 0) {
                    (pSVar15->projected_vertex).transformed_z = 1;
                    (pSVar15->projected_vertex).transformed_x = 0;
                    iVar10 = 0;
LAB_0043c6be:
                    (pSVar15->projected_vertex).transformed_y = iVar10;
                  }
                  else {
                    iVar18 = (pSVar15->projected_vertex).transformed_x;
                    if (iVar14 < iVar18) {
                      (pSVar15->projected_vertex).transformed_x = iVar14;
                    }
                    else {
                      iVar10 = -iVar14;
                      if (-iVar18 == iVar14 || iVar10 < iVar18) {
                        iVar18 = (pSVar15->projected_vertex).transformed_z;
                        iVar5 = (pSVar15->projected_vertex).transformed_y;
                        if (iVar18 < iVar5) {
                          (pSVar15->projected_vertex).transformed_y = iVar18;
                        }
                        else if (-iVar5 != iVar14 && iVar5 <= iVar10) goto LAB_0043c6be;
                      }
                      else {
                        (pSVar15->projected_vertex).transformed_x = iVar10;
                      }
                    }
                  }
                  iVar9 = iVar9 + 1;
                  pSVar15 = pSVar15 + 1;
                } while (iVar9 < g_INT_007c7554);
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
