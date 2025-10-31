// Name: core_enemy.cpp_CEnemy_FUN_004aa030
// Address: 004aa030
// Address Range: [[004aa030, 004aa0bd]]
// Convention: __cdecl
// Signature: void core_enemy.cpp_CEnemy_FUN_004aa030(CEnemy * this_ptr)
// Globals:
//   undefined4 DAT_0078a123
// Function calls:
//   core_charactr.cpp_CCharacter_FUN_00428f40

#include "nocturne.h"

void __cdecl core_enemy_cpp_CEnemy_FUN_004aa030(CEnemy *this_ptr)

{
  CEnemy *pCVar1;
  
  if (*(int *)(this_ptr->field6_0xbe38 + 4) != 0) {
    pCVar1 = (CEnemy *)
             (**(code **)(*(int *)(*(int *)(this_ptr->field6_0xbe38 + 4) + 0x154) + 0x108))();
    if (pCVar1 == this_ptr) {
      (**(code **)(*(int *)(*(int *)(this_ptr->field6_0xbe38 + 4) + 0x154) + 0x104))();
      if (((undefined *)(this_ptr->base_character).base_actor.field6_0x68 == &DAT_0078a123) &&
         ((this_ptr->base_character).model.modelPtr != (CDeformableModel *)0x0)) {
        core_charactr_cpp_CCharacter_FUN_00428f40(&this_ptr->base_character);
      }
      this_ptr->field6_0xbe38[4] = '\0';
      this_ptr->field6_0xbe38[5] = '\0';
      this_ptr->field6_0xbe38[6] = '\0';
      this_ptr->field6_0xbe38[7] = '\0';
      return;
    }
  }
  return;
}


// Assembly code:
// 004aa030: PUSH EBX
//   Label: core_enemy.cpp_CEnemy_FUN_004aa030
// 004aa031: SUB ESP,0xc
// 004aa034: MOV EBX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004aa038: MOV EDX,dword ptr [EBX + 0xbe3c]
// 004aa03e: TEST EDX,EDX
// 004aa040: JNZ 0x004aa047
//   XREF to: 004aa047 (CONDITIONAL_JUMP)
// 004aa042: ADD ESP,0xc
//   Label: LAB_004aa042
// 004aa045: POP EBX
// 004aa046: RET
// 004aa047: MOV EAX,EDX
//   Label: LAB_004aa047
// 004aa049: PUSH EAX
// 004aa04a: MOV EDX,dword ptr [EDX + 0x154]
// 004aa050: CALL dword ptr [EDX + 0x108]
// 004aa056: ADD ESP,0x4
// 004aa059: CMP EAX,EBX
// 004aa05b: JNZ 0x004aa042
//   XREF to: 004aa042 (CONDITIONAL_JUMP)
// 004aa05d: MOV EAX,dword ptr [EBX + 0xbe3c]
// 004aa063: PUSH EAX
// 004aa064: MOV EDX,dword ptr [EAX + 0x154]
// 004aa06a: CALL dword ptr [EDX + 0x104]
// 004aa070: MOV ECX,dword ptr [EBX + 0x68]
// 004aa073: ADD ESP,0x4
// 004aa076: CMP ECX,0x78a123
//   XREF to: 0078a123 (DATA)
// 004aa07c: JNZ 0x004aa0af
//   XREF to: 004aa0af (CONDITIONAL_JUMP)
// 004aa07e: LEA EAX,[EBX + 0x158]
// 004aa084: CMP dword ptr [EAX + 0x22b0],0x0
// 004aa08b: JZ 0x004aa0af
//   XREF to: 004aa0af (CONDITIONAL_JUMP)
// 004aa08d: PUSH EDI
// 004aa08e: MOV dword ptr [ESP + 0xc],0xba83126f
// 004aa096: LEA EAX,[ESP + 0x4]
// 004aa09a: PUSH EAX
// 004aa09b: XOR EDI,EDI
// 004aa09d: PUSH EBX
// 004aa09e: MOV dword ptr [ESP + 0xc],EDI
// 004aa0a2: MOV dword ptr [ESP + 0x10],EDI
// 004aa0a6: CALL core_charactr.cpp_CCharacter_FUN_00428f40
//   XREF to: 00428f40 (UNCONDITIONAL_CALL)
// 004aa0ab: ADD ESP,0x8
// 004aa0ae: POP EDI
// 004aa0af: MOV dword ptr [EBX + 0xbe3c],0x0
//   Label: LAB_004aa0af
// 004aa0b9: ADD ESP,0xc
// 004aa0bc: POP EBX
// 004aa0bd: RET
