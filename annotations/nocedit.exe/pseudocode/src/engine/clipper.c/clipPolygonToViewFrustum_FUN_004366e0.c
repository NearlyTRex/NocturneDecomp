// Name: engine_clipper.c_clipPolygonToViewFrustum_FUN_004366e0
// Address: 004366e0
// Address Range: [[004366e0, 004371ac]]
// Convention: __cdecl
// Signature: int engine_clipper.c_clipPolygonToViewFrustum_FUN_004366e0(int vertex_count, int * vertex_indices)
// Cross-references:
//   engine_clipper.c_clipAndRasterize_FUN_004371b0 (004371b0) at 004371c4 [UNCONDITIONAL_CALL]
// Globals:
//   void* switchdataD_0043668c = 004369b8
//   void* PTR_caseD_1_00436690 = 00436c9c
//   void* PTR_caseD_3_00436698 = 004369cb
//   void* switchdataD_0043669c = 00436a5a
//   void* PTR_caseD_1_004366a0 = 00436d75
//   void* PTR_caseD_3_004366a8 = 00436a5f
//   void* switchdataD_004366ac = 00436af8
//   void* PTR_caseD_1_004366b0 = 00436e24
//   void* PTR_caseD_3_004366b8 = 00436afd
//   void* switchdataD_004366bc = 00436ba0
//   void* PTR_caseD_1_004366c0 = 00436ed3
//   void* PTR_caseD_3_004366c8 = 00436ba5
//   void* switchdataD_004366cc = 00437073
//   void* PTR_caseD_3_004366d8 = 004370b8
//   TerminatedCString s_engine_clipper_c_00618103
//   TerminatedCString s_Ran_out_of_clipped_verts_00618117
//   TerminatedCString s_Too_many_poly_verticies__00618131
//   TerminatedCString s_engine_clipper_c_0061814e
//   int g_NearPlaneDistance = 0x7fffffff
//   SRenderVertex[16] g_RenderVertexBuffer
//   undefined4 g_RenderVertexBuffer[0].projected_vertex.transformed_y
//   undefined4 g_RenderVertexBuffer[0].projected_vertex.transformed_z
//   undefined4 g_RenderVertexBuffer[0].projected_vertex.inv_z
//   undefined4 g_RenderVertexBuffer[0].projected_vertex.screen_x
//   int g_TexturesDisabled
//   int g_CullingMode
//   int g_ClippedVertexCount
//   SRenderVertex[16] g_ClippedVertexBuffer
//   undefined4 DAT_00824e2c
//   undefined4 g_ClippedVertexBuffer[0].projected_vertex.transformed_z
//   undefined4 DAT_00824e34
//   undefined4 DAT_00824e38
//   undefined4 DAT_00824e58
//   undefined4 DAT_00824e5c
//   undefined4 DAT_00824e60
//   SRenderVertex*[16] g_ClipperCullingPointers
//   undefined4 g_ClipperCullingPointers[1]
//   undefined4 g_ClipperCullingPointers[2]
//   undefined4 g_ClipperCullingPointers[3]
//   undefined4 DAT_008254a8
//   undefined8 DAT_008254ac
//   undefined4 DAT_008254ac+4
//   undefined4 DAT_008254b4
//   undefined4 DAT_008254b8
//   undefined4 DAT_008254bc
//   undefined4 DAT_008254dc
//   undefined8 DAT_008254e0
//   undefined4 DAT_008254e0+4
//   undefined4 DAT_008254e8
//   SRenderVertex[12] g_ClipperTempBuffer
//   undefined4 DAT_00825ab0
//   undefined4 g_ClipperTempBuffer[0].projected_vertex.transformed_z
//   undefined4 DAT_00825adc
//   undefined4 g_ClipperTempBuffer[1].projected_vertex.transformed_y
//   undefined4 g_ClipperTempBuffer[1].projected_vertex.transformed_z
//   undefined4 g_ClipperTempBuffer[2].projected_vertex.transformed_x
//   undefined4 g_ClipperTempBuffer[2].projected_vertex.transformed_y
//   undefined4 g_ClipperTempBuffer[2].projected_vertex.transformed_z
//   undefined4 DAT_00825b3c
//   undefined4 DAT_00825b44
//   undefined4 DAT_00825b48
//   undefined4 DAT_00825b6c
//   int g_ClipperTempCount
//   int g_UseExternalRenderer
//   int g_RenderStateFlags
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
//   int g_RenderedTriangleCount
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   crt_stdio.c_sprintf_FUN_005fdbd0
//   engine_clipper.c_interpolateVertexBottomClip_FUN_00435c00
//   engine_clipper.c_interpolateVertexLeftClip_FUN_00435a00
//   engine_clipper.c_interpolateVertexNearClip_FUN_00435e00
//   engine_clipper.c_interpolateVertexRightClip_FUN_00435b00
//   engine_clipper.c_interpolateVertexTopClip_FUN_00435d00
//   engine_prim.c_calculateTriangleWindingOrder_FUN_00552150
//   wincore_windll.cpp_drawPolygon2_FUN_005b7610

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x0043711f) */
/* WARNING: Removing unreachable block (ram,0x004368cf) */
/* WARNING: Removing unreachable block (ram,0x00436c04) */
/* WARNING: Removing unreachable block (ram,0x0043708f) */
/* WARNING: Type propagation algorithm not settling */

