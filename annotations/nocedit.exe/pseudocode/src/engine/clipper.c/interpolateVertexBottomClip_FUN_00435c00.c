// Name: engine_clipper.c_interpolateVertexBottomClip_FUN_00435c00
// Address: 00435c00
// Address Range: [[00435c00, 00435cf1]]
// Convention: __cdecl
// Signature: void engine_clipper.c_interpolateVertexBottomClip_FUN_00435c00(SRenderVertex * v1, SRenderVertex * v2, SRenderVertex * output)
// Cross-references:
//   engine_3d.c_clipAndDrawLine2D_FUN_00407d70 (00407d70) at 00407e17 [UNCONDITIONAL_CALL]
//   engine_3d.c_clipAndDrawLine3D_FUN_00408070 (00408070) at 00408117 [UNCONDITIONAL_CALL]
//   engine_clipper.c_clipPolygonBottomPlane_FUN_004361a0 (004361a0) at 00436263 [UNCONDITIONAL_CALL]
//   engine_clipper.c_clipPolygonToViewFrustum_FUN_004366e0 (004366e0) at 00436ec6 [UNCONDITIONAL_CALL]
//   engine_drender.cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0 (0048caf0) at 0048cbe7 [UNCONDITIONAL_CALL]

#include "nocturne.h"

void __cdecl
engine_clipper_c_interpolateVertexBottomClip_FUN_00435c00
          (SRenderVertex *v1,SRenderVertex *v2,SRenderVertex *output)

{
  float fVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = (v1->projected_vertex).transformed_z;
  iVar5 = ((v2->projected_vertex).transformed_y + iVar4) -
          ((v1->projected_vertex).transformed_y + (v2->projected_vertex).transformed_z);
  uVar3 = iVar4 - (v1->projected_vertex).transformed_y;
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
  (output->projected_vertex).transformed_y = iVar5;
  lVar2 = (longlong)((v2->projected_vertex).transformed_x - (v1->projected_vertex).transformed_x) *
          (longlong)iVar4;
  uVar3 = (uint)lVar2;
  (output->projected_vertex).transformed_x =
       (int)((ulonglong)lVar2 >> 0x20) * 2 + (uint)CARRY4(uVar3,uVar3) +
       (v1->projected_vertex).transformed_x;
  lVar2 = (longlong)((int)v2->light - (int)v1->light) * (longlong)iVar4;
  uVar3 = (uint)lVar2;
  output->light =
       (float)((int)((ulonglong)lVar2 >> 0x20) * 2 + (uint)CARRY4(uVar3,uVar3) + (int)v1->light);
  lVar2 = (longlong)((int)v2->w_recip - (int)v1->w_recip) * (longlong)iVar4;
  uVar3 = (uint)lVar2;
  output->w_recip =
       (float)((int)((ulonglong)lVar2 >> 0x20) * 2 + (uint)CARRY4(uVar3,uVar3) + (int)v1->w_recip);
  lVar2 = (longlong)((int)v2->u - (int)v1->u) * (longlong)iVar4;
  uVar3 = (uint)lVar2;
  output->u = (float)((int)((ulonglong)lVar2 >> 0x20) * 2 + (uint)CARRY4(uVar3,uVar3) + (int)v1->u);
  lVar2 = (longlong)((int)v2->v - (int)v1->v) * (longlong)iVar4;
  uVar3 = (uint)lVar2;
  fVar1 = v1->v;
  (output->projected_vertex).screen_x = -1;
  output->v = (float)((int)fVar1 + (int)((ulonglong)lVar2 >> 0x20) * 2 + (uint)CARRY4(uVar3,uVar3));
  return;
}


