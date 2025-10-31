// Name: core_dracbrid.cpp_FUN_00485b20
// Address: 00485b20
// Address Range: [[00485b20, 00485bb9]]
// Convention: unknown
// Signature: undefined core_dracbrid.cpp_FUN_00485b20()
// Cross-references:
//   core_dracbrid.cpp_FUN_004858f0 (004858f0) at 00485966 [UNCONDITIONAL_CALL]
// Function calls:
//   core_bodypart.cpp_CreateBodyPart_FUN_00418e10
//   core_bodypart.cpp_FUN_0041a050
//   core_charactr.cpp_CCharacter_FUN_0042bd30

#include "nocturne.h"

/* Signature: undefined1 actors_enemy_draculabride.cpp_FUN_00485b20(undefined4 param_1, undefined4
   param_2, undefined4 param_3, undefined4 param_4) */

void core_dracbrid_cpp_FUN_00485b20(void)

{
  char *pcVar1;
  int iVar2;
  CCharacter *in_stack_00000004;
  int in_stack_00000008;
  
  if (((in_stack_00000004->model).padding_0x0[0x2260] != '\0') &&
     (*(int *)((in_stack_00000004->model).padding_0x0 + in_stack_00000008 * 4 + 0x2140) != 0)) {
    iVar2 = core_bodypart_cpp_CreateBodyPart_FUN_00418e10();
    core_charactr_cpp_CCharacter_FUN_0042bd30(in_stack_00000004);
    core_bodypart_cpp_FUN_0041a050();
    *(int *)(in_stack_00000004[1].base_actor.metadata.field3_0x1c +
            *(int *)in_stack_00000004[1].base_actor.metadata.field3_0x1c * 4 + 4) = iVar2;
    pcVar1 = in_stack_00000004[1].base_actor.metadata.field3_0x1c;
    *(int *)pcVar1 = *(int *)pcVar1 + 1;
    *(undefined4 *)(iVar2 + 0xfc) = 1;
    *(undefined4 *)(iVar2 + 0xcb4) = 1;
    *(undefined4 *)(iVar2 + 0xcc0) = 0xffff;
    return;
  }
  return;
}


// Assembly code:
// 00485b20: PUSH EBX
//   Label: core_dracbrid.cpp_FUN_00485b20
// 00485b21: PUSH EBP
// 00485b22: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 00485b26: LEA EAX,[EBX + 0x23b8]
// 00485b2c: CMP byte ptr [EAX],0x0
// 00485b2f: JZ 0x00485b3f
//   XREF to: 00485b3f (CONDITIONAL_JUMP)
// 00485b31: MOV EAX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 00485b35: CMP dword ptr [EBX + EAX*0x4 + 0x2298],0x0
// 00485b3d: JNZ 0x00485b42
//   XREF to: 00485b42 (CONDITIONAL_JUMP)
// 00485b3f: POP EBP
//   Label: LAB_00485b3f
// 00485b40: POP EBX
// 00485b41: RET
// 00485b42: PUSH EDI
//   Label: LAB_00485b42
// 00485b43: PUSH ESI
// 00485b44: MOV ECX,dword ptr [EBX + 0x2610]
// 00485b4a: PUSH ECX
// 00485b4b: PUSH 0x0
// 00485b4d: PUSH 0x0
// 00485b4f: PUSH EBX
// 00485b50: MOV ESI,dword ptr [ESP + 0x2c]
//   XREF to: Stack[0xc] (READ)
// 00485b54: PUSH ESI
// 00485b55: LEA EAX,[EBX + 0x30]
// 00485b58: PUSH EAX
// 00485b59: LEA EAX,[EBX + 0x20]
// 00485b5c: PUSH EAX
// 00485b5d: CALL core_bodypart.cpp_CreateBodyPart_FUN_00418e10
//   XREF to: 00418e10 (UNCONDITIONAL_CALL)
// 00485b62: ADD ESP,0x1c
// 00485b65: MOV EDI,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x10] (READ)
// 00485b69: PUSH EDI
// 00485b6a: MOV EBP,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x8] (READ)
// 00485b6e: PUSH EBP
// 00485b6f: PUSH EAX
// 00485b70: PUSH EBX
// 00485b71: MOV ESI,EAX
// 00485b73: CALL core_charactr.cpp_CCharacter_FUN_0042bd30
//   XREF to: 0042bd30 (UNCONDITIONAL_CALL)
// 00485b78: ADD ESP,0x10
// 00485b7b: PUSH ESI
// 00485b7c: CALL core_bodypart.cpp_FUN_0041a050
//   XREF to: 0041a050 (UNCONDITIONAL_CALL)
// 00485b81: MOV EAX,dword ptr [EBX + 0xbf68]
// 00485b87: MOV dword ptr [EBX + EAX*0x4 + 0xbf6c],ESI
// 00485b8e: INC dword ptr [EBX + 0xbf68]
// 00485b94: MOV dword ptr [ESI + 0xfc],0x1
// 00485b9e: MOV dword ptr [ESI + 0xcb4],0x1
// 00485ba8: ADD ESP,0x4
// 00485bab: MOV dword ptr [ESI + 0xcc0],0xffff
// 00485bb5: POP ESI
// 00485bb6: POP EDI
// 00485bb7: POP EBP
// 00485bb8: POP EBX
// 00485bb9: RET
