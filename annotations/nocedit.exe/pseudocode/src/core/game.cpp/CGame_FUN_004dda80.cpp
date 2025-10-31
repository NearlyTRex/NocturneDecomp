// Name: core_game.cpp_CGame_FUN_004dda80
// Address: 004dda80
// Address Range: [[004dda80, 004ddae6]]
// Convention: __cdecl
// Signature: void core_game.cpp_CGame_FUN_004dda80(CGame * this_ptr)
// Cross-references:
//   core_game.cpp_CGame_processCheatCodes_FUN_004ddaf0 (004ddaf0) at 004e00c6 [UNCONDITIONAL_CALL]

#include "nocturne.h"

void __cdecl core_game_cpp_CGame_FUN_004dda80(CGame *this_ptr)

{
  int iVar1;
  int iVar2;
  int in_stack_00000008;
  float in_stack_0000000c;
  int in_stack_00000010;
  
  *(float *)(this_ptr->field101_0x38c + in_stack_00000010 * 4 + 0x188) =
       *(float *)(this_ptr->field101_0x38c + in_stack_00000010 * 4 + 0x188) * in_stack_0000000c;
  iVar1 = 0;
  iVar2 = in_stack_00000008;
  if (0 < *(int *)(in_stack_00000008 + 0x28558)) {
    do {
      if (in_stack_00000010 == *(int *)(iVar2 + 0x2857c)) {
        core_game_cpp_CGame_FUN_004dda80(this_ptr);
      }
      iVar1 = iVar1 + 1;
      iVar2 = iVar2 + 0x24;
    } while (iVar1 < *(int *)(in_stack_00000008 + 0x28558));
  }
  return;
}


// Assembly code:
// 004dda80: PUSH EBX
//   Label: core_game.cpp_CGame_FUN_004dda80
// 004dda81: PUSH ESI
// 004dda82: PUSH EDI
// 004dda83: PUSH EBP
// 004dda84: MOV EDI,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 004dda88: MOV EBP,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x10] (READ)
// 004dda8c: MOV EDX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004dda90: LEA EBX,[EBP*0x4 + 0x0]
// 004dda97: ADD EBX,EDX
// 004dda99: FLD float ptr [EBX + 0x514]
// 004dda9f: FMUL float ptr [ESP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 004ddaa3: FSTP float ptr [EBX + 0x514]
// 004ddaa9: MOV ECX,dword ptr [EDI + 0x28558]
// 004ddaaf: XOR EBX,EBX
// 004ddab1: TEST ECX,ECX
// 004ddab3: JLE 0x004ddacd
//   XREF to: 004ddacd (CONDITIONAL_JUMP)
// 004ddab5: MOV ESI,EDI
// 004ddab7: CMP EBP,dword ptr [ESI + 0x2857c]
//   Label: LAB_004ddab7
// 004ddabd: JZ 0x004ddad2
//   XREF to: 004ddad2 (CONDITIONAL_JUMP)
// 004ddabf: INC EBX
//   Label: LAB_004ddabf
// 004ddac0: MOV EAX,dword ptr [EDI + 0x28558]
// 004ddac6: ADD ESI,0x24
// 004ddac9: CMP EBX,EAX
// 004ddacb: JL 0x004ddab7
//   XREF to: 004ddab7 (CONDITIONAL_JUMP)
// 004ddacd: POP EBP
//   Label: LAB_004ddacd
// 004ddace: POP EDI
// 004ddacf: POP ESI
// 004ddad0: POP EBX
// 004ddad1: RET
// 004ddad2: PUSH EBX
//   Label: LAB_004ddad2
// 004ddad3: PUSH dword ptr [ESP + 0x20]
//   XREF to: Stack[0xc] (READ)
// 004ddad7: PUSH EDI
// 004ddad8: MOV ECX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x4] (READ)
// 004ddadc: PUSH ECX
// 004ddadd: CALL core_game.cpp_CGame_FUN_004dda80
//   XREF to: 004dda80 (UNCONDITIONAL_CALL)
// 004ddae2: ADD ESP,0x10
// 004ddae5: JMP 0x004ddabf
//   XREF to: 004ddabf (UNCONDITIONAL_JUMP)
