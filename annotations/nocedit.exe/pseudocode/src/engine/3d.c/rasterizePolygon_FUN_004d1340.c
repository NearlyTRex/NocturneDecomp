// Name: engine_3d.c_rasterizePolygon_FUN_004d1340
// Address: 004d1340
// Address Range: [[004d1340, 004d16a3]]
// Convention: __cdecl
// Signature: void engine_3d.c_rasterizePolygon_FUN_004d1340(SRenderVertex * * vertices, int vertex_count)
// Cross-references:
//   engine_3d.c_renderPolygonUVTextureEnable_FUN_00405a00 (00405a00) at 00405a49 [UNCONDITIONAL_CALL]
//   engine_3d.c_renderPolygonUVVertexLit_FUN_00405aa0 (00405aa0) at 00405af6 [UNCONDITIONAL_CALL]
// Globals:
//   int g_WindowHeight = 0xc8
//   int g_EdgeCount
//   SHardwareEdge[16] g_HardwareEdgeTable
//   undefined4 DAT_02d7b430
//   undefined4 DAT_02d7b434
//   undefined4 DAT_02d7b438
//   undefined4 DAT_02d7b444
//   undefined4 DAT_02d7b448
//   undefined4 DAT_02d7b44c
//   undefined4 DAT_02d7b450
//   undefined4 DAT_02d7b464
//   int g_EdgeListMinY
//   int g_EdgeListMaxY
// Function calls:
//   wincore_windll.cpp_renderScanline_FUN_005b5710

#include "nocturne.h"

void __cdecl engine_3d_c_rasterizePolygon_FUN_004d1340(SRenderVertex **vertices,int vertex_count)

