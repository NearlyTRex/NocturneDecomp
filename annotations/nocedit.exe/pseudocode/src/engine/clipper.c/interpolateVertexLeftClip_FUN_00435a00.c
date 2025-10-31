// Name: engine_clipper.c_interpolateVertexLeftClip_FUN_00435a00
// Address: 00435a00
// Address Range: [[00435a00, 00435af1]]
// Convention: __cdecl
// Signature: void engine_clipper.c_interpolateVertexLeftClip_FUN_00435a00(SRenderVertex * v1, SRenderVertex * v2, SRenderVertex * output)
// Cross-references:
//   engine_3d.c_clipAndDrawLine2D_FUN_00407d70 (00407d70) at 00407db1 [UNCONDITIONAL_CALL]
//   engine_3d.c_clipAndDrawLine3D_FUN_00408070 (00408070) at 004080b1 [UNCONDITIONAL_CALL]
//   engine_clipper.c_clipPolygonLeftPlane_FUN_00435f20 (00435f20) at 00435fe1 [UNCONDITIONAL_CALL]
//   engine_clipper.c_clipPolygonToViewFrustum_FUN_004366e0 (004366e0) at 00436d68 [UNCONDITIONAL_CALL]
//   engine_drender.cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0 (0048caf0) at 0048cb84 [UNCONDITIONAL_CALL]

#include "nocturne.h"

void __cdecl
engine_clipper_c_interpolateVertexLeftClip_FUN_00435a00
          (SRenderVertex *v1,SRenderVertex *v2,SRenderVertex *output)

{
  float fVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = (v1->projected_vertex).transformed_z;
  iVar5 = ((v2->projected_vertex).transformed_x + iVar4) -
          ((v1->projected_vertex).transformed_x + (v2->projected_vertex).transformed_z);
  uVar3 = iVar4 - (v1->projected_vertex).transformed_x;
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
  lVar2 = (longlong)((v2->projected_vertex).transformed_z - (v1->projected_vertex).transformed_z) *
          (longlong)iVar4;
  uVar3 = (uint)lVar2;
  iVar5 = (int)((ulonglong)lVar2 >> 0x20) * 2 + (uint)CARRY4(uVar3,uVar3) +
          (v1->projected_vertex).transformed_z;
  (output->projected_vertex).transformed_z = iVar5;
  (output->projected_vertex).transformed_x = iVar5;
  lVar2 = (longlong)((v2->projected_vertex).transformed_y - (v1->projected_vertex).transformed_y) *
          (longlong)iVar4;
  uVar3 = (uint)lVar2;
  (output->projected_vertex).transformed_y =
       (int)((ulonglong)lVar2 >> 0x20) * 2 + (uint)CARRY4(uVar3,uVar3) +
       (v1->projected_vertex).transformed_y;
  lVar2 = (longlong)((int)v2->u - (int)v1->u) * (longlong)iVar4;
  uVar3 = (uint)lVar2;
  output->u = (float)((int)((ulonglong)lVar2 >> 0x20) * 2 + (uint)CARRY4(uVar3,uVar3) + (int)v1->u);
  lVar2 = (longlong)((int)v2->v - (int)v1->v) * (longlong)iVar4;
  uVar3 = (uint)lVar2;
  output->v = (float)((int)((ulonglong)lVar2 >> 0x20) * 2 + (uint)CARRY4(uVar3,uVar3) + (int)v1->v);
  lVar2 = (longlong)((int)v2->light - (int)v1->light) * (longlong)iVar4;
  uVar3 = (uint)lVar2;
  output->light =
       (float)((int)((ulonglong)lVar2 >> 0x20) * 2 + (uint)CARRY4(uVar3,uVar3) + (int)v1->light);
  lVar2 = (longlong)((int)v2->w_recip - (int)v1->w_recip) * (longlong)iVar4;
  uVar3 = (uint)lVar2;
  fVar1 = v1->w_recip;
  (output->projected_vertex).screen_x = -1;
  output->w_recip =
       (float)((int)fVar1 + (int)((ulonglong)lVar2 >> 0x20) * 2 + (uint)CARRY4(uVar3,uVar3));
  return;
}


