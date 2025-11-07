// Name: shape_meshlod.cpp_FUN_0051d420
// Address: 0051d420
// Address Range: [[0051d420, 0051d490]]
// Convention: unknown
// Signature: undefined shape_meshlod.cpp_FUN_0051d420()
// Cross-references:
//   shape_meshlod.cpp_CLodMesh_FUN_00516d50 (00516d50) at 00516db9 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_d_006381fb
//   TerminatedCString s_d_006381ff
//   TerminatedCString s_d_00638203
// Function calls:
//   crt_stdio.c_fprintf_FUN_005fe6d0

#include "nocturne.h"

void shape_meshlod_cpp_FUN_0051d420(void)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int in_stack_00000004;
  FILE *in_stack_00000008;
  
  if (in_stack_00000008 != (FILE *)0x0) {
    iVar2 = 0;
    crt_stdio_c_fprintf_FUN_005fe6d0(in_stack_00000008,"%d\n",0x10);
    do {
      puVar1 = (undefined4 *)(iVar2 + *(int *)(in_stack_00000004 + 0x54));
      iVar2 = iVar2 + 4;
      crt_stdio_c_fprintf_FUN_005fe6d0(in_stack_00000008,"%d\n",*puVar1);
    } while (iVar2 != 0x4004);
    iVar3 = 0;
    for (iVar2 = 0; iVar2 < *(int *)(*(int *)(in_stack_00000004 + 0x54) + 0x4000); iVar2 = iVar2 + 1
        ) {
      puVar1 = (undefined4 *)(iVar3 + *(int *)(in_stack_00000004 + 0x58));
      iVar3 = iVar3 + 4;
      crt_stdio_c_fprintf_FUN_005fe6d0(in_stack_00000008,"%d\n",*puVar1);
    }
  }
  return;
}


// Assembly code:
// 0051d420: PUSH EBX
//   Label: shape_meshlod.cpp_FUN_0051d420
// 0051d421: PUSH ESI
// 0051d422: PUSH EDI
// 0051d423: PUSH EBP
// 0051d424: MOV EDI,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0051d428: MOV EBP,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0051d42c: TEST EBP,EBP
// 0051d42e: JNZ 0x0051d435
//   XREF to: 0051d435 (CONDITIONAL_JUMP)
// 0051d430: POP EBP
//   Label: LAB_0051d430
// 0051d431: POP EDI
// 0051d432: POP ESI
// 0051d433: POP EBX
// 0051d434: RET
// 0051d435: PUSH 0x10
//   Label: LAB_0051d435
// 0051d437: PUSH 0x6381fb
//   XREF to: 006381fb (DATA)
// 0051d43c: PUSH EBP
// 0051d43d: XOR EBX,EBX
// 0051d43f: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0051d444: ADD ESP,0xc
// 0051d447: MOV EAX,dword ptr [EDI + 0x54]
//   Label: LAB_0051d447
// 0051d44a: MOV EDX,dword ptr [EBX + EAX*0x1]
// 0051d44d: PUSH EDX
// 0051d44e: PUSH 0x6381ff
//   XREF to: 006381ff (DATA)
// 0051d453: PUSH EBP
// 0051d454: ADD EBX,0x4
// 0051d457: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0051d45c: ADD ESP,0xc
// 0051d45f: CMP EBX,0x4004
// 0051d465: JNZ 0x0051d447
//   XREF to: 0051d447 (CONDITIONAL_JUMP)
// 0051d467: XOR ESI,ESI
// 0051d469: XOR EBX,EBX
// 0051d46b: MOV EAX,dword ptr [EDI + 0x54]
//   Label: LAB_0051d46b
// 0051d46e: CMP EBX,dword ptr [EAX + 0x4000]
// 0051d474: JGE 0x0051d430
//   XREF to: 0051d430 (CONDITIONAL_JUMP)
// 0051d476: MOV EAX,dword ptr [EDI + 0x58]
// 0051d479: MOV EDX,dword ptr [ESI + EAX*0x1]
// 0051d47c: PUSH EDX
// 0051d47d: PUSH 0x638203
//   XREF to: 00638203 (DATA)
// 0051d482: PUSH EBP
// 0051d483: ADD ESI,0x4
// 0051d486: INC EBX
// 0051d487: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0051d48c: ADD ESP,0xc
// 0051d48f: JMP 0x0051d46b
//   XREF to: 0051d46b (UNCONDITIONAL_JUMP)
