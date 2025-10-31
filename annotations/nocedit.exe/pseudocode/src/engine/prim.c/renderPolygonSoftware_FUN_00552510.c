// Name: engine_prim.c_renderPolygonSoftware_FUN_00552510
// Address: 00552510
// Address Range: [[00552510, 00552a30]]
// Convention: __cdecl
// Signature: void engine_prim.c_renderPolygonSoftware_FUN_00552510(SRenderVertex * vertices, int vertex_count)
// Cross-references:
//   engine_clipper.c_clipAndRasterize_FUN_004371b0 (004371b0) at 004371ef [UNCONDITIONAL_CALL]
// Globals:
//   void* switchdataD_005524e8 = 00552620
//   uint g_VertexProcessingEnabled = 0x1
//   int g_MaxViewportScanline = 0x4b0
//   int g_TexturesDisabled
//   int g_CullingMode
//   int g_ViewportCenterXFixed
//   int g_ViewportCenterYFixed
//   int g_ViewportRightFixed
//   int g_ViewportBottomFixed
//   int g_UseExternalRenderer
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
//   engine_prim.c_adjustNearPlaneTextureCoords_FUN_005520a0
//   engine_prim.c_calculateTriangleWindingOrder_FUN_00552150
//   engine_prim.c_findEdgeInBuffer_FUN_00551f70
//   engine_prim.c_normalizeTextureCoords_FUN_00552020
//   engine_prim.c_prepareDepthBuffer_FUN_00551fb0
//   engine_prim.c_replaceWWithDepth_FUN_00552110
//   wincore_windll.cpp_drawPolygon_FUN_005b75e0
//   wincore_windll.cpp_renderScanline_FUN_005b5710

#include "nocturne.h"

