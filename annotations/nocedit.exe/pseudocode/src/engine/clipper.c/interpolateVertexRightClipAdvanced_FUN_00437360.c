// Name: engine_clipper.c_interpolateVertexRightClipAdvanced_FUN_00437360
// Address: 00437360
// Address Range: [[00437360, 00437484]]
// Convention: __cdecl
// Signature: void engine_clipper.c_interpolateVertexRightClipAdvanced_FUN_00437360(SRenderVertex * v1, SRenderVertex * v2, SRenderVertex * output)
// Cross-references:
//   engine_clipper.c_clipPolygonRightPlaneGlobal_FUN_00437840 (00437840) at 00437900 [UNCONDITIONAL_CALL]
//   engine_clipper.c_clipPolygonToViewFrustumAdvanced_FUN_00437ca0 (00437ca0) at 0043822c [UNCONDITIONAL_CALL]
//   engine_clipper.c_clipPolygonToViewport_FUN_00438420 (00438420) at 00438a24 [UNCONDITIONAL_CALL]

#include "nocturne.h"

void __cdecl
engine_clipper_c_interpolateVertexRightClipAdvanced_FUN_00437360
          (SRenderVertex *v1,SRenderVertex *v2,SRenderVertex *output)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = (v1->projected_vertex).transformed_x + (v1->projected_vertex).transformed_z;
  iVar4 = (uVar3 - (v2->projected_vertex).transformed_x) - (v2->projected_vertex).transformed_z;
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
  (output->projected_vertex).transformed_x = iVar2;
  (output->projected_vertex).transformed_x = -iVar2;
  lVar1 = (longlong)((v2->projected_vertex).transformed_y - (v1->projected_vertex).transformed_y) *
          (longlong)iVar4;
  uVar3 = (uint)lVar1;
  iVar2 = (v1->projected_vertex).transformed_y;
  (output->projected_vertex).screen_x = -1;
  (output->projected_vertex).transformed_y =
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
  output->fog = (float)((int)((ulonglong)lVar1 >> 0x20) * 2 + (uint)CARRY4(uVar3,uVar3) +
                       (int)v1->fog);
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
// 00437360: PUSH EBX
//   Label: engine_clipper.c_interpolateVertexRightClipAdvanced_FUN_00437360
// 00437361: PUSH ESI
// 00437362: PUSH EDI
// 00437363: PUSH EBP
// 00437364: MOV ESI,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00437368: MOV EBP,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0043736c: MOV EDI,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 00437370: MOV ECX,dword ptr [ESI]
// 00437372: ADD ECX,dword ptr [ESI + 0x8]
// 00437375: MOV EAX,dword ptr [EBP]
// 00437378: MOV EBX,ECX
// 0043737a: MOV EDX,dword ptr [EBP + 0x8]
// 0043737d: SUB EBX,EAX
// 0043737f: SUB EBX,EDX
// 00437381: MOV EDX,ECX
// 00437383: CMP EDX,EBX
// 00437385: JGE 0x00437399
//   XREF to: 00437399 (CONDITIONAL_JUMP)
// 00437387: NEG EBX
// 00437389: CMP EDX,EBX
// 0043738b: JLE 0x004373a0
//   XREF to: 004373a0 (CONDITIONAL_JUMP)
// 0043738d: NEG EBX
// 0043738f: XOR EAX,EAX
// 00437391: SAR EDX,0x1
// 00437393: RCR EAX,0x1
// 00437395: IDIV EBX
// 00437397: JMP 0x004373a7
//   XREF to: 004373a7 (UNCONDITIONAL_JUMP)
// 00437399: MOV EAX,0x7fffffff
//   Label: LAB_00437399
// 0043739e: JMP 0x004373a7
//   XREF to: 004373a7 (UNCONDITIONAL_JUMP)
// 004373a0: NEG EBX
//   Label: LAB_004373a0
// 004373a2: MOV EAX,0x80000000
// 004373a7: MOV ECX,EAX
//   Label: LAB_004373a7
// 004373a9: MOV EBX,dword ptr [ESI + 0x8]
// 004373ac: MOV EAX,dword ptr [EBP + 0x8]
// 004373af: MOV EDX,ECX
// 004373b1: SUB EAX,EBX
// 004373b3: IMUL EDX
// 004373b5: ADD EAX,EAX
// 004373b7: ADC EDX,EDX
// 004373b9: MOV EAX,EDX
// 004373bb: MOV EBX,dword ptr [ESI + 0x8]
// 004373be: ADD EAX,EBX
// 004373c0: MOV dword ptr [EDI + 0x8],EAX
// 004373c3: MOV dword ptr [EDI],EAX
// 004373c5: NEG EAX
// 004373c7: MOV dword ptr [EDI],EAX
// 004373c9: MOV EAX,dword ptr [EBP + 0x4]
// 004373cc: SUB EAX,dword ptr [ESI + 0x4]
// 004373cf: MOV EDX,ECX
// 004373d1: IMUL EDX
// 004373d3: ADD EAX,EAX
// 004373d5: ADC EDX,EDX
// 004373d7: MOV EAX,EDX
// 004373d9: MOV EBX,dword ptr [ESI + 0x4]
// 004373dc: MOV dword ptr [EDI + 0x10],0xffffffff
// 004373e3: ADD EAX,EBX
// 004373e5: MOV dword ptr [EDI + 0x4],EAX
// 004373e8: MOV EAX,dword ptr [EBP + 0x20]
// 004373eb: MOV EBX,dword ptr [ESI + 0x20]
// 004373ee: MOV EDX,ECX
// 004373f0: SUB EAX,EBX
// 004373f2: IMUL EDX
// 004373f4: ADD EAX,EAX
// 004373f6: ADC EDX,EDX
// 004373f8: MOV EAX,EDX
// 004373fa: MOV EBX,dword ptr [ESI + 0x20]
// 004373fd: ADD EAX,EBX
// 004373ff: MOV dword ptr [EDI + 0x20],EAX
// 00437402: MOV EAX,dword ptr [EBP + 0x24]
// 00437405: SUB EAX,dword ptr [ESI + 0x24]
// 00437408: MOV EDX,ECX
// 0043740a: IMUL EDX
// 0043740c: ADD EAX,EAX
// 0043740e: ADC EDX,EDX
// 00437410: MOV EAX,EDX
// 00437412: MOV EBX,dword ptr [ESI + 0x24]
// 00437415: ADD EAX,EBX
// 00437417: MOV dword ptr [EDI + 0x24],EAX
// 0043741a: MOV EAX,dword ptr [EBP + 0x28]
// 0043741d: MOV EBX,dword ptr [ESI + 0x28]
// 00437420: MOV EDX,ECX
// 00437422: SUB EAX,EBX
// 00437424: IMUL EDX
// 00437426: ADD EAX,EAX
// 00437428: ADC EDX,EDX
// 0043742a: MOV EAX,EDX
// 0043742c: MOV EBX,dword ptr [ESI + 0x28]
// 0043742f: ADD EAX,EBX
// 00437431: MOV dword ptr [EDI + 0x28],EAX
// 00437434: MOV EAX,dword ptr [EBP + 0x18]
// 00437437: SUB EAX,dword ptr [ESI + 0x18]
// 0043743a: MOV EDX,ECX
// 0043743c: IMUL EDX
// 0043743e: ADD EAX,EAX
// 00437440: ADC EDX,EDX
// 00437442: MOV EAX,EDX
// 00437444: MOV EBX,dword ptr [ESI + 0x18]
// 00437447: ADD EBX,EAX
// 00437449: MOV dword ptr [EDI + 0x18],EBX
// 0043744c: MOV EAX,dword ptr [EBP + 0x1c]
// 0043744f: MOV EBX,dword ptr [ESI + 0x1c]
// 00437452: MOV EDX,ECX
// 00437454: SUB EAX,EBX
// 00437456: IMUL EDX
// 00437458: ADD EAX,EAX
// 0043745a: ADC EDX,EDX
// 0043745c: MOV EAX,EDX
// 0043745e: MOV EBX,dword ptr [ESI + 0x1c]
// 00437461: ADD EBX,EAX
// 00437463: MOV dword ptr [EDI + 0x1c],EBX
// 00437466: MOV EAX,dword ptr [EBP + 0x2c]
// 00437469: MOV EBP,dword ptr [ESI + 0x2c]
// 0043746c: MOV EDX,ECX
// 0043746e: SUB EAX,EBP
// 00437470: IMUL EDX
// 00437472: ADD EAX,EAX
// 00437474: ADC EDX,EDX
// 00437476: MOV EAX,EDX
// 00437478: MOV ECX,dword ptr [ESI + 0x2c]
// 0043747b: ADD ECX,EAX
// 0043747d: MOV dword ptr [EDI + 0x2c],ECX
// 00437480: POP EBP
// 00437481: POP EDI
// 00437482: POP ESI
// 00437483: POP EBX
// 00437484: RET
