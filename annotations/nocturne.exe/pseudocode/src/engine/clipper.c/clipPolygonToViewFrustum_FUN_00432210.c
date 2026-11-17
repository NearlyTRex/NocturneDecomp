// Name: engine_clipper.c_clipPolygonToViewFrustum_FUN_00432210
// Address: 00432210
// Address Range: [[00432210, 00432c7b]]
// Convention: __cdecl
// Signature: int __cdecl engine_clipper_c_clipPolygonToViewFrustum_FUN_00432210(int vertex_count,int *vertex_indices)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x00432ab1) */
/* WARNING: Type propagation algorithm not settling */

int __cdecl engine_clipper_c_clipPolygonToViewFrustum_FUN_00432210(int vertex_count,int *vertex_indices)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  longlong *plVar6;
  int iVar7;
  byte bVar8;
  int iVar9;
  int iVar10;
  char cVar11;
  int *piVar13;
  int iVar14;
  SRenderVertex *pSVar15;
  uint *puVar16;
  uint uVar17;
  int iVar18;
  longlong *plVar19;
  SRenderVertex *pSVar20;
  SRenderVertex *pSVar21;
  SRenderVertex *pSVar22;
  bool bVar23;
  byte bVar24;
  uint local_14c [31];
  uint auStack_d0 [33];
  byte *local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  uint *local_24;
  uint *local_20;
  uint *local_1c;
  int local_18;
  int local_14;
  uint uVar12;
  
  bVar24 = 0;
  uVar12 = 0xffffffff;
  cVar11 = -1;
  iVar9 = 0;
  uVar17 = 0;
  piVar13 = vertex_indices;
  if (0 < vertex_count) {
    do {
      uVar5 = g_SRenderVertex_ARRAY_005c5014[*piVar13].projected_vertex.screen_x;
      if ((uVar5 & 0x80000000) != 0) {
        uVar17 = uVar17 + 1;
      }
      iVar9 = iVar9 + 1;
      uVar12 = uVar12 & uVar5;
      cVar11 = (char)uVar12;
      piVar13 = piVar13 + 1;
    } while (iVar9 < vertex_count);
  }
  if ((uVar17 == vertex_count) && (cVar11 != '\0')) {
    g_ClippedVertexCount = uVar17 ^ vertex_count;
  }
  else {
    if (uVar17 == 0) {
      if ((g_UseExternalRenderer == 0) || (g_TexturesDisabled != 0)) {
        g_ClippedVertexCount = vertex_count;
        local_18 = 0;
        if (0 < vertex_count) {
          pSVar15 = g_ClippedVertexBuffer;
          do {
            iVar9 = 0x30;
            pSVar20 = g_SRenderVertex_ARRAY_005c5014 + *vertex_indices;
            pSVar22 = pSVar15;
            if (((uint)pSVar15 & 7) != 0) {
              pSVar22 = (SRenderVertex *)&(pSVar15->projected_vertex).transformed_y;
              pSVar20 = (SRenderVertex *)
                        &g_SRenderVertex_ARRAY_005c5014[*vertex_indices].projected_vertex.
                         transformed_y;
              (pSVar15->projected_vertex).transformed_x =
                   g_SRenderVertex_ARRAY_005c5014[*vertex_indices].projected_vertex.transformed_x;
              iVar9 = 0x2c;
            }
            while (7 < iVar9) {
              lVar1._0_4_ = (pSVar20->projected_vertex).transformed_x;
              lVar1._4_4_ = (pSVar20->projected_vertex).transformed_y;
              pSVar20 = (SRenderVertex *)&(pSVar20->projected_vertex).transformed_z;
              (pSVar22->projected_vertex).transformed_x = (int)(longlong)ROUND((float10)lVar1);
              (pSVar22->projected_vertex).transformed_y =
                   (int)((ulonglong)(longlong)ROUND((float10)lVar1) >> 0x20);
              pSVar22 = (SRenderVertex *)&(pSVar22->projected_vertex).transformed_z;
              iVar9 = iVar9 + -8;
            }
            if (iVar9 != 0 && -9 < iVar9 + -8) {
              (pSVar22->projected_vertex).transformed_x = (pSVar20->projected_vertex).transformed_x;
              if (4 < iVar9) {
                (pSVar22->projected_vertex).transformed_y =
                     (pSVar20->projected_vertex).transformed_y;
              }
            }
            vertex_indices = vertex_indices + 1;
            local_18 = local_18 + 1;
            pSVar15 = pSVar15 + 1;
          } while (local_18 < vertex_count);
        }
        return 0;
      }
      iVar9 = 0;
      if (0 < vertex_count) {
        do {
          iVar14 = *vertex_indices;
          iVar9 = iVar9 + 1;
          vertex_indices = vertex_indices + 1;
          g_INT_ARRAY_00767270[iVar9] = (int)(g_SRenderVertex_ARRAY_005c5014 + iVar14);
        } while (iVar9 < vertex_count);
      }
      if (g_CullingMode != 0) {
        if (vertex_count < 4) {
          iVar9 = engine_prim_c_calculateTriangleWindingOrder_FUN_004f9a10
                            (g_SRenderVertex_PTR_00767274,g_SRenderVertex_PTR_00767278,
                             g_SRenderVertex_PTR_0076727c);
          bVar23 = iVar9 == 0;
        }
        else {
          local_28 = vertex_count + -2;
          iVar14 = 0;
          iVar9 = local_28 * 4;
          iVar18 = 0;
          if (0 < iVar9) {
            do {
              iVar10 = engine_prim_c_calculateTriangleWindingOrder_FUN_004f9a10
                                 (g_SRenderVertex_PTR_00767274,
                                  *(SRenderVertex **)((int)&g_SRenderVertex_PTR_00767278 + iVar14),
                                  *(SRenderVertex **)((int)&g_SRenderVertex_PTR_0076727c + iVar14));
              if (iVar10 == 0) {
                iVar18 = iVar18 + 1;
              }
              iVar14 = iVar14 + 4;
            } while (iVar14 < iVar9);
          }
          bVar23 = iVar18 == local_28;
        }
        if (bVar23) {
          return 1;
        }
      }
      g_RenderedTriangleCount = g_RenderedTriangleCount + 1;
      engine_special_cpp_drawPolygon2_FUN_00532650
                (&g_SRenderVertex_PTR_00767274,vertex_count,g_RenderStateFlags.dword);
      return 1;
    }
    iVar9 = 0;
    if (0 < vertex_count) {
      do {
        iVar14 = *vertex_indices;
        iVar9 = iVar9 + 1;
        vertex_indices = vertex_indices + 1;
        auStack_d0[iVar9] = g_SRenderVertex_ARRAY_005c5014 + iVar14;
      } while (iVar9 < vertex_count);
    }
    g_ClippedVertexCount = vertex_count;
    local_48 = vertex_count;
    iVar9 = 0;
    g_ClipperTempCount = 0;
    local_4c = (byte *)local_14c;
    local_44 = 0;
    if (0 < vertex_count) {
      puVar16 = auStack_d0;
      pSVar15 = (SRenderVertex *)auStack_d0[vertex_count];
      do {
        iVar14 = g_ClipperTempCount;
        puVar16 = puVar16 + 1;
        pSVar20 = (SRenderVertex *)*puVar16;
        bVar8 = (pSVar15->projected_vertex).transformed_z <=
                (pSVar15->projected_vertex).transformed_x;
        if ((pSVar20->projected_vertex).transformed_z <= (pSVar20->projected_vertex).transformed_x)
        {
          bVar8 = bVar8 | 2;
        }
        switch(bVar8) {
        case 0:
          iVar14 = iVar9 * 4;
          iVar9 = iVar9 + 1;
          *(SRenderVertex **)(local_4c + iVar14) = pSVar15;
          break;
        case 1:
          if (0xb < g_ClipperTempCount) {
            g_CurrentFilename = "..\\engine\\clipper.c";
            g_CurrentLineNumber = 94;
            core_main_c_displayErrorAndQuit_FUN_004c8440("Ran out of clipped verts!");
          }
          pSVar22 = g_ClipperTempBuffer + g_ClipperTempCount;
          g_ClipperTempCount = g_ClipperTempCount + 1;
          iVar14 = iVar9 * 4;
          iVar9 = iVar9 + 1;
          *(SRenderVertex **)(local_4c + iVar14) = pSVar22;
          engine_clipper_c_interpolateVertexRightClip_FUN_00431530(pSVar20,pSVar15,pSVar22);
          break;
        case 2:
          iVar18 = iVar9 + 1;
          *(SRenderVertex **)(local_4c + iVar9 * 4) = pSVar15;
          if (0xb < iVar14) {
            g_CurrentFilename = "..\\engine\\clipper.c";
            g_CurrentLineNumber = 94;
            core_main_c_displayErrorAndQuit_FUN_004c8440("Ran out of clipped verts!");
          }
          pSVar22 = g_ClipperTempBuffer + g_ClipperTempCount;
          g_ClipperTempCount = g_ClipperTempCount + 1;
          iVar9 = iVar9 + 2;
          *(SRenderVertex **)(local_4c + iVar18 * 4) = pSVar22;
          engine_clipper_c_interpolateVertexRightClip_FUN_00431530(pSVar15,pSVar20,pSVar22);
        }
        local_44 = local_44 + 1;
        pSVar15 = pSVar20;
      } while (local_44 < local_48);
    }
    g_ClippedVertexCount = iVar9;
    if (2 < iVar9) {
      iVar14 = 0;
      local_40 = iVar9;
      local_3c = 0;
      pSVar15 = (SRenderVertex *)local_14c[iVar9 + -1];
      puVar16 = local_14c;
      if (0 < iVar9) {
        do {
          local_24 = puVar16;
          pSVar20 = (SRenderVertex *)*local_24;
          bVar8 = (pSVar15->projected_vertex).transformed_x <=
                  -(pSVar15->projected_vertex).transformed_z;
          if ((pSVar20->projected_vertex).transformed_x <=
              -(pSVar20->projected_vertex).transformed_z) {
            bVar8 = bVar8 | 2;
          }
          switch(bVar8) {
          case 0:
            iVar14 = iVar14 + 1;
            auStack_d0[iVar14] = pSVar15;
            break;
          case 1:
            if (0xb < g_ClipperTempCount) {
              g_CurrentFilename = "..\\engine\\clipper.c";
              g_CurrentLineNumber = 94;
              core_main_c_displayErrorAndQuit_FUN_004c8440("Ran out of clipped verts!");
            }
            pSVar22 = g_ClipperTempBuffer + g_ClipperTempCount;
            iVar14 = iVar14 + 1;
            g_ClipperTempCount = g_ClipperTempCount + 1;
            auStack_d0[iVar14] = pSVar22;
            engine_clipper_c_interpolateVertexLeftClip_FUN_00431630(pSVar20,pSVar15,pSVar22);
            break;
          case 2:
            auStack_d0[iVar14 + 1] = pSVar15;
            if (0xb < g_ClipperTempCount) {
              g_CurrentFilename = "..\\engine\\clipper.c";
              g_CurrentLineNumber = 94;
              core_main_c_displayErrorAndQuit_FUN_004c8440("Ran out of clipped verts!");
            }
            pSVar22 = g_ClipperTempBuffer + g_ClipperTempCount;
            iVar14 = iVar14 + 2;
            g_ClipperTempCount = g_ClipperTempCount + 1;
            auStack_d0[iVar14] = pSVar22;
            engine_clipper_c_interpolateVertexLeftClip_FUN_00431630(pSVar15,pSVar20,pSVar22);
          }
          local_3c = local_3c + 1;
          local_24 = local_24 + 1;
          pSVar15 = pSVar20;
          puVar16 = local_24;
        } while (local_3c < local_40);
      }
      g_ClippedVertexCount = iVar14;
      if (2 < iVar14) {
        iVar9 = 0;
        local_38 = iVar14;
        local_34 = 0;
        pSVar15 = (SRenderVertex *)auStack_d0[iVar14];
        iVar18 = iVar9;
        puVar16 = auStack_d0 + 1;
        if (0 < iVar14) {
          do {
            local_20 = puVar16;
            pSVar20 = (SRenderVertex *)*local_20;
            bVar8 = (pSVar15->projected_vertex).transformed_z <=
                    (pSVar15->projected_vertex).transformed_y;
            if ((pSVar20->projected_vertex).transformed_z <=
                (pSVar20->projected_vertex).transformed_y) {
              bVar8 = bVar8 | 2;
            }
            iVar9 = iVar18;
            switch(bVar8) {
            case 0:
              iVar9 = iVar18 + 1;
              local_14c[iVar18] = pSVar15;
              break;
            case 1:
              if (0xb < g_ClipperTempCount) {
                g_CurrentFilename = "..\\engine\\clipper.c";
                g_CurrentLineNumber = 94;
                core_main_c_displayErrorAndQuit_FUN_004c8440("Ran out of clipped verts!");
              }
              pSVar22 = g_ClipperTempBuffer + g_ClipperTempCount;
              iVar9 = iVar18 + 1;
              g_ClipperTempCount = g_ClipperTempCount + 1;
              local_14c[iVar18] = pSVar22;
              engine_clipper_c_interpolateVertexTopClip_FUN_00431730(pSVar20,pSVar15,pSVar22);
              break;
            case 2:
              local_14c[iVar18] = pSVar15;
              if (0xb < g_ClipperTempCount) {
                g_CurrentFilename = "..\\engine\\clipper.c";
                g_CurrentLineNumber = 94;
                core_main_c_displayErrorAndQuit_FUN_004c8440("Ran out of clipped verts!");
              }
              pSVar22 = g_ClipperTempBuffer + g_ClipperTempCount;
              iVar9 = iVar18 + 2;
              g_ClipperTempCount = g_ClipperTempCount + 1;
              local_14c[iVar18 + 1] = pSVar22;
              engine_clipper_c_interpolateVertexTopClip_FUN_00431730(pSVar15,pSVar20,pSVar22);
            }
            local_34 = local_34 + 1;
            local_20 = local_20 + 1;
            iVar18 = iVar9;
            pSVar15 = pSVar20;
            puVar16 = local_20;
          } while (local_34 < local_38);
        }
        g_ClippedVertexCount = iVar9;
        if (2 < iVar9) {
          iVar14 = 0;
          local_30 = iVar9;
          local_2c = 0;
          pSVar15 = (SRenderVertex *)local_14c[iVar9 + -1];
          puVar16 = local_14c;
          if (0 < iVar9) {
            do {
              local_1c = puVar16;
              pSVar20 = (SRenderVertex *)*local_1c;
              bVar8 = (pSVar15->projected_vertex).transformed_y <=
                      -(pSVar15->projected_vertex).transformed_z;
              if ((pSVar20->projected_vertex).transformed_y <=
                  -(pSVar20->projected_vertex).transformed_z) {
                bVar8 = bVar8 | 2;
              }
              switch(bVar8) {
              case 0:
                iVar14 = iVar14 + 1;
                auStack_d0[iVar14] = pSVar15;
                break;
              case 1:
                if (0xb < g_ClipperTempCount) {
                  g_CurrentFilename = "..\\engine\\clipper.c";
                  g_CurrentLineNumber = 94;
                  core_main_c_displayErrorAndQuit_FUN_004c8440("Ran out of clipped verts!");
                }
                pSVar22 = g_ClipperTempBuffer + g_ClipperTempCount;
                iVar14 = iVar14 + 1;
                g_ClipperTempCount = g_ClipperTempCount + 1;
                auStack_d0[iVar14] = pSVar22;
                engine_clipper_c_interpolateVertexBottomClip_FUN_00431830(pSVar20,pSVar15,pSVar22);
                break;
              case 2:
                auStack_d0[iVar14 + 1] = pSVar15;
                if (0xb < g_ClipperTempCount) {
                  g_CurrentFilename = "..\\engine\\clipper.c";
                  g_CurrentLineNumber = 94;
                  core_main_c_displayErrorAndQuit_FUN_004c8440("Ran out of clipped verts!");
                }
                pSVar22 = g_ClipperTempBuffer + g_ClipperTempCount;
                iVar14 = iVar14 + 2;
                g_ClipperTempCount = g_ClipperTempCount + 1;
                auStack_d0[iVar14] = pSVar22;
                engine_clipper_c_interpolateVertexBottomClip_FUN_00431830(pSVar15,pSVar20,pSVar22);
              }
              local_2c = local_2c + 1;
              local_1c = local_1c + 1;
              pSVar15 = pSVar20;
              puVar16 = local_1c;
            } while (local_2c < local_30);
          }
          g_ClippedVertexCount = iVar14;
          if (2 < iVar14) {
            iVar9 = 0;
            if (0 < iVar14) {
              pSVar15 = g_ClippedVertexBuffer;
              iVar14 = 0;
              do {
                plVar6 = *(longlong **)((int)auStack_d0 + iVar14 + 4);
                iVar18 = 0x30;
                plVar19 = plVar6;
                pSVar20 = pSVar15;
                if (((uint)pSVar15 & 7) != 0) {
                  pSVar20 = (SRenderVertex *)((int)pSVar15 + (uint)bVar24 * -8 + 4);
                  plVar19 = (longlong *)((int)plVar6 + (uint)bVar24 * -8 + 4);
                  (pSVar15->projected_vertex).transformed_x = (int)*plVar6;
                  iVar18 = 0x2c;
                }
                while (7 < iVar18) {
                  lVar1 = *plVar19;
                  plVar19 = plVar19 + 1;
                  (pSVar20->projected_vertex).transformed_x = (int)(longlong)ROUND((float10)lVar1);
                  (pSVar20->projected_vertex).transformed_y =
                       (int)((ulonglong)(longlong)ROUND((float10)lVar1) >> 0x20);
                  pSVar20 = (SRenderVertex *)&(pSVar20->projected_vertex).transformed_z;
                  iVar18 = iVar18 + -8;
                }
                if (iVar18 != 0 && -9 < iVar18 + -8) {
                  (pSVar20->projected_vertex).transformed_x = (int)*plVar19;
                  if (4 < iVar18) {
                    *(uint *)((int)pSVar20 + (uint)bVar24 * -8 + 4) =
                         *(uint *)((int)plVar19 + (uint)bVar24 * -8 + 4);
                  }
                }
                iVar14 = iVar14 + 4;
                iVar9 = iVar9 + 1;
                pSVar15 = pSVar15 + 1;
              } while (iVar9 < g_ClippedVertexCount);
            }
            iVar9 = 0;
            if (g_FarPlaneDistance != 0) {
              if (0 < g_ClippedVertexCount) {
                iVar14 = 0;
                do {
                  iVar18 = *(int *)((int)&g_ClippedVertexBuffer[0].projected_vertex.transformed_z +
                                   iVar14);
                  if (iVar9 < iVar18) {
                    iVar9 = iVar18;
                  }
                  iVar14 = iVar14 + 0x30;
                } while (iVar14 < g_ClippedVertexCount * 0x30);
              }
              if (g_FarPlaneDistance <= iVar9) {
                g_SecondaryClipVertexCount = g_ClippedVertexCount;
                pSVar15 = g_ClippedVertexBuffer;
                pSVar20 = g_SecondaryClipVertexBuffer;
                iVar9 = g_ClippedVertexCount * 0x30;
                while (7 < iVar9) {
                  lVar2._0_4_ = (pSVar15->projected_vertex).transformed_x;
                  lVar2._4_4_ = (pSVar15->projected_vertex).transformed_y;
                  pSVar15 = (SRenderVertex *)&(pSVar15->projected_vertex).transformed_z;
                  (pSVar20->projected_vertex).transformed_x = (int)(longlong)ROUND((float10)lVar2);
                  (pSVar20->projected_vertex).transformed_y =
                       (int)((ulonglong)(longlong)ROUND((float10)lVar2) >> 0x20);
                  pSVar20 = (SRenderVertex *)&(pSVar20->projected_vertex).transformed_z;
                  iVar9 = iVar9 + -8;
                }
                if (iVar9 != 0 && -9 < iVar9 + -8) {
                  (pSVar20->projected_vertex).transformed_x =
                       (pSVar15->projected_vertex).transformed_x;
                  if (4 < iVar9) {
                    *(uint *)((int)pSVar20 + (uint)bVar24 * -8 + 4) =
                         *(uint *)((int)pSVar15 + (uint)bVar24 * -8 + 4);
                  }
                }
                g_ClippedVertexCount = 0;
                local_14 = 0;
                if (0 < g_SecondaryClipVertexCount) {
                  pSVar15 = g_SecondaryClipVertexBuffer;
                  do {
                    uVar12 = local_14 + 1;
                    if (uVar12 == g_SecondaryClipVertexCount) {
                      uVar12 = uVar12 ^ g_SecondaryClipVertexCount;
                    }
                    bVar8 = g_FarPlaneDistance <= (pSVar15->projected_vertex).transformed_z;
                    if (g_FarPlaneDistance <=
                        g_SecondaryClipVertexBuffer[uVar12].projected_vertex.transformed_z) {
                      bVar8 = bVar8 | 2;
                    }
                    switch(bVar8) {
                    case 0:
                      pSVar21 = g_ClippedVertexBuffer + g_ClippedVertexCount;
                      iVar9 = 0x30;
                      pSVar20 = pSVar15;
                      pSVar22 = pSVar21;
                      if (((uint)pSVar21 & 7) != 0) {
                        pSVar22 = (SRenderVertex *)
                                  (g_ClippedVertexCount * 0x30 + 0x766c78 + (uint)bVar24 * -8);
                        pSVar20 = (SRenderVertex *)((int)pSVar15 + (uint)bVar24 * -8 + 4);
                        (pSVar21->projected_vertex).transformed_x =
                             (pSVar15->projected_vertex).transformed_x;
                        iVar9 = 0x2c;
                      }
                      while (7 < iVar9) {
                        lVar3._0_4_ = (pSVar20->projected_vertex).transformed_x;
                        lVar3._4_4_ = (pSVar20->projected_vertex).transformed_y;
                        pSVar20 = (SRenderVertex *)&(pSVar20->projected_vertex).transformed_z;
                        (pSVar22->projected_vertex).transformed_x =
                             (int)(longlong)ROUND((float10)lVar3);
                        (pSVar22->projected_vertex).transformed_y =
                             (int)((ulonglong)(longlong)ROUND((float10)lVar3) >> 0x20);
                        pSVar22 = (SRenderVertex *)&(pSVar22->projected_vertex).transformed_z;
                        iVar9 = iVar9 + -8;
                      }
                      if (iVar9 != 0 && -9 < iVar9 + -8) {
                        (pSVar22->projected_vertex).transformed_x =
                             (pSVar20->projected_vertex).transformed_x;
                        if (4 < iVar9) {
                          *(uint *)((int)pSVar22 + (uint)bVar24 * -8 + 4) =
                               *(uint *)((int)pSVar20 + (uint)bVar24 * -8 + 4);
                        }
                      }
                      g_ClippedVertexCount = g_ClippedVertexCount + 1;
                      break;
                    case 1:
                      engine_clipper_c_interpolateVertexFarClip_FUN_00431930
                                (g_SecondaryClipVertexBuffer + uVar12,pSVar15,
                                 g_ClippedVertexBuffer + g_ClippedVertexCount);
                      g_ClippedVertexCount = g_ClippedVertexCount + 1;
                      break;
                    case 2:
                      pSVar21 = g_ClippedVertexBuffer + g_ClippedVertexCount;
                      iVar9 = 0x30;
                      pSVar20 = pSVar15;
                      pSVar22 = pSVar21;
                      if (((uint)pSVar21 & 7) != 0) {
                        pSVar22 = (SRenderVertex *)
                                  (g_ClippedVertexCount * 0x30 + 0x766c78 + (uint)bVar24 * -8);
                        pSVar20 = (SRenderVertex *)((int)pSVar15 + (uint)bVar24 * -8 + 4);
                        (pSVar21->projected_vertex).transformed_x =
                             (pSVar15->projected_vertex).transformed_x;
                        iVar9 = 0x2c;
                      }
                      while (7 < iVar9) {
                        lVar4._0_4_ = (pSVar20->projected_vertex).transformed_x;
                        lVar4._4_4_ = (pSVar20->projected_vertex).transformed_y;
                        pSVar20 = (SRenderVertex *)&(pSVar20->projected_vertex).transformed_z;
                        (pSVar22->projected_vertex).transformed_x =
                             (int)(longlong)ROUND((float10)lVar4);
                        (pSVar22->projected_vertex).transformed_y =
                             (int)((ulonglong)(longlong)ROUND((float10)lVar4) >> 0x20);
                        pSVar22 = (SRenderVertex *)&(pSVar22->projected_vertex).transformed_z;
                        iVar9 = iVar9 + -8;
                      }
                      if (iVar9 != 0 && -9 < iVar9 + -8) {
                        (pSVar22->projected_vertex).transformed_x =
                             (pSVar20->projected_vertex).transformed_x;
                        if (4 < iVar9) {
                          *(uint *)((int)pSVar22 + (uint)bVar24 * -8 + 4) =
                               *(uint *)((int)pSVar20 + (uint)bVar24 * -8 + 4);
                        }
                      }
                      g_ClippedVertexCount = g_ClippedVertexCount + 1;
                      engine_clipper_c_interpolateVertexFarClip_FUN_00431930
                                (pSVar15,g_SecondaryClipVertexBuffer + uVar12,
                                 g_ClippedVertexBuffer + g_ClippedVertexCount);
                      g_ClippedVertexCount = g_ClippedVertexCount + 1;
                    }
                    local_14 = local_14 + 1;
                    pSVar15 = pSVar15 + 1;
                  } while (local_14 < g_SecondaryClipVertexCount);
                }
              }
            }
            if (2 < g_ClippedVertexCount) {
              iVar9 = 0;
              if (0 < g_ClippedVertexCount) {
                pSVar15 = g_ClippedVertexBuffer;
                do {
                  iVar14 = (pSVar15->projected_vertex).transformed_z;
                  if (iVar14 == 0) {
                    (pSVar15->projected_vertex).transformed_z = 1;
                    (pSVar15->projected_vertex).transformed_x = 0;
                    iVar10 = 0;
LAB_0043274e:
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
                        iVar7 = (pSVar15->projected_vertex).transformed_y;
                        if (iVar18 < iVar7) {
                          (pSVar15->projected_vertex).transformed_y = iVar18;
                        }
                        else if (-iVar7 != iVar14 && iVar7 <= iVar10) goto LAB_0043274e;
                      }
                      else {
                        (pSVar15->projected_vertex).transformed_x = iVar10;
                      }
                    }
                  }
                  iVar9 = iVar9 + 1;
                  pSVar15 = pSVar15 + 1;
                } while (iVar9 < g_ClippedVertexCount);
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
