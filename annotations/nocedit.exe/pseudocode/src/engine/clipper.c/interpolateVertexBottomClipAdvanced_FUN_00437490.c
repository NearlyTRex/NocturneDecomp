// Name: engine_clipper.c_interpolateVertexBottomClipAdvanced_FUN_00437490
// Address: 00437490
// Address Range: [[00437490, 004375b5]]
// Convention: __cdecl
// Signature: void engine_clipper.c_interpolateVertexBottomClipAdvanced_FUN_00437490(SRenderVertex * v1, SRenderVertex * v2, SRenderVertex * output)
// Cross-references:
//   engine_clipper.c_clipPolygonHorizontalPlanes_FUN_00437980 (00437980) at 00437a3b [UNCONDITIONAL_CALL]
//   engine_clipper.c_clipPolygonToViewFrustumAdvanced_FUN_00437ca0 (00437ca0) at 004382ab [UNCONDITIONAL_CALL]
//   engine_clipper.c_clipPolygonToViewport_FUN_00438420 (00438420) at 00438aa3 [UNCONDITIONAL_CALL]

#include "nocturne.h"

void __cdecl
engine_clipper_c_interpolateVertexBottomClipAdvanced_FUN_00437490
          (SRenderVertex *v1,SRenderVertex *v2,SRenderVertex *output)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  iVar3 = (v1->projected_vertex).transformed_z;
  iVar2 = ((v2->projected_vertex).transformed_y + iVar3) -
          ((v1->projected_vertex).transformed_y + (v2->projected_vertex).transformed_z);
  uVar4 = iVar3 - (v1->projected_vertex).transformed_y;
  if ((int)uVar4 < iVar2) {
    if (uVar4 == -iVar2 || SBORROW4(uVar4,-iVar2) != (int)(uVar4 + iVar2) < 0) {
      iVar3 = -0x80000000;
    }
    else {
      iVar3 = (int)(CONCAT44((int)uVar4 >> 1,(uint)((uVar4 & 1) != 0) << 0x1f) / (longlong)iVar2);
    }
  }
  else {
    iVar3 = 0x7fffffff;
  }
  lVar1 = (longlong)((v2->projected_vertex).transformed_z - (v1->projected_vertex).transformed_z) *
          (longlong)iVar3;
  uVar4 = (uint)lVar1;
  iVar2 = (int)((ulonglong)lVar1 >> 0x20) * 2 + (uint)CARRY4(uVar4,uVar4) +
          (v1->projected_vertex).transformed_z;
  (output->projected_vertex).transformed_z = iVar2;
  (output->projected_vertex).transformed_y = iVar2;
  lVar1 = (longlong)((v2->projected_vertex).transformed_x - (v1->projected_vertex).transformed_x) *
          (longlong)iVar3;
  uVar4 = (uint)lVar1;
  iVar2 = (v1->projected_vertex).transformed_x;
  (output->projected_vertex).screen_x = -1;
  (output->projected_vertex).transformed_x =
       (int)((ulonglong)lVar1 >> 0x20) * 2 + (uint)CARRY4(uVar4,uVar4) + iVar2;
  lVar1 = (longlong)((int)v2->light - (int)v1->light) * (longlong)iVar3;
  uVar4 = (uint)lVar1;
  output->light =
       (float)((int)((ulonglong)lVar1 >> 0x20) * 2 + (uint)CARRY4(uVar4,uVar4) + (int)v1->light);
  lVar1 = (longlong)(v2->color - v1->color) * (longlong)iVar3;
  uVar4 = (uint)lVar1;
  output->color = v1->color + (int)((ulonglong)lVar1 >> 0x20) * 2 + (uint)CARRY4(uVar4,uVar4);
  lVar1 = (longlong)((int)v2->fog - (int)v1->fog) * (longlong)iVar3;
  uVar4 = (uint)lVar1;
  output->fog = (float)((int)v1->fog +
                       (int)((ulonglong)lVar1 >> 0x20) * 2 + (uint)CARRY4(uVar4,uVar4));
  lVar1 = (longlong)((int)v2->u - (int)v1->u) * (longlong)iVar3;
  uVar4 = (uint)lVar1;
  output->u = (float)((int)v1->u + (int)((ulonglong)lVar1 >> 0x20) * 2 + (uint)CARRY4(uVar4,uVar4));
  lVar1 = (longlong)((int)v2->v - (int)v1->v) * (longlong)iVar3;
  uVar4 = (uint)lVar1;
  output->v = (float)((int)v1->v + (int)((ulonglong)lVar1 >> 0x20) * 2 + (uint)CARRY4(uVar4,uVar4));
  lVar1 = (longlong)((int)v2->w_recip - (int)v1->w_recip) * (longlong)iVar3;
  uVar4 = (uint)lVar1;
  output->w_recip =
       (float)((int)v1->w_recip + (int)((ulonglong)lVar1 >> 0x20) * 2 + (uint)CARRY4(uVar4,uVar4));
  return;
}


