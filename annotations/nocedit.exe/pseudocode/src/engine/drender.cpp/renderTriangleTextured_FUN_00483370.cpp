// Name: engine_drender.cpp_renderTriangleTextured_FUN_00483370
// Address: 00483370
// Address Range: [[00483370, 004839e1]]
// Convention: __cdecl
// Signature: void engine_drender.cpp_renderTriangleTextured_FUN_00483370(int * vertex_indices, int vertex_count)
// Cross-references:
//   engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_0048a740 (0048a740) at 0048a7aa [UNCONDITIONAL_CALL]
//   engine_drender.cpp_CDemonRenderer_renderFaceList_FUN_0048d170 (0048d170) at 0048d301 [UNCONDITIONAL_CALL]
//   engine_drender.cpp_CDemonRenderer_renderTriangleFacetList_FUN_0048cf00 (0048cf00) at 0048d0ac [UNCONDITIONAL_CALL]
// Globals:
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
//   int g_RenderTriangleEdgeCount
//   SEdgeData[16] g_EdgeInterpolationArray
//   undefined4 DAT_02c6cb78
//   undefined4 DAT_02c6cb7c
//   undefined4 DAT_02c6cb80
//   undefined4 DAT_02c6cb84
//   undefined4 DAT_02c6cb88
//   undefined4 DAT_02c6cb8c
//   undefined4 DAT_02c6cb90
//   undefined4 DAT_02c6cb94
//   undefined4 DAT_02c6cb98
//   undefined4 DAT_02c6cb9c
//   undefined4 DAT_02c6cba0
//   undefined4 DAT_02c6cba4
//   undefined4 DAT_02c6cba8
//   undefined4 DAT_02c6cbac
//   undefined4 DAT_02c6cbb0
//   undefined4 DAT_02c6cbb4
//   undefined4 DAT_02c6cbb8
//   undefined4 DAT_02c6cbbc
//   int g_RenderTriangleMinScanlineY
//   int g_RenderTriangleMaxScanlineY
//   int g_RenderAbortFlag
//   int g_UseExternalRenderer
//   int g_RenderStateFlags
//   undefined4 DAT_02d052a1
//   int g_RenderedTriangleCount
// Function calls:
//   engine_prim.c_calculateTriangleWindingOrder_FUN_00552150
//   wincore_windll.cpp_drawPolygon2_FUN_005b7610
//   wincore_windll.cpp_renderScanline_FUN_005b5710

#include "nocturne.h"

void __cdecl
engine_drender_cpp_renderTriangleTextured_FUN_00483370(int *vertex_indices,int vertex_count)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  SEdgeData *pSVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  BADSPACEBASE *in_ESP;
  SRenderVertex *pSVar10;
  uint uVar11;
  int in_stack_0000000c;
  SRenderVertex *in_stack_ffffff98;
  void *in_stack_ffffff9c;
  int in_stack_ffffffa0;
  uint local_28;
  int *local_24;
  int local_20;
  SRenderVertex *local_18;
  SEdgeData *local_14;
  
  if ((g_CullingMode != 0) &&
     (iVar8 = engine_prim_c_calculateTriangleWindingOrder_FUN_00552150
                        (g_RenderVertexBuffer + *vertex_indices,
                         g_RenderVertexBuffer + vertex_indices[1],
                         g_RenderVertexBuffer + vertex_indices[2]), iVar8 == 0)) {
    return;
  }
  g_RenderedTriangleCount = g_RenderedTriangleCount + 1;
  if ((g_UseExternalRenderer == 0) || (g_TexturesDisabled != 0)) {
    iVar8 = 0;
    g_RenderTriangleMaxScanlineY = 0;
    local_20 = 0;
    g_RenderTriangleMinScanlineY = 0x4b0;
    g_RenderTriangleEdgeCount = iVar8;
    if (0 < in_stack_0000000c) {
      local_24 = (int *)vertex_count;
      do {
        iVar2 = local_20 + 1;
        if (in_stack_0000000c <= iVar2) {
          iVar2 = 0;
        }
        iVar2 = *(int *)(iVar2 * 4 + vertex_count);
        iVar6 = *local_24;
        iVar7 = g_RenderVertexBuffer[iVar2].projected_vertex.screen_y >> 0x10;
        iVar3 = g_RenderVertexBuffer[iVar6].projected_vertex.screen_y >> 0x10;
        if (iVar3 != iVar7) {
          iVar5 = iVar3;
          pSVar10 = g_RenderVertexBuffer + iVar6;
          local_18 = g_RenderVertexBuffer + iVar2;
          if (g_RenderVertexBuffer[iVar2].projected_vertex.screen_y <
              g_RenderVertexBuffer[iVar6].projected_vertex.screen_y) {
            iVar5 = iVar7;
            iVar7 = iVar3;
            pSVar10 = g_RenderVertexBuffer + iVar2;
            local_18 = g_RenderVertexBuffer + iVar6;
          }
          g_EdgeInterpolationArray[iVar8].y_start = iVar5;
          iVar2 = g_RenderTriangleMinScanlineY;
          g_EdgeInterpolationArray[iVar8].y_end = iVar7;
          if (iVar5 < iVar2) {
            g_RenderTriangleMinScanlineY = iVar5;
          }
          if (g_RenderTriangleMaxScanlineY < iVar7) {
            g_RenderTriangleMaxScanlineY = iVar7;
          }
          uVar9 = (local_18->projected_vertex).screen_y - (pSVar10->projected_vertex).screen_y;
          if (uVar9 < 0x10000) {
            iVar2 = 0;
          }
          else {
            iVar2 = (int)(0xffffffff / (ulonglong)uVar9);
          }
          uVar11 = (uint)(ushort)((ushort)(pSVar10->projected_vertex).screen_y ^ 0xffff);
          lVar1 = (longlong)iVar2 *
                  (longlong)
                  ((local_18->projected_vertex).screen_x - (pSVar10->projected_vertex).screen_x);
          uVar9 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
          g_RenderTriangleEdgeCount = iVar8;
          g_EdgeInterpolationArray[iVar8].x_delta = uVar9;
          lVar1 = (longlong)(int)uVar11 * (longlong)(int)uVar9;
          g_EdgeInterpolationArray[iVar8].x_current =
               (pSVar10->projected_vertex).screen_x +
               ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
          lVar1 = (longlong)iVar2 * (longlong)((int)local_18->u - (int)pSVar10->u);
          uVar9 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
          g_EdgeInterpolationArray[iVar8].u_delta = uVar9;
          lVar1 = (longlong)(int)uVar11 * (longlong)(int)uVar9;
          g_EdgeInterpolationArray[iVar8].u_current =
               (int)pSVar10->u + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
          lVar1 = (longlong)iVar2 * (longlong)((int)local_18->v - (int)pSVar10->v);
          uVar9 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
          g_EdgeInterpolationArray[iVar8].v_delta = uVar9;
          lVar1 = (longlong)(int)uVar11 * (longlong)(int)uVar9;
          g_EdgeInterpolationArray[iVar8].v_current =
               (int)pSVar10->v + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
          lVar1 = (longlong)iVar2 * (longlong)((int)local_18->light - (int)pSVar10->light);
          uVar9 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
          g_EdgeInterpolationArray[iVar8].light_delta = uVar9;
          lVar1 = (longlong)(int)uVar11 * (longlong)(int)uVar9;
          g_EdgeInterpolationArray[iVar8].light_current =
               (int)pSVar10->light + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10)
          ;
          lVar1 = (longlong)iVar2 * (longlong)((int)local_18->w_recip - (int)pSVar10->w_recip);
          uVar9 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
          g_EdgeInterpolationArray[iVar8].w_recip_delta = uVar9;
          lVar1 = (longlong)(int)uVar11 * (longlong)(int)uVar9;
          g_EdgeInterpolationArray[iVar8].w_recip_current =
               (int)pSVar10->w_recip +
               ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
          if (g_TexturesDisabled == 0) {
            lVar1 = (longlong)iVar2 *
                    (longlong)
                    ((local_18->projected_vertex).inv_z - (pSVar10->projected_vertex).inv_z);
            uVar9 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
            g_EdgeInterpolationArray[iVar8].z_delta = uVar9;
            lVar1 = (longlong)(int)uVar11 * (longlong)(int)uVar9;
            local_28 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
            iVar6 = (pSVar10->projected_vertex).inv_z;
          }
          else {
            lVar1 = (longlong)iVar2 *
                    (longlong)
                    ((local_18->projected_vertex).transformed_z -
                    (pSVar10->projected_vertex).transformed_z);
            uVar9 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
            g_EdgeInterpolationArray[iVar8].z_delta = uVar9;
            lVar1 = (longlong)(int)uVar11 * (longlong)(int)uVar9;
            local_28 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
            iVar6 = (pSVar10->projected_vertex).transformed_z;
          }
          g_EdgeInterpolationArray[iVar8].z_current = iVar6 + local_28;
          if ((g_RenderStateFlags & 0x200U) != 0) {
            lVar1 = (longlong)iVar2 * (longlong)(local_18->color - pSVar10->color);
            uVar9 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
            g_EdgeInterpolationArray[iVar8].color_delta = uVar9;
            lVar1 = (longlong)(int)uVar11 * (longlong)(int)uVar9;
            g_EdgeInterpolationArray[iVar8].color_current =
                 pSVar10->color + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
            lVar1 = (longlong)iVar2 * (longlong)((int)local_18->fog - (int)pSVar10->fog);
            uVar9 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
            g_EdgeInterpolationArray[iVar8].fog_delta = uVar9;
            lVar1 = (longlong)(int)uVar11 * (longlong)(int)uVar9;
            g_EdgeInterpolationArray[iVar8].fog_current =
                 (int)pSVar10->fog + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10)
            ;
          }
          iVar8 = g_RenderTriangleEdgeCount + 1;
        }
        local_24 = local_24 + 1;
        local_20 = local_20 + 1;
        g_RenderTriangleEdgeCount = iVar8;
      } while (local_20 < in_stack_0000000c);
    }
    iVar8 = g_RenderTriangleMinScanlineY;
    local_14 = g_EdgeInterpolationArray;
    iVar2 = 0;
    g_RenderAbortFlag = 0;
    if (0 < g_RenderTriangleEdgeCount) {
      do {
        if ((g_RenderTriangleMinScanlineY == local_14->y_start) && (local_14 != (SEdgeData *)0x0))
        goto LAB_00483524;
        iVar2 = iVar2 + 1;
        local_14 = local_14 + 1;
      } while (iVar2 < g_RenderTriangleEdgeCount);
    }
    local_14 = (SEdgeData *)0x0;
