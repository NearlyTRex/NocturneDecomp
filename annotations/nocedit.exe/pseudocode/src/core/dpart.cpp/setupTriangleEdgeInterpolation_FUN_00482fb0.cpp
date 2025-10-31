// Name: core_dpart.cpp_setupTriangleEdgeInterpolation_FUN_00482fb0
// Address: 00482fb0
// Address Range: [[00482fb0, 00483203]]
// Convention: __cdecl
// Signature: void core_dpart.cpp_setupTriangleEdgeInterpolation_FUN_00482fb0(SEdgeData * vertex_a, SEdgeData * vertex_b)
// Globals:
//   int g_TexturesDisabled
//   int g_RenderTriangleEdgeCount
//   SEdgeData[16] g_EdgeInterpolationArray
//   undefined4 DAT_02c6cb78
//   undefined4 DAT_02c6cb7c
//   undefined4 DAT_02c6cb80
//   undefined4 DAT_02c6cb84
//   undefined4 DAT_02c6cb88
//   undefined4 DAT_02c6cb8c
//   undefined4 DAT_02c6cb90
//   undefined4 DAT_02c6cb94
//   undefined4 DAT_02c6cb98
//   undefined4 DAT_02c6cb9c
//   undefined4 DAT_02c6cba0
//   undefined4 DAT_02c6cba4
//   undefined4 DAT_02c6cba8
//   undefined4 DAT_02c6cbac
//   undefined4 DAT_02c6cbb0
//   undefined4 DAT_02c6cbb4
//   undefined4 DAT_02c6cbb8
//   int g_RenderTriangleMinScanlineY
//   int g_RenderTriangleMaxScanlineY
//   undefined4 DAT_02d052a1

#include "nocturne.h"

