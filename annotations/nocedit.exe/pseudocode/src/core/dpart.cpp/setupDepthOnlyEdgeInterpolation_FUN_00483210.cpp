// Name: core_dpart.cpp_setupDepthOnlyEdgeInterpolation_FUN_00483210
// Address: 00483210
// Address Range: [[00483210, 00483321]]
// Convention: __cdecl
// Signature: void core_dpart.cpp_setupDepthOnlyEdgeInterpolation_FUN_00483210(SEdgeData * vertex_a, SEdgeData * vertex_b)
// Globals:
//   int g_RenderTriangleEdgeCount
//   SEdgeData[16] g_EdgeInterpolationArray
//   undefined4 DAT_02c6cb78
//   undefined4 DAT_02c6cb7c
//   undefined4 DAT_02c6cb80
//   undefined4 DAT_02c6cb9c
//   undefined4 DAT_02c6cba0
//   int g_RenderTriangleMinScanlineY
//   int g_RenderTriangleMaxScanlineY
//   int g_RasterizerDepthBias

#include "nocturne.h"

void __cdecl
core_dpart_cpp_setupDepthOnlyEdgeInterpolation_FUN_00483210(SEdgeData *vertex_a,SEdgeData *vertex_b)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  SEdgeData *pSVar7;
  
  iVar2 = g_RenderTriangleEdgeCount;
  iVar6 = vertex_b->light_delta >> 0x10;
  iVar3 = vertex_a->light_delta >> 0x10;
  if (iVar3 != iVar6) {
    iVar4 = iVar3;
    pSVar7 = vertex_a;
    if (vertex_b->light_delta < vertex_a->light_delta) {
      iVar4 = iVar6;
      iVar6 = iVar3;
      pSVar7 = vertex_b;
      vertex_b = vertex_a;
    }
    g_EdgeInterpolationArray[g_RenderTriangleEdgeCount].y_start = iVar4;
    iVar3 = g_RenderTriangleMinScanlineY;
    g_EdgeInterpolationArray[iVar2].y_end = iVar6;
    if (iVar4 < iVar3) {
      g_RenderTriangleMinScanlineY = iVar4;
    }
    if (g_RenderTriangleMaxScanlineY < iVar6) {
      g_RenderTriangleMaxScanlineY = iVar6;
    }
    uVar5 = vertex_b->light_delta - pSVar7->light_delta;
    if (uVar5 < 0x10000) {
      iVar6 = 0;
    }
    else {
      iVar6 = (int)(0xffffffff / (ulonglong)uVar5);
    }
    lVar1 = (longlong)iVar6 * (longlong)(vertex_b->light_current - pSVar7->light_current);
    g_EdgeInterpolationArray[iVar2].x_delta =
         (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    lVar1 = (longlong)iVar6 * (longlong)((vertex_b->x_current - pSVar7->x_current) * 0x100);
    g_EdgeInterpolationArray[iVar2].z_delta =
         (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    iVar3 = g_RasterizerDepthBias;
    uVar5 = (uint)(ushort)((ushort)pSVar7->light_delta ^ 0xffff);
    lVar1 = (longlong)(int)uVar5 * (longlong)g_EdgeInterpolationArray[iVar2].x_delta;
    iVar6 = g_EdgeInterpolationArray[iVar2].z_delta;
    g_EdgeInterpolationArray[iVar2].x_current =
         pSVar7->light_current + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
    lVar1 = (longlong)(int)uVar5 * (longlong)iVar6;
    g_RenderTriangleEdgeCount = g_RenderTriangleEdgeCount + 1;
    g_EdgeInterpolationArray[iVar2].z_current =
         (pSVar7->x_current * 0x100 - iVar3) +
         ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
  }
  return;
}


// Assembly code:
// 00483210: PUSH EBX
//   Label: core_dpart.cpp_setupDepthOnlyEdgeInterpolation_FUN_00483210
// 00483211: PUSH EDI
// 00483212: PUSH EBP
// 00483213: MOV EBX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 00483217: MOV EDI,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 0048321b: MOV EDX,dword ptr [EDI + 0x14]
// 0048321e: MOV EAX,dword ptr [EBX + 0x14]
// 00483221: SAR EDX,0x10
// 00483224: SAR EAX,0x10
// 00483227: CMP EAX,EDX
// 00483229: JZ 0x0048330e
//   XREF to: 0048330e (CONDITIONAL_JUMP)
// 0048322f: PUSH ESI
// 00483230: MOV ESI,dword ptr [EDI + 0x14]
// 00483233: CMP ESI,dword ptr [EBX + 0x14]
// 00483236: JGE 0x00483244
//   XREF to: 00483244 (CONDITIONAL_JUMP)
// 00483238: MOV ECX,EBX
// 0048323a: MOV EBX,EDI
// 0048323c: MOV EDI,ECX
// 0048323e: MOV ECX,EAX
// 00483240: MOV EAX,EDX
// 00483242: MOV EDX,ECX
// 00483244: MOV ESI,dword ptr [0x02c6cb70]
//   Label: LAB_00483244
//   XREF to: 02c6cb70 (READ)
// 0048324a: LEA ECX,[ESI*0x8 + 0x0]
// 00483251: ADD ECX,ESI
// 00483253: MOV ESI,0x2c6cb74
//   XREF to: 02c6cb74 (DATA)
// 00483258: SHL ECX,0x3
// 0048325b: ADD ESI,ECX
// 0048325d: MOV dword ptr [ESI],EAX
//   XREF to: 02c6cb74 (DATA)
// 0048325f: MOV EBP,dword ptr [0x02c6cff4]
//   XREF to: 02c6cff4 (READ)
// 00483265: MOV dword ptr [ESI + 0x4],EDX
//   XREF to: 02c6cb78 (DATA)
// 00483268: CMP EAX,EBP
// 0048326a: JGE 0x00483271
//   XREF to: 00483271 (CONDITIONAL_JUMP)
// 0048326c: MOV [0x02c6cff4],EAX
//   XREF to: 02c6cff4 (WRITE)
// 00483271: CMP EDX,dword ptr [0x02c6cff8]
//   Label: LAB_00483271
//   XREF to: 02c6cff8 (READ)
// 00483277: JLE 0x0048327f
//   XREF to: 0048327f (CONDITIONAL_JUMP)
// 00483279: MOV dword ptr [0x02c6cff8],EDX
//   XREF to: 02c6cff8 (WRITE)
// 0048327f: MOV EDX,dword ptr [EBX + 0x14]
//   Label: LAB_0048327f
// 00483282: MOV ECX,dword ptr [EDI + 0x14]
// 00483285: SUB ECX,EDX
// 00483287: CMP ECX,0x10000
// 0048328d: JNC 0x00483312
//   XREF to: 00483312 (CONDITIONAL_JUMP)
// 00483293: XOR ECX,ECX
// 00483295: MOV EDX,dword ptr [EDI + 0x10]
//   Label: LAB_00483295
// 00483298: MOV EBP,dword ptr [EBX + 0x10]
// 0048329b: MOV EAX,ECX
// 0048329d: SUB EDX,EBP
// 0048329f: IMUL EDX
// 004832a1: SHRD EAX,EDX,0x10
// 004832a5: MOV dword ptr [ESI + 0xc],EAX
//   XREF to: 02c6cb80 (DATA)
// 004832a8: MOV EAX,dword ptr [EDI + 0x8]
// 004832ab: MOV EDX,dword ptr [EBX + 0x8]
// 004832ae: SUB EAX,EDX
// 004832b0: MOV EDX,EAX
// 004832b2: SHL EDX,0x8
// 004832b5: MOV EAX,ECX
// 004832b7: IMUL EDX
// 004832b9: SHRD EAX,EDX,0x10
// 004832bd: MOV dword ptr [ESI + 0x2c],EAX
//   XREF to: 02c6cba0 (DATA)
// 004832c0: MOV ECX,dword ptr [EBX + 0x14]
// 004832c3: AND ECX,0xffff
// 004832c9: XOR CX,0xffff
// 004832cd: MOV EDX,dword ptr [ESI + 0xc]
//   XREF to: 02c6cb80 (DATA)
// 004832d0: MOV EAX,ECX
// 004832d2: IMUL EDX
// 004832d4: SHRD EAX,EDX,0x10
// 004832d8: MOV EDX,EAX
// 004832da: MOV EAX,dword ptr [EBX + 0x10]
// 004832dd: MOV EDI,dword ptr [0x02c6d03c]
//   XREF to: 02c6d03c (READ)
// 004832e3: ADD EAX,EDX
// 004832e5: MOV EDX,dword ptr [ESI + 0x2c]
//   XREF to: 02c6cba0 (DATA)
// 004832e8: MOV dword ptr [ESI + 0x8],EAX
//   XREF to: 02c6cb7c (DATA)
// 004832eb: MOV EAX,ECX
// 004832ed: MOV EBX,dword ptr [EBX + 0x8]
// 004832f0: IMUL EDX
// 004832f2: SHRD EAX,EDX,0x10
// 004832f6: SHL EBX,0x8
// 004832f9: MOV EBP,dword ptr [0x02c6cb70]
//   XREF to: 02c6cb70 (READ)
// 004832ff: SUB EBX,EDI
// 00483301: INC EBP
// 00483302: ADD EBX,EAX
// 00483304: MOV dword ptr [0x02c6cb70],EBP
//   XREF to: 02c6cb70 (WRITE)
// 0048330a: MOV dword ptr [ESI + 0x28],EBX
//   XREF to: 02c6cb9c (DATA)
// 0048330d: POP ESI
// 0048330e: POP EBP
//   Label: LAB_0048330e
// 0048330f: POP EDI
// 00483310: POP EBX
// 00483311: RET
// 00483312: MOV EAX,0xffffffff
//   Label: LAB_00483312
// 00483317: XOR EDX,EDX
// 00483319: DIV ECX
// 0048331b: MOV ECX,EAX
// 0048331d: JMP 0x00483295
//   XREF to: 00483295 (UNCONDITIONAL_JUMP)
