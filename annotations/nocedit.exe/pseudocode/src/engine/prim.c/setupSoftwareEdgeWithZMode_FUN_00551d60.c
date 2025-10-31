// Name: engine_prim.c_setupSoftwareEdgeWithZMode_FUN_00551d60
// Address: 00551d60
// Address Range: [[00551d60, 00551f6f]]
// Convention: __cdecl
// Signature: void engine_prim.c_setupSoftwareEdgeWithZMode_FUN_00551d60(SRenderVertex * start_vertex, SRenderVertex * end_vertex)
// Globals:
//   int g_ProcessorType
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

#include "nocturne.h"

void __cdecl
engine_prim_c_setupSoftwareEdgeWithZMode_FUN_00551d60
          (SRenderVertex *start_vertex,SRenderVertex *end_vertex)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  SRenderVertex *pSVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  
  iVar2 = g_SoftwareEdgeCount;
  iVar3 = (end_vertex->projected_vertex).screen_y >> 0x10;
  iVar7 = (start_vertex->projected_vertex).screen_y >> 0x10;
  if (iVar7 != iVar3) {
    iVar6 = iVar3;
    pSVar5 = end_vertex;
    if ((end_vertex->projected_vertex).screen_y < (start_vertex->projected_vertex).screen_y) {
      iVar6 = iVar7;
      pSVar5 = start_vertex;
      start_vertex = end_vertex;
      iVar7 = iVar3;
    }
    g_SoftwareEdgeBuffer[g_SoftwareEdgeCount].y_min = iVar7;
    iVar3 = g_SoftwareMinScanline;
    g_SoftwareEdgeBuffer[iVar2].y_max = iVar6;
    if (iVar7 < iVar3) {
      g_SoftwareMinScanline = iVar7;
    }
    if (g_SoftwareMaxScanline < iVar6) {
      g_SoftwareMaxScanline = iVar6;
    }
    uVar4 = (pSVar5->projected_vertex).screen_y - (start_vertex->projected_vertex).screen_y;
    if (uVar4 < 0x10000) {
      iVar7 = 0;
    }
    else {
      iVar7 = (int)(0xffffffff / (ulonglong)uVar4);
    }
    uVar8 = (uint)(ushort)((ushort)(start_vertex->projected_vertex).screen_y ^ 0xffff);
    lVar1 = (longlong)iVar7 *
            (longlong)
            ((pSVar5->projected_vertex).screen_x - (start_vertex->projected_vertex).screen_x);
    uVar4 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    g_SoftwareEdgeBuffer[iVar2].x_gradient = uVar4;
    lVar1 = (longlong)(int)uVar8 * (longlong)(int)uVar4;
    g_SoftwareEdgeBuffer[iVar2].x_current =
         (start_vertex->projected_vertex).screen_x +
         ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
    lVar1 = (longlong)iVar7 * (longlong)((int)pSVar5->u - (int)start_vertex->u);
    uVar4 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    g_SoftwareEdgeBuffer[iVar2].u_gradient = uVar4;
    lVar1 = (longlong)(int)uVar8 * (longlong)(int)uVar4;
    g_SoftwareEdgeBuffer[iVar2].u_current =
         (int)start_vertex->u + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
    lVar1 = (longlong)iVar7 * (longlong)((int)pSVar5->v - (int)start_vertex->v);
    uVar4 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    g_SoftwareEdgeBuffer[iVar2].v_gradient = uVar4;
    lVar1 = (longlong)(int)uVar8 * (longlong)(int)uVar4;
    g_SoftwareEdgeBuffer[iVar2].v_current =
         (int)start_vertex->v + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
    lVar1 = (longlong)iVar7 * (longlong)((int)pSVar5->light - (int)start_vertex->light);
    uVar4 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    g_SoftwareEdgeBuffer[iVar2].z_gradient = uVar4;
    lVar1 = (longlong)(int)uVar8 * (longlong)(int)uVar4;
    g_SoftwareEdgeBuffer[iVar2].z_current =
         (int)start_vertex->light + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
    lVar1 = (longlong)iVar7 * (longlong)((int)pSVar5->w_recip - (int)start_vertex->w_recip);
    uVar4 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    g_SoftwareEdgeBuffer[iVar2].fog_gradient = uVar4;
    lVar1 = (longlong)(int)uVar8 * (longlong)(int)uVar4;
    g_SoftwareEdgeBuffer[iVar2].fog_current =
         (int)start_vertex->w_recip +
         ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
    if (g_RenderStateFlag2 != 1) {
      lVar1 = (longlong)iVar7 *
              (longlong)
              ((pSVar5->projected_vertex).transformed_z -
              (start_vertex->projected_vertex).transformed_z);
      uVar4 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
      g_SoftwareEdgeBuffer[iVar2].w_gradient = uVar4;
      lVar1 = (longlong)(int)uVar8 * (longlong)(int)uVar4;
      g_SoftwareEdgeBuffer[iVar2].w_current =
           (start_vertex->projected_vertex).transformed_z +
           ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
      g_SoftwareEdgeCount = g_SoftwareEdgeCount + 1;
      return;
    }
    if (g_ProcessorType == 0) {
      iVar3 = (pSVar5->projected_vertex).inv_z;
      iVar6 = (start_vertex->projected_vertex).inv_z;
    }
    else {
      iVar6 = 0x7fffffff - (start_vertex->projected_vertex).transformed_z;
      iVar3 = 0x7fffffff - (pSVar5->projected_vertex).transformed_z;
    }
    lVar1 = (longlong)iVar7 * (longlong)(iVar3 - iVar6);
    uVar4 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    g_SoftwareEdgeBuffer[iVar2].w_gradient = uVar4;
    lVar1 = (longlong)(int)uVar8 * (longlong)(int)uVar4;
    g_SoftwareEdgeBuffer[iVar2].w_current =
         iVar6 + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
    g_SoftwareEdgeCount = g_SoftwareEdgeCount + 1;
  }
  return;
}


