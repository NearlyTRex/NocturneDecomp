// Name: engine_drender.cpp_renderTriangleSimple_FUN_004839f0
// Address: 004839f0
// Address Range: [[004839f0, 00483ee0]]
// Convention: __cdecl
// Signature: void engine_drender.cpp_renderTriangleSimple_FUN_004839f0(int * vertex_indices, int vertex_count)
// Cross-references:
//   engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_0048a740 (0048a740) at 0048a776 [UNCONDITIONAL_CALL]
//   engine_drender.cpp_CDemonRenderer_renderFaceList_FUN_0048d170 (0048d170) at 0048d352 [UNCONDITIONAL_CALL]
//   engine_drender.cpp_CDemonRenderer_renderGeometryBatch_FUN_0048d410 (0048d410) at 0048d544 [UNCONDITIONAL_CALL]
//   engine_drender.cpp_CDemonRenderer_renderTriangleFacetList_FUN_0048cf00 (0048cf00) at 0048cfad [UNCONDITIONAL_CALL]
// Globals:
//   SRenderVertex[16] g_RenderVertexBuffer
//   undefined4 g_RenderVertexBuffer[0].projected_vertex.transformed_z
//   undefined4 g_RenderVertexBuffer[0].projected_vertex.screen_x
//   undefined4 g_RenderVertexBuffer[0].projected_vertex.screen_y
//   int g_TexturesDisabled
//   int g_CullingMode
//   int g_RenderTriangleEdgeCount
//   SEdgeData[16] g_EdgeInterpolationArray
//   undefined4 DAT_02c6cb78
//   undefined4 DAT_02c6cb7c
//   undefined4 DAT_02c6cb80
//   undefined4 DAT_02c6cb9c
//   undefined4 DAT_02c6cba0
//   undefined4 DAT_02c6cbbc
//   int g_RenderTriangleMinScanlineY
//   int g_RenderTriangleMaxScanlineY
//   int g_RasterizerDepthBias
//   int g_RenderAbortFlag
//   int g_UseExternalRenderer
//   int g_RenderStateFlags
//   int g_RenderStateFlag2
//   int g_RenderedTriangleCount
// Function calls:
//   engine_prim.c_calculateTriangleWindingOrder_FUN_00552150
//   engine_prim.c_prepareDepthBuffer_FUN_00551fb0
//   engine_prim.c_replaceWWithDepth_FUN_00552110
//   wincore_windll.cpp_drawPolygon2_FUN_005b7610
//   wincore_windll.cpp_renderScanline_FUN_005b5710

#include "nocturne.h"

void __cdecl
engine_drender_cpp_renderTriangleSimple_FUN_004839f0(int *vertex_indices,int vertex_count)

