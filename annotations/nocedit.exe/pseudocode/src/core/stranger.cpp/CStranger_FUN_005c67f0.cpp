// Name: core_stranger.cpp_CStranger_FUN_005c67f0
// Address: 005c67f0
// Address Range: [[005c67f0, 005c6843]]
// Convention: __cdecl
// Signature: void core_stranger.cpp_CStranger_FUN_005c67f0(CStranger * this_ptr)
// Function calls:
//   core_charactr.cpp_CCharacter_FUN_0042cfe0

#include "nocturne.h"

void __cdecl core_stranger_cpp_CStranger_FUN_005c67f0(CStranger *this_ptr)

{
  CDemonActor_vtable *pCVar1;
  int in_stack_00000008;
  
  if ((this_ptr->base_hero).base_character.carry_hands[in_stack_00000008].carry_actor ==
      *(CDemonActor **)(this_ptr->field2_0x1fbd8 + 0x54)) {
    pCVar1 = (this_ptr->base_hero).base_character.base_actor.vtable;
    this_ptr->field2_0x1fbd8[0x54] = '\0';
    this_ptr->field2_0x1fbd8[0x55] = '\0';
    this_ptr->field2_0x1fbd8[0x56] = '\0';
    this_ptr->field2_0x1fbd8[0x57] = '\0';
    (*pCVar1[1].getAllowedMeleeAttackTypes)((CDemonActor *)this_ptr);
  }
  core_charactr_cpp_CCharacter_FUN_0042cfe0((CCharacter *)this_ptr);
  return;
}


// Assembly code:
// 005c67f0: PUSH EBX
//   Label: core_stranger.cpp_CStranger_FUN_005c67f0
// 005c67f1: PUSH ESI
// 005c67f2: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 005c67f6: MOV EDX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 005c67fa: MOV EAX,EDX
// 005c67fc: SHL EAX,0x4
// 005c67ff: ADD EAX,EDX
// 005c6801: MOV EAX,dword ptr [EBX + EAX*0x4 + 0x24b4]
// 005c6808: CMP EAX,dword ptr [EBX + 0x1fc2c]
// 005c680e: JZ 0x005c6826
//   XREF to: 005c6826 (CONDITIONAL_JUMP)
// 005c6810: MOV ECX,dword ptr [ESP + 0x14]
//   Label: LAB_005c6810
//   XREF to: Stack[0xc] (READ)
// 005c6814: PUSH ECX
// 005c6815: MOV ESI,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 005c6819: PUSH ESI
// 005c681a: PUSH EBX
// 005c681b: CALL core_charactr.cpp_CCharacter_FUN_0042cfe0
//   XREF to: 0042cfe0 (UNCONDITIONAL_CALL)
// 005c6820: ADD ESP,0xc
// 005c6823: POP ESI
// 005c6824: POP EBX
// 005c6825: RET
// 005c6826: PUSH 0x0
//   Label: LAB_005c6826
// 005c6828: MOV EAX,dword ptr [EBX + 0x154]
// 005c682e: PUSH EBX
// 005c682f: MOV dword ptr [EBX + 0x1fc2c],0x0
// 005c6839: CALL dword ptr [EAX + 0x158]
// 005c683f: ADD ESP,0x8
// 005c6842: JMP 0x005c6810
//   XREF to: 005c6810 (UNCONDITIONAL_JUMP)
