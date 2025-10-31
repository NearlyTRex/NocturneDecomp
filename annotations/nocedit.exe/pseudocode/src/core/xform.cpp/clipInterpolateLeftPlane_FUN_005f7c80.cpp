// Name: core_xform.cpp_clipInterpolateLeftPlane_FUN_005f7c80
// Address: 005f7c80
// Address Range: [[005f7c80, 005f7d34]]
// Convention: __cdecl
// Signature: void core_xform.cpp_clipInterpolateLeftPlane_FUN_005f7c80(SRenderVertex * vertex_a, SRenderVertex * vertex_b, SRenderVertex * vertex_out)
// Cross-references:
//   core_xform.cpp_clipPolygonStage2_FUN_005f8040 (005f8040) at 005f811b [UNCONDITIONAL_CALL]
//   core_xform.cpp_transformAndClipGeometry_FUN_005f8550 (005f8550) at 005f8a85 [UNCONDITIONAL_CALL]
// Globals:
//   int g_RenderStateFlags

#include "nocturne.h"

void __cdecl
core_xform_cpp_clipInterpolateLeftPlane_FUN_005f7c80
          (SRenderVertex *vertex_a,SRenderVertex *vertex_b,SRenderVertex *vertex_out)

{
  longlong lVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  uVar4 = (vertex_a->projected_vertex).transformed_x + (vertex_a->projected_vertex).transformed_z;
  iVar5 = (uVar4 - (vertex_b->projected_vertex).transformed_x) -
          (vertex_b->projected_vertex).transformed_z;
  if ((int)uVar4 < iVar5) {
    if (uVar4 == -iVar5 || SBORROW4(uVar4,-iVar5) != (int)(uVar4 + iVar5) < 0) {
      iVar5 = -0x80000000;
    }
    else {
      iVar5 = (int)(CONCAT44((int)uVar4 >> 1,(uint)((uVar4 & 1) != 0) << 0x1f) / (longlong)iVar5);
    }
  }
  else {
    iVar5 = 0x7fffffff;
  }
  lVar1 = (longlong)
          ((vertex_b->projected_vertex).transformed_z - (vertex_a->projected_vertex).transformed_z)
          * (longlong)iVar5;
  uVar4 = (uint)lVar1;
  iVar3 = (int)((ulonglong)lVar1 >> 0x20) * 2 + (uint)CARRY4(uVar4,uVar4) +
          (vertex_a->projected_vertex).transformed_z;
  (vertex_out->projected_vertex).transformed_z = iVar3;
  (vertex_out->projected_vertex).transformed_x = iVar3;
  (vertex_out->projected_vertex).transformed_x = -iVar3;
  lVar1 = (longlong)
          ((vertex_b->projected_vertex).transformed_y - (vertex_a->projected_vertex).transformed_y)
          * (longlong)iVar5;
  uVar4 = (uint)lVar1;
  (vertex_out->projected_vertex).transformed_y =
       (int)((ulonglong)lVar1 >> 0x20) * 2 + (uint)CARRY4(uVar4,uVar4) +
       (vertex_a->projected_vertex).transformed_y;
  bVar2 = (byte)g_RenderStateFlags;
  (vertex_out->projected_vertex).screen_x = -1;
  if ((bVar2 & 4) == 0) {
    return;
  }
  lVar1 = (longlong)((int)vertex_b->light - (int)vertex_a->light) * (longlong)iVar5;
  uVar4 = (uint)lVar1;
  vertex_out->light =
       (float)((int)((ulonglong)lVar1 >> 0x20) * 2 + (uint)CARRY4(uVar4,uVar4) +
              (int)vertex_a->light);
  return;
}


