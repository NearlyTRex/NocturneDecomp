// Name: core_npc.cpp_CNPC_FUN_00544870
// Address: 00544870
// Address Range: [[00544870, 005448a7]]
// Convention: __cdecl
// Signature: void core_npc.cpp_CNPC_FUN_00544870(CNPC * this_ptr)
// Cross-references:
//   core_hiram.cpp_FUN_004f4530 (004f4530) at 004f4535 [UNCONDITIONAL_CALL]
//   core_hostage.cpp_NPCSFromZombieTown_FUN_004f4970 (004f4970) at 004f4b0c [UNCONDITIONAL_CALL]
//   core_passngr.cpp_FUN_00545d30 (00545d30) at 00545d38 [UNCONDITIONAL_CALL]
//   core_tbplayer.cpp_CBassPlayer_FUN_005da090 (005da090) at 005da097 [UNCONDITIONAL_CALL]
//   core_tbplayer.cpp_CDrummer_FUN_005da2f0 (005da2f0) at 005da2f7 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_priest_dfm_0063e314
// Function calls:
//   core_charactr.cpp_CCharacter_FUN_00428140
//   crt_string.c_stricmp_FUN_005fe7f0

#include "nocturne.h"

void __cdecl core_npc_cpp_CNPC_FUN_00544870(CNPC *this_ptr)

{
  int iVar1;
  
  core_charactr_cpp_CCharacter_FUN_00428140(&this_ptr->base_character);
  iVar1 = crt_string_c_stricmp_FUN_005fe7f0
                    ((this_ptr->base_character).model.field11_0x2260,"priest.dfm");
  if (iVar1 != 0) {
    return;
  }
  (this_ptr->base_character).field11_0x25a0[0x70] = '\x02';
  (this_ptr->base_character).field11_0x25a0[0x71] = '\0';
  (this_ptr->base_character).field11_0x25a0[0x72] = '\0';
  (this_ptr->base_character).field11_0x25a0[0x73] = '\0';
  return;
}


// Assembly code:
// 00544870: PUSH EBX
//   Label: core_npc.cpp_CNPC_FUN_00544870
// 00544871: PUSH EBP
// 00544872: MOV EBP,ESP
// 00544874: MOV EBX,dword ptr [EBP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 00544877: PUSH EBX
// 00544878: CALL core_charactr.cpp_CCharacter_FUN_00428140
//   XREF to: 00428140 (UNCONDITIONAL_CALL)
// 0054487d: ADD ESP,0x4
// 00544880: PUSH 0x63e314
//   XREF to: 0063e314 (DATA)
// 00544885: LEA EAX,[EBX + 0x23b8]
// 0054488b: PUSH EAX
// 0054488c: CALL crt_string.c_stricmp_FUN_005fe7f0
//   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)
// 00544891: ADD ESP,0x8
// 00544894: TEST EAX,EAX
// 00544896: JZ 0x0054489b
//   XREF to: 0054489b (CONDITIONAL_JUMP)
// 00544898: POP EBP
// 00544899: POP EBX
// 0054489a: RET
// 0054489b: MOV dword ptr [EBX + 0x2610],0x2
//   Label: LAB_0054489b
// 005448a5: POP EBP
// 005448a6: POP EBX
// 005448a7: RET
