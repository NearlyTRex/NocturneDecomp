// Name: engine_prim.c_renderIndexedPolygonSoftware_FUN_00552a40
// Address: 00552a40
// Address Range: [[00552a40, 00552f62]]
// Convention: __cdecl
// Signature: void engine_prim.c_renderIndexedPolygonSoftware_FUN_00552a40(int * vertex_indices, int vertex_count)
// Cross-references:
//   engine_clipper.c_clipAndRasterize_FUN_004371b0 (004371b0) at 004371df [UNCONDITIONAL_CALL]
// Globals:
//   int g_MaxViewportScanline = 0x4b0
//   SRenderVertex[16] g_RenderVertexBuffer
//   undefined4 g_RenderVertexBuffer[0].projected_vertex.transformed_z
//   undefined4 g_RenderVertexBuffer[0].projected_vertex.inv_z
//   undefined4 g_RenderVertexBuffer[0].projected_vertex.screen_x
//   undefined4 g_RenderVertexBuffer[0].projected_vertex.screen_y
//   undefined4 g_RenderVertexBuffer[0].u
//   undefined4 g_RenderVertexBuffer[0].v
//   undefined4 g_RenderVertexBuffer[0].light
//   undefined4 g_RenderVertexBuffer[0].w_recip
//   int g_TexturesDisabled
//   int g_CullingMode
//   int g_UseExternalRenderer
//   int g_ProcessorType
//   int g_RenderStateFlags
//   int g_RenderStateFlag2
//   int g_SoftwareEdgeCount
//   SSoftwareEdge[16] g_SoftwareEdgeBuffer
//   undefined4 DAT_030e5230
//   undefined4 DAT_030e5234
//   undefined4 DAT_030e5238
//   undefined4 DAT_030e523c
//   undefined4 DAT_030e5240
//   undefined4 DAT_030e5244
//   undefined4 DAT_030e5248
//   undefined4 DAT_030e524c
//   undefined4 DAT_030e5250
//   undefined4 DAT_030e5254
//   undefined4 DAT_030e5258
//   undefined4 DAT_030e525c
//   undefined4 DAT_030e5260
//   int g_SoftwareMinScanline
//   int g_SoftwareMaxScanline
//   int g_RenderedTriangleCount
// Function calls:
//   engine_prim.c_calculateTriangleWindingOrder_FUN_00552150
//   engine_prim.c_findEdgeInBuffer_FUN_00551f70
//   wincore_windll.cpp_drawPolygon2_FUN_005b7610
//   wincore_windll.cpp_renderScanline_FUN_005b5710

#include "nocturne.h"