// Assembly code:
// 00437490: PUSH EBX
//   Label: engine_clipper.c_interpolateVertexBottomClipAdvanced_FUN_00437490
// 00437491: PUSH ESI
// 00437492: PUSH EDI
// 00437493: PUSH EBP
// 00437494: MOV ECX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00437498: MOV EDI,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0043749c: MOV ESI,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 004374a0: MOV EAX,dword ptr [EDI + 0x4]
// 004374a3: MOV EDX,dword ptr [ECX + 0x8]
// 004374a6: MOV EBX,dword ptr [ECX + 0x4]
// 004374a9: MOV EBP,dword ptr [EDI + 0x8]
// 004374ac: ADD EAX,EDX
// 004374ae: ADD EBX,EBP
// 004374b0: SUB EAX,EBX
// 004374b2: MOV EBX,EDX
// 004374b4: MOV EDX,dword ptr [ECX + 0x4]
// 004374b7: SUB EBX,EDX
// 004374b9: MOV EDX,EBX
// 004374bb: MOV EBX,EAX
// 004374bd: CMP EDX,EBX
// 004374bf: JGE 0x004374d3
//   XREF to: 004374d3 (CONDITIONAL_JUMP)
// 004374c1: NEG EBX
// 004374c3: CMP EDX,EBX
// 004374c5: JLE 0x004374da
//   XREF to: 004374da (CONDITIONAL_JUMP)
// 004374c7: NEG EBX
// 004374c9: XOR EAX,EAX
// 004374cb: SAR EDX,0x1
// 004374cd: RCR EAX,0x1
// 004374cf: IDIV EBX
// 004374d1: JMP 0x004374e1
//   XREF to: 004374e1 (UNCONDITIONAL_JUMP)
// 004374d3: MOV EAX,0x7fffffff
//   Label: LAB_004374d3
// 004374d8: JMP 0x004374e1
//   XREF to: 004374e1 (UNCONDITIONAL_JUMP)
// 004374da: NEG EBX
//   Label: LAB_004374da
// 004374dc: MOV EAX,0x80000000
// 004374e1: MOV EBX,EAX
//   Label: LAB_004374e1
// 004374e3: MOV EBP,dword ptr [ECX + 0x8]
// 004374e6: MOV EAX,dword ptr [EDI + 0x8]
// 004374e9: MOV EDX,EBX
// 004374eb: SUB EAX,EBP
// 004374ed: IMUL EDX
// 004374ef: ADD EAX,EAX
// 004374f1: ADC EDX,EDX
// 004374f3: MOV EAX,EDX
// 004374f5: MOV EDX,dword ptr [ECX + 0x8]
// 004374f8: ADD EAX,EDX
// 004374fa: MOV dword ptr [ESI + 0x8],EAX
// 004374fd: MOV dword ptr [ESI + 0x4],EAX
// 00437500: MOV EAX,dword ptr [EDI]
// 00437502: SUB EAX,dword ptr [ECX]
// 00437504: MOV EDX,EBX
// 00437506: IMUL EDX
// 00437508: ADD EAX,EAX
// 0043750a: ADC EDX,EDX
// 0043750c: MOV EAX,EDX
// 0043750e: MOV EDX,dword ptr [ECX]
// 00437510: MOV dword ptr [ESI + 0x10],0xffffffff
// 00437517: ADD EAX,EDX
// 00437519: MOV dword ptr [ESI],EAX
// 0043751b: MOV EAX,dword ptr [EDI + 0x20]
// 0043751e: MOV EBP,dword ptr [ECX + 0x20]
// 00437521: MOV EDX,EBX
// 00437523: SUB EAX,EBP
// 00437525: IMUL EDX
// 00437527: ADD EAX,EAX
// 00437529: ADC EDX,EDX
// 0043752b: MOV EAX,EDX
// 0043752d: MOV EDX,dword ptr [ECX + 0x20]
// 00437530: ADD EAX,EDX
// 00437532: MOV dword ptr [ESI + 0x20],EAX
// 00437535: MOV EAX,dword ptr [EDI + 0x24]
// 00437538: SUB EAX,dword ptr [ECX + 0x24]
// 0043753b: MOV EDX,EBX
// 0043753d: IMUL EDX
// 0043753f: ADD EAX,EAX
// 00437541: ADC EDX,EDX
// 00437543: MOV EAX,EDX
// 00437545: MOV EDX,dword ptr [ECX + 0x24]
// 00437548: ADD EDX,EAX
// 0043754a: MOV dword ptr [ESI + 0x24],EDX
// 0043754d: MOV EAX,dword ptr [EDI + 0x28]
// 00437550: MOV EBP,dword ptr [ECX + 0x28]
// 00437553: MOV EDX,EBX
// 00437555: SUB EAX,EBP
// 00437557: IMUL EDX
// 00437559: ADD EAX,EAX
// 0043755b: ADC EDX,EDX
// 0043755d: MOV EAX,EDX
// 0043755f: MOV EDX,dword ptr [ECX + 0x28]
// 00437562: ADD EDX,EAX
// 00437564: MOV dword ptr [ESI + 0x28],EDX
// 00437567: MOV EAX,dword ptr [EDI + 0x18]
// 0043756a: SUB EAX,dword ptr [ECX + 0x18]
// 0043756d: MOV EDX,EBX
// 0043756f: IMUL EDX
// 00437571: ADD EAX,EAX
// 00437573: ADC EDX,EDX
// 00437575: MOV EAX,EDX
// 00437577: MOV EDX,dword ptr [ECX + 0x18]
// 0043757a: ADD EDX,EAX
// 0043757c: MOV dword ptr [ESI + 0x18],EDX
// 0043757f: MOV EAX,dword ptr [EDI + 0x1c]
// 00437582: MOV EBP,dword ptr [ECX + 0x1c]
// 00437585: MOV EDX,EBX
// 00437587: SUB EAX,EBP
// 00437589: IMUL EDX
// 0043758b: ADD EAX,EAX
// 0043758d: ADC EDX,EDX
// 0043758f: MOV EAX,EDX
// 00437591: MOV EDX,dword ptr [ECX + 0x1c]
// 00437594: ADD EDX,EAX
// 00437596: MOV dword ptr [ESI + 0x1c],EDX
// 00437599: MOV EAX,dword ptr [EDI + 0x2c]
// 0043759c: SUB EAX,dword ptr [ECX + 0x2c]
// 0043759f: MOV EDX,EBX
// 004375a1: IMUL EDX
// 004375a3: ADD EAX,EAX
// 004375a5: ADC EDX,EDX
// 004375a7: MOV EAX,EDX
// 004375a9: MOV EDX,dword ptr [ECX + 0x2c]
// 004375ac: ADD EDX,EAX
// 004375ae: MOV dword ptr [ESI + 0x2c],EDX
// 004375b1: POP EBP
// 004375b2: POP EDI
// 004375b3: POP ESI
// 004375b4: POP EBX
// 004375b5: RET
