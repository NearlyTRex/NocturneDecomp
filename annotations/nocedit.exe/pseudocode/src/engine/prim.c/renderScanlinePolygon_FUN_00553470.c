// Name: engine_prim.c_renderScanlinePolygon_FUN_00553470
// Address: 00553470
// Address Range: [[00553470, 00553ae9]]
// Convention: __cdecl
// Signature: void engine_prim.c_renderScanlinePolygon_FUN_00553470(SRenderVertex * vertices, int vertex_count)
// Cross-references:
//   engine_clipper.c_clipPolygonToViewport_FUN_00438420 (00438420) at 004385d5 [UNCONDITIONAL_CALL]
// Globals:
//   void* switchdataD_00553448 = 00553580
//   uint g_VertexProcessingEnabled = 0x1
//   int g_TexturesDisabled
//   int g_CullingMode
//   int g_ViewportCenterXFixed
//   int g_ViewportCenterYFixed
//   int g_ViewportRightFixed
//   int g_ViewportBottomFixed
//   int g_UseExternalRenderer
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
//   wincore_windll.cpp_drawPolygon_FUN_005b75e0
//   wincore_windll.cpp_renderScanline_FUN_005b5710

#include "nocturne.h"

void __cdecl
engine_prim_c_renderScanlinePolygon_FUN_00553470(SRenderVertex *vertices,int vertex_count)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  SSoftwareEdge *pSVar5;
  SSoftwareEdge *pSVar6;
  int iVar7;
  SRenderVertex *pSVar8;
  int iVar9;
  uint uVar10;
  SRenderVertex *v2;
  int iVar11;
  void *pvVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  int in_stack_0000000c;
  void *in_stack_ffffffe0;
  void *in_stack_ffffffe4;
  
  if ((g_VertexProcessingEnabled != 0) && (iVar13 = 0, pSVar8 = vertices, 0 < vertex_count)) {
    do {
      if ((int)((pSVar8->projected_vertex).screen_x & -0x80000000) != 0) {
        (pSVar8->projected_vertex).inv_z =
             (int)(0x7fffffff / (longlong)(pSVar8->projected_vertex).transformed_z);
        (pSVar8->projected_vertex).screen_x =
             (int)(((longlong)(pSVar8->projected_vertex).transformed_x *
                   (longlong)g_ViewportCenterXFixed) /
                  (longlong)(pSVar8->projected_vertex).transformed_z) + g_ViewportRightFixed;
        (pSVar8->projected_vertex).screen_y =
             (int)(((longlong)(pSVar8->projected_vertex).transformed_y *
                   (longlong)g_ViewportCenterYFixed) /
                  (longlong)(pSVar8->projected_vertex).transformed_z) + g_ViewportBottomFixed;
      }
      iVar13 = iVar13 + 1;
      pSVar8 = pSVar8 + 1;
    } while (iVar13 < vertex_count);
  }
  if (g_CullingMode != 0) {
    pSVar8 = vertices + 1;
    v2 = vertices + 2;
    if (vertex_count < 4) {
      iVar13 = engine_prim_c_calculateTriangleWindingOrder_FUN_00552150(vertices,pSVar8,v2);
      if (iVar13 == 0) {
        return;
      }
    }
    else {
      in_stack_ffffffe0 = (void *)(vertex_count - 2);
      iVar13 = 0;
      pvVar12 = (void *)0x0;
      if (0 < (int)in_stack_ffffffe0) {
        do {
          iVar2 = engine_prim_c_calculateTriangleWindingOrder_FUN_00552150
                            ((SRenderVertex *)vertex_count,pSVar8,v2);
          if (iVar2 == 0) {
            pvVar12 = (void *)((int)pvVar12 + 1);
          }
          pSVar8 = pSVar8 + 1;
          iVar13 = iVar13 + 1;
          v2 = v2 + 1;
        } while (iVar13 < (int)in_stack_ffffffe4);
      }
      if (pvVar12 == in_stack_ffffffe4) {
        return;
      }
    }
  }
  if ((g_UseExternalRenderer != 0) && (g_TexturesDisabled == 0)) {
    wincore_windll_cpp_drawPolygon_FUN_005b75e0
              ((SRenderVertex *)vertex_count,in_stack_0000000c,g_RenderStateFlags);
    g_RenderedTriangleCount = g_RenderedTriangleCount + in_stack_0000000c + -2;
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
  g_MaxScanline = 0;
  g_ActiveEdgeCount = 0;
  iVar13 = 0;
  g_MinScanline = 0x4b0;
  if (0 < in_stack_0000000c) {
    do {
      iVar2 = g_ActiveEdgeCount;
      iVar3 = iVar13 + 1;
      if (in_stack_0000000c <= iVar3) {
        iVar3 = 0;
      }
      iVar9 = vertex_count + iVar3 * 0x30;
      iVar14 = iVar13 * 0x30 + vertex_count;
      iVar3 = *(int *)(iVar14 + 0x14) >> 0x10;
      iVar4 = *(int *)(iVar9 + 0x14) >> 0x10;
      if (iVar3 != iVar4) {
        iVar7 = iVar4;
        iVar11 = iVar14;
        if (*(int *)(iVar9 + 0x14) < *(int *)(iVar14 + 0x14)) {
          iVar7 = iVar3;
          iVar3 = iVar4;
          iVar11 = iVar9;
          iVar9 = iVar14;
        }
        g_SoftwareEdgeTable[g_ActiveEdgeCount].y_min = iVar3;
        iVar4 = g_MinScanline;
        g_SoftwareEdgeTable[iVar2].y_max = iVar7;
        if (iVar3 < iVar4) {
          g_MinScanline = iVar3;
        }
        if (g_MaxScanline < iVar7) {
          g_MaxScanline = iVar7;
        }
        uVar10 = *(int *)(iVar9 + 0x14) - *(int *)(iVar11 + 0x14);
        if (uVar10 < 0x10000) {
          iVar3 = 0;
        }
        else {
          iVar3 = (int)(0xffffffff / (ulonglong)uVar10);
        }
        uVar15 = (uint)(ushort)((ushort)*(undefined4 *)(iVar11 + 0x14) ^ 0xffff);
        lVar1 = (longlong)iVar3 * (longlong)(*(int *)(iVar9 + 0x10) - *(int *)(iVar11 + 0x10));
        uVar10 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
        g_SoftwareEdgeTable[iVar2].x_gradient = uVar10;
        lVar1 = (longlong)(int)uVar15 * (longlong)(int)uVar10;
        g_SoftwareEdgeTable[iVar2].x_current =
             *(int *)(iVar11 + 0x10) +
             ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
        lVar1 = (longlong)iVar3 * (longlong)(*(int *)(iVar9 + 0x18) - *(int *)(iVar11 + 0x18));
        uVar10 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
        g_SoftwareEdgeTable[iVar2].u_gradient = uVar10;
        lVar1 = (longlong)(int)uVar15 * (longlong)(int)uVar10;
        g_SoftwareEdgeTable[iVar2].u_current =
             *(int *)(iVar11 + 0x18) +
             ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
        lVar1 = (longlong)iVar3 * (longlong)(*(int *)(iVar9 + 0x1c) - *(int *)(iVar11 + 0x1c));
        uVar10 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
        g_SoftwareEdgeTable[iVar2].v_gradient = uVar10;
        lVar1 = (longlong)(int)uVar15 * (longlong)(int)uVar10;
        g_SoftwareEdgeTable[iVar2].v_current =
             *(int *)(iVar11 + 0x1c) +
             ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
        lVar1 = (longlong)iVar3 * (longlong)(*(int *)(iVar9 + 0x20) - *(int *)(iVar11 + 0x20));
        uVar10 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
        g_SoftwareEdgeTable[iVar2].z_gradient = uVar10;
        lVar1 = (longlong)(int)uVar15 * (longlong)(int)uVar10;
        g_SoftwareEdgeTable[iVar2].z_current =
             *(int *)(iVar11 + 0x20) +
             ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
        lVar1 = (longlong)iVar3 * (longlong)(*(int *)(iVar9 + 0x2c) - *(int *)(iVar11 + 0x2c));
        uVar10 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
        g_SoftwareEdgeTable[iVar2].fog_gradient = uVar10;
        lVar1 = (longlong)(int)uVar15 * (longlong)(int)uVar10;
        g_SoftwareEdgeTable[iVar2].fog_current =
             *(int *)(iVar11 + 0x2c) +
             ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
        lVar1 = (longlong)iVar3 * (longlong)(*(int *)(iVar9 + 8) - *(int *)(iVar11 + 8));
        uVar10 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
        g_SoftwareEdgeTable[iVar2].w_gradient = uVar10;
        lVar1 = (longlong)(int)uVar15 * (longlong)(int)uVar10;
        g_SoftwareEdgeTable[iVar2].w_current =
             *(int *)(iVar11 + 8) + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
        lVar1 = (longlong)iVar3 * (longlong)(*(int *)(iVar9 + 0x24) - *(int *)(iVar11 + 0x24));
        uVar10 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
        g_SoftwareEdgeTable[iVar2].r_gradient = uVar10;
        lVar1 = (longlong)(int)uVar15 * (longlong)(int)uVar10;
        in_stack_ffffffe0 = (void *)((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
        g_SoftwareEdgeTable[iVar2].r_current = *(int *)(iVar11 + 0x24) + (int)in_stack_ffffffe0;
        lVar1 = (longlong)iVar3 * (longlong)(*(int *)(iVar9 + 0x28) - *(int *)(iVar11 + 0x28));
        uVar10 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
        g_SoftwareEdgeTable[iVar2].g_gradient = uVar10;
        lVar1 = (longlong)(int)uVar15 * (longlong)(int)uVar10;
        g_SoftwareEdgeTable[iVar2].g_current =
             *(int *)(iVar11 + 0x28) +
             ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
        g_ActiveEdgeCount = g_ActiveEdgeCount + 1;
      }
      iVar13 = iVar13 + 1;
    } while (iVar13 < in_stack_0000000c);
  }
  iVar2 = g_MinScanline;
  pSVar5 = g_SoftwareEdgeTable;
  iVar3 = 0;
  if (0 < g_ActiveEdgeCount) {
    do {
      if ((g_MinScanline == pSVar5->y_min) && (pSVar5 != (SSoftwareEdge *)0x0)) goto LAB_0055361f;
      iVar3 = iVar3 + 1;
      pSVar5 = pSVar5 + 1;
    } while (iVar3 < g_ActiveEdgeCount);
  }
  pSVar5 = (SSoftwareEdge *)0x0;
LAB_0055361f:
  if (pSVar5 != (SSoftwareEdge *)0x0) {
    iVar3 = 0;
    pSVar6 = g_SoftwareEdgeTable;
    if (0 < g_ActiveEdgeCount) {
      do {
        if ((g_MinScanline == pSVar6->y_min) && (pSVar6 != pSVar5)) goto LAB_0055365c;
        iVar3 = iVar3 + 1;
        pSVar6 = pSVar6 + 1;
      } while (iVar3 < g_ActiveEdgeCount);
    }
    pSVar6 = (SSoftwareEdge *)0x0;
LAB_0055365c:
    if (pSVar6 != (SSoftwareEdge *)0x0) {
      do {
        iVar3 = g_ActiveEdgeCount;
        if (pSVar5->y_max <= iVar2) {
          pSVar5->y_min = -1;
          iVar9 = 0;
          pSVar5 = g_SoftwareEdgeTable;
          if (0 < iVar3) {
            do {
              if ((iVar2 == pSVar5->y_min) && (pSVar5 != pSVar6)) goto LAB_005536b2;
              iVar9 = iVar9 + 1;
              pSVar5 = pSVar5 + 1;
            } while (iVar9 < g_ActiveEdgeCount);
          }
          pSVar5 = (SSoftwareEdge *)0x0;
LAB_005536b2:
          if (pSVar5 == (SSoftwareEdge *)0x0) {
            return;
          }
        }
        iVar3 = g_ActiveEdgeCount;
        if (pSVar6->y_max <= iVar2) {
          pSVar6->y_min = -1;
          pSVar6 = g_SoftwareEdgeTable;
          iVar9 = 0;
          if (iVar3 < 1) {
            return;
          }
          while ((iVar2 != pSVar6->y_min || (pSVar6 == pSVar5))) {
            iVar9 = iVar9 + 1;
            pSVar6 = pSVar6 + 1;
            if (g_ActiveEdgeCount <= iVar9) {
              return;
            }
          }
          if (pSVar6 == (SSoftwareEdge *)0x0) {
            return;
          }
        }
        wincore_windll_cpp_renderScanline_FUN_005b5710(in_stack_ffffffe0,in_stack_ffffffe4,iVar13);
        pSVar5->x_current = pSVar5->x_current + pSVar5->x_gradient;
        pSVar5->u_current = pSVar5->u_current + pSVar5->u_gradient;
        pSVar5->v_current = pSVar5->v_current + pSVar5->v_gradient;
        pSVar5->w_current = pSVar5->w_current + pSVar5->w_gradient;
        pSVar5->z_current = pSVar5->z_current + pSVar5->z_gradient;
        pSVar5->r_current = pSVar5->r_current + pSVar5->r_gradient;
        pSVar5->g_current = pSVar5->g_current + pSVar5->g_gradient;
        pSVar5->fog_current = pSVar5->fog_current + pSVar5->fog_gradient;
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
      } while( true );
    }
  }
  return;
}


// Assembly code:
// 00553470: PUSH EBX
//   Label: engine_prim.c_renderScanlinePolygon_FUN_00553470
// 00553471: PUSH ESI
// 00553472: PUSH EDI
// 00553473: PUSH EBP
// 00553474: SUB ESP,0x14
// 00553477: CMP dword ptr [0x006793bc],0x0
//   XREF to: 006793bc (READ)
// 0055347e: JZ 0x005534e7
//   XREF to: 005534e7 (CONDITIONAL_JUMP)
// 00553480: MOV EBX,dword ptr [ESP + 0x2c]
//   XREF to: Stack[0x8] (READ)
// 00553484: MOV ECX,dword ptr [ESP + 0x28]
//   XREF to: Stack[0x4] (READ)
// 00553488: XOR ESI,ESI
// 0055348a: TEST EBX,EBX
// 0055348c: JLE 0x005534e7
//   XREF to: 005534e7 (CONDITIONAL_JUMP)
// 0055348e: MOV EDI,dword ptr [ESP + 0x2c]
//   XREF to: Stack[0x8] (READ)
// 00553492: TEST byte ptr [ECX + 0x13],0x80
//   Label: LAB_00553492
// 00553496: JZ 0x005534df
//   XREF to: 005534df (CONDITIONAL_JUMP)
// 00553498: MOV EAX,0x7fffffff
// 0055349d: MOV EDX,EAX
// 0055349f: MOV EBX,dword ptr [ECX + 0x8]
// 005534a2: SAR EDX,0x1f
// 005534a5: IDIV EBX
// 005534a7: MOV dword ptr [ECX + 0xc],EAX
// 005534aa: MOV EDX,dword ptr [0x02d02548]
//   XREF to: 02d02548 (READ)
// 005534b0: MOV EBX,dword ptr [ECX + 0x8]
// 005534b3: MOV EAX,dword ptr [ECX]
// 005534b5: IMUL EDX
// 005534b7: IDIV EBX
// 005534b9: MOV EDX,dword ptr [0x02d02550]
//   XREF to: 02d02550 (READ)
// 005534bf: ADD EAX,EDX
// 005534c1: MOV EBX,dword ptr [ECX + 0x8]
// 005534c4: MOV dword ptr [ECX + 0x10],EAX
// 005534c7: MOV EDX,dword ptr [0x02d0254c]
//   XREF to: 02d0254c (READ)
// 005534cd: MOV EAX,dword ptr [ECX + 0x4]
// 005534d0: IMUL EDX
// 005534d2: IDIV EBX
// 005534d4: MOV EDX,dword ptr [0x02d02554]
//   XREF to: 02d02554 (READ)
// 005534da: ADD EAX,EDX
// 005534dc: MOV dword ptr [ECX + 0x14],EAX
// 005534df: INC ESI
//   Label: LAB_005534df
// 005534e0: ADD ECX,0x30
// 005534e3: CMP ESI,EDI
// 005534e5: JL 0x00553492
//   XREF to: 00553492 (CONDITIONAL_JUMP)
// 005534e7: CMP dword ptr [0x00772a7c],0x0
//   Label: LAB_005534e7
//   XREF to: 00772a7c (READ)
// 005534ee: JZ 0x0055354c
//   XREF to: 0055354c (CONDITIONAL_JUMP)
// 005534f0: MOV EAX,dword ptr [ESP + 0x28]
//   XREF to: Stack[0x4] (READ)
// 005534f4: MOV EBX,dword ptr [ESP + 0x28]
//   XREF to: Stack[0x4] (READ)
// 005534f8: MOV EDX,dword ptr [ESP + 0x2c]
//   XREF to: Stack[0x8] (READ)
// 005534fc: ADD EAX,0x30
// 005534ff: ADD EBX,0x60
// 00553502: CMP EDX,0x3
// 00553505: JLE 0x00553718
//   XREF to: 00553718 (CONDITIONAL_JUMP)
// 0055350b: SUB EDX,0x2
// 0055350e: MOV EDI,EAX
// 00553510: XOR ESI,ESI
// 00553512: XOR EBP,EBP
// 00553514: MOV dword ptr [ESP + 0x4],EDX
//   XREF to: Stack[-0x20] (WRITE)
// 00553518: TEST EDX,EDX
// 0055351a: JLE 0x00553542
//   XREF to: 00553542 (CONDITIONAL_JUMP)
// 0055351c: PUSH EBX
//   Label: LAB_0055351c
// 0055351d: PUSH EDI
// 0055351e: MOV EAX,dword ptr [ESP + 0x30]
//   XREF to: Stack[0x4] (READ)
// 00553522: PUSH EAX
// 00553523: CALL engine_prim.c_calculateTriangleWindingOrder_FUN_00552150
//   XREF to: 00552150 (UNCONDITIONAL_CALL)
// 00553528: ADD ESP,0xc
// 0055352b: TEST EAX,EAX
// 0055352d: JZ 0x00553712
//   XREF to: 00553712 (CONDITIONAL_JUMP)
// 00553533: MOV EDX,dword ptr [ESP + 0x4]
//   Label: LAB_00553533
//   XREF to: Stack[-0x20] (READ)
// 00553537: ADD EDI,0x30
// 0055353a: INC ESI
// 0055353b: ADD EBX,0x30
// 0055353e: CMP ESI,EDX
// 00553540: JL 0x0055351c
//   XREF to: 0055351c (CONDITIONAL_JUMP)
// 00553542: CMP EBP,dword ptr [ESP + 0x4]
//   Label: LAB_00553542
//   XREF to: Stack[-0x20] (READ)
// 00553546: JZ 0x0055370a
//   XREF to: 0055370a (CONDITIONAL_JUMP)
// 0055354c: CMP dword ptr [0x02d03e94],0x0
//   Label: LAB_0055354c
//   XREF to: 02d03e94 (READ)
// 00553553: JZ 0x00553562
//   XREF to: 00553562 (CONDITIONAL_JUMP)
// 00553555: CMP dword ptr [0x00772a74],0x0
//   XREF to: 00772a74 (READ)
// 0055355c: JZ 0x00553737
//   XREF to: 00553737 (CONDITIONAL_JUMP)
// 00553562: MOV EBX,dword ptr [0x030e56b8]
//   Label: LAB_00553562
//   XREF to: 030e56b8 (READ)
// 00553568: INC EBX
// 00553569: MOV EAX,[0x02d052a4]
//   XREF to: 02d052a4 (READ)
// 0055356e: MOV dword ptr [0x030e56b8],EBX
//   XREF to: 030e56b8 (WRITE)
// 00553574: CMP EAX,0x6
// 00553577: JA 0x00553580
//   XREF to: 00553580 (CONDITIONAL_JUMP)
// 00553579: JMP dword ptr [EAX*0x4 + 0x553448]
//   Label: switchD
//   XREF to: 00553580 (COMPUTED_JUMP)
//   XREF to: 00553769 (COMPUTED_JUMP)
//   XREF to: 00553780 (COMPUTED_JUMP)
//   XREF to: 00553797 (COMPUTED_JUMP)
//   XREF to: 005537ae (COMPUTED_JUMP)
//   XREF to: 005537c5 (COMPUTED_JUMP)
//   XREF to: 00553448 (DATA)
// 00553580: MOV EAX,0x4b0
//   Label: caseD_4
// 00553585: XOR EDX,EDX
// 00553587: MOV ESI,dword ptr [ESP + 0x2c]
//   XREF to: Stack[0x8] (READ)
// 0055358b: MOV dword ptr [0x030e5b44],EDX
//   XREF to: 030e5b44 (WRITE)
// 00553591: MOV dword ptr [0x030e56bc],EDX
//   XREF to: 030e56bc (WRITE)
// 00553597: MOV dword ptr [ESP + 0x8],EDX
//   XREF to: Stack[-0x1c] (WRITE)
// 0055359b: MOV [0x030e5b40],EAX
//   XREF to: 030e5b40 (WRITE)
// 005535a0: TEST ESI,ESI
// 005535a2: JLE 0x005535ee
//   XREF to: 005535ee (CONDITIONAL_JUMP)
// 005535a4: MOV EAX,dword ptr [ESP + 0x8]
//   Label: LAB_005535a4
//   XREF to: Stack[-0x1c] (READ)
// 005535a8: MOV EDI,dword ptr [ESP + 0x2c]
//   XREF to: Stack[0x8] (READ)
// 005535ac: INC EAX
// 005535ad: CMP EAX,EDI
// 005535af: JL 0x005535b3
//   XREF to: 005535b3 (CONDITIONAL_JUMP)
// 005535b1: XOR EAX,EAX
// 005535b3: IMUL EAX,EAX,0x30
//   Label: LAB_005535b3
// 005535b6: IMUL ESI,dword ptr [ESP + 0x8],0x30
//   XREF to: Stack[-0x1c] (READ)
// 005535bb: MOV ECX,dword ptr [ESP + 0x28]
//   XREF to: Stack[0x4] (READ)
// 005535bf: ADD ECX,EAX
// 005535c1: ADD ESI,dword ptr [ESP + 0x28]
//   XREF to: Stack[0x4] (READ)
// 005535c5: MOV EDI,ECX
// 005535c7: MOV EDX,dword ptr [ESI + 0x14]
// 005535ca: MOV EAX,dword ptr [ECX + 0x14]
// 005535cd: SAR EDX,0x10
// 005535d0: SAR EAX,0x10
// 005535d3: MOV EBX,ESI
// 005535d5: CMP EDX,EAX
// 005535d7: JNZ 0x005537dc
//   XREF to: 005537dc (CONDITIONAL_JUMP)
// 005535dd: MOV ECX,dword ptr [ESP + 0x8]
//   Label: LAB_005535dd
//   XREF to: Stack[-0x1c] (READ)
// 005535e1: INC ECX
// 005535e2: MOV EBX,dword ptr [ESP + 0x2c]
//   XREF to: Stack[0x8] (READ)
// 005535e6: MOV dword ptr [ESP + 0x8],ECX
//   XREF to: Stack[-0x1c] (WRITE)
// 005535ea: CMP ECX,EBX
// 005535ec: JL 0x005535a4
//   XREF to: 005535a4 (CONDITIONAL_JUMP)
// 005535ee: MOV EAX,0x30e56c0
//   Label: LAB_005535ee
//   XREF to: 030e56c0 (PARAM)
// 005535f3: MOV ESI,dword ptr [0x030e56bc]
//   XREF to: 030e56bc (READ)
// 005535f9: MOV EBX,dword ptr [0x030e5b40]
//   XREF to: 030e5b40 (READ)
// 005535ff: XOR ECX,ECX
// 00553601: TEST ESI,ESI
// 00553603: JLE 0x005539ca
//   XREF to: 005539ca (CONDITIONAL_JUMP)
// 00553609: MOV EDX,dword ptr [0x030e56bc]
//   XREF to: 030e56bc (READ)
// 0055360f: CMP EBX,dword ptr [EAX]
//   Label: LAB_0055360f
//   XREF to: 030e56c0 (READ)
//   XREF to: 030e5708 (READ)
// 00553611: JNZ 0x005539be
//   XREF to: 005539be (CONDITIONAL_JUMP)
// 00553617: TEST EAX,EAX
// 00553619: JZ 0x005539be
//   XREF to: 005539be (CONDITIONAL_JUMP)
// 0055361f: MOV EBP,EAX
//   Label: LAB_0055361f
// 00553621: TEST EAX,EAX
// 00553623: JZ 0x0055370a
//   XREF to: 0055370a (CONDITIONAL_JUMP)
// 00553629: MOV EDI,dword ptr [0x030e56bc]
//   XREF to: 030e56bc (READ)
// 0055362f: MOV EBX,dword ptr [0x030e5b40]
//   XREF to: 030e5b40 (READ)
// 00553635: MOV ECX,EAX
//   XREF to: 030e56c0 (PARAM)
// 00553637: XOR EDX,EDX
// 00553639: MOV EAX,0x30e56c0
//   XREF to: 030e56c0 (DATA)
// 0055363e: TEST EDI,EDI
// 00553640: JLE 0x005539dd
//   XREF to: 005539dd (CONDITIONAL_JUMP)
// 00553646: MOV ESI,dword ptr [0x030e56bc]
//   XREF to: 030e56bc (READ)
// 0055364c: CMP EBX,dword ptr [EAX]
//   Label: LAB_0055364c
//   XREF to: 030e56c0 (READ)
//   XREF to: 030e5708 (READ)
// 0055364e: JNZ 0x005539d1
//   XREF to: 005539d1 (CONDITIONAL_JUMP)
// 00553654: CMP EAX,ECX
// 00553656: JZ 0x005539d1
//   XREF to: 005539d1 (CONDITIONAL_JUMP)
// 0055365c: MOV dword ptr [ESP + 0x10],EAX
//   Label: LAB_0055365c
//   XREF to: Stack[-0x14] (WRITE)
//   XREF to: 030e56c0 (DATA)
//   XREF to: 030e5708 (DATA)
// 00553660: TEST EAX,EAX
// 00553662: JZ 0x0055370a
//   XREF to: 0055370a (CONDITIONAL_JUMP)
// 00553668: MOV EAX,[0x030e5b40]
//   XREF to: 030e5b40 (READ)
// 0055366d: MOV dword ptr [ESP + 0xc],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 00553671: MOV EAX,dword ptr [ESP + 0xc]
//   Label: LAB_00553671
//   XREF to: Stack[-0x18] (READ)
// 00553675: CMP EAX,dword ptr [EBP + 0x4]
//   XREF to: 030e56c4 (READ)
// 00553678: JL 0x005536b8
//   XREF to: 005536b8 (CONDITIONAL_JUMP)
// 0055367a: MOV EBX,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x14] (READ)
// 0055367e: MOV ESI,dword ptr [0x030e56bc]
//   XREF to: 030e56bc (READ)
// 00553684: MOV ECX,EAX
// 00553686: MOV dword ptr [EBP],0xffffffff
//   XREF to: 030e56c0 (WRITE)
// 0055368d: XOR EDX,EDX
// 0055368f: MOV EAX,0x30e56c0
//   XREF to: 030e56c0 (DATA)
// 00553694: TEST ESI,ESI
// 00553696: JLE 0x005539f0
//   XREF to: 005539f0 (CONDITIONAL_JUMP)
// 0055369c: MOV EDI,dword ptr [0x030e56bc]
//   XREF to: 030e56bc (READ)
// 005536a2: CMP ECX,dword ptr [EAX]
//   Label: LAB_005536a2
//   XREF to: 030e56c0 (READ)
//   XREF to: 030e5708 (READ)
// 005536a4: JNZ 0x005539e4
//   XREF to: 005539e4 (CONDITIONAL_JUMP)
// 005536aa: CMP EAX,EBX
// 005536ac: JZ 0x005539e4
//   XREF to: 005539e4 (CONDITIONAL_JUMP)
// 005536b2: MOV EBP,EAX
//   Label: LAB_005536b2
// 005536b4: TEST EAX,EAX
// 005536b6: JZ 0x0055370a
//   XREF to: 0055370a (CONDITIONAL_JUMP)
// 005536b8: MOV EDX,dword ptr [ESP + 0x10]
//   Label: LAB_005536b8
//   XREF to: Stack[-0x14] (READ)
//   XREF to: 030e56c0 (PARAM)
// 005536bc: MOV EAX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x18] (READ)
// 005536c0: CMP EAX,dword ptr [EDX + 0x4]
//   XREF to: 030e56c4 (READ)
// 005536c3: JL 0x00553a15
//   XREF to: 00553a15 (CONDITIONAL_JUMP)
// 005536c9: MOV ESI,dword ptr [0x030e56bc]
//   XREF to: 030e56bc (READ)
// 005536cf: MOV EBX,EAX
// 005536d1: MOV ECX,EBP
//   XREF to: 030e56c0 (PARAM)
// 005536d3: MOV dword ptr [EDX],0xffffffff
//   XREF to: 030e56c0 (WRITE)
// 005536d9: MOV EAX,0x30e56c0
//   XREF to: 030e56c0 (DATA)
// 005536de: XOR EDX,EDX
// 005536e0: TEST ESI,ESI
// 005536e2: JLE 0x00553a03
//   XREF to: 00553a03 (CONDITIONAL_JUMP)
// 005536e8: MOV EDI,dword ptr [0x030e56bc]
//   XREF to: 030e56bc (READ)
// 005536ee: CMP EBX,dword ptr [EAX]
//   Label: LAB_005536ee
//   XREF to: 030e56c0 (READ)
//   XREF to: 030e5708 (READ)
// 005536f0: JNZ 0x005539f7
//   XREF to: 005539f7 (CONDITIONAL_JUMP)
// 005536f6: CMP EAX,ECX
// 005536f8: JZ 0x005539f7
//   XREF to: 005539f7 (CONDITIONAL_JUMP)
// 005536fe: MOV dword ptr [ESP + 0x10],EAX
//   XREF to: Stack[-0x14] (WRITE)
//   XREF to: 030e56c0 (DATA)
//   XREF to: 030e5708 (DATA)
// 00553702: TEST EAX,EAX
// 00553704: JNZ 0x00553a15
//   XREF to: 00553a15 (CONDITIONAL_JUMP)
// 0055370a: ADD ESP,0x14
//   Label: LAB_0055370a
// 0055370d: POP EBP
// 0055370e: POP EDI
// 0055370f: POP ESI
// 00553710: POP EBX
// 00553711: RET
// 00553712: INC EBP
//   Label: LAB_00553712
// 00553713: JMP 0x00553533
//   XREF to: 00553533 (UNCONDITIONAL_JUMP)
// 00553718: PUSH EBX
//   Label: LAB_00553718
// 00553719: PUSH EAX
// 0055371a: MOV ECX,dword ptr [ESP + 0x30]
//   XREF to: Stack[0x4] (READ)
// 0055371e: PUSH ECX
// 0055371f: CALL engine_prim.c_calculateTriangleWindingOrder_FUN_00552150
//   XREF to: 00552150 (UNCONDITIONAL_CALL)
// 00553724: ADD ESP,0xc
// 00553727: TEST EAX,EAX
// 00553729: JNZ 0x0055354c
//   XREF to: 0055354c (CONDITIONAL_JUMP)
// 0055372f: ADD ESP,0x14
// 00553732: POP EBP
// 00553733: POP EDI
// 00553734: POP ESI
// 00553735: POP EBX
// 00553736: RET
// 00553737: MOV EDI,dword ptr [0x02d052a0]
//   Label: LAB_00553737
//   XREF to: 02d052a0 (READ)
// 0055373d: PUSH EDI
// 0055373e: MOV EBP,dword ptr [ESP + 0x30]
//   XREF to: Stack[0x8] (READ)
// 00553742: PUSH EBP
// 00553743: MOV EAX,dword ptr [ESP + 0x30]
//   XREF to: Stack[0x4] (READ)
// 00553747: PUSH EAX
// 00553748: CALL wincore_windll.cpp_drawPolygon_FUN_005b75e0
//   XREF to: 005b75e0 (UNCONDITIONAL_CALL)
// 0055374d: MOV EDX,dword ptr [0x030e56b8]
//   XREF to: 030e56b8 (READ)
// 00553753: LEA EAX,[EBP + -0x2]
// 00553756: ADD EDX,EAX
// 00553758: ADD ESP,0xc
// 0055375b: MOV dword ptr [0x030e56b8],EDX
//   XREF to: 030e56b8 (WRITE)
// 00553761: ADD ESP,0x14
// 00553764: POP EBP
// 00553765: POP EDI
// 00553766: POP ESI
// 00553767: POP EBX
// 00553768: RET
// 00553769: MOV EDI,dword ptr [ESP + 0x2c]
//   Label: caseD_1
//   XREF to: Stack[0x8] (READ)
// 0055376d: PUSH EDI
// 0055376e: MOV EBP,dword ptr [ESP + 0x2c]
//   XREF to: Stack[0x4] (READ)
// 00553772: PUSH EBP
// 00553773: CALL engine_prim.c_prepareDepthBuffer_FUN_00551fb0
//   XREF to: 00551fb0 (UNCONDITIONAL_CALL)
// 00553778: ADD ESP,0x8
// 0055377b: JMP 0x00553580
//   XREF to: 00553580 (UNCONDITIONAL_JUMP)
// 00553780: MOV EBX,dword ptr [ESP + 0x2c]
//   Label: caseD_2
//   XREF to: Stack[0x8] (READ)
// 00553784: PUSH EBX
// 00553785: MOV ESI,dword ptr [ESP + 0x2c]
//   XREF to: Stack[0x4] (READ)
// 00553789: PUSH ESI
// 0055378a: CALL engine_prim.c_normalizeTextureCoords_FUN_00552020
//   XREF to: 00552020 (UNCONDITIONAL_CALL)
// 0055378f: ADD ESP,0x8
// 00553792: JMP 0x00553580
//   XREF to: 00553580 (UNCONDITIONAL_JUMP)
// 00553797: MOV EDX,dword ptr [ESP + 0x2c]
//   Label: caseD_3
//   XREF to: Stack[0x8] (READ)
// 0055379b: PUSH EDX
// 0055379c: MOV ECX,dword ptr [ESP + 0x2c]
//   XREF to: Stack[0x4] (READ)
// 005537a0: PUSH ECX
// 005537a1: CALL engine_prim.c_adjustNearPlaneTextureCoords_FUN_005520a0
//   XREF to: 005520a0 (UNCONDITIONAL_CALL)
// 005537a6: ADD ESP,0x8
// 005537a9: JMP 0x00553580
//   XREF to: 00553580 (UNCONDITIONAL_JUMP)
// 005537ae: MOV EBP,dword ptr [ESP + 0x2c]
//   Label: caseD_5
//   XREF to: Stack[0x8] (READ)
// 005537b2: PUSH EBP
// 005537b3: MOV EAX,dword ptr [ESP + 0x2c]
//   XREF to: Stack[0x4] (READ)
// 005537b7: PUSH EAX
// 005537b8: CALL engine_prim.c_normalizeTextureCoords_FUN_00552020
//   XREF to: 00552020 (UNCONDITIONAL_CALL)
// 005537bd: ADD ESP,0x8
// 005537c0: JMP 0x00553580
//   XREF to: 00553580 (UNCONDITIONAL_JUMP)
// 005537c5: MOV ESI,dword ptr [ESP + 0x2c]
//   Label: caseD_6
//   XREF to: Stack[0x8] (READ)
// 005537c9: PUSH ESI
// 005537ca: MOV EDI,dword ptr [ESP + 0x2c]
//   XREF to: Stack[0x4] (READ)
// 005537ce: PUSH EDI
// 005537cf: CALL engine_prim.c_replaceWWithDepth_FUN_00552110
//   XREF to: 00552110 (UNCONDITIONAL_CALL)
// 005537d4: ADD ESP,0x8
// 005537d7: JMP 0x00553580
//   XREF to: 00553580 (UNCONDITIONAL_JUMP)
// 005537dc: MOV EBP,dword ptr [ESI + 0x14]
//   Label: LAB_005537dc
// 005537df: CMP EBP,dword ptr [ECX + 0x14]
// 005537e2: JLE 0x005537ee
//   XREF to: 005537ee (CONDITIONAL_JUMP)
// 005537e4: MOV EBX,ECX
// 005537e6: MOV EDI,ESI
// 005537e8: MOV ECX,EDX
// 005537ea: MOV EDX,EAX
// 005537ec: MOV EAX,ECX
// 005537ee: IMUL EBP,dword ptr [0x030e56bc],0x48
//   Label: LAB_005537ee
//   XREF to: 030e56bc (READ)
// 005537f5: ADD EBP,0x30e56c0
//   XREF to: 030e56c0 (DATA)
// 005537fb: MOV dword ptr [EBP],EDX
//   XREF to: 030e56c0 (WRITE)
// 005537fe: MOV ESI,dword ptr [0x030e5b40]
//   XREF to: 030e5b40 (READ)
// 00553804: MOV dword ptr [EBP + 0x4],EAX
//   XREF to: 030e56c4 (WRITE)
// 00553807: CMP EDX,ESI
// 00553809: JGE 0x00553811
//   XREF to: 00553811 (CONDITIONAL_JUMP)
// 0055380b: MOV dword ptr [0x030e5b40],EDX
//   XREF to: 030e5b40 (WRITE)
// 00553811: CMP EAX,dword ptr [0x030e5b44]
//   Label: LAB_00553811
//   XREF to: 030e5b44 (READ)
// 00553817: JLE 0x0055381e
//   XREF to: 0055381e (CONDITIONAL_JUMP)
// 00553819: MOV [0x030e5b44],EAX
//   XREF to: 030e5b44 (WRITE)
// 0055381e: MOV ESI,dword ptr [EBX + 0x14]
//   Label: LAB_0055381e
// 00553821: MOV ECX,dword ptr [EDI + 0x14]
// 00553824: SUB ECX,ESI
// 00553826: CMP ECX,0x10000
// 0055382c: JNC 0x005539ae
//   XREF to: 005539ae (CONDITIONAL_JUMP)
// 00553832: XOR ECX,ECX
// 00553834: MOV EAX,dword ptr [EDI + 0x10]
//   Label: LAB_00553834
// 00553837: MOV EDX,dword ptr [EBX + 0x10]
// 0055383a: MOV ESI,dword ptr [EBX + 0x14]
// 0055383d: SUB EAX,EDX
// 0055383f: AND ESI,0xffff
// 00553845: MOV EDX,EAX
// 00553847: MOV EAX,ECX
// 00553849: XOR SI,0xffff
// 0055384d: IMUL EDX
// 0055384f: SHRD EAX,EDX,0x10
// 00553853: MOV EDX,EAX
// 00553855: MOV dword ptr [EBP + 0xc],EAX
//   XREF to: 030e56cc (WRITE)
// 00553858: MOV EAX,ESI
// 0055385a: IMUL EDX
// 0055385c: SHRD EAX,EDX,0x10
// 00553860: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x24] (DATA)
// 00553863: MOV EDX,dword ptr [ESP]
//   XREF to: Stack[-0x24] (DATA)
// 00553866: MOV EAX,dword ptr [EBX + 0x10]
// 00553869: ADD EAX,EDX
// 0055386b: MOV dword ptr [EBP + 0x8],EAX
//   XREF to: 030e56c8 (WRITE)
// 0055386e: MOV EAX,dword ptr [EDI + 0x18]
// 00553871: MOV EDX,dword ptr [EBX + 0x18]
// 00553874: SUB EAX,EDX
// 00553876: MOV EDX,EAX
// 00553878: MOV EAX,ECX
// 0055387a: IMUL EDX
// 0055387c: SHRD EAX,EDX,0x10
// 00553880: MOV EDX,EAX
// 00553882: MOV dword ptr [EBP + 0x1c],EAX
//   XREF to: 030e56dc (WRITE)
// 00553885: MOV EAX,ESI
// 00553887: IMUL EDX
// 00553889: SHRD EAX,EDX,0x10
// 0055388d: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x24] (DATA)
// 00553890: MOV EDX,dword ptr [ESP]
//   XREF to: Stack[-0x24] (DATA)
// 00553893: MOV EAX,dword ptr [EBX + 0x18]
// 00553896: ADD EAX,EDX
// 00553898: MOV dword ptr [EBP + 0x18],EAX
//   XREF to: 030e56d8 (WRITE)
// 0055389b: MOV EAX,dword ptr [EDI + 0x1c]
// 0055389e: MOV EDX,dword ptr [EBX + 0x1c]
// 005538a1: SUB EAX,EDX
// 005538a3: MOV EDX,EAX
// 005538a5: MOV EAX,ECX
// 005538a7: IMUL EDX
// 005538a9: SHRD EAX,EDX,0x10
// 005538ad: MOV EDX,EAX
// 005538af: MOV dword ptr [EBP + 0x24],EAX
//   XREF to: 030e56e4 (WRITE)
// 005538b2: MOV EAX,ESI
// 005538b4: IMUL EDX
// 005538b6: SHRD EAX,EDX,0x10
// 005538ba: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x24] (DATA)
// 005538bd: MOV EDX,dword ptr [ESP]
//   XREF to: Stack[-0x24] (DATA)
// 005538c0: MOV EAX,dword ptr [EBX + 0x1c]
// 005538c3: ADD EAX,EDX
// 005538c5: MOV dword ptr [EBP + 0x20],EAX
//   XREF to: 030e56e0 (WRITE)
// 005538c8: MOV EAX,dword ptr [EDI + 0x20]
// 005538cb: MOV EDX,dword ptr [EBX + 0x20]
// 005538ce: SUB EAX,EDX
// 005538d0: MOV EDX,EAX
// 005538d2: MOV EAX,ECX
// 005538d4: IMUL EDX
// 005538d6: SHRD EAX,EDX,0x10
// 005538da: MOV EDX,EAX
// 005538dc: MOV dword ptr [EBP + 0x14],EAX
//   XREF to: 030e56d4 (WRITE)
// 005538df: MOV EAX,ESI
// 005538e1: IMUL EDX
// 005538e3: SHRD EAX,EDX,0x10
// 005538e7: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x24] (DATA)
// 005538ea: MOV EDX,dword ptr [ESP]
//   XREF to: Stack[-0x24] (DATA)
// 005538ed: MOV EAX,dword ptr [EBX + 0x20]
// 005538f0: ADD EAX,EDX
// 005538f2: MOV dword ptr [EBP + 0x10],EAX
//   XREF to: 030e56d0 (WRITE)
// 005538f5: MOV EAX,dword ptr [EDI + 0x2c]
// 005538f8: MOV EDX,dword ptr [EBX + 0x2c]
// 005538fb: SUB EAX,EDX
// 005538fd: MOV EDX,EAX
// 005538ff: MOV EAX,ECX
// 00553901: IMUL EDX
// 00553903: SHRD EAX,EDX,0x10
// 00553907: MOV EDX,EAX
// 00553909: MOV dword ptr [EBP + 0x34],EAX
//   XREF to: 030e56f4 (WRITE)
// 0055390c: MOV EAX,ESI
// 0055390e: IMUL EDX
// 00553910: SHRD EAX,EDX,0x10
// 00553914: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x24] (DATA)
// 00553917: MOV EDX,dword ptr [ESP]
//   XREF to: Stack[-0x24] (DATA)
// 0055391a: MOV EAX,dword ptr [EBX + 0x2c]
// 0055391d: ADD EAX,EDX
// 0055391f: MOV dword ptr [EBP + 0x30],EAX
//   XREF to: 030e56f0 (WRITE)
// 00553922: MOV EAX,dword ptr [EDI + 0x8]
// 00553925: MOV EDX,dword ptr [EBX + 0x8]
// 00553928: SUB EAX,EDX
// 0055392a: MOV EDX,EAX
// 0055392c: MOV EAX,ECX
// 0055392e: IMUL EDX
// 00553930: SHRD EAX,EDX,0x10
// 00553934: MOV EDX,EAX
// 00553936: MOV dword ptr [EBP + 0x2c],EAX
//   XREF to: 030e56ec (WRITE)
// 00553939: MOV EAX,ESI
// 0055393b: IMUL EDX
// 0055393d: SHRD EAX,EDX,0x10
// 00553941: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x24] (DATA)
// 00553944: MOV EDX,dword ptr [ESP]
//   XREF to: Stack[-0x24] (DATA)
// 00553947: MOV EAX,dword ptr [EBX + 0x8]
// 0055394a: ADD EAX,EDX
// 0055394c: MOV dword ptr [EBP + 0x28],EAX
//   XREF to: 030e56e8 (WRITE)
// 0055394f: MOV EAX,dword ptr [EDI + 0x24]
// 00553952: MOV EDX,dword ptr [EBX + 0x24]
// 00553955: SUB EAX,EDX
// 00553957: MOV EDX,EAX
// 00553959: MOV EAX,ECX
// 0055395b: IMUL EDX
// 0055395d: SHRD EAX,EDX,0x10
// 00553961: MOV EDX,EAX
// 00553963: MOV dword ptr [EBP + 0x3c],EAX
//   XREF to: 030e56fc (WRITE)
// 00553966: MOV EAX,ESI
// 00553968: IMUL EDX
// 0055396a: SHRD EAX,EDX,0x10
// 0055396e: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x24] (DATA)
// 00553971: MOV EDX,dword ptr [ESP]
//   XREF to: Stack[-0x24] (DATA)
// 00553974: MOV EAX,dword ptr [EBX + 0x24]
// 00553977: ADD EAX,EDX
// 00553979: MOV dword ptr [EBP + 0x38],EAX
//   XREF to: 030e56f8 (WRITE)
// 0055397c: MOV EDX,dword ptr [EDI + 0x28]
// 0055397f: MOV EDI,dword ptr [EBX + 0x28]
// 00553982: MOV EAX,ECX
// 00553984: SUB EDX,EDI
// 00553986: IMUL EDX
// 00553988: SHRD EAX,EDX,0x10
// 0055398c: MOV EDX,EAX
// 0055398e: MOV dword ptr [EBP + 0x44],EAX
//   XREF to: 030e5704 (WRITE)
// 00553991: MOV EAX,ESI
// 00553993: IMUL EDX
// 00553995: SHRD EAX,EDX,0x10
// 00553999: MOV EDX,EAX
// 0055399b: MOV EAX,dword ptr [EBX + 0x28]
// 0055399e: ADD EAX,EDX
// 005539a0: MOV dword ptr [EBP + 0x40],EAX
//   XREF to: 030e5700 (WRITE)
// 005539a3: INC dword ptr [0x030e56bc]
//   XREF to: 030e56bc (READ_WRITE)
// 005539a9: JMP 0x005535dd
//   XREF to: 005535dd (UNCONDITIONAL_JUMP)
// 005539ae: MOV EAX,0xffffffff
//   Label: LAB_005539ae
// 005539b3: XOR EDX,EDX
// 005539b5: DIV ECX
// 005539b7: MOV ECX,EAX
// 005539b9: JMP 0x00553834
//   XREF to: 00553834 (UNCONDITIONAL_JUMP)
// 005539be: INC ECX
//   Label: LAB_005539be
// 005539bf: ADD EAX,0x48
// 005539c2: CMP ECX,EDX
// 005539c4: JL 0x0055360f
//   XREF to: 0055360f (CONDITIONAL_JUMP)
// 005539ca: XOR EAX,EAX
//   Label: LAB_005539ca
// 005539cc: JMP 0x0055361f
//   XREF to: 0055361f (UNCONDITIONAL_JUMP)
// 005539d1: INC EDX
//   Label: LAB_005539d1
// 005539d2: ADD EAX,0x48
// 005539d5: CMP EDX,ESI
// 005539d7: JL 0x0055364c
//   XREF to: 0055364c (CONDITIONAL_JUMP)
// 005539dd: XOR EAX,EAX
//   Label: LAB_005539dd
// 005539df: JMP 0x0055365c
//   XREF to: 0055365c (UNCONDITIONAL_JUMP)
// 005539e4: INC EDX
//   Label: LAB_005539e4
// 005539e5: ADD EAX,0x48
// 005539e8: CMP EDX,EDI
// 005539ea: JL 0x005536a2
//   XREF to: 005536a2 (CONDITIONAL_JUMP)
// 005539f0: XOR EAX,EAX
//   Label: LAB_005539f0
// 005539f2: JMP 0x005536b2
//   XREF to: 005536b2 (UNCONDITIONAL_JUMP)
// 005539f7: INC EDX
//   Label: LAB_005539f7
// 005539f8: ADD EAX,0x48
//   XREF to: 030e5708 (PARAM)
// 005539fb: CMP EDX,EDI
// 005539fd: JL 0x005536ee
//   XREF to: 005536ee (CONDITIONAL_JUMP)
// 00553a03: XOR EAX,EAX
//   Label: LAB_00553a03
// 00553a05: MOV dword ptr [ESP + 0x10],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 00553a09: TEST EAX,EAX
// 00553a0b: JNZ 0x00553a15
//   XREF to: 00553a15 (CONDITIONAL_JUMP)
// 00553a0d: ADD ESP,0x14
// 00553a10: POP EBP
// 00553a11: POP EDI
// 00553a12: POP ESI
// 00553a13: POP EBX
// 00553a14: RET
// 00553a15: MOV EDI,dword ptr [ESP + 0x10]
//   Label: LAB_00553a15
//   XREF to: Stack[-0x14] (READ)
// 00553a19: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x18] (READ)
// 00553a1d: MOV ESI,EBP
// 00553a1f: CALL wincore_windll.cpp_renderScanline_FUN_005b5710
//   XREF to: 005b5710 (UNCONDITIONAL_CALL)
// 00553a24: MOV EAX,dword ptr [EBP + 0xc]
//   XREF to: 030e56cc (READ)
// 00553a27: MOV EDI,dword ptr [EBP + 0x8]
//   XREF to: 030e56c8 (READ)
// 00553a2a: MOV EDX,dword ptr [EBP + 0x18]
//   XREF to: 030e56d8 (READ)
// 00553a2d: MOV ECX,dword ptr [EBP + 0x20]
//   XREF to: 030e56e0 (READ)
// 00553a30: ADD EDI,EAX
// 00553a32: MOV EAX,dword ptr [EBP + 0x1c]
//   XREF to: 030e56dc (READ)
// 00553a35: MOV dword ptr [EBP + 0x8],EDI
//   XREF to: 030e56c8 (WRITE)
// 00553a38: ADD EDX,EAX
// 00553a3a: MOV EAX,dword ptr [EBP + 0x24]
//   XREF to: 030e56e4 (READ)
// 00553a3d: MOV dword ptr [EBP + 0x18],EDX
//   XREF to: 030e56d8 (WRITE)
// 00553a40: ADD ECX,EAX
// 00553a42: MOV dword ptr [EBP + 0x20],ECX
//   XREF to: 030e56e0 (WRITE)
// 00553a45: MOV EBX,dword ptr [EBP + 0x28]
//   XREF to: 030e56e8 (READ)
// 00553a48: MOV ESI,dword ptr [EBP + 0x10]
//   XREF to: 030e56d0 (READ)
// 00553a4b: MOV EDI,dword ptr [EBP + 0x38]
//   XREF to: 030e56f8 (READ)
// 00553a4e: MOV EDX,dword ptr [EBP + 0x40]
//   XREF to: 030e5700 (READ)
// 00553a51: MOV EAX,dword ptr [EBP + 0x2c]
//   XREF to: 030e56ec (READ)
// 00553a54: MOV ECX,dword ptr [EBP + 0x30]
//   XREF to: 030e56f0 (READ)
// 00553a57: ADD EBX,EAX
// 00553a59: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: 030e56d4 (READ)
// 00553a5c: MOV dword ptr [EBP + 0x28],EBX
//   XREF to: 030e56e8 (WRITE)
// 00553a5f: ADD ESI,EAX
// 00553a61: MOV EAX,dword ptr [EBP + 0x3c]
//   XREF to: 030e56fc (READ)
// 00553a64: MOV dword ptr [EBP + 0x10],ESI
//   XREF to: 030e56d0 (WRITE)
// 00553a67: ADD EDI,EAX
// 00553a69: MOV EAX,dword ptr [EBP + 0x44]
//   XREF to: 030e5704 (READ)
// 00553a6c: MOV dword ptr [EBP + 0x38],EDI
//   XREF to: 030e56f8 (WRITE)
// 00553a6f: ADD EDX,EAX
// 00553a71: MOV EAX,dword ptr [EBP + 0x34]
//   XREF to: 030e56f4 (READ)
// 00553a74: MOV dword ptr [EBP + 0x40],EDX
//   XREF to: 030e5700 (WRITE)
// 00553a77: ADD ECX,EAX
// 00553a79: MOV EAX,dword ptr [ESP + 0x10]
// 00553a7d: MOV dword ptr [EBP + 0x30],ECX
//   XREF to: 030e56f0 (WRITE)
// 00553a80: MOV EDX,dword ptr [ESP + 0x10]
// 00553a84: MOV EAX,dword ptr [EAX + 0xc]
// 00553a87: MOV EBX,dword ptr [EDX + 0x8]
// 00553a8a: MOV ESI,dword ptr [EDX + 0x18]
// 00553a8d: MOV EDI,dword ptr [EDX + 0x20]
// 00553a90: MOV ECX,dword ptr [EDX + 0x28]
// 00553a93: ADD EBX,EAX
// 00553a95: MOV EAX,dword ptr [EDX + 0x1c]
// 00553a98: MOV dword ptr [EDX + 0x8],EBX
// 00553a9b: ADD ESI,EAX
// 00553a9d: MOV EAX,dword ptr [EDX + 0x24]
// 00553aa0: MOV dword ptr [EDX + 0x18],ESI
// 00553aa3: ADD EDI,EAX
// 00553aa5: MOV EAX,dword ptr [EDX + 0x2c]
// 00553aa8: MOV dword ptr [EDX + 0x20],EDI
// 00553aab: ADD ECX,EAX
// 00553aad: MOV dword ptr [EDX + 0x28],ECX
// 00553ab0: MOV EBX,dword ptr [EDX + 0x10]
// 00553ab3: MOV ESI,dword ptr [EDX + 0x38]
// 00553ab6: MOV EDI,dword ptr [EDX + 0x40]
// 00553ab9: MOV EAX,dword ptr [EDX + 0x14]
// 00553abc: MOV ECX,dword ptr [EDX + 0x30]
// 00553abf: ADD EBX,EAX
// 00553ac1: MOV EAX,dword ptr [EDX + 0x3c]
// 00553ac4: MOV dword ptr [EDX + 0x10],EBX
// 00553ac7: MOV EBX,dword ptr [ESP + 0xc]
// 00553acb: ADD ESI,EAX
// 00553acd: INC EBX
// 00553ace: MOV EAX,dword ptr [EDX + 0x44]
// 00553ad1: MOV dword ptr [EDX + 0x38],ESI
// 00553ad4: ADD EDI,EAX
// 00553ad6: MOV EAX,dword ptr [EDX + 0x34]
// 00553ad9: MOV dword ptr [EDX + 0x40],EDI
// 00553adc: ADD ECX,EAX
// 00553ade: MOV dword ptr [ESP + 0xc],EBX
// 00553ae2: MOV dword ptr [EDX + 0x30],ECX
// 00553ae5: JMP 0x00553671
//   XREF to: 00553671 (UNCONDITIONAL_JUMP)
