// Name: shape_meshlod.cpp_FUN_005183e0
// Address: 005183e0
// Address Range: [[005183e0, 00518481]]
// Convention: unknown
// Signature: undefined shape_meshlod.cpp_FUN_005183e0()
// Cross-references:
//   shape_meshlod.cpp_CLodMesh_FUN_00517630 (00517630) at 00517acf [UNCONDITIONAL_CALL]
// Function calls:
//   shape_meshlod.cpp_FUN_00515d10
//   shape_meshlod.cpp_FUN_00515e00

#include "nocturne.h"

void shape_meshlod_cpp_FUN_005183e0(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int in_stack_00000004;
  int in_stack_00000008;
  int in_stack_0000000c;
  
  iVar4 = *(int *)(in_stack_00000004 + 0xc) + in_stack_00000008 * 0x8c;
  iVar3 = *(int *)(in_stack_00000004 + 0x48) + in_stack_0000000c * 0xf0;
  shape_meshlod_cpp_FUN_00515d10();
  if (*(int *)(iVar3 + 0x24) == 0) {
    *(undefined4 *)(iVar3 + 0x14) = 1;
    shape_meshlod_cpp_FUN_00515e00();
    shape_meshlod_cpp_FUN_00515e00();
  }
  iVar2 = 0;
  iVar3 = *(int *)(iVar4 + 0x34);
  iVar1 = iVar4;
  while (in_stack_0000000c != iVar3) {
    iVar2 = iVar2 + 1;
    if (2 < iVar2) break;
    iVar3 = *(int *)(iVar1 + 0x38);
    iVar1 = iVar1 + 4;
  }
  *(undefined4 *)(iVar4 + 0x34 + iVar2 * 4) = 0xffffffff;
  return;
}


// Assembly code:
// 005183e0: PUSH EBX
//   Label: shape_meshlod.cpp_FUN_005183e0
// 005183e1: PUSH ESI
// 005183e2: PUSH EDI
// 005183e3: PUSH EBP
// 005183e4: MOV EBP,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005183e8: MOV ECX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005183ec: MOV EBX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 005183f0: LEA EAX,[ECX*0x8 + 0x0]
// 005183f7: ADD EAX,ECX
// 005183f9: SHL EAX,0x2
// 005183fc: SUB EAX,ECX
// 005183fe: MOV EDI,dword ptr [EBP + 0xc]
// 00518401: SHL EAX,0x2
// 00518404: ADD EDI,EAX
// 00518406: MOV EAX,EBX
// 00518408: SHL EAX,0x4
// 0051840b: MOV EDX,EAX
// 0051840d: SHL EAX,0x4
// 00518410: MOV ESI,dword ptr [EBP + 0x48]
// 00518413: SUB EAX,EDX
// 00518415: PUSH ECX
// 00518416: ADD ESI,EAX
// 00518418: PUSH ESI
// 00518419: CALL shape_meshlod.cpp_FUN_00515d10
//   XREF to: 00515d10 (UNCONDITIONAL_CALL)
// 0051841e: MOV EDX,dword ptr [ESI + 0x24]
// 00518421: ADD ESP,0x8
// 00518424: TEST EDX,EDX
// 00518426: JZ 0x0051844e
//   XREF to: 0051844e (CONDITIONAL_JUMP)
// 00518428: MOV EDX,EDI
//   Label: LAB_00518428
// 0051842a: MOV ECX,dword ptr [EDI + 0x34]
// 0051842d: XOR EAX,EAX
// 0051842f: CMP EBX,ECX
// 00518431: JZ 0x00518441
//   XREF to: 00518441 (CONDITIONAL_JUMP)
// 00518433: INC EAX
//   Label: LAB_00518433
// 00518434: ADD EDX,0x4
// 00518437: CMP EAX,0x3
// 0051843a: JGE 0x00518441
//   XREF to: 00518441 (CONDITIONAL_JUMP)
// 0051843c: CMP EBX,dword ptr [EDX + 0x34]
// 0051843f: JNZ 0x00518433
//   XREF to: 00518433 (CONDITIONAL_JUMP)
// 00518441: MOV dword ptr [EDI + EAX*0x4 + 0x34],0xffffffff
//   Label: LAB_00518441
// 00518449: POP EBP
// 0051844a: POP EDI
// 0051844b: POP ESI
// 0051844c: POP EBX
// 0051844d: RET
// 0051844e: IMUL EDX,dword ptr [ESI],0x4c4
//   Label: LAB_0051844e
// 00518454: MOV dword ptr [ESI + 0x14],0x1
// 0051845b: MOV EAX,dword ptr [EBP + 0x4]
// 0051845e: PUSH EBX
// 0051845f: ADD EAX,EDX
// 00518461: PUSH EAX
// 00518462: CALL shape_meshlod.cpp_FUN_00515e00
//   XREF to: 00515e00 (UNCONDITIONAL_CALL)
// 00518467: IMUL EAX,dword ptr [ESI + 0x4],0x4c4
// 0051846e: ADD ESP,0x8
// 00518471: MOV EDX,dword ptr [EBP + 0x4]
// 00518474: PUSH EBX
// 00518475: ADD EAX,EDX
// 00518477: PUSH EAX
// 00518478: CALL shape_meshlod.cpp_FUN_00515e00
//   XREF to: 00515e00 (UNCONDITIONAL_CALL)
// 0051847d: ADD ESP,0x8
// 00518480: JMP 0x00518428
//   XREF to: 00518428 (UNCONDITIONAL_JUMP)