void __cdecl
engine_prim_c_renderPolygonSoftware_FUN_00552510(SRenderVertex *vertices,int vertex_count)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  SSoftwareEdge *edge_ptr;
  SSoftwareEdge *edge_ptr_00;
  SRenderVertex *pSVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int unaff_EBP;
  int iVar9;
  int iVar10;
  uint uVar11;
  SRenderVertex *v1;
  bool bVar12;
  int in_stack_0000000c;
  int in_stack_00000010;
  int in_stack_00000014;
  int in_stack_ffffffe4;
  void *left_data;
  void *in_stack_ffffffec;
  
  if ((g_VertexProcessingEnabled != 0) && (iVar10 = 0, pSVar4 = vertices, 0 < vertex_count)) {
    do {
      if ((int)((pSVar4->projected_vertex).screen_x & -0x80000000) != 0) {
        (pSVar4->projected_vertex).inv_z =
             (int)(0x7fffffff / (longlong)(pSVar4->projected_vertex).transformed_z);
        (pSVar4->projected_vertex).screen_x =
             (int)(((longlong)(pSVar4->projected_vertex).transformed_x *
                   (longlong)g_ViewportCenterXFixed) /
                  (longlong)(pSVar4->projected_vertex).transformed_z) + g_ViewportRightFixed;
        (pSVar4->projected_vertex).screen_y =
             (int)(((longlong)(pSVar4->projected_vertex).transformed_y *
                   (longlong)g_ViewportCenterYFixed) /
                  (longlong)(pSVar4->projected_vertex).transformed_z) + g_ViewportBottomFixed;
      }
      iVar10 = iVar10 + 1;
      pSVar4 = pSVar4 + 1;
    } while (iVar10 < vertex_count);
  }
  if (g_CullingMode != 0) {
    v1 = vertices + 1;
    pSVar4 = vertices + 2;
    if (vertex_count < 4) {
      iVar10 = engine_prim_c_calculateTriangleWindingOrder_FUN_00552150(vertices,v1,pSVar4);
      if (iVar10 == 0) {
        return;
      }
    }
    else {
      iVar10 = 0;
      iVar9 = 0;
      if (0 < vertex_count + -2) {
        do {
          iVar2 = engine_prim_c_calculateTriangleWindingOrder_FUN_00552150
                            ((SRenderVertex *)vertex_count,v1,pSVar4);
          if (iVar2 == 0) {
            iVar9 = iVar9 + 1;
          }
          v1 = v1 + 1;
          iVar10 = iVar10 + 1;
          pSVar4 = pSVar4 + 1;
        } while (iVar10 < in_stack_ffffffe4);
      }
      if (iVar9 == in_stack_ffffffe4) {
        return;
      }
    }
  }
  if ((g_UseExternalRenderer != 0) && (g_TexturesDisabled == 0)) {
    g_RenderedTriangleCount = g_RenderedTriangleCount + in_stack_0000000c + -2;
    wincore_windll_cpp_drawPolygon_FUN_005b75e0
              ((SRenderVertex *)vertex_count,in_stack_0000000c,g_RenderStateFlags);
    return;
  }
  g_RenderedTriangleCount = g_RenderedTriangleCount + 1;
  switch(g_RenderStateFlag2) {
  case 1:
    engine_prim_c_prepareDepthBuffer_FUN_00551fb0((SRenderVertex *)vertex_count,in_stack_0000000c);
    break;
  case 2:
    engine_prim_c_normalizeTextureCoords_FUN_00552020
              ((SRenderVertex *)vertex_count,in_stack_0000000c);
    break;
  case 3:
    engine_prim_c_adjustNearPlaneTextureCoords_FUN_005520a0
              ((SRenderVertex *)vertex_count,in_stack_0000000c);
    break;
  case 5:
    engine_prim_c_normalizeTextureCoords_FUN_00552020
              ((SRenderVertex *)vertex_count,in_stack_0000000c);
    break;
  case 6:
    engine_prim_c_replaceWWithDepth_FUN_00552110((SRenderVertex *)vertex_count,in_stack_0000000c);
  }
  g_SoftwareMaxScanline = 0;
  g_SoftwareEdgeCount = 0;
  left_data = (void *)0x0;
  g_SoftwareMinScanline = 0x4b0;
  if (0 < in_stack_0000000c) {
    do {
      iVar10 = g_SoftwareEdgeCount;
      iVar9 = (int)left_data + 1;
      if (in_stack_0000000c <= iVar9) {
        iVar9 = 0;
      }
      iVar2 = vertex_count + iVar9 * 0x30;
      iVar3 = (int)left_data * 0x30 + vertex_count;
      iVar5 = *(int *)(iVar3 + 0x14) >> 0x10;
      iVar9 = *(int *)(iVar2 + 0x14) >> 0x10;
      if (iVar5 != iVar9) {
        iVar6 = iVar5;
        iVar8 = iVar3;
        if (*(int *)(iVar2 + 0x14) < *(int *)(iVar3 + 0x14)) {
          iVar6 = iVar9;
          iVar8 = iVar2;
          iVar9 = iVar5;
          iVar2 = iVar3;
        }
        g_SoftwareEdgeBuffer[g_SoftwareEdgeCount].y_min = iVar6;
        iVar3 = g_SoftwareMinScanline;
        g_SoftwareEdgeBuffer[iVar10].y_max = iVar9;
        if (iVar6 < iVar3) {
          g_SoftwareMinScanline = iVar6;
        }
        if (g_SoftwareMaxScanline < iVar9) {
          g_SoftwareMaxScanline = iVar9;
        }
        uVar7 = *(int *)(iVar2 + 0x14) - *(int *)(iVar8 + 0x14);
        if (uVar7 < 0x10000) {
          iVar9 = 0;
        }
        else {
          iVar9 = (int)(0xffffffff / (ulonglong)uVar7);
        }
        uVar11 = (uint)(ushort)((ushort)*(undefined4 *)(iVar8 + 0x14) ^ 0xffff);
        lVar1 = (longlong)iVar9 * (longlong)(*(int *)(iVar2 + 0x10) - *(int *)(iVar8 + 0x10));
        uVar7 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
        g_SoftwareEdgeBuffer[iVar10].x_gradient = uVar7;
        lVar1 = (longlong)(int)uVar11 * (longlong)(int)uVar7;
        g_SoftwareEdgeBuffer[iVar10].x_current =
             *(int *)(iVar8 + 0x10) +
             ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
        lVar1 = (longlong)iVar9 * (longlong)(*(int *)(iVar2 + 0x18) - *(int *)(iVar8 + 0x18));
        uVar7 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
        g_SoftwareEdgeBuffer[iVar10].u_gradient = uVar7;
        lVar1 = (longlong)(int)uVar11 * (longlong)(int)uVar7;
        g_SoftwareEdgeBuffer[iVar10].u_current =
             *(int *)(iVar8 + 0x18) +
             ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
        lVar1 = (longlong)iVar9 * (longlong)(*(int *)(iVar2 + 0x1c) - *(int *)(iVar8 + 0x1c));
        uVar7 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
        g_SoftwareEdgeBuffer[iVar10].v_gradient = uVar7;
        lVar1 = (longlong)(int)uVar11 * (longlong)(int)uVar7;
        g_SoftwareEdgeBuffer[iVar10].v_current =
             *(int *)(iVar8 + 0x1c) +
             ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
        lVar1 = (longlong)iVar9 * (longlong)(*(int *)(iVar2 + 0x20) - *(int *)(iVar8 + 0x20));
        uVar7 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
        g_SoftwareEdgeBuffer[iVar10].z_gradient = uVar7;
        lVar1 = (longlong)(int)uVar11 * (longlong)(int)uVar7;
        g_SoftwareEdgeBuffer[iVar10].z_current =
             *(int *)(iVar8 + 0x20) +
             ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
        lVar1 = (longlong)iVar9 * (longlong)(*(int *)(iVar2 + 0x2c) - *(int *)(iVar8 + 0x2c));
        uVar7 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
        g_SoftwareEdgeBuffer[iVar10].fog_gradient = uVar7;
        lVar1 = (longlong)(int)uVar11 * (longlong)(int)uVar7;
        g_SoftwareEdgeBuffer[iVar10].fog_current =
             *(int *)(iVar8 + 0x2c) +
             ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
        lVar1 = (longlong)iVar9 * (longlong)(*(int *)(iVar2 + 8) - *(int *)(iVar8 + 8));
        uVar7 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
        g_SoftwareEdgeBuffer[iVar10].w_gradient = uVar7;
        lVar1 = (longlong)(int)uVar11 * (longlong)(int)uVar7;
        g_SoftwareEdgeBuffer[iVar10].w_current =
             *(int *)(iVar8 + 8) + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
        g_SoftwareEdgeCount = g_SoftwareEdgeCount + 1;
      }
      left_data = (void *)((int)left_data + 1);
    } while ((int)left_data < in_stack_0000000c);
  }
  edge_ptr = engine_prim_c_findEdgeInBuffer_FUN_00551f70(g_SoftwareMinScanline,(SSoftwareEdge *)0x0)
  ;
  if ((edge_ptr != (SSoftwareEdge *)0x0) &&
     (edge_ptr_00 = engine_prim_c_findEdgeInBuffer_FUN_00551f70(g_SoftwareMinScanline,edge_ptr),
     iVar10 = g_SoftwareMinScanline, edge_ptr_00 != (SSoftwareEdge *)0x0)) {
    iVar9 = g_SoftwareMinScanline - g_MaxViewportScanline;
    bVar12 = SBORROW4(g_SoftwareMinScanline,g_MaxViewportScanline);
    while (bVar12 != iVar9 < 0) {
      if (edge_ptr->y_max <= iVar10) {
        edge_ptr->y_min = -1;
        edge_ptr = engine_prim_c_findEdgeInBuffer_FUN_00551f70(iVar10,edge_ptr_00);
        if (edge_ptr == (SSoftwareEdge *)0x0) {
          return;
        }
      }
      if (edge_ptr_00->y_max <= iVar10) {
        edge_ptr_00->y_min = -1;
        edge_ptr_00 = engine_prim_c_findEdgeInBuffer_FUN_00551f70(iVar10,edge_ptr);
        if (edge_ptr_00 == (SSoftwareEdge *)0x0) {
          return;
        }
      }
      wincore_windll_cpp_renderScanline_FUN_005b5710(left_data,in_stack_ffffffec,unaff_EBP);
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
      in_stack_00000010 = in_stack_00000010 + 1;
      *(int *)(in_stack_00000014 + 0x10) =
           *(int *)(in_stack_00000014 + 0x10) + *(int *)(in_stack_00000014 + 0x14);
      iVar2 = g_MaxViewportScanline;
      *(int *)(in_stack_00000014 + 0x28) =
           *(int *)(in_stack_00000014 + 0x28) + *(int *)(in_stack_00000014 + 0x2c);
      *(int *)(in_stack_00000014 + 0x30) =
           *(int *)(in_stack_00000014 + 0x30) + *(int *)(in_stack_00000014 + 0x34);
      iVar9 = in_stack_00000010 - iVar2;
      bVar12 = SBORROW4(in_stack_00000010,iVar2);
    }
  }
  return;
}


