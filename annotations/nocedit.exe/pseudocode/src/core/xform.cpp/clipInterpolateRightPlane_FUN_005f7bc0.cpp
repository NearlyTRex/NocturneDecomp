// Name: core_xform.cpp_clipInterpolateRightPlane_FUN_005f7bc0
// Address: 005f7bc0
// Address Range: [[005f7bc0, 005f7c77]]
// Convention: __cdecl
// Signature: void core_xform.cpp_clipInterpolateRightPlane_FUN_005f7bc0(SRenderVertex * vertex_a, SRenderVertex * vertex_b, SRenderVertex * vertex_out)
// Cross-references:
//   core_xform.cpp_clipPolygonStage1_FUN_005f7ed0 (005f7ed0) at 005f7fa5 [UNCONDITIONAL_CALL]
//   core_xform.cpp_transformAndClipGeometry_FUN_005f8550 (005f8550) at 005f89eb [UNCONDITIONAL_CALL]
// Globals:
//   int g_RenderStateFlags

#include "nocturne.h"

void __cdecl
core_xform_cpp_clipInterpolateRightPlane_FUN_005f7bc0
          (SRenderVertex *vertex_a,SRenderVertex *vertex_b,SRenderVertex *vertex_out)

{
  longlong lVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = (vertex_a->projected_vertex).transformed_z;
  iVar5 = ((vertex_b->projected_vertex).transformed_x + iVar4) -
          ((vertex_a->projected_vertex).transformed_x + (vertex_b->projected_vertex).transformed_z);
  uVar3 = iVar4 - (vertex_a->projected_vertex).transformed_x;
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
  (vertex_out->projected_vertex).transformed_x = iVar5;
  lVar1 = (longlong)
          ((vertex_b->projected_vertex).transformed_y - (vertex_a->projected_vertex).transformed_y)
          * (longlong)iVar4;
  uVar3 = (uint)lVar1;
  (vertex_out->projected_vertex).transformed_y =
       (int)((ulonglong)lVar1 >> 0x20) * 2 + (uint)CARRY4(uVar3,uVar3) +
       (vertex_a->projected_vertex).transformed_y;
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
// 005f7bc0: PUSH EBX
//   Label: core_xform.cpp_clipInterpolateRightPlane_FUN_005f7bc0
// 005f7bc1: PUSH ESI
// 005f7bc2: PUSH EDI
// 005f7bc3: PUSH EBP
// 005f7bc4: MOV ECX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005f7bc8: MOV EDI,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005f7bcc: MOV ESI,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 005f7bd0: MOV EBX,dword ptr [EDI]
// 005f7bd2: MOV EDX,dword ptr [ECX + 0x8]
// 005f7bd5: MOV EAX,dword ptr [ECX]
// 005f7bd7: MOV EBP,dword ptr [EDI + 0x8]
// 005f7bda: ADD EBX,EDX
// 005f7bdc: ADD EAX,EBP
// 005f7bde: SUB EBX,EAX
// 005f7be0: MOV EAX,EDX
// 005f7be2: MOV EDX,dword ptr [ECX]
// 005f7be4: SUB EAX,EDX
// 005f7be6: MOV EDX,EAX
// 005f7be8: CMP EDX,EBX
// 005f7bea: JGE 0x005f7bfe
//   XREF to: 005f7bfe (CONDITIONAL_JUMP)
// 005f7bec: NEG EBX
// 005f7bee: CMP EDX,EBX
// 005f7bf0: JLE 0x005f7c05
//   XREF to: 005f7c05 (CONDITIONAL_JUMP)
// 005f7bf2: NEG EBX
// 005f7bf4: XOR EAX,EAX
// 005f7bf6: SAR EDX,0x1
// 005f7bf8: RCR EAX,0x1
// 005f7bfa: IDIV EBX
// 005f7bfc: JMP 0x005f7c0c
//   XREF to: 005f7c0c (UNCONDITIONAL_JUMP)
// 005f7bfe: MOV EAX,0x7fffffff
//   Label: LAB_005f7bfe
// 005f7c03: JMP 0x005f7c0c
//   XREF to: 005f7c0c (UNCONDITIONAL_JUMP)
// 005f7c05: NEG EBX
//   Label: LAB_005f7c05
// 005f7c07: MOV EAX,0x80000000
// 005f7c0c: MOV EBX,EAX
//   Label: LAB_005f7c0c
// 005f7c0e: MOV EBP,dword ptr [ECX + 0x8]
// 005f7c11: MOV EAX,dword ptr [EDI + 0x8]
// 005f7c14: MOV EDX,EBX
// 005f7c16: SUB EAX,EBP
// 005f7c18: IMUL EDX
// 005f7c1a: ADD EAX,EAX
// 005f7c1c: ADC EDX,EDX
// 005f7c1e: MOV EAX,EDX
// 005f7c20: MOV EDX,dword ptr [ECX + 0x8]
// 005f7c23: ADD EAX,EDX
// 005f7c25: MOV dword ptr [ESI + 0x8],EAX
// 005f7c28: MOV dword ptr [ESI],EAX
// 005f7c2a: MOV EAX,dword ptr [EDI + 0x4]
// 005f7c2d: SUB EAX,dword ptr [ECX + 0x4]
// 005f7c30: MOV EDX,EBX
// 005f7c32: IMUL EDX
// 005f7c34: ADD EAX,EAX
// 005f7c36: ADC EDX,EDX
// 005f7c38: MOV EAX,EDX
// 005f7c3a: MOV EDX,dword ptr [ECX + 0x4]
// 005f7c3d: ADD EAX,EDX
// 005f7c3f: MOV dword ptr [ESI + 0x4],EAX
// 005f7c42: MOV AH,byte ptr [0x02d052a0]
//   XREF to: 02d052a0 (READ)
// 005f7c48: MOV dword ptr [ESI + 0x10],0xffffffff
// 005f7c4f: TEST AH,0x4
// 005f7c52: JNZ 0x005f7c59
//   XREF to: 005f7c59 (CONDITIONAL_JUMP)
// 005f7c54: POP EBP
// 005f7c55: POP EDI
// 005f7c56: POP ESI
// 005f7c57: POP EBX
// 005f7c58: RET
// 005f7c59: MOV EAX,dword ptr [EDI + 0x20]
//   Label: LAB_005f7c59
// 005f7c5c: MOV EDI,dword ptr [ECX + 0x20]
// 005f7c5f: MOV EDX,EBX
// 005f7c61: SUB EAX,EDI
// 005f7c63: IMUL EDX
// 005f7c65: ADD EAX,EAX
// 005f7c67: ADC EDX,EDX
// 005f7c69: MOV EAX,EDX
// 005f7c6b: MOV EDX,dword ptr [ECX + 0x20]
// 005f7c6e: ADD EAX,EDX
// 005f7c70: MOV dword ptr [ESI + 0x20],EAX
// 005f7c73: POP EBP
// 005f7c74: POP EDI
// 005f7c75: POP ESI
// 005f7c76: POP EBX
// 005f7c77: RET
