// Name: core_actor.cpp_CActorPropertyList_FUN_0040e770
// Address: 0040e770
// Address Range: [[0040e770, 0040e840]]
// Convention: unknown
// Signature: undefined core_actor.cpp_CActorPropertyList_FUN_0040e770()
// Cross-references:
//   core_msnedit.cpp_FUN_0053c4f0 (0053c4f0) at 0053c5a1 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_anon_006144b9
//   TerminatedCString s_anon_006144bc
// Function calls:
//   core_actor.cpp_FUN_0040ee30
//   core_actor.cpp_FUN_0040ee50
//   engine_2d.c_getStringWidth_FUN_004018a0

#include "nocturne.h"

void core_actor_cpp_CActorPropertyList_FUN_0040e770(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int unaff_EDI;
  int in_stack_00000004;
  int in_stack_0000000c;
  undefined4 in_stack_00000010;
  int in_stack_00000014;
  undefined4 in_stack_00000018;
  int iVar4;
  
  iVar2 = 0;
  iVar3 = 0;
  iVar4 = 0;
  if (0 < *(int *)(in_stack_00000004 + 4)) {
    do {
      iVar1 = core_actor_cpp_FUN_0040ee30();
      if (iVar2 < iVar1) {
        iVar2 = iVar1;
      }
      iVar1 = core_actor_cpp_FUN_0040ee50();
      if (iVar4 < iVar1) {
        iVar4 = iVar1;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(in_stack_00000004 + 4));
  }
  iVar4 = engine_2d_c_getStringWidth_FUN_004018a0(": ");
  *(int *)(in_stack_00000004 + 0x24f0) = in_stack_0000000c + iVar2 + iVar4 + 2;
  iVar3 = engine_2d_c_getStringWidth_FUN_004018a0(": ");
  *(int *)(in_stack_00000004 + 0x24f4) = *(int *)(in_stack_00000004 + 0x24f0) + iVar3;
  *(undefined4 *)(in_stack_00000004 + 0x24f8) = in_stack_00000010;
  *(undefined4 *)(in_stack_00000004 + 0x24fc) = in_stack_00000018;
  *(int *)(in_stack_00000004 + 0x2500) = in_stack_00000014 + 3;
  *(int *)(in_stack_00000004 + 0x24e8) = unaff_EDI + iVar2 + iVar4;
  *(int *)(in_stack_00000004 + 0x24ec) = *(int *)(in_stack_00000004 + 4) * 0xe + 6;
  return;
}


// Assembly code:
// 0040e770: PUSH EBX
//   Label: core_actor.cpp_CActorPropertyList_FUN_0040e770
// 0040e771: PUSH ESI
// 0040e772: PUSH EDI
// 0040e773: PUSH EBP
// 0040e774: SUB ESP,0x4
// 0040e777: MOV EDI,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x4] (READ)
// 0040e77b: MOV ECX,dword ptr [EDI + 0x4]
// 0040e77e: XOR EBP,EBP
// 0040e780: XOR ESI,ESI
// 0040e782: MOV dword ptr [ESP],EBP
//   XREF to: Stack[-0x14] (DATA)
// 0040e785: TEST ECX,ECX
// 0040e787: JLE 0x0040e7bd
//   XREF to: 0040e7bd (CONDITIONAL_JUMP)
// 0040e789: LEA EBX,[EDI + 0x8]
// 0040e78c: PUSH EBX
//   Label: LAB_0040e78c
// 0040e78d: CALL core_actor.cpp_FUN_0040ee30
//   XREF to: 0040ee30 (UNCONDITIONAL_CALL)
// 0040e792: ADD ESP,0x4
// 0040e795: CMP EAX,EBP
// 0040e797: JLE 0x0040e79b
//   XREF to: 0040e79b (CONDITIONAL_JUMP)
// 0040e799: MOV EBP,EAX
// 0040e79b: MOV EDX,dword ptr [EDI]
//   Label: LAB_0040e79b
// 0040e79d: PUSH EDX
// 0040e79e: PUSH EBX
// 0040e79f: CALL core_actor.cpp_FUN_0040ee50
//   XREF to: 0040ee50 (UNCONDITIONAL_CALL)
// 0040e7a4: ADD ESP,0x8
// 0040e7a7: CMP EAX,dword ptr [ESP]
//   XREF to: Stack[-0x14] (DATA)
// 0040e7aa: JLE 0x0040e7af
//   XREF to: 0040e7af (CONDITIONAL_JUMP)
// 0040e7ac: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x14] (DATA)
// 0040e7af: INC ESI
//   Label: LAB_0040e7af
// 0040e7b0: MOV EAX,dword ptr [EDI + 0x4]
// 0040e7b3: ADD EBX,0xec
// 0040e7b9: CMP ESI,EAX
// 0040e7bb: JL 0x0040e78c
//   XREF to: 0040e78c (CONDITIONAL_JUMP)
// 0040e7bd: PUSH 0x6144b9
//   Label: LAB_0040e7bd
//   XREF to: 006144b9 (DATA)
// 0040e7c2: CALL engine_2d.c_getStringWidth_FUN_004018a0
//   XREF to: 004018a0 (UNCONDITIONAL_CALL)
// 0040e7c7: ADD ESP,0x4
// 0040e7ca: ADD EBP,EAX
// 0040e7cc: MOV EAX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x8] (READ)
// 0040e7d0: ADD EAX,EBP
// 0040e7d2: ADD EAX,0x2
// 0040e7d5: PUSH 0x6144bc
//   XREF to: 006144bc (DATA)
// 0040e7da: MOV dword ptr [EDI + 0x24f0],EAX
// 0040e7e0: CALL engine_2d.c_getStringWidth_FUN_004018a0
//   XREF to: 004018a0 (UNCONDITIONAL_CALL)
// 0040e7e5: MOV EBX,EAX
// 0040e7e7: MOV EAX,dword ptr [EDI + 0x24f0]
// 0040e7ed: ADD EAX,EBX
// 0040e7ef: ADD ESP,0x4
// 0040e7f2: MOV dword ptr [EDI + 0x24f4],EAX
// 0040e7f8: MOV EAX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x8] (READ)
// 0040e7fc: MOV dword ptr [EDI + 0x24f8],EAX
// 0040e802: MOV EAX,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x10] (READ)
// 0040e806: MOV dword ptr [EDI + 0x24fc],EAX
// 0040e80c: MOV EAX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0xc] (READ)
// 0040e810: ADD EAX,0x3
// 0040e813: MOV dword ptr [EDI + 0x2500],EAX
// 0040e819: MOV EAX,dword ptr [ESP]
//   XREF to: Stack[-0x14] (DATA)
// 0040e81c: ADD EAX,EBP
// 0040e81e: MOV dword ptr [EDI + 0x24e8],EAX
// 0040e824: MOV EAX,dword ptr [EDI + 0x4]
// 0040e827: ADD EAX,EAX
// 0040e829: MOV EBX,EAX
// 0040e82b: SHL EAX,0x3
// 0040e82e: SUB EAX,EBX
// 0040e830: ADD EAX,0x6
// 0040e833: MOV dword ptr [EDI + 0x24ec],EAX
// 0040e839: ADD ESP,0x4
// 0040e83c: POP EBP
// 0040e83d: POP EDI
// 0040e83e: POP ESI
// 0040e83f: POP EBX
// 0040e840: RET