void __cdecl
core_dpart_cpp_setupTriangleEdgeInterpolation_FUN_00482fb0(SEdgeData *vertex_a,SEdgeData *vertex_b)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  SEdgeData *pSVar6;
  int iVar7;
  uint uVar8;
  
  iVar2 = g_RenderTriangleEdgeCount;
  iVar3 = vertex_b->light_delta >> 0x10;
  iVar7 = vertex_a->light_delta >> 0x10;
  if (iVar7 != iVar3) {
    iVar4 = iVar3;
    pSVar6 = vertex_b;
    if (vertex_b->light_delta < vertex_a->light_delta) {
      iVar4 = iVar7;
      pSVar6 = vertex_a;
      vertex_a = vertex_b;
      iVar7 = iVar3;
    }
    g_EdgeInterpolationArray[g_RenderTriangleEdgeCount].y_start = iVar7;
    iVar3 = g_RenderTriangleMinScanlineY;
    g_EdgeInterpolationArray[iVar2].y_end = iVar4;
    if (iVar7 < iVar3) {
      g_RenderTriangleMinScanlineY = iVar7;
    }
    if (g_RenderTriangleMaxScanlineY < iVar4) {
      g_RenderTriangleMaxScanlineY = iVar4;
    }
    uVar5 = pSVar6->light_delta - vertex_a->light_delta;
    if (uVar5 < 0x10000) {
      iVar7 = 0;
    }
    else {
      iVar7 = (int)(0xffffffff / (ulonglong)uVar5);
    }
    uVar8 = (uint)(ushort)((ushort)vertex_a->light_delta ^ 0xffff);
    lVar1 = (longlong)iVar7 * (longlong)(pSVar6->light_current - vertex_a->light_current);
    uVar5 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    g_EdgeInterpolationArray[iVar2].x_delta = uVar5;
    lVar1 = (longlong)(int)uVar8 * (longlong)(int)uVar5;
    g_EdgeInterpolationArray[iVar2].x_current =
         vertex_a->light_current + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
    lVar1 = (longlong)iVar7 * (longlong)(pSVar6->u_current - vertex_a->u_current);
    uVar5 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    g_EdgeInterpolationArray[iVar2].u_delta = uVar5;
    lVar1 = (longlong)(int)uVar8 * (longlong)(int)uVar5;
    g_EdgeInterpolationArray[iVar2].u_current =
         vertex_a->u_current + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
    lVar1 = (longlong)iVar7 * (longlong)(pSVar6->u_delta - vertex_a->u_delta);
    uVar5 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    g_EdgeInterpolationArray[iVar2].v_delta = uVar5;
    lVar1 = (longlong)(int)uVar8 * (longlong)(int)uVar5;
    g_EdgeInterpolationArray[iVar2].v_current =
         vertex_a->u_delta + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
    lVar1 = (longlong)iVar7 * (longlong)(pSVar6->v_current - vertex_a->v_current);
    uVar5 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    g_EdgeInterpolationArray[iVar2].light_delta = uVar5;
    lVar1 = (longlong)(int)uVar8 * (longlong)(int)uVar5;
    g_EdgeInterpolationArray[iVar2].light_current =
         vertex_a->v_current + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
    lVar1 = (longlong)iVar7 * (longlong)(pSVar6->z_delta - vertex_a->z_delta);
    uVar5 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    g_EdgeInterpolationArray[iVar2].w_recip_delta = uVar5;
    lVar1 = (longlong)(int)uVar8 * (longlong)(int)uVar5;
    g_EdgeInterpolationArray[iVar2].w_recip_current =
         vertex_a->z_delta + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
    if (g_TexturesDisabled == 0) {
      lVar1 = (longlong)iVar7 * (longlong)(pSVar6->x_delta - vertex_a->x_delta);
      uVar5 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
      g_EdgeInterpolationArray[iVar2].z_delta = uVar5;
      lVar1 = (longlong)(int)uVar8 * (longlong)(int)uVar5;
      uVar5 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
      iVar3 = vertex_a->x_delta;
    }
    else {
      lVar1 = (longlong)iVar7 * (longlong)(pSVar6->x_current - vertex_a->x_current);
      uVar5 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
      g_EdgeInterpolationArray[iVar2].z_delta = uVar5;
      lVar1 = (longlong)(int)uVar8 * (longlong)(int)uVar5;
      uVar5 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
      iVar3 = vertex_a->x_current;
    }
    g_EdgeInterpolationArray[iVar2].z_current = iVar3 + uVar5;
    if ((g_RenderStateFlags._1_1_ & 2) != 0) {
      lVar1 = (longlong)iVar7 * (longlong)(pSVar6->v_delta - vertex_a->v_delta);
      uVar5 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
      g_EdgeInterpolationArray[iVar2].color_delta = uVar5;
      lVar1 = (longlong)(int)uVar8 * (longlong)(int)uVar5;
      g_EdgeInterpolationArray[iVar2].color_current =
           vertex_a->v_delta + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
      lVar1 = (longlong)iVar7 * (longlong)(pSVar6->z_current - vertex_a->z_current);
      uVar5 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
      g_EdgeInterpolationArray[iVar2].fog_delta = uVar5;
      lVar1 = (longlong)(int)uVar8 * (longlong)(int)uVar5;
      g_EdgeInterpolationArray[iVar2].fog_current =
           vertex_a->z_current + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
    }
    g_RenderTriangleEdgeCount = g_RenderTriangleEdgeCount + 1;
  }
  return;
}


