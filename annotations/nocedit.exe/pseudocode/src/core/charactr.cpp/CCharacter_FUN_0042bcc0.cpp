// Name: core_charactr.cpp_CCharacter_FUN_0042bcc0
// Address: 0042bcc0
// Address Range: [[0042bcc0, 0042bd29]]
// Convention: __cdecl
// Signature: void core_charactr.cpp_CCharacter_FUN_0042bcc0(CCharacter * this_ptr)
// Cross-references:
//   core_batcreat.cpp_FUN_00415dd0 (00415dd0) at 00415fe0 [UNCONDITIONAL_CALL]
//   core_batman.cpp_FUN_00417660 (00417660) at 004177a1 [UNCONDITIONAL_CALL]
//   core_charactr.cpp_CCharacter_FUN_0042b9e0 (0042b9e0) at 0042ba66 [UNCONDITIONAL_CALL]
//   core_cow.cpp_FUN_004448c0 (004448c0) at 00444a22 [UNCONDITIONAL_CALL]
//   core_gargoyle.cpp_CGargoyle_unk4_FUN_004e5530 (004e5530) at 004e5661 [UNCONDITIONAL_CALL]
//   core_ghoul.cpp_FUN_004e8520 (004e8520) at 004e8682 [UNCONDITIONAL_CALL]
//   core_imp.cpp_FUN_004fab60 (004fab60) at 004faca1 [UNCONDITIONAL_CALL]
//   core_mobster.cpp_FUN_00527380 (00527380) at 00527504 [UNCONDITIONAL_CALL]
//   core_smiley.cpp_FUN_005a32a0 (005a32a0) at 005a3421 [UNCONDITIONAL_CALL]
//   core_zombie.cpp_CZombie_FUN_005fc220 (005fc220) at 005fc382 [UNCONDITIONAL_CALL]
// Function calls:
//   core_bodypart.cpp_CreateBodyPart_FUN_00418e10
//   core_bodypart.cpp_FUN_0041a050
//   core_charactr.cpp_CCharacter_FUN_0042bd30

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_FUN_0042bcc0(CCharacter *this_ptr)

{
  int in_stack_00000008;
  
  if (((this_ptr->model).field11_0x2260[0] != '\0') &&
     ((this_ptr->model).part_visibility_flags[in_stack_00000008] != 0)) {
    core_bodypart_cpp_CreateBodyPart_FUN_00418e10();
    core_charactr_cpp_CCharacter_FUN_0042bd30(this_ptr);
    core_bodypart_cpp_FUN_0041a050();
    return;
  }
  return;
}


// Assembly code:
// 0042bcc0: PUSH EBX
//   Label: core_charactr.cpp_CCharacter_FUN_0042bcc0
// 0042bcc1: PUSH ESI
// 0042bcc2: PUSH EBP
// 0042bcc3: MOV EBX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 0042bcc7: LEA ESI,[EBX + 0x23b8]
// 0042bccd: CMP byte ptr [ESI],0x0
// 0042bcd0: JZ 0x0042bce0
//   XREF to: 0042bce0 (CONDITIONAL_JUMP)
// 0042bcd2: MOV ESI,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 0042bcd6: CMP dword ptr [EBX + ESI*0x4 + 0x2298],0x0
// 0042bcde: JNZ 0x0042bce4
//   XREF to: 0042bce4 (CONDITIONAL_JUMP)
// 0042bce0: POP EBP
//   Label: LAB_0042bce0
// 0042bce1: POP ESI
// 0042bce2: POP EBX
// 0042bce3: RET
// 0042bce4: PUSH EDI
//   Label: LAB_0042bce4
// 0042bce5: MOV ECX,dword ptr [EBX + 0x2610]
// 0042bceb: PUSH ECX
// 0042bcec: PUSH 0x0
// 0042bcee: PUSH 0x0
// 0042bcf0: PUSH EBX
// 0042bcf1: MOV ESI,dword ptr [ESP + 0x2c]
//   XREF to: Stack[0xc] (READ)
// 0042bcf5: PUSH ESI
// 0042bcf6: LEA ESI,[EBX + 0x30]
// 0042bcf9: PUSH ESI
// 0042bcfa: LEA ESI,[EBX + 0x20]
// 0042bcfd: PUSH ESI
// 0042bcfe: CALL core_bodypart.cpp_CreateBodyPart_FUN_00418e10
//   XREF to: 00418e10 (UNCONDITIONAL_CALL)
// 0042bd03: ADD ESP,0x1c
// 0042bd06: MOV EDI,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x10] (READ)
// 0042bd0a: PUSH EDI
// 0042bd0b: MOV EBP,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x8] (READ)
// 0042bd0f: PUSH EBP
// 0042bd10: PUSH EAX
// 0042bd11: PUSH EBX
// 0042bd12: MOV ESI,EAX
// 0042bd14: CALL core_charactr.cpp_CCharacter_FUN_0042bd30
//   XREF to: 0042bd30 (UNCONDITIONAL_CALL)
// 0042bd19: ADD ESP,0x10
// 0042bd1c: PUSH ESI
// 0042bd1d: CALL core_bodypart.cpp_FUN_0041a050
//   XREF to: 0041a050 (UNCONDITIONAL_CALL)
// 0042bd22: ADD ESP,0x4
// 0042bd25: POP EDI
// 0042bd26: POP EBP
// 0042bd27: POP ESI
// 0042bd28: POP EBX
// 0042bd29: RET
