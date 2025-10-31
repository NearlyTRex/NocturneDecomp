// Name: engine_prim.c_renderIndexedPolygonAdvanced_FUN_00553b10
// Address: 00553b10
// Address Range: [[00553b10, 005542ae]]
// Convention: __cdecl
// Signature: void engine_prim.c_renderIndexedPolygonAdvanced_FUN_00553b10(int * vertex_indices, int vertex_count)
// Cross-references:
//   engine_clipper.c_clipPolygonToViewport_FUN_00438420 (00438420) at 0043850e [UNCONDITIONAL_CALL]
// Globals:
//   void* switchdataD_00553aec = 00553d60
//   SRenderVertex[16] g_RenderVertexBuffer
//   undefined4 g_RenderVertexBuffer[0].projected_vertex.transformed_z
//   undefined4 g_RenderVertexBuffer[0].projected_vertex.inv_z
//   undefined4 g_RenderVertexBuffer[0].projected_vertex.screen_x
//   undefined4 g_RenderVertexBuffer[0].projected_vertex.screen_y
//   undefined4 g_RenderVertexBuffer[0].u
//   undefined4 g_RenderVertexBuffer[0].v
//   undefined4 g_RenderVertexBuffer[0].light
//   undefined4 g_RenderVertexBuffer[0].color
//   undefined4 g_RenderVertexBuffer[0].fog
//   undefined4 g_RenderVertexBuffer[0].w_recip
//   int g_TexturesDisabled
//   int g_CullingMode
//   int g_UseExternalRenderer
//   int g_ProcessorType
//   int g_RenderStateFlags
//   int g_RenderStateFlag2
//   int g_RenderedTriangleCount
//   int g_ActiveEdgeCount
//   SSoftwareEdge[16] g_SoftwareEdgeTable
//   undefined4 g_SoftwareEdgeTable[0].y_max
//   undefined4 g_SoftwareEdgeTable[0].x_current
//   undefined4 g_SoftwareEdgeTable[0].x_gradient
//   undefined4 g_SoftwareEdgeTable[0].z_current
//   undefined4 g_SoftwareEdgeTable[0].z_gradient
//   undefined4 g_SoftwareEdgeTable[0].u_current
//   undefined4 g_SoftwareEdgeTable[0].u_gradient
//   undefined4 g_SoftwareEdgeTable[0].v_current
//   undefined4 g_SoftwareEdgeTable[0].v_gradient
//   undefined4 g_SoftwareEdgeTable[0].w_current
//   undefined4 g_SoftwareEdgeTable[0].w_gradient
//   undefined4 g_SoftwareEdgeTable[0].fog_current
//   undefined4 g_SoftwareEdgeTable[0].fog_gradient
//   undefined4 g_SoftwareEdgeTable[0].r_current
//   undefined4 g_SoftwareEdgeTable[0].r_gradient
//   undefined4 g_SoftwareEdgeTable[0].g_current
//   undefined4 g_SoftwareEdgeTable[0].g_gradient
//   undefined4 g_SoftwareEdgeTable[1].y_min
//   int g_MinScanline
//   int g_MaxScanline
// Function calls:
//   engine_prim.c_adjustNearPlaneTextureCoords_FUN_005520a0
//   engine_prim.c_calculateTriangleWindingOrder_FUN_00552150
//   engine_prim.c_normalizeTextureCoords_FUN_00552020
//   engine_prim.c_prepareDepthBuffer_FUN_00551fb0
//   engine_prim.c_replaceWWithDepth_FUN_00552110
//   wincore_windll.cpp_drawPolygon2_FUN_005b7610
//   wincore_windll.cpp_renderScanline_FUN_005b5710

#include "nocturne.h"

