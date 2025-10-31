// Name: core_charactr.cpp_CCharacter_FUN_0042b0e0
// Address: 0042b0e0
// Address Range: [[0042b0e0, 0042b10f]]
// Convention: __cdecl
// Signature: int core_charactr.cpp_CCharacter_FUN_0042b0e0(CCharacter * this_ptr)
// Cross-references:
//   core_gabriela.cpp_FUN_004d6230 (004d6230) at 004d624c [UNCONDITIONAL_CALL]
//   core_stranger.cpp_CStranger_FUN_005c3710 (005c3710) at 005c3716 [UNCONDITIONAL_CALL]
//   core_werewolf.cpp_CWerewolf_FUN_005f1820 (005f1820) at 005f1968 [UNCONDITIONAL_CALL]
//   core_zombie.cpp_CZombie_FUN_005fbe70 (005fbe70) at 005fbfb9 [UNCONDITIONAL_CALL]
// Function calls:
//   core_charactr.cpp_CCharacter_FUN_0042b110

#include "nocturne.h"

int __cdecl core_charactr_cpp_CCharacter_FUN_0042b0e0(CCharacter *this_ptr)

{
  if ((0 < *(int *)(this_ptr->cloth_data + 0x478)) && (*(int *)this_ptr->field13_0x2620 != 0)) {
    core_charactr_cpp_CCharacter_FUN_0042b110(this_ptr);
    return *(int *)this_ptr->field13_0x2620;
  }
  return *(int *)this_ptr->field13_0x2620;
}


// Assembly code:
// 0042b0e0: PUSH EBX
//   Label: core_charactr.cpp_CCharacter_FUN_0042b0e0
// 0042b0e1: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 0042b0e5: CMP dword ptr [EBX + 0x2f10],0x0
// 0042b0ec: JLE 0x0042b0f7
//   XREF to: 0042b0f7 (CONDITIONAL_JUMP)
// 0042b0ee: CMP dword ptr [EBX + 0x2620],0x0
// 0042b0f5: JNZ 0x0042b0ff
//   XREF to: 0042b0ff (CONDITIONAL_JUMP)
// 0042b0f7: MOV EAX,dword ptr [EBX + 0x2620]
//   Label: LAB_0042b0f7
// 0042b0fd: POP EBX
// 0042b0fe: RET
// 0042b0ff: PUSH EBX
//   Label: LAB_0042b0ff
// 0042b100: CALL core_charactr.cpp_CCharacter_FUN_0042b110
//   XREF to: 0042b110 (UNCONDITIONAL_CALL)
// 0042b105: ADD ESP,0x4
// 0042b108: MOV EAX,dword ptr [EBX + 0x2620]
// 0042b10e: POP EBX
// 0042b10f: RET