int __cdecl
engine_clipper_c_clipPolygonToViewFrustum_FUN_004366e0(int vertex_count,int *vertex_indices)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  byte bVar7;
  int iVar8;
  int iVar9;
  char cVar10;
  int *piVar12;
  SRenderVertex *pSVar13;
  BADSPACEBASE *in_ESP;
  undefined4 *puVar14;
  int iVar15;
  int iVar16;
  SRenderVertex *pSVar17;
  longlong *plVar18;
  SRenderVertex *pSVar19;
  longlong *plVar20;
  bool bVar21;
  byte bVar22;
  int *in_stack_00000010;
  undefined4 local_148 [32];
  undefined4 local_c8;
  undefined1 auStack_c4 [124];
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  undefined4 *local_1c;
  undefined4 *local_18;
  undefined4 *local_14;
  uint uVar11;
  
  bVar22 = 0;
  if ((vertex_count < 0) || (0x10 < vertex_count)) {
    crt_stdio_c_sprintf_FUN_005fdbd0
              (&stack0xfffffdb4,"Too many poly verticies : %d",vertex_count);
    g_CurrentFilename = "..\\engine\\clipper.c";
    g_CurrentLineNumber = 0x276;
    core_main_c_displayErrorAndQuit_FUN_00506f10(&stack0xfffffdb8);
  }
  uVar11 = 0xffffffff;
  cVar10 = -1;
  iVar8 = 0;
  iVar15 = 0;
  piVar12 = in_stack_00000010;
  if (0 < vertex_count) {
    do {
      uVar4 = g_RenderVertexBuffer[*piVar12].projected_vertex.screen_x;
      if ((uVar4 & 0x80000000) != 0) {
        iVar15 = iVar15 + 1;
      }
      iVar8 = iVar8 + 1;
      uVar11 = uVar11 & uVar4;
      cVar10 = (char)uVar11;
      piVar12 = piVar12 + 1;
    } while (iVar8 < vertex_count);
  }
  if ((iVar15 == vertex_count) && (cVar10 != '\0')) {
    g_ClippedVertexCount = 0;
  }
  else {
    if (iVar15 == 0) {
      if ((g_UseExternalRenderer == 0) || (g_TexturesDisabled != 0)) {
        g_ClippedVertexCount = vertex_count;
        iVar8 = 0;
        if (0 < vertex_count) {
          pSVar13 = g_ClippedVertexBuffer;
          do {
            pSVar17 = g_RenderVertexBuffer + *in_stack_00000010;
            iVar15 = 0x30;
            pSVar19 = pSVar13;
            while (7 < iVar15) {
              lVar1._0_4_ = (pSVar17->projected_vertex).transformed_x;
              lVar1._4_4_ = (pSVar17->projected_vertex).transformed_y;
              pSVar17 = (SRenderVertex *)&(pSVar17->projected_vertex).transformed_z;
              (pSVar19->projected_vertex).transformed_x = (int)(longlong)ROUND((float10)lVar1);
              (pSVar19->projected_vertex).transformed_y =
                   (int)((ulonglong)(longlong)ROUND((float10)lVar1) >> 0x20);
              pSVar19 = (SRenderVertex *)&(pSVar19->projected_vertex).transformed_z;
              iVar15 = iVar15 + -8;
            }
            if (iVar15 != 0 && SCARRY4(iVar15 + -8,8) == iVar15 < 0) {
              (pSVar19->projected_vertex).transformed_x = (pSVar17->projected_vertex).transformed_x;
              if (4 < iVar15) {
                *(undefined4 *)((int)pSVar19 + (uint)bVar22 * -8 + 4) =
                     *(undefined4 *)((int)pSVar17 + (uint)bVar22 * -8 + 4);
              }
            }
            in_stack_00000010 = in_stack_00000010 + 1;
            iVar8 = iVar8 + 1;
            pSVar13 = pSVar13 + 1;
          } while (iVar8 < vertex_count);
        }
        return 0;
      }
      iVar8 = 0;
      if (0 < vertex_count) {
        do {
          iVar15 = *in_stack_00000010;
          iVar8 = iVar8 + 1;
          in_stack_00000010 = in_stack_00000010 + 1;
          *(SRenderVertex **)(iVar8 * 4 + 0x825424) = g_RenderVertexBuffer + iVar15;
        } while (iVar8 < vertex_count);
      }
      if (g_CullingMode != 0) {
        if (vertex_count < 4) {
          iVar8 = engine_prim_c_calculateTriangleWindingOrder_FUN_00552150
                            (g_ClipperCullingPointers[0],g_ClipperCullingPointers[1],
                             g_ClipperCullingPointers[2]);
          bVar21 = iVar8 == 0;
        }
        else {
          iVar8 = vertex_count + -2;
          iVar15 = 0;
          iVar16 = 0;
          local_20 = iVar8;
          if (0 < iVar8 * 4) {
            do {
              iVar9 = engine_prim_c_calculateTriangleWindingOrder_FUN_00552150
                                (g_ClipperCullingPointers[0],
                                 *(SRenderVertex **)((int)g_ClipperCullingPointers + iVar15 + 4),
                                 *(SRenderVertex **)((int)g_ClipperCullingPointers + iVar15 + 8));
              if (iVar9 == 0) {
                iVar16 = iVar16 + 1;
              }
              iVar15 = iVar15 + 4;
            } while (SBORROW4(iVar15,iVar8 * 4) != iVar15 + iVar8 * -4 < 0);
          }
          bVar21 = iVar16 == local_20;
        }
        if (bVar21) {
          return 1;
        }
      }
      g_RenderedTriangleCount = g_RenderedTriangleCount + vertex_count + -2;
      wincore_windll_cpp_drawPolygon2_FUN_005b7610
                (g_ClipperCullingPointers,vertex_count,g_RenderStateFlags);
      return 1;
    }
    iVar8 = 0;
    if (0 < vertex_count) {
      do {
        iVar15 = *in_stack_00000010;
        iVar8 = iVar8 + 1;
        in_stack_00000010 = in_stack_00000010 + 1;
        local_148[iVar8] = g_RenderVertexBuffer + iVar15;
      } while (iVar8 < vertex_count);
    }
    g_ClippedVertexCount = vertex_count;
    iVar8 = 0;
    local_40 = vertex_count;
    g_ClipperTempCount = 0;
    local_44 = (int)auStack_c4;
    local_3c = 0;
    if (0 < vertex_count) {
      puVar14 = local_148;
      pSVar13 = (SRenderVertex *)local_148[vertex_count];
      do {
        iVar15 = g_ClipperTempCount;
        puVar14 = puVar14 + 1;
        pSVar19 = (SRenderVertex *)*puVar14;
        bVar7 = (pSVar13->projected_vertex).transformed_z <=
                (pSVar13->projected_vertex).transformed_x;
        if ((pSVar19->projected_vertex).transformed_z <= (pSVar19->projected_vertex).transformed_x)
        {
          bVar7 = bVar7 | 2;
        }
        switch(bVar7) {
        case 0:
          uVar6 = iVar8 * 4;
          iVar8 = iVar8 + 1;
          *(SRenderVertex **)(local_44 + uVar6) = pSVar13;
          break;
        case 1:
          if (0xb < g_ClipperTempCount) {
            g_CurrentFilename = "..\\engine\\clipper.c";
            g_CurrentLineNumber = 0x5e;
            core_main_c_displayErrorAndQuit_FUN_00506f10("Ran out of clipped verts!");
          }
          pSVar17 = g_ClipperTempBuffer + g_ClipperTempCount;
          g_ClipperTempCount = g_ClipperTempCount + 1;
          iVar15 = iVar8 * 4;
          iVar8 = iVar8 + 1;
          *(SRenderVertex **)(iVar15 + local_48) = pSVar17;
          engine_clipper_c_interpolateVertexLeftClip_FUN_00435a00(pSVar19,pSVar13,pSVar17);
          break;
        case 2:
          iVar16 = iVar8 + 1;
          *(SRenderVertex **)(local_44 + iVar8 * 4) = pSVar13;
          if (0xb < iVar15) {
            g_CurrentFilename = "..\\engine\\clipper.c";
            g_CurrentLineNumber = 0x5e;
            core_main_c_displayErrorAndQuit_FUN_00506f10("Ran out of clipped verts!");
          }
          pSVar17 = g_ClipperTempBuffer + g_ClipperTempCount;
          g_ClipperTempCount = g_ClipperTempCount + 1;
          iVar8 = iVar8 + 2;
          *(SRenderVertex **)(iVar16 * 4 + local_48) = pSVar17;
          engine_clipper_c_interpolateVertexLeftClip_FUN_00435a00(pSVar13,pSVar19,pSVar17);
        }
        local_3c = local_3c + 1;
        pSVar13 = pSVar19;
      } while (local_3c < local_40);
    }
    g_ClippedVertexCount = iVar8;
    if (2 < iVar8) {
      iVar15 = 0;
      local_38 = iVar8;
      local_34 = 0;
      pSVar13 = (SRenderVertex *)(&local_c8)[iVar8];
      puVar14 = (undefined4 *)auStack_c4;
      if (0 < iVar8) {
        do {
          local_1c = puVar14;
          pSVar19 = (SRenderVertex *)*local_1c;
          bVar7 = (pSVar13->projected_vertex).transformed_x <=
                  -(pSVar13->projected_vertex).transformed_z;
          if ((pSVar19->projected_vertex).transformed_x <=
              -(pSVar19->projected_vertex).transformed_z) {
            bVar7 = bVar7 | 2;
          }
          switch(bVar7) {
          case 0:
            iVar15 = iVar15 + 1;
            local_148[iVar15] = pSVar13;
            break;
          case 1:
            if (0xb < g_ClipperTempCount) {
              g_CurrentFilename = "..\\engine\\clipper.c";
              g_CurrentLineNumber = 0x5e;
              core_main_c_displayErrorAndQuit_FUN_00506f10("Ran out of clipped verts!");
            }
            pSVar17 = g_ClipperTempBuffer + g_ClipperTempCount;
            iVar15 = iVar15 + 1;
            g_ClipperTempCount = g_ClipperTempCount + 1;
            local_148[iVar15] = pSVar17;
            engine_clipper_c_interpolateVertexRightClip_FUN_00435b00(pSVar19,pSVar13,pSVar17);
            break;
          case 2:
            local_148[iVar15 + 1] = pSVar13;
            if (0xb < g_ClipperTempCount) {
              g_CurrentFilename = "..\\engine\\clipper.c";
              g_CurrentLineNumber = 0x5e;
              core_main_c_displayErrorAndQuit_FUN_00506f10("Ran out of clipped verts!");
            }
            pSVar17 = g_ClipperTempBuffer + g_ClipperTempCount;
            iVar15 = iVar15 + 2;
            g_ClipperTempCount = g_ClipperTempCount + 1;
            local_148[iVar15] = pSVar17;
            engine_clipper_c_interpolateVertexRightClip_FUN_00435b00(pSVar13,pSVar19,pSVar17);
          }
          local_34 = local_34 + 1;
          local_1c = local_1c + 1;
          pSVar13 = pSVar19;
          puVar14 = local_1c;
        } while (local_34 < local_38);
      }
      g_ClippedVertexCount = iVar15;
      if (2 < iVar15) {
        iVar8 = 0;
        local_30 = iVar15;
        local_2c = 0;
        pSVar13 = (SRenderVertex *)local_148[iVar15];
        puVar14 = local_148 + 1;
        if (0 < iVar15) {
          do {
            local_18 = puVar14;
            pSVar19 = (SRenderVertex *)*local_18;
            bVar7 = (pSVar13->projected_vertex).transformed_z <=
                    (pSVar13->projected_vertex).transformed_y;
            if ((pSVar19->projected_vertex).transformed_z <=
                (pSVar19->projected_vertex).transformed_y) {
              bVar7 = bVar7 | 2;
            }
            switch(bVar7) {
            case 0:
              iVar8 = iVar8 + 1;
              (&local_c8)[iVar8] = pSVar13;
              break;
            case 1:
              if (0xb < g_ClipperTempCount) {
                g_CurrentFilename = "..\\engine\\clipper.c";
                g_CurrentLineNumber = 0x5e;
                core_main_c_displayErrorAndQuit_FUN_00506f10("Ran out of clipped verts!");
              }
              pSVar17 = g_ClipperTempBuffer + g_ClipperTempCount;
              iVar8 = iVar8 + 1;
              g_ClipperTempCount = g_ClipperTempCount + 1;
              (&local_c8)[iVar8] = pSVar17;
              engine_clipper_c_interpolateVertexBottomClip_FUN_00435c00(pSVar19,pSVar13,pSVar17);
              break;
            case 2:
              (&local_c8)[iVar8 + 1] = pSVar13;
              if (0xb < g_ClipperTempCount) {
                g_CurrentFilename = "..\\engine\\clipper.c";
                g_CurrentLineNumber = 0x5e;
                core_main_c_displayErrorAndQuit_FUN_00506f10("Ran out of clipped verts!");
              }
              pSVar17 = g_ClipperTempBuffer + g_ClipperTempCount;
              iVar8 = iVar8 + 2;
              g_ClipperTempCount = g_ClipperTempCount + 1;
              (&local_c8)[iVar8] = pSVar17;
              engine_clipper_c_interpolateVertexBottomClip_FUN_00435c00(pSVar13,pSVar19,pSVar17);
            }
            local_2c = local_2c + 1;
            local_18 = local_18 + 1;
            pSVar13 = pSVar19;
            puVar14 = local_18;
          } while (local_2c < local_30);
        }
        g_ClippedVertexCount = iVar8;
        if (2 < iVar8) {
          iVar15 = 0;
          local_28 = iVar8;
          local_24 = 0;
          pSVar13 = (SRenderVertex *)(&local_c8)[iVar8];
          puVar14 = (undefined4 *)auStack_c4;
          if (0 < iVar8) {
            do {
              local_14 = puVar14;
              pSVar19 = (SRenderVertex *)*local_14;
              bVar7 = (pSVar13->projected_vertex).transformed_y <=
                      -(pSVar13->projected_vertex).transformed_z;
              if ((pSVar19->projected_vertex).transformed_y <=
                  -(pSVar19->projected_vertex).transformed_z) {
                bVar7 = bVar7 | 2;
              }
              switch(bVar7) {
              case 0:
                iVar15 = iVar15 + 1;
                local_148[iVar15] = pSVar13;
                break;
              case 1:
                if (0xb < g_ClipperTempCount) {
                  g_CurrentFilename = "..\\engine\\clipper.c";
                  g_CurrentLineNumber = 0x5e;
                  core_main_c_displayErrorAndQuit_FUN_00506f10("Ran out of clipped verts!");
                }
                pSVar17 = g_ClipperTempBuffer + g_ClipperTempCount;
                iVar15 = iVar15 + 1;
                g_ClipperTempCount = g_ClipperTempCount + 1;
                local_148[iVar15] = pSVar17;
                engine_clipper_c_interpolateVertexTopClip_FUN_00435d00(pSVar19,pSVar13,pSVar17);
                break;
              case 2:
                local_148[iVar15 + 1] = pSVar13;
                if (0xb < g_ClipperTempCount) {
                  g_CurrentFilename = "..\\engine\\clipper.c";
                  g_CurrentLineNumber = 0x5e;
                  core_main_c_displayErrorAndQuit_FUN_00506f10("Ran out of clipped verts!");
                }
                pSVar17 = g_ClipperTempBuffer + g_ClipperTempCount;
                iVar15 = iVar15 + 2;
                g_ClipperTempCount = g_ClipperTempCount + 1;
                local_148[iVar15] = pSVar17;
                engine_clipper_c_interpolateVertexTopClip_FUN_00435d00(pSVar13,pSVar19,pSVar17);
              }
              local_24 = local_24 + 1;
              local_14 = local_14 + 1;
              pSVar13 = pSVar19;
              puVar14 = local_14;
            } while (local_24 < local_28);
          }
          g_ClippedVertexCount = iVar15;
          if (2 < iVar15) {
            iVar8 = 0;
            if (0 < iVar15) {
              pSVar13 = g_ClippedVertexBuffer;
              iVar15 = 0;
              do {
                plVar18 = *(longlong **)((int)local_148 + iVar15 + 4);
                iVar16 = 0x30;
                pSVar19 = pSVar13;
                while (7 < iVar16) {
                  lVar1 = *plVar18;
                  plVar18 = plVar18 + 1;
                  (pSVar19->projected_vertex).transformed_x = (int)(longlong)ROUND((float10)lVar1);
                  (pSVar19->projected_vertex).transformed_y =
                       (int)((ulonglong)(longlong)ROUND((float10)lVar1) >> 0x20);
                  pSVar19 = (SRenderVertex *)&(pSVar19->projected_vertex).transformed_z;
                  iVar16 = iVar16 + -8;
                }
                if (iVar16 != 0 && SCARRY4(iVar16 + -8,8) == iVar16 < 0) {
                  (pSVar19->projected_vertex).transformed_x = (int)*plVar18;
                  if (4 < iVar16) {
                    *(undefined4 *)((int)pSVar19 + (uint)bVar22 * -8 + 4) =
                         *(undefined4 *)((int)plVar18 + (uint)bVar22 * -8 + 4);
                  }
                }
                iVar15 = iVar15 + 4;
                iVar8 = iVar8 + 1;
                pSVar13 = pSVar13 + 1;
              } while (iVar8 < g_ClippedVertexCount);
            }
            iVar8 = 0;
            if (g_NearPlaneDistance != 0) {
              if (0 < g_ClippedVertexCount) {
                iVar15 = 0;
                do {
                  iVar16 = *(int *)((int)&g_ClippedVertexBuffer[0].projected_vertex.transformed_z +
                                   iVar15);
                  if (iVar8 < iVar16) {
                    iVar8 = iVar16;
                  }
                  iVar15 = iVar15 + 0x30;
                } while (iVar15 < g_ClippedVertexCount * 0x30);
              }
              if (g_NearPlaneDistance <= iVar8) {
                DAT_008254a8 = g_ClippedVertexCount;
                iVar15 = 0;
                plVar20 = (longlong *)((int)&DAT_008254ac + (uint)bVar22 * -8 + 4);
                plVar18 = (longlong *)((int)g_ClippedVertexBuffer + (uint)bVar22 * -8 + 4);
                DAT_008254ac._0_4_ = g_ClippedVertexBuffer[0].projected_vertex.transformed_x;
                iVar8 = g_ClippedVertexCount * 0x30 + -4;
                if (iVar8 != 0 && 3 < g_ClippedVertexCount * 0x30) {
                  while (7 < iVar8) {
                    lVar1 = *plVar18;
                    plVar18 = plVar18 + 1;
                    *plVar20 = (longlong)ROUND((float10)lVar1);
                    plVar20 = plVar20 + 1;
                    iVar8 = iVar8 + -8;
                  }
                  if (iVar8 != 0 && SCARRY4(iVar8 + -8,8) == iVar8 < 0) {
                    *(int *)plVar20 = (int)*plVar18;
                    if (4 < iVar8) {
                      *(undefined4 *)((int)plVar20 + (uint)bVar22 * -8 + 4) =
                           *(undefined4 *)((int)plVar18 + (uint)bVar22 * -8 + 4);
                    }
                  }
                }
                g_ClippedVertexCount = 0;
                if (0 < (int)DAT_008254a8) {
                  pSVar13 = (SRenderVertex *)&DAT_008254ac;
                  do {
                    uVar11 = iVar15 + 1;
                    if (uVar11 == DAT_008254a8) {
                      uVar11 = uVar11 ^ DAT_008254a8;
                    }
                    bVar7 = g_NearPlaneDistance <= (pSVar13->projected_vertex).transformed_z;
                    if (g_NearPlaneDistance <= *(int *)(&DAT_008254b4 + uVar11 * 0x30)) {
                      bVar7 = bVar7 | 2;
                    }
                    switch(bVar7) {
                    case 0:
                      pSVar17 = g_ClippedVertexBuffer + g_ClippedVertexCount;
                      iVar8 = 0x30;
                      pSVar19 = pSVar13;
                      while (7 < iVar8) {
                        lVar2._0_4_ = (pSVar19->projected_vertex).transformed_x;
                        lVar2._4_4_ = (pSVar19->projected_vertex).transformed_y;
                        pSVar19 = (SRenderVertex *)&(pSVar19->projected_vertex).transformed_z;
                        (pSVar17->projected_vertex).transformed_x =
                             (int)(longlong)ROUND((float10)lVar2);
                        (pSVar17->projected_vertex).transformed_y =
                             (int)((ulonglong)(longlong)ROUND((float10)lVar2) >> 0x20);
                        pSVar17 = (SRenderVertex *)&(pSVar17->projected_vertex).transformed_z;
                        iVar8 = iVar8 + -8;
                      }
                      if (iVar8 != 0 && SCARRY4(iVar8 + -8,8) == iVar8 < 0) {
                        (pSVar17->projected_vertex).transformed_x =
                             (pSVar19->projected_vertex).transformed_x;
                        if (4 < iVar8) {
                          *(undefined4 *)((int)pSVar17 + (uint)bVar22 * -8 + 4) =
                               *(undefined4 *)((int)pSVar19 + (uint)bVar22 * -8 + 4);
                        }
                      }
                      g_ClippedVertexCount = g_ClippedVertexCount + 1;
                      break;
                    case 1:
                      engine_clipper_c_interpolateVertexNearClip_FUN_00435e00
                                ((SRenderVertex *)(&DAT_008254ac + uVar11 * 6),pSVar13,
                                 g_ClippedVertexBuffer + g_ClippedVertexCount);
                      g_ClippedVertexCount = g_ClippedVertexCount + 1;
                      break;
                    case 2:
                      pSVar17 = g_ClippedVertexBuffer + g_ClippedVertexCount;
                      iVar8 = 0x30;
                      pSVar19 = pSVar13;
                      while (7 < iVar8) {
                        lVar3._0_4_ = (pSVar19->projected_vertex).transformed_x;
                        lVar3._4_4_ = (pSVar19->projected_vertex).transformed_y;
                        pSVar19 = (SRenderVertex *)&(pSVar19->projected_vertex).transformed_z;
                        (pSVar17->projected_vertex).transformed_x =
                             (int)(longlong)ROUND((float10)lVar3);
                        (pSVar17->projected_vertex).transformed_y =
                             (int)((ulonglong)(longlong)ROUND((float10)lVar3) >> 0x20);
                        pSVar17 = (SRenderVertex *)&(pSVar17->projected_vertex).transformed_z;
                        iVar8 = iVar8 + -8;
                      }
                      if (iVar8 != 0 && SCARRY4(iVar8 + -8,8) == iVar8 < 0) {
                        (pSVar17->projected_vertex).transformed_x =
                             (pSVar19->projected_vertex).transformed_x;
                        if (4 < iVar8) {
                          *(undefined4 *)((int)pSVar17 + (uint)bVar22 * -8 + 4) =
                               *(undefined4 *)((int)pSVar19 + (uint)bVar22 * -8 + 4);
                        }
                      }
                      g_ClippedVertexCount = g_ClippedVertexCount + 1;
                      engine_clipper_c_interpolateVertexNearClip_FUN_00435e00
                                (pSVar13,(SRenderVertex *)(&DAT_008254ac + uVar11 * 6),
                                 g_ClippedVertexBuffer + g_ClippedVertexCount);
                      g_ClippedVertexCount = g_ClippedVertexCount + 1;
                    }
                    iVar15 = iVar15 + 1;
                    pSVar13 = pSVar13 + 1;
                  } while (iVar15 < (int)DAT_008254a8);
                }
              }
            }
            if (2 < g_ClippedVertexCount) {
              iVar8 = 0;
              if (0 < g_ClippedVertexCount) {
                pSVar13 = g_ClippedVertexBuffer;
                do {
                  iVar15 = (pSVar13->projected_vertex).transformed_z;
                  if (iVar15 == 0) {
                    (pSVar13->projected_vertex).transformed_z = 1;
                    (pSVar13->projected_vertex).transformed_x = 0;
                    iVar9 = 0;
LAB_00436c7e:
                    (pSVar13->projected_vertex).transformed_y = iVar9;
                  }
                  else {
                    iVar16 = (pSVar13->projected_vertex).transformed_x;
                    if (iVar15 < iVar16) {
                      (pSVar13->projected_vertex).transformed_x = iVar15;
                    }
                    else {
                      iVar9 = -iVar15;
                      if (-iVar16 == iVar15 || iVar9 < iVar16) {
                        iVar16 = (pSVar13->projected_vertex).transformed_z;
                        iVar5 = (pSVar13->projected_vertex).transformed_y;
                        if (iVar16 < iVar5) {
                          (pSVar13->projected_vertex).transformed_y = iVar16;
                        }
                        else if (-iVar5 != iVar15 && iVar5 <= iVar9) goto LAB_00436c7e;
                      }
                      else {
                        (pSVar13->projected_vertex).transformed_x = iVar9;
                      }
                    }
                  }
                  iVar8 = iVar8 + 1;
                  pSVar13 = pSVar13 + 1;
                } while (iVar8 < g_ClippedVertexCount);
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


// Assembly code:
// 004366e0: PUSH EBX
//   Label: engine_clipper.c_clipPolygonToViewFrustum_FUN_004366e0
// 004366e1: PUSH ESI
// 004366e2: PUSH EDI
// 004366e3: PUSH EBP
// 004366e4: SUB ESP,0x23c
// 004366ea: MOV EBP,dword ptr [ESP + 0x250]
//   XREF to: Stack[0x4] (READ)
// 004366f1: TEST EBP,EBP
// 004366f3: JL 0x004366fa
//   XREF to: 004366fa (CONDITIONAL_JUMP)
// 004366f5: CMP EBP,0x10
// 004366f8: JLE 0x0043672e
//   XREF to: 0043672e (CONDITIONAL_JUMP)
// 004366fa: PUSH EBP
//   Label: LAB_004366fa
// 004366fb: PUSH 0x618131
//   XREF to: 00618131 (DATA)
// 00436700: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x24c] (DATA)
// 00436704: PUSH EAX
// 00436705: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 0043670a: MOV EDX,0x61814e
//   XREF to: 0061814e (PARAM)
// 0043670f: ADD ESP,0xc
// 00436712: MOV EAX,ESP
// 00436714: MOV ECX,0x276
// 00436719: PUSH EAX
// 0043671a: MOV dword ptr [0x02f0ca48],EDX
//   XREF to: 02f0ca48 (WRITE)
// 00436720: MOV dword ptr [0x02f0ca4c],ECX
//   XREF to: 02f0ca4c (WRITE)
// 00436726: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0043672b: ADD ESP,0x4
// 0043672e: MOV ECX,0xffffffff
//   Label: LAB_0043672e
// 00436733: XOR EAX,EAX
// 00436735: XOR ESI,ESI
// 00436737: TEST EBP,EBP
// 00436739: JLE 0x0043675e
//   XREF to: 0043675e (CONDITIONAL_JUMP)
// 0043673b: MOV EDX,dword ptr [ESP + 0x254]
//   XREF to: Stack[0x8] (READ)
// 00436742: IMUL EBX,dword ptr [EDX],0x30
//   Label: LAB_00436742
// 00436745: MOV EBX,dword ptr [EBX + 0x688024]
//   XREF to: 00688024 (DATA)
// 0043674b: TEST EBX,0x80000000
// 00436751: JZ 0x00436754
//   XREF to: 00436754 (CONDITIONAL_JUMP)
// 00436753: INC ESI
// 00436754: ADD EDX,0x4
//   Label: LAB_00436754
// 00436757: INC EAX
// 00436758: AND ECX,EBX
// 0043675a: CMP EAX,EBP
// 0043675c: JL 0x00436742
//   XREF to: 00436742 (CONDITIONAL_JUMP)
// 0043675e: CMP ESI,EBP
//   Label: LAB_0043675e
// 00436760: JNZ 0x0043676b
//   XREF to: 0043676b (CONDITIONAL_JUMP)
// 00436762: TEST CL,0xff
// 00436765: JNZ 0x00436830
//   XREF to: 00436830 (CONDITIONAL_JUMP)
// 0043676b: TEST ESI,ESI
//   Label: LAB_0043676b
// 0043676d: JNZ 0x0043691d
//   XREF to: 0043691d (CONDITIONAL_JUMP)
// 00436773: CMP dword ptr [0x02d03e94],0x0
//   XREF to: 02d03e94 (READ)
// 0043677a: JZ 0x00436898
//   XREF to: 00436898 (CONDITIONAL_JUMP)
// 00436780: CMP dword ptr [0x00772a74],0x0
//   XREF to: 00772a74 (READ)
// 00436787: JNZ 0x00436898
//   XREF to: 00436898 (CONDITIONAL_JUMP)
// 0043678d: XOR EAX,EAX
// 0043678f: TEST EBP,EBP
// 00436791: JLE 0x004367c0
//   XREF to: 004367c0 (CONDITIONAL_JUMP)
// 00436793: MOV EBX,dword ptr [ESP + 0x254]
//   XREF to: Stack[0x8] (READ)
// 0043679a: IMUL ECX,dword ptr [EBX],0x30
//   Label: LAB_0043679a
// 0043679d: INC EAX
// 0043679e: ADD ECX,0x688014
//   XREF to: 00688014 (DATA)
// 004367a4: ADD EBX,0x4
// 004367a7: MOV dword ptr [EAX*0x4 + 0x825424],ECX
//   XREF to: 00825428 (WRITE)
//   XREF to: 0082542c (WRITE)
// 004367ae: CMP EAX,EBP
// 004367b0: JL 0x0043679a
//   XREF to: 0043679a (CONDITIONAL_JUMP)
// 004367b2: LEA EAX,[EAX]
// 004367b8: LEA EDX,[EDX]
// 004367be: MOV EAX,EAX
// 004367c0: CMP dword ptr [0x00772a7c],0x0
//   Label: LAB_004367c0
//   XREF to: 00772a7c (READ)
// 004367c7: JZ 0x00436862
//   XREF to: 00436862 (CONDITIONAL_JUMP)
// 004367cd: CMP EBP,0x3
// 004367d0: JLE 0x00436842
//   XREF to: 00436842 (CONDITIONAL_JUMP)
// 004367d6: LEA EAX,[EBP + -0x2]
// 004367d9: XOR EBX,EBX
// 004367db: MOV dword ptr [ESP + 0x224],EAX
//   XREF to: Stack[-0x28] (WRITE)
// 004367e2: LEA EDI,[EAX*0x4 + 0x0]
// 004367e9: XOR ESI,ESI
// 004367eb: TEST EDI,EDI
// 004367ed: JLE 0x00436817
//   XREF to: 00436817 (CONDITIONAL_JUMP)
// 004367ef: MOV EAX,dword ptr [EBX + 0x825430]
//   Label: LAB_004367ef
//   XREF to: 00825430 (READ)
//   XREF to: 00825434 (READ)
// 004367f5: PUSH EAX
// 004367f6: MOV EDX,dword ptr [EBX + 0x82542c]
//   XREF to: 0082542c (READ)
//   XREF to: 00825430 (READ)
// 004367fc: PUSH EDX
// 004367fd: MOV ECX,dword ptr [0x00825428]
//   XREF to: 00825428 (READ)
// 00436803: PUSH ECX
// 00436804: CALL engine_prim.c_calculateTriangleWindingOrder_FUN_00552150
//   XREF to: 00552150 (UNCONDITIONAL_CALL)
// 00436809: ADD ESP,0xc
// 0043680c: TEST EAX,EAX
// 0043680e: JZ 0x0043683f
//   XREF to: 0043683f (CONDITIONAL_JUMP)
// 00436810: ADD EBX,0x4
//   Label: LAB_00436810
// 00436813: CMP EBX,EDI
// 00436815: JL 0x004367ef
//   XREF to: 004367ef (CONDITIONAL_JUMP)
// 00436817: CMP ESI,dword ptr [ESP + 0x224]
//   Label: LAB_00436817
//   XREF to: Stack[-0x28] (READ)
// 0043681e: JNZ 0x00436862
//   Label: LAB_0043681e
//   XREF to: 00436862 (CONDITIONAL_JUMP)
// 00436820: MOV EAX,0x1
//   Label: LAB_00436820
// 00436825: ADD ESP,0x23c
//   Label: LAB_00436825
// 0043682b: POP EBP
// 0043682c: POP EDI
// 0043682d: POP ESI
// 0043682e: POP EBX
// 0043682f: RET
// 00436830: XOR EBP,EBP
//   Label: LAB_00436830
// 00436832: MOV EAX,0x1
// 00436837: MOV dword ptr [0x00824e24],EBP
//   XREF to: 00824e24 (WRITE)
// 0043683d: JMP 0x00436825
//   XREF to: 00436825 (UNCONDITIONAL_JUMP)
// 0043683f: INC ESI
//   Label: LAB_0043683f
// 00436840: JMP 0x00436810
//   XREF to: 00436810 (UNCONDITIONAL_JUMP)
// 00436842: MOV EAX,[0x00825430]
//   Label: LAB_00436842
//   XREF to: 00825430 (READ)
// 00436847: PUSH EAX
// 00436848: MOV EDX,dword ptr [0x0082542c]
//   XREF to: 0082542c (READ)
// 0043684e: PUSH EDX
// 0043684f: MOV ECX,dword ptr [0x00825428]
//   XREF to: 00825428 (READ)
// 00436855: PUSH ECX
// 00436856: CALL engine_prim.c_calculateTriangleWindingOrder_FUN_00552150
//   XREF to: 00552150 (UNCONDITIONAL_CALL)
// 0043685b: ADD ESP,0xc
// 0043685e: TEST EAX,EAX
// 00436860: JMP 0x0043681e
//   XREF to: 0043681e (UNCONDITIONAL_JUMP)
// 00436862: MOV ESI,dword ptr [0x02d052a0]
//   Label: LAB_00436862
//   XREF to: 02d052a0 (READ)
// 00436868: PUSH ESI
// 00436869: LEA EAX,[EBP + -0x2]
// 0043686c: MOV EBX,dword ptr [0x030e56b8]
//   XREF to: 030e56b8 (READ)
// 00436872: PUSH EBP
// 00436873: ADD EBX,EAX
// 00436875: PUSH 0x825428
//   XREF to: 00825428 (DATA)
// 0043687a: MOV dword ptr [0x030e56b8],EBX
//   XREF to: 030e56b8 (WRITE)
// 00436880: CALL wincore_windll.cpp_drawPolygon2_FUN_005b7610
//   XREF to: 005b7610 (UNCONDITIONAL_CALL)
// 00436885: MOV EAX,0x1
// 0043688a: ADD ESP,0xc
// 0043688d: ADD ESP,0x23c
// 00436893: POP EBP
// 00436894: POP EDI
// 00436895: POP ESI
// 00436896: POP EBX
// 00436897: RET
// 00436898: XOR EDI,EDI
//   Label: LAB_00436898
// 0043689a: MOV dword ptr [0x00824e24],EBP
//   XREF to: 00824e24 (WRITE)
// 004368a0: MOV dword ptr [ESP + 0x234],EDI
//   XREF to: Stack[-0x18] (WRITE)
// 004368a7: TEST EBP,EBP
// 004368a9: JLE 0x00436910
//   XREF to: 00436910 (CONDITIONAL_JUMP)
// 004368ab: MOV EDX,dword ptr [ESP + 0x254]
//   XREF to: Stack[0x8] (READ)
// 004368b2: MOV EBX,0x824e28
//   XREF to: 00824e28 (DATA)
// 004368b7: IMUL ESI,dword ptr [EDX],0x30
//   Label: LAB_004368b7
// 004368ba: MOV ECX,0x30
// 004368bf: ADD ESI,0x688014
//   XREF to: 00688014 (DATA)
// 004368c5: MOV EDI,EBX
// 004368c7: TEST EDI,0x7
// 004368cd: JZ 0x004368d5
//   XREF to: 004368d5 (CONDITIONAL_JUMP)
// 004368cf: MOVSD ES:EDI,ESI
//   XREF to: 00824e28 (WRITE)
//   XREF to: 00824e58 (WRITE)
//   XREF to: 00688014 (DATA)
// 004368d0: SUB ECX,0x4
// 004368d3: JLE 0x004368f2
//   XREF to: 004368f2 (CONDITIONAL_JUMP)
// 004368d5: SUB ECX,0x8
//   Label: LAB_004368d5
// 004368d8: JL 0x004368e6
//   XREF to: 004368e6 (CONDITIONAL_JUMP)
// 004368da: FILD qword ptr [ESI]
//   XREF to: 00688014 (DATA)
//   XREF to: 00688018 (DATA)
//   XREF to: 0068801c (DATA)
// 004368dc: ADD ESI,0x8
// 004368df: FISTP qword ptr [EDI]
//   XREF to: 00824e28 (WRITE)
//   XREF to: 00824e2c (WRITE)
//   XREF to: 00824e30 (WRITE)
//   XREF to: 00824e5c (WRITE)
// 004368e1: ADD EDI,0x8
// 004368e4: JMP 0x004368d5
//   XREF to: 004368d5 (UNCONDITIONAL_JUMP)
// 004368e6: ADD ECX,0x8
//   Label: LAB_004368e6
// 004368e9: JLE 0x004368f2
//   XREF to: 004368f2 (CONDITIONAL_JUMP)
// 004368eb: MOVSD ES:EDI,ESI
//   XREF to: 00824e2c (WRITE)
//   XREF to: 00824e30 (WRITE)
//   XREF to: 00688018 (DATA)
//   XREF to: 0068801c (DATA)
// 004368ec: SUB ECX,0x4
// 004368ef: JLE 0x004368f2
//   XREF to: 004368f2 (CONDITIONAL_JUMP)
// 004368f1: MOVSD ES:EDI,ESI
//   XREF to: 00824e30 (WRITE)
//   XREF to: 00824e34 (WRITE)
//   XREF to: 0068801c (DATA)
//   XREF to: 00688020 (DATA)
// 004368f2: MOV EAX,dword ptr [ESP + 0x234]
//   Label: LAB_004368f2
//   XREF to: Stack[-0x18] (READ)
// 004368f9: ADD EDX,0x4
// 004368fc: INC EAX
// 004368fd: ADD EBX,0x30
// 00436900: MOV dword ptr [ESP + 0x234],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 00436907: CMP EBP,EAX
// 00436909: JG 0x004368b7
//   XREF to: 004368b7 (CONDITIONAL_JUMP)
// 0043690b: LEA EAX,[EAX]
// 0043690e: MOV ECX,ECX
// 00436910: XOR EAX,EAX
//   Label: LAB_00436910
// 00436912: ADD ESP,0x23c
// 00436918: POP EBP
// 00436919: POP EDI
// 0043691a: POP ESI
// 0043691b: POP EBX
// 0043691c: RET
// 0043691d: XOR EAX,EAX
//   Label: LAB_0043691d
// 0043691f: TEST EBP,EBP
// 00436921: JLE 0x00436950
//   XREF to: 00436950 (CONDITIONAL_JUMP)
// 00436923: MOV EBX,dword ptr [ESP + 0x254]
//   XREF to: Stack[0x8] (READ)
// 0043692a: IMUL EDX,dword ptr [EBX],0x30
//   Label: LAB_0043692a
// 0043692d: INC EAX
// 0043692e: ADD EDX,0x688014
//   XREF to: 00688014 (DATA)
// 00436934: ADD EBX,0x4
// 00436937: MOV dword ptr [ESP + EAX*0x4 + 0xfc],EDX
//   XREF to: Stack[-0x14c] (DATA)
// 0043693e: CMP EAX,EBP
// 00436940: JL 0x0043692a
//   XREF to: 0043692a (CONDITIONAL_JUMP)
// 00436942: LEA EAX,[EAX]
// 00436948: LEA EDX,[EDX]
// 0043694e: MOV EAX,EAX
// 00436950: LEA EAX,[ESP + 0x180]
//   Label: LAB_00436950
//   XREF to: Stack[-0xcc] (DATA)
// 00436957: LEA EDX,[ESP + 0x100]
//   XREF to: Stack[-0x14c] (DATA)
// 0043695e: MOV dword ptr [0x00824e24],EBP
//   XREF to: 00824e24 (WRITE)
// 00436964: XOR EBX,EBX
// 00436966: MOV dword ptr [ESP + 0x204],EBP
//   XREF to: Stack[-0x48] (WRITE)
// 0043696d: MOV dword ptr [0x00825cec],EBX
//   XREF to: 00825cec (WRITE)
// 00436973: MOV dword ptr [ESP + 0x200],EAX
//   XREF to: Stack[-0x4c] (WRITE)
// 0043697a: MOV dword ptr [ESP + 0x208],EBX
//   XREF to: Stack[-0x44] (WRITE)
// 00436981: MOV ESI,dword ptr [EDX + EBP*0x4 + -0x4]
// 00436985: TEST EBP,EBP
// 00436987: JLE 0x004369ea
//   XREF to: 004369ea (CONDITIONAL_JUMP)
// 00436989: LEA EBP,[ESP + 0x100]
//   XREF to: Stack[-0x14c] (DATA)
// 00436990: MOV EDX,dword ptr [ESI]
//   Label: LAB_00436990
//   XREF to: 00688014 (DATA)
// 00436992: MOV ECX,dword ptr [ESI + 0x8]
//   XREF to: 0068801c (DATA)
// 00436995: MOV EDI,dword ptr [EBP]
//   XREF to: Stack[-0x14c] (DATA)
// 00436998: XOR EAX,EAX
// 0043699a: CMP EDX,ECX
// 0043699c: JL 0x004369a3
//   XREF to: 004369a3 (CONDITIONAL_JUMP)
// 0043699e: MOV EAX,0x1
// 004369a3: MOV ECX,dword ptr [EDI + 0x8]
//   Label: LAB_004369a3
//   XREF to: 0068801c (DATA)
// 004369a6: CMP ECX,dword ptr [EDI]
//   XREF to: 00688014 (DATA)
// 004369a8: JG 0x004369ac
//   XREF to: 004369ac (CONDITIONAL_JUMP)
// 004369aa: OR AL,0x2
// 004369ac: CMP EAX,0x3
//   Label: LAB_004369ac
// 004369af: JA 0x004369cb
//   XREF to: 004369cb (CONDITIONAL_JUMP)
// 004369b1: JMP dword ptr [EAX*0x4 + 0x43668c]
//   Label: switchD
//   XREF to: 004369b8 (COMPUTED_JUMP)
//   XREF to: 004369cb (COMPUTED_JUMP)
//   XREF to: 00436c9c (COMPUTED_JUMP)
//   XREF to: 00436cfe (COMPUTED_JUMP)
//   XREF to: 0043668c (DATA)
//   XREF to: 00436690 (READ)
//   XREF to: 00436698 (READ)
//   XREF to: 004369cb (COMPUTED_JUMP)
//   XREF to: 00436c9c (COMPUTED_JUMP)
// 004369b8: MOV ECX,dword ptr [ESP + 0x200]
//   Label: caseD_0
//   XREF to: Stack[-0x4c] (READ)
// 004369bf: LEA EAX,[EBX*0x4 + 0x0]
// 004369c6: ADD EAX,ECX
// 004369c8: INC EBX
// 004369c9: MOV dword ptr [EAX],ESI
//   XREF to: Stack[-0xcc] (DATA)
// 004369cb: MOV EAX,dword ptr [ESP + 0x208]
//   Label: caseD_3
//   XREF to: Stack[-0x44] (READ)
// 004369d2: MOV EDX,dword ptr [ESP + 0x204]
//   XREF to: Stack[-0x48] (READ)
// 004369d9: MOV ESI,EDI
// 004369db: INC EAX
// 004369dc: ADD EBP,0x4
// 004369df: MOV dword ptr [ESP + 0x208],EAX
//   XREF to: Stack[-0x44] (WRITE)
// 004369e6: CMP EAX,EDX
// 004369e8: JL 0x00436990
//   XREF to: 00436990 (CONDITIONAL_JUMP)
// 004369ea: MOV dword ptr [0x00824e24],EBX
//   Label: LAB_004369ea
//   XREF to: 00824e24 (WRITE)
// 004369f0: CMP EBX,0x3
// 004369f3: JL 0x00436820
//   XREF to: 00436820 (CONDITIONAL_JUMP)
// 004369f9: LEA EDX,[ESP + 0x180]
//   XREF to: Stack[-0xcc] (DATA)
// 00436a00: LEA EBP,[ESP + 0x100]
//   XREF to: Stack[-0x14c] (DATA)
// 00436a07: XOR ESI,ESI
// 00436a09: MOV dword ptr [ESP + 0x20c],EBX
//   XREF to: Stack[-0x40] (WRITE)
// 00436a10: MOV dword ptr [ESP + 0x210],ESI
//   XREF to: Stack[-0x3c] (WRITE)
// 00436a17: MOV EDI,dword ptr [EDX + EBX*0x4 + -0x4]
// 00436a1b: TEST EBX,EBX
// 00436a1d: JLE 0x00436a8c
//   XREF to: 00436a8c (CONDITIONAL_JUMP)
// 00436a1f: MOV dword ptr [ESP + 0x228],EDX
//   XREF to: Stack[-0x24] (WRITE)
// 00436a26: MOV EBX,dword ptr [ESP + 0x228]
//   Label: LAB_00436a26
//   XREF to: Stack[-0x24] (READ)
// 00436a2d: MOV EDX,dword ptr [EDI + 0x8]
//   XREF to: 00825ab4 (READ)
// 00436a30: MOV ECX,dword ptr [EDI]
//   XREF to: 00825aac (READ)
// 00436a32: XOR EAX,EAX
// 00436a34: NEG EDX
// 00436a36: MOV EBX,dword ptr [EBX]
//   XREF to: Stack[-0xcc] (DATA)
// 00436a38: CMP EDX,ECX
// 00436a3a: JL 0x00436a41
//   XREF to: 00436a41 (CONDITIONAL_JUMP)
// 00436a3c: MOV EAX,0x1
// 00436a41: MOV EDX,dword ptr [EBX + 0x8]
//   Label: LAB_00436a41
//   XREF to: 00825ab4 (READ)
// 00436a44: MOV ECX,dword ptr [EBX]
//   XREF to: 00825aac (READ)
// 00436a46: NEG EDX
// 00436a48: CMP EDX,ECX
// 00436a4a: JL 0x00436a4e
//   XREF to: 00436a4e (CONDITIONAL_JUMP)
// 00436a4c: OR AL,0x2
// 00436a4e: CMP EAX,0x3
//   Label: LAB_00436a4e
// 00436a51: JA 0x00436a5f
//   XREF to: 00436a5f (CONDITIONAL_JUMP)
// 00436a53: JMP dword ptr [EAX*0x4 + 0x43669c]
//   Label: switchD
//   XREF to: 00436a5a (COMPUTED_JUMP)
//   XREF to: 00436a5f (COMPUTED_JUMP)
//   XREF to: 00436d75 (COMPUTED_JUMP)
//   XREF to: 00436dc9 (COMPUTED_JUMP)
//   XREF to: 0043669c (DATA)
//   XREF to: 004366a0 (READ)
//   XREF to: 004366a8 (READ)
//   XREF to: 00436a5f (COMPUTED_JUMP)
//   XREF to: 00436d75 (COMPUTED_JUMP)
// 00436a5a: INC ESI
//   Label: caseD_0
// 00436a5b: MOV dword ptr [EBP + ESI*0x4 + -0x4],EDI
//   XREF to: Stack[-0x14c] (DATA)
//   XREF to: 00825aac (DATA)
// 00436a5f: MOV EAX,dword ptr [ESP + 0x210]
//   Label: caseD_3
//   XREF to: Stack[-0x3c] (READ)
// 00436a66: MOV EDX,dword ptr [ESP + 0x20c]
//   XREF to: Stack[-0x40] (READ)
// 00436a6d: MOV EDI,EBX
// 00436a6f: MOV EBX,dword ptr [ESP + 0x228]
//   XREF to: Stack[-0x24] (READ)
// 00436a76: INC EAX
// 00436a77: ADD EBX,0x4
// 00436a7a: MOV dword ptr [ESP + 0x210],EAX
//   XREF to: Stack[-0x3c] (WRITE)
// 00436a81: MOV dword ptr [ESP + 0x228],EBX
//   XREF to: Stack[-0x24] (WRITE)
// 00436a88: CMP EAX,EDX
// 00436a8a: JL 0x00436a26
//   XREF to: 00436a26 (CONDITIONAL_JUMP)
// 00436a8c: MOV dword ptr [0x00824e24],ESI
//   Label: LAB_00436a8c
//   XREF to: 00824e24 (WRITE)
// 00436a92: CMP ESI,0x3
// 00436a95: JL 0x00436820
//   XREF to: 00436820 (CONDITIONAL_JUMP)
// 00436a9b: LEA EDX,[ESP + 0x100]
//   XREF to: Stack[-0x14c] (DATA)
// 00436aa2: LEA EBP,[ESP + 0x180]
//   XREF to: Stack[-0xcc] (DATA)
// 00436aa9: XOR EBX,EBX
// 00436aab: MOV dword ptr [ESP + 0x214],ESI
//   XREF to: Stack[-0x38] (WRITE)
// 00436ab2: MOV dword ptr [ESP + 0x218],EBX
//   XREF to: Stack[-0x34] (WRITE)
// 00436ab9: MOV EDI,dword ptr [EDX + ESI*0x4 + -0x4]
//   XREF to: Stack[-0x14c] (DATA)
// 00436abd: TEST ESI,ESI
// 00436abf: JLE 0x00436b2a
//   XREF to: 00436b2a (CONDITIONAL_JUMP)
// 00436ac1: MOV dword ptr [ESP + 0x22c],EDX
//   XREF to: Stack[-0x20] (WRITE)
// 00436ac8: MOV ESI,dword ptr [ESP + 0x22c]
//   Label: LAB_00436ac8
//   XREF to: Stack[-0x20] (READ)
// 00436acf: MOV EDX,dword ptr [EDI + 0x4]
//   XREF to: 00688018 (DATA)
//   XREF to: 00825ab0 (READ)
//   XREF to: 00825ae0 (READ)
// 00436ad2: MOV ECX,dword ptr [EDI + 0x8]
//   XREF to: 0068801c (DATA)
//   XREF to: 00825ab4 (READ)
//   XREF to: 00825ae4 (READ)
// 00436ad5: XOR EAX,EAX
// 00436ad7: MOV ESI,dword ptr [ESI]
//   XREF to: Stack[-0x14c] (DATA)
// 00436ad9: CMP EDX,ECX
// 00436adb: JL 0x00436ae2
//   XREF to: 00436ae2 (CONDITIONAL_JUMP)
// 00436add: MOV EAX,0x1
// 00436ae2: MOV ECX,dword ptr [ESI + 0x8]
//   Label: LAB_00436ae2
//   XREF to: 0068801c (DATA)
//   XREF to: 00825ab4 (READ)
//   XREF to: 00825ae4 (READ)
// 00436ae5: CMP ECX,dword ptr [ESI + 0x4]
//   XREF to: 00688018 (DATA)
//   XREF to: 00825ab0 (READ)
//   XREF to: 00825ae0 (READ)
// 00436ae8: JG 0x00436aec
//   XREF to: 00436aec (CONDITIONAL_JUMP)
// 00436aea: OR AL,0x2
// 00436aec: CMP EAX,0x3
//   Label: LAB_00436aec
// 00436aef: JA 0x00436afd
//   XREF to: 00436afd (CONDITIONAL_JUMP)
// 00436af1: JMP dword ptr [EAX*0x4 + 0x4366ac]
//   Label: switchD
//   XREF to: 00436af8 (COMPUTED_JUMP)
//   XREF to: 00436afd (COMPUTED_JUMP)
//   XREF to: 00436e24 (COMPUTED_JUMP)
//   XREF to: 00436e78 (COMPUTED_JUMP)
//   XREF to: 004366ac (DATA)
//   XREF to: 004366b0 (READ)
//   XREF to: 004366b8 (READ)
//   XREF to: 00436afd (COMPUTED_JUMP)
//   XREF to: 00436e24 (COMPUTED_JUMP)
// 00436af8: INC EBX
//   Label: caseD_0
// 00436af9: MOV dword ptr [EBP + EBX*0x4 + -0x4],EDI
//   XREF to: Stack[-0xcc] (DATA)
//   XREF to: 00825aac (DATA)
//   XREF to: 00825adc (DATA)
// 00436afd: MOV ECX,dword ptr [ESP + 0x22c]
//   Label: caseD_3
//   XREF to: Stack[-0x20] (READ)
// 00436b04: MOV EDX,dword ptr [ESP + 0x214]
//   XREF to: Stack[-0x38] (READ)
// 00436b0b: MOV EDI,ESI
// 00436b0d: MOV ESI,dword ptr [ESP + 0x218]
//   XREF to: Stack[-0x34] (READ)
// 00436b14: ADD ECX,0x4
// 00436b17: INC ESI
// 00436b18: MOV dword ptr [ESP + 0x22c],ECX
//   XREF to: Stack[-0x20] (WRITE)
// 00436b1f: MOV dword ptr [ESP + 0x218],ESI
//   XREF to: Stack[-0x34] (WRITE)
// 00436b26: CMP ESI,EDX
// 00436b28: JL 0x00436ac8
//   XREF to: 00436ac8 (CONDITIONAL_JUMP)
// 00436b2a: MOV dword ptr [0x00824e24],EBX
//   Label: LAB_00436b2a
//   XREF to: 00824e24 (WRITE)
// 00436b30: CMP EBX,0x3
// 00436b33: JL 0x00436820
//   XREF to: 00436820 (CONDITIONAL_JUMP)
// 00436b39: LEA EDX,[ESP + 0x180]
//   XREF to: Stack[-0xcc] (DATA)
// 00436b40: LEA EBP,[ESP + 0x100]
//   XREF to: Stack[-0x14c] (DATA)
// 00436b47: XOR ESI,ESI
// 00436b49: MOV dword ptr [ESP + 0x21c],EBX
//   XREF to: Stack[-0x30] (WRITE)
// 00436b50: MOV dword ptr [ESP + 0x220],ESI
//   XREF to: Stack[-0x2c] (WRITE)
// 00436b57: MOV EDI,dword ptr [EDX + EBX*0x4 + -0x4]
//   XREF to: Stack[-0xcc] (DATA)
// 00436b5b: TEST EBX,EBX
// 00436b5d: JLE 0x00436bd2
//   XREF to: 00436bd2 (CONDITIONAL_JUMP)
// 00436b63: MOV dword ptr [ESP + 0x230],EDX
//   XREF to: Stack[-0x1c] (WRITE)
// 00436b6a: MOV EBX,dword ptr [ESP + 0x230]
//   Label: LAB_00436b6a
//   XREF to: Stack[-0x1c] (READ)
// 00436b71: MOV EDX,dword ptr [EDI + 0x8]
//   XREF to: 00825ae4 (READ)
//   XREF to: 00825b14 (READ)
// 00436b74: MOV ECX,dword ptr [EDI + 0x4]
//   XREF to: 00825ae0 (READ)
//   XREF to: 00825b10 (READ)
// 00436b77: XOR EAX,EAX
// 00436b79: NEG EDX
// 00436b7b: MOV EBX,dword ptr [EBX]
//   XREF to: 00825adc (PARAM)
//   XREF to: 00825b0c (PARAM)
// 00436b7d: CMP EDX,ECX
// 00436b7f: JL 0x00436b86
//   XREF to: 00436b86 (CONDITIONAL_JUMP)
// 00436b81: MOV EAX,0x1
// 00436b86: MOV EDX,dword ptr [EBX + 0x8]
//   Label: LAB_00436b86
//   XREF to: 00825ae4 (READ)
//   XREF to: 00825b14 (READ)
// 00436b89: MOV ECX,dword ptr [EBX + 0x4]
//   XREF to: 00825ae0 (READ)
//   XREF to: 00825b10 (READ)
// 00436b8c: NEG EDX
// 00436b8e: CMP EDX,ECX
// 00436b90: JL 0x00436b94
//   XREF to: 00436b94 (CONDITIONAL_JUMP)
// 00436b92: OR AL,0x2
// 00436b94: CMP EAX,0x3
//   Label: LAB_00436b94
// 00436b97: JA 0x00436ba5
//   XREF to: 00436ba5 (CONDITIONAL_JUMP)
// 00436b99: JMP dword ptr [EAX*0x4 + 0x4366bc]
//   Label: switchD
//   XREF to: 00436ba0 (COMPUTED_JUMP)
//   XREF to: 00436ba5 (COMPUTED_JUMP)
//   XREF to: 00436ed3 (COMPUTED_JUMP)
//   XREF to: 00436f27 (COMPUTED_JUMP)
//   XREF to: 004366bc (DATA)
//   XREF to: 004366c0 (READ)
//   XREF to: 004366c8 (READ)
//   XREF to: 00436ba5 (COMPUTED_JUMP)
//   XREF to: 00436ed3 (COMPUTED_JUMP)
// 00436ba0: INC ESI
//   Label: caseD_0
// 00436ba1: MOV dword ptr [EBP + ESI*0x4 + -0x4],EDI
//   XREF to: Stack[-0x14c] (DATA)
//   XREF to: 00825adc (DATA)
//   XREF to: 00825b0c (DATA)
// 00436ba5: MOV ECX,dword ptr [ESP + 0x230]
//   Label: caseD_3
//   XREF to: Stack[-0x1c] (READ)
// 00436bac: MOV EDX,dword ptr [ESP + 0x21c]
//   XREF to: Stack[-0x30] (READ)
// 00436bb3: MOV EDI,EBX
// 00436bb5: MOV EBX,dword ptr [ESP + 0x220]
//   XREF to: Stack[-0x2c] (READ)
// 00436bbc: ADD ECX,0x4
// 00436bbf: INC EBX
// 00436bc0: MOV dword ptr [ESP + 0x230],ECX
//   XREF to: Stack[-0x1c] (WRITE)
// 00436bc7: MOV dword ptr [ESP + 0x220],EBX
//   XREF to: Stack[-0x2c] (WRITE)
// 00436bce: CMP EBX,EDX
// 00436bd0: JL 0x00436b6a
//   XREF to: 00436b6a (CONDITIONAL_JUMP)
// 00436bd2: MOV dword ptr [0x00824e24],ESI
//   Label: LAB_00436bd2
//   XREF to: 00824e24 (WRITE)
// 00436bd8: CMP ESI,0x3
// 00436bdb: JL 0x00436820
//   XREF to: 00436820 (CONDITIONAL_JUMP)
// 00436be1: XOR EBP,EBP
// 00436be3: TEST ESI,ESI
// 00436be5: JLE 0x00436c40
//   XREF to: 00436c40 (CONDITIONAL_JUMP)
// 00436be7: MOV EBX,0x824e28
//   XREF to: 00824e28 (DATA)
// 00436bec: XOR EDX,EDX
// 00436bee: MOV ECX,0x30
//   Label: LAB_00436bee
// 00436bf3: MOV EDI,EBX
// 00436bf5: MOV ESI,dword ptr [ESP + EDX*0x1 + 0x100]
// 00436bfc: TEST EDI,0x7
// 00436c02: JZ 0x00436c0a
//   XREF to: 00436c0a (CONDITIONAL_JUMP)
// 00436c04: MOVSD ES:EDI,ESI
//   XREF to: 00824e28 (WRITE)
//   XREF to: 00824e58 (WRITE)
//   XREF to: 00825b0c (READ)
// 00436c05: SUB ECX,0x4
// 00436c08: JLE 0x00436c27
//   XREF to: 00436c27 (CONDITIONAL_JUMP)
// 00436c0a: SUB ECX,0x8
//   Label: LAB_00436c0a
// 00436c0d: JL 0x00436c1b
//   XREF to: 00436c1b (CONDITIONAL_JUMP)
// 00436c0f: FILD qword ptr [ESI]
//   XREF to: 00688014 (DATA)
//   XREF to: 0068801c (DATA)
//   XREF to: 00825b10 (READ)
//   XREF to: 00825b3c (READ)
//   XREF to: 00825b44 (READ)
// 00436c11: ADD ESI,0x8
// 00436c14: FISTP qword ptr [EDI]
//   XREF to: 00824e28 (WRITE)
//   XREF to: 00824e2c (WRITE)
//   XREF to: 00824e30 (WRITE)
//   XREF to: 00824e5c (WRITE)
// 00436c16: ADD EDI,0x8
// 00436c19: JMP 0x00436c0a
//   XREF to: 00436c0a (UNCONDITIONAL_JUMP)
// 00436c1b: ADD ECX,0x8
//   Label: LAB_00436c1b
// 00436c1e: JLE 0x00436c27
//   XREF to: 00436c27 (CONDITIONAL_JUMP)
// 00436c20: MOVSD ES:EDI,ESI
//   XREF to: 00824e2c (WRITE)
//   XREF to: 00824e30 (WRITE)
//   XREF to: 0068801c (DATA)
//   XREF to: 00825b10 (READ)
//   XREF to: 00825b44 (READ)
// 00436c21: SUB ECX,0x4
// 00436c24: JLE 0x00436c27
//   XREF to: 00436c27 (CONDITIONAL_JUMP)
// 00436c26: MOVSD ES:EDI,ESI
//   XREF to: 00824e30 (WRITE)
//   XREF to: 00824e34 (WRITE)
//   XREF to: 00688020 (DATA)
//   XREF to: 00825b14 (READ)
//   XREF to: 00825b48 (READ)
// 00436c27: ADD EDX,0x4
//   Label: LAB_00436c27
// 00436c2a: INC EBP
// 00436c2b: MOV ECX,dword ptr [0x00824e24]
//   XREF to: 00824e24 (READ)
// 00436c31: ADD EBX,0x30
// 00436c34: CMP EBP,ECX
// 00436c36: JL 0x00436bee
//   XREF to: 00436bee (CONDITIONAL_JUMP)
// 00436c38: LEA EAX,[EAX]
// 00436c3e: MOV EDX,EDX
// 00436c40: MOV EBX,dword ptr [0x0066e804]
//   Label: LAB_00436c40
//   XREF to: 0066e804 (READ)
// 00436c46: XOR EDX,EDX
// 00436c48: TEST EBX,EBX
// 00436c4a: JNZ 0x00436f82
//   XREF to: 00436f82 (CONDITIONAL_JUMP)
// 00436c50: MOV EBP,dword ptr [0x00824e24]
//   Label: LAB_00436c50
//   XREF to: 00824e24 (READ)
// 00436c56: CMP EBP,0x3
// 00436c59: JL 0x00436820
//   XREF to: 00436820 (CONDITIONAL_JUMP)
// 00436c5f: XOR EDX,EDX
// 00436c61: TEST EBP,EBP
// 00436c63: JLE 0x00436c8f
//   XREF to: 00436c8f (CONDITIONAL_JUMP)
// 00436c65: MOV EAX,0x824e28
//   XREF to: 00824e28 (DATA)
// 00436c6a: MOV EBX,dword ptr [EAX + 0x8]
//   Label: LAB_00436c6a
//   XREF to: 00824e30 (READ)
//   XREF to: 00824e60 (READ)
// 00436c6d: TEST EBX,EBX
// 00436c6f: JNZ 0x00437174
//   XREF to: 00437174 (CONDITIONAL_JUMP)
// 00436c75: MOV dword ptr [EAX + 0x8],0x1
//   XREF to: 00824e30 (WRITE)
//   XREF to: 00824e60 (WRITE)
// 00436c7c: MOV dword ptr [EAX],EBX
//   XREF to: 00824e28 (WRITE)
//   XREF to: 00824e58 (WRITE)
// 00436c7e: MOV dword ptr [EAX + 0x4],EBX
//   Label: LAB_00436c7e
//   XREF to: 00824e2c (WRITE)
//   XREF to: 00824e5c (WRITE)
// 00436c81: MOV ECX,dword ptr [0x00824e24]
//   Label: LAB_00436c81
//   XREF to: 00824e24 (READ)
// 00436c87: INC EDX
// 00436c88: ADD EAX,0x30
// 00436c8b: CMP EDX,ECX
// 00436c8d: JL 0x00436c6a
//   XREF to: 00436c6a (CONDITIONAL_JUMP)
// 00436c8f: XOR EAX,EAX
//   Label: LAB_00436c8f
// 00436c91: ADD ESP,0x23c
// 00436c97: POP EBP
// 00436c98: POP EDI
// 00436c99: POP ESI
// 00436c9a: POP EBX
// 00436c9b: RET
// 00436c9c: CMP dword ptr [0x00825cec],0xc
//   Label: caseD_1
//   XREF to: 00825cec (READ)
// 00436ca3: JL 0x00436cc7
//   XREF to: 00436cc7 (CONDITIONAL_JUMP)
// 00436ca5: MOV EAX,0x618103
//   XREF to: 00618103 (PARAM)
// 00436caa: MOV EDX,0x5e
// 00436caf: PUSH 0x618117
//   XREF to: 00618117 (DATA)
// 00436cb4: MOV [0x02f0ca48],EAX
//   XREF to: 02f0ca48 (WRITE)
// 00436cb9: MOV dword ptr [0x02f0ca4c],EDX
//   XREF to: 02f0ca4c (WRITE)
// 00436cbf: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00436cc4: ADD ESP,0x4
// 00436cc7: MOV EAX,[0x00825cec]
//   Label: LAB_00436cc7
//   XREF to: 00825cec (READ)
// 00436ccc: IMUL EDX,EAX,0x30
// 00436ccf: MOV ECX,dword ptr [ESP + 0x200]
//   XREF to: Stack[-0x4c] (READ)
// 00436cd6: ADD EDX,0x825aac
//   XREF to: 00825aac (PARAM)
// 00436cdc: INC EAX
// 00436cdd: PUSH EDX
//   XREF to: 00825aac (DATA)
// 00436cde: MOV [0x00825cec],EAX
//   XREF to: 00825cec (WRITE)
// 00436ce3: LEA EAX,[EBX*0x4 + 0x0]
// 00436cea: PUSH ESI
// 00436ceb: ADD EAX,ECX
// 00436ced: PUSH EDI
// 00436cee: INC EBX
// 00436cef: MOV dword ptr [EAX],EDX
//   XREF to: Stack[-0xcc] (DATA)
//   XREF to: 00825aac (DATA)
// 00436cf1: CALL engine_clipper.c_interpolateVertexLeftClip_FUN_00435a00
//   XREF to: 00435a00 (UNCONDITIONAL_CALL)
// 00436cf6: ADD ESP,0xc
// 00436cf9: JMP 0x004369cb
//   XREF to: 004369cb (UNCONDITIONAL_JUMP)
// 00436cfe: MOV EDX,dword ptr [ESP + 0x200]
//   Label: caseD_2
//   XREF to: Stack[-0x4c] (READ)
// 00436d05: LEA EAX,[EBX*0x4 + 0x0]
// 00436d0c: ADD EAX,EDX
// 00436d0e: MOV ECX,dword ptr [0x00825cec]
//   XREF to: 00825cec (READ)
// 00436d14: INC EBX
// 00436d15: MOV dword ptr [EAX],ESI
//   XREF to: Stack[-0xcc] (DATA)
// 00436d17: CMP ECX,0xc
// 00436d1a: JL 0x00436d3e
//   XREF to: 00436d3e (CONDITIONAL_JUMP)
// 00436d1c: MOV EAX,0x618103
//   XREF to: 00618103 (PARAM)
// 00436d21: MOV EDX,0x5e
// 00436d26: PUSH 0x618117
//   XREF to: 00618117 (DATA)
// 00436d2b: MOV [0x02f0ca48],EAX
//   XREF to: 02f0ca48 (WRITE)
// 00436d30: MOV dword ptr [0x02f0ca4c],EDX
//   XREF to: 02f0ca4c (WRITE)
// 00436d36: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00436d3b: ADD ESP,0x4
// 00436d3e: MOV EAX,[0x00825cec]
//   Label: LAB_00436d3e
//   XREF to: 00825cec (READ)
// 00436d43: IMUL EDX,EAX,0x30
// 00436d46: MOV ECX,dword ptr [ESP + 0x200]
//   XREF to: Stack[-0x4c] (READ)
// 00436d4d: ADD EDX,0x825aac
//   XREF to: 00825adc (PARAM)
//   XREF to: 00825aac (PARAM)
// 00436d53: INC EAX
// 00436d54: PUSH EDX
//   XREF to: 00825aac (DATA)
//   XREF to: 00825adc (DATA)
// 00436d55: MOV [0x00825cec],EAX
//   XREF to: 00825cec (WRITE)
// 00436d5a: LEA EAX,[EBX*0x4 + 0x0]
// 00436d61: PUSH EDI
// 00436d62: ADD EAX,ECX
// 00436d64: PUSH ESI
// 00436d65: INC EBX
// 00436d66: MOV dword ptr [EAX],EDX
//   XREF to: Stack[-0xc8] (DATA)
//   XREF to: 00825aac (DATA)
//   XREF to: 00825adc (DATA)
// 00436d68: CALL engine_clipper.c_interpolateVertexLeftClip_FUN_00435a00
//   XREF to: 00435a00 (UNCONDITIONAL_CALL)
// 00436d6d: ADD ESP,0xc
// 00436d70: JMP 0x004369cb
//   XREF to: 004369cb (UNCONDITIONAL_JUMP)
// 00436d75: CMP dword ptr [0x00825cec],0xc
//   Label: caseD_1
//   XREF to: 00825cec (READ)
// 00436d7c: JL 0x00436da0
//   XREF to: 00436da0 (CONDITIONAL_JUMP)
// 00436d7e: MOV ECX,0x618103
//   XREF to: 00618103 (PARAM)
// 00436d83: MOV EAX,0x5e
// 00436d88: PUSH 0x618117
//   XREF to: 00618117 (DATA)
// 00436d8d: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 00436d93: MOV [0x02f0ca4c],EAX
//   XREF to: 02f0ca4c (WRITE)
// 00436d98: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00436d9d: ADD ESP,0x4
// 00436da0: MOV EAX,[0x00825cec]
//   Label: LAB_00436da0
//   XREF to: 00825cec (READ)
// 00436da5: IMUL EDX,EAX,0x30
// 00436da8: ADD EDX,0x825aac
//   XREF to: 00825adc (PARAM)
//   XREF to: 00825aac (PARAM)
// 00436dae: PUSH EDX
//   XREF to: 00825aac (DATA)
//   XREF to: 00825adc (DATA)
// 00436daf: PUSH EDI
//   XREF to: 00825aac (DATA)
// 00436db0: INC ESI
// 00436db1: INC EAX
// 00436db2: PUSH EBX
//   XREF to: 00825aac (DATA)
// 00436db3: MOV [0x00825cec],EAX
//   XREF to: 00825cec (WRITE)
// 00436db8: MOV dword ptr [EBP + ESI*0x4 + -0x4],EDX
//   XREF to: Stack[-0x14c] (DATA)
//   XREF to: 00825aac (DATA)
//   XREF to: 00825adc (DATA)
// 00436dbc: CALL engine_clipper.c_interpolateVertexRightClip_FUN_00435b00
//   XREF to: 00435b00 (UNCONDITIONAL_CALL)
// 00436dc1: ADD ESP,0xc
// 00436dc4: JMP 0x00436a5f
//   XREF to: 00436a5f (UNCONDITIONAL_JUMP)
// 00436dc9: INC ESI
//   Label: caseD_2
// 00436dca: MOV EAX,[0x00825cec]
//   XREF to: 00825cec (READ)
// 00436dcf: MOV dword ptr [EBP + ESI*0x4 + -0x4],EDI
//   XREF to: Stack[-0x14c] (DATA)
//   XREF to: 00825aac (DATA)
// 00436dd3: CMP EAX,0xc
// 00436dd6: JL 0x00436dfb
//   XREF to: 00436dfb (CONDITIONAL_JUMP)
// 00436dd8: MOV EDX,0x618103
//   XREF to: 00618103 (PARAM)
// 00436ddd: MOV ECX,0x5e
// 00436de2: PUSH 0x618117
//   XREF to: 00618117 (DATA)
// 00436de7: MOV dword ptr [0x02f0ca48],EDX
//   XREF to: 02f0ca48 (WRITE)
// 00436ded: MOV dword ptr [0x02f0ca4c],ECX
//   XREF to: 02f0ca4c (WRITE)
// 00436df3: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00436df8: ADD ESP,0x4
// 00436dfb: MOV EAX,[0x00825cec]
//   Label: LAB_00436dfb
//   XREF to: 00825cec (READ)
// 00436e00: IMUL EDX,EAX,0x30
// 00436e03: ADD EDX,0x825aac
//   XREF to: 00825b0c (PARAM)
//   XREF to: 00825aac (PARAM)
// 00436e09: PUSH EDX
//   XREF to: 00825aac (DATA)
//   XREF to: 00825b0c (DATA)
// 00436e0a: PUSH EBX
// 00436e0b: INC ESI
// 00436e0c: INC EAX
// 00436e0d: PUSH EDI
//   XREF to: 00825aac (DATA)
// 00436e0e: MOV [0x00825cec],EAX
//   XREF to: 00825cec (WRITE)
// 00436e13: MOV dword ptr [EBP + ESI*0x4 + -0x4],EDX
//   XREF to: Stack[-0x148] (DATA)
//   XREF to: 00825aac (DATA)
//   XREF to: 00825b0c (DATA)
// 00436e17: CALL engine_clipper.c_interpolateVertexRightClip_FUN_00435b00
//   XREF to: 00435b00 (UNCONDITIONAL_CALL)
// 00436e1c: ADD ESP,0xc
// 00436e1f: JMP 0x00436a5f
//   XREF to: 00436a5f (UNCONDITIONAL_JUMP)
// 00436e24: CMP dword ptr [0x00825cec],0xc
//   Label: caseD_1
//   XREF to: 00825cec (READ)
// 00436e2b: JL 0x00436e4f
//   XREF to: 00436e4f (CONDITIONAL_JUMP)
// 00436e2d: MOV ECX,0x618103
//   XREF to: 00618103 (PARAM)
// 00436e32: MOV EAX,0x5e
// 00436e37: PUSH 0x618117
//   XREF to: 00618117 (DATA)
// 00436e3c: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 00436e42: MOV [0x02f0ca4c],EAX
//   XREF to: 02f0ca4c (WRITE)
// 00436e47: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00436e4c: ADD ESP,0x4
// 00436e4f: MOV EAX,[0x00825cec]
//   Label: LAB_00436e4f
//   XREF to: 00825cec (READ)
// 00436e54: IMUL EDX,EAX,0x30
// 00436e57: ADD EDX,0x825aac
//   XREF to: 00825adc (PARAM)
//   XREF to: 00825b0c (PARAM)
//   XREF to: 00825aac (PARAM)
// 00436e5d: PUSH EDX
//   XREF to: 00825aac (DATA)
//   XREF to: 00825adc (DATA)
//   XREF to: 00825b0c (DATA)
// 00436e5e: PUSH EDI
//   XREF to: 00825aac (DATA)
//   XREF to: 00825adc (DATA)
// 00436e5f: INC EBX
// 00436e60: INC EAX
// 00436e61: PUSH ESI
//   XREF to: 00825aac (DATA)
//   XREF to: 00825adc (DATA)
// 00436e62: MOV [0x00825cec],EAX
//   XREF to: 00825cec (WRITE)
// 00436e67: MOV dword ptr [EBP + EBX*0x4 + -0x4],EDX
//   XREF to: Stack[-0xcc] (DATA)
//   XREF to: 00825aac (DATA)
//   XREF to: 00825adc (DATA)
//   XREF to: 00825b0c (DATA)
// 00436e6b: CALL engine_clipper.c_interpolateVertexBottomClip_FUN_00435c00
//   XREF to: 00435c00 (UNCONDITIONAL_CALL)
// 00436e70: ADD ESP,0xc
// 00436e73: JMP 0x00436afd
//   XREF to: 00436afd (UNCONDITIONAL_JUMP)
// 00436e78: INC EBX
//   Label: caseD_2
// 00436e79: MOV EAX,[0x00825cec]
//   XREF to: 00825cec (READ)
// 00436e7e: MOV dword ptr [EBP + EBX*0x4 + -0x4],EDI
//   XREF to: Stack[-0xcc] (DATA)
//   XREF to: 00825aac (DATA)
//   XREF to: 00825adc (DATA)
// 00436e82: CMP EAX,0xc
// 00436e85: JL 0x00436eaa
//   XREF to: 00436eaa (CONDITIONAL_JUMP)
// 00436e87: MOV EDX,0x618103
//   XREF to: 00618103 (PARAM)
// 00436e8c: MOV ECX,0x5e
// 00436e91: PUSH 0x618117
//   XREF to: 00618117 (DATA)
// 00436e96: MOV dword ptr [0x02f0ca48],EDX
//   XREF to: 02f0ca48 (WRITE)
// 00436e9c: MOV dword ptr [0x02f0ca4c],ECX
//   XREF to: 02f0ca4c (WRITE)
// 00436ea2: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00436ea7: ADD ESP,0x4
// 00436eaa: MOV EAX,[0x00825cec]
//   Label: LAB_00436eaa
//   XREF to: 00825cec (READ)
// 00436eaf: IMUL EDX,EAX,0x30
// 00436eb2: ADD EDX,0x825aac
//   XREF to: 00825adc (PARAM)
//   XREF to: 00825b3c (PARAM)
//   XREF to: 00825aac (DATA)
// 00436eb8: PUSH EDX
//   XREF to: 00825adc (DATA)
//   XREF to: 00825b3c (DATA)
// 00436eb9: PUSH ESI
//   XREF to: 00825aac (DATA)
// 00436eba: INC EBX
// 00436ebb: INC EAX
// 00436ebc: PUSH EDI
//   XREF to: 00825aac (DATA)
//   XREF to: 00825adc (DATA)
// 00436ebd: MOV [0x00825cec],EAX
//   XREF to: 00825cec (WRITE)
// 00436ec2: MOV dword ptr [EBP + EBX*0x4 + -0x4],EDX
//   XREF to: Stack[-0xc8] (DATA)
//   XREF to: 00825adc (DATA)
//   XREF to: 00825b3c (DATA)
// 00436ec6: CALL engine_clipper.c_interpolateVertexBottomClip_FUN_00435c00
//   XREF to: 00435c00 (UNCONDITIONAL_CALL)
// 00436ecb: ADD ESP,0xc
// 00436ece: JMP 0x00436afd
//   XREF to: 00436afd (UNCONDITIONAL_JUMP)
// 00436ed3: CMP dword ptr [0x00825cec],0xc
//   Label: caseD_1
//   XREF to: 00825cec (READ)
// 00436eda: JL 0x00436efe
//   XREF to: 00436efe (CONDITIONAL_JUMP)
// 00436edc: MOV ECX,0x618103
//   XREF to: 00618103 (PARAM)
// 00436ee1: MOV EAX,0x5e
// 00436ee6: PUSH 0x618117
//   XREF to: 00618117 (DATA)
// 00436eeb: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 00436ef1: MOV [0x02f0ca4c],EAX
//   XREF to: 02f0ca4c (WRITE)
// 00436ef6: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00436efb: ADD ESP,0x4
// 00436efe: MOV EAX,[0x00825cec]
//   Label: LAB_00436efe
//   XREF to: 00825cec (READ)
// 00436f03: IMUL EDX,EAX,0x30
// 00436f06: ADD EDX,0x825aac
//   XREF to: 00825b0c (PARAM)
//   XREF to: 00825b3c (PARAM)
//   XREF to: 00825aac (PARAM)
// 00436f0c: PUSH EDX
//   XREF to: 00825aac (DATA)
//   XREF to: 00825b0c (DATA)
//   XREF to: 00825b3c (DATA)
// 00436f0d: PUSH EDI
//   XREF to: 00825adc (DATA)
//   XREF to: 00825b0c (DATA)
// 00436f0e: INC ESI
// 00436f0f: INC EAX
// 00436f10: PUSH EBX
//   XREF to: 00825adc (DATA)
//   XREF to: 00825b0c (DATA)
// 00436f11: MOV [0x00825cec],EAX
//   XREF to: 00825cec (WRITE)
// 00436f16: MOV dword ptr [EBP + ESI*0x4 + -0x4],EDX
//   XREF to: Stack[-0x14c] (DATA)
//   XREF to: 00825aac (DATA)
//   XREF to: 00825b0c (DATA)
//   XREF to: 00825b3c (DATA)
// 00436f1a: CALL engine_clipper.c_interpolateVertexTopClip_FUN_00435d00
//   XREF to: 00435d00 (UNCONDITIONAL_CALL)
//   XREF to: 00825adc (PARAM)
// 00436f1f: ADD ESP,0xc
// 00436f22: JMP 0x00436ba5
//   XREF to: 00436ba5 (UNCONDITIONAL_JUMP)
// 00436f27: INC ESI
//   Label: caseD_2
// 00436f28: MOV EAX,[0x00825cec]
//   XREF to: 00825cec (READ)
// 00436f2d: MOV dword ptr [EBP + ESI*0x4 + -0x4],EDI
//   XREF to: Stack[-0x14c] (DATA)
//   XREF to: 00825adc (DATA)
//   XREF to: 00825b0c (DATA)
// 00436f31: CMP EAX,0xc
// 00436f34: JL 0x00436f59
//   XREF to: 00436f59 (CONDITIONAL_JUMP)
// 00436f36: MOV EDX,0x618103
//   XREF to: 00618103 (PARAM)
// 00436f3b: MOV ECX,0x5e
// 00436f40: PUSH 0x618117
//   XREF to: 00618117 (DATA)
// 00436f45: MOV dword ptr [0x02f0ca48],EDX
//   XREF to: 02f0ca48 (WRITE)
// 00436f4b: MOV dword ptr [0x02f0ca4c],ECX
//   XREF to: 02f0ca4c (WRITE)
// 00436f51: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
//   XREF to: 00825adc (PARAM)
// 00436f56: ADD ESP,0x4
// 00436f59: MOV EAX,[0x00825cec]
//   Label: LAB_00436f59
//   XREF to: 00825cec (READ)
// 00436f5e: IMUL EDX,EAX,0x30
// 00436f61: ADD EDX,0x825aac
//   XREF to: 00825b0c (PARAM)
//   XREF to: 00825b6c (PARAM)
//   XREF to: 00825aac (DATA)
// 00436f67: PUSH EDX
//   XREF to: 00825b0c (DATA)
//   XREF to: 00825b6c (DATA)
// 00436f68: PUSH EBX
//   XREF to: 00825adc (DATA)
// 00436f69: INC ESI
// 00436f6a: INC EAX
// 00436f6b: PUSH EDI
//   XREF to: 00825adc (DATA)
//   XREF to: 00825b0c (DATA)
// 00436f6c: MOV [0x00825cec],EAX
//   XREF to: 00825cec (WRITE)
// 00436f71: MOV dword ptr [EBP + ESI*0x4 + -0x4],EDX
//   XREF to: Stack[-0x148] (DATA)
//   XREF to: 00825b0c (DATA)
//   XREF to: 00825b6c (DATA)
// 00436f75: CALL engine_clipper.c_interpolateVertexTopClip_FUN_00435d00
//   XREF to: 00435d00 (UNCONDITIONAL_CALL)
//   XREF to: 00825adc (PARAM)
// 00436f7a: ADD ESP,0xc
// 00436f7d: JMP 0x00436ba5
//   XREF to: 00436ba5 (UNCONDITIONAL_JUMP)
// 00436f82: MOV ESI,dword ptr [0x00824e24]
//   Label: LAB_00436f82
//   XREF to: 00824e24 (READ)
// 00436f88: TEST ESI,ESI
// 00436f8a: JLE 0x00436fad
//   XREF to: 00436fad (CONDITIONAL_JUMP)
// 00436f8c: LEA ECX,[ESI*0x4 + 0x0]
// 00436f93: SUB ECX,ESI
// 00436f95: XOR EAX,EAX
// 00436f97: SHL ECX,0x4
// 00436f9a: MOV EBX,dword ptr [EAX + 0x824e30]
//   Label: LAB_00436f9a
//   XREF to: 00824e30 (READ)
//   XREF to: 00824e60 (READ)
// 00436fa0: CMP EDX,EBX
// 00436fa2: JGE 0x00436fa6
//   XREF to: 00436fa6 (CONDITIONAL_JUMP)
// 00436fa4: MOV EDX,EBX
// 00436fa6: ADD EAX,0x30
//   Label: LAB_00436fa6
// 00436fa9: CMP EAX,ECX
// 00436fab: JL 0x00436f9a
//   XREF to: 00436f9a (CONDITIONAL_JUMP)
// 00436fad: CMP EDX,dword ptr [0x0066e804]
//   Label: LAB_00436fad
//   XREF to: 0066e804 (READ)
// 00436fb3: JL 0x00436c50
//   XREF to: 00436c50 (CONDITIONAL_JUMP)
// 00436fb9: MOV EAX,[0x00824e24]
//   XREF to: 00824e24 (READ)
// 00436fbe: MOV ESI,0x824e28
//   XREF to: 00824e28 (DATA)
// 00436fc3: MOV [0x008254a8],EAX
//   XREF to: 008254a8 (WRITE)
// 00436fc8: LEA ECX,[EAX*0x4 + 0x0]
// 00436fcf: MOV EDI,0x8254ac
//   XREF to: 008254ac (DATA)
// 00436fd4: SUB ECX,EAX
// 00436fd6: XOR EBP,EBP
// 00436fd8: SHL ECX,0x4
// 00436fdb: MOV dword ptr [ESP + 0x238],EBP
//   XREF to: Stack[-0x14] (WRITE)
// 00436fe2: TEST EDI,0x7
// 00436fe8: JZ 0x00436ff0
//   XREF to: 00436ff0 (CONDITIONAL_JUMP)
// 00436fea: MOVSD ES:EDI,ESI
//   XREF to: 008254ac (WRITE)
//   XREF to: 00824e28 (READ)
// 00436feb: SUB ECX,0x4
// 00436fee: JLE 0x0043700d
//   XREF to: 0043700d (CONDITIONAL_JUMP)
// 00436ff0: SUB ECX,0x8
//   Label: LAB_00436ff0
// 00436ff3: JL 0x00437001
//   XREF to: 00437001 (CONDITIONAL_JUMP)
// 00436ff5: FILD qword ptr [ESI]
//   XREF to: 00824e28 (READ)
//   XREF to: 00824e2c (READ)
//   XREF to: 00824e34 (READ)
// 00436ff7: ADD ESI,0x8
// 00436ffa: FISTP qword ptr [EDI]
//   XREF to: 008254ac (WRITE)
//   XREF to: 008254b0 (WRITE)
//   XREF to: 008254b8 (WRITE)
// 00436ffc: ADD EDI,0x8
// 00436fff: JMP 0x00436ff0
//   XREF to: 00436ff0 (UNCONDITIONAL_JUMP)
// 00437001: ADD ECX,0x8
//   Label: LAB_00437001
// 00437004: JLE 0x0043700d
//   XREF to: 0043700d (CONDITIONAL_JUMP)
// 00437006: MOVSD ES:EDI,ESI
//   XREF to: 008254b0 (WRITE)
//   XREF to: 008254b8 (WRITE)
//   XREF to: 00824e2c (READ)
//   XREF to: 00824e34 (READ)
// 00437007: SUB ECX,0x4
// 0043700a: JLE 0x0043700d
//   XREF to: 0043700d (CONDITIONAL_JUMP)
// 0043700c: MOVSD ES:EDI,ESI
//   XREF to: 008254b4 (WRITE)
//   XREF to: 008254bc (WRITE)
//   XREF to: 00824e30 (READ)
//   XREF to: 00824e38 (READ)
// 0043700d: MOV EDX,dword ptr [0x008254a8]
//   Label: LAB_0043700d
//   XREF to: 008254a8 (READ)
// 00437013: MOV dword ptr [0x00824e24],EBP
//   XREF to: 00824e24 (WRITE)
// 00437019: TEST EDX,EDX
// 0043701b: JLE 0x00436c50
//   XREF to: 00436c50 (CONDITIONAL_JUMP)
// 00437021: MOV EBP,0x8254ac
//   XREF to: 008254ac (DATA)
// 00437026: MOV EAX,dword ptr [ESP + 0x238]
//   Label: LAB_00437026
//   XREF to: Stack[-0x14] (READ)
// 0043702d: MOV EDX,dword ptr [0x008254a8]
//   XREF to: 008254a8 (READ)
// 00437033: INC EAX
// 00437034: CMP EAX,EDX
// 00437036: JNZ 0x0043703a
//   XREF to: 0043703a (CONDITIONAL_JUMP)
// 00437038: XOR EAX,EDX
// 0043703a: IMUL EAX,EAX,0x30
//   Label: LAB_0043703a
// 0043703d: MOV EDX,0x8254ac
//   XREF to: 008254ac (DATA)
// 00437042: MOV ESI,dword ptr [0x0066e804]
//   XREF to: 0066e804 (READ)
// 00437048: MOV EBX,EBP
//   XREF to: 008254ac (PARAM)
//   XREF to: 008254dc (PARAM)
// 0043704a: MOV ECX,dword ptr [EBP + 0x8]
//   XREF to: 008254b4 (READ)
//   XREF to: 008254e4 (READ)
// 0043704d: ADD EDX,EAX
// 0043704f: XOR EAX,EAX
// 00437051: CMP ECX,ESI
// 00437053: JL 0x0043705a
//   XREF to: 0043705a (CONDITIONAL_JUMP)
// 00437055: MOV EAX,0x1
// 0043705a: MOV EDI,dword ptr [0x0066e804]
//   Label: LAB_0043705a
//   XREF to: 0066e804 (READ)
// 00437060: CMP EDI,dword ptr [EDX + 0x8]
//   XREF to: 008254b4 (DATA)
// 00437063: JG 0x00437067
//   XREF to: 00437067 (CONDITIONAL_JUMP)
// 00437065: OR AL,0x2
// 00437067: CMP EAX,0x3
//   Label: LAB_00437067
// 0043706a: JA 0x004370b8
//   XREF to: 004370b8 (CONDITIONAL_JUMP)
// 0043706c: JMP dword ptr [EAX*0x4 + 0x4366cc]
//   Label: switchD
//   XREF to: 00437073 (COMPUTED_JUMP)
//   XREF to: 004370b8 (COMPUTED_JUMP)
//   XREF to: 004370dd (COMPUTED_JUMP)
//   XREF to: 00437103 (COMPUTED_JUMP)
//   XREF to: 004366cc (READ)
//   XREF to: 004366d8 (READ)
//   XREF to: 00437073 (COMPUTED_JUMP)
//   XREF to: 004370b8 (COMPUTED_JUMP)
// 00437073: IMUL EDI,dword ptr [0x00824e24],0x30
//   Label: caseD_0
//   XREF to: 00824e24 (READ)
// 0043707a: MOV ECX,0x30
// 0043707f: ADD EDI,0x824e28
//   XREF to: 00824e28 (DATA)
// 00437085: MOV ESI,EBX
// 00437087: TEST EDI,0x7
// 0043708d: JZ 0x00437095
//   XREF to: 00437095 (CONDITIONAL_JUMP)
// 0043708f: MOVSD ES:EDI,ESI
//   XREF to: 00824e28 (WRITE)
//   XREF to: 008254ac (READ)
//   XREF to: 008254dc (READ)
// 00437090: SUB ECX,0x4
// 00437093: JLE 0x004370b2
//   XREF to: 004370b2 (CONDITIONAL_JUMP)
// 00437095: SUB ECX,0x8
//   Label: LAB_00437095
// 00437098: JL 0x004370a6
//   XREF to: 004370a6 (CONDITIONAL_JUMP)
// 0043709a: FILD qword ptr [ESI]
//   XREF to: 008254ac (READ)
//   XREF to: 008254b0 (READ)
//   XREF to: 008254b4 (READ)
//   XREF to: 008254dc (READ)
//   XREF to: 008254e0 (READ)
//   XREF to: 008254e4 (READ)
// 0043709c: ADD ESI,0x8
// 0043709f: FISTP qword ptr [EDI]
//   XREF to: 00824e28 (WRITE)
//   XREF to: 00824e2c (WRITE)
//   XREF to: 00824e30 (WRITE)
// 004370a1: ADD EDI,0x8
// 004370a4: JMP 0x00437095
//   XREF to: 00437095 (UNCONDITIONAL_JUMP)
// 004370a6: ADD ECX,0x8
//   Label: LAB_004370a6
// 004370a9: JLE 0x004370b2
//   XREF to: 004370b2 (CONDITIONAL_JUMP)
// 004370ab: MOVSD ES:EDI,ESI
//   XREF to: 00824e2c (WRITE)
//   XREF to: 00824e30 (WRITE)
//   XREF to: 008254b0 (READ)
//   XREF to: 008254b4 (READ)
//   XREF to: 008254e4 (READ)
// 004370ac: SUB ECX,0x4
// 004370af: JLE 0x004370b2
//   XREF to: 004370b2 (CONDITIONAL_JUMP)
// 004370b1: MOVSD ES:EDI,ESI
//   XREF to: 00824e30 (WRITE)
//   XREF to: 00824e34 (WRITE)
//   XREF to: 008254b4 (READ)
//   XREF to: 008254b8 (READ)
//   XREF to: 008254e8 (READ)
// 004370b2: INC dword ptr [0x00824e24]
//   Label: LAB_004370b2
//   XREF to: 00824e24 (READ_WRITE)
// 004370b8: MOV ESI,dword ptr [ESP + 0x238]
//   Label: caseD_3
//   XREF to: Stack[-0x14] (READ)
// 004370bf: MOV EDI,dword ptr [0x008254a8]
//   XREF to: 008254a8 (READ)
// 004370c5: INC ESI
// 004370c6: ADD EBP,0x30
// 004370c9: MOV dword ptr [ESP + 0x238],ESI
//   XREF to: Stack[-0x14] (WRITE)
// 004370d0: CMP ESI,EDI
// 004370d2: JGE 0x00436c50
//   XREF to: 00436c50 (CONDITIONAL_JUMP)
// 004370d8: JMP 0x00437026
//   XREF to: 00437026 (UNCONDITIONAL_JUMP)
// 004370dd: IMUL EAX,dword ptr [0x00824e24],0x30
//   Label: caseD_1
//   XREF to: 00824e24 (READ)
// 004370e4: ADD EAX,0x824e28
//   XREF to: 00824e28 (PARAM)
// 004370e9: PUSH EAX
//   XREF to: 00824e28 (DATA)
// 004370ea: PUSH EBX
//   XREF to: 008254ac (DATA)
//   XREF to: 008254dc (DATA)
// 004370eb: PUSH EDX
// 004370ec: CALL engine_clipper.c_interpolateVertexNearClip_FUN_00435e00
//   XREF to: 00435e00 (UNCONDITIONAL_CALL)
// 004370f1: MOV EBX,dword ptr [0x00824e24]
//   XREF to: 00824e24 (READ)
// 004370f7: INC EBX
// 004370f8: ADD ESP,0xc
// 004370fb: MOV dword ptr [0x00824e24],EBX
//   XREF to: 00824e24 (WRITE)
// 00437101: JMP 0x004370b8
//   XREF to: 004370b8 (UNCONDITIONAL_JUMP)
// 00437103: IMUL EDI,dword ptr [0x00824e24],0x30
//   Label: caseD_2
//   XREF to: 00824e24 (READ)
// 0043710a: MOV ECX,0x30
// 0043710f: MOV ESI,EBX
// 00437111: ADD EDI,0x824e28
//   XREF to: 00824e28 (DATA)
// 00437117: TEST EDI,0x7
// 0043711d: JZ 0x00437125
//   XREF to: 00437125 (CONDITIONAL_JUMP)
// 0043711f: MOVSD ES:EDI,ESI
//   XREF to: 00824e28 (WRITE)
//   XREF to: 008254ac (READ)
//   XREF to: 008254dc (READ)
// 00437120: SUB ECX,0x4
// 00437123: JLE 0x00437142
//   XREF to: 00437142 (CONDITIONAL_JUMP)
// 00437125: SUB ECX,0x8
//   Label: LAB_00437125
// 00437128: JL 0x00437136
//   XREF to: 00437136 (CONDITIONAL_JUMP)
// 0043712a: FILD qword ptr [ESI]
//   XREF to: 008254b0 (READ)
//   XREF to: 008254dc (READ)
//   XREF to: 008254e0 (READ)
//   XREF to: 008254e4 (READ)
// 0043712c: ADD ESI,0x8
// 0043712f: FISTP qword ptr [EDI]
//   XREF to: 00824e28 (WRITE)
//   XREF to: 00824e2c (WRITE)
//   XREF to: 00824e30 (WRITE)
// 00437131: ADD EDI,0x8
// 00437134: JMP 0x00437125
//   XREF to: 00437125 (UNCONDITIONAL_JUMP)
// 00437136: ADD ECX,0x8
//   Label: LAB_00437136
// 00437139: JLE 0x00437142
//   XREF to: 00437142 (CONDITIONAL_JUMP)
// 0043713b: MOVSD ES:EDI,ESI
//   XREF to: 00824e2c (WRITE)
//   XREF to: 00824e30 (WRITE)
//   XREF to: 008254b0 (READ)
//   XREF to: 008254e4 (READ)
// 0043713c: SUB ECX,0x4
// 0043713f: JLE 0x00437142
//   XREF to: 00437142 (CONDITIONAL_JUMP)
// 00437141: MOVSD ES:EDI,ESI
//   XREF to: 00824e30 (WRITE)
//   XREF to: 00824e34 (WRITE)
//   XREF to: 008254b4 (READ)
//   XREF to: 008254e8 (READ)
// 00437142: MOV ECX,dword ptr [0x00824e24]
//   Label: LAB_00437142
//   XREF to: 00824e24 (READ)
// 00437148: INC ECX
// 00437149: MOV dword ptr [0x00824e24],ECX
//   XREF to: 00824e24 (WRITE)
// 0043714f: IMUL EAX,ECX,0x30
// 00437152: ADD EAX,0x824e28
//   XREF to: 00824e58 (PARAM)
//   XREF to: 00824e28 (DATA)
// 00437157: PUSH EAX
//   XREF to: 00824e58 (DATA)
// 00437158: PUSH EDX
// 00437159: PUSH EBX
//   XREF to: 008254ac (DATA)
//   XREF to: 008254dc (DATA)
// 0043715a: CALL engine_clipper.c_interpolateVertexNearClip_FUN_00435e00
//   XREF to: 00435e00 (UNCONDITIONAL_CALL)
// 0043715f: MOV EDI,dword ptr [0x00824e24]
//   XREF to: 00824e24 (READ)
// 00437165: INC EDI
// 00437166: ADD ESP,0xc
// 00437169: MOV dword ptr [0x00824e24],EDI
//   XREF to: 00824e24 (WRITE)
// 0043716f: JMP 0x004370b8
//   XREF to: 004370b8 (UNCONDITIONAL_JUMP)
// 00437174: MOV ECX,dword ptr [EAX]
//   Label: LAB_00437174
//   XREF to: 00824e28 (READ)
//   XREF to: 00824e58 (READ)
// 00437176: CMP ECX,EBX
// 00437178: JLE 0x00437181
//   XREF to: 00437181 (CONDITIONAL_JUMP)
// 0043717a: MOV dword ptr [EAX],EBX
//   XREF to: 00824e28 (WRITE)
//   XREF to: 00824e58 (WRITE)
// 0043717c: JMP 0x00436c81
//   XREF to: 00436c81 (UNCONDITIONAL_JUMP)
// 00437181: NEG EBX
//   Label: LAB_00437181
// 00437183: CMP EBX,ECX
// 00437185: JLE 0x0043718e
//   XREF to: 0043718e (CONDITIONAL_JUMP)
// 00437187: MOV dword ptr [EAX],EBX
//   XREF to: 00824e28 (WRITE)
//   XREF to: 00824e58 (WRITE)
// 00437189: JMP 0x00436c81
//   XREF to: 00436c81 (UNCONDITIONAL_JUMP)
// 0043718e: MOV EBP,dword ptr [EAX + 0x8]
//   Label: LAB_0043718e
//   XREF to: 00824e30 (READ)
//   XREF to: 00824e60 (READ)
// 00437191: MOV ECX,dword ptr [EAX + 0x4]
//   XREF to: 00824e2c (READ)
//   XREF to: 00824e5c (READ)
// 00437194: CMP ECX,EBP
// 00437196: JLE 0x004371a0
//   XREF to: 004371a0 (CONDITIONAL_JUMP)
// 00437198: MOV dword ptr [EAX + 0x4],EBP
//   XREF to: 00824e2c (WRITE)
//   XREF to: 00824e5c (WRITE)
// 0043719b: JMP 0x00436c81
//   XREF to: 00436c81 (UNCONDITIONAL_JUMP)
// 004371a0: CMP EBX,ECX
//   Label: LAB_004371a0
// 004371a2: JLE 0x00436c81
//   XREF to: 00436c81 (CONDITIONAL_JUMP)
// 004371a8: JMP 0x00436c7e
//   XREF to: 00436c7e (UNCONDITIONAL_JUMP)
