// Name: core_stranger.cpp_CStranger_FUN_005c68a0
// Address: 005c68a0
// Address Range: [[005c68a0, 005c68ea]]
// Convention: __cdecl
// Signature: void core_stranger.cpp_CStranger_FUN_005c68a0(CStranger * this_ptr)
// Function calls:
//   core_charactr.cpp_CCharacter_FUN_0042f8a0

#include "nocturne.h"

void __cdecl core_stranger_cpp_CStranger_FUN_005c68a0(CStranger *this_ptr)

{
  int in_stack_00000008;
  
  core_charactr_cpp_CCharacter_FUN_0042f8a0((CCharacter *)this_ptr);
  if (in_stack_00000008 == *(int *)(this_ptr->field2_0x1fbd8 + 0x28)) {
    this_ptr->field2_0x1fbd8[0x28] = '\0';
    this_ptr->field2_0x1fbd8[0x29] = '\0';
    this_ptr->field2_0x1fbd8[0x2a] = '\0';
    this_ptr->field2_0x1fbd8[0x2b] = '\0';
    if (in_stack_00000008 != *(int *)(this_ptr->field2_0x1fbd8 + 0x48)) {
      return;
    }
  }
  else if (in_stack_00000008 != *(int *)(this_ptr->field2_0x1fbd8 + 0x48)) {
    return;
  }
  this_ptr->field2_0x1fbd8[0x48] = '\0';
  this_ptr->field2_0x1fbd8[0x49] = '\0';
  this_ptr->field2_0x1fbd8[0x4a] = '\0';
  this_ptr->field2_0x1fbd8[0x4b] = '\0';
  return;
}


// Assembly code:
// 005c68a0: PUSH EBX
//   Label: core_stranger.cpp_CStranger_FUN_005c68a0
// 005c68a1: PUSH ESI
// 005c68a2: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 005c68a6: MOV ESI,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 005c68aa: PUSH ESI
// 005c68ab: PUSH EBX
// 005c68ac: CALL core_charactr.cpp_CCharacter_FUN_0042f8a0
//   XREF to: 0042f8a0 (UNCONDITIONAL_CALL)
// 005c68b1: MOV EDX,dword ptr [EBX + 0x1fc00]
// 005c68b7: ADD ESP,0x8
// 005c68ba: CMP ESI,EDX
// 005c68bc: JZ 0x005c68c9
//   XREF to: 005c68c9 (CONDITIONAL_JUMP)
// 005c68be: CMP ESI,dword ptr [EBX + 0x1fc20]
// 005c68c4: JZ 0x005c68de
//   XREF to: 005c68de (CONDITIONAL_JUMP)
// 005c68c6: POP ESI
// 005c68c7: POP EBX
// 005c68c8: RET
// 005c68c9: MOV dword ptr [EBX + 0x1fc00],0x0
//   Label: LAB_005c68c9
// 005c68d3: CMP ESI,dword ptr [EBX + 0x1fc20]
// 005c68d9: JZ 0x005c68de
//   XREF to: 005c68de (CONDITIONAL_JUMP)
// 005c68db: POP ESI
// 005c68dc: POP EBX
// 005c68dd: RET
// 005c68de: MOV dword ptr [EBX + 0x1fc20],0x0
//   Label: LAB_005c68de
// 005c68e8: POP ESI
// 005c68e9: POP EBX
// 005c68ea: RET
