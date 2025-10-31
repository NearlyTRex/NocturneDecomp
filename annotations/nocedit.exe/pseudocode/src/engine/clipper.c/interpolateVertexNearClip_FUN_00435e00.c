// Name: engine_clipper.c_interpolateVertexNearClip_FUN_00435e00
// Address: 00435e00
// Address Range: [[00435e00, 00435f01]]
// Convention: __cdecl
// Signature: void engine_clipper.c_interpolateVertexNearClip_FUN_00435e00(SRenderVertex * v1, SRenderVertex * v2, SRenderVertex * output)
// Cross-references:
//   engine_clipper.c_clipPolygonNearPlane_FUN_00436420 (00436420) at 0043658f [UNCONDITIONAL_CALL]
//   engine_clipper.c_clipPolygonToViewFrustum_FUN_004366e0 (004366e0) at 004370ec [UNCONDITIONAL_CALL]
// Globals:
//   int g_NearPlaneDistance = 0x7fffffff

#include "nocturne.h"

void __cdecl
engine_clipper_c_interpolateVertexNearClip_FUN_00435e00
          (SRenderVertex *v1,SRenderVertex *v2,SRenderVertex *output)

{
  float fVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  
  iVar4 = (v2->projected_vertex).transformed_z - (v1->projected_vertex).transformed_z;
  uVar3 = g_NearPlaneDistance - (v1->projected_vertex).transformed_z;
  if ((int)uVar3 < iVar4) {
    if (uVar3 == -iVar4 || SBORROW4(uVar3,-iVar4) != (int)(uVar3 + iVar4) < 0) {
      iVar4 = -0x80000000;
    }
    else {
      iVar4 = (int)(CONCAT44((int)uVar3 >> 1,(uint)((uVar3 & 1) != 0) << 0x1f) / (longlong)iVar4);
    }
  }
  else {
    iVar4 = 0x7fffffff;
  }
  lVar2 = (longlong)((v2->projected_vertex).transformed_z - (v1->projected_vertex).transformed_z) *
          (longlong)iVar4;
  uVar3 = (uint)lVar2;
  (output->projected_vertex).transformed_z =
       (int)((ulonglong)lVar2 >> 0x20) * 2 + (uint)CARRY4(uVar3,uVar3) +
       (v1->projected_vertex).transformed_z;
  lVar2 = (longlong)((v2->projected_vertex).transformed_y - (v1->projected_vertex).transformed_y) *
          (longlong)iVar4;
  uVar3 = (uint)lVar2;
  (output->projected_vertex).transformed_y =
       (int)((ulonglong)lVar2 >> 0x20) * 2 + (uint)CARRY4(uVar3,uVar3) +
       (v1->projected_vertex).transformed_y;
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
// 00435e00: PUSH EBX
//   Label: engine_clipper.c_interpolateVertexNearClip_FUN_00435e00
// 00435e01: PUSH ESI
// 00435e02: PUSH EDI
// 00435e03: PUSH EBP
// 00435e04: MOV ESI,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00435e08: MOV EDI,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 00435e0c: MOV EBP,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 00435e10: MOV EBX,dword ptr [EDI + 0x8]
// 00435e13: MOV EDX,dword ptr [ESI + 0x8]
// 00435e16: MOV ECX,dword ptr [ESI + 0x8]
// 00435e19: SUB EBX,EDX
// 00435e1b: MOV EDX,dword ptr [0x0066e804]
//   XREF to: 0066e804 (READ)
// 00435e21: SUB EDX,ECX
// 00435e23: CMP EDX,EBX
// 00435e25: JGE 0x00435e39
//   XREF to: 00435e39 (CONDITIONAL_JUMP)
// 00435e27: NEG EBX
// 00435e29: CMP EDX,EBX
// 00435e2b: JLE 0x00435e40
//   XREF to: 00435e40 (CONDITIONAL_JUMP)
// 00435e2d: NEG EBX
// 00435e2f: XOR EAX,EAX
// 00435e31: SAR EDX,0x1
// 00435e33: RCR EAX,0x1
// 00435e35: IDIV EBX
// 00435e37: JMP 0x00435e47
//   XREF to: 00435e47 (UNCONDITIONAL_JUMP)
// 00435e39: MOV EAX,0x7fffffff
//   Label: LAB_00435e39
// 00435e3e: JMP 0x00435e47
//   XREF to: 00435e47 (UNCONDITIONAL_JUMP)
// 00435e40: NEG EBX
//   Label: LAB_00435e40
// 00435e42: MOV EAX,0x80000000
// 00435e47: MOV ECX,EAX
//   Label: LAB_00435e47
// 00435e49: MOV EBX,dword ptr [ESI + 0x8]
// 00435e4c: MOV EAX,dword ptr [EDI + 0x8]
// 00435e4f: MOV EDX,ECX
// 00435e51: SUB EAX,EBX
// 00435e53: IMUL EDX
// 00435e55: ADD EAX,EAX
// 00435e57: ADC EDX,EDX
// 00435e59: MOV EAX,EDX
// 00435e5b: MOV EBX,dword ptr [ESI + 0x8]
// 00435e5e: ADD EAX,EBX
// 00435e60: MOV dword ptr [EBP + 0x8],EAX
// 00435e63: MOV EAX,dword ptr [EDI + 0x4]
// 00435e66: SUB EAX,dword ptr [ESI + 0x4]
// 00435e69: MOV EDX,ECX
// 00435e6b: IMUL EDX
// 00435e6d: ADD EAX,EAX
// 00435e6f: ADC EDX,EDX
// 00435e71: MOV EAX,EDX
// 00435e73: MOV EBX,dword ptr [ESI + 0x4]
// 00435e76: ADD EAX,EBX
// 00435e78: MOV dword ptr [EBP + 0x4],EAX
// 00435e7b: MOV EAX,dword ptr [EDI]
// 00435e7d: MOV EBX,dword ptr [ESI]
// 00435e7f: MOV EDX,ECX
// 00435e81: SUB EAX,EBX
// 00435e83: IMUL EDX
// 00435e85: ADD EAX,EAX
// 00435e87: ADC EDX,EDX
// 00435e89: MOV EAX,EDX
// 00435e8b: MOV EBX,dword ptr [ESI]
// 00435e8d: ADD EAX,EBX
// 00435e8f: MOV dword ptr [EBP],EAX
// 00435e92: MOV EAX,dword ptr [EDI + 0x20]
// 00435e95: SUB EAX,dword ptr [ESI + 0x20]
// 00435e98: MOV EDX,ECX
// 00435e9a: IMUL EDX
// 00435e9c: ADD EAX,EAX
// 00435e9e: ADC EDX,EDX
// 00435ea0: MOV EAX,EDX
// 00435ea2: MOV EBX,dword ptr [ESI + 0x20]
// 00435ea5: ADD EAX,EBX
// 00435ea7: MOV dword ptr [EBP + 0x20],EAX
// 00435eaa: MOV EAX,dword ptr [EDI + 0x2c]
// 00435ead: MOV EBX,dword ptr [ESI + 0x2c]
// 00435eb0: MOV EDX,ECX
// 00435eb2: SUB EAX,EBX
// 00435eb4: IMUL EDX
// 00435eb6: ADD EAX,EAX
// 00435eb8: ADC EDX,EDX
// 00435eba: MOV EAX,EDX
// 00435ebc: MOV EBX,dword ptr [ESI + 0x2c]
// 00435ebf: ADD EAX,EBX
// 00435ec1: MOV dword ptr [EBP + 0x2c],EAX
// 00435ec4: MOV EAX,dword ptr [EDI + 0x18]
// 00435ec7: SUB EAX,dword ptr [ESI + 0x18]
// 00435eca: MOV EDX,ECX
// 00435ecc: IMUL EDX
// 00435ece: ADD EAX,EAX
// 00435ed0: ADC EDX,EDX
// 00435ed2: MOV EAX,EDX
// 00435ed4: MOV EBX,dword ptr [ESI + 0x18]
// 00435ed7: ADD EAX,EBX
// 00435ed9: MOV dword ptr [EBP + 0x18],EAX
// 00435edc: MOV EAX,dword ptr [EDI + 0x1c]
// 00435edf: MOV EBX,dword ptr [ESI + 0x1c]
// 00435ee2: MOV EDX,ECX
// 00435ee4: SUB EAX,EBX
// 00435ee6: IMUL EDX
// 00435ee8: ADD EAX,EAX
// 00435eea: ADC EDX,EDX
// 00435eec: MOV EAX,EDX
// 00435eee: MOV ECX,dword ptr [ESI + 0x1c]
// 00435ef1: MOV dword ptr [EBP + 0x10],0xffffffff
// 00435ef8: ADD ECX,EAX
// 00435efa: MOV dword ptr [EBP + 0x1c],ECX
// 00435efd: POP EBP
// 00435efe: POP EDI
// 00435eff: POP ESI
// 00435f00: POP EBX
// 00435f01: RET
