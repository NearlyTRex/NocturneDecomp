// Name: core_stranger.cpp_CStranger_FUN_005c3710
// Address: 005c3710
// Address Range: [[005c3710, 005c3744]]
// Convention: __cdecl
// Signature: int core_stranger.cpp_CStranger_FUN_005c3710(CStranger * this_ptr)
// Function calls:
//   core_charactr.cpp_CCharacter_FUN_0042b0e0

#include "nocturne.h"

int __cdecl core_stranger_cpp_CStranger_FUN_005c3710(CStranger *this_ptr)

{
  core_charactr_cpp_CCharacter_FUN_0042b0e0((CCharacter *)this_ptr);
  if (*(int *)(this_ptr->field2_0x1fbd8 + 0x54) == 0) {
    return 1;
  }
  (**(code **)(*(int *)(*(int *)(this_ptr->field2_0x1fbd8 + 0x54) + 0x154) + 0xc))();
  return 1;
}


// Assembly code:
// 005c3710: PUSH EBX
//   Label: core_stranger.cpp_CStranger_FUN_005c3710
// 005c3711: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 005c3715: PUSH EBX
// 005c3716: CALL core_charactr.cpp_CCharacter_FUN_0042b0e0
//   XREF to: 0042b0e0 (UNCONDITIONAL_CALL)
// 005c371b: MOV EDX,dword ptr [EBX + 0x1fc2c]
// 005c3721: ADD ESP,0x4
// 005c3724: TEST EDX,EDX
// 005c3726: JNZ 0x005c372f
//   XREF to: 005c372f (CONDITIONAL_JUMP)
// 005c3728: MOV EAX,0x1
// 005c372d: POP EBX
// 005c372e: RET
// 005c372f: MOV EAX,EDX
//   Label: LAB_005c372f
// 005c3731: PUSH EAX
// 005c3732: MOV EDX,dword ptr [EDX + 0x154]
// 005c3738: CALL dword ptr [EDX + 0xc]
// 005c373b: ADD ESP,0x4
// 005c373e: MOV EAX,0x1
// 005c3743: POP EBX
// 005c3744: RET
