// Name: engine_clipper.c_interpolateVertexRightClip_FUN_00435b00
// Address: 00435b00
// Address Range: [[00435b00, 00435bf2]]
// Convention: __cdecl
// Signature: void engine_clipper.c_interpolateVertexRightClip_FUN_00435b00(SRenderVertex * v1, SRenderVertex * v2, SRenderVertex * output)
// Cross-references:
//   engine_3d.c_clipAndDrawLine2D_FUN_00407d70 (00407d70) at 00407de6 [UNCONDITIONAL_CALL]
//   engine_3d.c_clipAndDrawLine3D_FUN_00408070 (00408070) at 004080e6 [UNCONDITIONAL_CALL]
//   engine_clipper.c_clipPolygonRightPlane_FUN_00436060 (00436060) at 00436127 [UNCONDITIONAL_CALL]
//   engine_clipper.c_clipPolygonToViewFrustum_FUN_004366e0 (004366e0) at 00436e17 [UNCONDITIONAL_CALL]
//   engine_drender.cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0 (0048caf0) at 0048cbb7 [UNCONDITIONAL_CALL]

#include "nocturne.h"

void __cdecl
engine_clipper_c_interpolateVertexRightClip_FUN_00435b00
          (SRenderVertex *v1,SRenderVertex *v2,SRenderVertex *output)

{
  float fVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  uVar4 = (v1->projected_vertex).transformed_x + (v1->projected_vertex).transformed_z;
  iVar5 = (uVar4 - (v2->projected_vertex).transformed_x) - (v2->projected_vertex).transformed_z;
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
  lVar2 = (longlong)((v2->projected_vertex).transformed_z - (v1->projected_vertex).transformed_z) *
          (longlong)iVar5;
  uVar4 = (uint)lVar2;
  iVar3 = (int)((ulonglong)lVar2 >> 0x20) * 2 + (uint)CARRY4(uVar4,uVar4) +
          (v1->projected_vertex).transformed_z;
  (output->projected_vertex).transformed_z = iVar3;
  (output->projected_vertex).transformed_x = iVar3;
  (output->projected_vertex).transformed_x = -iVar3;
  lVar2 = (longlong)((v2->projected_vertex).transformed_y - (v1->projected_vertex).transformed_y) *
          (longlong)iVar5;
  uVar4 = (uint)lVar2;
  (output->projected_vertex).transformed_y =
       (int)((ulonglong)lVar2 >> 0x20) * 2 + (uint)CARRY4(uVar4,uVar4) +
       (v1->projected_vertex).transformed_y;
  lVar2 = (longlong)((int)v2->light - (int)v1->light) * (longlong)iVar5;
  uVar4 = (uint)lVar2;
  output->light =
       (float)((int)((ulonglong)lVar2 >> 0x20) * 2 + (uint)CARRY4(uVar4,uVar4) + (int)v1->light);
  lVar2 = (longlong)((int)v2->w_recip - (int)v1->w_recip) * (longlong)iVar5;
  uVar4 = (uint)lVar2;
  output->w_recip =
       (float)((int)((ulonglong)lVar2 >> 0x20) * 2 + (uint)CARRY4(uVar4,uVar4) + (int)v1->w_recip);
  lVar2 = (longlong)((int)v2->u - (int)v1->u) * (longlong)iVar5;
  uVar4 = (uint)lVar2;
  output->u = (float)((int)((ulonglong)lVar2 >> 0x20) * 2 + (uint)CARRY4(uVar4,uVar4) + (int)v1->u);
  lVar2 = (longlong)((int)v2->v - (int)v1->v) * (longlong)iVar5;
  uVar4 = (uint)lVar2;
  fVar1 = v1->v;
  (output->projected_vertex).screen_x = -1;
  output->v = (float)((int)((ulonglong)lVar2 >> 0x20) * 2 + (uint)CARRY4(uVar4,uVar4) + (int)fVar1);
  return;
}


