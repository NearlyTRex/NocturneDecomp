// Name: core_xform.cpp_clipInterpolateBottomPlane_FUN_005f7e00
// Address: 005f7e00
// Address Range: [[005f7e00, 005f7eb8]]
// Convention: __cdecl
// Signature: void core_xform.cpp_clipInterpolateBottomPlane_FUN_005f7e00(SRenderVertex * vertex_a, SRenderVertex * vertex_b, SRenderVertex * vertex_out)
// Cross-references:
//   core_xform.cpp_clipPolygonStage4_FUN_005f8330 (005f8330) at 005f840c [UNCONDITIONAL_CALL]
//   core_xform.cpp_transformAndClipGeometry_FUN_005f8550 (005f8550) at 005f8bb9 [UNCONDITIONAL_CALL]
// Globals:
//   int g_RenderStateFlags

#include "nocturne.h"

void __cdecl
core_xform_cpp_clipInterpolateBottomPlane_FUN_005f7e00
          (SRenderVertex *vertex_a,SRenderVertex *vertex_b,SRenderVertex *vertex_out)

{
  longlong lVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  uVar4 = (vertex_a->projected_vertex).transformed_y + (vertex_a->projected_vertex).transformed_z;
  iVar5 = uVar4 - ((vertex_b->projected_vertex).transformed_y +
                  (vertex_b->projected_vertex).transformed_z);
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
  (vertex_out->projected_vertex).transformed_y = iVar3;
  (vertex_out->projected_vertex).transformed_y = -iVar3;
  lVar1 = (longlong)
          ((vertex_b->projected_vertex).transformed_x - (vertex_a->projected_vertex).transformed_x)
          * (longlong)iVar5;
  uVar4 = (uint)lVar1;
  (vertex_out->projected_vertex).transformed_x =
       (int)((ulonglong)lVar1 >> 0x20) * 2 + (uint)CARRY4(uVar4,uVar4) +
       (vertex_a->projected_vertex).transformed_x;
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
// 005f7e00: PUSH EBX
//   Label: core_xform.cpp_clipInterpolateBottomPlane_FUN_005f7e00
// 005f7e01: PUSH ESI
// 005f7e02: PUSH EDI
// 005f7e03: PUSH EBP
// 005f7e04: MOV ESI,dword ptr [ESP + 0x14]
// 005f7e08: MOV EBP,dword ptr [ESP + 0x18]
// 005f7e0c: MOV EDI,dword ptr [ESP + 0x1c]
// 005f7e10: MOV EDX,dword ptr [ESI + 0x4]
// 005f7e13: MOV ECX,dword ptr [ESI + 0x8]
// 005f7e16: MOV EAX,dword ptr [EBP + 0x4]
// 005f7e19: MOV EBX,dword ptr [EBP + 0x8]
// 005f7e1c: ADD EDX,ECX
// 005f7e1e: ADD EAX,EBX
// 005f7e20: MOV EBX,EDX
// 005f7e22: SUB EBX,EAX
// 005f7e24: CMP EDX,EBX
// 005f7e26: JGE 0x005f7e3a
//   XREF to: 005f7e3a (CONDITIONAL_JUMP)
// 005f7e28: NEG EBX
// 005f7e2a: CMP EDX,EBX
// 005f7e2c: JLE 0x005f7e41
//   XREF to: 005f7e41 (CONDITIONAL_JUMP)
// 005f7e2e: NEG EBX
// 005f7e30: XOR EAX,EAX
// 005f7e32: SAR EDX,0x1
// 005f7e34: RCR EAX,0x1
// 005f7e36: IDIV EBX
// 005f7e38: JMP 0x005f7e48
//   XREF to: 005f7e48 (UNCONDITIONAL_JUMP)
// 005f7e3a: MOV EAX,0x7fffffff
//   Label: LAB_005f7e3a
// 005f7e3f: JMP 0x005f7e48
//   XREF to: 005f7e48 (UNCONDITIONAL_JUMP)
// 005f7e41: NEG EBX
//   Label: LAB_005f7e41
// 005f7e43: MOV EAX,0x80000000
// 005f7e48: MOV ECX,EAX
//   Label: LAB_005f7e48
// 005f7e4a: MOV EDX,dword ptr [ESI + 0x8]
// 005f7e4d: MOV EAX,dword ptr [EBP + 0x8]
// 005f7e50: SUB EAX,EDX
// 005f7e52: MOV EDX,ECX
// 005f7e54: IMUL EDX
// 005f7e56: ADD EAX,EAX
// 005f7e58: ADC EDX,EDX
// 005f7e5a: MOV EAX,EDX
// 005f7e5c: MOV EDX,dword ptr [ESI + 0x8]
// 005f7e5f: ADD EAX,EDX
// 005f7e61: MOV dword ptr [EDI + 0x8],EAX
// 005f7e64: MOV EBX,EAX
// 005f7e66: MOV dword ptr [EDI + 0x4],EAX
// 005f7e69: NEG EBX
// 005f7e6b: MOV dword ptr [EDI + 0x4],EBX
// 005f7e6e: MOV EAX,dword ptr [EBP]
// 005f7e71: SUB EAX,dword ptr [ESI]
// 005f7e73: MOV EDX,ECX
// 005f7e75: IMUL EDX
// 005f7e77: ADD EAX,EAX
// 005f7e79: ADC EDX,EDX
// 005f7e7b: MOV EAX,EDX
// 005f7e7d: MOV EDX,dword ptr [ESI]
// 005f7e7f: ADD EAX,EDX
// 005f7e81: MOV dword ptr [EDI],EAX
// 005f7e83: MOV AH,byte ptr [0x02d052a0]
//   XREF to: 02d052a0 (READ)
// 005f7e89: MOV dword ptr [EDI + 0x10],0xffffffff
// 005f7e90: TEST AH,0x4
// 005f7e93: JNZ 0x005f7e9a
//   XREF to: 005f7e9a (CONDITIONAL_JUMP)
// 005f7e95: POP EBP
// 005f7e96: POP EDI
// 005f7e97: POP ESI
// 005f7e98: POP EBX
// 005f7e99: RET
// 005f7e9a: MOV EAX,dword ptr [EBP + 0x20]
//   Label: LAB_005f7e9a
// 005f7e9d: MOV EBX,dword ptr [ESI + 0x20]
// 005f7ea0: MOV EDX,ECX
// 005f7ea2: SUB EAX,EBX
// 005f7ea4: IMUL EDX
// 005f7ea6: ADD EAX,EAX
// 005f7ea8: ADC EDX,EDX
// 005f7eaa: MOV EAX,EDX
// 005f7eac: MOV EDX,dword ptr [ESI + 0x20]
// 005f7eaf: ADD EAX,EDX
// 005f7eb1: MOV dword ptr [EDI + 0x20],EAX
// 005f7eb4: POP EBP
// 005f7eb5: POP EDI
// 005f7eb6: POP ESI
// 005f7eb7: POP EBX
// 005f7eb8: RET