LAB_00483524:
    if (local_14 != (SEdgeData *)0x0) {
      pSVar4 = g_EdgeInterpolationArray;
      iVar2 = 0;
      if (0 < g_RenderTriangleEdgeCount) {
        do {
          if ((g_RenderTriangleMinScanlineY == pSVar4->y_start) && (pSVar4 != local_14))
          goto LAB_0048355b;
          iVar2 = iVar2 + 1;
          pSVar4 = pSVar4 + 1;
        } while (iVar2 < g_RenderTriangleEdgeCount);
      }
      pSVar4 = (SEdgeData *)0x0;
LAB_0048355b:
      if (pSVar4 != (SEdgeData *)0x0) {
        do {
          if (local_14->y_end <= iVar8) {
            local_14->y_start = -1;
            local_14 = g_EdgeInterpolationArray;
            iVar2 = 0;
            if (0 < g_RenderTriangleEdgeCount) {
              do {
                if ((iVar8 == local_14->y_start) && (local_14 != pSVar4)) goto LAB_004835b6;
                iVar2 = iVar2 + 1;
                local_14 = local_14 + 1;
              } while (iVar2 < g_RenderTriangleEdgeCount);
            }
            local_14 = (SEdgeData *)0x0;
LAB_004835b6:
            if (local_14 == (SEdgeData *)0x0) {
              return;
            }
          }
          if (pSVar4->y_end <= iVar8) {
            pSVar4->y_start = -1;
            pSVar4 = g_EdgeInterpolationArray;
            iVar2 = 0;
            if (0 < g_RenderTriangleEdgeCount) {
              do {
                if ((iVar8 == pSVar4->y_start) && (pSVar4 != local_14)) goto LAB_00483606;
                iVar2 = iVar2 + 1;
                pSVar4 = pSVar4 + 1;
              } while (iVar2 < g_RenderTriangleEdgeCount);
            }
            pSVar4 = (SEdgeData *)0x0;
LAB_00483606:
            if (pSVar4 == (SEdgeData *)0x0) {
              return;
            }
          }
          wincore_windll_cpp_renderScanline_FUN_005b5710
                    (in_stack_ffffff98,in_stack_ffffff9c,in_stack_ffffffa0);
          if (g_RenderAbortFlag != 0) {
            return;
          }
          *(int *)(vertex_count + 8) = *(int *)(vertex_count + 8) + *(int *)(vertex_count + 0xc);
          *(int *)(vertex_count + 0x18) =
               *(int *)(vertex_count + 0x18) + *(int *)(vertex_count + 0x1c);
          *(int *)(vertex_count + 0x20) =
               *(int *)(vertex_count + 0x20) + *(int *)(vertex_count + 0x24);
          *(int *)(vertex_count + 0x10) =
               *(int *)(vertex_count + 0x10) + *(int *)(vertex_count + 0x14);
          *(int *)(vertex_count + 0x28) =
               *(int *)(vertex_count + 0x28) + *(int *)(vertex_count + 0x2c);
          *(int *)(vertex_count + 0x30) =
               *(int *)(vertex_count + 0x30) + *(int *)(vertex_count + 0x34);
          *(int *)(in_stack_0000000c + 8) =
               *(int *)(in_stack_0000000c + 8) + *(int *)(in_stack_0000000c + 0xc);
          *(int *)(in_stack_0000000c + 0x18) =
               *(int *)(in_stack_0000000c + 0x18) + *(int *)(in_stack_0000000c + 0x1c);
          *(int *)(in_stack_0000000c + 0x20) =
               *(int *)(in_stack_0000000c + 0x20) + *(int *)(in_stack_0000000c + 0x24);
          *(int *)(in_stack_0000000c + 0x10) =
               *(int *)(in_stack_0000000c + 0x10) + *(int *)(in_stack_0000000c + 0x14);
          *(int *)(in_stack_0000000c + 0x28) =
               *(int *)(in_stack_0000000c + 0x28) + *(int *)(in_stack_0000000c + 0x2c);
          *(int *)(in_stack_0000000c + 0x30) =
               *(int *)(in_stack_0000000c + 0x30) + *(int *)(in_stack_0000000c + 0x34);
          if ((g_RenderStateFlags & 0x200U) != 0) {
            *(int *)(vertex_count + 0x38) =
                 *(int *)(vertex_count + 0x38) + *(int *)(vertex_count + 0x3c);
            *(int *)(vertex_count + 0x40) =
                 *(int *)(vertex_count + 0x40) + *(int *)(vertex_count + 0x44);
            *(int *)(in_stack_0000000c + 0x38) =
                 *(int *)(in_stack_0000000c + 0x38) + *(int *)(in_stack_0000000c + 0x3c);
            *(int *)(in_stack_0000000c + 0x40) =
                 *(int *)(in_stack_0000000c + 0x40) + *(int *)(in_stack_0000000c + 0x44);
          }
        } while( true );
      }
    }
  }
  else {
    iVar8 = 0;
    if (0 < in_stack_0000000c) {
      do {
        iVar8 = iVar8 + 1;
        *(SRenderVertex **)(&stack0xffffff94 + iVar8 * 4) =
             g_RenderVertexBuffer + *(int *)vertex_count;
        vertex_count = vertex_count + 4;
      } while (iVar8 < in_stack_0000000c);
    }
    wincore_windll_cpp_drawPolygon2_FUN_005b7610
              ((SRenderVertex **)&stack0xffffff98,in_stack_0000000c,g_RenderStateFlags);
  }
  return;
}


