// Name: core_xform.cpp_transformAndClipGeometry_FUN_005f8550
// Address: 005f8550
// MANUAL RECONSTRUCTION
// Address Range: [[005f8550, 005f8c84]]
// Convention: __cdecl
// Signature: SRenderVertex * __cdecl core_xform_cpp_transformAndClipGeometry_FUN_005f8550(int vertex_count,int *vertex_indices)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x005f8bef) */
/* WARNING: Removing unreachable block (ram,0x005f8b55) */
/* WARNING: Removing unreachable block (ram,0x005f8abb) */
/* WARNING: Removing unreachable block (ram,0x005f8a21) */
/* WARNING: Removing unreachable block (ram,0x005f85b8) */
/* WARNING: Removing unreachable block (ram,0x005f8641) */
/* WARNING: Removing unreachable block (ram,0x005f86f8) */
/* WARNING: Removing unreachable block (ram,0x005f87c2) */
/* WARNING: Removing unreachable block (ram,0x005f8887) */
/* WARNING: Removing unreachable block (ram,0x005f8952) */

SRenderVertex * __cdecl core_xform_cpp_transformAndClipGeometry_FUN_005f8550(int vertex_count,int *vertex_indices)

{
  int iVar1;
  int iVar2;
  byte bVar12;
  byte bVar3;
  uint uVar13;
  uint uVar4;
  int *piVar15;
  SRenderVertex *pSVar16;
  SRenderVertex *pSVar5;
  int iVar17;
  int iVar18;
  int iVar6;
  SRenderVertex *pSVar7;
  int *local_28;
  SRenderVertex *local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int iVar11;
  
  iVar11 = 0;
  iVar18 = 0;
  piVar15 = vertex_indices;
  if (0 < vertex_count) {
    do {
      if ((g_RenderVertexBuffer[*piVar15].projected_vertex.screen_x & 0x80000000U) != 0) {
        iVar18 = iVar18 + 1;
      }
      iVar11 = iVar11 + 1;
      piVar15 = piVar15 + 1;
    } while (iVar11 < vertex_count);
  }
  if (iVar18 == 0) {
    g_ClippedVertexCount = vertex_count;
    if (0 < vertex_count) {
      pSVar16 = g_ClippedVertexBuffer;
      iVar11 = 0;
      do {
        memcpy(pSVar16, g_RenderVertexBuffer + *vertex_indices, 0x30);
        vertex_indices = vertex_indices + 1;
        iVar11 = iVar11 + 1;
        pSVar16 = pSVar16 + 1;
      } while (iVar11 < vertex_count);
    }
  }
  else {
    g_ClipVertexCountStage1 = vertex_count;
    iVar6 = 0;
    g_ClipVertexCountStage2 = 0;
    g_ClipVertexCountStage3 = 0;
    g_ClipVertexCountStage4 = 0;
    g_ClippedVertexCount = 0;
    if (0 < vertex_count) {
      pSVar5 = g_ClipVertexBufferStage1;
      local_28 = vertex_indices;
      do {
        memcpy(pSVar5, g_RenderVertexBuffer + *local_28, 0x30);
        iVar6 = iVar6 + 1;
        local_24 = (SRenderVertex *)(local_28 + 1);
        pSVar5 = pSVar5 + 1;
        local_28 = (int *)local_24;
      } while (iVar6 < vertex_count);
    }
    local_20 = 0;
    if (0 < g_ClipVertexCountStage1) {
      pSVar5 = g_ClipVertexBufferStage1;
      do {
        uVar13 = local_20 + 1;
        if (uVar13 == g_ClipVertexCountStage1) {
          uVar13 = uVar13 ^ g_ClipVertexCountStage1;
        }
        pSVar7 = g_ClipVertexBufferStage1 + uVar13;
        bVar12 = (pSVar5->projected_vertex).transformed_z <=
                 (pSVar5->projected_vertex).transformed_x;
        if (g_ClipVertexBufferStage1[uVar13].projected_vertex.transformed_z <=
            (pSVar7->projected_vertex).transformed_x) {
          bVar12 = bVar12 | 2;
        }
        local_24 = (SRenderVertex *)(uint)bVar12;
        switch((uint)bVar12) {
        case 0x0:
          memcpy(g_ClipVertexBufferStage2 + g_ClipVertexCountStage2, pSVar5, 0x30);
          g_ClipVertexCountStage2 = g_ClipVertexCountStage2 + 1;
          break;
        case 0x1:
          core_xform_cpp_clipInterpolateRightPlane_FUN_005f7bc0
                    (pSVar7,pSVar5,g_ClipVertexBufferStage2 + g_ClipVertexCountStage2);
          g_ClipVertexCountStage2 = g_ClipVertexCountStage2 + 1;
          break;
        case 0x2:
          memcpy(g_ClipVertexBufferStage2 + g_ClipVertexCountStage2, pSVar5, 0x30);
          g_ClipVertexCountStage2 = g_ClipVertexCountStage2 + 1;
          core_xform_cpp_clipInterpolateRightPlane_FUN_005f7bc0
                    (pSVar5,pSVar7,g_ClipVertexBufferStage2 + g_ClipVertexCountStage2);
          g_ClipVertexCountStage2 = g_ClipVertexCountStage2 + 1;
        }
        local_20 = local_20 + 1;
        pSVar5 = pSVar5 + 1;
      } while (local_20 < g_ClipVertexCountStage1);
    }
    if (2 < g_ClipVertexCountStage2) {
      local_24 = (SRenderVertex *)0x0;
      local_18 = 0;
      if (0 < g_ClipVertexCountStage2) {
        pSVar5 = g_ClipVertexBufferStage2;
        do {
          uVar4 = local_18 + 1;
          if (uVar4 == g_ClipVertexCountStage2) {
            uVar4 = uVar4 ^ g_ClipVertexCountStage2;
          }
          pSVar7 = g_ClipVertexBufferStage2 + uVar4;
          bVar3 = (pSVar5->projected_vertex).transformed_x <=
                  -(pSVar5->projected_vertex).transformed_z;
          if ((pSVar7->projected_vertex).transformed_x <=
              -g_ClipVertexBufferStage2[uVar4].projected_vertex.transformed_z) {
            bVar3 = bVar3 | 2;
          }
          local_24 = (SRenderVertex *)(uint)bVar3;
          switch((uint)bVar3) {
          case 0x0:
            memcpy(g_ClipVertexBufferStage3 + g_ClipVertexCountStage3, pSVar5, 0x30);
            g_ClipVertexCountStage3 = g_ClipVertexCountStage3 + 1;
            break;
          case 0x1:
            core_xform_cpp_clipInterpolateLeftPlane_FUN_005f7c80
                      (pSVar7,pSVar5,g_ClipVertexBufferStage3 + g_ClipVertexCountStage3);
            g_ClipVertexCountStage3 = g_ClipVertexCountStage3 + 1;
            break;
          case 0x2:
            memcpy(g_ClipVertexBufferStage3 + g_ClipVertexCountStage3, pSVar5, 0x30);
            g_ClipVertexCountStage3 = g_ClipVertexCountStage3 + 1;
            core_xform_cpp_clipInterpolateLeftPlane_FUN_005f7c80
                      (pSVar5,pSVar7,g_ClipVertexBufferStage3 + g_ClipVertexCountStage3);
            g_ClipVertexCountStage3 = g_ClipVertexCountStage3 + 1;
          }
          local_18 = local_18 + 1;
          pSVar5 = pSVar5 + 1;
        } while (local_18 < g_ClipVertexCountStage2);
      }
      if (2 < g_ClipVertexCountStage3) {
        local_14 = 0;
        if (0 < g_ClipVertexCountStage3) {
          pSVar5 = g_ClipVertexBufferStage3;
          do {
            uVar4 = local_14 + 1;
            if (uVar4 == g_ClipVertexCountStage3) {
              uVar4 = uVar4 ^ g_ClipVertexCountStage3;
            }
            bVar3 = (pSVar5->projected_vertex).transformed_z <=
                    (pSVar5->projected_vertex).transformed_y;
            if (g_ClipVertexBufferStage3[uVar4].projected_vertex.transformed_z <=
                g_ClipVertexBufferStage3[uVar4].projected_vertex.transformed_y) {
              bVar3 = bVar3 | 2;
            }
            local_24 = (SRenderVertex *)(uint)bVar3;
            switch((uint)bVar3) {
            case 0x0:
              memcpy(g_ClipVertexBufferStage4 + g_ClipVertexCountStage4, pSVar5, 0x30);
              g_ClipVertexCountStage4 = g_ClipVertexCountStage4 + 1;
              break;
            case 0x1:
              core_xform_cpp_clipInterpolateTopPlane_FUN_005f7d40
                        (g_ClipVertexBufferStage3 + uVar4,pSVar5,
                         g_ClipVertexBufferStage4 + g_ClipVertexCountStage4);
              g_ClipVertexCountStage4 = g_ClipVertexCountStage4 + 1;
              break;
            case 0x2:
              memcpy(g_ClipVertexBufferStage4 + g_ClipVertexCountStage4, pSVar5, 0x30);
              g_ClipVertexCountStage4 = g_ClipVertexCountStage4 + 1;
              core_xform_cpp_clipInterpolateTopPlane_FUN_005f7d40
                        (pSVar5,g_ClipVertexBufferStage3 + uVar4,
                         g_ClipVertexBufferStage4 + g_ClipVertexCountStage4);
              g_ClipVertexCountStage4 = g_ClipVertexCountStage4 + 1;
            }
            local_14 = local_14 + 1;
            pSVar5 = pSVar5 + 1;
          } while (local_14 < g_ClipVertexCountStage3);
        }
        if (2 < g_ClipVertexCountStage4) {
          local_1c = 0;
          if (0 < g_ClipVertexCountStage4) {
            pSVar5 = g_ClipVertexBufferStage4;
            do {
              uVar4 = local_1c + 1;
              if (uVar4 == g_ClipVertexCountStage4) {
                uVar4 = uVar4 ^ g_ClipVertexCountStage4;
              }
              bVar3 = (pSVar5->projected_vertex).transformed_y <=
                      -(pSVar5->projected_vertex).transformed_z;
              if (g_ClipVertexBufferStage4[uVar4].projected_vertex.transformed_y <=
                  -g_ClipVertexBufferStage4[uVar4].projected_vertex.transformed_z) {
                bVar3 = bVar3 | 2;
              }
              local_24 = (SRenderVertex *)(uint)bVar3;
              switch((uint)bVar3) {
              case 0x0:
                memcpy(g_ClippedVertexBuffer + g_ClippedVertexCount, pSVar5, 0x30);
                g_ClippedVertexCount = g_ClippedVertexCount + 1;
                break;
              case 0x1:
                core_xform_cpp_clipInterpolateBottomPlane_FUN_005f7e00
                          (g_ClipVertexBufferStage4 + uVar4,pSVar5,
                           g_ClippedVertexBuffer + g_ClippedVertexCount);
                g_ClippedVertexCount = g_ClippedVertexCount + 1;
                break;
              case 0x2:
                memcpy(g_ClippedVertexBuffer + g_ClippedVertexCount, pSVar5, 0x30);
                g_ClippedVertexCount = g_ClippedVertexCount + 1;
                core_xform_cpp_clipInterpolateBottomPlane_FUN_005f7e00
                          (pSVar5,g_ClipVertexBufferStage4 + uVar4,
                           g_ClippedVertexBuffer + g_ClippedVertexCount);
                g_ClippedVertexCount = g_ClippedVertexCount + 1;
              }
              local_1c = local_1c + 1;
              pSVar5 = pSVar5 + 1;
            } while (local_1c < g_ClipVertexCountStage4);
          }
          if (2 < g_ClippedVertexCount) {
            local_24 = g_ClippedVertexBuffer;
            iVar6 = 0;
            if (0 < g_ClippedVertexCount) {
              do {
                iVar1 = (local_24->projected_vertex).transformed_z;
                if (iVar1 == 0) {
                  (local_24->projected_vertex).transformed_z = 1;
                  (local_24->projected_vertex).transformed_x = 0;
                  (local_24->projected_vertex).transformed_y = 0;
                }
                else if (iVar1 < (local_24->projected_vertex).transformed_x) {
                  (local_24->projected_vertex).transformed_x = iVar1;
                }
                else {
                  iVar11 = (local_24->projected_vertex).transformed_x;
                  iVar17 = -iVar1;
                  if (-iVar11 == iVar1 || iVar17 < iVar11) {
                    iVar2 = (local_24->projected_vertex).transformed_y;
                    if (iVar1 < iVar2) {
                      (local_24->projected_vertex).transformed_y = iVar1;
                    }
                    else if (-iVar2 != iVar1 && iVar2 <= iVar17) {
                      (local_24->projected_vertex).transformed_y = iVar17;
                    }
                  }
                  else {
                    (local_24->projected_vertex).transformed_x = iVar17;
                  }
                }
                iVar6 = iVar6 + 1;
                local_24 = local_24 + 1;
              } while (iVar6 < g_ClippedVertexCount);
            }
          }
        }
      }
    }
  }
  return local_24;
}
