// Name: engine_prim.c_setupBasicSoftwareEdge_FUN_00551ba0
// Address: 00551ba0
// Address Range: [[00551ba0, 00551d5b]]
// Convention: __cdecl
// Signature: void engine_prim.c_setupBasicSoftwareEdge_FUN_00551ba0(SRenderVertex * start_vertex, SRenderVertex * end_vertex)
// Globals:
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

#include "nocturne.h"

void __cdecl
engine_prim_c_setupBasicSoftwareEdge_FUN_00551ba0
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
  
  iVar2 = g_SoftwareEdgeCount;
  iVar7 = (end_vertex->projected_vertex).screen_y >> 0x10;
  iVar3 = (start_vertex->projected_vertex).screen_y >> 0x10;
  if (iVar3 != iVar7) {
    iVar4 = iVar3;
    pSVar6 = end_vertex;
    if ((end_vertex->projected_vertex).screen_y < (start_vertex->projected_vertex).screen_y) {
      iVar4 = iVar7;
      pSVar6 = start_vertex;
      start_vertex = end_vertex;
      iVar7 = iVar3;
    }
    g_SoftwareEdgeBuffer[g_SoftwareEdgeCount].y_min = iVar4;
    iVar3 = g_SoftwareMinScanline;
    g_SoftwareEdgeBuffer[iVar2].y_max = iVar7;
    if (iVar4 < iVar3) {
      g_SoftwareMinScanline = iVar4;
    }
    if (g_SoftwareMaxScanline < iVar7) {
      g_SoftwareMaxScanline = iVar7;
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
    g_SoftwareEdgeBuffer[iVar2].x_gradient = uVar5;
    lVar1 = (longlong)(int)uVar8 * (longlong)(int)uVar5;
    g_SoftwareEdgeBuffer[iVar2].x_current =
         (start_vertex->projected_vertex).screen_x +
         ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
    lVar1 = (longlong)iVar7 * (longlong)((int)pSVar6->u - (int)start_vertex->u);
    uVar5 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    g_SoftwareEdgeBuffer[iVar2].u_gradient = uVar5;
    lVar1 = (longlong)(int)uVar8 * (longlong)(int)uVar5;
    g_SoftwareEdgeBuffer[iVar2].u_current =
         (int)start_vertex->u + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
    lVar1 = (longlong)iVar7 * (longlong)((int)pSVar6->v - (int)start_vertex->v);
    uVar5 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    g_SoftwareEdgeBuffer[iVar2].v_gradient = uVar5;
    lVar1 = (longlong)(int)uVar8 * (longlong)(int)uVar5;
    g_SoftwareEdgeBuffer[iVar2].v_current =
         (int)start_vertex->v + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
    lVar1 = (longlong)iVar7 * (longlong)((int)pSVar6->light - (int)start_vertex->light);
    uVar5 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    g_SoftwareEdgeBuffer[iVar2].z_gradient = uVar5;
    lVar1 = (longlong)(int)uVar8 * (longlong)(int)uVar5;
    g_SoftwareEdgeBuffer[iVar2].z_current =
         (int)start_vertex->light + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
    lVar1 = (longlong)iVar7 * (longlong)((int)pSVar6->w_recip - (int)start_vertex->w_recip);
    uVar5 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    g_SoftwareEdgeBuffer[iVar2].fog_gradient = uVar5;
    lVar1 = (longlong)(int)uVar8 * (longlong)(int)uVar5;
    g_SoftwareEdgeBuffer[iVar2].fog_current =
         (int)start_vertex->w_recip +
         ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
    lVar1 = (longlong)iVar7 *
            (longlong)
            ((pSVar6->projected_vertex).transformed_z -
            (start_vertex->projected_vertex).transformed_z);
    uVar5 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    g_SoftwareEdgeBuffer[iVar2].w_gradient = uVar5;
    lVar1 = (longlong)(int)uVar8 * (longlong)(int)uVar5;
    g_SoftwareEdgeCount = g_SoftwareEdgeCount + 1;
    g_SoftwareEdgeBuffer[iVar2].w_current =
         (start_vertex->projected_vertex).transformed_z +
         ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
  }
  return;
}