// Assembly code:
// 00551d60: PUSH EBX
//   Label: engine_prim.c_setupSoftwareEdgeWithZMode_FUN_00551d60
// 00551d61: PUSH ESI
// 00551d62: PUSH EDI
// 00551d63: PUSH EBP
// 00551d64: SUB ESP,0x4
// 00551d67: MOV ESI,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x4] (READ)
// 00551d6b: MOV EBP,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x8] (READ)
// 00551d6f: MOV EBX,dword ptr [EBP + 0x14]
// 00551d72: MOV EDI,dword ptr [ESI + 0x14]
// 00551d75: SAR EBX,0x10
// 00551d78: SAR EDI,0x10
// 00551d7b: CMP EDI,EBX
// 00551d7d: JZ 0x00551f19
//   XREF to: 00551f19 (CONDITIONAL_JUMP)
// 00551d83: MOV EDX,dword ptr [EBP + 0x14]
// 00551d86: CMP EDX,dword ptr [ESI + 0x14]
// 00551d89: JGE 0x00551d97
//   XREF to: 00551d97 (CONDITIONAL_JUMP)
// 00551d8b: MOV EAX,ESI
// 00551d8d: MOV ESI,EBP
// 00551d8f: MOV EBP,EAX
// 00551d91: MOV EAX,EDI
// 00551d93: MOV EDI,EBX
// 00551d95: MOV EBX,EAX
// 00551d97: MOV EAX,[0x030e5228]
//   Label: LAB_00551d97
//   XREF to: 030e5228 (READ)
// 00551d9c: LEA ECX,[EAX*0x8 + 0x0]
// 00551da3: ADD ECX,EAX
// 00551da5: SHL ECX,0x3
// 00551da8: ADD ECX,0x30e522c
//   XREF to: 030e522c (DATA)
// 00551dae: MOV dword ptr [ECX],EDI
//   XREF to: 030e522c (DATA)
// 00551db0: MOV EAX,[0x030e56ac]
//   XREF to: 030e56ac (READ)
// 00551db5: MOV dword ptr [ECX + 0x4],EBX
//   XREF to: 030e5230 (DATA)
// 00551db8: CMP EDI,EAX
// 00551dba: JGE 0x00551dc2
//   XREF to: 00551dc2 (CONDITIONAL_JUMP)
// 00551dbc: MOV dword ptr [0x030e56ac],EDI
//   XREF to: 030e56ac (WRITE)
// 00551dc2: CMP EBX,dword ptr [0x030e56b0]
//   Label: LAB_00551dc2
//   XREF to: 030e56b0 (READ)
// 00551dc8: JLE 0x00551dd0
//   XREF to: 00551dd0 (CONDITIONAL_JUMP)
// 00551dca: MOV dword ptr [0x030e56b0],EBX
//   XREF to: 030e56b0 (WRITE)
// 00551dd0: MOV EDI,dword ptr [ESI + 0x14]
//   Label: LAB_00551dd0
// 00551dd3: MOV EBX,dword ptr [EBP + 0x14]
// 00551dd6: SUB EBX,EDI
// 00551dd8: CMP EBX,0x10000
// 00551dde: JNC 0x00551f21
//   XREF to: 00551f21 (CONDITIONAL_JUMP)
// 00551de4: XOR EBX,EBX
// 00551de6: MOV EAX,dword ptr [EBP + 0x10]
//   Label: LAB_00551de6
// 00551de9: MOV EDX,dword ptr [ESI + 0x10]
// 00551dec: MOV EDI,dword ptr [ESI + 0x14]
// 00551def: SUB EAX,EDX
// 00551df1: AND EDI,0xffff
// 00551df7: MOV EDX,EAX
// 00551df9: MOV EAX,EBX
// 00551dfb: XOR DI,0xffff
// 00551dff: IMUL EDX
// 00551e01: SHRD EAX,EDX,0x10
// 00551e05: MOV EDX,EAX
// 00551e07: MOV dword ptr [ECX + 0xc],EAX
//   XREF to: 030e5238 (DATA)
// 00551e0a: MOV EAX,EDI
// 00551e0c: IMUL EDX
// 00551e0e: SHRD EAX,EDX,0x10
// 00551e12: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x14] (DATA)
// 00551e15: MOV EDX,dword ptr [ESP]
//   XREF to: Stack[-0x14] (DATA)
// 00551e18: MOV EAX,dword ptr [ESI + 0x10]
// 00551e1b: ADD EAX,EDX
// 00551e1d: MOV dword ptr [ECX + 0x8],EAX
//   XREF to: 030e5234 (DATA)
// 00551e20: MOV EAX,dword ptr [EBP + 0x18]
// 00551e23: MOV EDX,dword ptr [ESI + 0x18]
// 00551e26: SUB EAX,EDX
// 00551e28: MOV EDX,EAX
// 00551e2a: MOV EAX,EBX
// 00551e2c: IMUL EDX
// 00551e2e: SHRD EAX,EDX,0x10
// 00551e32: MOV EDX,EAX
// 00551e34: MOV dword ptr [ECX + 0x1c],EAX
//   XREF to: 030e5248 (DATA)
// 00551e37: MOV EAX,EDI
// 00551e39: IMUL EDX
// 00551e3b: SHRD EAX,EDX,0x10
// 00551e3f: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x14] (DATA)
// 00551e42: MOV EDX,dword ptr [ESP]
//   XREF to: Stack[-0x14] (DATA)
// 00551e45: MOV EAX,dword ptr [ESI + 0x18]
// 00551e48: ADD EAX,EDX
// 00551e4a: MOV dword ptr [ECX + 0x18],EAX
//   XREF to: 030e5244 (DATA)
// 00551e4d: MOV EAX,dword ptr [EBP + 0x1c]
// 00551e50: MOV EDX,dword ptr [ESI + 0x1c]
// 00551e53: SUB EAX,EDX
// 00551e55: MOV EDX,EAX
// 00551e57: MOV EAX,EBX
// 00551e59: IMUL EDX
// 00551e5b: SHRD EAX,EDX,0x10
// 00551e5f: MOV EDX,EAX
// 00551e61: MOV dword ptr [ECX + 0x24],EAX
//   XREF to: 030e5250 (DATA)
// 00551e64: MOV EAX,EDI
// 00551e66: IMUL EDX
// 00551e68: SHRD EAX,EDX,0x10
// 00551e6c: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x14] (DATA)
// 00551e6f: MOV EDX,dword ptr [ESP]
//   XREF to: Stack[-0x14] (DATA)
// 00551e72: MOV EAX,dword ptr [ESI + 0x1c]
// 00551e75: ADD EAX,EDX
// 00551e77: MOV dword ptr [ECX + 0x20],EAX
//   XREF to: 030e524c (DATA)
// 00551e7a: MOV EAX,dword ptr [EBP + 0x20]
// 00551e7d: MOV EDX,dword ptr [ESI + 0x20]
// 00551e80: SUB EAX,EDX
// 00551e82: MOV EDX,EAX
// 00551e84: MOV EAX,EBX
// 00551e86: IMUL EDX
// 00551e88: SHRD EAX,EDX,0x10
// 00551e8c: MOV EDX,EAX
// 00551e8e: MOV dword ptr [ECX + 0x14],EAX
//   XREF to: 030e5240 (DATA)
// 00551e91: MOV EAX,EDI
// 00551e93: IMUL EDX
// 00551e95: SHRD EAX,EDX,0x10
// 00551e99: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x14] (DATA)
// 00551e9c: MOV EDX,dword ptr [ESP]
//   XREF to: Stack[-0x14] (DATA)
// 00551e9f: MOV EAX,dword ptr [ESI + 0x20]
// 00551ea2: ADD EAX,EDX
// 00551ea4: MOV dword ptr [ECX + 0x10],EAX
//   XREF to: 030e523c (DATA)
// 00551ea7: MOV EAX,dword ptr [EBP + 0x2c]
// 00551eaa: MOV EDX,dword ptr [ESI + 0x2c]
// 00551ead: SUB EAX,EDX
// 00551eaf: MOV EDX,EAX
// 00551eb1: MOV EAX,EBX
// 00551eb3: IMUL EDX
// 00551eb5: SHRD EAX,EDX,0x10
// 00551eb9: MOV EDX,EAX
// 00551ebb: MOV dword ptr [ECX + 0x34],EAX
//   XREF to: 030e5260 (DATA)
// 00551ebe: MOV EAX,EDI
// 00551ec0: IMUL EDX
// 00551ec2: SHRD EAX,EDX,0x10
// 00551ec6: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x14] (DATA)
// 00551ec9: MOV EDX,dword ptr [ESP]
//   XREF to: Stack[-0x14] (DATA)
// 00551ecc: MOV EAX,dword ptr [ESI + 0x2c]
// 00551ecf: ADD EAX,EDX
// 00551ed1: MOV dword ptr [ECX + 0x30],EAX
//   XREF to: 030e525c (DATA)
// 00551ed4: CMP dword ptr [0x02d052a4],0x1
//   XREF to: 02d052a4 (READ)
// 00551edb: JNZ 0x00551f39
//   XREF to: 00551f39 (CONDITIONAL_JUMP)
// 00551edd: CMP dword ptr [0x02d0529c],0x0
//   XREF to: 02d0529c (READ)
// 00551ee4: JZ 0x00551f31
//   XREF to: 00551f31 (CONDITIONAL_JUMP)
// 00551ee6: MOV EAX,0x7fffffff
// 00551eeb: MOV EDX,dword ptr [ESI + 0x8]
// 00551eee: MOV ESI,EAX
// 00551ef0: SUB ESI,EDX
// 00551ef2: SUB EAX,dword ptr [EBP + 0x8]
// 00551ef5: MOV EDX,EAX
//   Label: LAB_00551ef5
// 00551ef7: MOV EAX,EBX
// 00551ef9: SUB EDX,ESI
// 00551efb: IMUL EDX
// 00551efd: SHRD EAX,EDX,0x10
// 00551f01: MOV EDX,EAX
// 00551f03: MOV dword ptr [ECX + 0x2c],EAX
//   XREF to: 030e5258 (DATA)
// 00551f06: MOV EAX,EDI
// 00551f08: IMUL EDX
// 00551f0a: SHRD EAX,EDX,0x10
// 00551f0e: ADD ESI,EAX
// 00551f10: MOV dword ptr [ECX + 0x28],ESI
//   XREF to: 030e5254 (DATA)
// 00551f13: INC dword ptr [0x030e5228]
//   XREF to: 030e5228 (READ_WRITE)
// 00551f19: ADD ESP,0x4
//   Label: LAB_00551f19
// 00551f1c: POP EBP
// 00551f1d: POP EDI
// 00551f1e: POP ESI
// 00551f1f: POP EBX
// 00551f20: RET
// 00551f21: MOV EAX,0xffffffff
//   Label: LAB_00551f21
// 00551f26: XOR EDX,EDX
// 00551f28: DIV EBX
// 00551f2a: MOV EBX,EAX
// 00551f2c: JMP 0x00551de6
//   XREF to: 00551de6 (UNCONDITIONAL_JUMP)
// 00551f31: MOV EAX,dword ptr [EBP + 0xc]
//   Label: LAB_00551f31
// 00551f34: MOV ESI,dword ptr [ESI + 0xc]
// 00551f37: JMP 0x00551ef5
//   XREF to: 00551ef5 (UNCONDITIONAL_JUMP)
// 00551f39: MOV EAX,dword ptr [EBP + 0x8]
//   Label: LAB_00551f39
// 00551f3c: MOV EDX,dword ptr [ESI + 0x8]
// 00551f3f: SUB EAX,EDX
// 00551f41: MOV EDX,EAX
// 00551f43: MOV EAX,EBX
// 00551f45: IMUL EDX
// 00551f47: SHRD EAX,EDX,0x10
// 00551f4b: MOV EDX,EAX
// 00551f4d: MOV dword ptr [ECX + 0x2c],EAX
//   XREF to: 030e5258 (DATA)
// 00551f50: MOV EAX,EDI
// 00551f52: IMUL EDX
// 00551f54: SHRD EAX,EDX,0x10
// 00551f58: MOV EDX,EAX
// 00551f5a: MOV EAX,dword ptr [ESI + 0x8]
// 00551f5d: ADD EAX,EDX
// 00551f5f: MOV dword ptr [ECX + 0x28],EAX
//   XREF to: 030e5254 (DATA)
// 00551f62: INC dword ptr [0x030e5228]
//   XREF to: 030e5228 (READ_WRITE)
// 00551f68: ADD ESP,0x4
// 00551f6b: POP EBP
// 00551f6c: POP EDI
// 00551f6d: POP ESI
// 00551f6e: POP EBX
// 00551f6f: RET