void __cdecl
engine_prim_c_renderIndexedPolygonAdvanced_FUN_00553b10(int *vertex_indices,int vertex_count)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  SSoftwareEdge *pSVar5;
  SSoftwareEdge *pSVar6;
  int iVar7;
  uint uVar8;
  int *piVar9;
  SRenderVertex *pSVar10;
  BADSPACEBASE *in_ESP;
  int iVar11;
  uint uVar12;
  int iVar13;
  SRenderVertex *pSVar14;
  int in_stack_0000000c;
  int in_stack_00000010;
  SRenderVertex *in_stack_ffffff9c;
  void *in_stack_ffffffa0;
  int in_stack_ffffffa4;
  int *local_20;
  int local_1c;
  int local_18;
  
  if (g_CullingMode != 0) {
    if (vertex_count < 4) {
      iVar3 = engine_prim_c_calculateTriangleWindingOrder_FUN_00552150
                        (g_RenderVertexBuffer + *vertex_indices,
                         g_RenderVertexBuffer + vertex_indices[1],
                         g_RenderVertexBuffer + vertex_indices[2]);
      if (iVar3 == 0) {
        return;
      }
    }
    else {
      iVar3 = vertex_count + -2;
      iVar11 = 0;
      iVar13 = 0;
      if (0 < iVar3) {
        do {
          iVar2 = engine_prim_c_calculateTriangleWindingOrder_FUN_00552150
                            (g_RenderVertexBuffer + *vertex_indices,
                             g_RenderVertexBuffer + vertex_indices[1],
                             g_RenderVertexBuffer + vertex_indices[2]);
          if (iVar2 == 0) {
            iVar13 = iVar13 + 1;
          }
          iVar11 = iVar11 + 1;
          vertex_indices = vertex_indices + 1;
        } while (iVar11 < iVar3);
      }
      if (iVar13 == iVar3) {
        return;
      }
    }
  }
  if ((g_UseExternalRenderer == 0) || (g_TexturesDisabled != 0)) {
    g_RenderedTriangleCount = g_RenderedTriangleCount + 1;
    switch(g_RenderStateFlag2) {
    case 1:
      iVar3 = 0;
      piVar9 = (int *)vertex_count;
      if (0 < in_stack_0000000c) {
        do {
          iVar3 = iVar3 + 1;
          engine_prim_c_prepareDepthBuffer_FUN_00551fb0(g_RenderVertexBuffer + *piVar9,1);
          piVar9 = piVar9 + 1;
        } while (iVar3 < in_stack_0000000c);
      }
      break;
    case 2:
      iVar3 = 0;
      piVar9 = (int *)vertex_count;
      if (0 < in_stack_0000000c) {
        do {
          engine_prim_c_normalizeTextureCoords_FUN_00552020(g_RenderVertexBuffer + *piVar9,1);
          iVar3 = iVar3 + 1;
          piVar9 = piVar9 + 1;
        } while (iVar3 < in_stack_0000000c);
      }
      break;
    case 3:
      iVar3 = 0;
      piVar9 = (int *)vertex_count;
      if (0 < in_stack_0000000c) {
        do {
          iVar3 = iVar3 + 1;
          engine_prim_c_adjustNearPlaneTextureCoords_FUN_005520a0(g_RenderVertexBuffer + *piVar9,1);
          piVar9 = piVar9 + 1;
        } while (iVar3 < in_stack_0000000c);
      }
      break;
    case 5:
      iVar3 = 0;
      piVar9 = (int *)vertex_count;
      if (0 < in_stack_0000000c) {
        do {
          engine_prim_c_normalizeTextureCoords_FUN_00552020(g_RenderVertexBuffer + *piVar9,1);
          iVar3 = iVar3 + 1;
          piVar9 = piVar9 + 1;
        } while (iVar3 < in_stack_0000000c);
      }
      break;
    case 6:
      iVar3 = 0;
      piVar9 = (int *)vertex_count;
      if (0 < in_stack_0000000c) {
        do {
          iVar3 = iVar3 + 1;
          engine_prim_c_replaceWWithDepth_FUN_00552110(g_RenderVertexBuffer + *piVar9,1);
          piVar9 = piVar9 + 1;
        } while (iVar3 < in_stack_0000000c);
      }
    }
    g_MaxScanline = 0;
    g_ActiveEdgeCount = 0;
    local_18 = 0;
    g_MinScanline = 0x4b0;
    if (0 < in_stack_0000000c) {
      local_20 = (int *)vertex_count;
      do {
        iVar3 = g_ActiveEdgeCount;
        iVar11 = local_18 + 1;
        if (in_stack_0000000c <= iVar11) {
          iVar11 = 0;
        }
        iVar11 = *(int *)(iVar11 * 4 + vertex_count);
        iVar13 = *local_20;
        iVar4 = g_RenderVertexBuffer[iVar11].projected_vertex.screen_y >> 0x10;
        iVar2 = g_RenderVertexBuffer[iVar13].projected_vertex.screen_y >> 0x10;
        if (iVar2 != iVar4) {
          iVar7 = iVar4;
          pSVar10 = g_RenderVertexBuffer + iVar13;
          pSVar14 = g_RenderVertexBuffer + iVar11;
          if (g_RenderVertexBuffer[iVar11].projected_vertex.screen_y <
              g_RenderVertexBuffer[iVar13].projected_vertex.screen_y) {
            iVar7 = iVar2;
            iVar2 = iVar4;
            pSVar10 = g_RenderVertexBuffer + iVar11;
            pSVar14 = g_RenderVertexBuffer + iVar13;
          }
          g_SoftwareEdgeTable[g_ActiveEdgeCount].y_min = iVar2;
          iVar11 = g_MinScanline;
          g_SoftwareEdgeTable[iVar3].y_max = iVar7;
          if (iVar2 < iVar11) {
            g_MinScanline = iVar2;
          }
          if (g_MaxScanline < iVar7) {
            g_MaxScanline = iVar7;
          }
          uVar8 = (pSVar14->projected_vertex).screen_y - (pSVar10->projected_vertex).screen_y;
          if (uVar8 < 0x10000) {
            iVar11 = 0;
          }
          else {
            iVar11 = (int)(0xffffffff / (ulonglong)uVar8);
          }
          uVar12 = (uint)(ushort)((ushort)(pSVar10->projected_vertex).screen_y ^ 0xffff);
          lVar1 = (longlong)iVar11 *
                  (longlong)
                  ((pSVar14->projected_vertex).screen_x - (pSVar10->projected_vertex).screen_x);
          uVar8 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
          g_SoftwareEdgeTable[iVar3].x_gradient = uVar8;
          lVar1 = (longlong)(int)uVar12 * (longlong)(int)uVar8;
          g_SoftwareEdgeTable[iVar3].x_current =
               (pSVar10->projected_vertex).screen_x +
               ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
          lVar1 = (longlong)iVar11 * (longlong)((int)pSVar14->u - (int)pSVar10->u);
          uVar8 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
          g_SoftwareEdgeTable[iVar3].u_gradient = uVar8;
          lVar1 = (longlong)(int)uVar12 * (longlong)(int)uVar8;
          g_SoftwareEdgeTable[iVar3].u_current =
               (int)pSVar10->u + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
          lVar1 = (longlong)iVar11 * (longlong)((int)pSVar14->v - (int)pSVar10->v);
          uVar8 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
          g_SoftwareEdgeTable[iVar3].v_gradient = uVar8;
          lVar1 = (longlong)(int)uVar12 * (longlong)(int)uVar8;
          g_SoftwareEdgeTable[iVar3].v_current =
               (int)pSVar10->v + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
          lVar1 = (longlong)iVar11 * (longlong)((int)pSVar14->light - (int)pSVar10->light);
          uVar8 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
          g_SoftwareEdgeTable[iVar3].z_gradient = uVar8;
          lVar1 = (longlong)(int)uVar12 * (longlong)(int)uVar8;
          g_SoftwareEdgeTable[iVar3].z_current =
               (int)pSVar10->light + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10)
          ;
          lVar1 = (longlong)iVar11 * (longlong)((int)pSVar14->w_recip - (int)pSVar10->w_recip);
          uVar8 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
          g_SoftwareEdgeTable[iVar3].fog_gradient = uVar8;
          lVar1 = (longlong)(int)uVar12 * (longlong)(int)uVar8;
          g_SoftwareEdgeTable[iVar3].fog_current =
               (int)pSVar10->w_recip +
               ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
          if (g_RenderStateFlag2 == 1) {
            if (g_ProcessorType == 0) {
              local_1c = (pSVar10->projected_vertex).inv_z;
              iVar13 = (pSVar14->projected_vertex).inv_z;
            }
            else {
              local_1c = 0x7fffffff - (pSVar10->projected_vertex).transformed_z;
              iVar13 = 0x7fffffff - (pSVar14->projected_vertex).transformed_z;
            }
            lVar1 = (longlong)iVar11 * (longlong)(iVar13 - local_1c);
            uVar8 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
            g_SoftwareEdgeTable[iVar3].w_gradient = uVar8;
            lVar1 = (longlong)(int)uVar12 * (longlong)(int)uVar8;
            g_SoftwareEdgeTable[iVar3].w_current =
                 local_1c + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
          }
          else {
            lVar1 = (longlong)iVar11 *
                    (longlong)
                    ((pSVar14->projected_vertex).transformed_z -
                    (pSVar10->projected_vertex).transformed_z);
            uVar8 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
            g_SoftwareEdgeTable[iVar3].w_gradient = uVar8;
            lVar1 = (longlong)(int)uVar12 * (longlong)(int)uVar8;
            g_SoftwareEdgeTable[iVar3].w_current =
                 (pSVar10->projected_vertex).transformed_z +
                 ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
          }
          lVar1 = (longlong)iVar11 * (longlong)(pSVar14->color - pSVar10->color);
          uVar8 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
          g_SoftwareEdgeTable[iVar3].r_gradient = uVar8;
          lVar1 = (longlong)(int)uVar12 * (longlong)(int)uVar8;
          g_SoftwareEdgeTable[iVar3].r_current =
               pSVar10->color + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
          lVar1 = (longlong)iVar11 * (longlong)((int)pSVar14->fog - (int)pSVar10->fog);
          uVar8 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
          g_SoftwareEdgeTable[iVar3].g_gradient = uVar8;
          lVar1 = (longlong)(int)uVar12 * (longlong)(int)uVar8;
          g_SoftwareEdgeTable[iVar3].g_current =
               (int)pSVar10->fog + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
          g_ActiveEdgeCount = g_ActiveEdgeCount + 1;
        }
        local_20 = local_20 + 1;
        local_18 = local_18 + 1;
      } while (local_18 < in_stack_0000000c);
    }
    iVar3 = g_MinScanline;
    pSVar5 = g_SoftwareEdgeTable;
    iVar11 = 0;
    if (0 < g_ActiveEdgeCount) {
      do {
        if ((g_MinScanline == pSVar5->y_min) && (pSVar5 != (SSoftwareEdge *)0x0)) goto LAB_00553e1f;
        iVar11 = iVar11 + 1;
        pSVar5 = pSVar5 + 1;
      } while (iVar11 < g_ActiveEdgeCount);
    }
    pSVar5 = (SSoftwareEdge *)0x0;
LAB_00553e1f:
    if (pSVar5 != (SSoftwareEdge *)0x0) {
      iVar11 = 0;
      pSVar6 = g_SoftwareEdgeTable;
      if (0 < g_ActiveEdgeCount) {
        do {
          if ((g_MinScanline == pSVar6->y_min) && (pSVar6 != pSVar5)) goto LAB_00553e5e;
          iVar11 = iVar11 + 1;
          pSVar6 = pSVar6 + 1;
        } while (iVar11 < g_ActiveEdgeCount);
      }
      pSVar6 = (SSoftwareEdge *)0x0;
LAB_00553e5e:
      if (pSVar6 != (SSoftwareEdge *)0x0) {
        do {
          iVar11 = g_ActiveEdgeCount;
          if (pSVar5->y_max <= iVar3) {
            pSVar5->y_min = -1;
            pSVar5 = g_SoftwareEdgeTable;
            iVar13 = 0;
            if (0 < iVar11) {
              do {
                if ((iVar3 == pSVar5->y_min) && (pSVar5 != pSVar6)) goto LAB_00553eb3;
                iVar13 = iVar13 + 1;
                pSVar5 = pSVar5 + 1;
              } while (iVar13 < g_ActiveEdgeCount);
            }
            pSVar5 = (SSoftwareEdge *)0x0;
LAB_00553eb3:
            if (pSVar5 == (SSoftwareEdge *)0x0) {
              return;
            }
          }
          if (pSVar6->y_max <= iVar3) {
            pSVar6->y_min = -1;
            iVar11 = 0;
            pSVar6 = g_SoftwareEdgeTable;
            if (0 < g_ActiveEdgeCount) {
              do {
                if ((iVar3 == pSVar6->y_min) && (pSVar6 != pSVar5)) goto LAB_00553f00;
                iVar11 = iVar11 + 1;
                pSVar6 = pSVar6 + 1;
              } while (iVar11 < g_ActiveEdgeCount);
            }
            pSVar6 = (SSoftwareEdge *)0x0;
LAB_00553f00:
            if (pSVar6 == (SSoftwareEdge *)0x0) {
              return;
            }
          }
          wincore_windll_cpp_renderScanline_FUN_005b5710
                    (in_stack_ffffff9c,in_stack_ffffffa0,in_stack_ffffffa4);
          *(int *)(in_stack_0000000c + 8) =
               *(int *)(in_stack_0000000c + 8) + *(int *)(in_stack_0000000c + 0xc);
          *(int *)(in_stack_0000000c + 0x18) =
               *(int *)(in_stack_0000000c + 0x18) + *(int *)(in_stack_0000000c + 0x1c);
          *(int *)(in_stack_0000000c + 0x20) =
               *(int *)(in_stack_0000000c + 0x20) + *(int *)(in_stack_0000000c + 0x24);
          *(int *)(in_stack_0000000c + 0x28) =
               *(int *)(in_stack_0000000c + 0x28) + *(int *)(in_stack_0000000c + 0x2c);
          *(int *)(in_stack_0000000c + 0x10) =
               *(int *)(in_stack_0000000c + 0x10) + *(int *)(in_stack_0000000c + 0x14);
          *(int *)(in_stack_0000000c + 0x38) =
               *(int *)(in_stack_0000000c + 0x38) + *(int *)(in_stack_0000000c + 0x3c);
          *(int *)(in_stack_0000000c + 0x40) =
               *(int *)(in_stack_0000000c + 0x40) + *(int *)(in_stack_0000000c + 0x44);
          *(int *)(in_stack_0000000c + 0x30) =
               *(int *)(in_stack_0000000c + 0x30) + *(int *)(in_stack_0000000c + 0x34);
          pSVar6->x_current = pSVar6->x_current + pSVar6->x_gradient;
          pSVar6->u_current = pSVar6->u_current + pSVar6->u_gradient;
          pSVar6->v_current = pSVar6->v_current + pSVar6->v_gradient;
          pSVar6->w_current = pSVar6->w_current + pSVar6->w_gradient;
          pSVar6->z_current = pSVar6->z_current + pSVar6->z_gradient;
          pSVar6->r_current = pSVar6->r_current + pSVar6->r_gradient;
          pSVar6->g_current = pSVar6->g_current + pSVar6->g_gradient;
          pSVar6->fog_current = pSVar6->fog_current + pSVar6->fog_gradient;
        } while( true );
      }
    }
  }
  else {
    iVar3 = 0;
    if (0 < in_stack_0000000c) {
      do {
        iVar11 = *(int *)vertex_count;
        iVar3 = iVar3 + 1;
        vertex_count = vertex_count + 4;
        *(SRenderVertex **)(&stack0xffffff98 + iVar3 * 4) = g_RenderVertexBuffer + iVar11;
      } while (iVar3 < in_stack_0000000c);
    }
    wincore_windll_cpp_drawPolygon2_FUN_005b7610
              ((SRenderVertex **)&stack0xffffff9c,in_stack_0000000c,g_RenderStateFlags);
    g_RenderedTriangleCount = g_RenderedTriangleCount + in_stack_00000010 + -2;
  }
  return;
}