// Assembly code:
// 00551ba0: PUSH EBX
//   Label: engine_prim.c_setupBasicSoftwareEdge_FUN_00551ba0
// 00551ba1: PUSH ESI
// 00551ba2: PUSH EDI
// 00551ba3: PUSH EBP
// 00551ba4: SUB ESP,0x4
// 00551ba7: MOV ESI,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x4] (READ)
// 00551bab: MOV EBP,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x8] (READ)
// 00551baf: MOV EDI,dword ptr [EBP + 0x14]
// 00551bb2: MOV EBX,dword ptr [ESI + 0x14]
// 00551bb5: SAR EDI,0x10
// 00551bb8: SAR EBX,0x10
// 00551bbb: CMP EBX,EDI
// 00551bbd: JZ 0x00551d44
//   XREF to: 00551d44 (CONDITIONAL_JUMP)
// 00551bc3: MOV EDX,dword ptr [EBP + 0x14]
// 00551bc6: CMP EDX,dword ptr [ESI + 0x14]
// 00551bc9: JGE 0x00551bd7
//   XREF to: 00551bd7 (CONDITIONAL_JUMP)
// 00551bcb: MOV EAX,ESI
// 00551bcd: MOV ESI,EBP
// 00551bcf: MOV EBP,EAX
// 00551bd1: MOV EAX,EBX
// 00551bd3: MOV EBX,EDI
// 00551bd5: MOV EDI,EAX
// 00551bd7: MOV EAX,[0x030e5228]
//   Label: LAB_00551bd7
//   XREF to: 030e5228 (READ)
// 00551bdc: LEA ECX,[EAX*0x8 + 0x0]
// 00551be3: ADD ECX,EAX
// 00551be5: SHL ECX,0x3
// 00551be8: ADD ECX,0x30e522c
//   XREF to: 030e522c (DATA)
// 00551bee: MOV dword ptr [ECX],EBX
//   XREF to: 030e522c (DATA)
// 00551bf0: MOV EAX,[0x030e56ac]
//   XREF to: 030e56ac (READ)
// 00551bf5: MOV dword ptr [ECX + 0x4],EDI
//   XREF to: 030e5230 (DATA)
// 00551bf8: CMP EBX,EAX
// 00551bfa: JGE 0x00551c02
//   XREF to: 00551c02 (CONDITIONAL_JUMP)
// 00551bfc: MOV dword ptr [0x030e56ac],EBX
//   XREF to: 030e56ac (WRITE)
// 00551c02: CMP EDI,dword ptr [0x030e56b0]
//   Label: LAB_00551c02
//   XREF to: 030e56b0 (READ)
// 00551c08: JLE 0x00551c10
//   XREF to: 00551c10 (CONDITIONAL_JUMP)
// 00551c0a: MOV dword ptr [0x030e56b0],EDI
//   XREF to: 030e56b0 (WRITE)
// 00551c10: MOV EDI,dword ptr [ESI + 0x14]
//   Label: LAB_00551c10
// 00551c13: MOV EBX,dword ptr [EBP + 0x14]
// 00551c16: SUB EBX,EDI
// 00551c18: CMP EBX,0x10000
// 00551c1e: JNC 0x00551d4c
//   XREF to: 00551d4c (CONDITIONAL_JUMP)
// 00551c24: XOR EBX,EBX
// 00551c26: MOV EAX,dword ptr [EBP + 0x10]
//   Label: LAB_00551c26
// 00551c29: MOV EDX,dword ptr [ESI + 0x10]
// 00551c2c: MOV EDI,dword ptr [ESI + 0x14]
// 00551c2f: SUB EAX,EDX
// 00551c31: AND EDI,0xffff
// 00551c37: MOV EDX,EAX
// 00551c39: MOV EAX,EBX
// 00551c3b: XOR DI,0xffff
// 00551c3f: IMUL EDX
// 00551c41: SHRD EAX,EDX,0x10
// 00551c45: MOV EDX,EAX
// 00551c47: MOV dword ptr [ECX + 0xc],EAX
//   XREF to: 030e5238 (DATA)
// 00551c4a: MOV EAX,EDI
// 00551c4c: IMUL EDX
// 00551c4e: SHRD EAX,EDX,0x10
// 00551c52: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x14] (DATA)
// 00551c55: MOV EDX,dword ptr [ESP]
//   XREF to: Stack[-0x14] (DATA)
// 00551c58: MOV EAX,dword ptr [ESI + 0x10]
// 00551c5b: ADD EAX,EDX
// 00551c5d: MOV dword ptr [ECX + 0x8],EAX
//   XREF to: 030e5234 (DATA)
// 00551c60: MOV EAX,dword ptr [EBP + 0x18]
// 00551c63: MOV EDX,dword ptr [ESI + 0x18]
// 00551c66: SUB EAX,EDX
// 00551c68: MOV EDX,EAX
// 00551c6a: MOV EAX,EBX
// 00551c6c: IMUL EDX
// 00551c6e: SHRD EAX,EDX,0x10
// 00551c72: MOV EDX,EAX
// 00551c74: MOV dword ptr [ECX + 0x1c],EAX
//   XREF to: 030e5248 (DATA)
// 00551c77: MOV EAX,EDI
// 00551c79: IMUL EDX
// 00551c7b: SHRD EAX,EDX,0x10
// 00551c7f: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x14] (DATA)
// 00551c82: MOV EDX,dword ptr [ESP]
//   XREF to: Stack[-0x14] (DATA)
// 00551c85: MOV EAX,dword ptr [ESI + 0x18]
// 00551c88: ADD EAX,EDX
// 00551c8a: MOV dword ptr [ECX + 0x18],EAX
//   XREF to: 030e5244 (DATA)
// 00551c8d: MOV EAX,dword ptr [EBP + 0x1c]
// 00551c90: MOV EDX,dword ptr [ESI + 0x1c]
// 00551c93: SUB EAX,EDX
// 00551c95: MOV EDX,EAX
// 00551c97: MOV EAX,EBX
// 00551c99: IMUL EDX
// 00551c9b: SHRD EAX,EDX,0x10
// 00551c9f: MOV EDX,EAX
// 00551ca1: MOV dword ptr [ECX + 0x24],EAX
//   XREF to: 030e5250 (DATA)
// 00551ca4: MOV EAX,EDI
// 00551ca6: IMUL EDX
// 00551ca8: SHRD EAX,EDX,0x10
// 00551cac: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x14] (DATA)
// 00551caf: MOV EDX,dword ptr [ESP]
//   XREF to: Stack[-0x14] (DATA)
// 00551cb2: MOV EAX,dword ptr [ESI + 0x1c]
// 00551cb5: ADD EAX,EDX
// 00551cb7: MOV dword ptr [ECX + 0x20],EAX
//   XREF to: 030e524c (DATA)
// 00551cba: MOV EAX,dword ptr [EBP + 0x20]
// 00551cbd: MOV EDX,dword ptr [ESI + 0x20]
// 00551cc0: SUB EAX,EDX
// 00551cc2: MOV EDX,EAX
// 00551cc4: MOV EAX,EBX
// 00551cc6: IMUL EDX
// 00551cc8: SHRD EAX,EDX,0x10
// 00551ccc: MOV EDX,EAX
// 00551cce: MOV dword ptr [ECX + 0x14],EAX
//   XREF to: 030e5240 (DATA)
// 00551cd1: MOV EAX,EDI
// 00551cd3: IMUL EDX
// 00551cd5: SHRD EAX,EDX,0x10
// 00551cd9: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x14] (DATA)
// 00551cdc: MOV EDX,dword ptr [ESP]
//   XREF to: Stack[-0x14] (DATA)
// 00551cdf: MOV EAX,dword ptr [ESI + 0x20]
// 00551ce2: ADD EAX,EDX
// 00551ce4: MOV dword ptr [ECX + 0x10],EAX
//   XREF to: 030e523c (DATA)
// 00551ce7: MOV EAX,dword ptr [EBP + 0x2c]
// 00551cea: MOV EDX,dword ptr [ESI + 0x2c]
// 00551ced: SUB EAX,EDX
// 00551cef: MOV EDX,EAX
// 00551cf1: MOV EAX,EBX
// 00551cf3: IMUL EDX
// 00551cf5: SHRD EAX,EDX,0x10
// 00551cf9: MOV EDX,EAX
// 00551cfb: MOV dword ptr [ECX + 0x34],EAX
//   XREF to: 030e5260 (DATA)
// 00551cfe: MOV EAX,EDI
// 00551d00: IMUL EDX
// 00551d02: SHRD EAX,EDX,0x10
// 00551d06: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x14] (DATA)
// 00551d09: MOV EDX,dword ptr [ESP]
//   XREF to: Stack[-0x14] (DATA)
// 00551d0c: MOV EAX,dword ptr [ESI + 0x2c]
// 00551d0f: ADD EAX,EDX
// 00551d11: MOV dword ptr [ECX + 0x30],EAX
//   XREF to: 030e525c (DATA)
// 00551d14: MOV EDX,dword ptr [EBP + 0x8]
// 00551d17: SUB EDX,dword ptr [ESI + 0x8]
// 00551d1a: MOV EAX,EBX
// 00551d1c: IMUL EDX
// 00551d1e: SHRD EAX,EDX,0x10
// 00551d22: MOV EDX,EAX
// 00551d24: MOV dword ptr [ECX + 0x2c],EAX
//   XREF to: 030e5258 (DATA)
// 00551d27: MOV EAX,EDI
// 00551d29: IMUL EDX
// 00551d2b: SHRD EAX,EDX,0x10
// 00551d2f: MOV EDX,dword ptr [0x030e5228]
//   XREF to: 030e5228 (READ)
// 00551d35: MOV EBX,dword ptr [ESI + 0x8]
// 00551d38: INC EDX
// 00551d39: ADD EBX,EAX
// 00551d3b: MOV dword ptr [0x030e5228],EDX
//   XREF to: 030e5228 (WRITE)
// 00551d41: MOV dword ptr [ECX + 0x28],EBX
//   XREF to: 030e5254 (DATA)
// 00551d44: ADD ESP,0x4
//   Label: LAB_00551d44
// 00551d47: POP EBP
// 00551d48: POP EDI
// 00551d49: POP ESI
// 00551d4a: POP EBX
// 00551d4b: RET
// 00551d4c: MOV EAX,0xffffffff
//   Label: LAB_00551d4c
// 00551d51: XOR EDX,EDX
// 00551d53: DIV EBX
// 00551d55: MOV EBX,EAX
// 00551d57: JMP 0x00551c26
//   XREF to: 00551c26 (UNCONDITIONAL_JUMP)