// Assembly code:
// 00435a00: PUSH EBX
//   Label: engine_clipper.c_interpolateVertexLeftClip_FUN_00435a00
// 00435a01: PUSH ESI
// 00435a02: PUSH EDI
// 00435a03: PUSH EBP
// 00435a04: MOV ECX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00435a08: MOV EDI,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 00435a0c: MOV ESI,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 00435a10: MOV EBX,dword ptr [EDI]
// 00435a12: MOV EDX,dword ptr [ECX + 0x8]
// 00435a15: MOV EAX,dword ptr [ECX]
// 00435a17: MOV EBP,dword ptr [EDI + 0x8]
// 00435a1a: ADD EBX,EDX
// 00435a1c: ADD EAX,EBP
// 00435a1e: SUB EBX,EAX
// 00435a20: MOV EAX,EDX
// 00435a22: MOV EDX,dword ptr [ECX]
// 00435a24: SUB EAX,EDX
// 00435a26: MOV EDX,EAX
// 00435a28: CMP EDX,EBX
// 00435a2a: JGE 0x00435a3e
//   XREF to: 00435a3e (CONDITIONAL_JUMP)
// 00435a2c: NEG EBX
// 00435a2e: CMP EDX,EBX
// 00435a30: JLE 0x00435a45
//   XREF to: 00435a45 (CONDITIONAL_JUMP)
// 00435a32: NEG EBX
// 00435a34: XOR EAX,EAX
// 00435a36: SAR EDX,0x1
// 00435a38: RCR EAX,0x1
// 00435a3a: IDIV EBX
// 00435a3c: JMP 0x00435a4c
//   XREF to: 00435a4c (UNCONDITIONAL_JUMP)
// 00435a3e: MOV EAX,0x7fffffff
//   Label: LAB_00435a3e
// 00435a43: JMP 0x00435a4c
//   XREF to: 00435a4c (UNCONDITIONAL_JUMP)
// 00435a45: NEG EBX
//   Label: LAB_00435a45
// 00435a47: MOV EAX,0x80000000
// 00435a4c: MOV EBX,EAX
//   Label: LAB_00435a4c
// 00435a4e: MOV EBP,dword ptr [ECX + 0x8]
// 00435a51: MOV EAX,dword ptr [EDI + 0x8]
// 00435a54: MOV EDX,EBX
// 00435a56: SUB EAX,EBP
// 00435a58: IMUL EDX
// 00435a5a: ADD EAX,EAX
// 00435a5c: ADC EDX,EDX
// 00435a5e: MOV EAX,EDX
// 00435a60: MOV EDX,dword ptr [ECX + 0x8]
// 00435a63: ADD EAX,EDX
// 00435a65: MOV dword ptr [ESI + 0x8],EAX
// 00435a68: MOV dword ptr [ESI],EAX
// 00435a6a: MOV EAX,dword ptr [EDI + 0x4]
// 00435a6d: SUB EAX,dword ptr [ECX + 0x4]
// 00435a70: MOV EDX,EBX
// 00435a72: IMUL EDX
// 00435a74: ADD EAX,EAX
// 00435a76: ADC EDX,EDX
// 00435a78: MOV EAX,EDX
// 00435a7a: MOV EDX,dword ptr [ECX + 0x4]
// 00435a7d: ADD EAX,EDX
// 00435a7f: MOV dword ptr [ESI + 0x4],EAX
// 00435a82: MOV EAX,dword ptr [EDI + 0x18]
// 00435a85: MOV EBP,dword ptr [ECX + 0x18]
// 00435a88: MOV EDX,EBX
// 00435a8a: SUB EAX,EBP
// 00435a8c: IMUL EDX
// 00435a8e: ADD EAX,EAX
// 00435a90: ADC EDX,EDX
// 00435a92: MOV EAX,EDX
// 00435a94: MOV EDX,dword ptr [ECX + 0x18]
// 00435a97: ADD EAX,EDX
// 00435a99: MOV dword ptr [ESI + 0x18],EAX
// 00435a9c: MOV EAX,dword ptr [EDI + 0x1c]
// 00435a9f: SUB EAX,dword ptr [ECX + 0x1c]
// 00435aa2: MOV EDX,EBX
// 00435aa4: IMUL EDX
// 00435aa6: ADD EAX,EAX
// 00435aa8: ADC EDX,EDX
// 00435aaa: MOV EAX,EDX
// 00435aac: MOV EDX,dword ptr [ECX + 0x1c]
// 00435aaf: ADD EAX,EDX
// 00435ab1: MOV dword ptr [ESI + 0x1c],EAX
// 00435ab4: MOV EAX,dword ptr [EDI + 0x20]
// 00435ab7: MOV EBP,dword ptr [ECX + 0x20]
// 00435aba: MOV EDX,EBX
// 00435abc: SUB EAX,EBP
// 00435abe: IMUL EDX
// 00435ac0: ADD EAX,EAX
// 00435ac2: ADC EDX,EDX
// 00435ac4: MOV EAX,EDX
// 00435ac6: MOV EDX,dword ptr [ECX + 0x20]
// 00435ac9: ADD EAX,EDX
// 00435acb: MOV dword ptr [ESI + 0x20],EAX
// 00435ace: MOV EAX,dword ptr [EDI + 0x2c]
// 00435ad1: SUB EAX,dword ptr [ECX + 0x2c]
// 00435ad4: MOV EDX,EBX
// 00435ad6: IMUL EDX
// 00435ad8: ADD EAX,EAX
// 00435ada: ADC EDX,EDX
// 00435adc: MOV EAX,EDX
// 00435ade: MOV EDX,dword ptr [ECX + 0x2c]
// 00435ae1: MOV dword ptr [ESI + 0x10],0xffffffff
// 00435ae8: ADD EDX,EAX
// 00435aea: MOV dword ptr [ESI + 0x2c],EDX
// 00435aed: POP EBP
// 00435aee: POP EDI
// 00435aef: POP ESI
// 00435af0: POP EBX
// 00435af1: RET
