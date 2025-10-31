// Name: engine_clipper.c_interpolateVertexLeftClipAdvanced_FUN_00437230
// Address: 00437230
// Address Range: [[00437230, 00437355]]
// Convention: __cdecl
// Signature: void engine_clipper.c_interpolateVertexLeftClipAdvanced_FUN_00437230(SRenderVertex * v1, SRenderVertex * v2, SRenderVertex * output)
// Cross-references:
//   engine_clipper.c_clipPolygonLeftPlaneGlobal_FUN_00437700 (00437700) at 004377b6 [UNCONDITIONAL_CALL]
//   engine_clipper.c_clipPolygonToViewFrustumAdvanced_FUN_00437ca0 (00437ca0) at 004381ad [UNCONDITIONAL_CALL]
//   engine_clipper.c_clipPolygonToViewport_FUN_00438420 (00438420) at 004389a5 [UNCONDITIONAL_CALL]

#include "nocturne.h"

void __cdecl
engine_clipper_c_interpolateVertexLeftClipAdvanced_FUN_00437230
          (SRenderVertex *v1,SRenderVertex *v2,SRenderVertex *output)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  iVar3 = (v1->projected_vertex).transformed_z;
  iVar2 = ((v2->projected_vertex).transformed_x + iVar3) -
          ((v1->projected_vertex).transformed_x + (v2->projected_vertex).transformed_z);
  uVar4 = iVar3 - (v1->projected_vertex).transformed_x;
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
  (output->projected_vertex).transformed_x = iVar2;
  lVar1 = (longlong)((v2->projected_vertex).transformed_y - (v1->projected_vertex).transformed_y) *
          (longlong)iVar3;
  uVar4 = (uint)lVar1;
  iVar2 = (v1->projected_vertex).transformed_y;
  (output->projected_vertex).screen_x = -1;
  (output->projected_vertex).transformed_y =
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
// 00437230: PUSH EBX
//   Label: engine_clipper.c_interpolateVertexLeftClipAdvanced_FUN_00437230
// 00437231: PUSH ESI
// 00437232: PUSH EDI
// 00437233: PUSH EBP
// 00437234: MOV ECX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00437238: MOV EDI,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0043723c: MOV ESI,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 00437240: MOV EAX,dword ptr [EDI]
// 00437242: MOV EDX,dword ptr [ECX + 0x8]
// 00437245: MOV EBX,dword ptr [ECX]
// 00437247: MOV EBP,dword ptr [EDI + 0x8]
// 0043724a: ADD EAX,EDX
// 0043724c: ADD EBX,EBP
// 0043724e: SUB EAX,EBX
// 00437250: MOV EBX,EDX
// 00437252: MOV EDX,dword ptr [ECX]
// 00437254: SUB EBX,EDX
// 00437256: MOV EDX,EBX
// 00437258: MOV EBX,EAX
// 0043725a: CMP EDX,EBX
// 0043725c: JGE 0x00437270
//   XREF to: 00437270 (CONDITIONAL_JUMP)
// 0043725e: NEG EBX
// 00437260: CMP EDX,EBX
// 00437262: JLE 0x00437277
//   XREF to: 00437277 (CONDITIONAL_JUMP)
// 00437264: NEG EBX
// 00437266: XOR EAX,EAX
// 00437268: SAR EDX,0x1
// 0043726a: RCR EAX,0x1
// 0043726c: IDIV EBX
// 0043726e: JMP 0x0043727e
//   XREF to: 0043727e (UNCONDITIONAL_JUMP)
// 00437270: MOV EAX,0x7fffffff
//   Label: LAB_00437270
// 00437275: JMP 0x0043727e
//   XREF to: 0043727e (UNCONDITIONAL_JUMP)
// 00437277: NEG EBX
//   Label: LAB_00437277
// 00437279: MOV EAX,0x80000000
// 0043727e: MOV EBX,EAX
//   Label: LAB_0043727e
// 00437280: MOV EBP,dword ptr [ECX + 0x8]
// 00437283: MOV EAX,dword ptr [EDI + 0x8]
// 00437286: MOV EDX,EBX
// 00437288: SUB EAX,EBP
// 0043728a: IMUL EDX
// 0043728c: ADD EAX,EAX
// 0043728e: ADC EDX,EDX
// 00437290: MOV EAX,EDX
// 00437292: MOV EDX,dword ptr [ECX + 0x8]
// 00437295: ADD EAX,EDX
// 00437297: MOV dword ptr [ESI + 0x8],EAX
// 0043729a: MOV dword ptr [ESI],EAX
// 0043729c: MOV EAX,dword ptr [EDI + 0x4]
// 0043729f: SUB EAX,dword ptr [ECX + 0x4]
// 004372a2: MOV EDX,EBX
// 004372a4: IMUL EDX
// 004372a6: ADD EAX,EAX
// 004372a8: ADC EDX,EDX
// 004372aa: MOV EAX,EDX
// 004372ac: MOV EDX,dword ptr [ECX + 0x4]
// 004372af: MOV dword ptr [ESI + 0x10],0xffffffff
// 004372b6: ADD EAX,EDX
// 004372b8: MOV dword ptr [ESI + 0x4],EAX
// 004372bb: MOV EAX,dword ptr [EDI + 0x20]
// 004372be: MOV EBP,dword ptr [ECX + 0x20]
// 004372c1: MOV EDX,EBX
// 004372c3: SUB EAX,EBP
// 004372c5: IMUL EDX
// 004372c7: ADD EAX,EAX
// 004372c9: ADC EDX,EDX
// 004372cb: MOV EAX,EDX
// 004372cd: MOV EDX,dword ptr [ECX + 0x20]
// 004372d0: ADD EAX,EDX
// 004372d2: MOV dword ptr [ESI + 0x20],EAX
// 004372d5: MOV EAX,dword ptr [EDI + 0x24]
// 004372d8: SUB EAX,dword ptr [ECX + 0x24]
// 004372db: MOV EDX,EBX
// 004372dd: IMUL EDX
// 004372df: ADD EAX,EAX
// 004372e1: ADC EDX,EDX
// 004372e3: MOV EAX,EDX
// 004372e5: MOV EDX,dword ptr [ECX + 0x24]
// 004372e8: ADD EDX,EAX
// 004372ea: MOV dword ptr [ESI + 0x24],EDX
// 004372ed: MOV EAX,dword ptr [EDI + 0x28]
// 004372f0: MOV EBP,dword ptr [ECX + 0x28]
// 004372f3: MOV EDX,EBX
// 004372f5: SUB EAX,EBP
// 004372f7: IMUL EDX
// 004372f9: ADD EAX,EAX
// 004372fb: ADC EDX,EDX
// 004372fd: MOV EAX,EDX
// 004372ff: MOV EDX,dword ptr [ECX + 0x28]
// 00437302: ADD EDX,EAX
// 00437304: MOV dword ptr [ESI + 0x28],EDX
// 00437307: MOV EAX,dword ptr [EDI + 0x18]
// 0043730a: SUB EAX,dword ptr [ECX + 0x18]
// 0043730d: MOV EDX,EBX
// 0043730f: IMUL EDX
// 00437311: ADD EAX,EAX
// 00437313: ADC EDX,EDX
// 00437315: MOV EAX,EDX
// 00437317: MOV EDX,dword ptr [ECX + 0x18]
// 0043731a: ADD EDX,EAX
// 0043731c: MOV dword ptr [ESI + 0x18],EDX
// 0043731f: MOV EAX,dword ptr [EDI + 0x1c]
// 00437322: MOV EBP,dword ptr [ECX + 0x1c]
// 00437325: MOV EDX,EBX
// 00437327: SUB EAX,EBP
// 00437329: IMUL EDX
// 0043732b: ADD EAX,EAX
// 0043732d: ADC EDX,EDX
// 0043732f: MOV EAX,EDX
// 00437331: MOV EDX,dword ptr [ECX + 0x1c]
// 00437334: ADD EDX,EAX
// 00437336: MOV dword ptr [ESI + 0x1c],EDX
// 00437339: MOV EAX,dword ptr [EDI + 0x2c]
// 0043733c: SUB EAX,dword ptr [ECX + 0x2c]
// 0043733f: MOV EDX,EBX
// 00437341: IMUL EDX
// 00437343: ADD EAX,EAX
// 00437345: ADC EDX,EDX
// 00437347: MOV EAX,EDX
// 00437349: MOV EDX,dword ptr [ECX + 0x2c]
// 0043734c: ADD EDX,EAX
// 0043734e: MOV dword ptr [ESI + 0x2c],EDX
// 00437351: POP EBP
// 00437352: POP EDI
// 00437353: POP ESI
// 00437354: POP EBX
// 00437355: RET