void __cdecl
engine_prim_c_renderIndexedPolygonSoftware_FUN_00552a40(int *vertex_indices,int vertex_count)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  SSoftwareEdge *edge_ptr;
  SSoftwareEdge *edge_ptr_00;
  int iVar4;
  int iVar5;
  uint uVar6;
  SRenderVertex *pSVar7;
  BADSPACEBASE *in_ESP;
  int iVar8;
  uint uVar9;
  int iVar10;
  SRenderVertex *pSVar11;
  bool bVar12;
  int in_stack_0000000c;
  int in_stack_00000010;
  int in_stack_00000014;
  void *in_stack_ffffffa8;
  void *in_stack_ffffffac;
  int in_stack_ffffffb0;
  int *local_1c;
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
      iVar8 = 0;
      iVar10 = 0;
      if (0 < iVar3) {
        do {
          iVar2 = engine_prim_c_calculateTriangleWindingOrder_FUN_00552150
                            (g_RenderVertexBuffer + *vertex_indices,
                             g_RenderVertexBuffer + vertex_indices[1],
                             g_RenderVertexBuffer + vertex_indices[2]);
          if (iVar2 == 0) {
            iVar10 = iVar10 + 1;
          }
          iVar8 = iVar8 + 1;
          vertex_indices = vertex_indices + 1;
        } while (iVar8 < iVar3);
      }
      if (iVar10 == iVar3) {
        return;
      }
    }
  }
  if ((g_UseExternalRenderer == 0) || (g_TexturesDisabled != 0)) {
    g_SoftwareMaxScanline = 0;
    g_SoftwareEdgeCount = 0;
    local_18 = 0;
    g_RenderedTriangleCount = g_RenderedTriangleCount + 1;
    g_SoftwareMinScanline = 0x4b0;
    if (0 < in_stack_0000000c) {
      local_1c = (int *)vertex_count;
      do {
        iVar3 = g_SoftwareEdgeCount;
        iVar8 = local_18 + 1;
        if (in_stack_0000000c <= iVar8) {
          iVar8 = 0;
        }
        iVar10 = *local_1c;
        iVar8 = *(int *)(iVar8 * 4 + vertex_count);
        iVar4 = g_RenderVertexBuffer[iVar10].projected_vertex.screen_y >> 0x10;
        iVar2 = g_RenderVertexBuffer[iVar8].projected_vertex.screen_y >> 0x10;
        if (iVar4 != iVar2) {
          iVar5 = iVar4;
          pSVar7 = g_RenderVertexBuffer + iVar10;
          pSVar11 = g_RenderVertexBuffer + iVar8;
          if (g_RenderVertexBuffer[iVar8].projected_vertex.screen_y <
              g_RenderVertexBuffer[iVar10].projected_vertex.screen_y) {
            iVar5 = iVar2;
            pSVar7 = g_RenderVertexBuffer + iVar8;
            iVar2 = iVar4;
            pSVar11 = g_RenderVertexBuffer + iVar10;
          }
          g_SoftwareEdgeBuffer[g_SoftwareEdgeCount].y_min = iVar5;
          iVar8 = g_SoftwareMinScanline;
          g_SoftwareEdgeBuffer[iVar3].y_max = iVar2;
          if (iVar5 < iVar8) {
            g_SoftwareMinScanline = iVar5;
          }
          if (g_SoftwareMaxScanline < iVar2) {
            g_SoftwareMaxScanline = iVar2;
          }
          uVar6 = (pSVar11->projected_vertex).screen_y - (pSVar7->projected_vertex).screen_y;
          if (uVar6 < 0x10000) {
            iVar8 = 0;
          }
          else {
            iVar8 = (int)(0xffffffff / (ulonglong)uVar6);
          }
          uVar9 = (uint)(ushort)((ushort)(pSVar7->projected_vertex).screen_y ^ 0xffff);
          lVar1 = (longlong)iVar8 *
                  (longlong)
                  ((pSVar11->projected_vertex).screen_x - (pSVar7->projected_vertex).screen_x);
          uVar6 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
          g_SoftwareEdgeBuffer[iVar3].x_gradient = uVar6;
          lVar1 = (longlong)(int)uVar9 * (longlong)(int)uVar6;
          g_SoftwareEdgeBuffer[iVar3].x_current =
               (pSVar7->projected_vertex).screen_x +
               ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
          lVar1 = (longlong)iVar8 * (longlong)((int)pSVar11->u - (int)pSVar7->u);
          uVar6 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
          g_SoftwareEdgeBuffer[iVar3].u_gradient = uVar6;
          lVar1 = (longlong)(int)uVar9 * (longlong)(int)uVar6;
          g_SoftwareEdgeBuffer[iVar3].u_current =
               (int)pSVar7->u + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
          lVar1 = (longlong)iVar8 * (longlong)((int)pSVar11->v - (int)pSVar7->v);
          uVar6 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
          g_SoftwareEdgeBuffer[iVar3].v_gradient = uVar6;
          lVar1 = (longlong)(int)uVar9 * (longlong)(int)uVar6;
          g_SoftwareEdgeBuffer[iVar3].v_current =
               (int)pSVar7->v + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
          lVar1 = (longlong)iVar8 * (longlong)((int)pSVar11->light - (int)pSVar7->light);
          uVar6 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
          g_SoftwareEdgeBuffer[iVar3].z_gradient = uVar6;
          lVar1 = (longlong)(int)uVar9 * (longlong)(int)uVar6;
          g_SoftwareEdgeBuffer[iVar3].z_current =
               (int)pSVar7->light + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
          lVar1 = (longlong)iVar8 * (longlong)((int)pSVar11->w_recip - (int)pSVar7->w_recip);
          uVar6 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
          g_SoftwareEdgeBuffer[iVar3].fog_gradient = uVar6;
          lVar1 = (longlong)(int)uVar9 * (longlong)(int)uVar6;
          g_SoftwareEdgeBuffer[iVar3].fog_current =
               (int)pSVar7->w_recip +
               ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
          if (g_RenderStateFlag2 == 1) {
            if (g_ProcessorType == 0) {
              iVar10 = (pSVar11->projected_vertex).inv_z;
              iVar2 = (pSVar7->projected_vertex).inv_z;
            }
            else {
              iVar2 = 0x7fffffff - (pSVar7->projected_vertex).transformed_z;
              iVar10 = 0x7fffffff - (pSVar11->projected_vertex).transformed_z;
            }
            lVar1 = (longlong)iVar8 * (longlong)(iVar10 - iVar2);
            uVar6 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
            g_SoftwareEdgeBuffer[iVar3].w_gradient = uVar6;
            lVar1 = (longlong)(int)uVar9 * (longlong)(int)uVar6;
            g_SoftwareEdgeBuffer[iVar3].w_current =
                 iVar2 + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
            g_SoftwareEdgeCount = g_SoftwareEdgeCount + 1;
          }
          else {
            lVar1 = (longlong)iVar8 *
                    (longlong)
                    ((pSVar11->projected_vertex).transformed_z -
                    (pSVar7->projected_vertex).transformed_z);
            uVar6 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
            g_SoftwareEdgeBuffer[iVar3].w_gradient = uVar6;
            lVar1 = (longlong)(int)uVar9 * (longlong)(int)uVar6;
            g_SoftwareEdgeBuffer[iVar3].w_current =
                 (pSVar7->projected_vertex).transformed_z +
                 ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
            g_SoftwareEdgeCount = g_SoftwareEdgeCount + 1;
          }
        }
        local_1c = local_1c + 1;
        local_18 = local_18 + 1;
      } while (local_18 < in_stack_0000000c);
    }
    edge_ptr = engine_prim_c_findEdgeInBuffer_FUN_00551f70
                         (g_SoftwareMinScanline,(SSoftwareEdge *)0x0);
    if ((edge_ptr != (SSoftwareEdge *)0x0) &&
       (edge_ptr_00 = engine_prim_c_findEdgeInBuffer_FUN_00551f70(g_SoftwareMinScanline,edge_ptr),
       iVar3 = g_SoftwareMinScanline, edge_ptr_00 != (SSoftwareEdge *)0x0)) {
      iVar8 = g_SoftwareMinScanline - g_MaxViewportScanline;
      bVar12 = SBORROW4(g_SoftwareMinScanline,g_MaxViewportScanline);
      while (bVar12 != iVar8 < 0) {
        if (edge_ptr->y_max <= iVar3) {
          edge_ptr->y_min = -1;
          edge_ptr = engine_prim_c_findEdgeInBuffer_FUN_00551f70(iVar3,edge_ptr_00);
          if (edge_ptr == (SSoftwareEdge *)0x0) {
            return;
          }
        }
        if (edge_ptr_00->y_max <= iVar3) {
          edge_ptr_00->y_min = -1;
          edge_ptr_00 = engine_prim_c_findEdgeInBuffer_FUN_00551f70(iVar3,edge_ptr);
          if (edge_ptr_00 == (SSoftwareEdge *)0x0) {
            return;
          }
        }
        wincore_windll_cpp_renderScanline_FUN_005b5710
                  (in_stack_ffffffa8,in_stack_ffffffac,in_stack_ffffffb0);
        edge_ptr->x_current = edge_ptr->x_current + edge_ptr->x_gradient;
        edge_ptr->u_current = edge_ptr->u_current + edge_ptr->u_gradient;
        edge_ptr->v_current = edge_ptr->v_current + edge_ptr->v_gradient;
        edge_ptr->z_current = edge_ptr->z_current + edge_ptr->z_gradient;
        edge_ptr->w_current = edge_ptr->w_current + edge_ptr->w_gradient;
        edge_ptr->fog_current = edge_ptr->fog_current + edge_ptr->fog_gradient;
        *(int *)(in_stack_00000014 + 8) =
             *(int *)(in_stack_00000014 + 8) + *(int *)(in_stack_00000014 + 0xc);
        *(int *)(in_stack_00000014 + 0x18) =
             *(int *)(in_stack_00000014 + 0x18) + *(int *)(in_stack_00000014 + 0x1c);
        *(int *)(in_stack_00000014 + 0x20) =
             *(int *)(in_stack_00000014 + 0x20) + *(int *)(in_stack_00000014 + 0x24);
        *(int *)(in_stack_00000014 + 0x10) =
             *(int *)(in_stack_00000014 + 0x10) + *(int *)(in_stack_00000014 + 0x14);
        *(int *)(in_stack_00000014 + 0x28) =
             *(int *)(in_stack_00000014 + 0x28) + *(int *)(in_stack_00000014 + 0x2c);
        in_stack_00000010 = in_stack_00000010 + 1;
        *(int *)(in_stack_00000014 + 0x30) =
             *(int *)(in_stack_00000014 + 0x30) + *(int *)(in_stack_00000014 + 0x34);
        iVar8 = in_stack_00000010 - g_MaxViewportScanline;
        bVar12 = SBORROW4(in_stack_00000010,g_MaxViewportScanline);
      }
    }
  }
  else {
    iVar3 = 0;
    if (0 < in_stack_0000000c) {
      do {
        iVar8 = *(int *)vertex_count;
        iVar3 = iVar3 + 1;
        vertex_count = vertex_count + 4;
        *(SRenderVertex **)(&stack0xffffff9c + iVar3 * 4) = g_RenderVertexBuffer + iVar8;
      } while (iVar3 < in_stack_0000000c);
    }
    g_RenderedTriangleCount = g_RenderedTriangleCount + in_stack_0000000c + -2;
    wincore_windll_cpp_drawPolygon2_FUN_005b7610
              ((SRenderVertex **)&stack0xffffffa0,in_stack_0000000c,g_RenderStateFlags);
  }
  return;
}


