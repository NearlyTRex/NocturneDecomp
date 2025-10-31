// Name: engine_matrix.c_projectTransformedPoint_FUN_0050cdc0
// Address: 0050cdc0
// Address Range: [[0050cdc0, 0050ce5d]]
// Convention: __cdecl
// Signature: void engine_matrix.c_projectTransformedPoint_FUN_0050cdc0(SProjectedVertex * point)
// Cross-references:
//   core_setdir.cpp_CZThumb_calculateActorVisibility_FUN_00574ba0 (00574ba0) at 00574cd3 [UNCONDITIONAL_CALL]
//   engine_matrix.c_projectCachedPoint_FUN_0050cda0 (0050cda0) at 0050cdb6 [UNCONDITIONAL_CALL]
// Globals:
//   int g_ViewportCenterXFixed
//   int g_ViewportCenterYFixed
//   int g_ViewportRightFixed
//   int g_ViewportBottomFixed

#include "nocturne.h"

void __cdecl engine_matrix_c_projectTransformedPoint_FUN_0050cdc0(SProjectedVertex *point)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  byte bVar6;
  
  iVar4 = g_ViewportCenterXFixed;
  iVar1 = point->transformed_y;
  iVar2 = point->transformed_z;
  iVar3 = point->transformed_x;
  if (iVar2 < 1) {
    point->screen_x = (int)&DAT_80000010;
    return;
  }
  bVar6 = iVar2 < iVar3;
  if (SBORROW4(iVar3,-iVar2) != iVar3 + iVar2 < 0) {
    bVar6 = bVar6 | 2;
  }
  if (iVar2 < iVar1) {
    bVar6 = bVar6 | 4;
  }
  if (SBORROW4(iVar1,-iVar2) != iVar1 + iVar2 < 0) {
    bVar6 = bVar6 | 8;
  }
  if (bVar6 != 0) {
    point->screen_x = bVar6 | 0x80000000;
    return;
  }
  point->inv_z = (int)(0x7fffffff / (longlong)iVar2);
  iVar5 = g_ViewportCenterYFixed;
  point->screen_x =
       (int)(((longlong)iVar3 * (longlong)iVar4) / (longlong)iVar2) + g_ViewportRightFixed;
  point->screen_y =
       (int)(((longlong)iVar1 * (longlong)iVar5) / (longlong)iVar2) + g_ViewportBottomFixed;
  return;
}


// Assembly code:
// 0050cdc0: PUSH ESI
//   Label: engine_matrix.c_projectTransformedPoint_FUN_0050cdc0
// 0050cdc1: PUSH EDI
// 0050cdc2: PUSH EBP
// 0050cdc3: MOV ESI,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 0050cdc7: MOV EBP,dword ptr [ESI + 0x4]
// 0050cdca: MOV ECX,dword ptr [ESI + 0x8]
// 0050cdcd: MOV EDI,dword ptr [ESI]
// 0050cdcf: TEST ECX,ECX
// 0050cdd1: JLE 0x0050ce53
//   XREF to: 0050ce53 (CONDITIONAL_JUMP)
// 0050cdd7: XOR EAX,EAX
// 0050cdd9: CMP EDI,ECX
// 0050cddb: JLE 0x0050cde2
//   XREF to: 0050cde2 (CONDITIONAL_JUMP)
// 0050cddd: MOV EAX,0x1
// 0050cde2: MOV EDX,ECX
//   Label: LAB_0050cde2
// 0050cde4: NEG EDX
// 0050cde6: CMP EDI,EDX
// 0050cde8: JGE 0x0050cdec
//   XREF to: 0050cdec (CONDITIONAL_JUMP)
// 0050cdea: OR AL,0x2
// 0050cdec: CMP EBP,ECX
//   Label: LAB_0050cdec
// 0050cdee: JLE 0x0050cdf2
//   XREF to: 0050cdf2 (CONDITIONAL_JUMP)
// 0050cdf0: OR AL,0x4
// 0050cdf2: MOV EDX,ECX
//   Label: LAB_0050cdf2
// 0050cdf4: NEG EDX
// 0050cdf6: CMP EBP,EDX
// 0050cdf8: JGE 0x0050cdfc
//   XREF to: 0050cdfc (CONDITIONAL_JUMP)
// 0050cdfa: OR AL,0x8
// 0050cdfc: TEST EAX,EAX
//   Label: LAB_0050cdfc
// 0050cdfe: JZ 0x0050ce0c
//   XREF to: 0050ce0c (CONDITIONAL_JUMP)
// 0050ce00: OR EAX,0x80000000
// 0050ce05: MOV dword ptr [ESI + 0x10],EAX
// 0050ce08: POP EBP
// 0050ce09: POP EDI
// 0050ce0a: POP ESI
// 0050ce0b: RET
// 0050ce0c: PUSH EBX
//   Label: LAB_0050ce0c
// 0050ce0d: MOV EAX,0x7fffffff
// 0050ce12: MOV EDX,EAX
// 0050ce14: SAR EDX,0x1f
// 0050ce17: IDIV ECX
// 0050ce19: MOV EBX,ECX
// 0050ce1b: MOV EDX,dword ptr [0x02d02548]
//   XREF to: 02d02548 (READ)
// 0050ce21: MOV dword ptr [ESI + 0xc],EAX
// 0050ce24: MOV EAX,EDI
// 0050ce26: IMUL EDX
// 0050ce28: IDIV EBX
// 0050ce2a: MOV EDX,dword ptr [0x02d02550]
//   XREF to: 02d02550 (READ)
// 0050ce30: MOV EBX,ECX
// 0050ce32: ADD EAX,EDX
// 0050ce34: MOV EDX,dword ptr [0x02d0254c]
//   XREF to: 02d0254c (READ)
// 0050ce3a: MOV dword ptr [ESI + 0x10],EAX
// 0050ce3d: MOV EAX,EBP
// 0050ce3f: IMUL EDX
// 0050ce41: IDIV EBX
// 0050ce43: MOV EDX,dword ptr [0x02d02554]
//   XREF to: 02d02554 (READ)
// 0050ce49: ADD EAX,EDX
// 0050ce4b: MOV dword ptr [ESI + 0x14],EAX
// 0050ce4e: POP EBX
// 0050ce4f: POP EBP
// 0050ce50: POP EDI
// 0050ce51: POP ESI
// 0050ce52: RET
// 0050ce53: MOV dword ptr [ESI + 0x10],0x80000010
//   Label: LAB_0050ce53
// 0050ce5a: POP EBP
// 0050ce5b: POP EDI
// 0050ce5c: POP ESI
// 0050ce5d: RET
