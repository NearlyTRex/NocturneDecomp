// Name: engine_3d.c_addPolygonEdge_FUN_004d11c0
// Address: 004d11c0
// Address Range: [[004d11c0, 004d12f4]]
// Convention: __cdecl
// Signature: void engine_3d.c_addPolygonEdge_FUN_004d11c0(SRenderVertex * vertex1, SRenderVertex * vertex2)
// Globals:
//   int g_EdgeCount
//   SHardwareEdge[16] g_HardwareEdgeTable
//   undefined4 DAT_02d7b430
//   undefined4 DAT_02d7b434
//   undefined4 DAT_02d7b438
//   undefined4 DAT_02d7b444
//   undefined4 DAT_02d7b448
//   undefined4 DAT_02d7b44c
//   undefined4 DAT_02d7b450
//   int g_EdgeListMinY
//   int g_EdgeListMaxY

#include "nocturne.h"

void __cdecl engine_3d_c_addPolygonEdge_FUN_004d11c0(SRenderVertex *vertex1,SRenderVertex *vertex2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  SRenderVertex *pSVar7;
  
  iVar2 = g_EdgeCount;
  iVar3 = (vertex2->projected_vertex).screen_y >> 0x10;
  iVar5 = (vertex1->projected_vertex).screen_y >> 0x10;
  if (iVar5 != iVar3) {
    iVar4 = iVar3;
    pSVar7 = vertex1;
    if ((vertex2->projected_vertex).screen_y < (vertex1->projected_vertex).screen_y) {
      iVar4 = iVar5;
      iVar5 = iVar3;
      pSVar7 = vertex2;
      vertex2 = vertex1;
    }
    g_HardwareEdgeTable[g_EdgeCount].y_min = iVar5;
    iVar3 = g_EdgeListMinY;
    g_HardwareEdgeTable[iVar2].y_max = iVar4;
    if (iVar5 < iVar3) {
      g_EdgeListMinY = iVar5;
    }
    if (g_EdgeListMaxY < iVar4) {
      g_EdgeListMaxY = iVar4;
    }
    g_HardwareEdgeTable[iVar2].x_current = (pSVar7->projected_vertex).screen_x;
    g_HardwareEdgeTable[iVar2].u_current = (int)pSVar7->u;
    g_HardwareEdgeTable[iVar2].v_current = (int)pSVar7->v;
    uVar6 = (vertex2->projected_vertex).screen_y - (pSVar7->projected_vertex).screen_y;
    if (uVar6 < 0x10000) {
      iVar5 = 0;
    }
    else {
      iVar5 = (int)(0xffffffff / (ulonglong)uVar6);
    }
    lVar1 = (longlong)iVar5 *
            (longlong)((vertex2->projected_vertex).screen_x - (pSVar7->projected_vertex).screen_x);
    g_HardwareEdgeTable[iVar2].x_gradient =
         (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    lVar1 = (longlong)iVar5 * (longlong)((int)vertex2->u - (int)pSVar7->u);
    g_HardwareEdgeTable[iVar2].u_gradient =
         (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    lVar1 = (longlong)iVar5 * (longlong)((int)vertex2->v - (int)pSVar7->v);
    g_HardwareEdgeTable[iVar2].v_gradient =
         (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    uVar6 = (uint)(ushort)((ushort)(pSVar7->projected_vertex).screen_y ^ 0xffff);
    lVar1 = (longlong)(int)uVar6 * (longlong)g_HardwareEdgeTable[iVar2].x_gradient;
    iVar5 = g_HardwareEdgeTable[iVar2].u_gradient;
    g_HardwareEdgeTable[iVar2].x_current =
         g_HardwareEdgeTable[iVar2].x_current +
         ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
    lVar1 = (longlong)(int)uVar6 * (longlong)iVar5;
    iVar5 = g_HardwareEdgeTable[iVar2].v_gradient;
    g_HardwareEdgeTable[iVar2].u_current =
         g_HardwareEdgeTable[iVar2].u_current +
         ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
    lVar1 = (longlong)(int)uVar6 * (longlong)iVar5;
    g_EdgeCount = g_EdgeCount + 1;
    g_HardwareEdgeTable[iVar2].v_current =
         g_HardwareEdgeTable[iVar2].v_current +
         ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
  }
  return;
}


// Assembly code:
// 004d11c0: PUSH EBX
//   Label: engine_3d.c_addPolygonEdge_FUN_004d11c0
// 004d11c1: PUSH ESI
// 004d11c2: PUSH EDI
// 004d11c3: PUSH EBP
// 004d11c4: MOV ESI,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004d11c8: MOV EDI,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 004d11cc: MOV EAX,dword ptr [EDI + 0x14]
// 004d11cf: MOV EBX,dword ptr [ESI + 0x14]
// 004d11d2: SAR EAX,0x10
// 004d11d5: SAR EBX,0x10
// 004d11d8: CMP EBX,EAX
// 004d11da: JZ 0x004d12e0
//   XREF to: 004d12e0 (CONDITIONAL_JUMP)
// 004d11e0: MOV ECX,dword ptr [EDI + 0x14]
// 004d11e3: CMP ECX,dword ptr [ESI + 0x14]
// 004d11e6: JGE 0x004d11f4
//   XREF to: 004d11f4 (CONDITIONAL_JUMP)
// 004d11e8: MOV EDX,ESI
// 004d11ea: MOV ESI,EDI
// 004d11ec: MOV EDI,EDX
// 004d11ee: MOV EDX,EBX
// 004d11f0: MOV EBX,EAX
// 004d11f2: MOV EAX,EDX
// 004d11f4: MOV ECX,dword ptr [0x02d7b428]
//   Label: LAB_004d11f4
//   XREF to: 02d7b428 (READ)
// 004d11fa: SHL ECX,0x3
// 004d11fd: MOV EDX,ECX
// 004d11ff: SHL ECX,0x3
// 004d1202: SUB ECX,EDX
// 004d1204: ADD ECX,0x2d7b42c
//   XREF to: 02d7b42c (DATA)
// 004d120a: MOV dword ptr [ECX],EBX
//   XREF to: 02d7b42c (DATA)
// 004d120c: MOV EBP,dword ptr [0x02d7b7ac]
//   XREF to: 02d7b7ac (READ)
// 004d1212: MOV dword ptr [ECX + 0x4],EAX
//   XREF to: 02d7b430 (DATA)
// 004d1215: CMP EBX,EBP
// 004d1217: JGE 0x004d121f
//   XREF to: 004d121f (CONDITIONAL_JUMP)
// 004d1219: MOV dword ptr [0x02d7b7ac],EBX
//   XREF to: 02d7b7ac (WRITE)
// 004d121f: CMP EAX,dword ptr [0x02d7b7b0]
//   Label: LAB_004d121f
//   XREF to: 02d7b7b0 (READ)
// 004d1225: JLE 0x004d122c
//   XREF to: 004d122c (CONDITIONAL_JUMP)
// 004d1227: MOV [0x02d7b7b0],EAX
//   XREF to: 02d7b7b0 (WRITE)
// 004d122c: MOV EAX,dword ptr [ESI + 0x10]
//   Label: LAB_004d122c
// 004d122f: MOV dword ptr [ECX + 0x8],EAX
//   XREF to: 02d7b434 (DATA)
// 004d1232: MOV EAX,dword ptr [ESI + 0x18]
// 004d1235: MOV dword ptr [ECX + 0x18],EAX
//   XREF to: 02d7b444 (DATA)
// 004d1238: MOV EAX,dword ptr [ESI + 0x1c]
// 004d123b: MOV dword ptr [ECX + 0x20],EAX
//   XREF to: 02d7b44c (DATA)
// 004d123e: MOV EBX,dword ptr [EDI + 0x14]
// 004d1241: SUB EBX,dword ptr [ESI + 0x14]
// 004d1244: CMP EBX,0x10000
// 004d124a: JNC 0x004d12e5
//   XREF to: 004d12e5 (CONDITIONAL_JUMP)
// 004d1250: XOR EBX,EBX
// 004d1252: MOV EAX,dword ptr [EDI + 0x10]
//   Label: LAB_004d1252
// 004d1255: MOV EDX,dword ptr [ESI + 0x10]
// 004d1258: SUB EAX,EDX
// 004d125a: MOV EDX,EAX
// 004d125c: MOV EAX,EBX
// 004d125e: IMUL EDX
// 004d1260: SHRD EAX,EDX,0x10
// 004d1264: MOV dword ptr [ECX + 0xc],EAX
//   XREF to: 02d7b438 (DATA)
// 004d1267: MOV EDX,dword ptr [EDI + 0x18]
// 004d126a: MOV EBP,dword ptr [ESI + 0x18]
// 004d126d: MOV EAX,EBX
// 004d126f: SUB EDX,EBP
// 004d1271: IMUL EDX
// 004d1273: SHRD EAX,EDX,0x10
// 004d1277: MOV dword ptr [ECX + 0x1c],EAX
//   XREF to: 02d7b448 (DATA)
// 004d127a: MOV EAX,dword ptr [EDI + 0x1c]
// 004d127d: MOV EDX,dword ptr [ESI + 0x1c]
// 004d1280: SUB EAX,EDX
// 004d1282: MOV EDX,EAX
// 004d1284: MOV EAX,EBX
// 004d1286: IMUL EDX
// 004d1288: SHRD EAX,EDX,0x10
// 004d128c: MOV dword ptr [ECX + 0x24],EAX
//   XREF to: 02d7b450 (DATA)
// 004d128f: MOV EBX,dword ptr [ESI + 0x14]
// 004d1292: AND EBX,0xffff
// 004d1298: XOR BX,0xffff
// 004d129c: MOV EDX,dword ptr [ECX + 0xc]
//   XREF to: 02d7b438 (DATA)
// 004d129f: MOV EAX,EBX
// 004d12a1: IMUL EDX
// 004d12a3: SHRD EAX,EDX,0x10
// 004d12a7: MOV ESI,dword ptr [ECX + 0x8]
//   XREF to: 02d7b434 (DATA)
// 004d12aa: MOV EDX,dword ptr [ECX + 0x1c]
//   XREF to: 02d7b448 (DATA)
// 004d12ad: ADD ESI,EAX
// 004d12af: MOV EAX,EBX
// 004d12b1: MOV dword ptr [ECX + 0x8],ESI
//   XREF to: 02d7b434 (DATA)
// 004d12b4: IMUL EDX
// 004d12b6: SHRD EAX,EDX,0x10
// 004d12ba: MOV EDI,dword ptr [ECX + 0x18]
//   XREF to: 02d7b444 (DATA)
// 004d12bd: MOV EDX,dword ptr [ECX + 0x24]
//   XREF to: 02d7b450 (DATA)
// 004d12c0: ADD EDI,EAX
// 004d12c2: MOV EAX,EBX
// 004d12c4: MOV dword ptr [ECX + 0x18],EDI
//   XREF to: 02d7b444 (DATA)
// 004d12c7: IMUL EDX
// 004d12c9: SHRD EAX,EDX,0x10
// 004d12cd: MOV EBP,dword ptr [ECX + 0x20]
//   XREF to: 02d7b44c (DATA)
// 004d12d0: ADD EBP,EAX
// 004d12d2: MOV EAX,[0x02d7b428]
//   XREF to: 02d7b428 (READ)
// 004d12d7: INC EAX
// 004d12d8: MOV dword ptr [ECX + 0x20],EBP
//   XREF to: 02d7b44c (DATA)
// 004d12db: MOV [0x02d7b428],EAX
//   XREF to: 02d7b428 (WRITE)
// 004d12e0: POP EBP
//   Label: LAB_004d12e0
// 004d12e1: POP EDI
// 004d12e2: POP ESI
// 004d12e3: POP EBX
// 004d12e4: RET
// 004d12e5: MOV EAX,0xffffffff
//   Label: LAB_004d12e5
// 004d12ea: XOR EDX,EDX
// 004d12ec: DIV EBX
// 004d12ee: MOV EBX,EAX
// 004d12f0: JMP 0x004d1252
//   XREF to: 004d1252 (UNCONDITIONAL_JUMP)