{
  SRenderVertex *pSVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  SRenderVertex *pSVar7;
  uint uVar8;
  SRenderVertex *pSVar9;
  SRenderVertex **in_stack_ffffffdc;
  SRenderVertex **ppSVar10;
  void *right_data;
  SHardwareEdge *local_18;
  SHardwareEdge *local_14;
  
  g_EdgeCount = 0;
  g_EdgeListMinY = g_WindowHeight;
  g_EdgeListMaxY = 0;
  right_data = (void *)0x0;
  iVar6 = g_EdgeCount;
  ppSVar10 = vertices;
  if (0 < vertex_count) {
    do {
      iVar3 = (int)right_data + 1;
      if (vertex_count <= iVar3) {
        iVar3 = 0;
      }
      pSVar9 = vertices[iVar3];
      pSVar1 = *ppSVar10;
      iVar4 = (pSVar9->projected_vertex).screen_y >> 0x10;
      iVar3 = (pSVar1->projected_vertex).screen_y >> 0x10;
      g_EdgeCount = iVar6;
      if (iVar3 != iVar4) {
        iVar5 = iVar4;
        pSVar7 = pSVar1;
        if ((pSVar9->projected_vertex).screen_y < (pSVar1->projected_vertex).screen_y) {
          iVar5 = iVar3;
          iVar3 = iVar4;
          pSVar7 = pSVar9;
          pSVar9 = pSVar1;
        }
        g_HardwareEdgeTable[iVar6].y_min = iVar3;
        iVar4 = g_EdgeListMinY;
        g_HardwareEdgeTable[iVar6].y_max = iVar5;
        if (iVar3 < iVar4) {
          g_EdgeListMinY = iVar3;
        }
        if (g_EdgeListMaxY < iVar5) {
          g_EdgeListMaxY = iVar5;
        }
        g_HardwareEdgeTable[iVar6].x_current = (pSVar7->projected_vertex).screen_x;
        g_HardwareEdgeTable[iVar6].u_current = (int)pSVar7->u;
        g_HardwareEdgeTable[iVar6].v_current = (int)pSVar7->v;
        uVar8 = (pSVar9->projected_vertex).screen_y - (pSVar7->projected_vertex).screen_y;
        if (uVar8 < 0x10000) {
          iVar3 = 0;
        }
        else {
          iVar3 = (int)(0xffffffff / (ulonglong)uVar8);
        }
        lVar2 = (longlong)iVar3 *
                (longlong)
                ((pSVar9->projected_vertex).screen_x - (pSVar7->projected_vertex).screen_x);
        g_HardwareEdgeTable[iVar6].x_gradient =
             (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
        lVar2 = (longlong)iVar3 * (longlong)((int)pSVar9->u - (int)pSVar7->u);
        g_HardwareEdgeTable[iVar6].u_gradient =
             (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
        lVar2 = (longlong)iVar3 * (longlong)((int)pSVar9->v - (int)pSVar7->v);
        g_HardwareEdgeTable[iVar6].v_gradient =
             (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
        uVar8 = (uint)(ushort)((ushort)(pSVar7->projected_vertex).screen_y ^ 0xffff);
        lVar2 = (longlong)(int)uVar8 * (longlong)g_HardwareEdgeTable[iVar6].x_gradient;
        g_HardwareEdgeTable[iVar6].x_current =
             g_HardwareEdgeTable[iVar6].x_current +
             ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10);
        lVar2 = (longlong)(int)uVar8 * (longlong)g_HardwareEdgeTable[iVar6].u_gradient;
        iVar3 = g_HardwareEdgeTable[iVar6].v_gradient;
        g_HardwareEdgeTable[iVar6].u_current =
             g_HardwareEdgeTable[iVar6].u_current +
             ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10);
        lVar2 = (longlong)(int)uVar8 * (longlong)iVar3;
        g_EdgeCount = g_EdgeCount + 1;
        g_HardwareEdgeTable[iVar6].v_current =
             g_HardwareEdgeTable[iVar6].v_current +
             ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10);
      }
      in_stack_ffffffdc = ppSVar10 + 1;
      right_data = (void *)((int)right_data + 1);
      iVar6 = g_EdgeCount;
      ppSVar10 = in_stack_ffffffdc;
    } while ((int)right_data < vertex_count);
  }
  local_18 = g_HardwareEdgeTable;
  iVar6 = 0;
  if (0 < g_EdgeCount) {
    do {
      if ((g_EdgeListMinY == local_18->y_min) && (local_18 != (SHardwareEdge *)0x0))
      goto LAB_004d13e0;
      iVar6 = iVar6 + 1;
      local_18 = local_18 + 1;
    } while (iVar6 < g_EdgeCount);
  }
  local_18 = (SHardwareEdge *)0x0;
LAB_004d13e0:
  if (local_18 != (SHardwareEdge *)0x0) {
    iVar6 = 0;
    local_14 = g_HardwareEdgeTable;
    if (0 < g_EdgeCount) {
      do {
        if ((g_EdgeListMinY == local_14->y_min) && (local_14 != local_18)) goto LAB_004d1419;
        iVar6 = iVar6 + 1;
        local_14 = local_14 + 1;
      } while (iVar6 < g_EdgeCount);
    }
    local_14 = (SHardwareEdge *)0x0;
LAB_004d1419:
    iVar6 = g_EdgeListMinY;
    if (local_14 != (SHardwareEdge *)0x0) {
      do {
        if (local_18->y_max <= iVar6) {
          local_18->y_min = -1;
          local_18 = g_HardwareEdgeTable;
          iVar3 = 0;
          if (0 < g_EdgeCount) {
            do {
              if ((iVar6 == local_18->y_min) && (local_18 != local_14)) goto LAB_004d1472;
              iVar3 = iVar3 + 1;
              local_18 = local_18 + 1;
            } while (iVar3 < g_EdgeCount);
          }
          local_18 = (SHardwareEdge *)0x0;
LAB_004d1472:
          if (local_18 == (SHardwareEdge *)0x0) {
            return;
          }
        }
        if (local_14->y_max <= iVar6) {
          local_14->y_min = -1;
          local_14 = g_HardwareEdgeTable;
          iVar3 = 0;
          if (0 < g_EdgeCount) {
            do {
              if ((iVar6 == local_14->y_min) && (local_14 != local_18)) goto LAB_004d14c2;
              iVar3 = iVar3 + 1;
              local_14 = local_14 + 1;
            } while (iVar3 < g_EdgeCount);
          }
          local_14 = (SHardwareEdge *)0x0;
LAB_004d14c2:
          if (local_14 == (SHardwareEdge *)0x0) {
            return;
          }
        }
        wincore_windll_cpp_renderScanline_FUN_005b5710(in_stack_ffffffdc,right_data,iVar6);
        vertices[2] = (SRenderVertex *)
                      ((int)&(vertices[2]->projected_vertex).transformed_x +
                      (int)&(vertices[3]->projected_vertex).transformed_x);
        vertices[6] = (SRenderVertex *)
                      ((int)&(vertices[6]->projected_vertex).transformed_x +
                      (int)&(vertices[7]->projected_vertex).transformed_x);
        vertices[8] = (SRenderVertex *)
                      ((int)&(vertices[8]->projected_vertex).transformed_x +
                      (int)&(vertices[9]->projected_vertex).transformed_x);
        *(int *)(vertex_count + 8) = *(int *)(vertex_count + 8) + *(int *)(vertex_count + 0xc);
        *(int *)(vertex_count + 0x18) =
             *(int *)(vertex_count + 0x18) + *(int *)(vertex_count + 0x1c);
        *(int *)(vertex_count + 0x20) =
             *(int *)(vertex_count + 0x20) + *(int *)(vertex_count + 0x24);
      } while( true );
    }
  }
  return;
}


