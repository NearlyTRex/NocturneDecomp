// Name: engine_3d.c_rasterizeTriangle_FUN_005fcfc0
// Address: 005fcfc0
// Address Range: [[005fcfc0, 005fd4b7]]
// Convention: __cdecl
// Signature: void engine_3d.c_rasterizeTriangle_FUN_005fcfc0(SRenderVertex * vertex_buffer, int vertex_count, int triangle_count)
// Cross-references:
//   engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_0048a740 (0048a740) at 0048a7fc [UNCONDITIONAL_CALL]
//   engine_drender.cpp_CDemonRenderer_renderGeometryBatch_FUN_0048d410 (0048d410) at 0048d4ec [UNCONDITIONAL_CALL]
// Globals:
//   uint g_VertexProcessingEnabled = 0x1
//   int g_TexturesDisabled
//   int g_CullingMode
//   int g_RasterizerDepthBias
//   int g_RenderAbortFlag
//   int g_ViewportCenterXFixed
//   int g_ViewportCenterYFixed
//   int g_ViewportRightFixed
//   int g_ViewportBottomFixed
//   int g_UseExternalRenderer
//   int g_RenderStateFlags
//   int g_RenderStateFlag2
//   int g_RenderedTriangleCount
//   int g_RasterizerEdgeCount
//   SEdgeData[16] g_RasterizerEdgeArray
//   undefined4 g_RasterizerEdgeArray[0].y_end
//   undefined4 g_RasterizerEdgeArray[0].x_current
//   undefined4 g_RasterizerEdgeArray[0].x_delta
//   undefined4 g_RasterizerEdgeArray[0].z_current
//   undefined4 g_RasterizerEdgeArray[0].z_delta
//   undefined4 g_RasterizerEdgeArray[1].y_start
//   int g_RasterizerMinY
//   int g_RasterizerMaxY
// Function calls:
//   engine_prim.c_calculateTriangleWindingOrder_FUN_00552150
//   engine_prim.c_prepareDepthBuffer_FUN_00551fb0
//   engine_prim.c_replaceWWithDepth_FUN_00552110
//   wincore_windll.cpp_drawPolygon_FUN_005b75e0
//   wincore_windll.cpp_renderScanline_FUN_005b5710

#include "nocturne.h"