// Assembly code:
// 00435b00: PUSH EBX
//   Label: engine_clipper.c_interpolateVertexRightClip_FUN_00435b00
// 00435b01: PUSH ESI
// 00435b02: PUSH EDI
// 00435b03: PUSH EBP
// 00435b04: MOV ESI,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00435b08: MOV EBP,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 00435b0c: MOV EDI,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 00435b10: MOV ECX,dword ptr [ESI]
// 00435b12: ADD ECX,dword ptr [ESI + 0x8]
// 00435b15: MOV EAX,dword ptr [EBP]
// 00435b18: MOV EBX,ECX
// 00435b1a: MOV EDX,dword ptr [EBP + 0x8]
// 00435b1d: SUB EBX,EAX
// 00435b1f: SUB EBX,EDX
// 00435b21: MOV EDX,ECX
// 00435b23: CMP EDX,EBX
// 00435b25: JGE 0x00435b39
//   XREF to: 00435b39 (CONDITIONAL_JUMP)
// 00435b27: NEG EBX
// 00435b29: CMP EDX,EBX
// 00435b2b: JLE 0x00435b40
//   XREF to: 00435b40 (CONDITIONAL_JUMP)
// 00435b2d: NEG EBX
// 00435b2f: XOR EAX,EAX
// 00435b31: SAR EDX,0x1
// 00435b33: RCR EAX,0x1
// 00435b35: IDIV EBX
// 00435b37: JMP 0x00435b47
//   XREF to: 00435b47 (UNCONDITIONAL_JUMP)
// 00435b39: MOV EAX,0x7fffffff
//   Label: LAB_00435b39
// 00435b3e: JMP 0x00435b47
//   XREF to: 00435b47 (UNCONDITIONAL_JUMP)
// 00435b40: NEG EBX
//   Label: LAB_00435b40
// 00435b42: MOV EAX,0x80000000
// 00435b47: MOV ECX,EAX
//   Label: LAB_00435b47
// 00435b49: MOV EBX,dword ptr [ESI + 0x8]
// 00435b4c: MOV EAX,dword ptr [EBP + 0x8]
// 00435b4f: MOV EDX,ECX
// 00435b51: SUB EAX,EBX
// 00435b53: IMUL EDX
// 00435b55: ADD EAX,EAX
// 00435b57: ADC EDX,EDX
// 00435b59: MOV EAX,EDX
// 00435b5b: MOV EBX,dword ptr [ESI + 0x8]
// 00435b5e: ADD EAX,EBX
// 00435b60: MOV dword ptr [EDI + 0x8],EAX
// 00435b63: MOV dword ptr [EDI],EAX
// 00435b65: NEG EAX
// 00435b67: MOV dword ptr [EDI],EAX
// 00435b69: MOV EAX,dword ptr [EBP + 0x4]
// 00435b6c: SUB EAX,dword ptr [ESI + 0x4]
// 00435b6f: MOV EDX,ECX
// 00435b71: IMUL EDX
// 00435b73: ADD EAX,EAX
// 00435b75: ADC EDX,EDX
// 00435b77: MOV EAX,EDX
// 00435b79: MOV EBX,dword ptr [ESI + 0x4]
// 00435b7c: ADD EAX,EBX
// 00435b7e: MOV dword ptr [EDI + 0x4],EAX
// 00435b81: MOV EAX,dword ptr [EBP + 0x20]
// 00435b84: MOV EBX,dword ptr [ESI + 0x20]
// 00435b87: MOV EDX,ECX
// 00435b89: SUB EAX,EBX
// 00435b8b: IMUL EDX
// 00435b8d: ADD EAX,EAX
// 00435b8f: ADC EDX,EDX
// 00435b91: MOV EAX,EDX
// 00435b93: MOV EBX,dword ptr [ESI + 0x20]
// 00435b96: ADD EAX,EBX
// 00435b98: MOV dword ptr [EDI + 0x20],EAX
// 00435b9b: MOV EAX,dword ptr [EBP + 0x2c]
// 00435b9e: SUB EAX,dword ptr [ESI + 0x2c]
// 00435ba1: MOV EDX,ECX
// 00435ba3: IMUL EDX
// 00435ba5: ADD EAX,EAX
// 00435ba7: ADC EDX,EDX
// 00435ba9: MOV EAX,EDX
// 00435bab: MOV EBX,dword ptr [ESI + 0x2c]
// 00435bae: ADD EAX,EBX
// 00435bb0: MOV dword ptr [EDI + 0x2c],EAX
// 00435bb3: MOV EAX,dword ptr [EBP + 0x18]
// 00435bb6: MOV EBX,dword ptr [ESI + 0x18]
// 00435bb9: MOV EDX,ECX
// 00435bbb: SUB EAX,EBX
// 00435bbd: IMUL EDX
// 00435bbf: ADD EAX,EAX
// 00435bc1: ADC EDX,EDX
// 00435bc3: MOV EAX,EDX
// 00435bc5: MOV EBX,dword ptr [ESI + 0x18]
// 00435bc8: ADD EAX,EBX
// 00435bca: MOV dword ptr [EDI + 0x18],EAX
// 00435bcd: MOV EBP,dword ptr [EBP + 0x1c]
// 00435bd0: SUB EBP,dword ptr [ESI + 0x1c]
// 00435bd3: MOV EDX,ECX
// 00435bd5: MOV EAX,EBP
// 00435bd7: IMUL EDX
// 00435bd9: ADD EAX,EAX
// 00435bdb: ADC EDX,EDX
// 00435bdd: MOV EAX,EDX
// 00435bdf: MOV ECX,dword ptr [ESI + 0x1c]
// 00435be2: MOV dword ptr [EDI + 0x10],0xffffffff
// 00435be9: ADD EAX,ECX
// 00435beb: MOV dword ptr [EDI + 0x1c],EAX
// 00435bee: POP EBP
// 00435bef: POP EDI
// 00435bf0: POP ESI
// 00435bf1: POP EBX
// 00435bf2: RET
