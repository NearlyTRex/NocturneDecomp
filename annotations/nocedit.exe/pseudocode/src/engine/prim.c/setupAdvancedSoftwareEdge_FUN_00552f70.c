// Name: engine_prim.c_setupAdvancedSoftwareEdge_FUN_00552f70
// Address: 00552f70
// Address Range: [[00552f70, 00553182]]
// Convention: __cdecl
// Signature: void engine_prim.c_setupAdvancedSoftwareEdge_FUN_00552f70(SRenderVertex * start_vertex, SRenderVertex * end_vertex)
// Globals:
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
//   int g_MinScanline
//   int g_MaxScanline

#include "nocturne.h"

void __cdecl
engine_prim_c_setupAdvancedSoftwareEdge_FUN_00552f70
          (SRenderVertex *start_vertex,SRenderVertex *end_vertex)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  SRenderVertex *pSVar6;
  int iVar7;
  uint uVar8;
  
  iVar2 = g_ActiveEdgeCount;
  iVar3 = (end_vertex->projected_vertex).screen_y >> 0x10;
  iVar7 = (start_vertex->projected_vertex).screen_y >> 0x10;
  if (iVar7 != iVar3) {
    iVar4 = iVar3;
    pSVar6 = end_vertex;
    if ((end_vertex->projected_vertex).screen_y < (start_vertex->projected_vertex).screen_y) {
      iVar4 = iVar7;
      pSVar6 = start_vertex;
      start_vertex = end_vertex;
      iVar7 = iVar3;
    }
    g_SoftwareEdgeTable[g_ActiveEdgeCount].y_min = iVar7;
    iVar3 = g_MinScanline;
    g_SoftwareEdgeTable[iVar2].y_max = iVar4;
    if (iVar7 < iVar3) {
      g_MinScanline = iVar7;
    }
    if (g_MaxScanline < iVar4) {
      g_MaxScanline = iVar4;
    }
    uVar5 = (pSVar6->projected_vertex).screen_y - (start_vertex->projected_vertex).screen_y;
    if (uVar5 < 0x10000) {
      iVar7 = 0;
    }
    else {
      iVar7 = (int)(0xffffffff / (ulonglong)uVar5);
    }
    uVar8 = (uint)(ushort)((ushort)(start_vertex->projected_vertex).screen_y ^ 0xffff);
    lVar1 = (longlong)iVar7 *
            (longlong)
            ((pSVar6->projected_vertex).screen_x - (start_vertex->projected_vertex).screen_x);
    uVar5 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    g_SoftwareEdgeTable[iVar2].x_gradient = uVar5;
    lVar1 = (longlong)(int)uVar8 * (longlong)(int)uVar5;
    g_SoftwareEdgeTable[iVar2].x_current =
         (start_vertex->projected_vertex).screen_x +
         ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
    lVar1 = (longlong)iVar7 * (longlong)((int)pSVar6->u - (int)start_vertex->u);
    uVar5 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    g_SoftwareEdgeTable[iVar2].u_gradient = uVar5;
    lVar1 = (longlong)(int)uVar8 * (longlong)(int)uVar5;
    g_SoftwareEdgeTable[iVar2].u_current =
         (int)start_vertex->u + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
    lVar1 = (longlong)iVar7 * (longlong)((int)pSVar6->v - (int)start_vertex->v);
    uVar5 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    g_SoftwareEdgeTable[iVar2].v_gradient = uVar5;
    lVar1 = (longlong)(int)uVar8 * (longlong)(int)uVar5;
    g_SoftwareEdgeTable[iVar2].v_current =
         (int)start_vertex->v + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
    lVar1 = (longlong)iVar7 * (longlong)((int)pSVar6->light - (int)start_vertex->light);
    uVar5 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    g_SoftwareEdgeTable[iVar2].z_gradient = uVar5;
    lVar1 = (longlong)(int)uVar8 * (longlong)(int)uVar5;
    g_SoftwareEdgeTable[iVar2].z_current =
         (int)start_vertex->light + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
    lVar1 = (longlong)iVar7 * (longlong)((int)pSVar6->w_recip - (int)start_vertex->w_recip);
    uVar5 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    g_SoftwareEdgeTable[iVar2].fog_gradient = uVar5;
    lVar1 = (longlong)(int)uVar8 * (longlong)(int)uVar5;
    g_SoftwareEdgeTable[iVar2].fog_current =
         (int)start_vertex->w_recip +
         ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
    lVar1 = (longlong)iVar7 *
            (longlong)
            ((pSVar6->projected_vertex).transformed_z -
            (start_vertex->projected_vertex).transformed_z);
    uVar5 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    g_SoftwareEdgeTable[iVar2].w_gradient = uVar5;
    lVar1 = (longlong)(int)uVar8 * (longlong)(int)uVar5;
    g_SoftwareEdgeTable[iVar2].w_current =
         (start_vertex->projected_vertex).transformed_z +
         ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
    lVar1 = (longlong)iVar7 * (longlong)(pSVar6->color - start_vertex->color);
    uVar5 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    g_SoftwareEdgeTable[iVar2].r_gradient = uVar5;
    lVar1 = (longlong)(int)uVar8 * (longlong)(int)uVar5;
    g_SoftwareEdgeTable[iVar2].r_current =
         start_vertex->color + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
    lVar1 = (longlong)iVar7 * (longlong)((int)pSVar6->fog - (int)start_vertex->fog);
    uVar5 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    g_SoftwareEdgeTable[iVar2].g_gradient = uVar5;
    lVar1 = (longlong)(int)uVar8 * (longlong)(int)uVar5;
    g_SoftwareEdgeTable[iVar2].g_current =
         (int)start_vertex->fog + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
    g_ActiveEdgeCount = g_ActiveEdgeCount + 1;
  }
  return;
}


