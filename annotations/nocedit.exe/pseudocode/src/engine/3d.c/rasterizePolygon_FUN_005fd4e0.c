// Name: engine_3d.c_rasterizePolygon_FUN_005fd4e0
// Address: 005fd4e0
// Address Range: [[005fd4e0, 005fd985]]
// Convention: __cdecl
// Signature: void engine_3d.c_rasterizePolygon_FUN_005fd4e0(SRenderVertex * vertex_buffer, int vertex_count, RenderScanlineFunc * scanline_renderer)
// Cross-references:
//   engine_drender.cpp_CDemonRenderer_renderCustomScanline_FUN_0048c8d0 (0048c8d0) at 0048c94b [UNCONDITIONAL_CALL]
// Globals:
//   void* switchdataD_005fd4b8 = 005fd557
//   int g_CullingMode
//   int g_ViewportCenterXFixed
//   int g_ViewportCenterYFixed
//   int g_ViewportRightFixed
//   int g_ViewportBottomFixed
//   int g_RenderStateFlag2
//   int g_RenderedTriangleCount
//   int g_RasterizerEdgeCount
//   SEdgeData[16] g_RasterizerEdgeArray
//   undefined4 g_RasterizerEdgeArray[0].y_end
//   undefined4 g_RasterizerEdgeArray[0].x_current
//   undefined4 g_RasterizerEdgeArray[0].x_delta
//   undefined4 g_RasterizerEdgeArray[0].light_current
//   undefined4 g_RasterizerEdgeArray[0].light_delta
//   undefined4 g_RasterizerEdgeArray[0].z_current
//   undefined4 g_RasterizerEdgeArray[0].z_delta
//   undefined4 g_RasterizerEdgeArray[1].y_start
//   int g_RasterizerMinY
//   int g_RasterizerMaxY
// Function calls:
//   engine_prim.c_adjustNearPlaneTextureCoords_FUN_005520a0
//   engine_prim.c_calculateTriangleWindingOrder_FUN_00552150
//   engine_prim.c_normalizeTextureCoords_FUN_00552020
//   engine_prim.c_prepareDepthBuffer_FUN_00551fb0
//   engine_prim.c_replaceWWithDepth_FUN_00552110

#include "nocturne.h"