// Assembly code:
// 00553b10: PUSH EBX
//   Label: engine_prim.c_renderIndexedPolygonAdvanced_FUN_00553b10
// 00553b11: PUSH ESI
// 00553b12: PUSH EDI
// 00553b13: PUSH EBP
// 00553b14: SUB ESP,0x58
// 00553b17: CMP dword ptr [0x00772a7c],0x0
//   XREF to: 00772a7c (READ)
// 00553b1e: JZ 0x00553b7d
//   XREF to: 00553b7d (CONDITIONAL_JUMP)
// 00553b20: MOV ECX,dword ptr [ESP + 0x70]
//   XREF to: Stack[0x8] (READ)
// 00553b24: CMP ECX,0x3
// 00553b27: JLE 0x00553bfb
//   XREF to: 00553bfb (CONDITIONAL_JUMP)
// 00553b2d: MOV EBX,dword ptr [ESP + 0x6c]
//   XREF to: Stack[0x4] (READ)
// 00553b31: LEA EBP,[ECX + -0x2]
// 00553b34: XOR ESI,ESI
// 00553b36: XOR EDI,EDI
// 00553b38: TEST EBP,EBP
// 00553b3a: JLE 0x00553b75
//   XREF to: 00553b75 (CONDITIONAL_JUMP)
// 00553b3c: IMUL EAX,dword ptr [EBX + 0x8],0x30
//   Label: LAB_00553b3c
// 00553b40: ADD EAX,0x688014
//   XREF to: 00688014 (DATA)
// 00553b45: MOV ECX,dword ptr [EBX + 0x4]
// 00553b48: PUSH EAX
// 00553b49: IMUL EAX,ECX,0x30
// 00553b4c: ADD EAX,0x688014
//   XREF to: 00688014 (DATA)
// 00553b51: MOV EDX,dword ptr [EBX]
// 00553b53: PUSH EAX
// 00553b54: IMUL EAX,EDX,0x30
// 00553b57: ADD EAX,0x688014
//   XREF to: 00688014 (DATA)
// 00553b5c: PUSH EAX
// 00553b5d: CALL engine_prim.c_calculateTriangleWindingOrder_FUN_00552150
//   XREF to: 00552150 (UNCONDITIONAL_CALL)
// 00553b62: ADD ESP,0xc
// 00553b65: TEST EAX,EAX
// 00553b67: JZ 0x00553bf5
//   XREF to: 00553bf5 (CONDITIONAL_JUMP)
// 00553b6d: INC ESI
//   Label: LAB_00553b6d
// 00553b6e: ADD EBX,0x4
// 00553b71: CMP ESI,EBP
// 00553b73: JL 0x00553b3c
//   XREF to: 00553b3c (CONDITIONAL_JUMP)
// 00553b75: CMP EDI,EBP
//   Label: LAB_00553b75
// 00553b77: JZ 0x00553bed
//   XREF to: 00553bed (CONDITIONAL_JUMP)
// 00553b7d: CMP dword ptr [0x02d03e94],0x0
//   Label: LAB_00553b7d
//   XREF to: 02d03e94 (READ)
// 00553b84: JZ 0x00553fdf
//   XREF to: 00553fdf (CONDITIONAL_JUMP)
// 00553b8a: CMP dword ptr [0x00772a74],0x0
//   XREF to: 00772a74 (READ)
// 00553b91: JNZ 0x00553fdf
//   XREF to: 00553fdf (CONDITIONAL_JUMP)
// 00553b97: MOV EBX,dword ptr [ESP + 0x70]
//   XREF to: Stack[0x8] (READ)
// 00553b9b: XOR EAX,EAX
// 00553b9d: TEST EBX,EBX
// 00553b9f: JLE 0x00553bc0
//   XREF to: 00553bc0 (CONDITIONAL_JUMP)
// 00553ba1: MOV EDX,dword ptr [ESP + 0x6c]
//   XREF to: Stack[0x4] (READ)
// 00553ba5: MOV EBP,dword ptr [ESP + 0x70]
//   XREF to: Stack[0x8] (READ)
// 00553ba9: IMUL ECX,dword ptr [EDX],0x30
//   Label: LAB_00553ba9
// 00553bac: INC EAX
// 00553bad: ADD ECX,0x688014
//   XREF to: 00688014 (DATA)
// 00553bb3: ADD EDX,0x4
// 00553bb6: MOV dword ptr [ESP + EAX*0x4 + -0x4],ECX
//   XREF to: Stack[-0x68] (DATA)
// 00553bba: CMP EAX,EBP
// 00553bbc: JL 0x00553ba9
//   XREF to: 00553ba9 (CONDITIONAL_JUMP)
// 00553bbe: MOV EAX,EAX
// 00553bc0: MOV EAX,[0x02d052a0]
//   Label: LAB_00553bc0
//   XREF to: 02d052a0 (READ)
// 00553bc5: PUSH EAX
// 00553bc6: MOV EDX,dword ptr [ESP + 0x74]
//   XREF to: Stack[0x8] (READ)
// 00553bca: PUSH EDX
// 00553bcb: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x68] (DATA)
// 00553bcf: PUSH EAX
// 00553bd0: CALL wincore_windll.cpp_drawPolygon2_FUN_005b7610
//   XREF to: 005b7610 (UNCONDITIONAL_CALL)
// 00553bd5: ADD ESP,0xc
// 00553bd8: MOV EAX,dword ptr [ESP + 0x70]
//   XREF to: Stack[0x8] (READ)
// 00553bdc: MOV ECX,dword ptr [0x030e56b8]
//   XREF to: 030e56b8 (READ)
// 00553be2: SUB EAX,0x2
// 00553be5: ADD ECX,EAX
// 00553be7: MOV dword ptr [0x030e56b8],ECX
//   XREF to: 030e56b8 (WRITE)
// 00553bed: ADD ESP,0x58
//   Label: LAB_00553bed
// 00553bf0: POP EBP
// 00553bf1: POP EDI
// 00553bf2: POP ESI
// 00553bf3: POP EBX
// 00553bf4: RET
// 00553bf5: INC EDI
//   Label: LAB_00553bf5
// 00553bf6: JMP 0x00553b6d
//   XREF to: 00553b6d (UNCONDITIONAL_JUMP)
// 00553bfb: MOV EDX,dword ptr [ESP + 0x6c]
//   Label: LAB_00553bfb
//   XREF to: Stack[0x4] (READ)
// 00553bff: MOV EDX,dword ptr [EDX + 0x8]
// 00553c02: LEA EAX,[EDX*0x4 + 0x0]
// 00553c09: SUB EAX,EDX
// 00553c0b: SHL EAX,0x4
// 00553c0e: MOV EDX,dword ptr [ESP + 0x6c]
//   XREF to: Stack[0x4] (READ)
// 00553c12: ADD EAX,0x688014
//   XREF to: 00688014 (DATA)
// 00553c17: MOV EDX,dword ptr [EDX + 0x4]
// 00553c1a: PUSH EAX
// 00553c1b: LEA EAX,[EDX*0x4 + 0x0]
// 00553c22: SUB EAX,EDX
// 00553c24: SHL EAX,0x4
// 00553c27: MOV EDX,dword ptr [ESP + 0x70]
//   XREF to: Stack[0x4] (READ)
// 00553c2b: ADD EAX,0x688014
//   XREF to: 00688014 (DATA)
// 00553c30: MOV EDX,dword ptr [EDX]
// 00553c32: PUSH EAX
// 00553c33: LEA EAX,[EDX*0x4 + 0x0]
// 00553c3a: SUB EAX,EDX
// 00553c3c: SHL EAX,0x4
// 00553c3f: ADD EAX,0x688014
//   XREF to: 00688014 (DATA)
// 00553c44: PUSH EAX
// 00553c45: CALL engine_prim.c_calculateTriangleWindingOrder_FUN_00552150
//   XREF to: 00552150 (UNCONDITIONAL_CALL)
// 00553c4a: ADD ESP,0xc
// 00553c4d: TEST EAX,EAX
// 00553c4f: JNZ 0x00553b7d
//   XREF to: 00553b7d (CONDITIONAL_JUMP)
// 00553c55: ADD ESP,0x58
// 00553c58: POP EBP
// 00553c59: POP EDI
// 00553c5a: POP ESI
// 00553c5b: POP EBX
// 00553c5c: RET
// 00553c5d: MOV ECX,dword ptr [ESP + 0x70]
//   Label: caseD_1
//   XREF to: Stack[0x8] (READ)
// 00553c61: XOR ESI,ESI
// 00553c63: TEST ECX,ECX
// 00553c65: JLE 0x00553d60
//   XREF to: 00553d60 (CONDITIONAL_JUMP)
// 00553c6b: MOV EBX,dword ptr [ESP + 0x6c]
//   XREF to: Stack[0x4] (READ)
// 00553c6f: MOV EBP,dword ptr [ESP + 0x70]
//   XREF to: Stack[0x8] (READ)
// 00553c73: IMUL EAX,dword ptr [EBX],0x30
//   Label: LAB_00553c73
// 00553c76: PUSH 0x1
// 00553c78: ADD EAX,0x688014
//   XREF to: 00688014 (DATA)
// 00553c7d: PUSH EAX
// 00553c7e: ADD EBX,0x4
// 00553c81: INC ESI
// 00553c82: CALL engine_prim.c_prepareDepthBuffer_FUN_00551fb0
//   XREF to: 00551fb0 (UNCONDITIONAL_CALL)
// 00553c87: ADD ESP,0x8
// 00553c8a: CMP ESI,EBP
// 00553c8c: JL 0x00553c73
//   XREF to: 00553c73 (CONDITIONAL_JUMP)
// 00553c8e: JMP 0x00553d60
//   XREF to: 00553d60 (UNCONDITIONAL_JUMP)
// 00553c93: MOV EDX,dword ptr [ESP + 0x70]
//   Label: caseD_2
//   XREF to: Stack[0x8] (READ)
// 00553c97: XOR EBX,EBX
// 00553c99: TEST EDX,EDX
// 00553c9b: JLE 0x00553d60
//   XREF to: 00553d60 (CONDITIONAL_JUMP)
// 00553ca1: MOV ESI,dword ptr [ESP + 0x6c]
//   XREF to: Stack[0x4] (READ)
// 00553ca5: IMUL EAX,dword ptr [ESI],0x30
//   Label: LAB_00553ca5
// 00553ca8: PUSH 0x1
// 00553caa: ADD EAX,0x688014
//   XREF to: 00688014 (DATA)
// 00553caf: PUSH EAX
// 00553cb0: CALL engine_prim.c_normalizeTextureCoords_FUN_00552020
//   XREF to: 00552020 (UNCONDITIONAL_CALL)
// 00553cb5: ADD ESP,0x8
// 00553cb8: INC EBX
// 00553cb9: MOV ECX,dword ptr [ESP + 0x70]
//   XREF to: Stack[0x8] (READ)
// 00553cbd: ADD ESI,0x4
// 00553cc0: CMP EBX,ECX
// 00553cc2: JL 0x00553ca5
//   XREF to: 00553ca5 (CONDITIONAL_JUMP)
// 00553cc4: JMP 0x00553d60
//   XREF to: 00553d60 (UNCONDITIONAL_JUMP)
// 00553cc9: MOV EAX,dword ptr [ESP + 0x70]
//   Label: caseD_3
//   XREF to: Stack[0x8] (READ)
// 00553ccd: XOR ESI,ESI
// 00553ccf: TEST EAX,EAX
// 00553cd1: JLE 0x00553d60
//   XREF to: 00553d60 (CONDITIONAL_JUMP)
// 00553cd7: MOV EBX,dword ptr [ESP + 0x6c]
//   XREF to: Stack[0x4] (READ)
// 00553cdb: MOV EBP,dword ptr [ESP + 0x70]
//   XREF to: Stack[0x8] (READ)
// 00553cdf: IMUL EAX,dword ptr [EBX],0x30
//   Label: LAB_00553cdf
// 00553ce2: PUSH 0x1
// 00553ce4: ADD EAX,0x688014
//   XREF to: 00688014 (DATA)
// 00553ce9: PUSH EAX
// 00553cea: ADD EBX,0x4
// 00553ced: INC ESI
// 00553cee: CALL engine_prim.c_adjustNearPlaneTextureCoords_FUN_005520a0
//   XREF to: 005520a0 (UNCONDITIONAL_CALL)
// 00553cf3: ADD ESP,0x8
// 00553cf6: CMP ESI,EBP
// 00553cf8: JL 0x00553cdf
//   XREF to: 00553cdf (CONDITIONAL_JUMP)
// 00553cfa: JMP 0x00553d60
//   XREF to: 00553d60 (UNCONDITIONAL_JUMP)
// 00553cff: MOV EBP,dword ptr [ESP + 0x70]
//   Label: caseD_5
//   XREF to: Stack[0x8] (READ)
// 00553d03: XOR ESI,ESI
// 00553d05: TEST EBP,EBP
// 00553d07: JLE 0x00553d60
//   XREF to: 00553d60 (CONDITIONAL_JUMP)
// 00553d09: MOV EBX,dword ptr [ESP + 0x6c]
//   XREF to: Stack[0x4] (READ)
// 00553d0d: IMUL EAX,dword ptr [EBX],0x30
//   Label: LAB_00553d0d
// 00553d10: PUSH 0x1
// 00553d12: ADD EAX,0x688014
//   XREF to: 00688014 (DATA)
// 00553d17: PUSH EAX
// 00553d18: CALL engine_prim.c_normalizeTextureCoords_FUN_00552020
//   XREF to: 00552020 (UNCONDITIONAL_CALL)
// 00553d1d: ADD ESP,0x8
// 00553d20: INC ESI
// 00553d21: MOV ECX,dword ptr [ESP + 0x70]
//   XREF to: Stack[0x8] (READ)
// 00553d25: ADD EBX,0x4
// 00553d28: CMP ESI,ECX
// 00553d2a: JL 0x00553d0d
//   XREF to: 00553d0d (CONDITIONAL_JUMP)
// 00553d2c: JMP 0x00553d60
//   XREF to: 00553d60 (UNCONDITIONAL_JUMP)
// 00553d2e: MOV EDI,dword ptr [ESP + 0x70]
//   Label: caseD_6
//   XREF to: Stack[0x8] (READ)
// 00553d32: XOR ESI,ESI
// 00553d34: TEST EDI,EDI
// 00553d36: JLE 0x00553d60
//   XREF to: 00553d60 (CONDITIONAL_JUMP)
// 00553d38: MOV EBX,dword ptr [ESP + 0x6c]
//   XREF to: Stack[0x4] (READ)
// 00553d3c: MOV EBP,dword ptr [ESP + 0x70]
//   XREF to: Stack[0x8] (READ)
// 00553d40: IMUL EAX,dword ptr [EBX],0x30
//   Label: LAB_00553d40
// 00553d43: PUSH 0x1
// 00553d45: ADD EAX,0x688014
//   XREF to: 00688014 (DATA)
// 00553d4a: PUSH EAX
// 00553d4b: ADD EBX,0x4
// 00553d4e: INC ESI
// 00553d4f: CALL engine_prim.c_replaceWWithDepth_FUN_00552110
//   XREF to: 00552110 (UNCONDITIONAL_CALL)
// 00553d54: ADD ESP,0x8
// 00553d57: CMP ESI,EBP
// 00553d59: JL 0x00553d40
//   XREF to: 00553d40 (CONDITIONAL_JUMP)
// 00553d5b: LEA EAX,[EAX]
// 00553d5e: MOV ECX,ECX
// 00553d60: MOV EAX,0x4b0
//   Label: caseD_4
// 00553d65: XOR EDX,EDX
// 00553d67: MOV ESI,dword ptr [ESP + 0x70]
//   XREF to: Stack[0x8] (READ)
// 00553d6b: MOV dword ptr [0x030e5b44],EDX
//   XREF to: 030e5b44 (WRITE)
// 00553d71: MOV dword ptr [0x030e56bc],EDX
//   XREF to: 030e56bc (WRITE)
// 00553d77: MOV dword ptr [ESP + 0x4c],EDX
//   XREF to: Stack[-0x1c] (WRITE)
// 00553d7b: MOV [0x030e5b40],EAX
//   XREF to: 030e5b40 (WRITE)
// 00553d80: TEST ESI,ESI
// 00553d82: JLE 0x00553dee
//   XREF to: 00553dee (CONDITIONAL_JUMP)
// 00553d84: MOV EAX,dword ptr [ESP + 0x6c]
//   XREF to: Stack[0x4] (READ)
// 00553d88: MOV dword ptr [ESP + 0x44],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 00553d8c: MOV EAX,dword ptr [ESP + 0x4c]
//   Label: LAB_00553d8c
//   XREF to: Stack[-0x1c] (READ)
// 00553d90: MOV EDI,dword ptr [ESP + 0x70]
//   XREF to: Stack[0x8] (READ)
// 00553d94: INC EAX
// 00553d95: CMP EAX,EDI
// 00553d97: JL 0x00553d9b
//   XREF to: 00553d9b (CONDITIONAL_JUMP)
// 00553d99: XOR EAX,EAX
// 00553d9b: MOV EBP,dword ptr [ESP + 0x6c]
//   Label: LAB_00553d9b
//   XREF to: Stack[0x4] (READ)
// 00553d9f: SHL EAX,0x2
// 00553da2: ADD EAX,EBP
// 00553da4: IMUL ECX,dword ptr [EAX],0x30
// 00553da7: MOV EAX,dword ptr [ESP + 0x44]
//   XREF to: Stack[-0x24] (READ)
// 00553dab: IMUL ESI,dword ptr [EAX],0x30
// 00553dae: ADD ECX,0x688014
//   XREF to: 00688014 (DATA)
// 00553db4: ADD ESI,0x688014
//   XREF to: 00688014 (DATA)
// 00553dba: MOV EDI,ECX
// 00553dbc: MOV EAX,dword ptr [ECX + 0x14]
//   XREF to: 00688028 (DATA)
// 00553dbf: MOV EDX,dword ptr [ESI + 0x14]
//   XREF to: 00688028 (DATA)
// 00553dc2: SAR EAX,0x10
// 00553dc5: SAR EDX,0x10
// 00553dc8: MOV EBX,ESI
// 00553dca: CMP EDX,EAX
// 00553dcc: JNZ 0x00554001
//   XREF to: 00554001 (CONDITIONAL_JUMP)
// 00553dd2: MOV EDI,dword ptr [ESP + 0x44]
//   Label: LAB_00553dd2
//   XREF to: Stack[-0x24] (READ)
// 00553dd6: MOV EBP,dword ptr [ESP + 0x4c]
//   XREF to: Stack[-0x1c] (READ)
// 00553dda: MOV EDX,dword ptr [ESP + 0x70]
//   XREF to: Stack[0x8] (READ)
// 00553dde: ADD EDI,0x4
// 00553de1: INC EBP
// 00553de2: MOV dword ptr [ESP + 0x44],EDI
//   XREF to: Stack[-0x24] (WRITE)
// 00553de6: MOV dword ptr [ESP + 0x4c],EBP
//   XREF to: Stack[-0x1c] (WRITE)
// 00553dea: CMP EBP,EDX
// 00553dec: JL 0x00553d8c
//   XREF to: 00553d8c (CONDITIONAL_JUMP)
// 00553dee: MOV EAX,0x30e56c0
//   Label: LAB_00553dee
//   XREF to: 030e56c0 (DATA)
// 00553df3: MOV ESI,dword ptr [0x030e56bc]
//   XREF to: 030e56bc (READ)
// 00553df9: MOV EBX,dword ptr [0x030e5b40]
//   XREF to: 030e5b40 (READ)
// 00553dff: XOR ECX,ECX
// 00553e01: TEST ESI,ESI
// 00553e03: JLE 0x0055426f
//   XREF to: 0055426f (CONDITIONAL_JUMP)
// 00553e09: MOV EDX,dword ptr [0x030e56bc]
//   XREF to: 030e56bc (READ)
// 00553e0f: CMP EBX,dword ptr [EAX]
//   Label: LAB_00553e0f
//   XREF to: 030e56c0 (READ)
//   XREF to: 030e5708 (READ)
// 00553e11: JNZ 0x00554263
//   XREF to: 00554263 (CONDITIONAL_JUMP)
// 00553e17: TEST EAX,EAX
// 00553e19: JZ 0x00554263
//   XREF to: 00554263 (CONDITIONAL_JUMP)
// 00553e1f: MOV dword ptr [ESP + 0x54],EAX
//   Label: LAB_00553e1f
//   XREF to: Stack[-0x14] (WRITE)
//   XREF to: 030e56c0 (DATA)
//   XREF to: 030e5708 (DATA)
// 00553e23: TEST EAX,EAX
// 00553e25: JZ 0x00553bed
//   XREF to: 00553bed (CONDITIONAL_JUMP)
// 00553e2b: MOV EDI,dword ptr [0x030e56bc]
//   XREF to: 030e56bc (READ)
// 00553e31: MOV ECX,dword ptr [0x030e5b40]
//   XREF to: 030e5b40 (READ)
// 00553e37: MOV EBX,EAX
// 00553e39: XOR EDX,EDX
// 00553e3b: MOV EAX,0x30e56c0
//   XREF to: 030e56c0 (DATA)
// 00553e40: TEST EDI,EDI
// 00553e42: JLE 0x00554282
//   XREF to: 00554282 (CONDITIONAL_JUMP)
// 00553e48: MOV EBP,dword ptr [0x030e56bc]
//   XREF to: 030e56bc (READ)
// 00553e4e: CMP ECX,dword ptr [EAX]
//   Label: LAB_00553e4e
//   XREF to: 030e56c0 (READ)
//   XREF to: 030e5708 (READ)
// 00553e50: JNZ 0x00554276
//   XREF to: 00554276 (CONDITIONAL_JUMP)
// 00553e56: CMP EAX,EBX
// 00553e58: JZ 0x00554276
//   XREF to: 00554276 (CONDITIONAL_JUMP)
// 00553e5e: MOV EBP,EAX
//   Label: LAB_00553e5e
// 00553e60: TEST EAX,EAX
// 00553e62: JZ 0x00553bed
//   XREF to: 00553bed (CONDITIONAL_JUMP)
// 00553e68: MOV EAX,[0x030e5b40]
//   XREF to: 030e5b40 (READ)
// 00553e6d: MOV dword ptr [ESP + 0x50],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 00553e71: MOV EDX,dword ptr [ESP + 0x54]
//   Label: LAB_00553e71
//   XREF to: Stack[-0x14] (READ)
// 00553e75: MOV EAX,dword ptr [ESP + 0x50]
//   XREF to: Stack[-0x18] (READ)
// 00553e79: CMP EAX,dword ptr [EDX + 0x4]
//   XREF to: 030e56c4 (READ)
// 00553e7c: JL 0x00553ebf
//   XREF to: 00553ebf (CONDITIONAL_JUMP)
// 00553e7e: MOV ESI,dword ptr [0x030e56bc]
//   XREF to: 030e56bc (READ)
// 00553e84: MOV EBX,EAX
// 00553e86: MOV ECX,EBP
//   XREF to: 030e56c0 (PARAM)
// 00553e88: MOV dword ptr [EDX],0xffffffff
//   XREF to: 030e56c0 (WRITE)
// 00553e8e: MOV EAX,0x30e56c0
//   XREF to: 030e56c0 (DATA)
// 00553e93: XOR EDX,EDX
// 00553e95: TEST ESI,ESI
// 00553e97: JLE 0x00554295
//   XREF to: 00554295 (CONDITIONAL_JUMP)
// 00553e9d: MOV EDI,dword ptr [0x030e56bc]
//   XREF to: 030e56bc (READ)
// 00553ea3: CMP EBX,dword ptr [EAX]
//   Label: LAB_00553ea3
//   XREF to: 030e56c0 (READ)
//   XREF to: 030e5708 (READ)
// 00553ea5: JNZ 0x00554289
//   XREF to: 00554289 (CONDITIONAL_JUMP)
// 00553eab: CMP EAX,ECX
// 00553ead: JZ 0x00554289
//   XREF to: 00554289 (CONDITIONAL_JUMP)
// 00553eb3: MOV dword ptr [ESP + 0x54],EAX
//   Label: LAB_00553eb3
//   XREF to: Stack[-0x14] (WRITE)
//   XREF to: 030e56c0 (DATA)
//   XREF to: 030e5708 (DATA)
// 00553eb7: TEST EAX,EAX
// 00553eb9: JZ 0x00553bed
//   XREF to: 00553bed (CONDITIONAL_JUMP)
// 00553ebf: MOV EAX,dword ptr [ESP + 0x50]
//   Label: LAB_00553ebf
//   XREF to: Stack[-0x18] (READ)
// 00553ec3: CMP EAX,dword ptr [EBP + 0x4]
//   XREF to: 030e56c4 (READ)
// 00553ec6: JL 0x00553f0a
//   XREF to: 00553f0a (CONDITIONAL_JUMP)
// 00553ec8: MOV EBX,dword ptr [ESP + 0x54]
//   XREF to: Stack[-0x14] (READ)
// 00553ecc: MOV ECX,EAX
// 00553ece: MOV dword ptr [EBP],0xffffffff
//   XREF to: 030e56c0 (WRITE)
// 00553ed5: XOR EDX,EDX
// 00553ed7: MOV EBP,dword ptr [0x030e56bc]
//   XREF to: 030e56bc (READ)
// 00553edd: MOV EAX,0x30e56c0
//   XREF to: 030e56c0 (PARAM)
// 00553ee2: TEST EBP,EBP
// 00553ee4: JLE 0x005542a8
//   XREF to: 005542a8 (CONDITIONAL_JUMP)
// 00553eea: MOV ESI,dword ptr [0x030e56bc]
//   XREF to: 030e56bc (READ)
// 00553ef0: CMP ECX,dword ptr [EAX]
//   Label: LAB_00553ef0
//   XREF to: 030e56c0 (READ)
//   XREF to: 030e5708 (READ)
// 00553ef2: JNZ 0x0055429c
//   XREF to: 0055429c (CONDITIONAL_JUMP)
// 00553ef8: CMP EAX,EBX
// 00553efa: JZ 0x0055429c
//   XREF to: 0055429c (CONDITIONAL_JUMP)
// 00553f00: MOV EBP,EAX
//   Label: LAB_00553f00
// 00553f02: TEST EAX,EAX
// 00553f04: JZ 0x00553bed
//   XREF to: 00553bed (CONDITIONAL_JUMP)
// 00553f0a: MOV ESI,dword ptr [ESP + 0x54]
//   Label: LAB_00553f0a
//   XREF to: Stack[-0x14] (READ)
// 00553f0e: MOV EBX,dword ptr [ESP + 0x50]
//   XREF to: Stack[-0x18] (READ)
// 00553f12: MOV EDI,EBP
// 00553f14: CALL wincore_windll.cpp_renderScanline_FUN_005b5710
//   XREF to: 005b5710 (UNCONDITIONAL_CALL)
// 00553f19: MOV EAX,dword ptr [ESP + 0x54]
// 00553f1d: MOV EDX,dword ptr [ESP + 0x54]
// 00553f21: MOV EAX,dword ptr [EAX + 0xc]
// 00553f24: MOV ECX,dword ptr [EDX + 0x8]
// 00553f27: MOV EBX,dword ptr [EDX + 0x18]
// 00553f2a: MOV ESI,dword ptr [EDX + 0x20]
// 00553f2d: MOV EDI,dword ptr [EDX + 0x28]
// 00553f30: ADD ECX,EAX
// 00553f32: MOV EAX,dword ptr [EDX + 0x1c]
// 00553f35: MOV dword ptr [EDX + 0x8],ECX
// 00553f38: ADD EBX,EAX
// 00553f3a: MOV EAX,dword ptr [EDX + 0x24]
// 00553f3d: MOV dword ptr [EDX + 0x18],EBX
// 00553f40: ADD ESI,EAX
// 00553f42: MOV EAX,dword ptr [EDX + 0x2c]
// 00553f45: MOV dword ptr [EDX + 0x20],ESI
// 00553f48: ADD EDI,EAX
// 00553f4a: MOV dword ptr [EDX + 0x28],EDI
// 00553f4d: MOV ECX,dword ptr [EDX + 0x10]
// 00553f50: MOV EBX,dword ptr [EDX + 0x38]
// 00553f53: MOV ESI,dword ptr [EDX + 0x40]
// 00553f56: MOV EAX,dword ptr [EDX + 0x14]
// 00553f59: MOV EDI,dword ptr [EDX + 0x30]
// 00553f5c: ADD ECX,EAX
// 00553f5e: MOV EAX,dword ptr [EDX + 0x3c]
// 00553f61: MOV dword ptr [EDX + 0x10],ECX
// 00553f64: ADD EBX,EAX
// 00553f66: MOV EAX,dword ptr [EDX + 0x44]
// 00553f69: MOV dword ptr [EDX + 0x38],EBX
// 00553f6c: ADD ESI,EAX
// 00553f6e: MOV EAX,dword ptr [EDX + 0x34]
// 00553f71: MOV dword ptr [EDX + 0x40],ESI
// 00553f74: ADD EDI,EAX
// 00553f76: MOV dword ptr [EDX + 0x30],EDI
// 00553f79: MOV EAX,dword ptr [EBP + 0xc]
//   XREF to: 030e56cc (READ)
// 00553f7c: MOV EDX,dword ptr [EBP + 0x8]
//   XREF to: 030e56c8 (READ)
// 00553f7f: MOV ECX,dword ptr [EBP + 0x18]
//   XREF to: 030e56d8 (READ)
// 00553f82: MOV EBX,dword ptr [EBP + 0x20]
//   XREF to: 030e56e0 (READ)
// 00553f85: ADD EDX,EAX
// 00553f87: MOV EAX,dword ptr [EBP + 0x1c]
//   XREF to: 030e56dc (READ)
// 00553f8a: MOV dword ptr [EBP + 0x8],EDX
//   XREF to: 030e56c8 (WRITE)
// 00553f8d: ADD ECX,EAX
// 00553f8f: MOV EAX,dword ptr [EBP + 0x24]
//   XREF to: 030e56e4 (READ)
// 00553f92: MOV dword ptr [EBP + 0x18],ECX
//   XREF to: 030e56d8 (WRITE)
// 00553f95: ADD EBX,EAX
// 00553f97: MOV dword ptr [EBP + 0x20],EBX
//   XREF to: 030e56e0 (WRITE)
// 00553f9a: MOV ESI,dword ptr [EBP + 0x28]
//   XREF to: 030e56e8 (READ)
// 00553f9d: MOV EDI,dword ptr [EBP + 0x10]
//   XREF to: 030e56d0 (READ)
// 00553fa0: MOV EDX,dword ptr [EBP + 0x38]
//   XREF to: 030e56f8 (READ)
// 00553fa3: MOV ECX,dword ptr [EBP + 0x40]
//   XREF to: 030e5700 (READ)
// 00553fa6: MOV EAX,dword ptr [EBP + 0x2c]
//   XREF to: 030e56ec (READ)
// 00553fa9: MOV EBX,dword ptr [EBP + 0x30]
//   XREF to: 030e56f0 (READ)
// 00553fac: ADD ESI,EAX
// 00553fae: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: 030e56d4 (READ)
// 00553fb1: MOV dword ptr [EBP + 0x28],ESI
//   XREF to: 030e56e8 (WRITE)
// 00553fb4: MOV ESI,dword ptr [ESP + 0x50]
// 00553fb8: ADD EDI,EAX
// 00553fba: INC ESI
// 00553fbb: MOV EAX,dword ptr [EBP + 0x3c]
//   XREF to: 030e56fc (READ)
// 00553fbe: MOV dword ptr [EBP + 0x10],EDI
//   XREF to: 030e56d0 (WRITE)
// 00553fc1: ADD EDX,EAX
// 00553fc3: MOV EAX,dword ptr [EBP + 0x44]
//   XREF to: 030e5704 (READ)
// 00553fc6: MOV dword ptr [EBP + 0x38],EDX
//   XREF to: 030e56f8 (WRITE)
// 00553fc9: ADD ECX,EAX
// 00553fcb: MOV EAX,dword ptr [EBP + 0x34]
//   XREF to: 030e56f4 (READ)
// 00553fce: MOV dword ptr [EBP + 0x40],ECX
//   XREF to: 030e5700 (WRITE)
// 00553fd1: ADD EBX,EAX
// 00553fd3: MOV dword ptr [ESP + 0x50],ESI
// 00553fd7: MOV dword ptr [EBP + 0x30],EBX
//   XREF to: 030e56f0 (WRITE)
// 00553fda: JMP 0x00553e71
//   XREF to: 00553e71 (UNCONDITIONAL_JUMP)
// 00553fdf: MOV ESI,dword ptr [0x030e56b8]
//   Label: LAB_00553fdf
//   XREF to: 030e56b8 (READ)
// 00553fe5: INC ESI
// 00553fe6: MOV EAX,[0x02d052a4]
//   XREF to: 02d052a4 (READ)
// 00553feb: MOV dword ptr [0x030e56b8],ESI
//   XREF to: 030e56b8 (WRITE)
// 00553ff1: CMP EAX,0x6
// 00553ff4: JA 0x00553d60
//   XREF to: 00553d60 (CONDITIONAL_JUMP)
// 00553ffa: JMP dword ptr [EAX*0x4 + 0x553aec]
//   Label: switchD
//   XREF to: 00553c5d (COMPUTED_JUMP)
//   XREF to: 00553c93 (COMPUTED_JUMP)
//   XREF to: 00553cc9 (COMPUTED_JUMP)
//   XREF to: 00553cff (COMPUTED_JUMP)
//   XREF to: 00553d2e (COMPUTED_JUMP)
//   XREF to: 00553d60 (COMPUTED_JUMP)
//   XREF to: 00553aec (DATA)
// 00554001: MOV EBP,dword ptr [ESI + 0x14]
//   Label: LAB_00554001
//   XREF to: 00688028 (DATA)
// 00554004: CMP EBP,dword ptr [ECX + 0x14]
//   XREF to: 00688028 (DATA)
// 00554007: JLE 0x00554013
//   XREF to: 00554013 (CONDITIONAL_JUMP)
// 00554009: MOV EBX,ECX
// 0055400b: MOV EDI,ESI
// 0055400d: MOV ECX,EDX
// 0055400f: MOV EDX,EAX
// 00554011: MOV EAX,ECX
// 00554013: IMUL EBP,dword ptr [0x030e56bc],0x48
//   Label: LAB_00554013
//   XREF to: 030e56bc (READ)
// 0055401a: ADD EBP,0x30e56c0
//   XREF to: 030e56c0 (DATA)
// 00554020: MOV dword ptr [EBP],EDX
//   XREF to: 030e56c0 (WRITE)
// 00554023: MOV ECX,dword ptr [0x030e5b40]
//   XREF to: 030e5b40 (READ)
// 00554029: MOV dword ptr [EBP + 0x4],EAX
//   XREF to: 030e56c4 (WRITE)
// 0055402c: CMP EDX,ECX
// 0055402e: JGE 0x00554036
//   XREF to: 00554036 (CONDITIONAL_JUMP)
// 00554030: MOV dword ptr [0x030e5b40],EDX
//   XREF to: 030e5b40 (WRITE)
// 00554036: CMP EAX,dword ptr [0x030e5b44]
//   Label: LAB_00554036
//   XREF to: 030e5b44 (READ)
// 0055403c: JLE 0x00554043
//   XREF to: 00554043 (CONDITIONAL_JUMP)
// 0055403e: MOV [0x030e5b44],EAX
//   XREF to: 030e5b44 (WRITE)
// 00554043: MOV EAX,dword ptr [EBX + 0x14]
//   Label: LAB_00554043
//   XREF to: 00688028 (DATA)
// 00554046: MOV ECX,dword ptr [EDI + 0x14]
//   XREF to: 00688028 (DATA)
// 00554049: SUB ECX,EAX
// 0055404b: CMP ECX,0x10000
// 00554051: JNC 0x00554210
//   XREF to: 00554210 (CONDITIONAL_JUMP)
// 00554057: XOR ECX,ECX
// 00554059: MOV EAX,dword ptr [EDI + 0x10]
//   Label: LAB_00554059
//   XREF to: 00688024 (DATA)
// 0055405c: MOV EDX,dword ptr [EBX + 0x10]
//   XREF to: 00688024 (DATA)
// 0055405f: MOV ESI,dword ptr [EBX + 0x14]
//   XREF to: 00688028 (DATA)
// 00554062: SUB EAX,EDX
// 00554064: AND ESI,0xffff
// 0055406a: MOV EDX,EAX
// 0055406c: MOV EAX,ECX
// 0055406e: XOR SI,0xffff
// 00554072: IMUL EDX
// 00554074: SHRD EAX,EDX,0x10
// 00554078: MOV EDX,EAX
// 0055407a: MOV dword ptr [EBP + 0xc],EAX
//   XREF to: 030e56cc (WRITE)
// 0055407d: MOV EAX,ESI
// 0055407f: IMUL EDX
// 00554081: SHRD EAX,EDX,0x10
// 00554085: MOV dword ptr [ESP + 0x40],EAX
//   XREF to: Stack[-0x28] (WRITE)
// 00554089: MOV EDX,dword ptr [ESP + 0x40]
//   XREF to: Stack[-0x28] (READ)
// 0055408d: MOV EAX,dword ptr [EBX + 0x10]
//   XREF to: 00688024 (DATA)
// 00554090: ADD EAX,EDX
// 00554092: MOV dword ptr [EBP + 0x8],EAX
//   XREF to: 030e56c8 (WRITE)
// 00554095: MOV EAX,dword ptr [EDI + 0x18]
//   XREF to: 0068802c (DATA)
// 00554098: MOV EDX,dword ptr [EBX + 0x18]
//   XREF to: 0068802c (DATA)
// 0055409b: SUB EAX,EDX
// 0055409d: MOV EDX,EAX
// 0055409f: MOV EAX,ECX
// 005540a1: IMUL EDX
// 005540a3: SHRD EAX,EDX,0x10
// 005540a7: MOV EDX,EAX
// 005540a9: MOV dword ptr [EBP + 0x1c],EAX
//   XREF to: 030e56dc (WRITE)
// 005540ac: MOV EAX,ESI
// 005540ae: IMUL EDX
// 005540b0: SHRD EAX,EDX,0x10
// 005540b4: MOV dword ptr [ESP + 0x40],EAX
//   XREF to: Stack[-0x28] (WRITE)
// 005540b8: MOV EDX,dword ptr [ESP + 0x40]
//   XREF to: Stack[-0x28] (READ)
// 005540bc: MOV EAX,dword ptr [EBX + 0x18]
//   XREF to: 0068802c (DATA)
// 005540bf: ADD EAX,EDX
// 005540c1: MOV dword ptr [EBP + 0x18],EAX
//   XREF to: 030e56d8 (WRITE)
// 005540c4: MOV EAX,dword ptr [EDI + 0x1c]
//   XREF to: 00688030 (DATA)
// 005540c7: MOV EDX,dword ptr [EBX + 0x1c]
//   XREF to: 00688030 (DATA)
// 005540ca: SUB EAX,EDX
// 005540cc: MOV EDX,EAX
// 005540ce: MOV EAX,ECX
// 005540d0: IMUL EDX
// 005540d2: SHRD EAX,EDX,0x10
// 005540d6: MOV EDX,EAX
// 005540d8: MOV dword ptr [EBP + 0x24],EAX
//   XREF to: 030e56e4 (WRITE)
// 005540db: MOV EAX,ESI
// 005540dd: IMUL EDX
// 005540df: SHRD EAX,EDX,0x10
// 005540e3: MOV dword ptr [ESP + 0x40],EAX
//   XREF to: Stack[-0x28] (WRITE)
// 005540e7: MOV EDX,dword ptr [ESP + 0x40]
//   XREF to: Stack[-0x28] (READ)
// 005540eb: MOV EAX,dword ptr [EBX + 0x1c]
//   XREF to: 00688030 (DATA)
// 005540ee: ADD EAX,EDX
// 005540f0: MOV dword ptr [EBP + 0x20],EAX
//   XREF to: 030e56e0 (WRITE)
// 005540f3: MOV EAX,dword ptr [EDI + 0x20]
//   XREF to: 00688034 (DATA)
// 005540f6: MOV EDX,dword ptr [EBX + 0x20]
//   XREF to: 00688034 (DATA)
// 005540f9: SUB EAX,EDX
// 005540fb: MOV EDX,EAX
// 005540fd: MOV EAX,ECX
// 005540ff: IMUL EDX
// 00554101: SHRD EAX,EDX,0x10
// 00554105: MOV EDX,EAX
// 00554107: MOV dword ptr [EBP + 0x14],EAX
//   XREF to: 030e56d4 (WRITE)
// 0055410a: MOV EAX,ESI
// 0055410c: IMUL EDX
// 0055410e: SHRD EAX,EDX,0x10
// 00554112: MOV dword ptr [ESP + 0x40],EAX
//   XREF to: Stack[-0x28] (WRITE)
// 00554116: MOV EDX,dword ptr [ESP + 0x40]
//   XREF to: Stack[-0x28] (READ)
// 0055411a: MOV EAX,dword ptr [EBX + 0x20]
//   XREF to: 00688034 (DATA)
// 0055411d: ADD EAX,EDX
// 0055411f: MOV dword ptr [EBP + 0x10],EAX
//   XREF to: 030e56d0 (WRITE)
// 00554122: MOV EAX,dword ptr [EDI + 0x2c]
//   XREF to: 00688040 (DATA)
// 00554125: MOV EDX,dword ptr [EBX + 0x2c]
//   XREF to: 00688040 (DATA)
// 00554128: SUB EAX,EDX
// 0055412a: MOV EDX,EAX
// 0055412c: MOV EAX,ECX
// 0055412e: IMUL EDX
// 00554130: SHRD EAX,EDX,0x10
// 00554134: MOV EDX,EAX
// 00554136: MOV dword ptr [EBP + 0x34],EAX
//   XREF to: 030e56f4 (WRITE)
// 00554139: MOV EAX,ESI
// 0055413b: IMUL EDX
// 0055413d: SHRD EAX,EDX,0x10
// 00554141: MOV dword ptr [ESP + 0x40],EAX
//   XREF to: Stack[-0x28] (WRITE)
// 00554145: MOV EDX,dword ptr [ESP + 0x40]
//   XREF to: Stack[-0x28] (READ)
// 00554149: MOV EAX,dword ptr [EBX + 0x2c]
//   XREF to: 00688040 (DATA)
// 0055414c: ADD EAX,EDX
// 0055414e: MOV dword ptr [EBP + 0x30],EAX
//   XREF to: 030e56f0 (WRITE)
// 00554151: CMP dword ptr [0x02d052a4],0x1
//   XREF to: 02d052a4 (READ)
// 00554158: JNZ 0x0055422f
//   XREF to: 0055422f (CONDITIONAL_JUMP)
// 0055415e: CMP dword ptr [0x02d0529c],0x0
//   XREF to: 02d0529c (READ)
// 00554165: JZ 0x00554220
//   XREF to: 00554220 (CONDITIONAL_JUMP)
// 0055416b: MOV EAX,0x7fffffff
// 00554170: MOV EDX,dword ptr [EBX + 0x8]
//   XREF to: 0068801c (DATA)
// 00554173: SUB EAX,EDX
// 00554175: MOV dword ptr [ESP + 0x48],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 00554179: MOV EDX,dword ptr [EDI + 0x8]
//   XREF to: 0068801c (DATA)
// 0055417c: MOV EAX,0x7fffffff
// 00554181: SUB EAX,EDX
// 00554183: MOV EDX,dword ptr [ESP + 0x48]
//   Label: LAB_00554183
//   XREF to: Stack[-0x20] (READ)
// 00554187: SUB EAX,EDX
// 00554189: MOV dword ptr [ESP + 0x40],EAX
//   XREF to: Stack[-0x28] (WRITE)
// 0055418d: MOV EDX,dword ptr [ESP + 0x40]
//   XREF to: Stack[-0x28] (READ)
// 00554191: MOV EAX,ECX
// 00554193: IMUL EDX
// 00554195: SHRD EAX,EDX,0x10
// 00554199: MOV EDX,EAX
// 0055419b: MOV dword ptr [EBP + 0x2c],EAX
//   XREF to: 030e56ec (WRITE)
// 0055419e: MOV EAX,ESI
// 005541a0: IMUL EDX
// 005541a2: SHRD EAX,EDX,0x10
// 005541a6: MOV EDX,dword ptr [ESP + 0x48]
//   XREF to: Stack[-0x20] (READ)
// 005541aa: ADD EDX,EAX
// 005541ac: MOV dword ptr [EBP + 0x28],EDX
//   XREF to: 030e56e8 (WRITE)
// 005541af: MOV EAX,dword ptr [EDI + 0x24]
//   Label: LAB_005541af
//   XREF to: 00688038 (DATA)
// 005541b2: MOV EDX,dword ptr [EBX + 0x24]
//   XREF to: 00688038 (DATA)
// 005541b5: SUB EAX,EDX
// 005541b7: MOV EDX,EAX
// 005541b9: MOV EAX,ECX
// 005541bb: IMUL EDX
// 005541bd: SHRD EAX,EDX,0x10
// 005541c1: MOV EDX,EAX
// 005541c3: MOV dword ptr [EBP + 0x3c],EAX
//   XREF to: 030e56fc (WRITE)
// 005541c6: MOV EAX,ESI
// 005541c8: IMUL EDX
// 005541ca: SHRD EAX,EDX,0x10
// 005541ce: MOV dword ptr [ESP + 0x40],EAX
//   XREF to: Stack[-0x28] (WRITE)
// 005541d2: MOV EDX,dword ptr [ESP + 0x40]
//   XREF to: Stack[-0x28] (READ)
// 005541d6: MOV EAX,dword ptr [EBX + 0x24]
//   XREF to: 00688038 (DATA)
// 005541d9: ADD EAX,EDX
// 005541db: MOV dword ptr [EBP + 0x38],EAX
//   XREF to: 030e56f8 (WRITE)
// 005541de: MOV EDX,dword ptr [EDI + 0x28]
//   XREF to: 0068803c (DATA)
// 005541e1: MOV EDI,dword ptr [EBX + 0x28]
//   XREF to: 0068803c (DATA)
// 005541e4: MOV EAX,ECX
// 005541e6: SUB EDX,EDI
// 005541e8: IMUL EDX
// 005541ea: SHRD EAX,EDX,0x10
// 005541ee: MOV EDX,EAX
// 005541f0: MOV dword ptr [EBP + 0x44],EAX
//   XREF to: 030e5704 (WRITE)
// 005541f3: MOV EAX,ESI
// 005541f5: IMUL EDX
// 005541f7: SHRD EAX,EDX,0x10
// 005541fb: MOV EDX,EAX
// 005541fd: MOV EAX,dword ptr [EBX + 0x28]
//   XREF to: 0068803c (DATA)
// 00554200: ADD EAX,EDX
// 00554202: MOV dword ptr [EBP + 0x40],EAX
//   XREF to: 030e5700 (WRITE)
// 00554205: INC dword ptr [0x030e56bc]
//   XREF to: 030e56bc (READ_WRITE)
// 0055420b: JMP 0x00553dd2
//   XREF to: 00553dd2 (UNCONDITIONAL_JUMP)
// 00554210: MOV EAX,0xffffffff
//   Label: LAB_00554210
// 00554215: XOR EDX,EDX
// 00554217: DIV ECX
// 00554219: MOV ECX,EAX
// 0055421b: JMP 0x00554059
//   XREF to: 00554059 (UNCONDITIONAL_JUMP)
// 00554220: MOV EAX,dword ptr [EBX + 0xc]
//   Label: LAB_00554220
//   XREF to: 00688020 (DATA)
// 00554223: MOV dword ptr [ESP + 0x48],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 00554227: MOV EAX,dword ptr [EDI + 0xc]
//   XREF to: 00688020 (DATA)
// 0055422a: JMP 0x00554183
//   XREF to: 00554183 (UNCONDITIONAL_JUMP)
// 0055422f: MOV EAX,dword ptr [EDI + 0x8]
//   Label: LAB_0055422f
//   XREF to: 0068801c (DATA)
// 00554232: MOV EDX,dword ptr [EBX + 0x8]
//   XREF to: 0068801c (DATA)
// 00554235: SUB EAX,EDX
// 00554237: MOV EDX,EAX
// 00554239: MOV EAX,ECX
// 0055423b: IMUL EDX
// 0055423d: SHRD EAX,EDX,0x10
// 00554241: MOV EDX,EAX
// 00554243: MOV dword ptr [EBP + 0x2c],EAX
//   XREF to: 030e56ec (WRITE)
// 00554246: MOV EAX,ESI
// 00554248: IMUL EDX
// 0055424a: SHRD EAX,EDX,0x10
// 0055424e: MOV dword ptr [ESP + 0x40],EAX
//   XREF to: Stack[-0x28] (WRITE)
// 00554252: MOV EDX,dword ptr [ESP + 0x40]
//   XREF to: Stack[-0x28] (READ)
// 00554256: MOV EAX,dword ptr [EBX + 0x8]
//   XREF to: 0068801c (DATA)
// 00554259: ADD EAX,EDX
// 0055425b: MOV dword ptr [EBP + 0x28],EAX
//   XREF to: 030e56e8 (WRITE)
// 0055425e: JMP 0x005541af
//   XREF to: 005541af (UNCONDITIONAL_JUMP)
// 00554263: INC ECX
//   Label: LAB_00554263
// 00554264: ADD EAX,0x48
// 00554267: CMP ECX,EDX
// 00554269: JL 0x00553e0f
//   XREF to: 00553e0f (CONDITIONAL_JUMP)
// 0055426f: XOR EAX,EAX
//   Label: LAB_0055426f
// 00554271: JMP 0x00553e1f
//   XREF to: 00553e1f (UNCONDITIONAL_JUMP)
// 00554276: INC EDX
//   Label: LAB_00554276
// 00554277: ADD EAX,0x48
// 0055427a: CMP EDX,EBP
// 0055427c: JL 0x00553e4e
//   XREF to: 00553e4e (CONDITIONAL_JUMP)
// 00554282: XOR EAX,EAX
//   Label: LAB_00554282
// 00554284: JMP 0x00553e5e
//   XREF to: 00553e5e (UNCONDITIONAL_JUMP)
// 00554289: INC EDX
//   Label: LAB_00554289
// 0055428a: ADD EAX,0x48
// 0055428d: CMP EDX,EDI
// 0055428f: JL 0x00553ea3
//   XREF to: 00553ea3 (CONDITIONAL_JUMP)
// 00554295: XOR EAX,EAX
//   Label: LAB_00554295
// 00554297: JMP 0x00553eb3
//   XREF to: 00553eb3 (UNCONDITIONAL_JUMP)
// 0055429c: INC EDX
//   Label: LAB_0055429c
// 0055429d: ADD EAX,0x48
//   XREF to: 030e5708 (PARAM)
// 005542a0: CMP EDX,ESI
// 005542a2: JL 0x00553ef0
//   XREF to: 00553ef0 (CONDITIONAL_JUMP)
// 005542a8: XOR EAX,EAX
//   Label: LAB_005542a8
// 005542aa: JMP 0x00553f00
//   XREF to: 00553f00 (UNCONDITIONAL_JUMP)
