// Name: engine_clipper.c_interpolateVertexTopClip_FUN_00435d00
// Address: 00435d00
// Address Range: [[00435d00, 00435dfc]]
// Convention: __cdecl
// Signature: void engine_clipper.c_interpolateVertexTopClip_FUN_00435d00(SRenderVertex * v1, SRenderVertex * v2, SRenderVertex * output)
// Cross-references:
//   engine_3d.c_clipAndDrawLine2D_FUN_00407d70 (00407d70) at 00407e4c [UNCONDITIONAL_CALL]
//   engine_3d.c_clipAndDrawLine3D_FUN_00408070 (00408070) at 0040814c [UNCONDITIONAL_CALL]
//   engine_clipper.c_clipPolygonToViewFrustum_FUN_004366e0 (004366e0) at 00436f75 [UNCONDITIONAL_CALL]
//   engine_clipper.c_clipPolygonTopPlane_FUN_004362e0 (004362e0) at 004363a9 [UNCONDITIONAL_CALL]
//   engine_drender.cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0 (0048caf0) at 0048cce3 [UNCONDITIONAL_CALL]

#include "nocturne.h"

void __cdecl
engine_clipper_c_interpolateVertexTopClip_FUN_00435d00
          (SRenderVertex *v1,SRenderVertex *v2,SRenderVertex *output)