// Assembly code:
// 00552a40: PUSH EBX
//   Label: engine_prim.c_renderIndexedPolygonSoftware_FUN_00552a40
// 00552a41: PUSH ESI
// 00552a42: PUSH EDI
// 00552a43: PUSH EBP
// 00552a44: SUB ESP,0x54
// 00552a47: CMP dword ptr [0x00772a7c],0x0
//   XREF to: 00772a7c (READ)
// 00552a4e: JZ 0x00552aad
//   XREF to: 00552aad (CONDITIONAL_JUMP)
// 00552a50: MOV ECX,dword ptr [ESP + 0x6c]
//   XREF to: Stack[0x8] (READ)
// 00552a54: CMP ECX,0x3
// 00552a57: JLE 0x00552b2c
//   XREF to: 00552b2c (CONDITIONAL_JUMP)
// 00552a5d: MOV EBX,dword ptr [ESP + 0x68]
//   XREF to: Stack[0x4] (READ)
// 00552a61: LEA EBP,[ECX + -0x2]
// 00552a64: XOR ESI,ESI
// 00552a66: XOR EDI,EDI
// 00552a68: TEST EBP,EBP
// 00552a6a: JLE 0x00552aa5
//   XREF to: 00552aa5 (CONDITIONAL_JUMP)
// 00552a6c: IMUL EAX,dword ptr [EBX + 0x8],0x30
//   Label: LAB_00552a6c
// 00552a70: ADD EAX,0x688014
//   XREF to: 00688014 (DATA)
// 00552a75: MOV ECX,dword ptr [EBX + 0x4]
// 00552a78: PUSH EAX
// 00552a79: IMUL EAX,ECX,0x30
// 00552a7c: ADD EAX,0x688014
//   XREF to: 00688014 (DATA)
// 00552a81: MOV EDX,dword ptr [EBX]
// 00552a83: PUSH EAX
// 00552a84: IMUL EAX,EDX,0x30
// 00552a87: ADD EAX,0x688014
//   XREF to: 00688014 (DATA)
// 00552a8c: PUSH EAX
// 00552a8d: CALL engine_prim.c_calculateTriangleWindingOrder_FUN_00552150
//   XREF to: 00552150 (UNCONDITIONAL_CALL)
// 00552a92: ADD ESP,0xc
// 00552a95: TEST EAX,EAX
// 00552a97: JZ 0x00552b26
//   XREF to: 00552b26 (CONDITIONAL_JUMP)
// 00552a9d: INC ESI
//   Label: LAB_00552a9d
// 00552a9e: ADD EBX,0x4
// 00552aa1: CMP ESI,EBP
// 00552aa3: JL 0x00552a6c
//   XREF to: 00552a6c (CONDITIONAL_JUMP)
// 00552aa5: CMP EDI,EBP
//   Label: LAB_00552aa5
// 00552aa7: JZ 0x00552b1e
//   XREF to: 00552b1e (CONDITIONAL_JUMP)
// 00552aad: CMP dword ptr [0x02d03e94],0x0
//   Label: LAB_00552aad
//   XREF to: 02d03e94 (READ)
// 00552ab4: JZ 0x00552b8e
//   XREF to: 00552b8e (CONDITIONAL_JUMP)
// 00552aba: CMP dword ptr [0x00772a74],0x0
//   XREF to: 00772a74 (READ)
// 00552ac1: JNZ 0x00552b8e
//   XREF to: 00552b8e (CONDITIONAL_JUMP)
// 00552ac7: MOV EBX,dword ptr [ESP + 0x6c]
//   XREF to: Stack[0x8] (READ)
// 00552acb: XOR EAX,EAX
// 00552acd: TEST EBX,EBX
// 00552acf: JLE 0x00552af0
//   XREF to: 00552af0 (CONDITIONAL_JUMP)
// 00552ad1: MOV ECX,dword ptr [ESP + 0x68]
//   XREF to: Stack[0x4] (READ)
// 00552ad5: MOV ESI,dword ptr [ESP + 0x6c]
//   XREF to: Stack[0x8] (READ)
// 00552ad9: IMUL EDX,dword ptr [ECX],0x30
//   Label: LAB_00552ad9
// 00552adc: INC EAX
// 00552add: ADD EDX,0x688014
//   XREF to: 00688014 (DATA)
// 00552ae3: ADD ECX,0x4
// 00552ae6: MOV dword ptr [ESP + EAX*0x4 + -0x4],EDX
//   XREF to: Stack[-0x64] (DATA)
// 00552aea: CMP EAX,ESI
// 00552aec: JL 0x00552ad9
//   XREF to: 00552ad9 (CONDITIONAL_JUMP)
// 00552aee: MOV EAX,EAX
// 00552af0: MOV EAX,dword ptr [ESP + 0x6c]
//   Label: LAB_00552af0
//   XREF to: Stack[0x8] (READ)
// 00552af4: MOV EDI,dword ptr [0x030e56b8]
//   XREF to: 030e56b8 (READ)
// 00552afa: MOV EBP,dword ptr [0x02d052a0]
//   XREF to: 02d052a0 (READ)
// 00552b00: SUB EAX,0x2
// 00552b03: PUSH EBP
// 00552b04: ADD EDI,EAX
// 00552b06: MOV EAX,dword ptr [ESP + 0x70]
//   XREF to: Stack[0x8] (READ)
// 00552b0a: PUSH EAX
// 00552b0b: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x64] (DATA)
// 00552b0f: PUSH EAX
// 00552b10: MOV dword ptr [0x030e56b8],EDI
//   XREF to: 030e56b8 (WRITE)
// 00552b16: CALL wincore_windll.cpp_drawPolygon2_FUN_005b7610
//   XREF to: 005b7610 (UNCONDITIONAL_CALL)
// 00552b1b: ADD ESP,0xc
// 00552b1e: ADD ESP,0x54
//   Label: LAB_00552b1e
// 00552b21: POP EBP
// 00552b22: POP EDI
// 00552b23: POP ESI
// 00552b24: POP EBX
// 00552b25: RET
// 00552b26: INC EDI
//   Label: LAB_00552b26
// 00552b27: JMP 0x00552a9d
//   XREF to: 00552a9d (UNCONDITIONAL_JUMP)
// 00552b2c: MOV EDX,dword ptr [ESP + 0x68]
//   Label: LAB_00552b2c
//   XREF to: Stack[0x4] (READ)
// 00552b30: MOV EDX,dword ptr [EDX + 0x8]
// 00552b33: LEA EAX,[EDX*0x4 + 0x0]
// 00552b3a: SUB EAX,EDX
// 00552b3c: SHL EAX,0x4
// 00552b3f: MOV EDX,dword ptr [ESP + 0x68]
//   XREF to: Stack[0x4] (READ)
// 00552b43: ADD EAX,0x688014
//   XREF to: 00688014 (DATA)
// 00552b48: MOV EDX,dword ptr [EDX + 0x4]
// 00552b4b: PUSH EAX
// 00552b4c: LEA EAX,[EDX*0x4 + 0x0]
// 00552b53: SUB EAX,EDX
// 00552b55: SHL EAX,0x4
// 00552b58: MOV EDX,dword ptr [ESP + 0x6c]
//   XREF to: Stack[0x4] (READ)
// 00552b5c: ADD EAX,0x688014
//   XREF to: 00688014 (DATA)
// 00552b61: MOV EDX,dword ptr [EDX]
// 00552b63: PUSH EAX
// 00552b64: LEA EAX,[EDX*0x4 + 0x0]
// 00552b6b: SUB EAX,EDX
// 00552b6d: SHL EAX,0x4
// 00552b70: ADD EAX,0x688014
//   XREF to: 00688014 (DATA)
// 00552b75: PUSH EAX
// 00552b76: CALL engine_prim.c_calculateTriangleWindingOrder_FUN_00552150
//   XREF to: 00552150 (UNCONDITIONAL_CALL)
// 00552b7b: ADD ESP,0xc
// 00552b7e: TEST EAX,EAX
// 00552b80: JNZ 0x00552aad
//   XREF to: 00552aad (CONDITIONAL_JUMP)
// 00552b86: ADD ESP,0x54
// 00552b89: POP EBP
// 00552b8a: POP EDI
// 00552b8b: POP ESI
// 00552b8c: POP EBX
// 00552b8d: RET
// 00552b8e: MOV ESI,0x4b0
//   Label: LAB_00552b8e
// 00552b93: MOV ECX,dword ptr [ESP + 0x6c]
//   XREF to: Stack[0x8] (READ)
// 00552b97: XOR EDI,EDI
// 00552b99: MOV EDX,dword ptr [0x030e56b8]
//   XREF to: 030e56b8 (READ)
// 00552b9f: MOV dword ptr [0x030e56b0],EDI
//   XREF to: 030e56b0 (WRITE)
// 00552ba5: MOV dword ptr [0x030e5228],EDI
//   XREF to: 030e5228 (WRITE)
// 00552bab: MOV dword ptr [ESP + 0x48],EDI
//   XREF to: Stack[-0x1c] (WRITE)
// 00552baf: INC EDX
// 00552bb0: MOV dword ptr [0x030e56ac],ESI
//   XREF to: 030e56ac (WRITE)
// 00552bb6: MOV dword ptr [0x030e56b8],EDX
//   XREF to: 030e56b8 (WRITE)
// 00552bbc: TEST ECX,ECX
// 00552bbe: JLE 0x00552c29
//   XREF to: 00552c29 (CONDITIONAL_JUMP)
// 00552bc0: MOV EAX,dword ptr [ESP + 0x68]
//   XREF to: Stack[0x4] (READ)
// 00552bc4: MOV dword ptr [ESP + 0x44],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 00552bc8: MOV EAX,dword ptr [ESP + 0x48]
//   Label: LAB_00552bc8
//   XREF to: Stack[-0x1c] (READ)
// 00552bcc: MOV EBX,dword ptr [ESP + 0x6c]
//   XREF to: Stack[0x8] (READ)
// 00552bd0: INC EAX
// 00552bd1: CMP EAX,EBX
// 00552bd3: JL 0x00552bd7
//   XREF to: 00552bd7 (CONDITIONAL_JUMP)
// 00552bd5: XOR EAX,EAX
// 00552bd7: MOV EDX,dword ptr [ESP + 0x44]
//   Label: LAB_00552bd7
//   XREF to: Stack[-0x20] (READ)
// 00552bdb: IMUL EBP,dword ptr [EDX],0x30
// 00552bde: MOV ESI,dword ptr [ESP + 0x68]
//   XREF to: Stack[0x4] (READ)
// 00552be2: SHL EAX,0x2
// 00552be5: ADD EAX,ESI
// 00552be7: IMUL EAX,dword ptr [EAX],0x30
// 00552bea: ADD EBP,0x688014
//   XREF to: 00688014 (DATA)
// 00552bf0: ADD EAX,0x688014
//   XREF to: 00688014 (DATA)
// 00552bf5: MOV EBX,EBP
// 00552bf7: MOV ECX,dword ptr [EBP + 0x14]
//   XREF to: 00688028 (DATA)
// 00552bfa: MOV ESI,dword ptr [EAX + 0x14]
//   XREF to: 00688028 (DATA)
// 00552bfd: SAR ECX,0x10
// 00552c00: SAR ESI,0x10
// 00552c03: MOV EDI,EAX
// 00552c05: CMP ECX,ESI
// 00552c07: JNZ 0x00552d58
//   XREF to: 00552d58 (CONDITIONAL_JUMP)
// 00552c0d: MOV ESI,dword ptr [ESP + 0x44]
//   Label: LAB_00552c0d
//   XREF to: Stack[-0x20] (READ)
// 00552c11: MOV EDI,dword ptr [ESP + 0x48]
//   XREF to: Stack[-0x1c] (READ)
// 00552c15: MOV EBP,dword ptr [ESP + 0x6c]
//   XREF to: Stack[0x8] (READ)
// 00552c19: ADD ESI,0x4
// 00552c1c: INC EDI
// 00552c1d: MOV dword ptr [ESP + 0x44],ESI
//   XREF to: Stack[-0x20] (WRITE)
// 00552c21: MOV dword ptr [ESP + 0x48],EDI
//   XREF to: Stack[-0x1c] (WRITE)
// 00552c25: CMP EDI,EBP
// 00552c27: JL 0x00552bc8
//   XREF to: 00552bc8 (CONDITIONAL_JUMP)
// 00552c29: PUSH 0x0
//   Label: LAB_00552c29
// 00552c2b: MOV EAX,[0x030e56ac]
//   XREF to: 030e56ac (READ)
// 00552c30: PUSH EAX
// 00552c31: CALL engine_prim.c_findEdgeInBuffer_FUN_00551f70
//   XREF to: 00551f70 (UNCONDITIONAL_CALL)
// 00552c36: ADD ESP,0x8
// 00552c39: MOV EBP,EAX
// 00552c3b: TEST EAX,EAX
// 00552c3d: JZ 0x00552b1e
//   XREF to: 00552b1e (CONDITIONAL_JUMP)
// 00552c43: PUSH EAX
// 00552c44: MOV EDX,dword ptr [0x030e56ac]
//   XREF to: 030e56ac (READ)
// 00552c4a: PUSH EDX
// 00552c4b: CALL engine_prim.c_findEdgeInBuffer_FUN_00551f70
//   XREF to: 00551f70 (UNCONDITIONAL_CALL)
// 00552c50: ADD ESP,0x8
// 00552c53: MOV dword ptr [ESP + 0x50],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 00552c57: TEST EAX,EAX
// 00552c59: JZ 0x00552b1e
//   XREF to: 00552b1e (CONDITIONAL_JUMP)
// 00552c5f: MOV EAX,[0x030e56ac]
//   XREF to: 030e56ac (READ)
// 00552c64: MOV ECX,dword ptr [0x00680cf4]
//   XREF to: 00680cf4 (READ)
// 00552c6a: MOV dword ptr [ESP + 0x4c],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 00552c6e: CMP EAX,ECX
// 00552c70: JGE 0x00552b1e
//   Label: LAB_00552c70
//   XREF to: 00552b1e (CONDITIONAL_JUMP)
// 00552c76: MOV EAX,dword ptr [ESP + 0x4c]
//   XREF to: Stack[-0x18] (READ)
// 00552c7a: CMP EAX,dword ptr [EBP + 0x4]
// 00552c7d: JGE 0x00552f3f
//   XREF to: 00552f3f (CONDITIONAL_JUMP)
// 00552c83: MOV EDX,dword ptr [ESP + 0x50]
//   Label: LAB_00552c83
//   XREF to: Stack[-0x14] (READ)
// 00552c87: MOV EAX,dword ptr [ESP + 0x4c]
//   XREF to: Stack[-0x18] (READ)
// 00552c8b: CMP EAX,dword ptr [EDX + 0x4]
// 00552c8e: JL 0x00552cac
//   XREF to: 00552cac (CONDITIONAL_JUMP)
// 00552c90: PUSH EBP
// 00552c91: PUSH EAX
// 00552c92: MOV dword ptr [EDX],0xffffffff
// 00552c98: CALL engine_prim.c_findEdgeInBuffer_FUN_00551f70
//   XREF to: 00551f70 (UNCONDITIONAL_CALL)
// 00552c9d: ADD ESP,0x8
// 00552ca0: MOV dword ptr [ESP + 0x50],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 00552ca4: TEST EAX,EAX
// 00552ca6: JZ 0x00552b1e
//   XREF to: 00552b1e (CONDITIONAL_JUMP)
// 00552cac: MOV EDI,dword ptr [ESP + 0x50]
//   Label: LAB_00552cac
//   XREF to: Stack[-0x14] (READ)
// 00552cb0: MOV EBX,dword ptr [ESP + 0x4c]
//   XREF to: Stack[-0x18] (READ)
// 00552cb4: MOV ESI,EBP
// 00552cb6: CALL wincore_windll.cpp_renderScanline_FUN_005b5710
//   XREF to: 005b5710 (UNCONDITIONAL_CALL)
// 00552cbb: MOV EAX,dword ptr [EBP + 0xc]
// 00552cbe: ADD dword ptr [EBP + 0x8],EAX
// 00552cc1: MOV EBX,dword ptr [EBP + 0x18]
// 00552cc4: MOV ESI,dword ptr [EBP + 0x20]
// 00552cc7: MOV EDI,dword ptr [EBP + 0x10]
// 00552cca: MOV EDX,dword ptr [EBP + 0x28]
// 00552ccd: MOV EAX,dword ptr [EBP + 0x1c]
// 00552cd0: MOV ECX,dword ptr [EBP + 0x30]
// 00552cd3: ADD EBX,EAX
// 00552cd5: MOV EAX,dword ptr [EBP + 0x24]
// 00552cd8: MOV dword ptr [EBP + 0x18],EBX
// 00552cdb: ADD ESI,EAX
// 00552cdd: MOV EAX,dword ptr [EBP + 0x14]
// 00552ce0: MOV dword ptr [EBP + 0x20],ESI
// 00552ce3: ADD EDI,EAX
// 00552ce5: MOV EAX,dword ptr [EBP + 0x2c]
// 00552ce8: MOV dword ptr [EBP + 0x10],EDI
// 00552ceb: ADD EDX,EAX
// 00552ced: MOV EAX,dword ptr [EBP + 0x34]
// 00552cf0: MOV dword ptr [EBP + 0x28],EDX
// 00552cf3: ADD ECX,EAX
// 00552cf5: MOV EAX,dword ptr [ESP + 0x50]
// 00552cf9: MOV dword ptr [EBP + 0x30],ECX
// 00552cfc: MOV EDX,dword ptr [ESP + 0x50]
// 00552d00: MOV EAX,dword ptr [EAX + 0xc]
// 00552d03: MOV EBX,dword ptr [EDX + 0x8]
// 00552d06: MOV ESI,dword ptr [EDX + 0x18]
// 00552d09: ADD EBX,EAX
// 00552d0b: MOV EAX,dword ptr [EDX + 0x1c]
// 00552d0e: MOV dword ptr [EDX + 0x8],EBX
// 00552d11: ADD ESI,EAX
// 00552d13: MOV dword ptr [EDX + 0x18],ESI
// 00552d16: MOV EDI,dword ptr [EDX + 0x20]
// 00552d19: MOV ECX,dword ptr [EDX + 0x10]
// 00552d1c: MOV EBX,dword ptr [EDX + 0x28]
// 00552d1f: MOV EAX,dword ptr [EDX + 0x24]
// 00552d22: MOV ESI,dword ptr [EDX + 0x30]
// 00552d25: ADD EDI,EAX
// 00552d27: MOV EAX,dword ptr [EDX + 0x14]
// 00552d2a: MOV dword ptr [EDX + 0x20],EDI
// 00552d2d: MOV EDI,dword ptr [ESP + 0x4c]
// 00552d31: ADD ECX,EAX
// 00552d33: MOV EAX,dword ptr [EDX + 0x2c]
// 00552d36: MOV dword ptr [EDX + 0x10],ECX
// 00552d39: ADD EBX,EAX
// 00552d3b: MOV EAX,dword ptr [EDX + 0x34]
// 00552d3e: MOV dword ptr [EDX + 0x28],EBX
// 00552d41: ADD ESI,EAX
// 00552d43: INC EDI
// 00552d44: MOV dword ptr [EDX + 0x30],ESI
// 00552d47: MOV EDX,dword ptr [0x00680cf4]
//   XREF to: 00680cf4 (READ)
// 00552d4d: MOV dword ptr [ESP + 0x4c],EDI
// 00552d51: CMP EDI,EDX
// 00552d53: JMP 0x00552c70
//   XREF to: 00552c70 (UNCONDITIONAL_JUMP)
// 00552d58: MOV EDX,dword ptr [EBP + 0x14]
//   Label: LAB_00552d58
//   XREF to: 00688028 (DATA)
// 00552d5b: CMP EDX,dword ptr [EAX + 0x14]
//   XREF to: 00688028 (DATA)
// 00552d5e: JLE 0x00552d6a
//   XREF to: 00552d6a (CONDITIONAL_JUMP)
// 00552d60: MOV EBX,EAX
// 00552d62: MOV EDI,EBP
// 00552d64: MOV EAX,ECX
// 00552d66: MOV ECX,ESI
// 00552d68: MOV ESI,EAX
// 00552d6a: IMUL EBP,dword ptr [0x030e5228],0x48
//   Label: LAB_00552d6a
//   XREF to: 030e5228 (READ)
// 00552d71: ADD EBP,0x30e522c
//   XREF to: 030e522c (DATA)
// 00552d77: MOV dword ptr [EBP],ECX
//   XREF to: 030e522c (WRITE)
// 00552d7a: MOV EDX,dword ptr [0x030e56ac]
//   XREF to: 030e56ac (READ)
// 00552d80: MOV dword ptr [EBP + 0x4],ESI
//   XREF to: 030e5230 (WRITE)
// 00552d83: CMP ECX,EDX
// 00552d85: JGE 0x00552d8d
//   XREF to: 00552d8d (CONDITIONAL_JUMP)
// 00552d87: MOV dword ptr [0x030e56ac],ECX
//   XREF to: 030e56ac (WRITE)
// 00552d8d: CMP ESI,dword ptr [0x030e56b0]
//   Label: LAB_00552d8d
//   XREF to: 030e56b0 (READ)
// 00552d93: JLE 0x00552d9b
//   XREF to: 00552d9b (CONDITIONAL_JUMP)
// 00552d95: MOV dword ptr [0x030e56b0],ESI
//   XREF to: 030e56b0 (WRITE)
// 00552d9b: MOV ESI,dword ptr [EBX + 0x14]
//   Label: LAB_00552d9b
//   XREF to: 00688028 (DATA)
// 00552d9e: MOV ECX,dword ptr [EDI + 0x14]
//   XREF to: 00688028 (DATA)
// 00552da1: SUB ECX,ESI
// 00552da3: CMP ECX,0x10000
// 00552da9: JNC 0x00552ef3
//   XREF to: 00552ef3 (CONDITIONAL_JUMP)
// 00552daf: XOR ECX,ECX
// 00552db1: MOV EAX,dword ptr [EDI + 0x10]
//   Label: LAB_00552db1
//   XREF to: 00688024 (DATA)
// 00552db4: MOV EDX,dword ptr [EBX + 0x10]
//   XREF to: 00688024 (DATA)
// 00552db7: MOV ESI,dword ptr [EBX + 0x14]
//   XREF to: 00688028 (DATA)
// 00552dba: SUB EAX,EDX
// 00552dbc: AND ESI,0xffff
// 00552dc2: MOV EDX,EAX
// 00552dc4: MOV EAX,ECX
// 00552dc6: XOR SI,0xffff
// 00552dca: IMUL EDX
// 00552dcc: SHRD EAX,EDX,0x10
// 00552dd0: MOV EDX,EAX
// 00552dd2: MOV dword ptr [EBP + 0xc],EAX
//   XREF to: 030e5238 (WRITE)
// 00552dd5: MOV EAX,ESI
// 00552dd7: IMUL EDX
// 00552dd9: SHRD EAX,EDX,0x10
// 00552ddd: MOV dword ptr [ESP + 0x40],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 00552de1: MOV EDX,dword ptr [ESP + 0x40]
//   XREF to: Stack[-0x24] (READ)
// 00552de5: MOV EAX,dword ptr [EBX + 0x10]
//   XREF to: 00688024 (DATA)
// 00552de8: ADD EAX,EDX
// 00552dea: MOV dword ptr [EBP + 0x8],EAX
//   XREF to: 030e5234 (WRITE)
// 00552ded: MOV EAX,dword ptr [EDI + 0x18]
//   XREF to: 0068802c (DATA)
// 00552df0: MOV EDX,dword ptr [EBX + 0x18]
//   XREF to: 0068802c (DATA)
// 00552df3: SUB EAX,EDX
// 00552df5: MOV EDX,EAX
// 00552df7: MOV EAX,ECX
// 00552df9: IMUL EDX
// 00552dfb: SHRD EAX,EDX,0x10
// 00552dff: MOV EDX,EAX
// 00552e01: MOV dword ptr [EBP + 0x1c],EAX
//   XREF to: 030e5248 (WRITE)
// 00552e04: MOV EAX,ESI
// 00552e06: IMUL EDX
// 00552e08: SHRD EAX,EDX,0x10
// 00552e0c: MOV dword ptr [ESP + 0x40],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 00552e10: MOV EDX,dword ptr [ESP + 0x40]
//   XREF to: Stack[-0x24] (READ)
// 00552e14: MOV EAX,dword ptr [EBX + 0x18]
//   XREF to: 0068802c (DATA)
// 00552e17: ADD EAX,EDX
// 00552e19: MOV dword ptr [EBP + 0x18],EAX
//   XREF to: 030e5244 (WRITE)
// 00552e1c: MOV EAX,dword ptr [EDI + 0x1c]
//   XREF to: 00688030 (DATA)
// 00552e1f: MOV EDX,dword ptr [EBX + 0x1c]
//   XREF to: 00688030 (DATA)
// 00552e22: SUB EAX,EDX
// 00552e24: MOV EDX,EAX
// 00552e26: MOV EAX,ECX
// 00552e28: IMUL EDX
// 00552e2a: SHRD EAX,EDX,0x10
// 00552e2e: MOV EDX,EAX
// 00552e30: MOV dword ptr [EBP + 0x24],EAX
//   XREF to: 030e5250 (WRITE)
// 00552e33: MOV EAX,ESI
// 00552e35: IMUL EDX
// 00552e37: SHRD EAX,EDX,0x10
// 00552e3b: MOV dword ptr [ESP + 0x40],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 00552e3f: MOV EDX,dword ptr [ESP + 0x40]
//   XREF to: Stack[-0x24] (READ)
// 00552e43: MOV EAX,dword ptr [EBX + 0x1c]
//   XREF to: 00688030 (DATA)
// 00552e46: ADD EAX,EDX
// 00552e48: MOV dword ptr [EBP + 0x20],EAX
//   XREF to: 030e524c (WRITE)
// 00552e4b: MOV EAX,dword ptr [EDI + 0x20]
//   XREF to: 00688034 (DATA)
// 00552e4e: MOV EDX,dword ptr [EBX + 0x20]
//   XREF to: 00688034 (DATA)
// 00552e51: SUB EAX,EDX
// 00552e53: MOV EDX,EAX
// 00552e55: MOV EAX,ECX
// 00552e57: IMUL EDX
// 00552e59: SHRD EAX,EDX,0x10
// 00552e5d: MOV EDX,EAX
// 00552e5f: MOV dword ptr [EBP + 0x14],EAX
//   XREF to: 030e5240 (WRITE)
// 00552e62: MOV EAX,ESI
// 00552e64: IMUL EDX
// 00552e66: SHRD EAX,EDX,0x10
// 00552e6a: MOV dword ptr [ESP + 0x40],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 00552e6e: MOV EDX,dword ptr [ESP + 0x40]
//   XREF to: Stack[-0x24] (READ)
// 00552e72: MOV EAX,dword ptr [EBX + 0x20]
//   XREF to: 00688034 (DATA)
// 00552e75: ADD EAX,EDX
// 00552e77: MOV dword ptr [EBP + 0x10],EAX
//   XREF to: 030e523c (WRITE)
// 00552e7a: MOV EAX,dword ptr [EDI + 0x2c]
//   XREF to: 00688040 (DATA)
// 00552e7d: MOV EDX,dword ptr [EBX + 0x2c]
//   XREF to: 00688040 (DATA)
// 00552e80: SUB EAX,EDX
// 00552e82: MOV EDX,EAX
// 00552e84: MOV EAX,ECX
// 00552e86: IMUL EDX
// 00552e88: SHRD EAX,EDX,0x10
// 00552e8c: MOV EDX,EAX
// 00552e8e: MOV dword ptr [EBP + 0x34],EAX
//   XREF to: 030e5260 (WRITE)
// 00552e91: MOV EAX,ESI
// 00552e93: IMUL EDX
// 00552e95: SHRD EAX,EDX,0x10
// 00552e99: MOV dword ptr [ESP + 0x40],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 00552e9d: MOV EDX,dword ptr [ESP + 0x40]
//   XREF to: Stack[-0x24] (READ)
// 00552ea1: MOV EAX,dword ptr [EBX + 0x2c]
//   XREF to: 00688040 (DATA)
// 00552ea4: ADD EAX,EDX
// 00552ea6: MOV dword ptr [EBP + 0x30],EAX
//   XREF to: 030e525c (WRITE)
// 00552ea9: CMP dword ptr [0x02d052a4],0x1
//   XREF to: 02d052a4 (READ)
// 00552eb0: JNZ 0x00552f0b
//   XREF to: 00552f0b (CONDITIONAL_JUMP)
// 00552eb2: CMP dword ptr [0x02d0529c],0x0
//   XREF to: 02d0529c (READ)
// 00552eb9: JZ 0x00552f03
//   XREF to: 00552f03 (CONDITIONAL_JUMP)
// 00552ebb: MOV EAX,0x7fffffff
// 00552ec0: MOV EDX,dword ptr [EBX + 0x8]
//   XREF to: 0068801c (DATA)
// 00552ec3: MOV EBX,EAX
// 00552ec5: SUB EBX,EDX
// 00552ec7: MOV EDX,EAX
// 00552ec9: SUB EDX,dword ptr [EDI + 0x8]
//   XREF to: 0068801c (DATA)
// 00552ecc: MOV EAX,ECX
//   Label: LAB_00552ecc
// 00552ece: SUB EDX,EBX
// 00552ed0: IMUL EDX
// 00552ed2: SHRD EAX,EDX,0x10
// 00552ed6: MOV EDX,EAX
// 00552ed8: MOV dword ptr [EBP + 0x2c],EAX
//   XREF to: 030e5258 (WRITE)
// 00552edb: MOV EAX,ESI
// 00552edd: IMUL EDX
// 00552edf: SHRD EAX,EDX,0x10
// 00552ee3: ADD EBX,EAX
// 00552ee5: MOV dword ptr [EBP + 0x28],EBX
//   XREF to: 030e5254 (WRITE)
// 00552ee8: INC dword ptr [0x030e5228]
//   XREF to: 030e5228 (READ_WRITE)
// 00552eee: JMP 0x00552c0d
//   XREF to: 00552c0d (UNCONDITIONAL_JUMP)
// 00552ef3: MOV EAX,0xffffffff
//   Label: LAB_00552ef3
// 00552ef8: XOR EDX,EDX
// 00552efa: DIV ECX
// 00552efc: MOV ECX,EAX
// 00552efe: JMP 0x00552db1
//   XREF to: 00552db1 (UNCONDITIONAL_JUMP)
// 00552f03: MOV EDX,dword ptr [EDI + 0xc]
//   Label: LAB_00552f03
//   XREF to: 00688020 (DATA)
// 00552f06: MOV EBX,dword ptr [EBX + 0xc]
//   XREF to: 00688020 (DATA)
// 00552f09: JMP 0x00552ecc
//   XREF to: 00552ecc (UNCONDITIONAL_JUMP)
// 00552f0b: MOV EAX,dword ptr [EDI + 0x8]
//   Label: LAB_00552f0b
//   XREF to: 0068801c (DATA)
// 00552f0e: MOV EDX,dword ptr [EBX + 0x8]
//   XREF to: 0068801c (DATA)
// 00552f11: SUB EAX,EDX
// 00552f13: MOV EDX,EAX
// 00552f15: MOV EAX,ECX
// 00552f17: IMUL EDX
// 00552f19: SHRD EAX,EDX,0x10
// 00552f1d: MOV EDX,EAX
// 00552f1f: MOV dword ptr [EBP + 0x2c],EAX
//   XREF to: 030e5258 (WRITE)
// 00552f22: MOV EAX,ESI
// 00552f24: IMUL EDX
// 00552f26: SHRD EAX,EDX,0x10
// 00552f2a: MOV EDX,EAX
// 00552f2c: MOV EAX,dword ptr [EBX + 0x8]
//   XREF to: 0068801c (DATA)
// 00552f2f: ADD EAX,EDX
// 00552f31: MOV dword ptr [EBP + 0x28],EAX
//   XREF to: 030e5254 (WRITE)
// 00552f34: INC dword ptr [0x030e5228]
//   XREF to: 030e5228 (READ_WRITE)
// 00552f3a: JMP 0x00552c0d
//   XREF to: 00552c0d (UNCONDITIONAL_JUMP)
// 00552f3f: MOV EBX,dword ptr [ESP + 0x50]
//   Label: LAB_00552f3f
//   XREF to: Stack[-0x14] (READ)
// 00552f43: PUSH EBX
// 00552f44: PUSH EAX
// 00552f45: MOV dword ptr [EBP],0xffffffff
// 00552f4c: CALL engine_prim.c_findEdgeInBuffer_FUN_00551f70
//   XREF to: 00551f70 (UNCONDITIONAL_CALL)
// 00552f51: ADD ESP,0x8
// 00552f54: MOV EBP,EAX
// 00552f56: TEST EAX,EAX
// 00552f58: JZ 0x00552b1e
//   XREF to: 00552b1e (CONDITIONAL_JUMP)
// 00552f5e: JMP 0x00552c83
//   XREF to: 00552c83 (UNCONDITIONAL_JUMP)
