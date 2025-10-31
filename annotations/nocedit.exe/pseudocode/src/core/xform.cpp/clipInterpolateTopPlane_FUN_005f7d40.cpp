// Name: core_xform.cpp_clipInterpolateTopPlane_FUN_005f7d40
// Address: 005f7d40
// Address Range: [[005f7d40, 005f7df7]]
// Convention: __cdecl
// Signature: void core_xform.cpp_clipInterpolateTopPlane_FUN_005f7d40(SRenderVertex * vertex_a, SRenderVertex * vertex_b, SRenderVertex * vertex_out)
// Cross-references:
//   core_xform.cpp_clipPolygonStage3_FUN_005f81c0 (005f81c0) at 005f8296 [UNCONDITIONAL_CALL]
//   core_xform.cpp_transformAndClipGeometry_FUN_005f8550 (005f8550) at 005f8b1f [UNCONDITIONAL_CALL]
// Globals:
//   int g_RenderStateFlags

#include "nocturne.h"

void __cdecl
core_xform_cpp_clipInterpolateTopPlane_FUN_005f7d40
          (SRenderVertex *vertex_a,SRenderVertex *vertex_b,SRenderVertex *vertex_out)

{
  longlong lVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = (vertex_a->projected_vertex).transformed_z;
  iVar5 = ((vertex_b->projected_vertex).transformed_y + iVar4) -
          ((vertex_a->projected_vertex).transformed_y + (vertex_b->projected_vertex).transformed_z);
  uVar3 = iVar4 - (vertex_a->projected_vertex).transformed_y;
  if ((int)uVar3 < iVar5) {
    if (uVar3 == -iVar5 || SBORROW4(uVar3,-iVar5) != (int)(uVar3 + iVar5) < 0) {
      iVar4 = -0x80000000;
    }
    else {
      iVar4 = (int)(CONCAT44((int)uVar3 >> 1,(uint)((uVar3 & 1) != 0) << 0x1f) / (longlong)iVar5);
    }
  }
  else {
    iVar4 = 0x7fffffff;
  }
  lVar1 = (longlong)
          ((vertex_b->projected_vertex).transformed_z - (vertex_a->projected_vertex).transformed_z)
          * (longlong)iVar4;
  uVar3 = (uint)lVar1;
  iVar5 = (int)((ulonglong)lVar1 >> 0x20) * 2 + (uint)CARRY4(uVar3,uVar3) +
          (vertex_a->projected_vertex).transformed_z;
  (vertex_out->projected_vertex).transformed_z = iVar5;
  (vertex_out->projected_vertex).transformed_y = iVar5;
  lVar1 = (longlong)
          ((vertex_b->projected_vertex).transformed_x - (vertex_a->projected_vertex).transformed_x)
          * (longlong)iVar4;
  uVar3 = (uint)lVar1;
  (vertex_out->projected_vertex).transformed_x =
       (int)((ulonglong)lVar1 >> 0x20) * 2 + (uint)CARRY4(uVar3,uVar3) +
       (vertex_a->projected_vertex).transformed_x;
  bVar2 = (byte)g_RenderStateFlags;
  (vertex_out->projected_vertex).screen_x = -1;
  if ((bVar2 & 4) == 0) {
    return;
  }
  lVar1 = (longlong)((int)vertex_b->light - (int)vertex_a->light) * (longlong)iVar4;
  uVar3 = (uint)lVar1;
  vertex_out->light =
       (float)((int)((ulonglong)lVar1 >> 0x20) * 2 + (uint)CARRY4(uVar3,uVar3) +
              (int)vertex_a->light);
  return;
}