// Assembly code:
// 005f7c80: PUSH EBX
//   Label: core_xform.cpp_clipInterpolateLeftPlane_FUN_005f7c80
// 005f7c81: PUSH ESI
// 005f7c82: PUSH EDI
// 005f7c83: PUSH EBP
// 005f7c84: MOV ESI,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005f7c88: MOV EBP,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005f7c8c: MOV EDI,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 005f7c90: MOV EDX,dword ptr [ESI]
// 005f7c92: ADD EDX,dword ptr [ESI + 0x8]
// 005f7c95: MOV EAX,dword ptr [EBP]
// 005f7c98: MOV EBX,EDX
// 005f7c9a: MOV ECX,dword ptr [EBP + 0x8]
// 005f7c9d: SUB EBX,EAX
// 005f7c9f: SUB EBX,ECX
// 005f7ca1: CMP EDX,EBX
// 005f7ca3: JGE 0x005f7cb7
//   XREF to: 005f7cb7 (CONDITIONAL_JUMP)
// 005f7ca5: NEG EBX
// 005f7ca7: CMP EDX,EBX
// 005f7ca9: JLE 0x005f7cbe
//   XREF to: 005f7cbe (CONDITIONAL_JUMP)
// 005f7cab: NEG EBX
// 005f7cad: XOR EAX,EAX
// 005f7caf: SAR EDX,0x1
// 005f7cb1: RCR EAX,0x1
// 005f7cb3: IDIV EBX
// 005f7cb5: JMP 0x005f7cc5
//   XREF to: 005f7cc5 (UNCONDITIONAL_JUMP)
// 005f7cb7: MOV EAX,0x7fffffff
//   Label: LAB_005f7cb7
// 005f7cbc: JMP 0x005f7cc5
//   XREF to: 005f7cc5 (UNCONDITIONAL_JUMP)
// 005f7cbe: NEG EBX
//   Label: LAB_005f7cbe
// 005f7cc0: MOV EAX,0x80000000
// 005f7cc5: MOV ECX,EAX
//   Label: LAB_005f7cc5
// 005f7cc7: MOV EBX,dword ptr [ESI + 0x8]
// 005f7cca: MOV EAX,dword ptr [EBP + 0x8]
// 005f7ccd: MOV EDX,ECX
// 005f7ccf: SUB EAX,EBX
// 005f7cd1: IMUL EDX
// 005f7cd3: ADD EAX,EAX
// 005f7cd5: ADC EDX,EDX
// 005f7cd7: MOV EAX,EDX
// 005f7cd9: MOV EDX,dword ptr [ESI + 0x8]
// 005f7cdc: ADD EAX,EDX
// 005f7cde: MOV dword ptr [EDI + 0x8],EAX
// 005f7ce1: MOV dword ptr [EDI],EAX
// 005f7ce3: NEG EAX
// 005f7ce5: MOV dword ptr [EDI],EAX
// 005f7ce7: MOV EAX,dword ptr [EBP + 0x4]
// 005f7cea: SUB EAX,dword ptr [ESI + 0x4]
// 005f7ced: MOV EDX,ECX
// 005f7cef: IMUL EDX
// 005f7cf1: ADD EAX,EAX
// 005f7cf3: ADC EDX,EDX
// 005f7cf5: MOV EAX,EDX
// 005f7cf7: MOV EDX,dword ptr [ESI + 0x4]
// 005f7cfa: ADD EAX,EDX
// 005f7cfc: MOV dword ptr [EDI + 0x4],EAX
// 005f7cff: MOV AH,byte ptr [0x02d052a0]
//   XREF to: 02d052a0 (READ)
// 005f7d05: MOV dword ptr [EDI + 0x10],0xffffffff
// 005f7d0c: TEST AH,0x4
// 005f7d0f: JNZ 0x005f7d16
//   XREF to: 005f7d16 (CONDITIONAL_JUMP)
// 005f7d11: POP EBP
// 005f7d12: POP EDI
// 005f7d13: POP ESI
// 005f7d14: POP EBX
// 005f7d15: RET
// 005f7d16: MOV EAX,dword ptr [EBP + 0x20]
//   Label: LAB_005f7d16
// 005f7d19: MOV EBX,dword ptr [ESI + 0x20]
// 005f7d1c: MOV EDX,ECX
// 005f7d1e: SUB EAX,EBX
// 005f7d20: IMUL EDX
// 005f7d22: ADD EAX,EAX
// 005f7d24: ADC EDX,EDX
// 005f7d26: MOV EAX,EDX
// 005f7d28: MOV EDX,dword ptr [ESI + 0x20]
// 005f7d2b: ADD EAX,EDX
// 005f7d2d: MOV dword ptr [EDI + 0x20],EAX
// 005f7d30: POP EBP
// 005f7d31: POP EDI
// 005f7d32: POP ESI
// 005f7d33: POP EBX
// 005f7d34: RET
