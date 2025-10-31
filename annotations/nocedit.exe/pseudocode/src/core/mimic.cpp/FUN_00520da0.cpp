// Name: core_mimic.cpp_FUN_00520da0
// Address: 00520da0
// Address Range: [[00520da0, 00520dc4]]
// Convention: unknown
// Signature: undefined core_mimic.cpp_FUN_00520da0()
// Function calls:
//   core_charactr.cpp_CCharacter_FUN_0042f8a0

#include "nocturne.h"

/* Signature: undefined1 actors_enemy_mimic.cpp_FUN_00520da0(undefined4 param_1, undefined4 param_2)
    */

void core_mimic_cpp_FUN_00520da0(void)

{
  CCharacter *in_stack_00000004;
  int in_stack_00000008;
  
  if (in_stack_00000008 == *(int *)(in_stack_00000004[6].cloth_data + 0x1e88)) {
    in_stack_00000004[6].cloth_data[0x1e88] = '\0';
    in_stack_00000004[6].cloth_data[0x1e89] = '\0';
    in_stack_00000004[6].cloth_data[0x1e8a] = '\0';
    in_stack_00000004[6].cloth_data[0x1e8b] = '\0';
  }
  core_charactr_cpp_CCharacter_FUN_0042f8a0(in_stack_00000004);
  return;
}


// Assembly code:
// 00520da0: MOV EAX,dword ptr [ESP + 0x4]
//   Label: core_mimic.cpp_FUN_00520da0
//   XREF to: Stack[0x4] (READ)
// 00520da4: MOV EDX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x8] (READ)
// 00520da8: CMP EDX,dword ptr [EAX + 0x4bdf8]
// 00520dae: JNZ 0x00520dba
//   XREF to: 00520dba (CONDITIONAL_JUMP)
// 00520db0: MOV dword ptr [EAX + 0x4bdf8],0x0
// 00520dba: PUSH EDX
//   Label: LAB_00520dba
// 00520dbb: PUSH EAX
// 00520dbc: CALL core_charactr.cpp_CCharacter_FUN_0042f8a0
//   XREF to: 0042f8a0 (UNCONDITIONAL_CALL)
// 00520dc1: ADD ESP,0x8
// 00520dc4: RET