{
  float fVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  uVar4 = (v1->projected_vertex).transformed_y + (v1->projected_vertex).transformed_z;
  iVar5 = uVar4 - ((v2->projected_vertex).transformed_y + (v2->projected_vertex).transformed_z);
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
  (output->projected_vertex).transformed_y = iVar3;
  (output->projected_vertex).transformed_y = -iVar3;
  lVar2 = (longlong)((v2->projected_vertex).transformed_x - (v1->projected_vertex).transformed_x) *
          (longlong)iVar5;
  uVar4 = (uint)lVar2;
  (output->projected_vertex).transformed_x =
       (int)((ulonglong)lVar2 >> 0x20) * 2 + (uint)CARRY4(uVar4,uVar4) +
       (v1->projected_vertex).transformed_x;
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
// 00435d00: PUSH EBX
//   Label: engine_clipper.c_interpolateVertexTopClip_FUN_00435d00
// 00435d01: PUSH ESI
// 00435d02: PUSH EDI
// 00435d03: PUSH EBP
// 00435d04: MOV ESI,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00435d08: MOV EBP,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 00435d0c: MOV EDI,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 00435d10: MOV EDX,dword ptr [ESI + 0x4]
// 00435d13: MOV ECX,dword ptr [ESI + 0x8]
// 00435d16: MOV EBX,dword ptr [EBP + 0x8]
// 00435d19: ADD EDX,ECX
// 00435d1b: MOV ECX,dword ptr [EBP + 0x4]
// 00435d1e: ADD ECX,EBX
// 00435d20: MOV EBX,EDX
// 00435d22: SUB EBX,ECX
// 00435d24: CMP EDX,EBX
// 00435d26: JGE 0x00435d3a
//   XREF to: 00435d3a (CONDITIONAL_JUMP)
// 00435d28: NEG EBX
// 00435d2a: CMP EDX,EBX
// 00435d2c: JLE 0x00435d41
//   XREF to: 00435d41 (CONDITIONAL_JUMP)
// 00435d2e: NEG EBX
// 00435d30: XOR EAX,EAX
// 00435d32: SAR EDX,0x1
// 00435d34: RCR EAX,0x1
// 00435d36: IDIV EBX
// 00435d38: JMP 0x00435d48
//   XREF to: 00435d48 (UNCONDITIONAL_JUMP)
// 00435d3a: MOV EAX,0x7fffffff
//   Label: LAB_00435d3a
// 00435d3f: JMP 0x00435d48
//   XREF to: 00435d48 (UNCONDITIONAL_JUMP)
// 00435d41: NEG EBX
//   Label: LAB_00435d41
// 00435d43: MOV EAX,0x80000000
// 00435d48: MOV ECX,EAX
//   Label: LAB_00435d48
// 00435d4a: MOV EDX,dword ptr [EBP + 0x8]
// 00435d4d: MOV EAX,dword ptr [ESI + 0x8]
// 00435d50: SUB EDX,EAX
// 00435d52: MOV EAX,EDX
// 00435d54: MOV EDX,ECX
// 00435d56: IMUL EDX
// 00435d58: ADD EAX,EAX
// 00435d5a: ADC EDX,EDX
// 00435d5c: MOV EAX,EDX
// 00435d5e: MOV EDX,dword ptr [ESI + 0x8]
// 00435d61: ADD EAX,EDX
// 00435d63: MOV dword ptr [EDI + 0x8],EAX
// 00435d66: MOV EDX,EAX
// 00435d68: MOV dword ptr [EDI + 0x4],EAX
// 00435d6b: NEG EDX
// 00435d6d: MOV dword ptr [EDI + 0x4],EDX
// 00435d70: MOV EAX,dword ptr [EBP]
// 00435d73: MOV EBX,dword ptr [ESI]
// 00435d75: MOV EDX,ECX
// 00435d77: SUB EAX,EBX
// 00435d79: IMUL EDX
// 00435d7b: ADD EAX,EAX
// 00435d7d: ADC EDX,EDX
// 00435d7f: MOV EAX,EDX
// 00435d81: MOV EDX,dword ptr [ESI]
// 00435d83: ADD EAX,EDX
// 00435d85: MOV dword ptr [EDI],EAX
// 00435d87: MOV EDX,dword ptr [EBP + 0x20]
// 00435d8a: MOV EAX,dword ptr [ESI + 0x20]
// 00435d8d: SUB EDX,EAX
// 00435d8f: MOV EAX,EDX
// 00435d91: MOV EDX,ECX
// 00435d93: IMUL EDX
// 00435d95: ADD EAX,EAX
// 00435d97: ADC EDX,EDX
// 00435d99: MOV EAX,EDX
// 00435d9b: MOV EDX,dword ptr [ESI + 0x20]
// 00435d9e: ADD EAX,EDX
// 00435da0: MOV dword ptr [EDI + 0x20],EAX
// 00435da3: MOV EAX,dword ptr [EBP + 0x2c]
// 00435da6: MOV EBX,dword ptr [ESI + 0x2c]
// 00435da9: MOV EDX,ECX
// 00435dab: SUB EAX,EBX
// 00435dad: IMUL EDX
// 00435daf: ADD EAX,EAX
// 00435db1: ADC EDX,EDX
// 00435db3: MOV EAX,EDX
// 00435db5: MOV EDX,dword ptr [ESI + 0x2c]
// 00435db8: ADD EAX,EDX
// 00435dba: MOV dword ptr [EDI + 0x2c],EAX
// 00435dbd: MOV EDX,dword ptr [EBP + 0x18]
// 00435dc0: MOV EAX,dword ptr [ESI + 0x18]
// 00435dc3: SUB EDX,EAX
// 00435dc5: MOV EAX,EDX
// 00435dc7: MOV EDX,ECX
// 00435dc9: IMUL EDX
// 00435dcb: ADD EAX,EAX
// 00435dcd: ADC EDX,EDX
// 00435dcf: MOV EAX,EDX
// 00435dd1: MOV EDX,dword ptr [ESI + 0x18]
// 00435dd4: ADD EAX,EDX
// 00435dd6: MOV dword ptr [EDI + 0x18],EAX
// 00435dd9: MOV EAX,dword ptr [EBP + 0x1c]
// 00435ddc: SUB EAX,dword ptr [ESI + 0x1c]
// 00435ddf: MOV EDX,ECX
// 00435de1: IMUL EDX
// 00435de3: ADD EAX,EAX
// 00435de5: ADC EDX,EDX
// 00435de7: MOV EAX,EDX
// 00435de9: MOV EDX,dword ptr [ESI + 0x1c]
// 00435dec: MOV dword ptr [EDI + 0x10],0xffffffff
// 00435df3: ADD EAX,EDX
// 00435df5: MOV dword ptr [EDI + 0x1c],EAX
// 00435df8: POP EBP
// 00435df9: POP EDI
// 00435dfa: POP ESI
// 00435dfb: POP EBX
// 00435dfc: RET