{
  int iVar1;
  longlong lVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  BADSPACEBASE *in_ESP;
  int iVar9;
  SEdgeData *pSVar10;
  SRenderVertex *pSVar11;
  int in_stack_0000000c;
  SRenderVertex *in_stack_ffffff90;
  void *in_stack_ffffff94;
  int in_stack_ffffff98;
  int *local_2c;
  int local_28;
  SRenderVertex *local_24;
  SEdgeData *local_14;
  
  if ((g_CullingMode != 0) &&
     (iVar9 = engine_prim_c_calculateTriangleWindingOrder_FUN_00552150
                        (g_RenderVertexBuffer + *vertex_indices,
                         g_RenderVertexBuffer + vertex_indices[1],
                         g_RenderVertexBuffer + vertex_indices[2]), iVar9 == 0)) {
    return;
  }
  g_RenderedTriangleCount = g_RenderedTriangleCount + 1;
  if ((g_UseExternalRenderer == 0) || (g_TexturesDisabled != 0)) {
    if (g_RenderStateFlag2 != 0) {
      if ((uint)g_RenderStateFlag2 < 2) {
        iVar9 = 0;
        piVar3 = (int *)vertex_count;
        if (0 < vertex_count) {
          do {
            iVar9 = iVar9 + 1;
            engine_prim_c_prepareDepthBuffer_FUN_00551fb0(g_RenderVertexBuffer + *piVar3,1);
            piVar3 = piVar3 + 1;
          } while (iVar9 < vertex_count);
        }
      }
      else if ((g_RenderStateFlag2 == PREPROCESS_W_DEPTH_REPLACEMENT) &&
              (iVar9 = 0, piVar3 = (int *)vertex_count, 0 < vertex_count)) {
        do {
          iVar9 = iVar9 + 1;
          engine_prim_c_replaceWWithDepth_FUN_00552110(g_RenderVertexBuffer + *piVar3,1);
          piVar3 = piVar3 + 1;
        } while (iVar9 < vertex_count);
      }
    }
    g_RenderTriangleEdgeCount = 0;
    g_RenderTriangleMaxScanlineY = 0;
    local_28 = 0;
    g_RenderTriangleMinScanlineY = 0x4b0;
    if (0 < vertex_count) {
      local_2c = (int *)vertex_count;
      iVar9 = g_RenderTriangleEdgeCount;
      do {
        iVar4 = local_28 + 1;
        if (vertex_count <= iVar4) {
          iVar4 = 0;
        }
        iVar4 = *(int *)(iVar4 * 4 + vertex_count);
        iVar1 = *local_2c;
        iVar5 = g_RenderVertexBuffer[iVar1].projected_vertex.screen_y >> 0x10;
        iVar8 = g_RenderVertexBuffer[iVar4].projected_vertex.screen_y >> 0x10;
        g_RenderTriangleEdgeCount = iVar9;
        if (iVar5 != iVar8) {
          iVar6 = iVar5;
          pSVar11 = g_RenderVertexBuffer + iVar1;
          local_24 = g_RenderVertexBuffer + iVar4;
          if (g_RenderVertexBuffer[iVar4].projected_vertex.screen_y <
              g_RenderVertexBuffer[iVar1].projected_vertex.screen_y) {
            iVar6 = iVar8;
            iVar8 = iVar5;
            pSVar11 = g_RenderVertexBuffer + iVar4;
            local_24 = g_RenderVertexBuffer + iVar1;
          }
          g_EdgeInterpolationArray[iVar9].y_start = iVar6;
          iVar4 = g_RenderTriangleMinScanlineY;
          g_EdgeInterpolationArray[iVar9].y_end = iVar8;
          if (iVar6 < iVar4) {
            g_RenderTriangleMinScanlineY = iVar6;
          }
          if (g_RenderTriangleMaxScanlineY < iVar8) {
            g_RenderTriangleMaxScanlineY = iVar8;
          }
          uVar7 = (local_24->projected_vertex).screen_y - (pSVar11->projected_vertex).screen_y;
          if (uVar7 < 0x10000) {
            iVar4 = 0;
          }
          else {
            iVar4 = (int)(0xffffffff / (ulonglong)uVar7);
          }
          lVar2 = (longlong)iVar4 *
                  (longlong)
                  ((local_24->projected_vertex).screen_x - (pSVar11->projected_vertex).screen_x);
          g_EdgeInterpolationArray[iVar9].x_delta =
               (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
          lVar2 = (longlong)iVar4 *
                  (longlong)
                  (((local_24->projected_vertex).transformed_z -
                   (pSVar11->projected_vertex).transformed_z) * 0x100);
          g_EdgeInterpolationArray[iVar9].z_delta =
               (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
          uVar7 = (uint)(ushort)((ushort)(pSVar11->projected_vertex).screen_y ^ 0xffff);
          lVar2 = (longlong)(int)uVar7 * (longlong)g_EdgeInterpolationArray[iVar9].x_delta;
          g_EdgeInterpolationArray[iVar9].x_current =
               (pSVar11->projected_vertex).screen_x +
               ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10);
          lVar2 = (longlong)(int)uVar7 * (longlong)g_EdgeInterpolationArray[iVar9].z_delta;
          g_RenderTriangleEdgeCount = g_RenderTriangleEdgeCount + 1;
          g_EdgeInterpolationArray[iVar9].z_current =
               ((pSVar11->projected_vertex).transformed_z * 0x100 - g_RasterizerDepthBias) +
               ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10);
        }
        local_2c = local_2c + 1;
        local_28 = local_28 + 1;
        iVar9 = g_RenderTriangleEdgeCount;
      } while (local_28 < vertex_count);
    }
    iVar9 = 0;
    g_RenderAbortFlag = 0;
    pSVar10 = g_EdgeInterpolationArray;
    if (0 < g_RenderTriangleEdgeCount) {
      do {
        if ((g_RenderTriangleMinScanlineY == pSVar10->y_start) && (pSVar10 != (SEdgeData *)0x0))
        goto LAB_00483be4;
        iVar9 = iVar9 + 1;
        pSVar10 = pSVar10 + 1;
      } while (iVar9 < g_RenderTriangleEdgeCount);
    }
    pSVar10 = (SEdgeData *)0x0;
LAB_00483be4:
    if (pSVar10 != (SEdgeData *)0x0) {
      local_14 = g_EdgeInterpolationArray;
      iVar9 = 0;
      if (0 < g_RenderTriangleEdgeCount) {
        do {
          if ((g_RenderTriangleMinScanlineY == local_14->y_start) && (local_14 != pSVar10))
          goto LAB_00483c1d;
          iVar9 = iVar9 + 1;
          local_14 = local_14 + 1;
        } while (iVar9 < g_RenderTriangleEdgeCount);
      }
      local_14 = (SEdgeData *)0x0;
LAB_00483c1d:
      iVar9 = g_RenderTriangleMinScanlineY;
      if (local_14 != (SEdgeData *)0x0) {
        do {
          if (pSVar10->y_end <= iVar9) {
            pSVar10->y_start = -1;
            pSVar10 = g_EdgeInterpolationArray;
            iVar4 = 0;
            if (0 < g_RenderTriangleEdgeCount) {
              do {
                if ((iVar9 == pSVar10->y_start) && (pSVar10 != local_14)) goto LAB_00483c78;
                iVar4 = iVar4 + 1;
                pSVar10 = pSVar10 + 1;
              } while (iVar4 < g_RenderTriangleEdgeCount);
            }
            pSVar10 = (SEdgeData *)0x0;
LAB_00483c78:
            if (pSVar10 == (SEdgeData *)0x0) {
              return;
            }
          }
          if (local_14->y_end <= iVar9) {
            local_14->y_start = -1;
            local_14 = g_EdgeInterpolationArray;
            iVar4 = 0;
            if (0 < g_RenderTriangleEdgeCount) {
              do {
                if ((iVar9 == local_14->y_start) && (local_14 != pSVar10)) goto LAB_00483cc8;
                iVar4 = iVar4 + 1;
                local_14 = local_14 + 1;
              } while (iVar4 < g_RenderTriangleEdgeCount);
            }
            local_14 = (SEdgeData *)0x0;
LAB_00483cc8:
            if (local_14 == (SEdgeData *)0x0) {
              return;
            }
          }
          wincore_windll_cpp_renderScanline_FUN_005b5710
                    (in_stack_ffffff90,in_stack_ffffff94,in_stack_ffffff98);
          if (g_RenderAbortFlag != 0) {
            return;
          }
          *(int *)(in_stack_0000000c + 8) =
               *(int *)(in_stack_0000000c + 8) + *(int *)(in_stack_0000000c + 0xc);
          *(int *)(in_stack_0000000c + 0x28) =
               *(int *)(in_stack_0000000c + 0x28) + *(int *)(in_stack_0000000c + 0x2c);
          *(int *)(vertex_count + 8) = *(int *)(vertex_count + 8) + *(int *)(vertex_count + 0xc);
          *(int *)(vertex_count + 0x28) =
               *(int *)(vertex_count + 0x28) + *(int *)(vertex_count + 0x2c);
          iVar9 = (int)vertex_indices + 1;
        } while( true );
      }
    }
  }
  else {
    if (0 < vertex_count) {
      iVar9 = 0;
      piVar3 = (int *)vertex_count;
      do {
        iVar4 = *piVar3;
        iVar9 = iVar9 + 1;
        piVar3 = piVar3 + 1;
        *(SRenderVertex **)(&stack0xffffff8c + iVar9 * 4) = g_RenderVertexBuffer + iVar4;
      } while (iVar9 < vertex_count);
    }
    wincore_windll_cpp_drawPolygon2_FUN_005b7610
              ((SRenderVertex **)&stack0xffffff90,vertex_count,g_RenderStateFlags);
  }
  return;
}


