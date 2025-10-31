// Name: engine_clipper.c_interpolateVertexTopClipAdvanced_FUN_004375c0
// Address: 004375c0
// Address Range: [[004375c0, 004376e6]]
// Convention: __cdecl
// Signature: void engine_clipper.c_interpolateVertexTopClipAdvanced_FUN_004375c0(SRenderVertex * v1, SRenderVertex * v2, SRenderVertex * output)
// Cross-references:
//   engine_clipper.c_clipPolygonToViewFrustumAdvanced_FUN_00437ca0 (00437ca0) at 0043832a [UNCONDITIONAL_CALL]
//   engine_clipper.c_clipPolygonToViewport_FUN_00438420 (00438420) at 00438b22 [UNCONDITIONAL_CALL]
//   engine_clipper.c_clipPolygonVerticalPlanes_FUN_00437ac0 (00437ac0) at 00437b81 [UNCONDITIONAL_CALL]

#include "nocturne.h"

void __cdecl
engine_clipper_c_interpolateVertexTopClipAdvanced_FUN_004375c0
          (SRenderVertex *v1,SRenderVertex *v2,SRenderVertex *output)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = (v1->projected_vertex).transformed_y + (v1->projected_vertex).transformed_z;
  iVar4 = uVar3 - ((v2->projected_vertex).transformed_y + (v2->projected_vertex).transformed_z);
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
  lVar1 = (longlong)((v2->projected_vertex).transformed_z - (v1->projected_vertex).transformed_z) *
          (longlong)iVar4;
  uVar3 = (uint)lVar1;
  iVar2 = (int)((ulonglong)lVar1 >> 0x20) * 2 + (uint)CARRY4(uVar3,uVar3) +
          (v1->projected_vertex).transformed_z;
  (output->projected_vertex).transformed_z = iVar2;
  (output->projected_vertex).transformed_y = iVar2;
  (output->projected_vertex).transformed_y = -iVar2;
  lVar1 = (longlong)((v2->projected_vertex).transformed_x - (v1->projected_vertex).transformed_x) *
          (longlong)iVar4;
  uVar3 = (uint)lVar1;
  iVar2 = (v1->projected_vertex).transformed_x;
  (output->projected_vertex).screen_x = -1;
  (output->projected_vertex).transformed_x =
       (int)((ulonglong)lVar1 >> 0x20) * 2 + (uint)CARRY4(uVar3,uVar3) + iVar2;
  lVar1 = (longlong)((int)v2->light - (int)v1->light) * (longlong)iVar4;
  uVar3 = (uint)lVar1;
  output->light =
       (float)((int)((ulonglong)lVar1 >> 0x20) * 2 + (uint)CARRY4(uVar3,uVar3) + (int)v1->light);
  lVar1 = (longlong)(v2->color - v1->color) * (longlong)iVar4;
  uVar3 = (uint)lVar1;
  output->color = (int)((ulonglong)lVar1 >> 0x20) * 2 + (uint)CARRY4(uVar3,uVar3) + v1->color;
  lVar1 = (longlong)((int)v2->fog - (int)v1->fog) * (longlong)iVar4;
  uVar3 = (uint)lVar1;
  output->fog = (float)((int)v1->fog +
                       (int)((ulonglong)lVar1 >> 0x20) * 2 + (uint)CARRY4(uVar3,uVar3));
  lVar1 = (longlong)((int)v2->u - (int)v1->u) * (longlong)iVar4;
  uVar3 = (uint)lVar1;
  output->u = (float)((int)v1->u + (int)((ulonglong)lVar1 >> 0x20) * 2 + (uint)CARRY4(uVar3,uVar3));
  lVar1 = (longlong)((int)v2->v - (int)v1->v) * (longlong)iVar4;
  uVar3 = (uint)lVar1;
  output->v = (float)((int)v1->v + (int)((ulonglong)lVar1 >> 0x20) * 2 + (uint)CARRY4(uVar3,uVar3));
  lVar1 = (longlong)((int)v2->w_recip - (int)v1->w_recip) * (longlong)iVar4;
  uVar3 = (uint)lVar1;
  output->w_recip =
       (float)((int)v1->w_recip + (int)((ulonglong)lVar1 >> 0x20) * 2 + (uint)CARRY4(uVar3,uVar3));
  return;
}