// Assembly code:
// 00482fb0: PUSH EBX
//   Label: core_dpart.cpp_setupTriangleEdgeInterpolation_FUN_00482fb0
// 00482fb1: PUSH ESI
// 00482fb2: PUSH EDI
// 00482fb3: PUSH EBP
// 00482fb4: SUB ESP,0x4
// 00482fb7: MOV ESI,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x4] (READ)
// 00482fbb: MOV EBP,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x8] (READ)
// 00482fbf: MOV EBX,dword ptr [EBP + 0x14]
// 00482fc2: MOV EDI,dword ptr [ESI + 0x14]
// 00482fc5: SAR EBX,0x10
// 00482fc8: SAR EDI,0x10
// 00482fcb: CMP EDI,EBX
// 00482fcd: JZ 0x004831bf
//   XREF to: 004831bf (CONDITIONAL_JUMP)
// 00482fd3: MOV EDX,dword ptr [EBP + 0x14]
// 00482fd6: CMP EDX,dword ptr [ESI + 0x14]
// 00482fd9: JGE 0x00482fe7
//   XREF to: 00482fe7 (CONDITIONAL_JUMP)
// 00482fdb: MOV EAX,ESI
// 00482fdd: MOV ESI,EBP
// 00482fdf: MOV EBP,EAX
// 00482fe1: MOV EAX,EDI
// 00482fe3: MOV EDI,EBX
// 00482fe5: MOV EBX,EAX
// 00482fe7: MOV EAX,[0x02c6cb70]
//   Label: LAB_00482fe7
//   XREF to: 02c6cb70 (READ)
// 00482fec: LEA ECX,[EAX*0x8 + 0x0]
// 00482ff3: ADD ECX,EAX
// 00482ff5: SHL ECX,0x3
// 00482ff8: ADD ECX,0x2c6cb74
//   XREF to: 02c6cb74 (DATA)
// 00482ffe: MOV dword ptr [ECX],EDI
//   XREF to: 02c6cb74 (DATA)
// 00483000: MOV EAX,[0x02c6cff4]
//   XREF to: 02c6cff4 (READ)
// 00483005: MOV dword ptr [ECX + 0x4],EBX
//   XREF to: 02c6cb78 (DATA)
// 00483008: CMP EDI,EAX
// 0048300a: JGE 0x00483012
//   XREF to: 00483012 (CONDITIONAL_JUMP)
// 0048300c: MOV dword ptr [0x02c6cff4],EDI
//   XREF to: 02c6cff4 (WRITE)
// 00483012: CMP EBX,dword ptr [0x02c6cff8]
//   Label: LAB_00483012
//   XREF to: 02c6cff8 (READ)
// 00483018: JLE 0x00483020
//   XREF to: 00483020 (CONDITIONAL_JUMP)
// 0048301a: MOV dword ptr [0x02c6cff8],EBX
//   XREF to: 02c6cff8 (WRITE)
// 00483020: MOV EDI,dword ptr [ESI + 0x14]
//   Label: LAB_00483020
// 00483023: MOV EBX,dword ptr [EBP + 0x14]
// 00483026: SUB EBX,EDI
// 00483028: CMP EBX,0x10000
// 0048302e: JNC 0x004831c7
//   XREF to: 004831c7 (CONDITIONAL_JUMP)
// 00483034: XOR EBX,EBX
// 00483036: MOV EAX,dword ptr [EBP + 0x10]
//   Label: LAB_00483036
// 00483039: MOV EDX,dword ptr [ESI + 0x10]
// 0048303c: MOV EDI,dword ptr [ESI + 0x14]
// 0048303f: SUB EAX,EDX
// 00483041: AND EDI,0xffff
// 00483047: MOV EDX,EAX
// 00483049: MOV EAX,EBX
// 0048304b: XOR DI,0xffff
// 0048304f: IMUL EDX
// 00483051: SHRD EAX,EDX,0x10
// 00483055: MOV EDX,EAX
// 00483057: MOV dword ptr [ECX + 0xc],EAX
//   XREF to: 02c6cb80 (DATA)
// 0048305a: MOV EAX,EDI
// 0048305c: IMUL EDX
// 0048305e: SHRD EAX,EDX,0x10
// 00483062: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x14] (DATA)
// 00483065: MOV EDX,dword ptr [ESP]
//   XREF to: Stack[-0x14] (DATA)
// 00483068: MOV EAX,dword ptr [ESI + 0x10]
// 0048306b: ADD EAX,EDX
// 0048306d: MOV dword ptr [ECX + 0x8],EAX
//   XREF to: 02c6cb7c (DATA)
// 00483070: MOV EAX,dword ptr [EBP + 0x18]
// 00483073: MOV EDX,dword ptr [ESI + 0x18]
// 00483076: SUB EAX,EDX
// 00483078: MOV EDX,EAX
// 0048307a: MOV EAX,EBX
// 0048307c: IMUL EDX
// 0048307e: SHRD EAX,EDX,0x10
// 00483082: MOV EDX,EAX
// 00483084: MOV dword ptr [ECX + 0x1c],EAX
//   XREF to: 02c6cb90 (DATA)
// 00483087: MOV EAX,EDI
// 00483089: IMUL EDX
// 0048308b: SHRD EAX,EDX,0x10
// 0048308f: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x14] (DATA)
// 00483092: MOV EDX,dword ptr [ESP]
//   XREF to: Stack[-0x14] (DATA)
// 00483095: MOV EAX,dword ptr [ESI + 0x18]
// 00483098: ADD EAX,EDX
// 0048309a: MOV dword ptr [ECX + 0x18],EAX
//   XREF to: 02c6cb8c (DATA)
// 0048309d: MOV EAX,dword ptr [EBP + 0x1c]
// 004830a0: MOV EDX,dword ptr [ESI + 0x1c]
// 004830a3: SUB EAX,EDX
// 004830a5: MOV EDX,EAX
// 004830a7: MOV EAX,EBX
// 004830a9: IMUL EDX
// 004830ab: SHRD EAX,EDX,0x10
// 004830af: MOV EDX,EAX
// 004830b1: MOV dword ptr [ECX + 0x24],EAX
//   XREF to: 02c6cb98 (DATA)
// 004830b4: MOV EAX,EDI
// 004830b6: IMUL EDX
// 004830b8: SHRD EAX,EDX,0x10
// 004830bc: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x14] (DATA)
// 004830bf: MOV EDX,dword ptr [ESP]
//   XREF to: Stack[-0x14] (DATA)
// 004830c2: MOV EAX,dword ptr [ESI + 0x1c]
// 004830c5: ADD EAX,EDX
// 004830c7: MOV dword ptr [ECX + 0x20],EAX
//   XREF to: 02c6cb94 (DATA)
// 004830ca: MOV EAX,dword ptr [EBP + 0x20]
// 004830cd: MOV EDX,dword ptr [ESI + 0x20]
// 004830d0: SUB EAX,EDX
// 004830d2: MOV EDX,EAX
// 004830d4: MOV EAX,EBX
// 004830d6: IMUL EDX
// 004830d8: SHRD EAX,EDX,0x10
// 004830dc: MOV EDX,EAX
// 004830de: MOV dword ptr [ECX + 0x14],EAX
//   XREF to: 02c6cb88 (DATA)
// 004830e1: MOV EAX,EDI
// 004830e3: IMUL EDX
// 004830e5: SHRD EAX,EDX,0x10
// 004830e9: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x14] (DATA)
// 004830ec: MOV EDX,dword ptr [ESP]
//   XREF to: Stack[-0x14] (DATA)
// 004830ef: MOV EAX,dword ptr [ESI + 0x20]
// 004830f2: ADD EAX,EDX
// 004830f4: MOV dword ptr [ECX + 0x10],EAX
//   XREF to: 02c6cb84 (DATA)
// 004830f7: MOV EAX,dword ptr [EBP + 0x2c]
// 004830fa: MOV EDX,dword ptr [ESI + 0x2c]
// 004830fd: SUB EAX,EDX
// 004830ff: MOV EDX,EAX
// 00483101: MOV EAX,EBX
// 00483103: IMUL EDX
// 00483105: SHRD EAX,EDX,0x10
// 00483109: MOV EDX,EAX
// 0048310b: MOV dword ptr [ECX + 0x34],EAX
//   XREF to: 02c6cba8 (DATA)
// 0048310e: MOV EAX,EDI
// 00483110: IMUL EDX
// 00483112: SHRD EAX,EDX,0x10
// 00483116: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x14] (DATA)
// 00483119: MOV EDX,dword ptr [ESP]
//   XREF to: Stack[-0x14] (DATA)
// 0048311c: MOV EAX,dword ptr [ESI + 0x2c]
// 0048311f: ADD EAX,EDX
// 00483121: MOV dword ptr [ECX + 0x30],EAX
//   XREF to: 02c6cba4 (DATA)
// 00483124: CMP dword ptr [0x00772a74],0x0
//   XREF to: 00772a74 (READ)
// 0048312b: JZ 0x004831d7
//   XREF to: 004831d7 (CONDITIONAL_JUMP)
// 00483131: MOV EAX,dword ptr [EBP + 0x8]
// 00483134: MOV EDX,dword ptr [ESI + 0x8]
// 00483137: SUB EAX,EDX
// 00483139: MOV EDX,EAX
// 0048313b: MOV EAX,EBX
// 0048313d: IMUL EDX
// 0048313f: SHRD EAX,EDX,0x10
// 00483143: MOV EDX,EAX
// 00483145: MOV dword ptr [ECX + 0x2c],EAX
//   XREF to: 02c6cba0 (DATA)
// 00483148: MOV EAX,EDI
// 0048314a: IMUL EDX
// 0048314c: SHRD EAX,EDX,0x10
// 00483150: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x14] (DATA)
// 00483153: MOV EDX,dword ptr [ESP]
//   XREF to: Stack[-0x14] (DATA)
// 00483156: MOV EAX,dword ptr [ESI + 0x8]
// 00483159: ADD EAX,EDX
//   Label: LAB_00483159
// 0048315b: MOV dword ptr [ECX + 0x28],EAX
//   XREF to: 02c6cb9c (DATA)
// 0048315e: TEST byte ptr [0x02d052a1],0x2
//   XREF to: 02d052a1 (READ)
// 00483165: JZ 0x004831b9
//   XREF to: 004831b9 (CONDITIONAL_JUMP)
// 00483167: MOV EAX,dword ptr [EBP + 0x24]
// 0048316a: MOV EDX,dword ptr [ESI + 0x24]
// 0048316d: SUB EAX,EDX
// 0048316f: MOV EDX,EAX
// 00483171: MOV EAX,EBX
// 00483173: IMUL EDX
// 00483175: SHRD EAX,EDX,0x10
// 00483179: MOV EDX,EAX
// 0048317b: MOV dword ptr [ECX + 0x3c],EAX
//   XREF to: 02c6cbb0 (DATA)
// 0048317e: MOV EAX,EDI
// 00483180: IMUL EDX
// 00483182: SHRD EAX,EDX,0x10
// 00483186: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x14] (DATA)
// 00483189: MOV EDX,dword ptr [ESP]
//   XREF to: Stack[-0x14] (DATA)
// 0048318c: MOV EAX,dword ptr [ESI + 0x24]
// 0048318f: ADD EAX,EDX
// 00483191: MOV dword ptr [ECX + 0x38],EAX
//   XREF to: 02c6cbac (DATA)
// 00483194: MOV EDX,dword ptr [EBP + 0x28]
// 00483197: MOV EBP,dword ptr [ESI + 0x28]
// 0048319a: MOV EAX,EBX
// 0048319c: SUB EDX,EBP
// 0048319e: IMUL EDX
// 004831a0: SHRD EAX,EDX,0x10
// 004831a4: MOV EDX,EAX
// 004831a6: MOV dword ptr [ECX + 0x44],EAX
//   XREF to: 02c6cbb8 (DATA)
// 004831a9: MOV EAX,EDI
// 004831ab: IMUL EDX
// 004831ad: SHRD EAX,EDX,0x10
// 004831b1: MOV EBX,dword ptr [ESI + 0x28]
// 004831b4: ADD EBX,EAX
// 004831b6: MOV dword ptr [ECX + 0x40],EBX
//   XREF to: 02c6cbb4 (DATA)
// 004831b9: INC dword ptr [0x02c6cb70]
//   Label: LAB_004831b9
//   XREF to: 02c6cb70 (READ_WRITE)
// 004831bf: ADD ESP,0x4
//   Label: LAB_004831bf
// 004831c2: POP EBP
// 004831c3: POP EDI
// 004831c4: POP ESI
// 004831c5: POP EBX
// 004831c6: RET
// 004831c7: MOV EAX,0xffffffff
//   Label: LAB_004831c7
// 004831cc: XOR EDX,EDX
// 004831ce: DIV EBX
// 004831d0: MOV EBX,EAX
// 004831d2: JMP 0x00483036
//   XREF to: 00483036 (UNCONDITIONAL_JUMP)
// 004831d7: MOV EAX,dword ptr [EBP + 0xc]
//   Label: LAB_004831d7
// 004831da: MOV EDX,dword ptr [ESI + 0xc]
// 004831dd: SUB EAX,EDX
// 004831df: MOV EDX,EAX
// 004831e1: MOV EAX,EBX
// 004831e3: IMUL EDX
// 004831e5: SHRD EAX,EDX,0x10
// 004831e9: MOV EDX,EAX
// 004831eb: MOV dword ptr [ECX + 0x2c],EAX
//   XREF to: 02c6cba0 (DATA)
// 004831ee: MOV EAX,EDI
// 004831f0: IMUL EDX
// 004831f2: SHRD EAX,EDX,0x10
// 004831f6: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x14] (DATA)
// 004831f9: MOV EDX,dword ptr [ESP]
//   XREF to: Stack[-0x14] (DATA)
// 004831fc: MOV EAX,dword ptr [ESI + 0xc]
// 004831ff: JMP 0x00483159
//   XREF to: 00483159 (UNCONDITIONAL_JUMP)