// Assembly code:
// 004839f0: PUSH EBX
//   Label: engine_drender.cpp_renderTriangleSimple_FUN_004839f0
// 004839f1: PUSH ESI
// 004839f2: PUSH EDI
// 004839f3: PUSH EBP
// 004839f4: SUB ESP,0x64
// 004839f7: MOV EBP,dword ptr [0x02c6cb70]
//   XREF to: 02c6cb70 (READ)
// 004839fd: MOV EDI,dword ptr [ESP + 0x7c]
//   XREF to: Stack[0x8] (READ)
// 00483a01: CMP dword ptr [0x00772a7c],0x0
//   XREF to: 00772a7c (READ)
// 00483a08: JNZ 0x00483a83
//   XREF to: 00483a83 (CONDITIONAL_JUMP)
// 00483a0e: MOV ECX,dword ptr [0x030e56b8]
//   Label: LAB_00483a0e
//   XREF to: 030e56b8 (READ)
// 00483a14: MOV EBX,dword ptr [0x02d03e94]
//   XREF to: 02d03e94 (READ)
// 00483a1a: INC ECX
// 00483a1b: MOV EBP,dword ptr [0x02c6cb70]
//   XREF to: 02c6cb70 (READ)
// 00483a21: MOV dword ptr [0x030e56b8],ECX
//   XREF to: 030e56b8 (WRITE)
// 00483a27: TEST EBX,EBX
// 00483a29: JZ 0x00483d78
//   XREF to: 00483d78 (CONDITIONAL_JUMP)
// 00483a2f: MOV ESI,dword ptr [0x00772a74]
//   XREF to: 00772a74 (READ)
// 00483a35: TEST ESI,ESI
// 00483a37: JNZ 0x00483d78
//   XREF to: 00483d78 (CONDITIONAL_JUMP)
// 00483a3d: TEST EDI,EDI
// 00483a3f: JLE 0x00483a60
//   XREF to: 00483a60 (CONDITIONAL_JUMP)
// 00483a41: MOV EAX,dword ptr [ESP + 0x78]
//   XREF to: Stack[0x4] (READ)
// 00483a45: IMUL EDX,dword ptr [EAX],0x30
//   Label: LAB_00483a45
// 00483a48: INC ESI
// 00483a49: ADD EDX,0x688014
//   XREF to: 00688014 (DATA)
// 00483a4f: ADD EAX,0x4
// 00483a52: MOV dword ptr [ESP + ESI*0x4 + -0x4],EDX
// 00483a56: CMP ESI,EDI
// 00483a58: JL 0x00483a45
//   XREF to: 00483a45 (CONDITIONAL_JUMP)
// 00483a5a: LEA EAX,[EAX]
// 00483a60: MOV EBX,dword ptr [0x02d052a0]
//   Label: LAB_00483a60
//   XREF to: 02d052a0 (READ)
// 00483a66: PUSH EBX
// 00483a67: PUSH EDI
// 00483a68: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x74] (DATA)
// 00483a6c: PUSH EAX
// 00483a6d: CALL wincore_windll.cpp_drawPolygon2_FUN_005b7610
//   XREF to: 005b7610 (UNCONDITIONAL_CALL)
// 00483a72: ADD ESP,0xc
// 00483a75: MOV EBP,dword ptr [0x02c6cb70]
//   Label: LAB_00483a75
//   XREF to: 02c6cb70 (READ)
// 00483a7b: ADD ESP,0x64
// 00483a7e: POP EBP
// 00483a7f: POP EDI
// 00483a80: POP ESI
// 00483a81: POP EBX
// 00483a82: RET
// 00483a83: MOV EDX,dword ptr [ESP + 0x78]
//   Label: LAB_00483a83
//   XREF to: Stack[0x4] (READ)
// 00483a87: MOV EDX,dword ptr [EDX + 0x8]
// 00483a8a: LEA EAX,[EDX*0x4 + 0x0]
// 00483a91: SUB EAX,EDX
// 00483a93: SHL EAX,0x4
// 00483a96: MOV EDX,dword ptr [ESP + 0x78]
//   XREF to: Stack[0x4] (READ)
// 00483a9a: ADD EAX,0x688014
//   XREF to: 00688014 (DATA)
// 00483a9f: MOV EDX,dword ptr [EDX + 0x4]
// 00483aa2: PUSH EAX
// 00483aa3: LEA EAX,[EDX*0x4 + 0x0]
// 00483aaa: SUB EAX,EDX
// 00483aac: SHL EAX,0x4
// 00483aaf: MOV EDX,dword ptr [ESP + 0x7c]
//   XREF to: Stack[0x4] (READ)
// 00483ab3: ADD EAX,0x688014
//   XREF to: 00688014 (DATA)
// 00483ab8: MOV EDX,dword ptr [EDX]
// 00483aba: PUSH EAX
// 00483abb: LEA EAX,[EDX*0x4 + 0x0]
// 00483ac2: SUB EAX,EDX
// 00483ac4: SHL EAX,0x4
// 00483ac7: ADD EAX,0x688014
//   XREF to: 00688014 (DATA)
// 00483acc: PUSH EAX
// 00483acd: CALL engine_prim.c_calculateTriangleWindingOrder_FUN_00552150
//   XREF to: 00552150 (UNCONDITIONAL_CALL)
// 00483ad2: ADD ESP,0xc
// 00483ad5: TEST EAX,EAX
// 00483ad7: JNZ 0x00483a0e
//   XREF to: 00483a0e (CONDITIONAL_JUMP)
// 00483add: MOV EBP,dword ptr [0x02c6cb70]
//   XREF to: 02c6cb70 (READ)
// 00483ae3: ADD ESP,0x64
// 00483ae6: POP EBP
// 00483ae7: POP EDI
// 00483ae8: POP ESI
// 00483ae9: POP EBX
// 00483aea: RET
// 00483aeb: XOR ESI,ESI
//   Label: LAB_00483aeb
// 00483aed: TEST EDI,EDI
// 00483aef: JLE 0x00483b20
//   XREF to: 00483b20 (CONDITIONAL_JUMP)
// 00483af1: MOV EBX,dword ptr [ESP + 0x78]
//   XREF to: Stack[0x4] (READ)
// 00483af5: MOV dword ptr [0x02c6cb70],EBP
//   XREF to: 02c6cb70 (WRITE)
// 00483afb: IMUL EAX,dword ptr [EBX],0x30
//   Label: LAB_00483afb
// 00483afe: PUSH 0x1
// 00483b00: ADD EAX,0x688014
//   XREF to: 00688014 (DATA)
// 00483b05: PUSH EAX
// 00483b06: ADD EBX,0x4
// 00483b09: INC ESI
// 00483b0a: CALL engine_prim.c_prepareDepthBuffer_FUN_00551fb0
//   XREF to: 00551fb0 (UNCONDITIONAL_CALL)
// 00483b0f: ADD ESP,0x8
// 00483b12: CMP ESI,EDI
// 00483b14: JL 0x00483afb
//   XREF to: 00483afb (CONDITIONAL_JUMP)
// 00483b16: LEA EAX,[EAX]
// 00483b1c: LEA EDX,[EDX]
// 00483b20: MOV EBX,0x4b0
//   Label: LAB_00483b20
// 00483b25: XOR ESI,ESI
// 00483b27: XOR EBP,EBP
// 00483b29: MOV dword ptr [0x02c6cff8],ESI
//   XREF to: 02c6cff8 (WRITE)
// 00483b2f: MOV dword ptr [ESP + 0x48],ESI
//   XREF to: Stack[-0x2c] (WRITE)
// 00483b33: MOV dword ptr [0x02c6cff4],EBX
//   XREF to: 02c6cff4 (WRITE)
// 00483b39: TEST EDI,EDI
// 00483b3b: JLE 0x00483bb7
//   XREF to: 00483bb7 (CONDITIONAL_JUMP)
// 00483b41: MOV EAX,dword ptr [ESP + 0x78]
//   XREF to: Stack[0x4] (READ)
// 00483b45: MOV dword ptr [ESP + 0x44],EAX
//   XREF to: Stack[-0x30] (WRITE)
// 00483b49: MOV EAX,dword ptr [ESP + 0x48]
//   Label: LAB_00483b49
//   XREF to: Stack[-0x2c] (READ)
// 00483b4d: INC EAX
// 00483b4e: CMP EAX,EDI
// 00483b50: JL 0x00483b54
//   XREF to: 00483b54 (CONDITIONAL_JUMP)
// 00483b52: XOR EAX,EAX
// 00483b54: MOV EDX,dword ptr [ESP + 0x78]
//   Label: LAB_00483b54
//   XREF to: Stack[0x4] (READ)
// 00483b58: SHL EAX,0x2
// 00483b5b: ADD EAX,EDX
// 00483b5d: IMUL EAX,dword ptr [EAX],0x30
// 00483b60: MOV EDX,0x688014
//   XREF to: 00688014 (DATA)
// 00483b65: ADD EDX,EAX
// 00483b67: MOV EAX,dword ptr [ESP + 0x44]
//   XREF to: Stack[-0x30] (READ)
// 00483b6b: IMUL EAX,dword ptr [EAX],0x30
// 00483b6e: MOV dword ptr [ESP + 0x54],EDX
//   XREF to: Stack[-0x20] (WRITE)
// 00483b72: MOV EDX,0x688014
//   XREF to: 00688014 (DATA)
// 00483b77: ADD EDX,EAX
// 00483b79: MOV EAX,dword ptr [ESP + 0x54]
//   XREF to: Stack[-0x20] (READ)
// 00483b7d: MOV dword ptr [ESP + 0x50],EDX
//   XREF to: Stack[-0x24] (WRITE)
// 00483b81: MOV ESI,EDX
// 00483b83: MOV dword ptr [ESP + 0x4c],EAX
//   XREF to: Stack[-0x28] (WRITE)
// 00483b87: MOV EAX,dword ptr [EDX + 0x14]
//   XREF to: 00688028 (DATA)
// 00483b8a: MOV EDX,dword ptr [ESP + 0x54]
//   XREF to: Stack[-0x20] (READ)
// 00483b8e: MOV EDX,dword ptr [EDX + 0x14]
//   XREF to: 00688028 (DATA)
// 00483b91: SAR EAX,0x10
// 00483b94: SAR EDX,0x10
// 00483b97: CMP EAX,EDX
// 00483b99: JNZ 0x00483d96
//   XREF to: 00483d96 (CONDITIONAL_JUMP)
// 00483b9f: MOV EDX,dword ptr [ESP + 0x44]
//   Label: LAB_00483b9f
//   XREF to: Stack[-0x30] (READ)
// 00483ba3: MOV ECX,dword ptr [ESP + 0x48]
//   XREF to: Stack[-0x2c] (READ)
// 00483ba7: ADD EDX,0x4
// 00483baa: INC ECX
// 00483bab: MOV dword ptr [ESP + 0x44],EDX
//   XREF to: Stack[-0x30] (WRITE)
// 00483baf: MOV dword ptr [ESP + 0x48],ECX
//   XREF to: Stack[-0x2c] (WRITE)
// 00483bb3: CMP EDI,ECX
// 00483bb5: JG 0x00483b49
//   XREF to: 00483b49 (CONDITIONAL_JUMP)
// 00483bb7: MOV EDI,dword ptr [0x02c6cff4]
//   Label: LAB_00483bb7
//   XREF to: 02c6cff4 (READ)
// 00483bbd: XOR ESI,ESI
// 00483bbf: XOR EAX,EAX
// 00483bc1: MOV dword ptr [0x02c6d5a8],ESI
//   XREF to: 02c6d5a8 (WRITE)
// 00483bc7: MOV ESI,0x2c6cb74
//   XREF to: 02c6cb74 (DATA)
// 00483bcc: TEST EBP,EBP
// 00483bce: JLE 0x00483ea1
//   XREF to: 00483ea1 (CONDITIONAL_JUMP)
// 00483bd4: CMP EDI,dword ptr [ESI]
//   Label: LAB_00483bd4
//   XREF to: 02c6cb74 (READ)
//   XREF to: 02c6cbbc (READ)
// 00483bd6: JNZ 0x00483e95
//   XREF to: 00483e95 (CONDITIONAL_JUMP)
// 00483bdc: TEST ESI,ESI
// 00483bde: JZ 0x00483e95
//   XREF to: 00483e95 (CONDITIONAL_JUMP)
// 00483be4: MOV dword ptr [ESP + 0x60],ESI
//   Label: LAB_00483be4
//   XREF to: Stack[-0x14] (WRITE)
//   XREF to: 02c6cb74 (DATA)
//   XREF to: 02c6cbbc (DATA)
// 00483be8: MOV dword ptr [0x02c6cb70],EBP
//   XREF to: 02c6cb70 (WRITE)
// 00483bee: TEST ESI,ESI
// 00483bf0: JZ 0x00483a75
//   XREF to: 00483a75 (CONDITIONAL_JUMP)
// 00483bf6: MOV EAX,0x2c6cb74
//   XREF to: 02c6cb74 (DATA)
// 00483bfb: MOV EBX,dword ptr [0x02c6cff4]
//   XREF to: 02c6cff4 (READ)
// 00483c01: MOV ECX,ESI
//   XREF to: 02c6cb74 (PARAM)
// 00483c03: XOR EDX,EDX
// 00483c05: TEST EBP,EBP
// 00483c07: JLE 0x00483eb4
//   XREF to: 00483eb4 (CONDITIONAL_JUMP)
// 00483c0d: CMP EBX,dword ptr [EAX]
//   Label: LAB_00483c0d
//   XREF to: 02c6cb74 (READ)
//   XREF to: 02c6cbbc (READ)
// 00483c0f: JNZ 0x00483ea8
//   XREF to: 00483ea8 (CONDITIONAL_JUMP)
// 00483c15: CMP EAX,ECX
// 00483c17: JZ 0x00483ea8
//   XREF to: 00483ea8 (CONDITIONAL_JUMP)
// 00483c1d: MOV dword ptr [ESP + 0x5c],EAX
//   Label: LAB_00483c1d
//   XREF to: Stack[-0x18] (WRITE)
//   XREF to: 02c6cb74 (DATA)
//   XREF to: 02c6cbbc (DATA)
// 00483c21: MOV dword ptr [0x02c6cb70],EBP
//   XREF to: 02c6cb70 (WRITE)
// 00483c27: TEST EAX,EAX
// 00483c29: JZ 0x00483a75
//   XREF to: 00483a75 (CONDITIONAL_JUMP)
// 00483c2f: MOV EAX,[0x02c6cff4]
//   XREF to: 02c6cff4 (READ)
// 00483c34: MOV dword ptr [ESP + 0x58],EAX
//   Label: LAB_00483c34
//   XREF to: Stack[-0x1c] (WRITE)
// 00483c38: MOV EDX,dword ptr [ESP + 0x60]
//   XREF to: Stack[-0x14] (READ)
// 00483c3c: MOV EAX,dword ptr [ESP + 0x58]
//   XREF to: Stack[-0x1c] (READ)
// 00483c40: MOV ESI,dword ptr [EDX + 0x4]
//   XREF to: 02c6cb78 (READ)
// 00483c43: MOV dword ptr [0x02c6cb70],EBP
//   XREF to: 02c6cb70 (WRITE)
// 00483c49: CMP EAX,ESI
// 00483c4b: JL 0x00483c8a
//   XREF to: 00483c8a (CONDITIONAL_JUMP)
// 00483c4d: MOV ECX,dword ptr [ESP + 0x5c]
//   XREF to: Stack[-0x18] (READ)
// 00483c51: MOV EBX,EAX
// 00483c53: MOV dword ptr [EDX],0xffffffff
//   XREF to: 02c6cb74 (WRITE)
// 00483c59: MOV EAX,0x2c6cb74
//   XREF to: 02c6cb74 (DATA)
// 00483c5e: XOR EDX,EDX
// 00483c60: TEST EBP,EBP
// 00483c62: JLE 0x00483ec7
//   XREF to: 00483ec7 (CONDITIONAL_JUMP)
// 00483c68: CMP EBX,dword ptr [EAX]
//   Label: LAB_00483c68
//   XREF to: 02c6cb74 (READ)
//   XREF to: 02c6cbbc (READ)
// 00483c6a: JNZ 0x00483ebb
//   XREF to: 00483ebb (CONDITIONAL_JUMP)
// 00483c70: CMP EAX,ECX
// 00483c72: JZ 0x00483ebb
//   XREF to: 00483ebb (CONDITIONAL_JUMP)
// 00483c78: MOV dword ptr [ESP + 0x60],EAX
//   Label: LAB_00483c78
//   XREF to: Stack[-0x14] (WRITE)
//   XREF to: 02c6cb74 (DATA)
//   XREF to: 02c6cbbc (DATA)
// 00483c7c: MOV dword ptr [0x02c6cb70],EBP
//   XREF to: 02c6cb70 (WRITE)
// 00483c82: TEST EAX,EAX
// 00483c84: JZ 0x00483a75
//   XREF to: 00483a75 (CONDITIONAL_JUMP)
// 00483c8a: MOV EDX,dword ptr [ESP + 0x5c]
//   Label: LAB_00483c8a
//   XREF to: Stack[-0x18] (READ)
//   XREF to: 02c6cb74 (PARAM)
// 00483c8e: MOV EAX,dword ptr [ESP + 0x58]
//   XREF to: Stack[-0x1c] (READ)
// 00483c92: CMP EAX,dword ptr [EDX + 0x4]
//   XREF to: 02c6cb78 (READ)
// 00483c95: JL 0x00483cda
//   XREF to: 00483cda (CONDITIONAL_JUMP)
// 00483c97: MOV EBX,dword ptr [ESP + 0x60]
//   XREF to: Stack[-0x14] (READ)
// 00483c9b: MOV EBP,dword ptr [0x02c6cb70]
//   XREF to: 02c6cb70 (READ)
// 00483ca1: MOV ECX,EAX
// 00483ca3: MOV dword ptr [EDX],0xffffffff
//   XREF to: 02c6cb74 (WRITE)
// 00483ca9: MOV EAX,0x2c6cb74
//   XREF to: 02c6cb74 (PARAM)
// 00483cae: XOR EDX,EDX
// 00483cb0: TEST EBP,EBP
// 00483cb2: JLE 0x00483eda
//   XREF to: 00483eda (CONDITIONAL_JUMP)
// 00483cb8: CMP ECX,dword ptr [EAX]
//   Label: LAB_00483cb8
//   XREF to: 02c6cb74 (READ)
//   XREF to: 02c6cbbc (READ)
// 00483cba: JNZ 0x00483ece
//   XREF to: 00483ece (CONDITIONAL_JUMP)
// 00483cc0: CMP EAX,EBX
// 00483cc2: JZ 0x00483ece
//   XREF to: 00483ece (CONDITIONAL_JUMP)
// 00483cc8: MOV dword ptr [ESP + 0x5c],EAX
//   Label: LAB_00483cc8
//   XREF to: Stack[-0x18] (WRITE)
//   XREF to: 02c6cb74 (DATA)
//   XREF to: 02c6cbbc (DATA)
// 00483ccc: MOV dword ptr [0x02c6cb70],EBP
//   XREF to: 02c6cb70 (WRITE)
// 00483cd2: TEST EAX,EAX
// 00483cd4: JZ 0x00483a75
//   XREF to: 00483a75 (CONDITIONAL_JUMP)
// 00483cda: MOV EDI,dword ptr [ESP + 0x5c]
//   Label: LAB_00483cda
//   XREF to: Stack[-0x18] (READ)
// 00483cde: MOV ESI,dword ptr [ESP + 0x60]
//   XREF to: Stack[-0x14] (READ)
// 00483ce2: MOV EBX,dword ptr [ESP + 0x58]
//   XREF to: Stack[-0x1c] (READ)
// 00483ce6: CALL wincore_windll.cpp_renderScanline_FUN_005b5710
//   XREF to: 005b5710 (UNCONDITIONAL_CALL)
// 00483ceb: CMP dword ptr [0x02c6d5a8],0x0
//   XREF to: 02c6d5a8 (READ)
// 00483cf2: JNZ 0x00483a75
//   XREF to: 00483a75 (CONDITIONAL_JUMP)
// 00483cf8: MOV EDX,dword ptr [ESP + 0x60]
// 00483cfc: MOV EAX,dword ptr [ESP + 0x60]
// 00483d00: MOV ECX,dword ptr [EDX + 0x8]
// 00483d03: MOV EAX,dword ptr [EAX + 0xc]
// 00483d06: MOV EBX,dword ptr [EDX + 0x28]
// 00483d09: ADD ECX,EAX
// 00483d0b: MOV EAX,dword ptr [EDX + 0x2c]
// 00483d0e: MOV dword ptr [EDX + 0x8],ECX
// 00483d11: ADD EBX,EAX
// 00483d13: MOV EAX,dword ptr [ESP + 0x5c]
// 00483d17: MOV dword ptr [EDX + 0x28],EBX
// 00483d1a: MOV EDX,dword ptr [ESP + 0x5c]
// 00483d1e: MOV EAX,dword ptr [EAX + 0xc]
// 00483d21: MOV ESI,dword ptr [EDX + 0x8]
// 00483d24: MOV EDI,dword ptr [EDX + 0x28]
// 00483d27: ADD ESI,EAX
// 00483d29: MOV EAX,dword ptr [EDX + 0x2c]
// 00483d2c: MOV EBP,dword ptr [0x02c6cb70]
//   XREF to: 02c6cb70 (READ)
// 00483d32: ADD EDI,EAX
// 00483d34: MOV EAX,dword ptr [ESP + 0x58]
// 00483d38: MOV dword ptr [EDX + 0x8],ESI
// 00483d3b: INC EAX
// 00483d3c: MOV dword ptr [EDX + 0x28],EDI
// 00483d3f: JMP 0x00483c34
//   XREF to: 00483c34 (UNCONDITIONAL_JUMP)
// 00483d44: XOR ESI,ESI
//   Label: LAB_00483d44
// 00483d46: TEST EDI,EDI
// 00483d48: JLE 0x00483b20
//   XREF to: 00483b20 (CONDITIONAL_JUMP)
// 00483d4e: MOV EBX,dword ptr [ESP + 0x78]
//   XREF to: Stack[0x4] (READ)
// 00483d52: MOV dword ptr [0x02c6cb70],EBP
//   XREF to: 02c6cb70 (WRITE)
// 00483d58: IMUL EAX,dword ptr [EBX],0x30
//   Label: LAB_00483d58
// 00483d5b: PUSH 0x1
// 00483d5d: ADD EAX,0x688014
//   XREF to: 00688014 (DATA)
// 00483d62: PUSH EAX
// 00483d63: ADD EBX,0x4
// 00483d66: INC ESI
// 00483d67: CALL engine_prim.c_replaceWWithDepth_FUN_00552110
//   XREF to: 00552110 (UNCONDITIONAL_CALL)
// 00483d6c: ADD ESP,0x8
// 00483d6f: CMP ESI,EDI
// 00483d71: JL 0x00483d58
//   XREF to: 00483d58 (CONDITIONAL_JUMP)
// 00483d73: JMP 0x00483b20
//   XREF to: 00483b20 (UNCONDITIONAL_JUMP)
// 00483d78: MOV EAX,[0x02d052a4]
//   Label: LAB_00483d78
//   XREF to: 02d052a4 (READ)
// 00483d7d: CMP EAX,0x1
// 00483d80: JC 0x00483b20
//   XREF to: 00483b20 (CONDITIONAL_JUMP)
// 00483d86: JBE 0x00483aeb
//   XREF to: 00483aeb (CONDITIONAL_JUMP)
// 00483d8c: CMP EAX,0x6
// 00483d8f: JZ 0x00483d44
//   XREF to: 00483d44 (CONDITIONAL_JUMP)
// 00483d91: JMP 0x00483b20
//   XREF to: 00483b20 (UNCONDITIONAL_JUMP)
// 00483d96: MOV ECX,ESI
//   Label: LAB_00483d96
// 00483d98: MOV ECX,dword ptr [ECX + 0x14]
//   XREF to: 00688028 (DATA)
// 00483d9b: MOV EBX,dword ptr [ESP + 0x54]
//   XREF to: Stack[-0x20] (READ)
// 00483d9f: CMP ECX,dword ptr [EBX + 0x14]
//   XREF to: 00688028 (DATA)
// 00483da2: JLE 0x00483db4
//   XREF to: 00483db4 (CONDITIONAL_JUMP)
// 00483da4: MOV ECX,dword ptr [ESP + 0x50]
//   XREF to: Stack[-0x24] (READ)
// 00483da8: MOV ESI,EBX
// 00483daa: MOV dword ptr [ESP + 0x4c],ECX
//   XREF to: Stack[-0x28] (WRITE)
// 00483dae: MOV ECX,EAX
// 00483db0: MOV EAX,EDX
// 00483db2: MOV EDX,ECX
// 00483db4: IMUL EBX,EBP,0x48
//   Label: LAB_00483db4
// 00483db7: ADD EBX,0x2c6cb74
//   XREF to: 02c6cb74 (DATA)
// 00483dbd: MOV dword ptr [EBX],EAX
//   XREF to: 02c6cb74 (WRITE)
// 00483dbf: MOV ECX,dword ptr [0x02c6cff4]
//   XREF to: 02c6cff4 (READ)
// 00483dc5: MOV dword ptr [EBX + 0x4],EDX
//   XREF to: 02c6cb78 (WRITE)
// 00483dc8: CMP EAX,ECX
// 00483dca: JGE 0x00483dd1
//   XREF to: 00483dd1 (CONDITIONAL_JUMP)
// 00483dcc: MOV [0x02c6cff4],EAX
//   XREF to: 02c6cff4 (WRITE)
// 00483dd1: CMP EDX,dword ptr [0x02c6cff8]
//   Label: LAB_00483dd1
//   XREF to: 02c6cff8 (READ)
// 00483dd7: JLE 0x00483ddf
//   XREF to: 00483ddf (CONDITIONAL_JUMP)
// 00483dd9: MOV dword ptr [0x02c6cff8],EDX
//   XREF to: 02c6cff8 (WRITE)
// 00483ddf: MOV ECX,dword ptr [ESP + 0x4c]
//   Label: LAB_00483ddf
//   XREF to: Stack[-0x28] (READ)
// 00483de3: MOV EDX,dword ptr [ESI + 0x14]
//   XREF to: 00688028 (DATA)
// 00483de6: MOV ECX,dword ptr [ECX + 0x14]
//   XREF to: 00688028 (DATA)
// 00483de9: SUB ECX,EDX
// 00483deb: CMP ECX,0x10000
// 00483df1: JNC 0x00483e85
//   XREF to: 00483e85 (CONDITIONAL_JUMP)
// 00483df7: XOR ECX,ECX
// 00483df9: MOV EAX,dword ptr [ESP + 0x4c]
//   Label: LAB_00483df9
//   XREF to: Stack[-0x28] (READ)
// 00483dfd: MOV EDX,dword ptr [ESI + 0x10]
//   XREF to: 00688024 (DATA)
// 00483e00: MOV EAX,dword ptr [EAX + 0x10]
//   XREF to: 00688024 (DATA)
// 00483e03: SUB EAX,EDX
// 00483e05: MOV EDX,EAX
// 00483e07: MOV EAX,ECX
// 00483e09: MOV dword ptr [0x02c6cb70],EBP
//   XREF to: 02c6cb70 (WRITE)
// 00483e0f: IMUL EDX
// 00483e11: SHRD EAX,EDX,0x10
// 00483e15: MOV dword ptr [EBX + 0xc],EAX
//   XREF to: 02c6cb80 (WRITE)
// 00483e18: MOV EAX,dword ptr [ESP + 0x4c]
//   XREF to: Stack[-0x28] (READ)
// 00483e1c: MOV EDX,dword ptr [ESI + 0x8]
//   XREF to: 0068801c (DATA)
// 00483e1f: MOV EAX,dword ptr [EAX + 0x8]
//   XREF to: 0068801c (DATA)
// 00483e22: SUB EAX,EDX
// 00483e24: MOV EDX,EAX
// 00483e26: SHL EDX,0x8
// 00483e29: MOV EAX,ECX
// 00483e2b: IMUL EDX
// 00483e2d: SHRD EAX,EDX,0x10
// 00483e31: MOV dword ptr [EBX + 0x2c],EAX
//   XREF to: 02c6cba0 (WRITE)
// 00483e34: MOV ECX,dword ptr [ESI + 0x14]
//   XREF to: 00688028 (DATA)
// 00483e37: AND ECX,0xffff
// 00483e3d: XOR CX,0xffff
// 00483e41: MOV EDX,dword ptr [EBX + 0xc]
//   XREF to: 02c6cb80 (READ)
// 00483e44: MOV EAX,ECX
// 00483e46: IMUL EDX
// 00483e48: SHRD EAX,EDX,0x10
// 00483e4c: MOV dword ptr [ESP + 0x40],EAX
//   XREF to: Stack[-0x34] (WRITE)
// 00483e50: MOV EDX,dword ptr [ESP + 0x40]
//   XREF to: Stack[-0x34] (READ)
// 00483e54: MOV EAX,dword ptr [ESI + 0x10]
//   XREF to: 00688024 (DATA)
// 00483e57: ADD EAX,EDX
// 00483e59: MOV dword ptr [EBX + 0x8],EAX
//   XREF to: 02c6cb7c (WRITE)
// 00483e5c: MOV ESI,dword ptr [ESI + 0x8]
//   XREF to: 0068801c (DATA)
// 00483e5f: MOV EAX,[0x02c6d03c]
//   XREF to: 02c6d03c (READ)
// 00483e64: SHL ESI,0x8
// 00483e67: MOV EDX,dword ptr [EBX + 0x2c]
//   XREF to: 02c6cba0 (READ)
// 00483e6a: SUB ESI,EAX
// 00483e6c: MOV EAX,ECX
// 00483e6e: IMUL EDX
// 00483e70: SHRD EAX,EDX,0x10
// 00483e74: MOV EBP,dword ptr [0x02c6cb70]
//   XREF to: 02c6cb70 (READ)
// 00483e7a: ADD ESI,EAX
// 00483e7c: INC EBP
// 00483e7d: MOV dword ptr [EBX + 0x28],ESI
//   XREF to: 02c6cb9c (WRITE)
// 00483e80: JMP 0x00483b9f
//   XREF to: 00483b9f (UNCONDITIONAL_JUMP)
// 00483e85: MOV EAX,0xffffffff
//   Label: LAB_00483e85
// 00483e8a: XOR EDX,EDX
// 00483e8c: DIV ECX
// 00483e8e: MOV ECX,EAX
// 00483e90: JMP 0x00483df9
//   XREF to: 00483df9 (UNCONDITIONAL_JUMP)
// 00483e95: INC EAX
//   Label: LAB_00483e95
// 00483e96: ADD ESI,0x48
// 00483e99: CMP EAX,EBP
// 00483e9b: JL 0x00483bd4
//   XREF to: 00483bd4 (CONDITIONAL_JUMP)
// 00483ea1: XOR ESI,ESI
//   Label: LAB_00483ea1
// 00483ea3: JMP 0x00483be4
//   XREF to: 00483be4 (UNCONDITIONAL_JUMP)
// 00483ea8: INC EDX
//   Label: LAB_00483ea8
// 00483ea9: ADD EAX,0x48
// 00483eac: CMP EDX,EBP
// 00483eae: JL 0x00483c0d
//   XREF to: 00483c0d (CONDITIONAL_JUMP)
// 00483eb4: XOR EAX,EAX
//   Label: LAB_00483eb4
// 00483eb6: JMP 0x00483c1d
//   XREF to: 00483c1d (UNCONDITIONAL_JUMP)
// 00483ebb: INC EDX
//   Label: LAB_00483ebb
// 00483ebc: ADD EAX,0x48
// 00483ebf: CMP EDX,EBP
// 00483ec1: JL 0x00483c68
//   XREF to: 00483c68 (CONDITIONAL_JUMP)
// 00483ec7: XOR EAX,EAX
//   Label: LAB_00483ec7
// 00483ec9: JMP 0x00483c78
//   XREF to: 00483c78 (UNCONDITIONAL_JUMP)
// 00483ece: INC EDX
//   Label: LAB_00483ece
// 00483ecf: ADD EAX,0x48
//   XREF to: 02c6cbbc (PARAM)
// 00483ed2: CMP EDX,EBP
// 00483ed4: JL 0x00483cb8
//   XREF to: 00483cb8 (CONDITIONAL_JUMP)
// 00483eda: XOR EAX,EAX
//   Label: LAB_00483eda
// 00483edc: JMP 0x00483cc8
//   XREF to: 00483cc8 (UNCONDITIONAL_JUMP)
