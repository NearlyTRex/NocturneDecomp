// Name: core_charactr.cpp_CCharacter_FUN_0042cd60
// Address: 0042cd60
// Address Range: [[0042cd60, 0042cd85]]
// Convention: __cdecl
// Signature: void core_charactr.cpp_CCharacter_FUN_0042cd60(CCharacter * this_ptr)
// Function calls:
//   core_door.cpp_FUN_0047fcf0

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_FUN_0042cd60(CCharacter *this_ptr)

{
  if (*(int *)(this_ptr->field11_0x25a0 + 0x14) == 0) {
    return;
  }
  core_door_cpp_FUN_0047fcf0();
  this_ptr->field11_0x25a0[0x14] = '\0';
  this_ptr->field11_0x25a0[0x15] = '\0';
  this_ptr->field11_0x25a0[0x16] = '\0';
  this_ptr->field11_0x25a0[0x17] = '\0';
  return;
}


// Assembly code:
// 0042cd60: PUSH EBX
//   Label: core_charactr.cpp_CCharacter_FUN_0042cd60
// 0042cd61: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 0042cd65: MOV EDX,dword ptr [EBX + 0x25b4]
// 0042cd6b: TEST EDX,EDX
// 0042cd6d: JNZ 0x0042cd71
//   XREF to: 0042cd71 (CONDITIONAL_JUMP)
// 0042cd6f: POP EBX
// 0042cd70: RET
// 0042cd71: PUSH EDX
//   Label: LAB_0042cd71
// 0042cd72: CALL core_door.cpp_FUN_0047fcf0
//   XREF to: 0047fcf0 (UNCONDITIONAL_CALL)
// 0042cd77: ADD ESP,0x4
// 0042cd7a: MOV dword ptr [EBX + 0x25b4],0x0
// 0042cd84: POP EBX
// 0042cd85: RET