void __cdecl
engine_3d_c_rasterizeTriangle_FUN_005fcfc0
          (SRenderVertex *vertex_buffer,int vertex_count,int triangle_count)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  undefined1 *puVar4;
  int iVar5;
  SRenderVertex *pSVar6;
  uint uVar7;
  int iVar8;
  SEdgeData *pSVar9;
  int iVar10;
  int iVar11;
  void *in_stack_ffffffd4;
  void *in_stack_ffffffd8;
  int in_stack_ffffffdc;
  int local_1c;
  SEdgeData *local_14;
  
  if ((g_VertexProcessingEnabled != 0) && (iVar8 = 0, pSVar6 = vertex_buffer, 0 < vertex_count)) {
    do {
      if ((int)((pSVar6->projected_vertex).screen_x & -0x80000000) != 0) {
        if ((g_RenderStateFlag2 & 6U) != 0) {
          (pSVar6->projected_vertex).inv_z =
               (int)(0x7fffffff / (longlong)(pSVar6->projected_vertex).transformed_z);
        }
        if ((g_RenderStateFlag2 & 1U) != 0) {
          (pSVar6->projected_vertex).inv_z =
               (int)(0x7fffffff / (longlong)(pSVar6->projected_vertex).transformed_z);
        }
        (pSVar6->projected_vertex).screen_x =
             (int)(((longlong)(pSVar6->projected_vertex).transformed_x *
                   (longlong)g_ViewportCenterXFixed) /
                  (longlong)(pSVar6->projected_vertex).transformed_z) + g_ViewportRightFixed;
        (pSVar6->projected_vertex).screen_y =
             (int)(((longlong)(pSVar6->projected_vertex).transformed_y *
                   (longlong)g_ViewportCenterYFixed) /
                  (longlong)(pSVar6->projected_vertex).transformed_z) + g_ViewportBottomFixed;
      }
      iVar8 = iVar8 + 1;
      pSVar6 = pSVar6 + 1;
    } while (iVar8 < vertex_count);
  }
  if ((g_CullingMode != 0) &&
     (iVar8 = engine_prim_c_calculateTriangleWindingOrder_FUN_00552150
                        (vertex_buffer,vertex_buffer + 1,vertex_buffer + 2), iVar8 == 0)) {
    return;
  }
  g_RenderedTriangleCount = g_RenderedTriangleCount + 1;
  if ((g_UseExternalRenderer != 0) && (g_TexturesDisabled == 0)) {
    wincore_windll_cpp_drawPolygon_FUN_005b75e0
              ((SRenderVertex *)vertex_count,triangle_count,g_RenderStateFlags);
    return;
  }
  if (g_RenderStateFlag2 != 0) {
    if ((uint)g_RenderStateFlag2 < PREPROCESS_TEXTURE_COORD_NORMALIZE) {
      engine_prim_c_prepareDepthBuffer_FUN_00551fb0((SRenderVertex *)vertex_count,triangle_count);
    }
    else if (g_RenderStateFlag2 == PREPROCESS_W_DEPTH_REPLACEMENT) {
      engine_prim_c_replaceWWithDepth_FUN_00552110((SRenderVertex *)vertex_count,triangle_count);
    }
  }
  g_RasterizerEdgeCount = 0;
  iVar11 = 0;
  g_RasterizerMaxY = 0;
  g_RasterizerMinY = 0x4b0;
  iVar8 = g_RasterizerEdgeCount;
  if (0 < triangle_count) {
    do {
      iVar2 = iVar11 + 1;
      if (triangle_count <= iVar2) {
        iVar2 = 0;
      }
      local_1c = vertex_count + iVar2 * 0x30;
      in_stack_ffffffdc = vertex_count + iVar11 * 0x30;
      iVar2 = *(int *)(in_stack_ffffffdc + 0x14) >> 0x10;
      iVar3 = *(int *)(local_1c + 0x14) >> 0x10;
      g_RasterizerEdgeCount = iVar8;
      if (iVar2 != iVar3) {
        iVar5 = iVar3;
        iVar10 = in_stack_ffffffdc;
        if (*(int *)(local_1c + 0x14) < *(int *)(in_stack_ffffffdc + 0x14)) {
          iVar5 = iVar2;
          iVar2 = iVar3;
          iVar10 = local_1c;
          local_1c = in_stack_ffffffdc;
        }
        g_RasterizerEdgeArray[iVar8].y_start = iVar2;
        iVar3 = g_RasterizerMinY;
        g_RasterizerEdgeArray[iVar8].y_end = iVar5;
        if (iVar2 < iVar3) {
          g_RasterizerMinY = iVar2;
        }
        if (g_RasterizerMaxY < iVar5) {
          g_RasterizerMaxY = iVar5;
        }
        uVar7 = *(int *)(local_1c + 0x14) - *(int *)(iVar10 + 0x14);
        if (uVar7 < 0x10000) {
          iVar2 = 0;
        }
        else {
          iVar2 = (int)(0xffffffff / (ulonglong)uVar7);
        }
        in_stack_ffffffd4 = (void *)(uint)(ushort)((ushort)*(undefined4 *)(iVar10 + 0x14) ^ 0xffff);
        lVar1 = (longlong)iVar2 * (longlong)(*(int *)(local_1c + 0x10) - *(int *)(iVar10 + 0x10));
        uVar7 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
        g_RasterizerEdgeArray[iVar8].x_delta = uVar7;
        lVar1 = (longlong)(int)in_stack_ffffffd4 * (longlong)(int)uVar7;
        in_stack_ffffffd8 = (void *)((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
        g_RasterizerEdgeArray[iVar8].x_current = *(int *)(iVar10 + 0x10) + (int)in_stack_ffffffd8;
        lVar1 = (longlong)iVar2 *
                (longlong)((*(int *)(local_1c + 8) - *(int *)(iVar10 + 8)) * 0x100);
        uVar7 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
        g_RasterizerEdgeArray[iVar8].z_delta = uVar7;
        lVar1 = (longlong)(int)in_stack_ffffffd4 * (longlong)(int)uVar7;
        g_RasterizerEdgeCount = g_RasterizerEdgeCount + 1;
        g_RasterizerEdgeArray[iVar8].z_current =
             (*(int *)(iVar10 + 8) * 0x100 - g_RasterizerDepthBias) +
             ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
      }
      iVar11 = iVar11 + 1;
      iVar8 = g_RasterizerEdgeCount;
    } while (iVar11 < triangle_count);
  }
  pSVar9 = g_RasterizerEdgeArray;
  iVar8 = 0;
  g_RenderAbortFlag = 0;
  if (0 < g_RasterizerEdgeCount) {
    do {
      if ((g_RasterizerMinY == pSVar9->y_start) && (pSVar9 != (SEdgeData *)0x0)) goto LAB_005fd168;
      iVar8 = iVar8 + 1;
      pSVar9 = pSVar9 + 1;
    } while (iVar8 < g_RasterizerEdgeCount);
  }
  pSVar9 = (SEdgeData *)0x0;
LAB_005fd168:
  if (pSVar9 != (SEdgeData *)0x0) {
    local_14 = g_RasterizerEdgeArray;
    iVar8 = 0;
    if (0 < g_RasterizerEdgeCount) {
      do {
        if ((g_RasterizerMinY == local_14->y_start) && (local_14 != pSVar9)) goto LAB_005fd1a1;
        iVar8 = iVar8 + 1;
        local_14 = local_14 + 1;
      } while (iVar8 < g_RasterizerEdgeCount);
    }
    local_14 = (SEdgeData *)0x0;
LAB_005fd1a1:
    puVar4 = (undefined1 *)g_RasterizerMinY;
    if (local_14 != (SEdgeData *)0x0) {
      do {
        if (pSVar9->y_end <= (int)puVar4) {
          pSVar9->y_start = -1;
          pSVar9 = g_RasterizerEdgeArray;
          iVar8 = 0;
          if (0 < g_RasterizerEdgeCount) {
            do {
              if ((puVar4 == (undefined1 *)pSVar9->y_start) && (pSVar9 != local_14))
              goto LAB_005fd1fc;
              iVar8 = iVar8 + 1;
              pSVar9 = pSVar9 + 1;
            } while (iVar8 < g_RasterizerEdgeCount);
          }
          pSVar9 = (SEdgeData *)0x0;
LAB_005fd1fc:
          if (pSVar9 == (SEdgeData *)0x0) {
            return;
          }
        }
        if (local_14->y_end <= (int)puVar4) {
          local_14->y_start = -1;
          local_14 = g_RasterizerEdgeArray;
          iVar8 = 0;
          if (0 < g_RasterizerEdgeCount) {
            do {
              if ((puVar4 == (undefined1 *)local_14->y_start) && (local_14 != pSVar9))
              goto LAB_005fd24c;
              iVar8 = iVar8 + 1;
              local_14 = local_14 + 1;
            } while (iVar8 < g_RasterizerEdgeCount);
          }
          local_14 = (SEdgeData *)0x0;
LAB_005fd24c:
          if (local_14 == (SEdgeData *)0x0) {
            return;
          }
        }
        wincore_windll_cpp_renderScanline_FUN_005b5710
                  (in_stack_ffffffd4,in_stack_ffffffd8,in_stack_ffffffdc);
        if (g_RenderAbortFlag != 0) {
          return;
        }
        *(int *)(triangle_count + 8) = *(int *)(triangle_count + 8) + *(int *)(triangle_count + 0xc)
        ;
        *(int *)(triangle_count + 0x28) =
             *(int *)(triangle_count + 0x28) + *(int *)(triangle_count + 0x2c);
        *(int *)(vertex_count + 8) = *(int *)(vertex_count + 8) + *(int *)(vertex_count + 0xc);
        *(int *)(vertex_count + 0x28) =
             *(int *)(vertex_count + 0x28) + *(int *)(vertex_count + 0x2c);
        puVar4 = (undefined1 *)((int)&(vertex_buffer->projected_vertex).transformed_x + 1);
      } while( true );
    }
  }
  return;
}


// Assembly code:
// 005fcfc0: PUSH EBX
//   Label: engine_3d.c_rasterizeTriangle_FUN_005fcfc0
// 005fcfc1: PUSH ESI
// 005fcfc2: PUSH EDI
// 005fcfc3: PUSH EBP
// 005fcfc4: SUB ESP,0x20
// 005fcfc7: MOV EBP,dword ptr [0x03f9ad5c]
//   XREF to: 03f9ad5c (READ)
// 005fcfcd: CMP dword ptr [0x006793bc],0x0
//   XREF to: 006793bc (READ)
// 005fcfd4: JZ 0x005fd083
//   XREF to: 005fd083 (CONDITIONAL_JUMP)
// 005fcfda: MOV EBX,dword ptr [ESP + 0x38]
//   XREF to: Stack[0x8] (READ)
// 005fcfde: MOV ECX,dword ptr [ESP + 0x34]
//   XREF to: Stack[0x4] (READ)
// 005fcfe2: XOR ESI,ESI
// 005fcfe4: TEST EBX,EBX
// 005fcfe6: JLE 0x005fd083
//   XREF to: 005fd083 (CONDITIONAL_JUMP)
// 005fcfec: MOV EDI,dword ptr [ESP + 0x38]
//   XREF to: Stack[0x8] (READ)
// 005fcff0: MOV AH,byte ptr [ECX + 0x13]
//   Label: LAB_005fcff0
// 005fcff3: MOV dword ptr [0x03f9ad5c],EBP
//   XREF to: 03f9ad5c (WRITE)
// 005fcff9: TEST AH,0x80
// 005fcffc: JZ 0x005fd071
//   XREF to: 005fd071 (CONDITIONAL_JUMP)
// 005fcffe: TEST byte ptr [0x02d052a4],0x6
//   XREF to: 02d052a4 (READ)
// 005fd005: JZ 0x005fd019
//   XREF to: 005fd019 (CONDITIONAL_JUMP)
// 005fd007: MOV EAX,0x7fffffff
// 005fd00c: MOV EDX,EAX
// 005fd00e: MOV EBX,dword ptr [ECX + 0x8]
// 005fd011: SAR EDX,0x1f
// 005fd014: IDIV EBX
// 005fd016: MOV dword ptr [ECX + 0xc],EAX
// 005fd019: MOV DH,byte ptr [0x02d052a4]
//   Label: LAB_005fd019
//   XREF to: 02d052a4 (READ)
// 005fd01f: MOV dword ptr [0x03f9ad5c],EBP
//   XREF to: 03f9ad5c (WRITE)
// 005fd025: TEST DH,0x1
// 005fd028: JZ 0x005fd03c
//   XREF to: 005fd03c (CONDITIONAL_JUMP)
// 005fd02a: MOV EAX,0x7fffffff
// 005fd02f: MOV EDX,EAX
// 005fd031: MOV EBX,dword ptr [ECX + 0x8]
// 005fd034: SAR EDX,0x1f
// 005fd037: IDIV EBX
// 005fd039: MOV dword ptr [ECX + 0xc],EAX
// 005fd03c: MOV EDX,dword ptr [0x02d02548]
//   Label: LAB_005fd03c
//   XREF to: 02d02548 (READ)
// 005fd042: MOV EBX,dword ptr [ECX + 0x8]
// 005fd045: MOV EAX,dword ptr [ECX]
// 005fd047: IMUL EDX
// 005fd049: IDIV EBX
// 005fd04b: MOV EDX,dword ptr [0x02d02550]
//   XREF to: 02d02550 (READ)
// 005fd051: ADD EAX,EDX
// 005fd053: MOV EBX,dword ptr [ECX + 0x8]
// 005fd056: MOV dword ptr [ECX + 0x10],EAX
// 005fd059: MOV EDX,dword ptr [0x02d0254c]
//   XREF to: 02d0254c (READ)
// 005fd05f: MOV EAX,dword ptr [ECX + 0x4]
// 005fd062: IMUL EDX
// 005fd064: IDIV EBX
// 005fd066: MOV EDX,dword ptr [0x02d02554]
//   XREF to: 02d02554 (READ)
// 005fd06c: ADD EAX,EDX
// 005fd06e: MOV dword ptr [ECX + 0x14],EAX
// 005fd071: MOV EBP,dword ptr [0x03f9ad5c]
//   Label: LAB_005fd071
//   XREF to: 03f9ad5c (READ)
// 005fd077: INC ESI
// 005fd078: ADD ECX,0x30
// 005fd07b: CMP ESI,EDI
// 005fd07d: JL 0x005fcff0
//   XREF to: 005fcff0 (CONDITIONAL_JUMP)
// 005fd083: MOV EAX,[0x00772a7c]
//   Label: LAB_005fd083
//   XREF to: 00772a7c (READ)
// 005fd088: MOV dword ptr [0x03f9ad5c],EBP
//   XREF to: 03f9ad5c (WRITE)
// 005fd08e: TEST EAX,EAX
// 005fd090: JNZ 0x005fd26c
//   XREF to: 005fd26c (CONDITIONAL_JUMP)
// 005fd096: MOV ECX,dword ptr [0x030e56b8]
//   Label: LAB_005fd096
//   XREF to: 030e56b8 (READ)
// 005fd09c: INC ECX
// 005fd09d: MOV EBX,dword ptr [0x02d03e94]
//   XREF to: 02d03e94 (READ)
// 005fd0a3: MOV dword ptr [0x030e56b8],ECX
//   XREF to: 030e56b8 (WRITE)
// 005fd0a9: TEST EBX,EBX
// 005fd0ab: JZ 0x005fd0ba
//   XREF to: 005fd0ba (CONDITIONAL_JUMP)
// 005fd0ad: CMP dword ptr [0x00772a74],0x0
//   XREF to: 00772a74 (READ)
// 005fd0b4: JZ 0x005fd29f
//   XREF to: 005fd29f (CONDITIONAL_JUMP)
// 005fd0ba: MOV EAX,[0x02d052a4]
//   Label: LAB_005fd0ba
//   XREF to: 02d052a4 (READ)
// 005fd0bf: MOV EBP,dword ptr [0x03f9ad5c]
//   XREF to: 03f9ad5c (READ)
// 005fd0c5: CMP EAX,0x1
// 005fd0c8: JNC 0x005fd2f4
//   XREF to: 005fd2f4 (CONDITIONAL_JUMP)
// 005fd0ce: MOV ECX,0x4b0
//   Label: LAB_005fd0ce
// 005fd0d3: MOV ESI,dword ptr [ESP + 0x38]
//   XREF to: Stack[0x8] (READ)
// 005fd0d7: XOR EBX,EBX
// 005fd0d9: XOR EBP,EBP
// 005fd0db: XOR EDI,EDI
// 005fd0dd: MOV dword ptr [0x03f9b1e4],EBX
//   XREF to: 03f9b1e4 (WRITE)
// 005fd0e3: MOV dword ptr [0x03f9b1e0],ECX
//   XREF to: 03f9b1e0 (WRITE)
// 005fd0e9: TEST ESI,ESI
// 005fd0eb: JLE 0x005fd13b
//   XREF to: 005fd13b (CONDITIONAL_JUMP)
// 005fd0ed: MOV ESI,dword ptr [ESP + 0x38]
//   Label: LAB_005fd0ed
//   XREF to: Stack[0x8] (READ)
// 005fd0f1: LEA EAX,[EDI + 0x1]
// 005fd0f4: CMP EAX,ESI
// 005fd0f6: JL 0x005fd0fa
//   XREF to: 005fd0fa (CONDITIONAL_JUMP)
// 005fd0f8: XOR EAX,EAX
// 005fd0fa: IMUL EAX,EAX,0x30
//   Label: LAB_005fd0fa
// 005fd0fd: MOV EDX,dword ptr [ESP + 0x34]
//   XREF to: Stack[0x4] (READ)
// 005fd101: ADD EDX,EAX
// 005fd103: IMUL EAX,EDI,0x30
// 005fd106: MOV dword ptr [ESP + 0xc],EDX
//   XREF to: Stack[-0x24] (WRITE)
// 005fd10a: MOV EDX,dword ptr [ESP + 0x34]
//   XREF to: Stack[0x4] (READ)
// 005fd10e: ADD EDX,EAX
// 005fd110: MOV EAX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x24] (READ)
// 005fd114: MOV dword ptr [ESP + 0x8],EDX
//   XREF to: Stack[-0x28] (WRITE)
// 005fd118: MOV ESI,EDX
// 005fd11a: MOV dword ptr [ESP + 0x10],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 005fd11e: MOV EDX,dword ptr [EDX + 0x14]
// 005fd121: MOV EAX,dword ptr [EAX + 0x14]
// 005fd124: SAR EDX,0x10
// 005fd127: SAR EAX,0x10
// 005fd12a: CMP EDX,EAX
// 005fd12c: JNZ 0x005fd300
//   XREF to: 005fd300 (CONDITIONAL_JUMP)
// 005fd132: MOV ECX,dword ptr [ESP + 0x38]
//   Label: LAB_005fd132
//   XREF to: Stack[0x8] (READ)
// 005fd136: INC EDI
// 005fd137: CMP EDI,ECX
// 005fd139: JL 0x005fd0ed
//   XREF to: 005fd0ed (CONDITIONAL_JUMP)
// 005fd13b: MOV ESI,0x3f9ad60
//   Label: LAB_005fd13b
//   XREF to: 03f9ad60 (DATA)
// 005fd140: MOV EDI,dword ptr [0x03f9b1e0]
//   XREF to: 03f9b1e0 (READ)
// 005fd146: XOR EBX,EBX
// 005fd148: XOR EAX,EAX
// 005fd14a: MOV dword ptr [0x02c6d5a8],EBX
//   XREF to: 02c6d5a8 (WRITE)
// 005fd150: TEST EBP,EBP
// 005fd152: JLE 0x005fd40e
//   XREF to: 005fd40e (CONDITIONAL_JUMP)
// 005fd158: CMP EDI,dword ptr [ESI]
//   Label: LAB_005fd158
//   XREF to: 03f9ad60 (READ)
//   XREF to: 03f9ada8 (READ)
// 005fd15a: JNZ 0x005fd402
//   XREF to: 005fd402 (CONDITIONAL_JUMP)
// 005fd160: TEST ESI,ESI
// 005fd162: JZ 0x005fd402
//   XREF to: 005fd402 (CONDITIONAL_JUMP)
// 005fd168: MOV dword ptr [ESP + 0x1c],ESI
//   Label: LAB_005fd168
//   XREF to: Stack[-0x14] (WRITE)
//   XREF to: 03f9ad60 (DATA)
//   XREF to: 03f9ada8 (DATA)
// 005fd16c: MOV dword ptr [0x03f9ad5c],EBP
//   XREF to: 03f9ad5c (WRITE)
// 005fd172: TEST ESI,ESI
// 005fd174: JZ 0x005fd25e
//   XREF to: 005fd25e (CONDITIONAL_JUMP)
// 005fd17a: MOV EAX,0x3f9ad60
//   XREF to: 03f9ad60 (PARAM)
// 005fd17f: MOV EBX,dword ptr [0x03f9b1e0]
//   XREF to: 03f9b1e0 (READ)
// 005fd185: MOV ECX,ESI
//   XREF to: 03f9ad60 (PARAM)
// 005fd187: XOR EDX,EDX
// 005fd189: TEST EBP,EBP
// 005fd18b: JLE 0x005fd421
//   XREF to: 005fd421 (CONDITIONAL_JUMP)
// 005fd191: CMP EBX,dword ptr [EAX]
//   Label: LAB_005fd191
//   XREF to: 03f9ad60 (READ)
//   XREF to: 03f9ada8 (READ)
// 005fd193: JNZ 0x005fd415
//   XREF to: 005fd415 (CONDITIONAL_JUMP)
// 005fd199: CMP EAX,ECX
// 005fd19b: JZ 0x005fd415
//   XREF to: 005fd415 (CONDITIONAL_JUMP)
// 005fd1a1: MOV dword ptr [ESP + 0x18],EAX
//   Label: LAB_005fd1a1
//   XREF to: Stack[-0x18] (WRITE)
//   XREF to: 03f9ad60 (DATA)
//   XREF to: 03f9ada8 (DATA)
// 005fd1a5: MOV dword ptr [0x03f9ad5c],EBP
//   XREF to: 03f9ad5c (WRITE)
// 005fd1ab: TEST EAX,EAX
// 005fd1ad: JZ 0x005fd25e
//   XREF to: 005fd25e (CONDITIONAL_JUMP)
// 005fd1b3: MOV EAX,[0x03f9b1e0]
//   XREF to: 03f9b1e0 (READ)
// 005fd1b8: MOV dword ptr [ESP + 0x14],EAX
//   Label: LAB_005fd1b8
//   XREF to: Stack[-0x1c] (WRITE)
// 005fd1bc: MOV EDX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[-0x14] (READ)
// 005fd1c0: MOV EAX,dword ptr [ESP + 0x14]
//   XREF to: Stack[-0x1c] (READ)
// 005fd1c4: MOV EDI,dword ptr [EDX + 0x4]
//   XREF to: 03f9ad64 (READ)
// 005fd1c7: MOV dword ptr [0x03f9ad5c],EBP
//   XREF to: 03f9ad5c (WRITE)
// 005fd1cd: CMP EAX,EDI
// 005fd1cf: JL 0x005fd20a
//   XREF to: 005fd20a (CONDITIONAL_JUMP)
// 005fd1d1: MOV ECX,dword ptr [ESP + 0x18]
//   XREF to: Stack[-0x18] (READ)
// 005fd1d5: MOV EBX,EAX
// 005fd1d7: MOV dword ptr [EDX],0xffffffff
//   XREF to: 03f9ad60 (WRITE)
// 005fd1dd: MOV EAX,0x3f9ad60
//   XREF to: 03f9ad60 (DATA)
// 005fd1e2: XOR EDX,EDX
// 005fd1e4: TEST EBP,EBP
// 005fd1e6: JLE 0x005fd434
//   XREF to: 005fd434 (CONDITIONAL_JUMP)
// 005fd1ec: CMP EBX,dword ptr [EAX]
//   Label: LAB_005fd1ec
//   XREF to: 03f9ad60 (READ)
//   XREF to: 03f9ada8 (READ)
// 005fd1ee: JNZ 0x005fd428
//   XREF to: 005fd428 (CONDITIONAL_JUMP)
// 005fd1f4: CMP EAX,ECX
// 005fd1f6: JZ 0x005fd428
//   XREF to: 005fd428 (CONDITIONAL_JUMP)
// 005fd1fc: MOV dword ptr [ESP + 0x1c],EAX
//   Label: LAB_005fd1fc
//   XREF to: Stack[-0x14] (WRITE)
//   XREF to: 03f9ad60 (DATA)
//   XREF to: 03f9ada8 (DATA)
// 005fd200: MOV dword ptr [0x03f9ad5c],EBP
//   XREF to: 03f9ad5c (WRITE)
// 005fd206: TEST EAX,EAX
// 005fd208: JZ 0x005fd25e
//   XREF to: 005fd25e (CONDITIONAL_JUMP)
// 005fd20a: MOV EDX,dword ptr [ESP + 0x18]
//   Label: LAB_005fd20a
//   XREF to: Stack[-0x18] (READ)
//   XREF to: 03f9ad60 (PARAM)
// 005fd20e: MOV EAX,dword ptr [ESP + 0x14]
//   XREF to: Stack[-0x1c] (READ)
// 005fd212: CMP EAX,dword ptr [EDX + 0x4]
//   XREF to: 03f9ad64 (READ)
// 005fd215: JL 0x005fd44e
//   XREF to: 005fd44e (CONDITIONAL_JUMP)
// 005fd21b: MOV ECX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[-0x14] (READ)
// 005fd21f: MOV EBP,dword ptr [0x03f9ad5c]
//   XREF to: 03f9ad5c (READ)
// 005fd225: MOV EBX,EAX
// 005fd227: MOV dword ptr [EDX],0xffffffff
//   XREF to: 03f9ad60 (WRITE)
// 005fd22d: MOV EAX,0x3f9ad60
//   XREF to: 03f9ad60 (DATA)
// 005fd232: XOR EDX,EDX
// 005fd234: TEST EBP,EBP
// 005fd236: JLE 0x005fd447
//   XREF to: 005fd447 (CONDITIONAL_JUMP)
// 005fd23c: CMP EBX,dword ptr [EAX]
//   Label: LAB_005fd23c
//   XREF to: 03f9ad60 (READ)
//   XREF to: 03f9ada8 (READ)
// 005fd23e: JNZ 0x005fd43b
//   XREF to: 005fd43b (CONDITIONAL_JUMP)
// 005fd244: CMP EAX,ECX
// 005fd246: JZ 0x005fd43b
//   XREF to: 005fd43b (CONDITIONAL_JUMP)
// 005fd24c: MOV dword ptr [ESP + 0x18],EAX
//   Label: LAB_005fd24c
//   XREF to: Stack[-0x18] (WRITE)
//   XREF to: 03f9ad60 (DATA)
//   XREF to: 03f9ada8 (DATA)
// 005fd250: MOV dword ptr [0x03f9ad5c],EBP
//   XREF to: 03f9ad5c (WRITE)
// 005fd256: TEST EAX,EAX
// 005fd258: JNZ 0x005fd44e
//   XREF to: 005fd44e (CONDITIONAL_JUMP)
// 005fd25e: MOV EBP,dword ptr [0x03f9ad5c]
//   Label: LAB_005fd25e
//   XREF to: 03f9ad5c (READ)
// 005fd264: ADD ESP,0x20
// 005fd267: POP EBP
// 005fd268: POP EDI
// 005fd269: POP ESI
// 005fd26a: POP EBX
// 005fd26b: RET
// 005fd26c: MOV EAX,dword ptr [ESP + 0x34]
//   Label: LAB_005fd26c
//   XREF to: Stack[0x4] (READ)
// 005fd270: ADD EAX,0x60
// 005fd273: PUSH EAX
// 005fd274: MOV EAX,dword ptr [ESP + 0x38]
//   XREF to: Stack[0x4] (READ)
// 005fd278: ADD EAX,0x30
// 005fd27b: PUSH EAX
// 005fd27c: MOV EDX,dword ptr [ESP + 0x3c]
//   XREF to: Stack[0x4] (READ)
// 005fd280: PUSH EDX
// 005fd281: CALL engine_prim.c_calculateTriangleWindingOrder_FUN_00552150
//   XREF to: 00552150 (UNCONDITIONAL_CALL)
// 005fd286: ADD ESP,0xc
// 005fd289: TEST EAX,EAX
// 005fd28b: JNZ 0x005fd096
//   XREF to: 005fd096 (CONDITIONAL_JUMP)
// 005fd291: MOV EBP,dword ptr [0x03f9ad5c]
//   XREF to: 03f9ad5c (READ)
// 005fd297: ADD ESP,0x20
// 005fd29a: POP EBP
// 005fd29b: POP EDI
// 005fd29c: POP ESI
// 005fd29d: POP EBX
// 005fd29e: RET
// 005fd29f: MOV EDI,dword ptr [0x02d052a0]
//   Label: LAB_005fd29f
//   XREF to: 02d052a0 (READ)
// 005fd2a5: PUSH EDI
// 005fd2a6: MOV EAX,dword ptr [ESP + 0x3c]
//   XREF to: Stack[0x8] (READ)
// 005fd2aa: PUSH EAX
// 005fd2ab: MOV EDX,dword ptr [ESP + 0x3c]
//   XREF to: Stack[0x4] (READ)
// 005fd2af: PUSH EDX
// 005fd2b0: CALL wincore_windll.cpp_drawPolygon_FUN_005b75e0
//   XREF to: 005b75e0 (UNCONDITIONAL_CALL)
// 005fd2b5: ADD ESP,0xc
// 005fd2b8: MOV EBP,dword ptr [0x03f9ad5c]
//   XREF to: 03f9ad5c (READ)
// 005fd2be: ADD ESP,0x20
// 005fd2c1: POP EBP
// 005fd2c2: POP EDI
// 005fd2c3: POP ESI
// 005fd2c4: POP EBX
// 005fd2c5: RET
// 005fd2c6: MOV EAX,dword ptr [ESP + 0x38]
//   Label: LAB_005fd2c6
//   XREF to: Stack[0x8] (READ)
// 005fd2ca: PUSH EAX
// 005fd2cb: MOV EDX,dword ptr [ESP + 0x38]
//   XREF to: Stack[0x4] (READ)
// 005fd2cf: PUSH EDX
// 005fd2d0: CALL engine_prim.c_prepareDepthBuffer_FUN_00551fb0
//   XREF to: 00551fb0 (UNCONDITIONAL_CALL)
// 005fd2d5: ADD ESP,0x8
// 005fd2d8: JMP 0x005fd0ce
//   XREF to: 005fd0ce (UNCONDITIONAL_JUMP)
// 005fd2dd: MOV EDI,dword ptr [ESP + 0x38]
//   Label: LAB_005fd2dd
//   XREF to: Stack[0x8] (READ)
// 005fd2e1: PUSH EDI
// 005fd2e2: MOV EBP,dword ptr [ESP + 0x38]
//   XREF to: Stack[0x4] (READ)
// 005fd2e6: PUSH EBP
// 005fd2e7: CALL engine_prim.c_replaceWWithDepth_FUN_00552110
//   XREF to: 00552110 (UNCONDITIONAL_CALL)
// 005fd2ec: ADD ESP,0x8
// 005fd2ef: JMP 0x005fd0ce
//   XREF to: 005fd0ce (UNCONDITIONAL_JUMP)
// 005fd2f4: JBE 0x005fd2c6
//   Label: LAB_005fd2f4
//   XREF to: 005fd2c6 (CONDITIONAL_JUMP)
// 005fd2f6: CMP EAX,0x6
// 005fd2f9: JZ 0x005fd2dd
//   XREF to: 005fd2dd (CONDITIONAL_JUMP)
// 005fd2fb: JMP 0x005fd0ce
//   XREF to: 005fd0ce (UNCONDITIONAL_JUMP)
// 005fd300: MOV ECX,ESI
//   Label: LAB_005fd300
// 005fd302: MOV ECX,dword ptr [ECX + 0x14]
// 005fd305: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x24] (READ)
// 005fd309: CMP ECX,dword ptr [EBX + 0x14]
// 005fd30c: JLE 0x005fd31e
//   XREF to: 005fd31e (CONDITIONAL_JUMP)
// 005fd30e: MOV ECX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x28] (READ)
// 005fd312: MOV ESI,EBX
// 005fd314: MOV dword ptr [ESP + 0x10],ECX
//   XREF to: Stack[-0x20] (WRITE)
// 005fd318: MOV ECX,EDX
// 005fd31a: MOV EDX,EAX
// 005fd31c: MOV EAX,ECX
// 005fd31e: IMUL EBX,EBP,0x48
//   Label: LAB_005fd31e
// 005fd321: ADD EBX,0x3f9ad60
//   XREF to: 03f9ad60 (DATA)
// 005fd327: MOV dword ptr [EBX],EDX
//   XREF to: 03f9ad60 (WRITE)
// 005fd329: MOV ECX,dword ptr [0x03f9b1e0]
//   XREF to: 03f9b1e0 (READ)
// 005fd32f: MOV dword ptr [EBX + 0x4],EAX
//   XREF to: 03f9ad64 (WRITE)
// 005fd332: CMP EDX,ECX
// 005fd334: JGE 0x005fd33c
//   XREF to: 005fd33c (CONDITIONAL_JUMP)
// 005fd336: MOV dword ptr [0x03f9b1e0],EDX
//   XREF to: 03f9b1e0 (WRITE)
// 005fd33c: CMP EAX,dword ptr [0x03f9b1e4]
//   Label: LAB_005fd33c
//   XREF to: 03f9b1e4 (READ)
// 005fd342: JLE 0x005fd349
//   XREF to: 005fd349 (CONDITIONAL_JUMP)
// 005fd344: MOV [0x03f9b1e4],EAX
//   XREF to: 03f9b1e4 (WRITE)
// 005fd349: MOV ECX,dword ptr [ESP + 0x10]
//   Label: LAB_005fd349
//   XREF to: Stack[-0x20] (READ)
// 005fd34d: MOV EAX,dword ptr [ESI + 0x14]
// 005fd350: MOV ECX,dword ptr [ECX + 0x14]
// 005fd353: SUB ECX,EAX
// 005fd355: CMP ECX,0x10000
// 005fd35b: JNC 0x005fd3f2
//   XREF to: 005fd3f2 (CONDITIONAL_JUMP)
// 005fd361: XOR ECX,ECX
// 005fd363: MOV EAX,dword ptr [ESI + 0x14]
//   Label: LAB_005fd363
// 005fd366: AND EAX,0xffff
// 005fd36b: XOR AX,0xffff
// 005fd36f: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x30] (DATA)
// 005fd372: MOV EAX,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x20] (READ)
// 005fd376: MOV EDX,dword ptr [ESI + 0x10]
// 005fd379: MOV EAX,dword ptr [EAX + 0x10]
// 005fd37c: SUB EAX,EDX
// 005fd37e: MOV EDX,EAX
// 005fd380: MOV EAX,ECX
// 005fd382: MOV dword ptr [0x03f9ad5c],EBP
//   XREF to: 03f9ad5c (WRITE)
// 005fd388: IMUL EDX
// 005fd38a: SHRD EAX,EDX,0x10
// 005fd38e: MOV EDX,EAX
// 005fd390: MOV dword ptr [EBX + 0xc],EAX
//   XREF to: 03f9ad6c (WRITE)
// 005fd393: MOV EAX,dword ptr [ESP]
//   XREF to: Stack[-0x30] (DATA)
// 005fd396: IMUL EDX
// 005fd398: SHRD EAX,EDX,0x10
// 005fd39c: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x2c] (WRITE)
// 005fd3a0: MOV EDX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x2c] (READ)
// 005fd3a4: MOV EAX,dword ptr [ESI + 0x10]
// 005fd3a7: ADD EAX,EDX
// 005fd3a9: MOV dword ptr [EBX + 0x8],EAX
//   XREF to: 03f9ad68 (WRITE)
// 005fd3ac: MOV EAX,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x20] (READ)
// 005fd3b0: MOV EDX,dword ptr [ESI + 0x8]
// 005fd3b3: MOV EAX,dword ptr [EAX + 0x8]
// 005fd3b6: SUB EAX,EDX
// 005fd3b8: MOV EDX,EAX
// 005fd3ba: SHL EDX,0x8
// 005fd3bd: MOV EAX,ECX
// 005fd3bf: IMUL EDX
// 005fd3c1: SHRD EAX,EDX,0x10
// 005fd3c5: MOV EDX,EAX
// 005fd3c7: MOV dword ptr [EBX + 0x2c],EAX
//   XREF to: 03f9ad8c (WRITE)
// 005fd3ca: MOV EAX,dword ptr [ESP]
//   XREF to: Stack[-0x30] (DATA)
// 005fd3cd: MOV ECX,dword ptr [ESI + 0x8]
// 005fd3d0: MOV ESI,dword ptr [0x02c6d03c]
//   XREF to: 02c6d03c (READ)
// 005fd3d6: SHL ECX,0x8
// 005fd3d9: IMUL EDX
// 005fd3db: SHRD EAX,EDX,0x10
// 005fd3df: SUB ECX,ESI
// 005fd3e1: MOV EBP,dword ptr [0x03f9ad5c]
//   XREF to: 03f9ad5c (READ)
// 005fd3e7: ADD ECX,EAX
// 005fd3e9: INC EBP
// 005fd3ea: MOV dword ptr [EBX + 0x28],ECX
//   XREF to: 03f9ad88 (WRITE)
// 005fd3ed: JMP 0x005fd132
//   XREF to: 005fd132 (UNCONDITIONAL_JUMP)
// 005fd3f2: MOV EAX,0xffffffff
//   Label: LAB_005fd3f2
// 005fd3f7: XOR EDX,EDX
// 005fd3f9: DIV ECX
// 005fd3fb: MOV ECX,EAX
// 005fd3fd: JMP 0x005fd363
//   XREF to: 005fd363 (UNCONDITIONAL_JUMP)
// 005fd402: INC EAX
//   Label: LAB_005fd402
// 005fd403: ADD ESI,0x48
// 005fd406: CMP EAX,EBP
// 005fd408: JL 0x005fd158
//   XREF to: 005fd158 (CONDITIONAL_JUMP)
// 005fd40e: XOR ESI,ESI
//   Label: LAB_005fd40e
// 005fd410: JMP 0x005fd168
//   XREF to: 005fd168 (UNCONDITIONAL_JUMP)
// 005fd415: INC EDX
//   Label: LAB_005fd415
// 005fd416: ADD EAX,0x48
// 005fd419: CMP EDX,EBP
// 005fd41b: JL 0x005fd191
//   XREF to: 005fd191 (CONDITIONAL_JUMP)
// 005fd421: XOR EAX,EAX
//   Label: LAB_005fd421
// 005fd423: JMP 0x005fd1a1
//   XREF to: 005fd1a1 (UNCONDITIONAL_JUMP)
// 005fd428: INC EDX
//   Label: LAB_005fd428
// 005fd429: ADD EAX,0x48
// 005fd42c: CMP EDX,EBP
// 005fd42e: JL 0x005fd1ec
//   XREF to: 005fd1ec (CONDITIONAL_JUMP)
// 005fd434: XOR EAX,EAX
//   Label: LAB_005fd434
// 005fd436: JMP 0x005fd1fc
//   XREF to: 005fd1fc (UNCONDITIONAL_JUMP)
// 005fd43b: INC EDX
//   Label: LAB_005fd43b
// 005fd43c: ADD EAX,0x48
//   XREF to: 03f9ada8 (DATA)
// 005fd43f: CMP EDX,EBP
// 005fd441: JL 0x005fd23c
//   XREF to: 005fd23c (CONDITIONAL_JUMP)
// 005fd447: XOR EAX,EAX
//   Label: LAB_005fd447
// 005fd449: JMP 0x005fd24c
//   XREF to: 005fd24c (UNCONDITIONAL_JUMP)
// 005fd44e: MOV EDI,dword ptr [ESP + 0x18]
//   Label: LAB_005fd44e
//   XREF to: Stack[-0x18] (READ)
// 005fd452: MOV ESI,dword ptr [ESP + 0x1c]
//   XREF to: Stack[-0x14] (READ)
// 005fd456: MOV EBX,dword ptr [ESP + 0x14]
//   XREF to: Stack[-0x1c] (READ)
// 005fd45a: CALL wincore_windll.cpp_renderScanline_FUN_005b5710
//   XREF to: 005b5710 (UNCONDITIONAL_CALL)
// 005fd45f: CMP dword ptr [0x02c6d5a8],0x0
//   XREF to: 02c6d5a8 (READ)
// 005fd466: JNZ 0x005fd25e
//   XREF to: 005fd25e (CONDITIONAL_JUMP)
// 005fd46c: MOV EDX,dword ptr [ESP + 0x1c]
// 005fd470: MOV EAX,dword ptr [ESP + 0x1c]
// 005fd474: MOV ECX,dword ptr [EDX + 0x8]
// 005fd477: MOV EAX,dword ptr [EAX + 0xc]
// 005fd47a: MOV EBX,dword ptr [EDX + 0x28]
// 005fd47d: ADD ECX,EAX
// 005fd47f: MOV EAX,dword ptr [EDX + 0x2c]
// 005fd482: MOV dword ptr [EDX + 0x8],ECX
// 005fd485: ADD EBX,EAX
// 005fd487: MOV EAX,dword ptr [ESP + 0x18]
// 005fd48b: MOV dword ptr [EDX + 0x28],EBX
// 005fd48e: MOV EDX,dword ptr [ESP + 0x18]
// 005fd492: MOV EAX,dword ptr [EAX + 0xc]
// 005fd495: MOV ESI,dword ptr [EDX + 0x8]
// 005fd498: MOV EDI,dword ptr [EDX + 0x28]
// 005fd49b: ADD ESI,EAX
// 005fd49d: MOV EAX,dword ptr [EDX + 0x2c]
// 005fd4a0: MOV EBP,dword ptr [0x03f9ad5c]
//   XREF to: 03f9ad5c (READ)
// 005fd4a6: ADD EDI,EAX
// 005fd4a8: MOV EAX,dword ptr [ESP + 0x14]
// 005fd4ac: MOV dword ptr [EDX + 0x8],ESI
// 005fd4af: INC EAX
// 005fd4b0: MOV dword ptr [EDX + 0x28],EDI
// 005fd4b3: JMP 0x005fd1b8
//   XREF to: 005fd1b8 (UNCONDITIONAL_JUMP)