// Assembly code:
// 00552f70: PUSH EBX
//   Label: engine_prim.c_setupAdvancedSoftwareEdge_FUN_00552f70
// 00552f71: PUSH ESI
// 00552f72: PUSH EDI
// 00552f73: PUSH EBP
// 00552f74: SUB ESP,0x4
// 00552f77: MOV ESI,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x4] (READ)
// 00552f7b: MOV EBP,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x8] (READ)
// 00552f7f: MOV EBX,dword ptr [EBP + 0x14]
// 00552f82: MOV EDI,dword ptr [ESI + 0x14]
// 00552f85: SAR EBX,0x10
// 00552f88: SAR EDI,0x10
// 00552f8b: CMP EDI,EBX
// 00552f8d: JZ 0x0055316b
//   XREF to: 0055316b (CONDITIONAL_JUMP)
// 00552f93: MOV EDX,dword ptr [EBP + 0x14]
// 00552f96: CMP EDX,dword ptr [ESI + 0x14]
// 00552f99: JGE 0x00552fa7
//   XREF to: 00552fa7 (CONDITIONAL_JUMP)
// 00552f9b: MOV EAX,ESI
// 00552f9d: MOV ESI,EBP
// 00552f9f: MOV EBP,EAX
// 00552fa1: MOV EAX,EDI
// 00552fa3: MOV EDI,EBX
// 00552fa5: MOV EBX,EAX
// 00552fa7: MOV EAX,[0x030e56bc]
//   Label: LAB_00552fa7
//   XREF to: 030e56bc (READ)
// 00552fac: LEA ECX,[EAX*0x8 + 0x0]
// 00552fb3: ADD ECX,EAX
// 00552fb5: SHL ECX,0x3
// 00552fb8: ADD ECX,0x30e56c0
//   XREF to: 030e56c0 (DATA)
// 00552fbe: MOV dword ptr [ECX],EDI
//   XREF to: 030e56c0 (DATA)
// 00552fc0: MOV EAX,[0x030e5b40]
//   XREF to: 030e5b40 (READ)
// 00552fc5: MOV dword ptr [ECX + 0x4],EBX
//   XREF to: 030e56c4 (DATA)
// 00552fc8: CMP EDI,EAX
// 00552fca: JGE 0x00552fd2
//   XREF to: 00552fd2 (CONDITIONAL_JUMP)
// 00552fcc: MOV dword ptr [0x030e5b40],EDI
//   XREF to: 030e5b40 (WRITE)
// 00552fd2: CMP EBX,dword ptr [0x030e5b44]
//   Label: LAB_00552fd2
//   XREF to: 030e5b44 (READ)
// 00552fd8: JLE 0x00552fe0
//   XREF to: 00552fe0 (CONDITIONAL_JUMP)
// 00552fda: MOV dword ptr [0x030e5b44],EBX
//   XREF to: 030e5b44 (WRITE)
// 00552fe0: MOV EDI,dword ptr [ESI + 0x14]
//   Label: LAB_00552fe0
// 00552fe3: MOV EBX,dword ptr [EBP + 0x14]
// 00552fe6: SUB EBX,EDI
// 00552fe8: CMP EBX,0x10000
// 00552fee: JNC 0x00553173
//   XREF to: 00553173 (CONDITIONAL_JUMP)
// 00552ff4: XOR EBX,EBX
// 00552ff6: MOV EAX,dword ptr [EBP + 0x10]
//   Label: LAB_00552ff6
// 00552ff9: MOV EDX,dword ptr [ESI + 0x10]
// 00552ffc: MOV EDI,dword ptr [ESI + 0x14]
// 00552fff: SUB EAX,EDX
// 00553001: AND EDI,0xffff
// 00553007: MOV EDX,EAX
// 00553009: MOV EAX,EBX
// 0055300b: XOR DI,0xffff
// 0055300f: IMUL EDX
// 00553011: SHRD EAX,EDX,0x10
// 00553015: MOV EDX,EAX
// 00553017: MOV dword ptr [ECX + 0xc],EAX
//   XREF to: 030e56cc (DATA)
// 0055301a: MOV EAX,EDI
// 0055301c: IMUL EDX
// 0055301e: SHRD EAX,EDX,0x10
// 00553022: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x14] (DATA)
// 00553025: MOV EDX,dword ptr [ESP]
//   XREF to: Stack[-0x14] (DATA)
// 00553028: MOV EAX,dword ptr [ESI + 0x10]
// 0055302b: ADD EAX,EDX
// 0055302d: MOV dword ptr [ECX + 0x8],EAX
//   XREF to: 030e56c8 (DATA)
// 00553030: MOV EAX,dword ptr [EBP + 0x18]
// 00553033: MOV EDX,dword ptr [ESI + 0x18]
// 00553036: SUB EAX,EDX
// 00553038: MOV EDX,EAX
// 0055303a: MOV EAX,EBX
// 0055303c: IMUL EDX
// 0055303e: SHRD EAX,EDX,0x10
// 00553042: MOV EDX,EAX
// 00553044: MOV dword ptr [ECX + 0x1c],EAX
//   XREF to: 030e56dc (DATA)
// 00553047: MOV EAX,EDI
// 00553049: IMUL EDX
// 0055304b: SHRD EAX,EDX,0x10
// 0055304f: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x14] (DATA)
// 00553052: MOV EDX,dword ptr [ESP]
//   XREF to: Stack[-0x14] (DATA)
// 00553055: MOV EAX,dword ptr [ESI + 0x18]
// 00553058: ADD EAX,EDX
// 0055305a: MOV dword ptr [ECX + 0x18],EAX
//   XREF to: 030e56d8 (DATA)
// 0055305d: MOV EAX,dword ptr [EBP + 0x1c]
// 00553060: MOV EDX,dword ptr [ESI + 0x1c]
// 00553063: SUB EAX,EDX
// 00553065: MOV EDX,EAX
// 00553067: MOV EAX,EBX
// 00553069: IMUL EDX
// 0055306b: SHRD EAX,EDX,0x10
// 0055306f: MOV EDX,EAX
// 00553071: MOV dword ptr [ECX + 0x24],EAX
//   XREF to: 030e56e4 (DATA)
// 00553074: MOV EAX,EDI
// 00553076: IMUL EDX
// 00553078: SHRD EAX,EDX,0x10
// 0055307c: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x14] (DATA)
// 0055307f: MOV EDX,dword ptr [ESP]
//   XREF to: Stack[-0x14] (DATA)
// 00553082: MOV EAX,dword ptr [ESI + 0x1c]
// 00553085: ADD EAX,EDX
// 00553087: MOV dword ptr [ECX + 0x20],EAX
//   XREF to: 030e56e0 (DATA)
// 0055308a: MOV EAX,dword ptr [EBP + 0x20]
// 0055308d: MOV EDX,dword ptr [ESI + 0x20]
// 00553090: SUB EAX,EDX
// 00553092: MOV EDX,EAX
// 00553094: MOV EAX,EBX
// 00553096: IMUL EDX
// 00553098: SHRD EAX,EDX,0x10
// 0055309c: MOV EDX,EAX
// 0055309e: MOV dword ptr [ECX + 0x14],EAX
//   XREF to: 030e56d4 (DATA)
// 005530a1: MOV EAX,EDI
// 005530a3: IMUL EDX
// 005530a5: SHRD EAX,EDX,0x10
// 005530a9: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x14] (DATA)
// 005530ac: MOV EDX,dword ptr [ESP]
//   XREF to: Stack[-0x14] (DATA)
// 005530af: MOV EAX,dword ptr [ESI + 0x20]
// 005530b2: ADD EAX,EDX
// 005530b4: MOV dword ptr [ECX + 0x10],EAX
//   XREF to: 030e56d0 (DATA)
// 005530b7: MOV EAX,dword ptr [EBP + 0x2c]
// 005530ba: MOV EDX,dword ptr [ESI + 0x2c]
// 005530bd: SUB EAX,EDX
// 005530bf: MOV EDX,EAX
// 005530c1: MOV EAX,EBX
// 005530c3: IMUL EDX
// 005530c5: SHRD EAX,EDX,0x10
// 005530c9: MOV EDX,EAX
// 005530cb: MOV dword ptr [ECX + 0x34],EAX
//   XREF to: 030e56f4 (DATA)
// 005530ce: MOV EAX,EDI
// 005530d0: IMUL EDX
// 005530d2: SHRD EAX,EDX,0x10
// 005530d6: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x14] (DATA)
// 005530d9: MOV EDX,dword ptr [ESP]
//   XREF to: Stack[-0x14] (DATA)
// 005530dc: MOV EAX,dword ptr [ESI + 0x2c]
// 005530df: ADD EAX,EDX
// 005530e1: MOV dword ptr [ECX + 0x30],EAX
//   XREF to: 030e56f0 (DATA)
// 005530e4: MOV EAX,dword ptr [EBP + 0x8]
// 005530e7: MOV EDX,dword ptr [ESI + 0x8]
// 005530ea: SUB EAX,EDX
// 005530ec: MOV EDX,EAX
// 005530ee: MOV EAX,EBX
// 005530f0: IMUL EDX
// 005530f2: SHRD EAX,EDX,0x10
// 005530f6: MOV EDX,EAX
// 005530f8: MOV dword ptr [ECX + 0x2c],EAX
//   XREF to: 030e56ec (DATA)
// 005530fb: MOV EAX,EDI
// 005530fd: IMUL EDX
// 005530ff: SHRD EAX,EDX,0x10
// 00553103: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x14] (DATA)
// 00553106: MOV EDX,dword ptr [ESP]
//   XREF to: Stack[-0x14] (DATA)
// 00553109: MOV EAX,dword ptr [ESI + 0x8]
// 0055310c: ADD EAX,EDX
// 0055310e: MOV dword ptr [ECX + 0x28],EAX
//   XREF to: 030e56e8 (DATA)
// 00553111: MOV EAX,dword ptr [EBP + 0x24]
// 00553114: MOV EDX,dword ptr [ESI + 0x24]
// 00553117: SUB EAX,EDX
// 00553119: MOV EDX,EAX
// 0055311b: MOV EAX,EBX
// 0055311d: IMUL EDX
// 0055311f: SHRD EAX,EDX,0x10
// 00553123: MOV EDX,EAX
// 00553125: MOV dword ptr [ECX + 0x3c],EAX
//   XREF to: 030e56fc (DATA)
// 00553128: MOV EAX,EDI
// 0055312a: IMUL EDX
// 0055312c: SHRD EAX,EDX,0x10
// 00553130: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x14] (DATA)
// 00553133: MOV EDX,dword ptr [ESP]
//   XREF to: Stack[-0x14] (DATA)
// 00553136: MOV EAX,dword ptr [ESI + 0x24]
// 00553139: ADD EAX,EDX
// 0055313b: MOV dword ptr [ECX + 0x38],EAX
//   XREF to: 030e56f8 (DATA)
// 0055313e: MOV EDX,dword ptr [EBP + 0x28]
// 00553141: MOV EBP,dword ptr [ESI + 0x28]
// 00553144: MOV EAX,EBX
// 00553146: SUB EDX,EBP
// 00553148: IMUL EDX
// 0055314a: SHRD EAX,EDX,0x10
// 0055314e: MOV EDX,EAX
// 00553150: MOV dword ptr [ECX + 0x44],EAX
//   XREF to: 030e5704 (DATA)
// 00553153: MOV EAX,EDI
// 00553155: IMUL EDX
// 00553157: SHRD EAX,EDX,0x10
// 0055315b: MOV EDX,EAX
// 0055315d: MOV EAX,dword ptr [ESI + 0x28]
// 00553160: ADD EAX,EDX
// 00553162: MOV dword ptr [ECX + 0x40],EAX
//   XREF to: 030e5700 (DATA)
// 00553165: INC dword ptr [0x030e56bc]
//   XREF to: 030e56bc (READ_WRITE)
// 0055316b: ADD ESP,0x4
//   Label: LAB_0055316b
// 0055316e: POP EBP
// 0055316f: POP EDI
// 00553170: POP ESI
// 00553171: POP EBX
// 00553172: RET
// 00553173: MOV EAX,0xffffffff
//   Label: LAB_00553173
// 00553178: XOR EDX,EDX
// 0055317a: DIV EBX
// 0055317c: MOV EBX,EAX
// 0055317e: JMP 0x00552ff6
//   XREF to: 00552ff6 (UNCONDITIONAL_JUMP)