// Assembly code:
// 00435c00: PUSH EBX
//   Label: engine_clipper.c_interpolateVertexBottomClip_FUN_00435c00
// 00435c01: PUSH ESI
// 00435c02: PUSH EDI
// 00435c03: PUSH EBP
// 00435c04: MOV ECX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00435c08: MOV EDI,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 00435c0c: MOV ESI,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 00435c10: MOV EBX,dword ptr [EDI + 0x4]
// 00435c13: MOV EDX,dword ptr [ECX + 0x8]
// 00435c16: MOV EAX,dword ptr [ECX + 0x4]
// 00435c19: MOV EBP,dword ptr [EDI + 0x8]
// 00435c1c: ADD EBX,EDX
// 00435c1e: ADD EAX,EBP
// 00435c20: SUB EBX,EAX
// 00435c22: MOV EAX,EDX
// 00435c24: MOV EDX,dword ptr [ECX + 0x4]
// 00435c27: SUB EAX,EDX
// 00435c29: MOV EDX,EAX
// 00435c2b: CMP EDX,EBX
// 00435c2d: JGE 0x00435c41
//   XREF to: 00435c41 (CONDITIONAL_JUMP)
// 00435c2f: NEG EBX
// 00435c31: CMP EDX,EBX
// 00435c33: JLE 0x00435c48
//   XREF to: 00435c48 (CONDITIONAL_JUMP)
// 00435c35: NEG EBX
// 00435c37: XOR EAX,EAX
// 00435c39: SAR EDX,0x1
// 00435c3b: RCR EAX,0x1
// 00435c3d: IDIV EBX
// 00435c3f: JMP 0x00435c4f
//   XREF to: 00435c4f (UNCONDITIONAL_JUMP)
// 00435c41: MOV EAX,0x7fffffff
//   Label: LAB_00435c41
// 00435c46: JMP 0x00435c4f
//   XREF to: 00435c4f (UNCONDITIONAL_JUMP)
// 00435c48: NEG EBX
//   Label: LAB_00435c48
// 00435c4a: MOV EAX,0x80000000
// 00435c4f: MOV EBX,EAX
//   Label: LAB_00435c4f
// 00435c51: MOV EBP,dword ptr [ECX + 0x8]
// 00435c54: MOV EAX,dword ptr [EDI + 0x8]
// 00435c57: MOV EDX,EBX
// 00435c59: SUB EAX,EBP
// 00435c5b: IMUL EDX
// 00435c5d: ADD EAX,EAX
// 00435c5f: ADC EDX,EDX
// 00435c61: MOV EAX,EDX
// 00435c63: MOV EDX,dword ptr [ECX + 0x8]
// 00435c66: ADD EAX,EDX
// 00435c68: MOV dword ptr [ESI + 0x8],EAX
// 00435c6b: MOV dword ptr [ESI + 0x4],EAX
// 00435c6e: MOV EAX,dword ptr [EDI]
// 00435c70: SUB EAX,dword ptr [ECX]
// 00435c72: MOV EDX,EBX
// 00435c74: IMUL EDX
// 00435c76: ADD EAX,EAX
// 00435c78: ADC EDX,EDX
// 00435c7a: MOV EAX,EDX
// 00435c7c: MOV EDX,dword ptr [ECX]
// 00435c7e: ADD EAX,EDX
// 00435c80: MOV dword ptr [ESI],EAX
// 00435c82: MOV EAX,dword ptr [EDI + 0x20]
// 00435c85: MOV EBP,dword ptr [ECX + 0x20]
// 00435c88: MOV EDX,EBX
// 00435c8a: SUB EAX,EBP
// 00435c8c: IMUL EDX
// 00435c8e: ADD EAX,EAX
// 00435c90: ADC EDX,EDX
// 00435c92: MOV EAX,EDX
// 00435c94: MOV EDX,dword ptr [ECX + 0x20]
// 00435c97: ADD EAX,EDX
// 00435c99: MOV dword ptr [ESI + 0x20],EAX
// 00435c9c: MOV EAX,dword ptr [EDI + 0x2c]
// 00435c9f: SUB EAX,dword ptr [ECX + 0x2c]
// 00435ca2: MOV EDX,EBX
// 00435ca4: IMUL EDX
// 00435ca6: ADD EAX,EAX
// 00435ca8: ADC EDX,EDX
// 00435caa: MOV EAX,EDX
// 00435cac: MOV EDX,dword ptr [ECX + 0x2c]
// 00435caf: ADD EAX,EDX
// 00435cb1: MOV dword ptr [ESI + 0x2c],EAX
// 00435cb4: MOV EAX,dword ptr [EDI + 0x18]
// 00435cb7: MOV EBP,dword ptr [ECX + 0x18]
// 00435cba: MOV EDX,EBX
// 00435cbc: SUB EAX,EBP
// 00435cbe: IMUL EDX
// 00435cc0: ADD EAX,EAX
// 00435cc2: ADC EDX,EDX
// 00435cc4: MOV EAX,EDX
// 00435cc6: MOV EDX,dword ptr [ECX + 0x18]
// 00435cc9: ADD EAX,EDX
// 00435ccb: MOV dword ptr [ESI + 0x18],EAX
// 00435cce: MOV EAX,dword ptr [EDI + 0x1c]
// 00435cd1: SUB EAX,dword ptr [ECX + 0x1c]
// 00435cd4: MOV EDX,EBX
// 00435cd6: IMUL EDX
// 00435cd8: ADD EAX,EAX
// 00435cda: ADC EDX,EDX
// 00435cdc: MOV EAX,EDX
// 00435cde: MOV EDX,dword ptr [ECX + 0x1c]
// 00435ce1: MOV dword ptr [ESI + 0x10],0xffffffff
// 00435ce8: ADD EDX,EAX
// 00435cea: MOV dword ptr [ESI + 0x1c],EDX
// 00435ced: POP EBP
// 00435cee: POP EDI
// 00435cef: POP ESI
// 00435cf0: POP EBX
// 00435cf1: RET