// Assembly code:
// 004375c0: PUSH EBX
//   Label: engine_clipper.c_interpolateVertexTopClipAdvanced_FUN_004375c0
// 004375c1: PUSH ESI
// 004375c2: PUSH EDI
// 004375c3: PUSH EBP
// 004375c4: MOV ESI,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004375c8: MOV EBP,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 004375cc: MOV EDI,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 004375d0: MOV EDX,dword ptr [ESI + 0x4]
// 004375d3: MOV ECX,dword ptr [ESI + 0x8]
// 004375d6: MOV EBX,dword ptr [EBP + 0x8]
// 004375d9: ADD EDX,ECX
// 004375db: MOV ECX,dword ptr [EBP + 0x4]
// 004375de: ADD ECX,EBX
// 004375e0: MOV EBX,EDX
// 004375e2: SUB EBX,ECX
// 004375e4: CMP EDX,EBX
// 004375e6: JGE 0x004375fa
//   XREF to: 004375fa (CONDITIONAL_JUMP)
// 004375e8: NEG EBX
// 004375ea: CMP EDX,EBX
// 004375ec: JLE 0x00437601
//   XREF to: 00437601 (CONDITIONAL_JUMP)
// 004375ee: NEG EBX
// 004375f0: XOR EAX,EAX
// 004375f2: SAR EDX,0x1
// 004375f4: RCR EAX,0x1
// 004375f6: IDIV EBX
// 004375f8: JMP 0x00437608
//   XREF to: 00437608 (UNCONDITIONAL_JUMP)
// 004375fa: MOV EAX,0x7fffffff
//   Label: LAB_004375fa
// 004375ff: JMP 0x00437608
//   XREF to: 00437608 (UNCONDITIONAL_JUMP)
// 00437601: NEG EBX
//   Label: LAB_00437601
// 00437603: MOV EAX,0x80000000
// 00437608: MOV ECX,EAX
//   Label: LAB_00437608
// 0043760a: MOV EDX,dword ptr [ESI + 0x8]
// 0043760d: MOV EAX,dword ptr [EBP + 0x8]
// 00437610: SUB EAX,EDX
// 00437612: MOV EDX,ECX
// 00437614: IMUL EDX
// 00437616: ADD EAX,EAX
// 00437618: ADC EDX,EDX
// 0043761a: MOV EAX,EDX
// 0043761c: MOV EDX,dword ptr [ESI + 0x8]
// 0043761f: ADD EAX,EDX
// 00437621: MOV dword ptr [EDI + 0x8],EAX
// 00437624: MOV EBX,EAX
// 00437626: MOV dword ptr [EDI + 0x4],EAX
// 00437629: NEG EBX
// 0043762b: MOV dword ptr [EDI + 0x4],EBX
// 0043762e: MOV EAX,dword ptr [EBP]
// 00437631: SUB EAX,dword ptr [ESI]
// 00437633: MOV EDX,ECX
// 00437635: IMUL EDX
// 00437637: ADD EAX,EAX
// 00437639: ADC EDX,EDX
// 0043763b: MOV EAX,EDX
// 0043763d: MOV EDX,dword ptr [ESI]
// 0043763f: MOV dword ptr [EDI + 0x10],0xffffffff
// 00437646: ADD EAX,EDX
// 00437648: MOV dword ptr [EDI],EAX
// 0043764a: MOV EAX,dword ptr [EBP + 0x20]
// 0043764d: MOV EBX,dword ptr [ESI + 0x20]
// 00437650: MOV EDX,ECX
// 00437652: SUB EAX,EBX
// 00437654: IMUL EDX
// 00437656: ADD EAX,EAX
// 00437658: ADC EDX,EDX
// 0043765a: MOV EAX,EDX
// 0043765c: MOV EDX,dword ptr [ESI + 0x20]
// 0043765f: ADD EAX,EDX
// 00437661: MOV dword ptr [EDI + 0x20],EAX
// 00437664: MOV EAX,dword ptr [EBP + 0x24]
// 00437667: SUB EAX,dword ptr [ESI + 0x24]
// 0043766a: MOV EDX,ECX
// 0043766c: IMUL EDX
// 0043766e: ADD EAX,EAX
// 00437670: ADC EDX,EDX
// 00437672: MOV EAX,EDX
// 00437674: MOV EDX,dword ptr [ESI + 0x24]
// 00437677: ADD EAX,EDX
// 00437679: MOV dword ptr [EDI + 0x24],EAX
// 0043767c: MOV EAX,dword ptr [EBP + 0x28]
// 0043767f: MOV EBX,dword ptr [ESI + 0x28]
// 00437682: MOV EDX,ECX
// 00437684: SUB EAX,EBX
// 00437686: IMUL EDX
// 00437688: ADD EAX,EAX
// 0043768a: ADC EDX,EDX
// 0043768c: MOV EAX,EDX
// 0043768e: MOV EDX,dword ptr [ESI + 0x28]
// 00437691: ADD EDX,EAX
// 00437693: MOV dword ptr [EDI + 0x28],EDX
// 00437696: MOV EAX,dword ptr [EBP + 0x18]
// 00437699: SUB EAX,dword ptr [ESI + 0x18]
// 0043769c: MOV EDX,ECX
// 0043769e: IMUL EDX
// 004376a0: ADD EAX,EAX
// 004376a2: ADC EDX,EDX
// 004376a4: MOV EAX,EDX
// 004376a6: MOV EDX,dword ptr [ESI + 0x18]
// 004376a9: ADD EDX,EAX
// 004376ab: MOV dword ptr [EDI + 0x18],EDX
// 004376ae: MOV EAX,dword ptr [EBP + 0x1c]
// 004376b1: MOV EBX,dword ptr [ESI + 0x1c]
// 004376b4: MOV EDX,ECX
// 004376b6: SUB EAX,EBX
// 004376b8: IMUL EDX
// 004376ba: ADD EAX,EAX
// 004376bc: ADC EDX,EDX
// 004376be: MOV EAX,EDX
// 004376c0: MOV EDX,dword ptr [ESI + 0x1c]
// 004376c3: ADD EDX,EAX
// 004376c5: MOV dword ptr [EDI + 0x1c],EDX
// 004376c8: MOV EAX,dword ptr [EBP + 0x2c]
// 004376cb: MOV EBP,dword ptr [ESI + 0x2c]
// 004376ce: MOV EDX,ECX
// 004376d0: SUB EAX,EBP
// 004376d2: IMUL EDX
// 004376d4: ADD EAX,EAX
// 004376d6: ADC EDX,EDX
// 004376d8: MOV EAX,EDX
// 004376da: MOV EDX,dword ptr [ESI + 0x2c]
// 004376dd: ADD EDX,EAX
// 004376df: MOV dword ptr [EDI + 0x2c],EDX
// 004376e2: POP EBP
// 004376e3: POP EDI
// 004376e4: POP ESI
// 004376e5: POP EBX
// 004376e6: RET