// Assembly code:
// 004d1340: PUSH EBX
//   Label: engine_3d.c_rasterizePolygon_FUN_004d1340
// 004d1341: PUSH ESI
// 004d1342: PUSH EDI
// 004d1343: PUSH EBP
// 004d1344: SUB ESP,0x14
// 004d1347: MOV EBX,dword ptr [ESP + 0x2c]
//   XREF to: Stack[0x8] (READ)
// 004d134b: MOV EAX,[0x00679398]
//   XREF to: 00679398 (READ)
// 004d1350: XOR EDX,EDX
// 004d1352: XOR EBP,EBP
// 004d1354: MOV [0x02d7b7ac],EAX
//   XREF to: 02d7b7ac (WRITE)
// 004d1359: MOV dword ptr [0x02d7b7b0],EDX
//   XREF to: 02d7b7b0 (WRITE)
// 004d135f: MOV dword ptr [ESP + 0x4],EDX
//   XREF to: Stack[-0x20] (WRITE)
// 004d1363: TEST EBX,EBX
// 004d1365: JLE 0x004d13bb
//   XREF to: 004d13bb (CONDITIONAL_JUMP)
// 004d1367: MOV EAX,dword ptr [ESP + 0x28]
//   XREF to: Stack[0x4] (READ)
// 004d136b: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x24] (DATA)
// 004d136e: MOV EAX,dword ptr [ESP + 0x4]
//   Label: LAB_004d136e
//   XREF to: Stack[-0x20] (READ)
// 004d1372: MOV ECX,dword ptr [ESP + 0x2c]
//   XREF to: Stack[0x8] (READ)
// 004d1376: INC EAX
// 004d1377: CMP EAX,ECX
// 004d1379: JL 0x004d137d
//   XREF to: 004d137d (CONDITIONAL_JUMP)
// 004d137b: XOR EAX,EAX
// 004d137d: MOV EBX,dword ptr [ESP + 0x28]
//   Label: LAB_004d137d
//   XREF to: Stack[0x4] (READ)
// 004d1381: SHL EAX,0x2
// 004d1384: ADD EAX,EBX
// 004d1386: MOV EBX,dword ptr [ESP]
//   XREF to: Stack[-0x24] (DATA)
// 004d1389: MOV EDI,dword ptr [EAX]
// 004d138b: MOV EBX,dword ptr [EBX]
// 004d138d: MOV EAX,dword ptr [EDI + 0x14]
// 004d1390: MOV EDX,dword ptr [EBX + 0x14]
// 004d1393: SAR EAX,0x10
// 004d1396: SAR EDX,0x10
// 004d1399: CMP EDX,EAX
// 004d139b: JNZ 0x004d14e2
//   XREF to: 004d14e2 (CONDITIONAL_JUMP)
// 004d13a1: MOV ESI,dword ptr [ESP]
//   Label: LAB_004d13a1
//   XREF to: Stack[-0x24] (DATA)
// 004d13a4: MOV EDI,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x20] (READ)
// 004d13a8: MOV EDX,dword ptr [ESP + 0x2c]
//   XREF to: Stack[0x8] (READ)
// 004d13ac: ADD ESI,0x4
// 004d13af: INC EDI
// 004d13b0: MOV dword ptr [ESP],ESI
//   XREF to: Stack[-0x24] (DATA)
// 004d13b3: MOV dword ptr [ESP + 0x4],EDI
//   XREF to: Stack[-0x20] (WRITE)
// 004d13b7: CMP EDI,EDX
// 004d13b9: JL 0x004d136e
//   XREF to: 004d136e (CONDITIONAL_JUMP)
// 004d13bb: MOV EAX,0x2d7b42c
//   Label: LAB_004d13bb
//   XREF to: 02d7b42c (PARAM)
// 004d13c0: MOV ECX,dword ptr [0x02d7b7ac]
//   XREF to: 02d7b7ac (READ)
// 004d13c6: XOR EDX,EDX
// 004d13c8: TEST EBP,EBP
// 004d13ca: JLE 0x004d15f3
//   XREF to: 004d15f3 (CONDITIONAL_JUMP)
// 004d13d0: CMP ECX,dword ptr [EAX]
//   Label: LAB_004d13d0
//   XREF to: 02d7b42c (READ)
//   XREF to: 02d7b464 (READ)
// 004d13d2: JNZ 0x004d15e7
//   XREF to: 004d15e7 (CONDITIONAL_JUMP)
// 004d13d8: TEST EAX,EAX
// 004d13da: JZ 0x004d15e7
//   XREF to: 004d15e7 (CONDITIONAL_JUMP)
// 004d13e0: MOV dword ptr [ESP + 0xc],EAX
//   Label: LAB_004d13e0
//   XREF to: Stack[-0x18] (WRITE)
//   XREF to: 02d7b42c (DATA)
//   XREF to: 02d7b464 (DATA)
// 004d13e4: MOV dword ptr [0x02d7b428],EBP
//   XREF to: 02d7b428 (WRITE)
// 004d13ea: TEST EAX,EAX
// 004d13ec: JZ 0x004d14d4
//   XREF to: 004d14d4 (CONDITIONAL_JUMP)
// 004d13f2: MOV EBX,dword ptr [0x02d7b7ac]
//   XREF to: 02d7b7ac (READ)
// 004d13f8: MOV ECX,EAX
//   XREF to: 02d7b42c (PARAM)
// 004d13fa: XOR EDX,EDX
// 004d13fc: MOV EAX,0x2d7b42c
//   XREF to: 02d7b42c (DATA)
// 004d1401: TEST EBP,EBP
// 004d1403: JLE 0x004d1606
//   XREF to: 004d1606 (CONDITIONAL_JUMP)
// 004d1409: CMP EBX,dword ptr [EAX]
//   Label: LAB_004d1409
//   XREF to: 02d7b42c (READ)
//   XREF to: 02d7b464 (READ)
// 004d140b: JNZ 0x004d15fa
//   XREF to: 004d15fa (CONDITIONAL_JUMP)
// 004d1411: CMP EAX,ECX
// 004d1413: JZ 0x004d15fa
//   XREF to: 004d15fa (CONDITIONAL_JUMP)
// 004d1419: MOV dword ptr [ESP + 0x10],EAX
//   Label: LAB_004d1419
//   XREF to: Stack[-0x14] (WRITE)
//   XREF to: 02d7b42c (DATA)
//   XREF to: 02d7b464 (DATA)
// 004d141d: MOV dword ptr [0x02d7b428],EBP
//   XREF to: 02d7b428 (WRITE)
// 004d1423: TEST EAX,EAX
// 004d1425: JZ 0x004d14d4
//   XREF to: 004d14d4 (CONDITIONAL_JUMP)
// 004d142b: MOV EAX,[0x02d7b7ac]
//   XREF to: 02d7b7ac (READ)
// 004d1430: MOV dword ptr [ESP + 0x8],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 004d1434: MOV EDX,dword ptr [ESP + 0xc]
//   Label: LAB_004d1434
//   XREF to: Stack[-0x18] (READ)
// 004d1438: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x1c] (READ)
// 004d143c: CMP EAX,dword ptr [EDX + 0x4]
//   XREF to: 02d7b430 (READ)
// 004d143f: JL 0x004d1480
//   XREF to: 004d1480 (CONDITIONAL_JUMP)
// 004d1441: MOV ECX,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x14] (READ)
// 004d1445: MOV EBP,dword ptr [0x02d7b428]
//   XREF to: 02d7b428 (READ)
// 004d144b: MOV EBX,EAX
// 004d144d: MOV dword ptr [EDX],0xffffffff
//   XREF to: 02d7b42c (WRITE)
// 004d1453: MOV EAX,0x2d7b42c
//   XREF to: 02d7b42c (DATA)
// 004d1458: XOR EDX,EDX
// 004d145a: TEST EBP,EBP
// 004d145c: JLE 0x004d1619
//   XREF to: 004d1619 (CONDITIONAL_JUMP)
// 004d1462: CMP EBX,dword ptr [EAX]
//   Label: LAB_004d1462
//   XREF to: 02d7b42c (READ)
//   XREF to: 02d7b464 (READ)
// 004d1464: JNZ 0x004d160d
//   XREF to: 004d160d (CONDITIONAL_JUMP)
// 004d146a: CMP EAX,ECX
// 004d146c: JZ 0x004d160d
//   XREF to: 004d160d (CONDITIONAL_JUMP)
// 004d1472: MOV dword ptr [ESP + 0xc],EAX
//   Label: LAB_004d1472
//   XREF to: Stack[-0x18] (WRITE)
//   XREF to: 02d7b42c (DATA)
//   XREF to: 02d7b464 (DATA)
// 004d1476: MOV dword ptr [0x02d7b428],EBP
//   XREF to: 02d7b428 (WRITE)
// 004d147c: TEST EAX,EAX
// 004d147e: JZ 0x004d14d4
//   XREF to: 004d14d4 (CONDITIONAL_JUMP)
// 004d1480: MOV EDX,dword ptr [ESP + 0x10]
//   Label: LAB_004d1480
//   XREF to: Stack[-0x14] (READ)
//   XREF to: 02d7b42c (PARAM)
// 004d1484: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x1c] (READ)
// 004d1488: CMP EAX,dword ptr [EDX + 0x4]
//   XREF to: 02d7b430 (READ)
// 004d148b: JL 0x004d1633
//   XREF to: 004d1633 (CONDITIONAL_JUMP)
// 004d1491: MOV ECX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x18] (READ)
// 004d1495: MOV EBP,dword ptr [0x02d7b428]
//   XREF to: 02d7b428 (READ)
// 004d149b: MOV EBX,EAX
// 004d149d: MOV dword ptr [EDX],0xffffffff
//   XREF to: 02d7b42c (WRITE)
// 004d14a3: MOV EAX,0x2d7b42c
//   XREF to: 02d7b42c (DATA)
// 004d14a8: XOR EDX,EDX
// 004d14aa: TEST EBP,EBP
// 004d14ac: JLE 0x004d162c
//   XREF to: 004d162c (CONDITIONAL_JUMP)
// 004d14b2: CMP EBX,dword ptr [EAX]
//   Label: LAB_004d14b2
//   XREF to: 02d7b42c (READ)
//   XREF to: 02d7b464 (READ)
// 004d14b4: JNZ 0x004d1620
//   XREF to: 004d1620 (CONDITIONAL_JUMP)
// 004d14ba: CMP EAX,ECX
// 004d14bc: JZ 0x004d1620
//   XREF to: 004d1620 (CONDITIONAL_JUMP)
// 004d14c2: MOV dword ptr [ESP + 0x10],EAX
//   Label: LAB_004d14c2
//   XREF to: Stack[-0x14] (WRITE)
//   XREF to: 02d7b42c (DATA)
//   XREF to: 02d7b464 (DATA)
// 004d14c6: MOV dword ptr [0x02d7b428],EBP
//   XREF to: 02d7b428 (WRITE)
// 004d14cc: TEST EAX,EAX
// 004d14ce: JNZ 0x004d1633
//   XREF to: 004d1633 (CONDITIONAL_JUMP)
// 004d14d4: MOV EBP,dword ptr [0x02d7b428]
//   Label: LAB_004d14d4
//   XREF to: 02d7b428 (READ)
// 004d14da: ADD ESP,0x14
// 004d14dd: POP EBP
// 004d14de: POP EDI
// 004d14df: POP ESI
// 004d14e0: POP EBX
// 004d14e1: RET
// 004d14e2: MOV ESI,dword ptr [EDI + 0x14]
//   Label: LAB_004d14e2
// 004d14e5: CMP ESI,dword ptr [EBX + 0x14]
// 004d14e8: JGE 0x004d14f6
//   XREF to: 004d14f6 (CONDITIONAL_JUMP)
// 004d14ea: MOV ECX,EBX
// 004d14ec: MOV EBX,EDI
// 004d14ee: MOV EDI,ECX
// 004d14f0: MOV ECX,EDX
// 004d14f2: MOV EDX,EAX
// 004d14f4: MOV EAX,ECX
// 004d14f6: IMUL ECX,EBP,0x38
//   Label: LAB_004d14f6
// 004d14f9: ADD ECX,0x2d7b42c
//   XREF to: 02d7b42c (DATA)
// 004d14ff: MOV dword ptr [ECX],EDX
//   XREF to: 02d7b42c (WRITE)
// 004d1501: MOV ESI,dword ptr [0x02d7b7ac]
//   XREF to: 02d7b7ac (READ)
// 004d1507: MOV dword ptr [ECX + 0x4],EAX
//   XREF to: 02d7b430 (WRITE)
// 004d150a: CMP EDX,ESI
// 004d150c: JGE 0x004d1514
//   XREF to: 004d1514 (CONDITIONAL_JUMP)
// 004d150e: MOV dword ptr [0x02d7b7ac],EDX
//   XREF to: 02d7b7ac (WRITE)
// 004d1514: CMP EAX,dword ptr [0x02d7b7b0]
//   Label: LAB_004d1514
//   XREF to: 02d7b7b0 (READ)
// 004d151a: JLE 0x004d1521
//   XREF to: 004d1521 (CONDITIONAL_JUMP)
// 004d151c: MOV [0x02d7b7b0],EAX
//   XREF to: 02d7b7b0 (WRITE)
// 004d1521: MOV EAX,dword ptr [EBX + 0x10]
//   Label: LAB_004d1521
// 004d1524: MOV dword ptr [ECX + 0x8],EAX
//   XREF to: 02d7b434 (WRITE)
// 004d1527: MOV EAX,dword ptr [EBX + 0x18]
// 004d152a: MOV dword ptr [ECX + 0x18],EAX
//   XREF to: 02d7b444 (WRITE)
// 004d152d: MOV EAX,dword ptr [EBX + 0x1c]
// 004d1530: MOV dword ptr [ECX + 0x20],EAX
//   XREF to: 02d7b44c (WRITE)
// 004d1533: MOV ESI,dword ptr [EDI + 0x14]
// 004d1536: SUB ESI,dword ptr [EBX + 0x14]
// 004d1539: CMP ESI,0x10000
// 004d153f: JNC 0x004d15d7
//   XREF to: 004d15d7 (CONDITIONAL_JUMP)
// 004d1545: XOR ESI,ESI
// 004d1547: MOV EAX,dword ptr [EDI + 0x10]
//   Label: LAB_004d1547
// 004d154a: MOV EDX,dword ptr [EBX + 0x10]
// 004d154d: SUB EAX,EDX
// 004d154f: MOV EDX,EAX
// 004d1551: MOV EAX,ESI
// 004d1553: MOV dword ptr [0x02d7b428],EBP
//   XREF to: 02d7b428 (WRITE)
// 004d1559: IMUL EDX
// 004d155b: SHRD EAX,EDX,0x10
// 004d155f: MOV dword ptr [ECX + 0xc],EAX
//   XREF to: 02d7b438 (WRITE)
// 004d1562: MOV EAX,dword ptr [EDI + 0x18]
// 004d1565: MOV EDX,dword ptr [EBX + 0x18]
// 004d1568: SUB EAX,EDX
// 004d156a: MOV EDX,EAX
// 004d156c: MOV EAX,ESI
// 004d156e: IMUL EDX
// 004d1570: SHRD EAX,EDX,0x10
// 004d1574: MOV dword ptr [ECX + 0x1c],EAX
//   XREF to: 02d7b448 (WRITE)
// 004d1577: MOV EDX,dword ptr [EDI + 0x1c]
// 004d157a: MOV EDI,dword ptr [EBX + 0x1c]
// 004d157d: MOV EAX,ESI
// 004d157f: SUB EDX,EDI
// 004d1581: IMUL EDX
// 004d1583: SHRD EAX,EDX,0x10
// 004d1587: MOV dword ptr [ECX + 0x24],EAX
//   XREF to: 02d7b450 (WRITE)
// 004d158a: MOV EBX,dword ptr [EBX + 0x14]
// 004d158d: AND EBX,0xffff
// 004d1593: XOR BX,0xffff
// 004d1597: MOV EDX,dword ptr [ECX + 0xc]
//   XREF to: 02d7b438 (READ)
// 004d159a: MOV EAX,EBX
// 004d159c: IMUL EDX
// 004d159e: SHRD EAX,EDX,0x10
// 004d15a2: ADD dword ptr [ECX + 0x8],EAX
//   XREF to: 02d7b434 (READ_WRITE)
// 004d15a5: MOV EAX,EBX
// 004d15a7: MOV EDX,dword ptr [ECX + 0x1c]
//   XREF to: 02d7b448 (READ)
// 004d15aa: IMUL EDX
// 004d15ac: SHRD EAX,EDX,0x10
// 004d15b0: MOV ESI,dword ptr [ECX + 0x18]
//   XREF to: 02d7b444 (READ)
// 004d15b3: MOV EDX,dword ptr [ECX + 0x24]
//   XREF to: 02d7b450 (READ)
// 004d15b6: ADD ESI,EAX
// 004d15b8: MOV EAX,EBX
// 004d15ba: MOV dword ptr [ECX + 0x18],ESI
//   XREF to: 02d7b444 (WRITE)
// 004d15bd: IMUL EDX
// 004d15bf: SHRD EAX,EDX,0x10
// 004d15c3: MOV EDI,dword ptr [ECX + 0x20]
//   XREF to: 02d7b44c (READ)
// 004d15c6: MOV EBP,dword ptr [0x02d7b428]
//   XREF to: 02d7b428 (READ)
// 004d15cc: ADD EDI,EAX
// 004d15ce: INC EBP
// 004d15cf: MOV dword ptr [ECX + 0x20],EDI
//   XREF to: 02d7b44c (WRITE)
// 004d15d2: JMP 0x004d13a1
//   XREF to: 004d13a1 (UNCONDITIONAL_JUMP)
// 004d15d7: MOV EAX,0xffffffff
//   Label: LAB_004d15d7
// 004d15dc: XOR EDX,EDX
// 004d15de: DIV ESI
// 004d15e0: MOV ESI,EAX
// 004d15e2: JMP 0x004d1547
//   XREF to: 004d1547 (UNCONDITIONAL_JUMP)
// 004d15e7: INC EDX
//   Label: LAB_004d15e7
// 004d15e8: ADD EAX,0x38
// 004d15eb: CMP EDX,EBP
// 004d15ed: JL 0x004d13d0
//   XREF to: 004d13d0 (CONDITIONAL_JUMP)
// 004d15f3: XOR EAX,EAX
//   Label: LAB_004d15f3
// 004d15f5: JMP 0x004d13e0
//   XREF to: 004d13e0 (UNCONDITIONAL_JUMP)
// 004d15fa: INC EDX
//   Label: LAB_004d15fa
// 004d15fb: ADD EAX,0x38
// 004d15fe: CMP EDX,EBP
// 004d1600: JL 0x004d1409
//   XREF to: 004d1409 (CONDITIONAL_JUMP)
// 004d1606: XOR EAX,EAX
//   Label: LAB_004d1606
// 004d1608: JMP 0x004d1419
//   XREF to: 004d1419 (UNCONDITIONAL_JUMP)
// 004d160d: INC EDX
//   Label: LAB_004d160d
// 004d160e: ADD EAX,0x38
// 004d1611: CMP EDX,EBP
// 004d1613: JL 0x004d1462
//   XREF to: 004d1462 (CONDITIONAL_JUMP)
// 004d1619: XOR EAX,EAX
//   Label: LAB_004d1619
// 004d161b: JMP 0x004d1472
//   XREF to: 004d1472 (UNCONDITIONAL_JUMP)
// 004d1620: INC EDX
//   Label: LAB_004d1620
// 004d1621: ADD EAX,0x38
//   XREF to: 02d7b464 (DATA)
// 004d1624: CMP EDX,EBP
// 004d1626: JL 0x004d14b2
//   XREF to: 004d14b2 (CONDITIONAL_JUMP)
// 004d162c: XOR EAX,EAX
//   Label: LAB_004d162c
// 004d162e: JMP 0x004d14c2
//   XREF to: 004d14c2 (UNCONDITIONAL_JUMP)
// 004d1633: MOV EDI,dword ptr [ESP + 0x10]
//   Label: LAB_004d1633
//   XREF to: Stack[-0x14] (READ)
// 004d1637: MOV ESI,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x18] (READ)
// 004d163b: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x1c] (READ)
// 004d163f: CALL wincore_windll.cpp_renderScanline_FUN_005b5710
//   XREF to: 005b5710 (UNCONDITIONAL_CALL)
// 004d1644: MOV EAX,dword ptr [ESP + 0xc]
// 004d1648: MOV EDX,dword ptr [ESP + 0xc]
// 004d164c: MOV EAX,dword ptr [EAX + 0xc]
// 004d164f: MOV EDI,dword ptr [EDX + 0x8]
// 004d1652: MOV ECX,dword ptr [EDX + 0x18]
// 004d1655: MOV EBX,dword ptr [EDX + 0x20]
// 004d1658: ADD EDI,EAX
// 004d165a: MOV EAX,dword ptr [EDX + 0x1c]
// 004d165d: MOV dword ptr [EDX + 0x8],EDI
// 004d1660: ADD ECX,EAX
// 004d1662: MOV EAX,dword ptr [EDX + 0x24]
// 004d1665: MOV dword ptr [EDX + 0x18],ECX
// 004d1668: ADD EBX,EAX
// 004d166a: MOV EAX,dword ptr [ESP + 0x10]
// 004d166e: MOV dword ptr [EDX + 0x20],EBX
// 004d1671: MOV EDX,dword ptr [ESP + 0x10]
// 004d1675: MOV EBX,dword ptr [ESP + 0x8]
// 004d1679: MOV EAX,dword ptr [EAX + 0xc]
// 004d167c: INC EBX
// 004d167d: MOV ESI,dword ptr [EDX + 0x8]
// 004d1680: MOV EDI,dword ptr [EDX + 0x18]
// 004d1683: MOV ECX,dword ptr [EDX + 0x20]
// 004d1686: ADD ESI,EAX
// 004d1688: MOV EAX,dword ptr [EDX + 0x1c]
// 004d168b: MOV dword ptr [EDX + 0x8],ESI
// 004d168e: ADD EDI,EAX
// 004d1690: MOV EAX,dword ptr [EDX + 0x24]
// 004d1693: MOV dword ptr [EDX + 0x18],EDI
// 004d1696: ADD ECX,EAX
// 004d1698: MOV dword ptr [ESP + 0x8],EBX
// 004d169c: MOV dword ptr [EDX + 0x20],ECX
// 004d169f: JMP 0x004d1434
//   XREF to: 004d1434 (UNCONDITIONAL_JUMP)