// Assembly code:
// 005f7d40: PUSH EBX
//   Label: core_xform.cpp_clipInterpolateTopPlane_FUN_005f7d40
// 005f7d41: PUSH ESI
// 005f7d42: PUSH EDI
// 005f7d43: PUSH EBP
// 005f7d44: MOV ECX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005f7d48: MOV EDI,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005f7d4c: MOV ESI,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 005f7d50: MOV EBX,dword ptr [EDI + 0x4]
// 005f7d53: MOV EDX,dword ptr [ECX + 0x8]
// 005f7d56: MOV EAX,dword ptr [ECX + 0x4]
// 005f7d59: MOV EBP,dword ptr [EDI + 0x8]
// 005f7d5c: ADD EBX,EDX
// 005f7d5e: ADD EAX,EBP
// 005f7d60: SUB EBX,EAX
// 005f7d62: MOV EAX,EDX
// 005f7d64: MOV EDX,dword ptr [ECX + 0x4]
// 005f7d67: SUB EAX,EDX
// 005f7d69: MOV EDX,EAX
// 005f7d6b: CMP EDX,EBX
// 005f7d6d: JGE 0x005f7d81
//   XREF to: 005f7d81 (CONDITIONAL_JUMP)
// 005f7d6f: NEG EBX
// 005f7d71: CMP EDX,EBX
// 005f7d73: JLE 0x005f7d88
//   XREF to: 005f7d88 (CONDITIONAL_JUMP)
// 005f7d75: NEG EBX
// 005f7d77: XOR EAX,EAX
// 005f7d79: SAR EDX,0x1
// 005f7d7b: RCR EAX,0x1
// 005f7d7d: IDIV EBX
// 005f7d7f: JMP 0x005f7d8f
//   XREF to: 005f7d8f (UNCONDITIONAL_JUMP)
// 005f7d81: MOV EAX,0x7fffffff
//   Label: LAB_005f7d81
// 005f7d86: JMP 0x005f7d8f
//   XREF to: 005f7d8f (UNCONDITIONAL_JUMP)
// 005f7d88: NEG EBX
//   Label: LAB_005f7d88
// 005f7d8a: MOV EAX,0x80000000
// 005f7d8f: MOV EBX,EAX
//   Label: LAB_005f7d8f
// 005f7d91: MOV EBP,dword ptr [ECX + 0x8]
// 005f7d94: MOV EAX,dword ptr [EDI + 0x8]
// 005f7d97: MOV EDX,EBX
// 005f7d99: SUB EAX,EBP
// 005f7d9b: IMUL EDX
// 005f7d9d: ADD EAX,EAX
// 005f7d9f: ADC EDX,EDX
// 005f7da1: MOV EAX,EDX
// 005f7da3: MOV EDX,dword ptr [ECX + 0x8]
// 005f7da6: ADD EAX,EDX
// 005f7da8: MOV dword ptr [ESI + 0x8],EAX
// 005f7dab: MOV dword ptr [ESI + 0x4],EAX
// 005f7dae: MOV EAX,dword ptr [EDI]
// 005f7db0: SUB EAX,dword ptr [ECX]
// 005f7db2: MOV EDX,EBX
// 005f7db4: IMUL EDX
// 005f7db6: ADD EAX,EAX
// 005f7db8: ADC EDX,EDX
// 005f7dba: MOV EAX,EDX
// 005f7dbc: MOV EDX,dword ptr [ECX]
// 005f7dbe: ADD EAX,EDX
// 005f7dc0: MOV dword ptr [ESI],EAX
// 005f7dc2: MOV AH,byte ptr [0x02d052a0]
//   XREF to: 02d052a0 (READ)
// 005f7dc8: MOV dword ptr [ESI + 0x10],0xffffffff
// 005f7dcf: TEST AH,0x4
// 005f7dd2: JNZ 0x005f7dd9
//   XREF to: 005f7dd9 (CONDITIONAL_JUMP)
// 005f7dd4: POP EBP
// 005f7dd5: POP EDI
// 005f7dd6: POP ESI
// 005f7dd7: POP EBX
// 005f7dd8: RET
// 005f7dd9: MOV EAX,dword ptr [EDI + 0x20]
//   Label: LAB_005f7dd9
// 005f7ddc: MOV EDI,dword ptr [ECX + 0x20]
// 005f7ddf: MOV EDX,EBX
// 005f7de1: SUB EAX,EDI
// 005f7de3: IMUL EDX
// 005f7de5: ADD EAX,EAX
// 005f7de7: ADC EDX,EDX
// 005f7de9: MOV EAX,EDX
// 005f7deb: MOV EDX,dword ptr [ECX + 0x20]
// 005f7dee: ADD EAX,EDX
// 005f7df0: MOV dword ptr [ESI + 0x20],EAX
// 005f7df3: POP EBP
// 005f7df4: POP EDI
// 005f7df5: POP ESI
// 005f7df6: POP EBX
// 005f7df7: RET
