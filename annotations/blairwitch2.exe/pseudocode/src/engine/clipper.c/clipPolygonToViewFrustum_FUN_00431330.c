// Name: engine_clipper.c_clipPolygonToViewFrustum_FUN_00431330
// Address: 00431330
// Address Range: [[00431330, 00431d8b]]
// Convention: __cdecl
// Signature: int __cdecl engine_clipper_c_clipPolygonToViewFrustum_FUN_00431330(int vertex_count,int *vertex_indices)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x00431bc1) */
/* WARNING: Type propagation algorithm not settling */

int __cdecl engine_clipper_c_clipPolygonToViewFrustum_FUN_00431330(int vertex_count,int *vertex_indices)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  longlong *plVar6;
  int iVar7;
  uint uVar8;
  uint *puVar9;
  byte bVar10;
  int iVar11;
  int iVar12;
  char cVar13;
  int *piVar15;
  int iVar16;
  SRenderVertex *pSVar17;
  int *piVar18;
  uint uVar19;
  int iVar20;
  longlong *plVar21;
  SRenderVertex *pSVar22;
  SRenderVertex *pSVar23;
  SRenderVertex *pSVar24;
  bool bVar25;
  byte bVar26;
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
  uint uVar14;
  
  bVar26 = 0;
  piVar18 = local_14c;
  uVar14 = 0xffffffff;
  cVar13 = -1;
  iVar11 = 0;
  uVar19 = 0;
  piVar15 = vertex_indices;
  if (0 < vertex_count) {
    do {
      uVar5 = g_SRenderVertex_ARRAY_00622014[*piVar15].projected_vertex.screen_x;
      if ((uVar5 & 0x80000000) != 0) {
        uVar19 = uVar19 + 1;
      }
      iVar11 = iVar11 + 1;
      uVar14 = uVar14 & uVar5;
      cVar13 = (char)uVar14;
      piVar15 = piVar15 + 1;
    } while (iVar11 < vertex_count);
  }
  if ((uVar19 == vertex_count) && (cVar13 != '\0')) {
    g_INT_007bee30 = uVar19 ^ vertex_count;
  }
  else {
    if (uVar19 == 0) {
      if ((g_INT_01c37788 == 0) || (g_TexturesDisabled != 0)) {
        g_INT_007bee30 = vertex_count;
        local_1c = 0;
        if (0 < vertex_count) {
          pSVar17 = g_SRenderVertex_ARRAY_007bee34;
          do {
            iVar11 = 0x30;
            pSVar22 = g_SRenderVertex_ARRAY_00622014 + *vertex_indices;
            pSVar24 = pSVar17;
            if (((uint)pSVar17 & 7) != 0) {
              pSVar24 = (SRenderVertex *)&(pSVar17->projected_vertex).transformed_y;
              pSVar22 = (SRenderVertex *)
                        &g_SRenderVertex_ARRAY_00622014[*vertex_indices].projected_vertex.
                         transformed_y;
              (pSVar17->projected_vertex).transformed_x =
                   g_SRenderVertex_ARRAY_00622014[*vertex_indices].projected_vertex.transformed_x;
              iVar11 = 0x2c;
            }
            while (7 < iVar11) {
              lVar1._0_4_ = (pSVar22->projected_vertex).transformed_x;
              lVar1._4_4_ = (pSVar22->projected_vertex).transformed_y;
              pSVar22 = (SRenderVertex *)&(pSVar22->projected_vertex).transformed_z;
              (pSVar24->projected_vertex).transformed_x = (int)(longlong)ROUND((float10)lVar1);
              (pSVar24->projected_vertex).transformed_y =
                   (int)((ulonglong)(longlong)ROUND((float10)lVar1) >> 0x20);
              pSVar24 = (SRenderVertex *)&(pSVar24->projected_vertex).transformed_z;
              iVar11 = iVar11 + -8;
            }
            if (iVar11 != 0 && -9 < iVar11 + -8) {
              (pSVar24->projected_vertex).transformed_x = (pSVar22->projected_vertex).transformed_x;
              if (4 < iVar11) {
                (pSVar24->projected_vertex).transformed_y =
                     (pSVar22->projected_vertex).transformed_y;
              }
            }
            vertex_indices = vertex_indices + 1;
            local_1c = local_1c + 1;
            pSVar17 = pSVar17 + 1;
          } while (local_1c < vertex_count);
        }
        return 0;
      }
      iVar11 = 0;
      if (0 < vertex_count) {
        do {
          iVar16 = *vertex_indices;
          iVar11 = iVar11 + 1;
          vertex_indices = vertex_indices + 1;
          g_INT_ARRAY_007bf430[iVar11] = (int)(g_SRenderVertex_ARRAY_00622014 + iVar16);
        } while (iVar11 < vertex_count);
      }
      if (g_CullingMode != 0) {
        if (vertex_count < 4) {
          iVar11 = engine_prim_c_calculateTriangleWindingOrder_FUN_0051c760
                             (g_ClipperCullingPointers[0],g_ClipperCullingPointers[1],
                              g_ClipperCullingPointers[2]);
          bVar25 = iVar11 == 0;
        }
        else {
          local_4c = vertex_count + -2;
          iVar16 = 0;
          iVar11 = local_4c * 4;
          iVar20 = 0;
          if (0 < iVar11) {
            do {
              iVar12 = engine_prim_c_calculateTriangleWindingOrder_FUN_0051c760
                                 (g_ClipperCullingPointers[0],
                                  *(SRenderVertex **)((int)g_ClipperCullingPointers + iVar16 + 4),
                                  *(SRenderVertex **)((int)g_ClipperCullingPointers + iVar16 + 8));
              if (iVar12 == 0) {
                iVar20 = iVar20 + 1;
              }
              iVar16 = iVar16 + 4;
            } while (iVar16 < iVar11);
          }
          bVar25 = iVar20 == local_4c;
        }
        if (bVar25) {
          return 1;
        }
      }
      g_RenderedTriangleCount = g_RenderedTriangleCount + vertex_count + -2;
      engine_special_cpp_drawPolygon2_FUN_0055f920
                (g_ClipperCullingPointers,vertex_count,g_RenderStateFlags.dword);
      return 1;
    }
    iVar11 = 0;
    if (0 < vertex_count) {
      do {
        iVar16 = *vertex_indices;
        iVar20 = iVar11 + 1;
        vertex_indices = vertex_indices + 1;
        local_14c[iVar11] = (int)(g_SRenderVertex_ARRAY_00622014 + iVar16);
        iVar11 = iVar20;
      } while (iVar20 < vertex_count);
    }
    g_INT_007bee30 = vertex_count;
    local_44 = vertex_count;
    iVar11 = 0;
    g_ClipperTempCount = 0;
    local_18 = (int)local_cc;
    local_20 = 0;
    pSVar17 = (SRenderVertex *)local_14c[vertex_count + -1];
    if (0 < vertex_count) {
      do {
        iVar16 = g_ClipperTempCount;
        pSVar22 = (SRenderVertex *)*piVar18;
        bVar10 = (pSVar17->projected_vertex).transformed_z <=
                 (pSVar17->projected_vertex).transformed_x;
        if ((pSVar22->projected_vertex).transformed_z <= (pSVar22->projected_vertex).transformed_x)
        {
          bVar10 = bVar10 | 2;
        }
        switch(bVar10) {
        case 0:
          uVar8 = iVar11 * 4;
          iVar11 = iVar11 + 1;
          *(SRenderVertex **)(local_18 + uVar8) = pSVar17;
          break;
        case 1:
          if (0xb < g_ClipperTempCount) {
            g_CHAR_PTR_01d046a0 = "..\\engine\\clipper.c";
            g_INT_01d046a4 = 0x5e;
            core_main_c_displayErrorAndQuit_FUN_004e4500("Ran out of clipped verts!");
          }
          pSVar24 = g_ClipperTempBuffer + g_ClipperTempCount;
          g_ClipperTempCount = g_ClipperTempCount + 1;
          uVar8 = iVar11 * 4;
          iVar11 = iVar11 + 1;
          *(SRenderVertex **)(local_18 + uVar8) = pSVar24;
          engine_clipper_c_interpolateVertexRightClip_FUN_00430650(pSVar22,pSVar17,pSVar24);
          break;
        case 2:
          iVar20 = iVar11 + 1;
          *(SRenderVertex **)(local_18 + iVar11 * 4) = pSVar17;
          if (0xb < iVar16) {
            g_CHAR_PTR_01d046a0 = "..\\engine\\clipper.c";
            g_INT_01d046a4 = 0x5e;
            core_main_c_displayErrorAndQuit_FUN_004e4500("Ran out of clipped verts!");
          }
          pSVar24 = g_ClipperTempBuffer + g_ClipperTempCount;
          g_ClipperTempCount = g_ClipperTempCount + 1;
          iVar11 = iVar11 + 2;
          *(SRenderVertex **)(local_18 + iVar20 * 4) = pSVar24;
          engine_clipper_c_interpolateVertexRightClip_FUN_00430650(pSVar17,pSVar22,pSVar24);
        }
        local_20 = local_20 + 1;
        piVar18 = piVar18 + 1;
        pSVar17 = pSVar22;
      } while (local_20 < local_44);
    }
    g_INT_007bee30 = iVar11;
    if (2 < iVar11) {
      iVar16 = 0;
      local_48 = iVar11;
      local_30 = 0;
      pSVar17 = (SRenderVertex *)(&uStack_d0)[iVar11];
      iVar20 = iVar16;
      puVar9 = (uint *)local_cc;
      if (0 < iVar11) {
        do {
          local_38 = puVar9;
          pSVar22 = (SRenderVertex *)*local_38;
          bVar10 = (pSVar17->projected_vertex).transformed_x <=
                   -(pSVar17->projected_vertex).transformed_z;
          if ((pSVar22->projected_vertex).transformed_x <=
              -(pSVar22->projected_vertex).transformed_z) {
            bVar10 = bVar10 | 2;
          }
          iVar16 = iVar20;
          switch(bVar10) {
          case 0:
            iVar16 = iVar20 + 1;
            local_14c[iVar20] = (int)pSVar17;
            break;
          case 1:
            if (0xb < g_ClipperTempCount) {
              g_CHAR_PTR_01d046a0 = "..\\engine\\clipper.c";
              g_INT_01d046a4 = 0x5e;
              core_main_c_displayErrorAndQuit_FUN_004e4500("Ran out of clipped verts!");
            }
            pSVar24 = g_ClipperTempBuffer + g_ClipperTempCount;
            iVar16 = iVar20 + 1;
            g_ClipperTempCount = g_ClipperTempCount + 1;
            local_14c[iVar20] = (int)pSVar24;
            engine_clipper_c_interpolateVertexLeftClip_FUN_00430750(pSVar22,pSVar17,pSVar24);
            break;
          case 2:
            local_14c[iVar20] = (int)pSVar17;
            if (0xb < g_ClipperTempCount) {
              g_CHAR_PTR_01d046a0 = "..\\engine\\clipper.c";
              g_INT_01d046a4 = 0x5e;
              core_main_c_displayErrorAndQuit_FUN_004e4500("Ran out of clipped verts!");
            }
            pSVar24 = g_ClipperTempBuffer + g_ClipperTempCount;
            iVar16 = iVar20 + 2;
            g_ClipperTempCount = g_ClipperTempCount + 1;
            local_14c[iVar20 + 1] = (int)pSVar24;
            engine_clipper_c_interpolateVertexLeftClip_FUN_00430750(pSVar17,pSVar22,pSVar24);
          }
          local_30 = local_30 + 1;
          local_38 = local_38 + 1;
          iVar20 = iVar16;
          pSVar17 = pSVar22;
          puVar9 = local_38;
        } while (local_30 < local_48);
      }
      g_INT_007bee30 = iVar16;
      if (2 < iVar16) {
        iVar11 = 0;
        local_3c = iVar16;
        local_24 = 0;
        pSVar17 = (SRenderVertex *)local_14c[iVar16 + -1];
        piVar15 = local_14c;
        if (0 < iVar16) {
          do {
            local_2c = piVar15;
            pSVar22 = (SRenderVertex *)*local_2c;
            bVar10 = (pSVar17->projected_vertex).transformed_z <=
                     (pSVar17->projected_vertex).transformed_y;
            if ((pSVar22->projected_vertex).transformed_z <=
                (pSVar22->projected_vertex).transformed_y) {
              bVar10 = bVar10 | 2;
            }
            switch(bVar10) {
            case 0:
              iVar11 = iVar11 + 1;
              (&uStack_d0)[iVar11] = pSVar17;
              break;
            case 1:
              if (0xb < g_ClipperTempCount) {
                g_CHAR_PTR_01d046a0 = "..\\engine\\clipper.c";
                g_INT_01d046a4 = 0x5e;
                core_main_c_displayErrorAndQuit_FUN_004e4500("Ran out of clipped verts!");
              }
              pSVar24 = g_ClipperTempBuffer + g_ClipperTempCount;
              iVar11 = iVar11 + 1;
              g_ClipperTempCount = g_ClipperTempCount + 1;
              (&uStack_d0)[iVar11] = pSVar24;
              engine_clipper_c_interpolateVertexTopClip_FUN_00430850(pSVar22,pSVar17,pSVar24);
              break;
            case 2:
              (&uStack_d0)[iVar11 + 1] = pSVar17;
              if (0xb < g_ClipperTempCount) {
                g_CHAR_PTR_01d046a0 = "..\\engine\\clipper.c";
                g_INT_01d046a4 = 0x5e;
                core_main_c_displayErrorAndQuit_FUN_004e4500("Ran out of clipped verts!");
              }
              pSVar24 = g_ClipperTempBuffer + g_ClipperTempCount;
              iVar11 = iVar11 + 2;
              g_ClipperTempCount = g_ClipperTempCount + 1;
              (&uStack_d0)[iVar11] = pSVar24;
              engine_clipper_c_interpolateVertexTopClip_FUN_00430850(pSVar17,pSVar22,pSVar24);
            }
            local_24 = local_24 + 1;
            local_2c = local_2c + 1;
            pSVar17 = pSVar22;
            piVar15 = local_2c;
          } while (local_24 < local_3c);
        }
        g_INT_007bee30 = iVar11;
        if (2 < iVar11) {
          iVar16 = 0;
          local_40 = iVar11;
          local_28 = 0;
          pSVar17 = (SRenderVertex *)(&uStack_d0)[iVar11];
          iVar20 = iVar16;
          puVar9 = (uint *)local_cc;
          if (0 < iVar11) {
            do {
              local_34 = puVar9;
              pSVar22 = (SRenderVertex *)*local_34;
              bVar10 = (pSVar17->projected_vertex).transformed_y <=
                       -(pSVar17->projected_vertex).transformed_z;
              if ((pSVar22->projected_vertex).transformed_y <=
                  -(pSVar22->projected_vertex).transformed_z) {
                bVar10 = bVar10 | 2;
              }
              iVar16 = iVar20;
              switch(bVar10) {
              case 0:
                iVar16 = iVar20 + 1;
                local_14c[iVar20] = (int)pSVar17;
                break;
              case 1:
                if (0xb < g_ClipperTempCount) {
                  g_CHAR_PTR_01d046a0 = "..\\engine\\clipper.c";
                  g_INT_01d046a4 = 0x5e;
                  core_main_c_displayErrorAndQuit_FUN_004e4500("Ran out of clipped verts!");
                }
                pSVar24 = g_ClipperTempBuffer + g_ClipperTempCount;
                iVar16 = iVar20 + 1;
                g_ClipperTempCount = g_ClipperTempCount + 1;
                local_14c[iVar20] = (int)pSVar24;
                engine_clipper_c_interpolateVertexBottomClip_FUN_00430950(pSVar22,pSVar17,pSVar24);
                break;
              case 2:
                local_14c[iVar20] = (int)pSVar17;
                if (0xb < g_ClipperTempCount) {
                  g_CHAR_PTR_01d046a0 = "..\\engine\\clipper.c";
                  g_INT_01d046a4 = 0x5e;
                  core_main_c_displayErrorAndQuit_FUN_004e4500("Ran out of clipped verts!");
                }
                pSVar24 = g_ClipperTempBuffer + g_ClipperTempCount;
                iVar16 = iVar20 + 2;
                g_ClipperTempCount = g_ClipperTempCount + 1;
                local_14c[iVar20 + 1] = (int)pSVar24;
                engine_clipper_c_interpolateVertexBottomClip_FUN_00430950(pSVar17,pSVar22,pSVar24);
              }
              local_28 = local_28 + 1;
              local_34 = local_34 + 1;
              iVar20 = iVar16;
              pSVar17 = pSVar22;
              puVar9 = local_34;
            } while (local_28 < local_40);
          }
          g_INT_007bee30 = iVar16;
          if (2 < iVar16) {
            iVar11 = 0;
            if (0 < iVar16) {
              pSVar17 = g_SRenderVertex_ARRAY_007bee34;
              iVar16 = 0;
              do {
                plVar6 = *(longlong **)((int)local_14c + iVar16);
                iVar20 = 0x30;
                plVar21 = plVar6;
                pSVar22 = pSVar17;
                if (((uint)pSVar17 & 7) != 0) {
                  pSVar22 = (SRenderVertex *)((int)pSVar17 + (uint)bVar26 * -8 + 4);
                  plVar21 = (longlong *)((int)plVar6 + (uint)bVar26 * -8 + 4);
                  (pSVar17->projected_vertex).transformed_x = (int)*plVar6;
                  iVar20 = 0x2c;
                }
                while (7 < iVar20) {
                  lVar1 = *plVar21;
                  plVar21 = plVar21 + 1;
                  (pSVar22->projected_vertex).transformed_x = (int)(longlong)ROUND((float10)lVar1);
                  (pSVar22->projected_vertex).transformed_y =
                       (int)((ulonglong)(longlong)ROUND((float10)lVar1) >> 0x20);
                  pSVar22 = (SRenderVertex *)&(pSVar22->projected_vertex).transformed_z;
                  iVar20 = iVar20 + -8;
                }
                if (iVar20 != 0 && -9 < iVar20 + -8) {
                  (pSVar22->projected_vertex).transformed_x = (int)*plVar21;
                  if (4 < iVar20) {
                    *(uint *)((int)pSVar22 + (uint)bVar26 * -8 + 4) =
                         *(uint *)((int)plVar21 + (uint)bVar26 * -8 + 4);
                  }
                }
                iVar16 = iVar16 + 4;
                iVar11 = iVar11 + 1;
                pSVar17 = pSVar17 + 1;
              } while (iVar11 < g_INT_007bee30);
            }
            iVar11 = 0;
            if (g_FarPlaneDistance != 0) {
              if (0 < g_INT_007bee30) {
                iVar16 = 0;
                do {
                  iVar20 = *(int *)((int)&g_SRenderVertex_ARRAY_007bee34[0].projected_vertex.
                                          transformed_z + iVar16);
                  if (iVar11 < iVar20) {
                    iVar11 = iVar20;
                  }
                  iVar16 = iVar16 + 0x30;
                } while (iVar16 < g_INT_007bee30 * 0x30);
              }
              if (g_FarPlaneDistance <= iVar11) {
                g_INT_007bf4b4 = g_INT_007bee30;
                pSVar17 = g_SRenderVertex_ARRAY_007bee34;
                pSVar22 = g_SRenderVertex_ARRAY_007bf4b8;
                iVar11 = g_INT_007bee30 * 0x30;
                while (7 < iVar11) {
                  lVar2._0_4_ = (pSVar17->projected_vertex).transformed_x;
                  lVar2._4_4_ = (pSVar17->projected_vertex).transformed_y;
                  pSVar17 = (SRenderVertex *)&(pSVar17->projected_vertex).transformed_z;
                  (pSVar22->projected_vertex).transformed_x = (int)(longlong)ROUND((float10)lVar2);
                  (pSVar22->projected_vertex).transformed_y =
                       (int)((ulonglong)(longlong)ROUND((float10)lVar2) >> 0x20);
                  pSVar22 = (SRenderVertex *)&(pSVar22->projected_vertex).transformed_z;
                  iVar11 = iVar11 + -8;
                }
                if (iVar11 != 0 && -9 < iVar11 + -8) {
                  (pSVar22->projected_vertex).transformed_x =
                       (pSVar17->projected_vertex).transformed_x;
                  if (4 < iVar11) {
                    *(uint *)((int)pSVar22 + (uint)bVar26 * -8 + 4) =
                         *(uint *)((int)pSVar17 + (uint)bVar26 * -8 + 4);
                  }
                }
                g_INT_007bee30 = 0;
                local_14 = 0;
                if (0 < g_INT_007bf4b4) {
                  pSVar17 = g_SRenderVertex_ARRAY_007bf4b8;
                  do {
                    uVar14 = local_14 + 1;
                    if (uVar14 == g_INT_007bf4b4) {
                      uVar14 = uVar14 ^ g_INT_007bf4b4;
                    }
                    bVar10 = g_FarPlaneDistance <= (pSVar17->projected_vertex).transformed_z;
                    if (g_FarPlaneDistance <=
                        g_SRenderVertex_ARRAY_007bf4b8[uVar14].projected_vertex.transformed_z) {
                      bVar10 = bVar10 | 2;
                    }
                    switch(bVar10) {
                    case 0:
                      pSVar23 = g_SRenderVertex_ARRAY_007bee34 + g_INT_007bee30;
                      iVar11 = 0x30;
                      pSVar22 = pSVar17;
                      pSVar24 = pSVar23;
                      if (((uint)pSVar23 & 7) != 0) {
                        pSVar24 = (SRenderVertex *)
                                  (g_INT_007bee30 * 0x30 + 0x7bee38 + (uint)bVar26 * -8);
                        pSVar22 = (SRenderVertex *)((int)pSVar17 + (uint)bVar26 * -8 + 4);
                        (pSVar23->projected_vertex).transformed_x =
                             (pSVar17->projected_vertex).transformed_x;
                        iVar11 = 0x2c;
                      }
                      while (7 < iVar11) {
                        lVar3._0_4_ = (pSVar22->projected_vertex).transformed_x;
                        lVar3._4_4_ = (pSVar22->projected_vertex).transformed_y;
                        pSVar22 = (SRenderVertex *)&(pSVar22->projected_vertex).transformed_z;
                        (pSVar24->projected_vertex).transformed_x =
                             (int)(longlong)ROUND((float10)lVar3);
                        (pSVar24->projected_vertex).transformed_y =
                             (int)((ulonglong)(longlong)ROUND((float10)lVar3) >> 0x20);
                        pSVar24 = (SRenderVertex *)&(pSVar24->projected_vertex).transformed_z;
                        iVar11 = iVar11 + -8;
                      }
                      if (iVar11 != 0 && -9 < iVar11 + -8) {
                        (pSVar24->projected_vertex).transformed_x =
                             (pSVar22->projected_vertex).transformed_x;
                        if (4 < iVar11) {
                          *(uint *)((int)pSVar24 + (uint)bVar26 * -8 + 4) =
                               *(uint *)((int)pSVar22 + (uint)bVar26 * -8 + 4);
                        }
                      }
                      g_INT_007bee30 = g_INT_007bee30 + 1;
                      break;
                    case 1:
                      engine_clipper_c_interpolateVertexFarClip_FUN_00430a50
                                (g_SRenderVertex_ARRAY_007bf4b8 + uVar14,pSVar17,
                                 g_SRenderVertex_ARRAY_007bee34 + g_INT_007bee30);
                      g_INT_007bee30 = g_INT_007bee30 + 1;
                      break;
                    case 2:
                      pSVar23 = g_SRenderVertex_ARRAY_007bee34 + g_INT_007bee30;
                      iVar11 = 0x30;
                      pSVar22 = pSVar17;
                      pSVar24 = pSVar23;
                      if (((uint)pSVar23 & 7) != 0) {
                        pSVar24 = (SRenderVertex *)
                                  (g_INT_007bee30 * 0x30 + 0x7bee38 + (uint)bVar26 * -8);
                        pSVar22 = (SRenderVertex *)((int)pSVar17 + (uint)bVar26 * -8 + 4);
                        (pSVar23->projected_vertex).transformed_x =
                             (pSVar17->projected_vertex).transformed_x;
                        iVar11 = 0x2c;
                      }
                      while (7 < iVar11) {
                        lVar4._0_4_ = (pSVar22->projected_vertex).transformed_x;
                        lVar4._4_4_ = (pSVar22->projected_vertex).transformed_y;
                        pSVar22 = (SRenderVertex *)&(pSVar22->projected_vertex).transformed_z;
                        (pSVar24->projected_vertex).transformed_x =
                             (int)(longlong)ROUND((float10)lVar4);
                        (pSVar24->projected_vertex).transformed_y =
                             (int)((ulonglong)(longlong)ROUND((float10)lVar4) >> 0x20);
                        pSVar24 = (SRenderVertex *)&(pSVar24->projected_vertex).transformed_z;
                        iVar11 = iVar11 + -8;
                      }
                      if (iVar11 != 0 && -9 < iVar11 + -8) {
                        (pSVar24->projected_vertex).transformed_x =
                             (pSVar22->projected_vertex).transformed_x;
                        if (4 < iVar11) {
                          *(uint *)((int)pSVar24 + (uint)bVar26 * -8 + 4) =
                               *(uint *)((int)pSVar22 + (uint)bVar26 * -8 + 4);
                        }
                      }
                      g_INT_007bee30 = g_INT_007bee30 + 1;
                      engine_clipper_c_interpolateVertexFarClip_FUN_00430a50
                                (pSVar17,g_SRenderVertex_ARRAY_007bf4b8 + uVar14,
                                 g_SRenderVertex_ARRAY_007bee34 + g_INT_007bee30);
                      g_INT_007bee30 = g_INT_007bee30 + 1;
                    }
                    local_14 = local_14 + 1;
                    pSVar17 = pSVar17 + 1;
                  } while (local_14 < g_INT_007bf4b4);
                }
              }
            }
            if (2 < g_INT_007bee30) {
              iVar11 = 0;
              if (0 < g_INT_007bee30) {
                pSVar17 = g_SRenderVertex_ARRAY_007bee34;
                do {
                  iVar16 = (pSVar17->projected_vertex).transformed_z;
                  if (iVar16 == 0) {
                    (pSVar17->projected_vertex).transformed_z = 1;
                    (pSVar17->projected_vertex).transformed_x = 0;
                    iVar12 = 0;
LAB_0043185e:
                    (pSVar17->projected_vertex).transformed_y = iVar12;
                  }
                  else {
                    iVar20 = (pSVar17->projected_vertex).transformed_x;
                    if (iVar16 < iVar20) {
                      (pSVar17->projected_vertex).transformed_x = iVar16;
                    }
                    else {
                      iVar12 = -iVar16;
                      if (-iVar20 == iVar16 || iVar12 < iVar20) {
                        iVar20 = (pSVar17->projected_vertex).transformed_z;
                        iVar7 = (pSVar17->projected_vertex).transformed_y;
                        if (iVar20 < iVar7) {
                          (pSVar17->projected_vertex).transformed_y = iVar20;
                        }
                        else if (-iVar7 != iVar16 && iVar7 <= iVar12) goto LAB_0043185e;
                      }
                      else {
                        (pSVar17->projected_vertex).transformed_x = iVar12;
                      }
                    }
                  }
                  iVar11 = iVar11 + 1;
                  pSVar17 = pSVar17 + 1;
                } while (iVar11 < g_INT_007bee30);
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
