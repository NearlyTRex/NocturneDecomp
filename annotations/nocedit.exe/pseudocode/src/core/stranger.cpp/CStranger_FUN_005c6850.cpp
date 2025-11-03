// Name: core_stranger.cpp_CStranger_FUN_005c6850
// Address: 005c6850
// Address Range: [[005c6850, 005c6895]]
// Convention: __cdecl
// Signature: void core_stranger.cpp_CStranger_FUN_005c6850(CStranger * this_ptr)
// Function calls:
//   core_charactr.cpp_CCharacter_FUN_0042bf90

#include "nocturne.h"

void __cdecl core_stranger_cpp_CStranger_FUN_005c6850(CStranger *this_ptr)

{
  CDemonActor_vtable *pCVar1;
  int in_stack_00000008;
  
  if (in_stack_00000008 == *(int *)(this_ptr->field2_0x1fbd8 + 0x54)) {
    pCVar1 = (this_ptr->base_hero).base_character.base_actor.vtable;
    this_ptr->field2_0x1fbd8[0x54] = '\0';
    this_ptr->field2_0x1fbd8[0x55] = '\0';
    this_ptr->field2_0x1fbd8[0x56] = '\0';
    this_ptr->field2_0x1fbd8[0x57] = '\0';
    (*pCVar1[1].getAllowedMeleeAttackTypes)((CDemonActor *)this_ptr);
  }
  core_charactr_cpp_CCharacter_FUN_0042bf90((CCharacter *)this_ptr);
  return;
}


// Assembly code:
// 005c6850: PUSH EBX
//   Label: core_stranger.cpp_CStranger_FUN_005c6850
// 005c6851: PUSH ESI
// 005c6852: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 005c6856: MOV EDX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 005c685a: CMP EDX,dword ptr [EBX + 0x1fc2c]
// 005c6860: JZ 0x005c6878
//   XREF to: 005c6878 (CONDITIONAL_JUMP)
// 005c6862: MOV ECX,dword ptr [ESP + 0x14]
//   Label: LAB_005c6862
//   XREF to: Stack[0xc] (READ)
// 005c6866: PUSH ECX
// 005c6867: MOV ESI,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 005c686b: PUSH ESI
// 005c686c: PUSH EBX
// 005c686d: CALL core_charactr.cpp_CCharacter_FUN_0042bf90
//   XREF to: 0042bf90 (UNCONDITIONAL_CALL)
// 005c6872: ADD ESP,0xc
// 005c6875: POP ESI
// 005c6876: POP EBX
// 005c6877: RET
// 005c6878: PUSH 0x0
//   Label: LAB_005c6878
// 005c687a: MOV EAX,dword ptr [EBX + 0x154]
// 005c6880: PUSH EBX
// 005c6881: MOV dword ptr [EBX + 0x1fc2c],0x0
// 005c688b: CALL dword ptr [EAX + 0x158]
// 005c6891: ADD ESP,0x8
// 005c6894: JMP 0x005c6862
//   XREF to: 005c6862 (UNCONDITIONAL_JUMP)