void __cdecl
engine_3d_c_rasterizePolygon_FUN_005fd4e0
          (SRenderVertex *vertex_buffer,int vertex_count,RenderScanlineFunc *scanline_renderer)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  SEdgeData *pSVar4;
  SEdgeData *pSVar5;
  int iVar6;
  SRenderVertex *pSVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  code *in_stack_00000010;
  int local_14;
  
  iVar12 = 0;
  pSVar7 = vertex_buffer;
  if (0 < vertex_count) {
    do {
      if ((int)((pSVar7->projected_vertex).screen_x & -0x80000000) != 0) {
        (pSVar7->projected_vertex).inv_z =
             (int)(0x7fffffff / (longlong)(pSVar7->projected_vertex).transformed_z);
        (pSVar7->projected_vertex).screen_x =
             (int)(((longlong)(pSVar7->projected_vertex).transformed_x *
                   (longlong)g_ViewportCenterXFixed) /
                  (longlong)(pSVar7->projected_vertex).transformed_z) + g_ViewportRightFixed;
        (pSVar7->projected_vertex).screen_y =
             (int)(((longlong)(pSVar7->projected_vertex).transformed_y *
                   (longlong)g_ViewportCenterYFixed) /
                  (longlong)(pSVar7->projected_vertex).transformed_z) + g_ViewportBottomFixed;
      }
      iVar12 = iVar12 + 1;
      pSVar7 = pSVar7 + 1;
    } while (iVar12 < vertex_count);
  }
  if ((g_CullingMode != 0) &&
     (iVar12 = engine_prim_c_calculateTriangleWindingOrder_FUN_00552150
                         (vertex_buffer,vertex_buffer + 1,vertex_buffer + 2), iVar12 == 0)) {
    return;
  }
  g_RenderedTriangleCount = g_RenderedTriangleCount + 1;
  switch(g_RenderStateFlag2) {
  case 1:
    engine_prim_c_prepareDepthBuffer_FUN_00551fb0
              ((SRenderVertex *)vertex_count,(int)scanline_renderer);
    break;
  case 2:
    engine_prim_c_normalizeTextureCoords_FUN_00552020
              ((SRenderVertex *)vertex_count,(int)scanline_renderer);
    break;
  case 3:
    engine_prim_c_adjustNearPlaneTextureCoords_FUN_005520a0
              ((SRenderVertex *)vertex_count,(int)scanline_renderer);
    break;
  case 5:
    engine_prim_c_normalizeTextureCoords_FUN_00552020
              ((SRenderVertex *)vertex_count,(int)scanline_renderer);
    break;
  case 6:
    engine_prim_c_replaceWWithDepth_FUN_00552110
              ((SRenderVertex *)vertex_count,(int)scanline_renderer);
  }
  g_RasterizerEdgeCount = 0;
  g_RasterizerMaxY = 0;
  local_14 = 0;
  g_RasterizerMinY = 0x4b0;
  iVar12 = g_RasterizerEdgeCount;
  if (0 < (int)scanline_renderer) {
    do {
      iVar2 = local_14 + 1;
      if ((int)scanline_renderer <= iVar2) {
        iVar2 = 0;
      }
      iVar8 = vertex_count + iVar2 * 0x30;
      iVar9 = vertex_count + local_14 * 0x30;
      iVar3 = *(int *)(iVar8 + 0x14) >> 0x10;
      iVar2 = *(int *)(iVar9 + 0x14) >> 0x10;
      g_RasterizerEdgeCount = iVar12;
      if (iVar2 != iVar3) {
        iVar6 = iVar3;
        iVar11 = iVar8;
        if (*(int *)(iVar8 + 0x14) < *(int *)(iVar9 + 0x14)) {
          iVar6 = iVar2;
          iVar2 = iVar3;
          iVar11 = iVar9;
          iVar9 = iVar8;
        }
        g_RasterizerEdgeArray[iVar12].y_start = iVar2;
        iVar3 = g_RasterizerMinY;
        g_RasterizerEdgeArray[iVar12].y_end = iVar6;
        if (iVar2 < iVar3) {
          g_RasterizerMinY = iVar2;
        }
        if (g_RasterizerMaxY < iVar6) {
          g_RasterizerMaxY = iVar6;
        }
        g_RasterizerEdgeArray[iVar12].x_current = *(int *)(iVar9 + 0x10);
        g_RasterizerEdgeArray[iVar12].z_current = *(int *)(iVar9 + 8) << 8;
        g_RasterizerEdgeArray[iVar12].light_current = *(int *)(iVar9 + 0x20);
        uVar10 = *(int *)(iVar11 + 0x14) - *(int *)(iVar9 + 0x14);
        if (uVar10 < 0x10000) {
          iVar2 = 0;
        }
        else {
          iVar2 = (int)(0xffffffff / (ulonglong)uVar10);
        }
        lVar1 = (longlong)iVar2 * (longlong)(*(int *)(iVar11 + 0x10) - *(int *)(iVar9 + 0x10));
        g_RasterizerEdgeArray[iVar12].x_delta =
             (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
        lVar1 = (longlong)iVar2 * (longlong)((*(int *)(iVar11 + 8) - *(int *)(iVar9 + 8)) * 0x100);
        g_RasterizerEdgeArray[iVar12].z_delta =
             (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
        lVar1 = (longlong)iVar2 * (longlong)(*(int *)(iVar11 + 0x20) - *(int *)(iVar9 + 0x20));
        g_RasterizerEdgeArray[iVar12].light_delta =
             (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
        uVar10 = (uint)(ushort)((ushort)*(undefined4 *)(iVar9 + 0x14) ^ 0xffff);
        lVar1 = (longlong)(int)uVar10 * (longlong)g_RasterizerEdgeArray[iVar12].x_delta;
        g_RasterizerEdgeArray[iVar12].x_current =
             g_RasterizerEdgeArray[iVar12].x_current +
             ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
        lVar1 = (longlong)(int)uVar10 * (longlong)g_RasterizerEdgeArray[iVar12].z_delta;
        iVar2 = g_RasterizerEdgeArray[iVar12].light_delta;
        g_RasterizerEdgeArray[iVar12].z_current =
             g_RasterizerEdgeArray[iVar12].z_current +
             ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
        lVar1 = (longlong)(int)uVar10 * (longlong)iVar2;
        g_RasterizerEdgeCount = g_RasterizerEdgeCount + 1;
        g_RasterizerEdgeArray[iVar12].light_current =
             g_RasterizerEdgeArray[iVar12].light_current +
             ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
      }
      local_14 = local_14 + 1;
      iVar12 = g_RasterizerEdgeCount;
    } while (local_14 < (int)scanline_renderer);
  }
  iVar12 = g_RasterizerMinY;
  pSVar4 = g_RasterizerEdgeArray;
  iVar2 = 0;
  if (0 < g_RasterizerEdgeCount) {
    do {
      if ((g_RasterizerMinY == pSVar4->y_start) && (pSVar4 != (SEdgeData *)0x0)) goto LAB_005fd5f3;
      iVar2 = iVar2 + 1;
      pSVar4 = pSVar4 + 1;
    } while (iVar2 < g_RasterizerEdgeCount);
  }
  pSVar4 = (SEdgeData *)0x0;
LAB_005fd5f3:
  if (pSVar4 != (SEdgeData *)0x0) {
    iVar2 = 0;
    pSVar5 = g_RasterizerEdgeArray;
    if (0 < g_RasterizerEdgeCount) {
      do {
        if ((g_RasterizerMinY == pSVar5->y_start) && (pSVar5 != pSVar4)) goto LAB_005fd62a;
        iVar2 = iVar2 + 1;
        pSVar5 = pSVar5 + 1;
      } while (iVar2 < g_RasterizerEdgeCount);
    }
    pSVar5 = (SEdgeData *)0x0;
LAB_005fd62a:
    if (pSVar5 != (SEdgeData *)0x0) {
      do {
        if (pSVar4->y_end <= iVar12) {
          pSVar4->y_start = -1;
          iVar2 = 0;
          pSVar4 = g_RasterizerEdgeArray;
          if (0 < g_RasterizerEdgeCount) {
            do {
              if ((iVar12 == pSVar4->y_start) && (pSVar4 != pSVar5)) goto LAB_005fd67c;
              iVar2 = iVar2 + 1;
              pSVar4 = pSVar4 + 1;
            } while (iVar2 < g_RasterizerEdgeCount);
          }
          pSVar4 = (SEdgeData *)0x0;
LAB_005fd67c:
          if (pSVar4 == (SEdgeData *)0x0) {
            return;
          }
        }
        if (pSVar5->y_end <= iVar12) {
          pSVar5->y_start = -1;
          iVar2 = 0;
          pSVar5 = g_RasterizerEdgeArray;
          if (0 < g_RasterizerEdgeCount) {
            do {
              if ((iVar12 == pSVar5->y_start) && (pSVar5 != pSVar4)) goto LAB_005fd6c4;
              iVar2 = iVar2 + 1;
              pSVar5 = pSVar5 + 1;
            } while (iVar2 < g_RasterizerEdgeCount);
          }
          pSVar5 = (SEdgeData *)0x0;
LAB_005fd6c4:
          if (pSVar5 == (SEdgeData *)0x0) {
            return;
          }
        }
        (*in_stack_00000010)((void *)iVar12,pSVar4,(int)pSVar5);
        pSVar4->x_current = pSVar4->x_current + pSVar4->x_delta;
        pSVar4->z_current = pSVar4->z_current + pSVar4->z_delta;
        pSVar4->light_current = pSVar4->light_current + pSVar4->light_delta;
        pSVar5->x_current = pSVar5->x_current + pSVar5->x_delta;
        pSVar5->z_current = pSVar5->z_current + pSVar5->z_delta;
        pSVar5->light_current = pSVar5->light_current + pSVar5->light_delta;
      } while( true );
    }
  }
  return;
}


// Assembly code:
// 005fd4e0: PUSH EBX
//   Label: engine_3d.c_rasterizePolygon_FUN_005fd4e0
// 005fd4e1: PUSH ESI
// 005fd4e2: PUSH EDI
// 005fd4e3: PUSH EBP
// 005fd4e4: SUB ESP,0x10
// 005fd4e7: MOV ESI,dword ptr [0x03f9ad5c]
//   XREF to: 03f9ad5c (READ)
// 005fd4ed: MOV EDX,dword ptr [ESP + 0x28]
//   XREF to: Stack[0x8] (READ)
// 005fd4f1: MOV ECX,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x4] (READ)
// 005fd4f5: XOR EDI,EDI
// 005fd4f7: TEST EDX,EDX
// 005fd4f9: JLE 0x005fd51f
//   XREF to: 005fd51f (CONDITIONAL_JUMP)
// 005fd4fb: MOV AH,byte ptr [ECX + 0x13]
//   Label: LAB_005fd4fb
// 005fd4fe: MOV dword ptr [0x03f9ad5c],ESI
//   XREF to: 03f9ad5c (WRITE)
// 005fd504: TEST AH,0x80
// 005fd507: JNZ 0x005fd6e2
//   XREF to: 005fd6e2 (CONDITIONAL_JUMP)
// 005fd50d: MOV ESI,dword ptr [0x03f9ad5c]
//   Label: LAB_005fd50d
//   XREF to: 03f9ad5c (READ)
// 005fd513: MOV EBX,dword ptr [ESP + 0x28]
//   XREF to: Stack[0x8] (READ)
// 005fd517: INC EDI
// 005fd518: ADD ECX,0x30
// 005fd51b: CMP EDI,EBX
// 005fd51d: JL 0x005fd4fb
//   XREF to: 005fd4fb (CONDITIONAL_JUMP)
// 005fd51f: MOV EDI,dword ptr [0x00772a7c]
//   Label: LAB_005fd51f
//   XREF to: 00772a7c (READ)
// 005fd525: MOV dword ptr [0x03f9ad5c],ESI
//   XREF to: 03f9ad5c (WRITE)
// 005fd52b: TEST EDI,EDI
// 005fd52d: JNZ 0x005fd72e
//   XREF to: 005fd72e (CONDITIONAL_JUMP)
// 005fd533: MOV EDX,dword ptr [0x030e56b8]
//   Label: LAB_005fd533
//   XREF to: 030e56b8 (READ)
// 005fd539: MOV ESI,dword ptr [0x03f9ad5c]
//   XREF to: 03f9ad5c (READ)
// 005fd53f: INC EDX
// 005fd540: MOV EAX,[0x02d052a4]
//   XREF to: 02d052a4 (READ)
// 005fd545: MOV dword ptr [0x030e56b8],EDX
//   XREF to: 030e56b8 (WRITE)
// 005fd54b: CMP EAX,0x6
// 005fd54e: JA 0x005fd557
//   XREF to: 005fd557 (CONDITIONAL_JUMP)
// 005fd550: JMP dword ptr [EAX*0x4 + 0x5fd4b8]
//   Label: switchD
//   XREF to: 005fd557 (COMPUTED_JUMP)
//   XREF to: 005fd761 (COMPUTED_JUMP)
//   XREF to: 005fd778 (COMPUTED_JUMP)
//   XREF to: 005fd78f (COMPUTED_JUMP)
//   XREF to: 005fd7a6 (COMPUTED_JUMP)
//   XREF to: 005fd7bd (COMPUTED_JUMP)
//   XREF to: 005fd4b8 (DATA)
// 005fd557: MOV EDI,0x4b0
//   Label: caseD_4
// 005fd55c: MOV EDX,dword ptr [ESP + 0x28]
//   XREF to: Stack[0x8] (READ)
// 005fd560: XOR EBP,EBP
// 005fd562: XOR ESI,ESI
// 005fd564: MOV dword ptr [0x03f9b1e4],EBP
//   XREF to: 03f9b1e4 (WRITE)
// 005fd56a: MOV dword ptr [ESP + 0x8],EBP
//   XREF to: Stack[-0x18] (WRITE)
// 005fd56e: MOV dword ptr [0x03f9b1e0],EDI
//   XREF to: 03f9b1e0 (WRITE)
// 005fd574: TEST EDX,EDX
// 005fd576: JLE 0x005fd5ce
//   XREF to: 005fd5ce (CONDITIONAL_JUMP)
// 005fd578: MOV EAX,dword ptr [ESP + 0x8]
//   Label: LAB_005fd578
//   XREF to: Stack[-0x18] (READ)
// 005fd57c: MOV EDI,dword ptr [ESP + 0x28]
//   XREF to: Stack[0x8] (READ)
// 005fd580: INC EAX
// 005fd581: CMP EAX,EDI
// 005fd583: JL 0x005fd587
//   XREF to: 005fd587 (CONDITIONAL_JUMP)
// 005fd585: XOR EAX,EAX
// 005fd587: IMUL EAX,EAX,0x30
//   Label: LAB_005fd587
// 005fd58a: MOV EDX,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x4] (READ)
// 005fd58e: MOV EBP,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x18] (READ)
// 005fd592: ADD EDX,EAX
// 005fd594: IMUL EAX,EBP,0x30
// 005fd597: MOV dword ptr [ESP],EDX
//   XREF to: Stack[-0x20] (DATA)
// 005fd59a: MOV EDX,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x4] (READ)
// 005fd59e: ADD EDX,EAX
// 005fd5a0: MOV EBP,dword ptr [ESP]
//   XREF to: Stack[-0x20] (DATA)
// 005fd5a3: MOV dword ptr [ESP + 0x4],EDX
//   XREF to: Stack[-0x1c] (WRITE)
// 005fd5a7: MOV EDI,EDX
// 005fd5a9: MOV EAX,dword ptr [EBP + 0x14]
// 005fd5ac: MOV EDX,dword ptr [EDX + 0x14]
// 005fd5af: SAR EAX,0x10
// 005fd5b2: SAR EDX,0x10
// 005fd5b5: CMP EDX,EAX
// 005fd5b7: JNZ 0x005fd7d4
//   XREF to: 005fd7d4 (CONDITIONAL_JUMP)
// 005fd5bd: MOV ECX,dword ptr [ESP + 0x8]
//   Label: LAB_005fd5bd
//   XREF to: Stack[-0x18] (READ)
// 005fd5c1: INC ECX
// 005fd5c2: MOV EBX,dword ptr [ESP + 0x28]
//   XREF to: Stack[0x8] (READ)
// 005fd5c6: MOV dword ptr [ESP + 0x8],ECX
//   XREF to: Stack[-0x18] (WRITE)
// 005fd5ca: CMP ECX,EBX
// 005fd5cc: JL 0x005fd578
//   XREF to: 005fd578 (CONDITIONAL_JUMP)
// 005fd5ce: MOV EAX,0x3f9ad60
//   Label: LAB_005fd5ce
//   XREF to: 03f9ad60 (DATA)
// 005fd5d3: MOV EDI,dword ptr [0x03f9b1e0]
//   XREF to: 03f9b1e0 (READ)
// 005fd5d9: XOR EDX,EDX
// 005fd5db: TEST ESI,ESI
// 005fd5dd: JLE 0x005fd8ed
//   XREF to: 005fd8ed (CONDITIONAL_JUMP)
// 005fd5e3: CMP EDI,dword ptr [EAX]
//   Label: LAB_005fd5e3
//   XREF to: 03f9ad60 (READ)
//   XREF to: 03f9ada8 (READ)
// 005fd5e5: JNZ 0x005fd8e1
//   XREF to: 005fd8e1 (CONDITIONAL_JUMP)
// 005fd5eb: TEST EAX,EAX
// 005fd5ed: JZ 0x005fd8e1
//   XREF to: 005fd8e1 (CONDITIONAL_JUMP)
// 005fd5f3: MOV EBP,EAX
//   Label: LAB_005fd5f3
// 005fd5f5: MOV dword ptr [0x03f9ad5c],ESI
//   XREF to: 03f9ad5c (WRITE)
// 005fd5fb: TEST EAX,EAX
// 005fd5fd: JZ 0x005fd6d4
//   XREF to: 005fd6d4 (CONDITIONAL_JUMP)
// 005fd603: MOV EBX,dword ptr [0x03f9b1e0]
//   XREF to: 03f9b1e0 (READ)
// 005fd609: MOV ECX,EAX
// 005fd60b: XOR EDX,EDX
// 005fd60d: MOV EAX,0x3f9ad60
//   XREF to: 03f9ad60 (DATA)
// 005fd612: TEST ESI,ESI
// 005fd614: JLE 0x005fd900
//   XREF to: 005fd900 (CONDITIONAL_JUMP)
// 005fd61a: CMP EBX,dword ptr [EAX]
//   Label: LAB_005fd61a
//   XREF to: 03f9ad60 (READ)
//   XREF to: 03f9ada8 (READ)
// 005fd61c: JNZ 0x005fd8f4
//   XREF to: 005fd8f4 (CONDITIONAL_JUMP)
// 005fd622: CMP EAX,ECX
// 005fd624: JZ 0x005fd8f4
//   XREF to: 005fd8f4 (CONDITIONAL_JUMP)
// 005fd62a: MOV EDI,EAX
//   Label: LAB_005fd62a
// 005fd62c: MOV dword ptr [0x03f9ad5c],ESI
//   XREF to: 03f9ad5c (WRITE)
// 005fd632: TEST EAX,EAX
// 005fd634: JZ 0x005fd6d4
//   XREF to: 005fd6d4 (CONDITIONAL_JUMP)
// 005fd63a: MOV EAX,[0x03f9b1e0]
//   XREF to: 03f9b1e0 (READ)
// 005fd63f: MOV dword ptr [ESP + 0xc],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 005fd643: MOV EAX,dword ptr [ESP + 0xc]
//   Label: LAB_005fd643
//   XREF to: Stack[-0x14] (READ)
// 005fd647: CMP EAX,dword ptr [EBP + 0x4]
//   XREF to: 03f9ad64 (READ)
// 005fd64a: JL 0x005fd688
//   XREF to: 005fd688 (CONDITIONAL_JUMP)
// 005fd64c: MOV ESI,dword ptr [0x03f9ad5c]
//   XREF to: 03f9ad5c (READ)
// 005fd652: MOV EBX,EAX
// 005fd654: MOV ECX,EDI
// 005fd656: MOV dword ptr [EBP],0xffffffff
//   XREF to: 03f9ad60 (WRITE)
// 005fd65d: XOR EDX,EDX
// 005fd65f: MOV EAX,0x3f9ad60
//   XREF to: 03f9ad60 (DATA)
// 005fd664: TEST ESI,ESI
// 005fd666: JLE 0x005fd913
//   XREF to: 005fd913 (CONDITIONAL_JUMP)
// 005fd66c: CMP EBX,dword ptr [EAX]
//   Label: LAB_005fd66c
//   XREF to: 03f9ad60 (READ)
//   XREF to: 03f9ada8 (READ)
// 005fd66e: JNZ 0x005fd907
//   XREF to: 005fd907 (CONDITIONAL_JUMP)
// 005fd674: CMP EAX,ECX
// 005fd676: JZ 0x005fd907
//   XREF to: 005fd907 (CONDITIONAL_JUMP)
// 005fd67c: MOV EBP,EAX
//   Label: LAB_005fd67c
// 005fd67e: MOV dword ptr [0x03f9ad5c],ESI
//   XREF to: 03f9ad5c (WRITE)
// 005fd684: TEST EAX,EAX
// 005fd686: JZ 0x005fd6d4
//   XREF to: 005fd6d4 (CONDITIONAL_JUMP)
// 005fd688: MOV EAX,dword ptr [ESP + 0xc]
//   Label: LAB_005fd688
//   XREF to: Stack[-0x14] (READ)
// 005fd68c: CMP EAX,dword ptr [EDI + 0x4]
//   XREF to: 03f9ad64 (READ)
// 005fd68f: JL 0x005fd92d
//   XREF to: 005fd92d (CONDITIONAL_JUMP)
// 005fd695: MOV ESI,dword ptr [0x03f9ad5c]
//   XREF to: 03f9ad5c (READ)
// 005fd69b: MOV ECX,EAX
// 005fd69d: MOV EBX,EBP
// 005fd69f: MOV dword ptr [EDI],0xffffffff
//   XREF to: 03f9ad60 (WRITE)
// 005fd6a5: XOR EDX,EDX
// 005fd6a7: MOV EAX,0x3f9ad60
//   XREF to: 03f9ad60 (DATA)
// 005fd6ac: TEST ESI,ESI
// 005fd6ae: JLE 0x005fd926
//   XREF to: 005fd926 (CONDITIONAL_JUMP)
// 005fd6b4: CMP ECX,dword ptr [EAX]
//   Label: LAB_005fd6b4
//   XREF to: 03f9ad60 (READ)
//   XREF to: 03f9ada8 (READ)
// 005fd6b6: JNZ 0x005fd91a
//   XREF to: 005fd91a (CONDITIONAL_JUMP)
// 005fd6bc: CMP EAX,EBX
// 005fd6be: JZ 0x005fd91a
//   XREF to: 005fd91a (CONDITIONAL_JUMP)
// 005fd6c4: MOV EDI,EAX
//   Label: LAB_005fd6c4
// 005fd6c6: MOV dword ptr [0x03f9ad5c],ESI
//   XREF to: 03f9ad5c (WRITE)
// 005fd6cc: TEST EAX,EAX
// 005fd6ce: JNZ 0x005fd92d
//   XREF to: 005fd92d (CONDITIONAL_JUMP)
// 005fd6d4: MOV ESI,dword ptr [0x03f9ad5c]
//   Label: LAB_005fd6d4
//   XREF to: 03f9ad5c (READ)
// 005fd6da: ADD ESP,0x10
// 005fd6dd: POP EBP
// 005fd6de: POP EDI
// 005fd6df: POP ESI
// 005fd6e0: POP EBX
// 005fd6e1: RET
// 005fd6e2: MOV EAX,0x7fffffff
//   Label: LAB_005fd6e2
// 005fd6e7: MOV EDX,EAX
// 005fd6e9: MOV EBX,dword ptr [ECX + 0x8]
// 005fd6ec: SAR EDX,0x1f
// 005fd6ef: IDIV EBX
// 005fd6f1: MOV dword ptr [ECX + 0xc],EAX
// 005fd6f4: MOV EDX,dword ptr [0x02d02548]
//   XREF to: 02d02548 (READ)
// 005fd6fa: MOV EBX,dword ptr [ECX + 0x8]
// 005fd6fd: MOV EAX,dword ptr [ECX]
// 005fd6ff: IMUL EDX
// 005fd701: IDIV EBX
// 005fd703: MOV EDX,dword ptr [0x02d02550]
//   XREF to: 02d02550 (READ)
// 005fd709: ADD EAX,EDX
// 005fd70b: MOV EBX,dword ptr [ECX + 0x8]
// 005fd70e: MOV dword ptr [ECX + 0x10],EAX
// 005fd711: MOV EDX,dword ptr [0x02d0254c]
//   XREF to: 02d0254c (READ)
// 005fd717: MOV EAX,dword ptr [ECX + 0x4]
// 005fd71a: IMUL EDX
// 005fd71c: IDIV EBX
// 005fd71e: MOV EDX,dword ptr [0x02d02554]
//   XREF to: 02d02554 (READ)
// 005fd724: ADD EAX,EDX
// 005fd726: MOV dword ptr [ECX + 0x14],EAX
// 005fd729: JMP 0x005fd50d
//   XREF to: 005fd50d (UNCONDITIONAL_JUMP)
// 005fd72e: MOV EAX,dword ptr [ESP + 0x24]
//   Label: LAB_005fd72e
//   XREF to: Stack[0x4] (READ)
// 005fd732: ADD EAX,0x60
// 005fd735: PUSH EAX
// 005fd736: MOV EAX,dword ptr [ESP + 0x28]
//   XREF to: Stack[0x4] (READ)
// 005fd73a: ADD EAX,0x30
// 005fd73d: PUSH EAX
// 005fd73e: MOV EBP,dword ptr [ESP + 0x2c]
//   XREF to: Stack[0x4] (READ)
// 005fd742: PUSH EBP
// 005fd743: CALL engine_prim.c_calculateTriangleWindingOrder_FUN_00552150
//   XREF to: 00552150 (UNCONDITIONAL_CALL)
// 005fd748: ADD ESP,0xc
// 005fd74b: TEST EAX,EAX
// 005fd74d: JNZ 0x005fd533
//   XREF to: 005fd533 (CONDITIONAL_JUMP)
// 005fd753: MOV ESI,dword ptr [0x03f9ad5c]
//   XREF to: 03f9ad5c (READ)
// 005fd759: ADD ESP,0x10
// 005fd75c: POP EBP
// 005fd75d: POP EDI
// 005fd75e: POP ESI
// 005fd75f: POP EBX
// 005fd760: RET
// 005fd761: MOV EBX,dword ptr [ESP + 0x28]
//   Label: caseD_1
//   XREF to: Stack[0x8] (READ)
// 005fd765: PUSH EBX
// 005fd766: MOV ESI,dword ptr [ESP + 0x28]
//   XREF to: Stack[0x4] (READ)
// 005fd76a: PUSH ESI
// 005fd76b: CALL engine_prim.c_prepareDepthBuffer_FUN_00551fb0
//   XREF to: 00551fb0 (UNCONDITIONAL_CALL)
// 005fd770: ADD ESP,0x8
// 005fd773: JMP 0x005fd557
//   XREF to: 005fd557 (UNCONDITIONAL_JUMP)
// 005fd778: MOV EDX,dword ptr [ESP + 0x28]
//   Label: caseD_2
//   XREF to: Stack[0x8] (READ)
// 005fd77c: PUSH EDX
// 005fd77d: MOV ECX,dword ptr [ESP + 0x28]
//   XREF to: Stack[0x4] (READ)
// 005fd781: PUSH ECX
// 005fd782: CALL engine_prim.c_normalizeTextureCoords_FUN_00552020
//   XREF to: 00552020 (UNCONDITIONAL_CALL)
// 005fd787: ADD ESP,0x8
// 005fd78a: JMP 0x005fd557
//   XREF to: 005fd557 (UNCONDITIONAL_JUMP)
// 005fd78f: MOV EBP,dword ptr [ESP + 0x28]
//   Label: caseD_3
//   XREF to: Stack[0x8] (READ)
// 005fd793: PUSH EBP
// 005fd794: MOV EAX,dword ptr [ESP + 0x28]
//   XREF to: Stack[0x4] (READ)
// 005fd798: PUSH EAX
// 005fd799: CALL engine_prim.c_adjustNearPlaneTextureCoords_FUN_005520a0
//   XREF to: 005520a0 (UNCONDITIONAL_CALL)
// 005fd79e: ADD ESP,0x8
// 005fd7a1: JMP 0x005fd557
//   XREF to: 005fd557 (UNCONDITIONAL_JUMP)
// 005fd7a6: MOV ESI,dword ptr [ESP + 0x28]
//   Label: caseD_5
//   XREF to: Stack[0x8] (READ)
// 005fd7aa: PUSH ESI
// 005fd7ab: MOV EDI,dword ptr [ESP + 0x28]
//   XREF to: Stack[0x4] (READ)
// 005fd7af: PUSH EDI
// 005fd7b0: CALL engine_prim.c_normalizeTextureCoords_FUN_00552020
//   XREF to: 00552020 (UNCONDITIONAL_CALL)
// 005fd7b5: ADD ESP,0x8
// 005fd7b8: JMP 0x005fd557
//   XREF to: 005fd557 (UNCONDITIONAL_JUMP)
// 005fd7bd: MOV ECX,dword ptr [ESP + 0x28]
//   Label: caseD_6
//   XREF to: Stack[0x8] (READ)
// 005fd7c1: PUSH ECX
// 005fd7c2: MOV EBX,dword ptr [ESP + 0x28]
//   XREF to: Stack[0x4] (READ)
// 005fd7c6: PUSH EBX
// 005fd7c7: CALL engine_prim.c_replaceWWithDepth_FUN_00552110
//   XREF to: 00552110 (UNCONDITIONAL_CALL)
// 005fd7cc: ADD ESP,0x8
// 005fd7cf: JMP 0x005fd557
//   XREF to: 005fd557 (UNCONDITIONAL_JUMP)
// 005fd7d4: MOV ECX,EDI
//   Label: LAB_005fd7d4
// 005fd7d6: MOV ECX,dword ptr [ECX + 0x14]
// 005fd7d9: CMP ECX,dword ptr [EBP + 0x14]
// 005fd7dc: JLE 0x005fd7ea
//   XREF to: 005fd7ea (CONDITIONAL_JUMP)
// 005fd7de: MOV EDI,EBP
// 005fd7e0: MOV ECX,EDX
// 005fd7e2: MOV EBP,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x1c] (READ)
// 005fd7e6: MOV EDX,EAX
// 005fd7e8: MOV EAX,ECX
// 005fd7ea: IMUL ECX,ESI,0x48
//   Label: LAB_005fd7ea
// 005fd7ed: ADD ECX,0x3f9ad60
//   XREF to: 03f9ad60 (DATA)
// 005fd7f3: MOV dword ptr [ECX],EDX
//   XREF to: 03f9ad60 (WRITE)
// 005fd7f5: MOV EBX,dword ptr [0x03f9b1e0]
//   XREF to: 03f9b1e0 (READ)
// 005fd7fb: MOV dword ptr [ECX + 0x4],EAX
//   XREF to: 03f9ad64 (WRITE)
// 005fd7fe: CMP EDX,EBX
// 005fd800: JGE 0x005fd808
//   XREF to: 005fd808 (CONDITIONAL_JUMP)
// 005fd802: MOV dword ptr [0x03f9b1e0],EDX
//   XREF to: 03f9b1e0 (WRITE)
// 005fd808: CMP EAX,dword ptr [0x03f9b1e4]
//   Label: LAB_005fd808
//   XREF to: 03f9b1e4 (READ)
// 005fd80e: JLE 0x005fd815
//   XREF to: 005fd815 (CONDITIONAL_JUMP)
// 005fd810: MOV [0x03f9b1e4],EAX
//   XREF to: 03f9b1e4 (WRITE)
// 005fd815: MOV EAX,dword ptr [EDI + 0x10]
//   Label: LAB_005fd815
// 005fd818: MOV dword ptr [ECX + 0x8],EAX
//   XREF to: 03f9ad68 (WRITE)
// 005fd81b: MOV EAX,dword ptr [EDI + 0x8]
// 005fd81e: SHL EAX,0x8
// 005fd821: MOV dword ptr [ECX + 0x28],EAX
//   XREF to: 03f9ad88 (WRITE)
// 005fd824: MOV EAX,dword ptr [EDI + 0x20]
// 005fd827: MOV dword ptr [ECX + 0x10],EAX
//   XREF to: 03f9ad70 (WRITE)
// 005fd82a: MOV EBX,dword ptr [EBP + 0x14]
// 005fd82d: SUB EBX,dword ptr [EDI + 0x14]
// 005fd830: CMP EBX,0x10000
// 005fd836: JNC 0x005fd8d1
//   XREF to: 005fd8d1 (CONDITIONAL_JUMP)
// 005fd83c: XOR EBX,EBX
// 005fd83e: MOV EAX,dword ptr [EBP + 0x10]
//   Label: LAB_005fd83e
// 005fd841: MOV EDX,dword ptr [EDI + 0x10]
// 005fd844: SUB EAX,EDX
// 005fd846: MOV EDX,EAX
// 005fd848: MOV EAX,EBX
// 005fd84a: MOV dword ptr [0x03f9ad5c],ESI
//   XREF to: 03f9ad5c (WRITE)
// 005fd850: IMUL EDX
// 005fd852: SHRD EAX,EDX,0x10
// 005fd856: MOV dword ptr [ECX + 0xc],EAX
//   XREF to: 03f9ad6c (WRITE)
// 005fd859: MOV EAX,dword ptr [EBP + 0x8]
// 005fd85c: MOV EDX,dword ptr [EDI + 0x8]
// 005fd85f: SUB EAX,EDX
// 005fd861: MOV EDX,EAX
// 005fd863: SHL EDX,0x8
// 005fd866: MOV EAX,EBX
// 005fd868: IMUL EDX
// 005fd86a: SHRD EAX,EDX,0x10
// 005fd86e: MOV dword ptr [ECX + 0x2c],EAX
//   XREF to: 03f9ad8c (WRITE)
// 005fd871: MOV EDX,dword ptr [EBP + 0x20]
// 005fd874: MOV EBP,dword ptr [EDI + 0x20]
// 005fd877: MOV EAX,EBX
// 005fd879: SUB EDX,EBP
// 005fd87b: IMUL EDX
// 005fd87d: SHRD EAX,EDX,0x10
// 005fd881: MOV dword ptr [ECX + 0x14],EAX
//   XREF to: 03f9ad74 (WRITE)
// 005fd884: MOV EBX,dword ptr [EDI + 0x14]
// 005fd887: AND EBX,0xffff
// 005fd88d: XOR BX,0xffff
// 005fd891: MOV EDX,dword ptr [ECX + 0xc]
//   XREF to: 03f9ad6c (READ)
// 005fd894: MOV EAX,EBX
// 005fd896: IMUL EDX
// 005fd898: SHRD EAX,EDX,0x10
// 005fd89c: ADD dword ptr [ECX + 0x8],EAX
//   XREF to: 03f9ad68 (READ_WRITE)
// 005fd89f: MOV EAX,EBX
// 005fd8a1: MOV EDX,dword ptr [ECX + 0x2c]
//   XREF to: 03f9ad8c (READ)
// 005fd8a4: IMUL EDX
// 005fd8a6: SHRD EAX,EDX,0x10
// 005fd8aa: MOV EDI,dword ptr [ECX + 0x28]
//   XREF to: 03f9ad88 (READ)
// 005fd8ad: MOV EDX,dword ptr [ECX + 0x14]
//   XREF to: 03f9ad74 (READ)
// 005fd8b0: ADD EDI,EAX
// 005fd8b2: MOV EAX,EBX
// 005fd8b4: MOV dword ptr [ECX + 0x28],EDI
//   XREF to: 03f9ad88 (WRITE)
// 005fd8b7: IMUL EDX
// 005fd8b9: SHRD EAX,EDX,0x10
// 005fd8bd: MOV EBP,dword ptr [ECX + 0x10]
//   XREF to: 03f9ad70 (READ)
// 005fd8c0: MOV ESI,dword ptr [0x03f9ad5c]
//   XREF to: 03f9ad5c (READ)
// 005fd8c6: ADD EBP,EAX
// 005fd8c8: INC ESI
// 005fd8c9: MOV dword ptr [ECX + 0x10],EBP
//   XREF to: 03f9ad70 (WRITE)
// 005fd8cc: JMP 0x005fd5bd
//   XREF to: 005fd5bd (UNCONDITIONAL_JUMP)
// 005fd8d1: MOV EAX,0xffffffff
//   Label: LAB_005fd8d1
// 005fd8d6: XOR EDX,EDX
// 005fd8d8: DIV EBX
// 005fd8da: MOV EBX,EAX
// 005fd8dc: JMP 0x005fd83e
//   XREF to: 005fd83e (UNCONDITIONAL_JUMP)
// 005fd8e1: INC EDX
//   Label: LAB_005fd8e1
// 005fd8e2: ADD EAX,0x48
// 005fd8e5: CMP EDX,ESI
// 005fd8e7: JL 0x005fd5e3
//   XREF to: 005fd5e3 (CONDITIONAL_JUMP)
// 005fd8ed: XOR EAX,EAX
//   Label: LAB_005fd8ed
// 005fd8ef: JMP 0x005fd5f3
//   XREF to: 005fd5f3 (UNCONDITIONAL_JUMP)
// 005fd8f4: INC EDX
//   Label: LAB_005fd8f4
// 005fd8f5: ADD EAX,0x48
// 005fd8f8: CMP EDX,ESI
// 005fd8fa: JL 0x005fd61a
//   XREF to: 005fd61a (CONDITIONAL_JUMP)
// 005fd900: XOR EAX,EAX
//   Label: LAB_005fd900
// 005fd902: JMP 0x005fd62a
//   XREF to: 005fd62a (UNCONDITIONAL_JUMP)
// 005fd907: INC EDX
//   Label: LAB_005fd907
// 005fd908: ADD EAX,0x48
// 005fd90b: CMP EDX,ESI
// 005fd90d: JL 0x005fd66c
//   XREF to: 005fd66c (CONDITIONAL_JUMP)
// 005fd913: XOR EAX,EAX
//   Label: LAB_005fd913
// 005fd915: JMP 0x005fd67c
//   XREF to: 005fd67c (UNCONDITIONAL_JUMP)
// 005fd91a: INC EDX
//   Label: LAB_005fd91a
// 005fd91b: ADD EAX,0x48
//   XREF to: 03f9ada8 (DATA)
// 005fd91e: CMP EDX,ESI
// 005fd920: JL 0x005fd6b4
//   XREF to: 005fd6b4 (CONDITIONAL_JUMP)
// 005fd926: XOR EAX,EAX
//   Label: LAB_005fd926
// 005fd928: JMP 0x005fd6c4
//   XREF to: 005fd6c4 (UNCONDITIONAL_JUMP)
// 005fd92d: PUSH EDI
//   Label: LAB_005fd92d
//   XREF to: 03f9ad60 (DATA)
// 005fd92e: PUSH EBP
//   XREF to: 03f9ad60 (DATA)
// 005fd92f: MOV EAX,dword ptr [ESP + 0x14]
//   XREF to: Stack[-0x14] (READ)
// 005fd933: PUSH EAX
// 005fd934: CALL dword ptr [ESP + 0x38]
//   XREF to: Stack[0xc] (READ)
// 005fd938: MOV EAX,dword ptr [EBP + 0xc]
//   XREF to: 03f9ad6c (READ)
// 005fd93b: ADD dword ptr [EBP + 0x8],EAX
//   XREF to: 03f9ad68 (READ_WRITE)
// 005fd93e: MOV EBX,dword ptr [EBP + 0x28]
//   XREF to: 03f9ad88 (READ)
// 005fd941: MOV EAX,dword ptr [EBP + 0x2c]
//   XREF to: 03f9ad8c (READ)
// 005fd944: MOV ECX,dword ptr [EBP + 0x10]
//   XREF to: 03f9ad70 (READ)
// 005fd947: ADD EBX,EAX
// 005fd949: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: 03f9ad74 (READ)
// 005fd94c: MOV dword ptr [EBP + 0x28],EBX
//   XREF to: 03f9ad88 (WRITE)
// 005fd94f: ADD ECX,EAX
// 005fd951: MOV dword ptr [EBP + 0x10],ECX
//   XREF to: 03f9ad70 (WRITE)
// 005fd954: ADD ESP,0xc
// 005fd957: MOV EAX,dword ptr [EDI + 0xc]
//   XREF to: 03f9ad6c (READ)
// 005fd95a: MOV EBX,dword ptr [EDI + 0x8]
//   XREF to: 03f9ad68 (READ)
// 005fd95d: MOV EDX,dword ptr [EDI + 0x28]
//   XREF to: 03f9ad88 (READ)
// 005fd960: MOV ECX,dword ptr [EDI + 0x10]
//   XREF to: 03f9ad70 (READ)
// 005fd963: ADD EBX,EAX
// 005fd965: MOV EAX,dword ptr [EDI + 0x2c]
//   XREF to: 03f9ad8c (READ)
// 005fd968: MOV dword ptr [EDI + 0x8],EBX
//   XREF to: 03f9ad68 (WRITE)
// 005fd96b: MOV EBX,dword ptr [ESP + 0xc]
// 005fd96f: ADD EDX,EAX
// 005fd971: INC EBX
// 005fd972: MOV EAX,dword ptr [EDI + 0x14]
//   XREF to: 03f9ad74 (READ)
// 005fd975: MOV dword ptr [EDI + 0x28],EDX
//   XREF to: 03f9ad88 (WRITE)
// 005fd978: ADD ECX,EAX
// 005fd97a: MOV dword ptr [ESP + 0xc],EBX
// 005fd97e: MOV dword ptr [EDI + 0x10],ECX
//   XREF to: 03f9ad70 (WRITE)
// 005fd981: JMP 0x005fd643
//   XREF to: 005fd643 (UNCONDITIONAL_JUMP)