// Assembly code:
// 00483370: PUSH EBX
//   Label: engine_drender.cpp_renderTriangleTextured_FUN_00483370
// 00483371: PUSH ESI
// 00483372: PUSH EDI
// 00483373: PUSH EBP
// 00483374: SUB ESP,0x5c
// 00483377: MOV EBP,dword ptr [0x02c6cb70]
//   XREF to: 02c6cb70 (READ)
// 0048337d: CMP dword ptr [0x00772a7c],0x0
//   XREF to: 00772a7c (READ)
// 00483384: JNZ 0x00483407
//   XREF to: 00483407 (CONDITIONAL_JUMP)
// 0048338a: MOV ECX,dword ptr [0x030e56b8]
//   Label: LAB_0048338a
//   XREF to: 030e56b8 (READ)
// 00483390: MOV EBX,dword ptr [0x02d03e94]
//   XREF to: 02d03e94 (READ)
// 00483396: INC ECX
// 00483397: MOV EBP,dword ptr [0x02c6cb70]
//   XREF to: 02c6cb70 (READ)
// 0048339d: MOV dword ptr [0x030e56b8],ECX
//   XREF to: 030e56b8 (WRITE)
// 004833a3: TEST EBX,EBX
// 004833a5: JZ 0x0048346f
//   XREF to: 0048346f (CONDITIONAL_JUMP)
// 004833ab: CMP dword ptr [0x00772a74],0x0
//   XREF to: 00772a74 (READ)
// 004833b2: JNZ 0x0048346f
//   XREF to: 0048346f (CONDITIONAL_JUMP)
// 004833b8: MOV ECX,dword ptr [ESP + 0x74]
//   XREF to: Stack[0x8] (READ)
// 004833bc: XOR EBX,EBX
// 004833be: TEST ECX,ECX
// 004833c0: JLE 0x004833e0
//   XREF to: 004833e0 (CONDITIONAL_JUMP)
// 004833c2: MOV EAX,dword ptr [ESP + 0x70]
//   XREF to: Stack[0x4] (READ)
// 004833c6: IMUL EDX,dword ptr [EAX],0x30
//   Label: LAB_004833c6
// 004833c9: INC EBX
// 004833ca: ADD EDX,0x688014
//   XREF to: 00688014 (DATA)
// 004833d0: MOV dword ptr [ESP + EBX*0x4 + -0x4],EDX
//   XREF to: Stack[-0x6c] (DATA)
// 004833d4: MOV EDX,dword ptr [ESP + 0x74]
//   XREF to: Stack[0x8] (READ)
// 004833d8: ADD EAX,0x4
// 004833db: CMP EBX,EDX
// 004833dd: JL 0x004833c6
//   XREF to: 004833c6 (CONDITIONAL_JUMP)
// 004833df: NOP
// 004833e0: MOV ECX,dword ptr [0x02d052a0]
//   Label: LAB_004833e0
//   XREF to: 02d052a0 (READ)
// 004833e6: PUSH ECX
// 004833e7: MOV EBX,dword ptr [ESP + 0x78]
//   XREF to: Stack[0x8] (READ)
// 004833eb: PUSH EBX
// 004833ec: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x6c] (DATA)
// 004833f0: PUSH EAX
// 004833f1: CALL wincore_windll.cpp_drawPolygon2_FUN_005b7610
//   XREF to: 005b7610 (UNCONDITIONAL_CALL)
// 004833f6: ADD ESP,0xc
// 004833f9: MOV EBP,dword ptr [0x02c6cb70]
//   Label: LAB_004833f9
//   XREF to: 02c6cb70 (READ)
// 004833ff: ADD ESP,0x5c
// 00483402: POP EBP
// 00483403: POP EDI
// 00483404: POP ESI
// 00483405: POP EBX
// 00483406: RET
// 00483407: MOV EDX,dword ptr [ESP + 0x70]
//   Label: LAB_00483407
//   XREF to: Stack[0x4] (READ)
// 0048340b: MOV EDX,dword ptr [EDX + 0x8]
// 0048340e: LEA EAX,[EDX*0x4 + 0x0]
// 00483415: SUB EAX,EDX
// 00483417: SHL EAX,0x4
// 0048341a: MOV EDX,dword ptr [ESP + 0x70]
//   XREF to: Stack[0x4] (READ)
// 0048341e: ADD EAX,0x688014
//   XREF to: 00688014 (DATA)
// 00483423: MOV EDX,dword ptr [EDX + 0x4]
// 00483426: PUSH EAX
// 00483427: LEA EAX,[EDX*0x4 + 0x0]
// 0048342e: SUB EAX,EDX
// 00483430: SHL EAX,0x4
// 00483433: MOV EDX,dword ptr [ESP + 0x74]
//   XREF to: Stack[0x4] (READ)
// 00483437: ADD EAX,0x688014
//   XREF to: 00688014 (DATA)
// 0048343c: MOV EDX,dword ptr [EDX]
// 0048343e: PUSH EAX
// 0048343f: LEA EAX,[EDX*0x4 + 0x0]
// 00483446: SUB EAX,EDX
// 00483448: SHL EAX,0x4
// 0048344b: ADD EAX,0x688014
//   XREF to: 00688014 (DATA)
// 00483450: PUSH EAX
// 00483451: CALL engine_prim.c_calculateTriangleWindingOrder_FUN_00552150
//   XREF to: 00552150 (UNCONDITIONAL_CALL)
// 00483456: ADD ESP,0xc
// 00483459: TEST EAX,EAX
// 0048345b: JNZ 0x0048338a
//   XREF to: 0048338a (CONDITIONAL_JUMP)
// 00483461: MOV EBP,dword ptr [0x02c6cb70]
//   XREF to: 02c6cb70 (READ)
// 00483467: ADD ESP,0x5c
// 0048346a: POP EBP
// 0048346b: POP EDI
// 0048346c: POP ESI
// 0048346d: POP EBX
// 0048346e: RET
// 0048346f: MOV EDI,0x4b0
//   Label: LAB_0048346f
// 00483474: XOR EBP,EBP
// 00483476: MOV EDX,dword ptr [ESP + 0x74]
//   XREF to: Stack[0x8] (READ)
// 0048347a: MOV dword ptr [0x02c6cff8],EBP
//   XREF to: 02c6cff8 (WRITE)
// 00483480: MOV dword ptr [ESP + 0x48],EBP
//   XREF to: Stack[-0x24] (WRITE)
// 00483484: MOV dword ptr [0x02c6cff4],EDI
//   XREF to: 02c6cff4 (WRITE)
// 0048348a: TEST EDX,EDX
// 0048348c: JLE 0x004834fa
//   XREF to: 004834fa (CONDITIONAL_JUMP)
// 0048348e: MOV EAX,dword ptr [ESP + 0x70]
//   XREF to: Stack[0x4] (READ)
// 00483492: MOV dword ptr [ESP + 0x44],EAX
//   XREF to: Stack[-0x28] (WRITE)
// 00483496: MOV EAX,dword ptr [ESP + 0x48]
//   Label: LAB_00483496
//   XREF to: Stack[-0x24] (READ)
// 0048349a: MOV EDX,dword ptr [ESP + 0x74]
//   XREF to: Stack[0x8] (READ)
// 0048349e: INC EAX
// 0048349f: CMP EAX,EDX
// 004834a1: JL 0x004834a5
//   XREF to: 004834a5 (CONDITIONAL_JUMP)
// 004834a3: XOR EAX,EAX
// 004834a5: MOV ECX,dword ptr [ESP + 0x70]
//   Label: LAB_004834a5
//   XREF to: Stack[0x4] (READ)
// 004834a9: SHL EAX,0x2
// 004834ac: ADD EAX,ECX
// 004834ae: IMUL ECX,dword ptr [EAX],0x30
// 004834b1: MOV EAX,dword ptr [ESP + 0x44]
//   XREF to: Stack[-0x28] (READ)
// 004834b5: IMUL EBX,dword ptr [EAX],0x30
// 004834b8: ADD ECX,0x688014
//   XREF to: 00688014 (DATA)
// 004834be: ADD EBX,0x688014
//   XREF to: 00688014 (DATA)
// 004834c4: MOV dword ptr [ESP + 0x50],ECX
//   XREF to: Stack[-0x1c] (WRITE)
// 004834c8: MOV EDX,dword ptr [ECX + 0x14]
//   XREF to: 00688028 (DATA)
// 004834cb: MOV EAX,dword ptr [EBX + 0x14]
//   XREF to: 00688028 (DATA)
// 004834ce: SAR EDX,0x10
// 004834d1: SAR EAX,0x10
// 004834d4: MOV ESI,EBX
// 004834d6: CMP EAX,EDX
// 004834d8: JNZ 0x004836e8
//   XREF to: 004836e8 (CONDITIONAL_JUMP)
// 004834de: MOV EBX,dword ptr [ESP + 0x44]
//   Label: LAB_004834de
//   XREF to: Stack[-0x28] (READ)
// 004834e2: MOV ESI,dword ptr [ESP + 0x48]
//   XREF to: Stack[-0x24] (READ)
// 004834e6: MOV EDI,dword ptr [ESP + 0x74]
//   XREF to: Stack[0x8] (READ)
// 004834ea: ADD EBX,0x4
// 004834ed: INC ESI
// 004834ee: MOV dword ptr [ESP + 0x44],EBX
//   XREF to: Stack[-0x28] (WRITE)
// 004834f2: MOV dword ptr [ESP + 0x48],ESI
//   XREF to: Stack[-0x24] (WRITE)
// 004834f6: CMP ESI,EDI
// 004834f8: JL 0x00483496
//   XREF to: 00483496 (CONDITIONAL_JUMP)
// 004834fa: MOV EBX,0x2c6cb74
//   Label: LAB_004834fa
//   XREF to: 02c6cb74 (DATA)
// 004834ff: XOR EAX,EAX
// 00483501: MOV ESI,dword ptr [0x02c6cff4]
//   XREF to: 02c6cff4 (READ)
// 00483507: MOV [0x02c6d5a8],EAX
//   XREF to: 02c6d5a8 (WRITE)
// 0048350c: TEST EBP,EBP
// 0048350e: JLE 0x0048395d
//   XREF to: 0048395d (CONDITIONAL_JUMP)
// 00483514: CMP ESI,dword ptr [EBX]
//   Label: LAB_00483514
//   XREF to: 02c6cb74 (READ)
//   XREF to: 02c6cbbc (READ)
// 00483516: JNZ 0x00483951
//   XREF to: 00483951 (CONDITIONAL_JUMP)
// 0048351c: TEST EBX,EBX
// 0048351e: JZ 0x00483951
//   XREF to: 00483951 (CONDITIONAL_JUMP)
// 00483524: MOV dword ptr [ESP + 0x54],EBX
//   Label: LAB_00483524
//   XREF to: Stack[-0x18] (WRITE)
//   XREF to: 02c6cb74 (DATA)
//   XREF to: 02c6cbbc (DATA)
// 00483528: MOV dword ptr [0x02c6cb70],EBP
//   XREF to: 02c6cb70 (WRITE)
// 0048352e: TEST EBX,EBX
// 00483530: JZ 0x004833f9
//   XREF to: 004833f9 (CONDITIONAL_JUMP)
// 00483536: MOV EAX,0x2c6cb74
//   XREF to: 02c6cb74 (DATA)
// 0048353b: MOV ECX,dword ptr [0x02c6cff4]
//   XREF to: 02c6cff4 (READ)
// 00483541: XOR EDX,EDX
// 00483543: TEST EBP,EBP
// 00483545: JLE 0x00483970
//   XREF to: 00483970 (CONDITIONAL_JUMP)
// 0048354b: CMP ECX,dword ptr [EAX]
//   Label: LAB_0048354b
//   XREF to: 02c6cb74 (READ)
//   XREF to: 02c6cbbc (READ)
// 0048354d: JNZ 0x00483964
//   XREF to: 00483964 (CONDITIONAL_JUMP)
// 00483553: CMP EAX,EBX
// 00483555: JZ 0x00483964
//   XREF to: 00483964 (CONDITIONAL_JUMP)
// 0048355b: MOV dword ptr [ESP + 0x58],EAX
//   Label: LAB_0048355b
//   XREF to: Stack[-0x14] (WRITE)
//   XREF to: 02c6cb74 (DATA)
//   XREF to: 02c6cbbc (DATA)
// 0048355f: MOV dword ptr [0x02c6cb70],EBP
//   XREF to: 02c6cb70 (WRITE)
// 00483565: TEST EAX,EAX
// 00483567: JZ 0x004833f9
//   XREF to: 004833f9 (CONDITIONAL_JUMP)
// 0048356d: MOV EAX,[0x02c6cff4]
//   XREF to: 02c6cff4 (READ)
// 00483572: MOV dword ptr [ESP + 0x4c],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 00483576: MOV EDX,dword ptr [ESP + 0x54]
//   Label: LAB_00483576
//   XREF to: Stack[-0x18] (READ)
// 0048357a: MOV EAX,dword ptr [ESP + 0x4c]
//   XREF to: Stack[-0x20] (READ)
// 0048357e: MOV ESI,dword ptr [EDX + 0x4]
//   XREF to: 02c6cb78 (READ)
// 00483581: MOV dword ptr [0x02c6cb70],EBP
//   XREF to: 02c6cb70 (WRITE)
// 00483587: CMP EAX,ESI
// 00483589: JL 0x004835c8
//   XREF to: 004835c8 (CONDITIONAL_JUMP)
// 0048358b: MOV ECX,dword ptr [ESP + 0x58]
//   XREF to: Stack[-0x14] (READ)
//   XREF to: 02c6cb74 (PARAM)
// 0048358f: MOV EBX,EAX
// 00483591: MOV dword ptr [EDX],0xffffffff
//   XREF to: 02c6cb74 (WRITE)
// 00483597: MOV EAX,0x2c6cb74
//   XREF to: 02c6cb74 (DATA)
// 0048359c: XOR EDX,EDX
// 0048359e: TEST EBP,EBP
// 004835a0: JLE 0x00483983
//   XREF to: 00483983 (CONDITIONAL_JUMP)
// 004835a6: CMP EBX,dword ptr [EAX]
//   Label: LAB_004835a6
//   XREF to: 02c6cb74 (READ)
//   XREF to: 02c6cbbc (READ)
// 004835a8: JNZ 0x00483977
//   XREF to: 00483977 (CONDITIONAL_JUMP)
// 004835ae: CMP EAX,ECX
// 004835b0: JZ 0x00483977
//   XREF to: 00483977 (CONDITIONAL_JUMP)
// 004835b6: MOV dword ptr [ESP + 0x54],EAX
//   Label: LAB_004835b6
//   XREF to: Stack[-0x18] (WRITE)
//   XREF to: 02c6cb74 (DATA)
//   XREF to: 02c6cbbc (DATA)
// 004835ba: MOV dword ptr [0x02c6cb70],EBP
//   XREF to: 02c6cb70 (WRITE)
// 004835c0: TEST EAX,EAX
// 004835c2: JZ 0x004833f9
//   XREF to: 004833f9 (CONDITIONAL_JUMP)
// 004835c8: MOV EDX,dword ptr [ESP + 0x58]
//   Label: LAB_004835c8
//   XREF to: Stack[-0x14] (READ)
//   XREF to: 02c6cb74 (PARAM)
// 004835cc: MOV EAX,dword ptr [ESP + 0x4c]
//   XREF to: Stack[-0x20] (READ)
// 004835d0: CMP EAX,dword ptr [EDX + 0x4]
//   XREF to: 02c6cb78 (READ)
// 004835d3: JL 0x00483618
//   XREF to: 00483618 (CONDITIONAL_JUMP)
// 004835d5: MOV ECX,dword ptr [ESP + 0x54]
//   XREF to: Stack[-0x18] (READ)
//   XREF to: 02c6cb74 (PARAM)
// 004835d9: MOV EBP,dword ptr [0x02c6cb70]
//   XREF to: 02c6cb70 (READ)
// 004835df: MOV EBX,EAX
// 004835e1: MOV dword ptr [EDX],0xffffffff
//   XREF to: 02c6cb74 (WRITE)
// 004835e7: MOV EAX,0x2c6cb74
//   XREF to: 02c6cb74 (PARAM)
// 004835ec: XOR EDX,EDX
// 004835ee: TEST EBP,EBP
// 004835f0: JLE 0x00483996
//   XREF to: 00483996 (CONDITIONAL_JUMP)
// 004835f6: CMP EBX,dword ptr [EAX]
//   Label: LAB_004835f6
//   XREF to: 02c6cb74 (READ)
//   XREF to: 02c6cbbc (READ)
// 004835f8: JNZ 0x0048398a
//   XREF to: 0048398a (CONDITIONAL_JUMP)
// 004835fe: CMP EAX,ECX
// 00483600: JZ 0x0048398a
//   XREF to: 0048398a (CONDITIONAL_JUMP)
// 00483606: MOV dword ptr [ESP + 0x58],EAX
//   Label: LAB_00483606
//   XREF to: Stack[-0x14] (WRITE)
//   XREF to: 02c6cb74 (DATA)
//   XREF to: 02c6cbbc (DATA)
// 0048360a: MOV dword ptr [0x02c6cb70],EBP
//   XREF to: 02c6cb70 (WRITE)
// 00483610: TEST EAX,EAX
// 00483612: JZ 0x004833f9
//   XREF to: 004833f9 (CONDITIONAL_JUMP)
// 00483618: MOV EDI,dword ptr [ESP + 0x58]
//   Label: LAB_00483618
//   XREF to: Stack[-0x14] (READ)
// 0048361c: MOV ESI,dword ptr [ESP + 0x54]
//   XREF to: Stack[-0x18] (READ)
// 00483620: MOV EBX,dword ptr [ESP + 0x4c]
//   XREF to: Stack[-0x20] (READ)
// 00483624: CALL wincore_windll.cpp_renderScanline_FUN_005b5710
//   XREF to: 005b5710 (UNCONDITIONAL_CALL)
// 00483629: CMP dword ptr [0x02c6d5a8],0x0
//   XREF to: 02c6d5a8 (READ)
// 00483630: JNZ 0x004833f9
//   XREF to: 004833f9 (CONDITIONAL_JUMP)
// 00483636: MOV EDX,dword ptr [ESP + 0x54]
// 0048363a: MOV EAX,dword ptr [ESP + 0x54]
// 0048363e: MOV ECX,dword ptr [EDX + 0x8]
// 00483641: MOV EAX,dword ptr [EAX + 0xc]
// 00483644: MOV EBX,dword ptr [EDX + 0x18]
// 00483647: ADD ECX,EAX
// 00483649: MOV EAX,dword ptr [EDX + 0x1c]
// 0048364c: MOV dword ptr [EDX + 0x8],ECX
// 0048364f: ADD EBX,EAX
// 00483651: MOV dword ptr [EDX + 0x18],EBX
// 00483654: MOV ESI,dword ptr [EDX + 0x20]
// 00483657: MOV EDI,dword ptr [EDX + 0x10]
// 0048365a: MOV ECX,dword ptr [EDX + 0x28]
// 0048365d: MOV EAX,dword ptr [EDX + 0x24]
// 00483660: MOV EBX,dword ptr [EDX + 0x30]
// 00483663: ADD ESI,EAX
// 00483665: MOV EAX,dword ptr [EDX + 0x14]
// 00483668: MOV dword ptr [EDX + 0x20],ESI
// 0048366b: ADD EDI,EAX
// 0048366d: MOV EAX,dword ptr [EDX + 0x2c]
// 00483670: MOV dword ptr [EDX + 0x10],EDI
// 00483673: ADD ECX,EAX
// 00483675: MOV EAX,dword ptr [EDX + 0x34]
// 00483678: MOV dword ptr [EDX + 0x28],ECX
// 0048367b: ADD EBX,EAX
// 0048367d: MOV EAX,dword ptr [ESP + 0x58]
// 00483681: MOV dword ptr [EDX + 0x30],EBX
// 00483684: MOV EDX,dword ptr [ESP + 0x58]
// 00483688: MOV EAX,dword ptr [EAX + 0xc]
// 0048368b: MOV ESI,dword ptr [EDX + 0x8]
// 0048368e: MOV EDI,dword ptr [EDX + 0x18]
// 00483691: ADD ESI,EAX
// 00483693: MOV EAX,dword ptr [EDX + 0x1c]
// 00483696: MOV dword ptr [EDX + 0x8],ESI
// 00483699: ADD EDI,EAX
// 0048369b: MOV dword ptr [EDX + 0x18],EDI
// 0048369e: MOV ECX,dword ptr [EDX + 0x20]
// 004836a1: MOV EBX,dword ptr [EDX + 0x10]
// 004836a4: MOV ESI,dword ptr [EDX + 0x28]
// 004836a7: MOV EAX,dword ptr [EDX + 0x24]
// 004836aa: MOV EDI,dword ptr [EDX + 0x30]
// 004836ad: ADD ECX,EAX
// 004836af: MOV EAX,dword ptr [EDX + 0x14]
// 004836b2: MOV dword ptr [EDX + 0x20],ECX
// 004836b5: ADD EBX,EAX
// 004836b7: MOV EAX,dword ptr [EDX + 0x2c]
// 004836ba: MOV dword ptr [EDX + 0x10],EBX
// 004836bd: ADD ESI,EAX
// 004836bf: MOV EAX,dword ptr [EDX + 0x34]
// 004836c2: MOV dword ptr [EDX + 0x28],ESI
// 004836c5: ADD EDI,EAX
// 004836c7: MOV dword ptr [EDX + 0x30],EDI
// 004836ca: MOV DL,byte ptr [0x02d052a1]
//   XREF to: 02d052a1 (READ)
// 004836d0: MOV EBP,dword ptr [0x02c6cb70]
//   XREF to: 02c6cb70 (READ)
// 004836d6: TEST DL,0x2
// 004836d9: JNZ 0x0048399d
//   XREF to: 0048399d (CONDITIONAL_JUMP)
// 004836df: INC dword ptr [ESP + 0x4c]
// 004836e3: JMP 0x00483576
//   XREF to: 00483576 (UNCONDITIONAL_JUMP)
// 004836e8: MOV EDI,dword ptr [EBX + 0x14]
//   Label: LAB_004836e8
//   XREF to: 00688028 (DATA)
// 004836eb: CMP EDI,dword ptr [ECX + 0x14]
//   XREF to: 00688028 (DATA)
// 004836ee: JLE 0x004836fc
//   XREF to: 004836fc (CONDITIONAL_JUMP)
// 004836f0: MOV ESI,ECX
// 004836f2: MOV dword ptr [ESP + 0x50],EBX
//   XREF to: Stack[-0x1c] (WRITE)
// 004836f6: MOV ECX,EAX
// 004836f8: MOV EAX,EDX
// 004836fa: MOV EDX,ECX
// 004836fc: IMUL ECX,EBP,0x48
//   Label: LAB_004836fc
// 004836ff: ADD ECX,0x2c6cb74
//   XREF to: 02c6cb74 (DATA)
// 00483705: MOV dword ptr [ECX],EAX
//   XREF to: 02c6cb74 (WRITE)
// 00483707: MOV EDI,dword ptr [0x02c6cff4]
//   XREF to: 02c6cff4 (READ)
// 0048370d: MOV dword ptr [ECX + 0x4],EDX
//   XREF to: 02c6cb78 (WRITE)
// 00483710: CMP EAX,EDI
// 00483712: JGE 0x00483719
//   XREF to: 00483719 (CONDITIONAL_JUMP)
// 00483714: MOV [0x02c6cff4],EAX
//   XREF to: 02c6cff4 (WRITE)
// 00483719: CMP EDX,dword ptr [0x02c6cff8]
//   Label: LAB_00483719
//   XREF to: 02c6cff8 (READ)
// 0048371f: JLE 0x00483727
//   XREF to: 00483727 (CONDITIONAL_JUMP)
// 00483721: MOV dword ptr [0x02c6cff8],EDX
//   XREF to: 02c6cff8 (WRITE)
// 00483727: MOV EBX,dword ptr [ESP + 0x50]
//   Label: LAB_00483727
//   XREF to: Stack[-0x1c] (READ)
// 0048372b: MOV EDX,dword ptr [ESI + 0x14]
//   XREF to: 00688028 (DATA)
// 0048372e: MOV EBX,dword ptr [EBX + 0x14]
//   XREF to: 00688028 (DATA)
// 00483731: SUB EBX,EDX
// 00483733: CMP EBX,0x10000
// 00483739: JNC 0x00483908
//   XREF to: 00483908 (CONDITIONAL_JUMP)
// 0048373f: MOV dword ptr [0x02c6cb70],EBP
//   XREF to: 02c6cb70 (WRITE)
// 00483745: XOR EBX,EBX
// 00483747: MOV EAX,dword ptr [ESP + 0x50]
//   Label: LAB_00483747
//   XREF to: Stack[-0x1c] (READ)
// 0048374b: MOV EDX,dword ptr [ESI + 0x10]
//   XREF to: 00688024 (DATA)
// 0048374e: MOV EAX,dword ptr [EAX + 0x10]
//   XREF to: 00688024 (DATA)
// 00483751: MOV EDI,dword ptr [ESI + 0x14]
//   XREF to: 00688028 (DATA)
// 00483754: SUB EAX,EDX
// 00483756: AND EDI,0xffff
// 0048375c: MOV EDX,EAX
// 0048375e: MOV EAX,EBX
// 00483760: XOR DI,0xffff
// 00483764: IMUL EDX
// 00483766: SHRD EAX,EDX,0x10
// 0048376a: MOV EDX,EAX
// 0048376c: MOV dword ptr [ECX + 0xc],EAX
//   XREF to: 02c6cb80 (WRITE)
// 0048376f: MOV EAX,EDI
// 00483771: IMUL EDX
// 00483773: SHRD EAX,EDX,0x10
// 00483777: MOV dword ptr [ESP + 0x40],EAX
//   XREF to: Stack[-0x2c] (WRITE)
// 0048377b: MOV EDX,dword ptr [ESP + 0x40]
//   XREF to: Stack[-0x2c] (READ)
// 0048377f: MOV EAX,dword ptr [ESI + 0x10]
//   XREF to: 00688024 (DATA)
// 00483782: ADD EAX,EDX
// 00483784: MOV dword ptr [ECX + 0x8],EAX
//   XREF to: 02c6cb7c (WRITE)
// 00483787: MOV EAX,dword ptr [ESP + 0x50]
//   XREF to: Stack[-0x1c] (READ)
// 0048378b: MOV EDX,dword ptr [ESI + 0x18]
//   XREF to: 0068802c (DATA)
// 0048378e: MOV EAX,dword ptr [EAX + 0x18]
//   XREF to: 0068802c (DATA)
// 00483791: SUB EAX,EDX
// 00483793: MOV EDX,EAX
// 00483795: MOV EAX,EBX
// 00483797: IMUL EDX
// 00483799: SHRD EAX,EDX,0x10
// 0048379d: MOV EDX,EAX
// 0048379f: MOV dword ptr [ECX + 0x1c],EAX
//   XREF to: 02c6cb90 (WRITE)
// 004837a2: MOV EAX,EDI
// 004837a4: IMUL EDX
// 004837a6: SHRD EAX,EDX,0x10
// 004837aa: MOV dword ptr [ESP + 0x40],EAX
//   XREF to: Stack[-0x2c] (WRITE)
// 004837ae: MOV EDX,dword ptr [ESP + 0x40]
//   XREF to: Stack[-0x2c] (READ)
// 004837b2: MOV EAX,dword ptr [ESI + 0x18]
//   XREF to: 0068802c (DATA)
// 004837b5: ADD EAX,EDX
// 004837b7: MOV dword ptr [ECX + 0x18],EAX
//   XREF to: 02c6cb8c (WRITE)
// 004837ba: MOV EAX,dword ptr [ESP + 0x50]
//   XREF to: Stack[-0x1c] (READ)
// 004837be: MOV EDX,dword ptr [ESI + 0x1c]
//   XREF to: 00688030 (DATA)
// 004837c1: MOV EAX,dword ptr [EAX + 0x1c]
//   XREF to: 00688030 (DATA)
// 004837c4: SUB EAX,EDX
// 004837c6: MOV EDX,EAX
// 004837c8: MOV EAX,EBX
// 004837ca: IMUL EDX
// 004837cc: SHRD EAX,EDX,0x10
// 004837d0: MOV EDX,EAX
// 004837d2: MOV dword ptr [ECX + 0x24],EAX
//   XREF to: 02c6cb98 (WRITE)
// 004837d5: MOV EAX,EDI
// 004837d7: IMUL EDX
// 004837d9: SHRD EAX,EDX,0x10
// 004837dd: MOV dword ptr [ESP + 0x40],EAX
//   XREF to: Stack[-0x2c] (WRITE)
// 004837e1: MOV EDX,dword ptr [ESP + 0x40]
//   XREF to: Stack[-0x2c] (READ)
// 004837e5: MOV EAX,dword ptr [ESI + 0x1c]
//   XREF to: 00688030 (DATA)
// 004837e8: ADD EAX,EDX
// 004837ea: MOV dword ptr [ECX + 0x20],EAX
//   XREF to: 02c6cb94 (WRITE)
// 004837ed: MOV EAX,dword ptr [ESP + 0x50]
//   XREF to: Stack[-0x1c] (READ)
// 004837f1: MOV EDX,dword ptr [ESI + 0x20]
//   XREF to: 00688034 (DATA)
// 004837f4: MOV EAX,dword ptr [EAX + 0x20]
//   XREF to: 00688034 (DATA)
// 004837f7: SUB EAX,EDX
// 004837f9: MOV EDX,EAX
// 004837fb: MOV EAX,EBX
// 004837fd: IMUL EDX
// 004837ff: SHRD EAX,EDX,0x10
// 00483803: MOV EDX,EAX
// 00483805: MOV dword ptr [ECX + 0x14],EAX
//   XREF to: 02c6cb88 (WRITE)
// 00483808: MOV EAX,EDI
// 0048380a: IMUL EDX
// 0048380c: SHRD EAX,EDX,0x10
// 00483810: MOV dword ptr [ESP + 0x40],EAX
//   XREF to: Stack[-0x2c] (WRITE)
// 00483814: MOV EDX,dword ptr [ESP + 0x40]
//   XREF to: Stack[-0x2c] (READ)
// 00483818: MOV EAX,dword ptr [ESI + 0x20]
//   XREF to: 00688034 (DATA)
// 0048381b: ADD EAX,EDX
// 0048381d: MOV dword ptr [ECX + 0x10],EAX
//   XREF to: 02c6cb84 (WRITE)
// 00483820: MOV EAX,dword ptr [ESP + 0x50]
//   XREF to: Stack[-0x1c] (READ)
// 00483824: MOV EDX,dword ptr [ESI + 0x2c]
//   XREF to: 00688040 (DATA)
// 00483827: MOV EAX,dword ptr [EAX + 0x2c]
//   XREF to: 00688040 (DATA)
// 0048382a: SUB EAX,EDX
// 0048382c: MOV EDX,EAX
// 0048382e: MOV EAX,EBX
// 00483830: IMUL EDX
// 00483832: SHRD EAX,EDX,0x10
// 00483836: MOV EDX,EAX
// 00483838: MOV dword ptr [ECX + 0x34],EAX
//   XREF to: 02c6cba8 (WRITE)
// 0048383b: MOV EAX,EDI
// 0048383d: IMUL EDX
// 0048383f: SHRD EAX,EDX,0x10
// 00483843: MOV dword ptr [ESP + 0x40],EAX
//   XREF to: Stack[-0x2c] (WRITE)
// 00483847: MOV EDX,dword ptr [ESP + 0x40]
//   XREF to: Stack[-0x2c] (READ)
// 0048384b: MOV EAX,dword ptr [ESI + 0x2c]
//   XREF to: 00688040 (DATA)
// 0048384e: ADD EAX,EDX
// 00483850: MOV dword ptr [ECX + 0x30],EAX
//   XREF to: 02c6cba4 (WRITE)
// 00483853: CMP dword ptr [0x00772a74],0x0
//   XREF to: 00772a74 (READ)
// 0048385a: JZ 0x0048391e
//   XREF to: 0048391e (CONDITIONAL_JUMP)
// 00483860: MOV EAX,dword ptr [ESP + 0x50]
//   XREF to: Stack[-0x1c] (READ)
// 00483864: MOV EDX,dword ptr [ESI + 0x8]
//   XREF to: 0068801c (DATA)
// 00483867: MOV EAX,dword ptr [EAX + 0x8]
//   XREF to: 0068801c (DATA)
// 0048386a: SUB EAX,EDX
// 0048386c: MOV EDX,EAX
// 0048386e: MOV EAX,EBX
// 00483870: IMUL EDX
// 00483872: SHRD EAX,EDX,0x10
// 00483876: MOV EDX,EAX
// 00483878: MOV dword ptr [ECX + 0x2c],EAX
//   XREF to: 02c6cba0 (WRITE)
// 0048387b: MOV EAX,EDI
// 0048387d: IMUL EDX
// 0048387f: SHRD EAX,EDX,0x10
// 00483883: MOV dword ptr [ESP + 0x40],EAX
//   XREF to: Stack[-0x2c] (WRITE)
// 00483887: MOV EDX,dword ptr [ESP + 0x40]
//   XREF to: Stack[-0x2c] (READ)
// 0048388b: MOV EAX,dword ptr [ESI + 0x8]
//   XREF to: 0068801c (DATA)
// 0048388e: ADD EAX,EDX
//   Label: LAB_0048388e
// 00483890: MOV dword ptr [ECX + 0x28],EAX
//   XREF to: 02c6cb9c (WRITE)
// 00483893: TEST byte ptr [0x02d052a1],0x2
//   XREF to: 02d052a1 (READ)
// 0048389a: JZ 0x004838fc
//   XREF to: 004838fc (CONDITIONAL_JUMP)
// 0048389c: MOV EAX,dword ptr [ESP + 0x50]
//   XREF to: Stack[-0x1c] (READ)
// 004838a0: MOV EDX,dword ptr [ESI + 0x24]
//   XREF to: 00688038 (DATA)
// 004838a3: MOV EAX,dword ptr [EAX + 0x24]
//   XREF to: 00688038 (DATA)
// 004838a6: SUB EAX,EDX
// 004838a8: MOV EDX,EAX
// 004838aa: MOV EAX,EBX
// 004838ac: IMUL EDX
// 004838ae: SHRD EAX,EDX,0x10
// 004838b2: MOV EDX,EAX
// 004838b4: MOV dword ptr [ECX + 0x3c],EAX
//   XREF to: 02c6cbb0 (WRITE)
// 004838b7: MOV EAX,EDI
// 004838b9: IMUL EDX
// 004838bb: SHRD EAX,EDX,0x10
// 004838bf: MOV dword ptr [ESP + 0x40],EAX
//   XREF to: Stack[-0x2c] (WRITE)
// 004838c3: MOV EDX,dword ptr [ESP + 0x40]
//   XREF to: Stack[-0x2c] (READ)
// 004838c7: MOV EAX,dword ptr [ESI + 0x24]
//   XREF to: 00688038 (DATA)
// 004838ca: ADD EAX,EDX
// 004838cc: MOV dword ptr [ECX + 0x38],EAX
//   XREF to: 02c6cbac (WRITE)
// 004838cf: MOV EAX,dword ptr [ESP + 0x50]
//   XREF to: Stack[-0x1c] (READ)
// 004838d3: MOV EDX,dword ptr [ESI + 0x28]
//   XREF to: 0068803c (DATA)
// 004838d6: MOV EAX,dword ptr [EAX + 0x28]
//   XREF to: 0068803c (DATA)
// 004838d9: SUB EAX,EDX
// 004838db: MOV EDX,EAX
// 004838dd: MOV EAX,EBX
// 004838df: IMUL EDX
// 004838e1: SHRD EAX,EDX,0x10
// 004838e5: MOV EDX,EAX
// 004838e7: MOV dword ptr [ECX + 0x44],EAX
//   XREF to: 02c6cbb8 (WRITE)
// 004838ea: MOV EAX,EDI
// 004838ec: IMUL EDX
// 004838ee: SHRD EAX,EDX,0x10
// 004838f2: MOV EDX,EAX
// 004838f4: MOV EAX,dword ptr [ESI + 0x28]
//   XREF to: 0068803c (DATA)
// 004838f7: ADD EAX,EDX
// 004838f9: MOV dword ptr [ECX + 0x40],EAX
//   XREF to: 02c6cbb4 (WRITE)
// 004838fc: MOV EBP,dword ptr [0x02c6cb70]
//   Label: LAB_004838fc
//   XREF to: 02c6cb70 (READ)
// 00483902: INC EBP
// 00483903: JMP 0x004834de
//   XREF to: 004834de (UNCONDITIONAL_JUMP)
// 00483908: MOV EAX,0xffffffff
//   Label: LAB_00483908
// 0048390d: XOR EDX,EDX
// 0048390f: DIV EBX
// 00483911: MOV dword ptr [0x02c6cb70],EBP
//   XREF to: 02c6cb70 (WRITE)
// 00483917: MOV EBX,EAX
// 00483919: JMP 0x00483747
//   XREF to: 00483747 (UNCONDITIONAL_JUMP)
// 0048391e: MOV EAX,dword ptr [ESP + 0x50]
//   Label: LAB_0048391e
//   XREF to: Stack[-0x1c] (READ)
// 00483922: MOV EDX,dword ptr [ESI + 0xc]
//   XREF to: 00688020 (DATA)
// 00483925: MOV EAX,dword ptr [EAX + 0xc]
//   XREF to: 00688020 (DATA)
// 00483928: SUB EAX,EDX
// 0048392a: MOV EDX,EAX
// 0048392c: MOV EAX,EBX
// 0048392e: IMUL EDX
// 00483930: SHRD EAX,EDX,0x10
// 00483934: MOV EDX,EAX
// 00483936: MOV dword ptr [ECX + 0x2c],EAX
//   XREF to: 02c6cba0 (WRITE)
// 00483939: MOV EAX,EDI
// 0048393b: IMUL EDX
// 0048393d: SHRD EAX,EDX,0x10
// 00483941: MOV dword ptr [ESP + 0x40],EAX
//   XREF to: Stack[-0x2c] (WRITE)
// 00483945: MOV EDX,dword ptr [ESP + 0x40]
//   XREF to: Stack[-0x2c] (READ)
// 00483949: MOV EAX,dword ptr [ESI + 0xc]
//   XREF to: 00688020 (DATA)
// 0048394c: JMP 0x0048388e
//   XREF to: 0048388e (UNCONDITIONAL_JUMP)
// 00483951: INC EAX
//   Label: LAB_00483951
// 00483952: ADD EBX,0x48
// 00483955: CMP EAX,EBP
// 00483957: JL 0x00483514
//   XREF to: 00483514 (CONDITIONAL_JUMP)
// 0048395d: XOR EBX,EBX
//   Label: LAB_0048395d
// 0048395f: JMP 0x00483524
//   XREF to: 00483524 (UNCONDITIONAL_JUMP)
// 00483964: INC EDX
//   Label: LAB_00483964
// 00483965: ADD EAX,0x48
// 00483968: CMP EDX,EBP
// 0048396a: JL 0x0048354b
//   XREF to: 0048354b (CONDITIONAL_JUMP)
// 00483970: XOR EAX,EAX
//   Label: LAB_00483970
// 00483972: JMP 0x0048355b
//   XREF to: 0048355b (UNCONDITIONAL_JUMP)
// 00483977: INC EDX
//   Label: LAB_00483977
// 00483978: ADD EAX,0x48
// 0048397b: CMP EDX,EBP
// 0048397d: JL 0x004835a6
//   XREF to: 004835a6 (CONDITIONAL_JUMP)
// 00483983: XOR EAX,EAX
//   Label: LAB_00483983
// 00483985: JMP 0x004835b6
//   XREF to: 004835b6 (UNCONDITIONAL_JUMP)
// 0048398a: INC EDX
//   Label: LAB_0048398a
// 0048398b: ADD EAX,0x48
//   XREF to: 02c6cbbc (PARAM)
// 0048398e: CMP EDX,EBP
// 00483990: JL 0x004835f6
//   XREF to: 004835f6 (CONDITIONAL_JUMP)
// 00483996: XOR EAX,EAX
//   Label: LAB_00483996
// 00483998: JMP 0x00483606
//   XREF to: 00483606 (UNCONDITIONAL_JUMP)
// 0048399d: MOV EDX,dword ptr [ESP + 0x54]
//   Label: LAB_0048399d
// 004839a1: MOV EAX,dword ptr [ESP + 0x54]
// 004839a5: MOV ECX,dword ptr [EDX + 0x38]
// 004839a8: MOV EAX,dword ptr [EAX + 0x3c]
// 004839ab: MOV EBX,dword ptr [EDX + 0x40]
// 004839ae: ADD ECX,EAX
// 004839b0: MOV EAX,dword ptr [EDX + 0x44]
// 004839b3: MOV dword ptr [EDX + 0x38],ECX
// 004839b6: ADD EBX,EAX
// 004839b8: MOV EAX,dword ptr [ESP + 0x58]
// 004839bc: MOV dword ptr [EDX + 0x40],EBX
// 004839bf: MOV EDX,dword ptr [ESP + 0x58]
// 004839c3: MOV EAX,dword ptr [EAX + 0x3c]
// 004839c6: MOV ESI,dword ptr [EDX + 0x38]
// 004839c9: MOV EDI,dword ptr [EDX + 0x40]
// 004839cc: ADD ESI,EAX
// 004839ce: MOV EAX,dword ptr [EDX + 0x44]
// 004839d1: MOV dword ptr [EDX + 0x38],ESI
// 004839d4: ADD EDI,EAX
// 004839d6: MOV dword ptr [EDX + 0x40],EDI
// 004839d9: INC dword ptr [ESP + 0x4c]
// 004839dd: JMP 0x00483576
//   XREF to: 00483576 (UNCONDITIONAL_JUMP)