// Assembly code:
// 00552510: PUSH EBX
//   Label: engine_prim.c_renderPolygonSoftware_FUN_00552510
// 00552511: PUSH ESI
// 00552512: PUSH EDI
// 00552513: PUSH EBP
// 00552514: SUB ESP,0x14
// 00552517: CMP dword ptr [0x006793bc],0x0
//   XREF to: 006793bc (READ)
// 0055251e: JZ 0x00552587
//   XREF to: 00552587 (CONDITIONAL_JUMP)
// 00552520: MOV EBX,dword ptr [ESP + 0x2c]
//   XREF to: Stack[0x8] (READ)
// 00552524: MOV ECX,dword ptr [ESP + 0x28]
//   XREF to: Stack[0x4] (READ)
// 00552528: XOR ESI,ESI
// 0055252a: TEST EBX,EBX
// 0055252c: JLE 0x00552587
//   XREF to: 00552587 (CONDITIONAL_JUMP)
// 0055252e: MOV EDI,dword ptr [ESP + 0x2c]
//   XREF to: Stack[0x8] (READ)
// 00552532: TEST byte ptr [ECX + 0x13],0x80
//   Label: LAB_00552532
// 00552536: JZ 0x0055257f
//   XREF to: 0055257f (CONDITIONAL_JUMP)
// 00552538: MOV EAX,0x7fffffff
// 0055253d: MOV EDX,EAX
// 0055253f: MOV EBX,dword ptr [ECX + 0x8]
// 00552542: SAR EDX,0x1f
// 00552545: IDIV EBX
// 00552547: MOV dword ptr [ECX + 0xc],EAX
// 0055254a: MOV EDX,dword ptr [0x02d02548]
//   XREF to: 02d02548 (READ)
// 00552550: MOV EBX,dword ptr [ECX + 0x8]
// 00552553: MOV EAX,dword ptr [ECX]
// 00552555: IMUL EDX
// 00552557: IDIV EBX
// 00552559: MOV EDX,dword ptr [0x02d02550]
//   XREF to: 02d02550 (READ)
// 0055255f: ADD EAX,EDX
// 00552561: MOV EBX,dword ptr [ECX + 0x8]
// 00552564: MOV dword ptr [ECX + 0x10],EAX
// 00552567: MOV EDX,dword ptr [0x02d0254c]
//   XREF to: 02d0254c (READ)
// 0055256d: MOV EAX,dword ptr [ECX + 0x4]
// 00552570: IMUL EDX
// 00552572: IDIV EBX
// 00552574: MOV EDX,dword ptr [0x02d02554]
//   XREF to: 02d02554 (READ)
// 0055257a: ADD EAX,EDX
// 0055257c: MOV dword ptr [ECX + 0x14],EAX
// 0055257f: INC ESI
//   Label: LAB_0055257f
// 00552580: ADD ECX,0x30
// 00552583: CMP ESI,EDI
// 00552585: JL 0x00552532
//   XREF to: 00552532 (CONDITIONAL_JUMP)
// 00552587: CMP dword ptr [0x00772a7c],0x0
//   Label: LAB_00552587
//   XREF to: 00772a7c (READ)
// 0055258e: JZ 0x005525ec
//   XREF to: 005525ec (CONDITIONAL_JUMP)
// 00552590: MOV EDI,dword ptr [ESP + 0x28]
//   XREF to: Stack[0x4] (READ)
// 00552594: MOV EAX,dword ptr [ESP + 0x28]
//   XREF to: Stack[0x4] (READ)
// 00552598: MOV EDX,dword ptr [ESP + 0x2c]
//   XREF to: Stack[0x8] (READ)
// 0055259c: ADD EDI,0x30
// 0055259f: ADD EAX,0x60
// 005525a2: CMP EDX,0x3
// 005525a5: JLE 0x005526b9
//   XREF to: 005526b9 (CONDITIONAL_JUMP)
// 005525ab: SUB EDX,0x2
// 005525ae: MOV ESI,EAX
// 005525b0: XOR EBX,EBX
// 005525b2: XOR EBP,EBP
// 005525b4: MOV dword ptr [ESP + 0x4],EDX
//   XREF to: Stack[-0x20] (WRITE)
// 005525b8: TEST EDX,EDX
// 005525ba: JLE 0x005525e2
//   XREF to: 005525e2 (CONDITIONAL_JUMP)
// 005525bc: PUSH ESI
//   Label: LAB_005525bc
// 005525bd: PUSH EDI
// 005525be: MOV EAX,dword ptr [ESP + 0x30]
//   XREF to: Stack[0x4] (READ)
// 005525c2: PUSH EAX
// 005525c3: CALL engine_prim.c_calculateTriangleWindingOrder_FUN_00552150
//   XREF to: 00552150 (UNCONDITIONAL_CALL)
// 005525c8: ADD ESP,0xc
// 005525cb: TEST EAX,EAX
// 005525cd: JZ 0x005526b3
//   XREF to: 005526b3 (CONDITIONAL_JUMP)
// 005525d3: MOV EDX,dword ptr [ESP + 0x4]
//   Label: LAB_005525d3
//   XREF to: Stack[-0x20] (READ)
// 005525d7: ADD EDI,0x30
// 005525da: INC EBX
// 005525db: ADD ESI,0x30
// 005525de: CMP EBX,EDX
// 005525e0: JL 0x005525bc
//   XREF to: 005525bc (CONDITIONAL_JUMP)
// 005525e2: CMP EBP,dword ptr [ESP + 0x4]
//   Label: LAB_005525e2
//   XREF to: Stack[-0x20] (READ)
// 005525e6: JZ 0x005526ab
//   XREF to: 005526ab (CONDITIONAL_JUMP)
// 005525ec: CMP dword ptr [0x02d03e94],0x0
//   Label: LAB_005525ec
//   XREF to: 02d03e94 (READ)
// 005525f3: JZ 0x00552602
//   XREF to: 00552602 (CONDITIONAL_JUMP)
// 005525f5: CMP dword ptr [0x00772a74],0x0
//   XREF to: 00772a74 (READ)
// 005525fc: JZ 0x005526d8
//   XREF to: 005526d8 (CONDITIONAL_JUMP)
// 00552602: MOV EBX,dword ptr [0x030e56b8]
//   Label: LAB_00552602
//   XREF to: 030e56b8 (READ)
// 00552608: INC EBX
// 00552609: MOV EAX,[0x02d052a4]
//   XREF to: 02d052a4 (READ)
// 0055260e: MOV dword ptr [0x030e56b8],EBX
//   XREF to: 030e56b8 (WRITE)
// 00552614: CMP EAX,0x6
// 00552617: JA 0x00552620
//   XREF to: 00552620 (CONDITIONAL_JUMP)
// 00552619: JMP dword ptr [EAX*0x4 + 0x5524e8]
//   Label: switchD
//   XREF to: 00552620 (COMPUTED_JUMP)
//   XREF to: 0055270e (COMPUTED_JUMP)
//   XREF to: 00552725 (COMPUTED_JUMP)
//   XREF to: 0055273c (COMPUTED_JUMP)
//   XREF to: 00552753 (COMPUTED_JUMP)
//   XREF to: 0055276a (COMPUTED_JUMP)
//   XREF to: 005524e8 (DATA)
// 00552620: MOV EAX,0x4b0
//   Label: caseD_4
// 00552625: XOR EDX,EDX
// 00552627: MOV ESI,dword ptr [ESP + 0x2c]
//   XREF to: Stack[0x8] (READ)
// 0055262b: MOV dword ptr [0x030e56b0],EDX
//   XREF to: 030e56b0 (WRITE)
// 00552631: MOV dword ptr [0x030e5228],EDX
//   XREF to: 030e5228 (WRITE)
// 00552637: MOV dword ptr [ESP + 0x8],EDX
//   XREF to: Stack[-0x1c] (WRITE)
// 0055263b: MOV [0x030e56ac],EAX
//   XREF to: 030e56ac (WRITE)
// 00552640: TEST ESI,ESI
// 00552642: JLE 0x00552690
//   XREF to: 00552690 (CONDITIONAL_JUMP)
// 00552644: MOV EAX,dword ptr [ESP + 0x8]
//   Label: LAB_00552644
//   XREF to: Stack[-0x1c] (READ)
// 00552648: MOV ECX,dword ptr [ESP + 0x2c]
//   XREF to: Stack[0x8] (READ)
// 0055264c: INC EAX
// 0055264d: CMP EAX,ECX
// 0055264f: JL 0x00552653
//   XREF to: 00552653 (CONDITIONAL_JUMP)
// 00552651: XOR EAX,EAX
// 00552653: IMUL EAX,EAX,0x30
//   Label: LAB_00552653
// 00552656: MOV EBP,dword ptr [ESP + 0x28]
//   XREF to: Stack[0x4] (READ)
// 0055265a: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x1c] (READ)
// 0055265e: ADD EBP,EAX
// 00552660: IMUL EAX,EBX,0x30
// 00552663: ADD EAX,dword ptr [ESP + 0x28]
//   XREF to: Stack[0x4] (READ)
// 00552667: MOV EDI,EBP
// 00552669: MOV ECX,dword ptr [EAX + 0x14]
// 0055266c: MOV ESI,dword ptr [EBP + 0x14]
// 0055266f: SAR ECX,0x10
// 00552672: SAR ESI,0x10
// 00552675: MOV EBX,EAX
// 00552677: CMP ECX,ESI
// 00552679: JNZ 0x00552781
//   XREF to: 00552781 (CONDITIONAL_JUMP)
// 0055267f: MOV ECX,dword ptr [ESP + 0x8]
//   Label: LAB_0055267f
//   XREF to: Stack[-0x1c] (READ)
// 00552683: INC ECX
// 00552684: MOV EBX,dword ptr [ESP + 0x2c]
//   XREF to: Stack[0x8] (READ)
// 00552688: MOV dword ptr [ESP + 0x8],ECX
//   XREF to: Stack[-0x1c] (WRITE)
// 0055268c: CMP ECX,EBX
// 0055268e: JL 0x00552644
//   XREF to: 00552644 (CONDITIONAL_JUMP)
// 00552690: PUSH 0x0
//   Label: LAB_00552690
// 00552692: MOV ESI,dword ptr [0x030e56ac]
//   XREF to: 030e56ac (READ)
// 00552698: PUSH ESI
// 00552699: CALL engine_prim.c_findEdgeInBuffer_FUN_00551f70
//   XREF to: 00551f70 (UNCONDITIONAL_CALL)
// 0055269e: ADD ESP,0x8
// 005526a1: MOV EBP,EAX
// 005526a3: TEST EAX,EAX
// 005526a5: JNZ 0x005528f8
//   XREF to: 005528f8 (CONDITIONAL_JUMP)
// 005526ab: ADD ESP,0x14
//   Label: LAB_005526ab
// 005526ae: POP EBP
// 005526af: POP EDI
// 005526b0: POP ESI
// 005526b1: POP EBX
// 005526b2: RET
// 005526b3: INC EBP
//   Label: LAB_005526b3
// 005526b4: JMP 0x005525d3
//   XREF to: 005525d3 (UNCONDITIONAL_JUMP)
// 005526b9: PUSH EAX
//   Label: LAB_005526b9
// 005526ba: PUSH EDI
// 005526bb: MOV ECX,dword ptr [ESP + 0x30]
//   XREF to: Stack[0x4] (READ)
// 005526bf: PUSH ECX
// 005526c0: CALL engine_prim.c_calculateTriangleWindingOrder_FUN_00552150
//   XREF to: 00552150 (UNCONDITIONAL_CALL)
// 005526c5: ADD ESP,0xc
// 005526c8: TEST EAX,EAX
// 005526ca: JNZ 0x005525ec
//   XREF to: 005525ec (CONDITIONAL_JUMP)
// 005526d0: ADD ESP,0x14
// 005526d3: POP EBP
// 005526d4: POP EDI
// 005526d5: POP ESI
// 005526d6: POP EBX
// 005526d7: RET
// 005526d8: MOV EAX,dword ptr [ESP + 0x2c]
//   Label: LAB_005526d8
//   XREF to: Stack[0x8] (READ)
// 005526dc: MOV EDI,dword ptr [0x030e56b8]
//   XREF to: 030e56b8 (READ)
// 005526e2: MOV EBP,dword ptr [0x02d052a0]
//   XREF to: 02d052a0 (READ)
// 005526e8: SUB EAX,0x2
// 005526eb: PUSH EBP
// 005526ec: ADD EDI,EAX
// 005526ee: MOV EAX,dword ptr [ESP + 0x30]
//   XREF to: Stack[0x8] (READ)
// 005526f2: PUSH EAX
// 005526f3: MOV EDX,dword ptr [ESP + 0x30]
//   XREF to: Stack[0x4] (READ)
// 005526f7: PUSH EDX
// 005526f8: MOV dword ptr [0x030e56b8],EDI
//   XREF to: 030e56b8 (WRITE)
// 005526fe: CALL wincore_windll.cpp_drawPolygon_FUN_005b75e0
//   XREF to: 005b75e0 (UNCONDITIONAL_CALL)
// 00552703: ADD ESP,0xc
// 00552706: ADD ESP,0x14
// 00552709: POP EBP
// 0055270a: POP EDI
// 0055270b: POP ESI
// 0055270c: POP EBX
// 0055270d: RET
// 0055270e: MOV EDI,dword ptr [ESP + 0x2c]
//   Label: caseD_1
//   XREF to: Stack[0x8] (READ)
// 00552712: PUSH EDI
// 00552713: MOV EBP,dword ptr [ESP + 0x2c]
//   XREF to: Stack[0x4] (READ)
// 00552717: PUSH EBP
// 00552718: CALL engine_prim.c_prepareDepthBuffer_FUN_00551fb0
//   XREF to: 00551fb0 (UNCONDITIONAL_CALL)
// 0055271d: ADD ESP,0x8
// 00552720: JMP 0x00552620
//   XREF to: 00552620 (UNCONDITIONAL_JUMP)
// 00552725: MOV EBX,dword ptr [ESP + 0x2c]
//   Label: caseD_2
//   XREF to: Stack[0x8] (READ)
// 00552729: PUSH EBX
// 0055272a: MOV ESI,dword ptr [ESP + 0x2c]
//   XREF to: Stack[0x4] (READ)
// 0055272e: PUSH ESI
// 0055272f: CALL engine_prim.c_normalizeTextureCoords_FUN_00552020
//   XREF to: 00552020 (UNCONDITIONAL_CALL)
// 00552734: ADD ESP,0x8
// 00552737: JMP 0x00552620
//   XREF to: 00552620 (UNCONDITIONAL_JUMP)
// 0055273c: MOV EDX,dword ptr [ESP + 0x2c]
//   Label: caseD_3
//   XREF to: Stack[0x8] (READ)
// 00552740: PUSH EDX
// 00552741: MOV ECX,dword ptr [ESP + 0x2c]
//   XREF to: Stack[0x4] (READ)
// 00552745: PUSH ECX
// 00552746: CALL engine_prim.c_adjustNearPlaneTextureCoords_FUN_005520a0
//   XREF to: 005520a0 (UNCONDITIONAL_CALL)
// 0055274b: ADD ESP,0x8
// 0055274e: JMP 0x00552620
//   XREF to: 00552620 (UNCONDITIONAL_JUMP)
// 00552753: MOV EBP,dword ptr [ESP + 0x2c]
//   Label: caseD_5
//   XREF to: Stack[0x8] (READ)
// 00552757: PUSH EBP
// 00552758: MOV EAX,dword ptr [ESP + 0x2c]
//   XREF to: Stack[0x4] (READ)
// 0055275c: PUSH EAX
// 0055275d: CALL engine_prim.c_normalizeTextureCoords_FUN_00552020
//   XREF to: 00552020 (UNCONDITIONAL_CALL)
// 00552762: ADD ESP,0x8
// 00552765: JMP 0x00552620
//   XREF to: 00552620 (UNCONDITIONAL_JUMP)
// 0055276a: MOV ESI,dword ptr [ESP + 0x2c]
//   Label: caseD_6
//   XREF to: Stack[0x8] (READ)
// 0055276e: PUSH ESI
// 0055276f: MOV EDI,dword ptr [ESP + 0x2c]
//   XREF to: Stack[0x4] (READ)
// 00552773: PUSH EDI
// 00552774: CALL engine_prim.c_replaceWWithDepth_FUN_00552110
//   XREF to: 00552110 (UNCONDITIONAL_CALL)
// 00552779: ADD ESP,0x8
// 0055277c: JMP 0x00552620
//   XREF to: 00552620 (UNCONDITIONAL_JUMP)
// 00552781: MOV EDX,dword ptr [EAX + 0x14]
//   Label: LAB_00552781
// 00552784: CMP EDX,dword ptr [EBP + 0x14]
// 00552787: JLE 0x00552793
//   XREF to: 00552793 (CONDITIONAL_JUMP)
// 00552789: MOV EDI,EAX
// 0055278b: MOV EBX,EBP
// 0055278d: MOV EAX,ECX
// 0055278f: MOV ECX,ESI
// 00552791: MOV ESI,EAX
// 00552793: IMUL EBP,dword ptr [0x030e5228],0x48
//   Label: LAB_00552793
//   XREF to: 030e5228 (READ)
// 0055279a: ADD EBP,0x30e522c
//   XREF to: 030e522c (DATA)
// 005527a0: MOV dword ptr [EBP],ECX
//   XREF to: 030e522c (WRITE)
// 005527a3: MOV EDX,dword ptr [0x030e56ac]
//   XREF to: 030e56ac (READ)
// 005527a9: MOV dword ptr [EBP + 0x4],ESI
//   XREF to: 030e5230 (WRITE)
// 005527ac: CMP ECX,EDX
// 005527ae: JGE 0x005527b6
//   XREF to: 005527b6 (CONDITIONAL_JUMP)
// 005527b0: MOV dword ptr [0x030e56ac],ECX
//   XREF to: 030e56ac (WRITE)
// 005527b6: CMP ESI,dword ptr [0x030e56b0]
//   Label: LAB_005527b6
//   XREF to: 030e56b0 (READ)
// 005527bc: JLE 0x005527c4
//   XREF to: 005527c4 (CONDITIONAL_JUMP)
// 005527be: MOV dword ptr [0x030e56b0],ESI
//   XREF to: 030e56b0 (WRITE)
// 005527c4: MOV ESI,dword ptr [EBX + 0x14]
//   Label: LAB_005527c4
// 005527c7: MOV ECX,dword ptr [EDI + 0x14]
// 005527ca: SUB ECX,ESI
// 005527cc: CMP ECX,0x10000
// 005527d2: JNC 0x005528e8
//   XREF to: 005528e8 (CONDITIONAL_JUMP)
// 005527d8: XOR ECX,ECX
// 005527da: MOV EAX,dword ptr [EDI + 0x10]
//   Label: LAB_005527da
// 005527dd: MOV EDX,dword ptr [EBX + 0x10]
// 005527e0: MOV ESI,dword ptr [EBX + 0x14]
// 005527e3: SUB EAX,EDX
// 005527e5: AND ESI,0xffff
// 005527eb: MOV EDX,EAX
// 005527ed: MOV EAX,ECX
// 005527ef: XOR SI,0xffff
// 005527f3: IMUL EDX
// 005527f5: SHRD EAX,EDX,0x10
// 005527f9: MOV EDX,EAX
// 005527fb: MOV dword ptr [EBP + 0xc],EAX
//   XREF to: 030e5238 (WRITE)
// 005527fe: MOV EAX,ESI
// 00552800: IMUL EDX
// 00552802: SHRD EAX,EDX,0x10
// 00552806: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x24] (DATA)
// 00552809: MOV EDX,dword ptr [ESP]
//   XREF to: Stack[-0x24] (DATA)
// 0055280c: MOV EAX,dword ptr [EBX + 0x10]
// 0055280f: ADD EAX,EDX
// 00552811: MOV dword ptr [EBP + 0x8],EAX
//   XREF to: 030e5234 (WRITE)
// 00552814: MOV EAX,dword ptr [EDI + 0x18]
// 00552817: MOV EDX,dword ptr [EBX + 0x18]
// 0055281a: SUB EAX,EDX
// 0055281c: MOV EDX,EAX
// 0055281e: MOV EAX,ECX
// 00552820: IMUL EDX
// 00552822: SHRD EAX,EDX,0x10
// 00552826: MOV EDX,EAX
// 00552828: MOV dword ptr [EBP + 0x1c],EAX
//   XREF to: 030e5248 (WRITE)
// 0055282b: MOV EAX,ESI
// 0055282d: IMUL EDX
// 0055282f: SHRD EAX,EDX,0x10
// 00552833: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x24] (DATA)
// 00552836: MOV EDX,dword ptr [ESP]
//   XREF to: Stack[-0x24] (DATA)
// 00552839: MOV EAX,dword ptr [EBX + 0x18]
// 0055283c: ADD EAX,EDX
// 0055283e: MOV dword ptr [EBP + 0x18],EAX
//   XREF to: 030e5244 (WRITE)
// 00552841: MOV EAX,dword ptr [EDI + 0x1c]
// 00552844: MOV EDX,dword ptr [EBX + 0x1c]
// 00552847: SUB EAX,EDX
// 00552849: MOV EDX,EAX
// 0055284b: MOV EAX,ECX
// 0055284d: IMUL EDX
// 0055284f: SHRD EAX,EDX,0x10
// 00552853: MOV EDX,EAX
// 00552855: MOV dword ptr [EBP + 0x24],EAX
//   XREF to: 030e5250 (WRITE)
// 00552858: MOV EAX,ESI
// 0055285a: IMUL EDX
// 0055285c: SHRD EAX,EDX,0x10
// 00552860: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x24] (DATA)
// 00552863: MOV EDX,dword ptr [ESP]
//   XREF to: Stack[-0x24] (DATA)
// 00552866: MOV EAX,dword ptr [EBX + 0x1c]
// 00552869: ADD EAX,EDX
// 0055286b: MOV dword ptr [EBP + 0x20],EAX
//   XREF to: 030e524c (WRITE)
// 0055286e: MOV EAX,dword ptr [EDI + 0x20]
// 00552871: MOV EDX,dword ptr [EBX + 0x20]
// 00552874: SUB EAX,EDX
// 00552876: MOV EDX,EAX
// 00552878: MOV EAX,ECX
// 0055287a: IMUL EDX
// 0055287c: SHRD EAX,EDX,0x10
// 00552880: MOV EDX,EAX
// 00552882: MOV dword ptr [EBP + 0x14],EAX
//   XREF to: 030e5240 (WRITE)
// 00552885: MOV EAX,ESI
// 00552887: IMUL EDX
// 00552889: SHRD EAX,EDX,0x10
// 0055288d: MOV EDX,dword ptr [EBX + 0x20]
// 00552890: ADD EDX,EAX
// 00552892: MOV dword ptr [EBP + 0x10],EDX
//   XREF to: 030e523c (WRITE)
// 00552895: MOV EDX,dword ptr [EDI + 0x2c]
// 00552898: SUB EDX,dword ptr [EBX + 0x2c]
// 0055289b: MOV EAX,ECX
// 0055289d: IMUL EDX
// 0055289f: SHRD EAX,EDX,0x10
// 005528a3: MOV EDX,EAX
// 005528a5: MOV dword ptr [EBP + 0x34],EAX
//   XREF to: 030e5260 (WRITE)
// 005528a8: MOV EAX,ESI
// 005528aa: IMUL EDX
// 005528ac: SHRD EAX,EDX,0x10
// 005528b0: MOV EDX,dword ptr [EBX + 0x2c]
// 005528b3: ADD EDX,EAX
// 005528b5: MOV dword ptr [EBP + 0x30],EDX
//   XREF to: 030e525c (WRITE)
// 005528b8: MOV EDX,dword ptr [EDI + 0x8]
// 005528bb: MOV EDI,dword ptr [EBX + 0x8]
// 005528be: MOV EAX,ECX
// 005528c0: SUB EDX,EDI
// 005528c2: IMUL EDX
// 005528c4: SHRD EAX,EDX,0x10
// 005528c8: MOV EDX,EAX
// 005528ca: MOV dword ptr [EBP + 0x2c],EAX
//   XREF to: 030e5258 (WRITE)
// 005528cd: MOV EAX,ESI
// 005528cf: IMUL EDX
// 005528d1: SHRD EAX,EDX,0x10
// 005528d5: MOV EDX,dword ptr [EBX + 0x8]
// 005528d8: ADD EDX,EAX
// 005528da: MOV dword ptr [EBP + 0x28],EDX
//   XREF to: 030e5254 (WRITE)
// 005528dd: INC dword ptr [0x030e5228]
//   XREF to: 030e5228 (READ_WRITE)
// 005528e3: JMP 0x0055267f
//   XREF to: 0055267f (UNCONDITIONAL_JUMP)
// 005528e8: MOV EAX,0xffffffff
//   Label: LAB_005528e8
// 005528ed: XOR EDX,EDX
// 005528ef: DIV ECX
// 005528f1: MOV ECX,EAX
// 005528f3: JMP 0x005527da
//   XREF to: 005527da (UNCONDITIONAL_JUMP)
// 005528f8: PUSH EAX
//   Label: LAB_005528f8
// 005528f9: MOV EDI,dword ptr [0x030e56ac]
//   XREF to: 030e56ac (READ)
// 005528ff: PUSH EDI
// 00552900: CALL engine_prim.c_findEdgeInBuffer_FUN_00551f70
//   XREF to: 00551f70 (UNCONDITIONAL_CALL)
// 00552905: ADD ESP,0x8
// 00552908: MOV dword ptr [ESP + 0x10],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 0055290c: TEST EAX,EAX
// 0055290e: JZ 0x005526ab
//   XREF to: 005526ab (CONDITIONAL_JUMP)
// 00552914: MOV EAX,[0x030e56ac]
//   XREF to: 030e56ac (READ)
// 00552919: MOV EDX,dword ptr [0x00680cf4]
//   XREF to: 00680cf4 (READ)
// 0055291f: MOV dword ptr [ESP + 0xc],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 00552923: CMP EAX,EDX
// 00552925: JGE 0x005526ab
//   Label: LAB_00552925
//   XREF to: 005526ab (CONDITIONAL_JUMP)
// 0055292b: MOV EAX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x18] (READ)
// 0055292f: CMP EAX,dword ptr [EBP + 0x4]
// 00552932: JGE 0x00552a0d
//   XREF to: 00552a0d (CONDITIONAL_JUMP)
// 00552938: MOV EDX,dword ptr [ESP + 0x10]
//   Label: LAB_00552938
//   XREF to: Stack[-0x14] (READ)
// 0055293c: MOV EAX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x18] (READ)
// 00552940: CMP EAX,dword ptr [EDX + 0x4]
// 00552943: JL 0x00552961
//   XREF to: 00552961 (CONDITIONAL_JUMP)
// 00552945: PUSH EBP
// 00552946: PUSH EAX
// 00552947: MOV dword ptr [EDX],0xffffffff
// 0055294d: CALL engine_prim.c_findEdgeInBuffer_FUN_00551f70
//   XREF to: 00551f70 (UNCONDITIONAL_CALL)
// 00552952: ADD ESP,0x8
// 00552955: MOV dword ptr [ESP + 0x10],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 00552959: TEST EAX,EAX
// 0055295b: JZ 0x005526ab
//   XREF to: 005526ab (CONDITIONAL_JUMP)
// 00552961: MOV EDI,dword ptr [ESP + 0x10]
//   Label: LAB_00552961
//   XREF to: Stack[-0x14] (READ)
// 00552965: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x18] (READ)
// 00552969: MOV ESI,EBP
// 0055296b: CALL wincore_windll.cpp_renderScanline_FUN_005b5710
//   XREF to: 005b5710 (UNCONDITIONAL_CALL)
// 00552970: MOV EAX,dword ptr [EBP + 0xc]
// 00552973: ADD dword ptr [EBP + 0x8],EAX
// 00552976: MOV ECX,dword ptr [EBP + 0x18]
// 00552979: MOV EBX,dword ptr [EBP + 0x20]
// 0055297c: MOV ESI,dword ptr [EBP + 0x10]
// 0055297f: MOV EDI,dword ptr [EBP + 0x28]
// 00552982: MOV EAX,dword ptr [EBP + 0x1c]
// 00552985: MOV EDX,dword ptr [EBP + 0x30]
// 00552988: ADD ECX,EAX
// 0055298a: MOV EAX,dword ptr [EBP + 0x24]
// 0055298d: MOV dword ptr [EBP + 0x18],ECX
// 00552990: ADD EBX,EAX
// 00552992: MOV EAX,dword ptr [EBP + 0x14]
// 00552995: MOV dword ptr [EBP + 0x20],EBX
// 00552998: ADD ESI,EAX
// 0055299a: MOV EAX,dword ptr [EBP + 0x2c]
// 0055299d: MOV dword ptr [EBP + 0x10],ESI
// 005529a0: ADD EDI,EAX
// 005529a2: MOV EAX,dword ptr [EBP + 0x34]
// 005529a5: MOV dword ptr [EBP + 0x28],EDI
// 005529a8: ADD EDX,EAX
// 005529aa: MOV EAX,dword ptr [ESP + 0x10]
// 005529ae: MOV dword ptr [EBP + 0x30],EDX
// 005529b1: MOV EDX,dword ptr [ESP + 0x10]
// 005529b5: MOV EAX,dword ptr [EAX + 0xc]
// 005529b8: MOV ECX,dword ptr [EDX + 0x8]
// 005529bb: MOV EBX,dword ptr [EDX + 0x18]
// 005529be: ADD ECX,EAX
// 005529c0: MOV EAX,dword ptr [EDX + 0x1c]
// 005529c3: MOV dword ptr [EDX + 0x8],ECX
// 005529c6: ADD EBX,EAX
// 005529c8: MOV dword ptr [EDX + 0x18],EBX
// 005529cb: MOV ESI,dword ptr [EDX + 0x20]
// 005529ce: MOV EDI,dword ptr [EDX + 0x10]
// 005529d1: MOV ECX,dword ptr [EDX + 0x28]
// 005529d4: MOV EAX,dword ptr [EDX + 0x24]
// 005529d7: MOV EBX,dword ptr [EDX + 0x30]
// 005529da: ADD ESI,EAX
// 005529dc: MOV EAX,dword ptr [EDX + 0x14]
// 005529df: MOV dword ptr [EDX + 0x20],ESI
// 005529e2: MOV ESI,dword ptr [ESP + 0xc]
// 005529e6: ADD EDI,EAX
// 005529e8: INC ESI
// 005529e9: MOV EAX,dword ptr [EDX + 0x2c]
// 005529ec: MOV dword ptr [EDX + 0x10],EDI
// 005529ef: MOV EDI,dword ptr [0x00680cf4]
//   XREF to: 00680cf4 (READ)
// 005529f5: ADD ECX,EAX
// 005529f7: MOV EAX,dword ptr [EDX + 0x34]
// 005529fa: MOV dword ptr [EDX + 0x28],ECX
// 005529fd: ADD EBX,EAX
// 005529ff: MOV dword ptr [ESP + 0xc],ESI
// 00552a03: MOV dword ptr [EDX + 0x30],EBX
// 00552a06: CMP ESI,EDI
// 00552a08: JMP 0x00552925
//   XREF to: 00552925 (UNCONDITIONAL_JUMP)
// 00552a0d: MOV ECX,dword ptr [ESP + 0x10]
//   Label: LAB_00552a0d
//   XREF to: Stack[-0x14] (READ)
// 00552a11: PUSH ECX
// 00552a12: PUSH EAX
// 00552a13: MOV dword ptr [EBP],0xffffffff
// 00552a1a: CALL engine_prim.c_findEdgeInBuffer_FUN_00551f70
//   XREF to: 00551f70 (UNCONDITIONAL_CALL)
// 00552a1f: ADD ESP,0x8
// 00552a22: MOV EBP,EAX
// 00552a24: TEST EAX,EAX
// 00552a26: JZ 0x005526ab
//   XREF to: 005526ab (CONDITIONAL_JUMP)
// 00552a2c: JMP 0x00552938
//   XREF to: 00552938 (UNCONDITIONAL_JUMP)
