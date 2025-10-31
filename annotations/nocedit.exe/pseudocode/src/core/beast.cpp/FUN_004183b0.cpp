// Name: core_beast.cpp_FUN_004183b0
// Address: 004183b0
// Address Range: [[004183b0, 004183f8]]
// Convention: unknown
// Signature: undefined core_beast.cpp_FUN_004183b0()
// Function calls:
//   core_skeleton.cpp_CDeformableModelInstance_FUN_0059fb00

#include "nocturne.h"

/* Signature: undefined1 actors_enemy_beast.cpp_FUN_004183b0(undefined4 param_1, undefined4 param_2)
    */

undefined4 core_beast_cpp_FUN_004183b0(void)

{
  undefined4 *puVar1;
  undefined4 *in_stack_00000008;
  
  puVar1 = (undefined4 *)core_skeleton_cpp_CDeformableModelInstance_FUN_0059fb00();
  if (in_stack_00000008 == puVar1) {
    return 1;
  }
  *in_stack_00000008 = *puVar1;
  in_stack_00000008[1] = puVar1[1];
  in_stack_00000008[2] = puVar1[2];
  return 1;
}


// Assembly code:
// 004183b0: PUSH EBX
//   Label: core_beast.cpp_FUN_004183b0
// 004183b1: SUB ESP,0xc
// 004183b4: MOV EBX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 004183b8: PUSH 0x0
// 004183ba: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x10] (DATA)
// 004183be: PUSH EAX
// 004183bf: MOV EAX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x4] (READ)
// 004183c3: ADD EAX,0x158
// 004183c8: PUSH EAX
// 004183c9: CALL core_skeleton.cpp_CDeformableModelInstance_FUN_0059fb00
//   XREF to: 0059fb00 (UNCONDITIONAL_CALL)
// 004183ce: ADD ESP,0xc
// 004183d1: CMP EBX,EAX
// 004183d3: JNZ 0x004183df
//   XREF to: 004183df (CONDITIONAL_JUMP)
// 004183d5: MOV EAX,0x1
// 004183da: ADD ESP,0xc
// 004183dd: POP EBX
// 004183de: RET
// 004183df: MOV EDX,dword ptr [EAX]
//   Label: LAB_004183df
// 004183e1: MOV dword ptr [EBX],EDX
// 004183e3: MOV EDX,dword ptr [EAX + 0x4]
// 004183e6: MOV dword ptr [EBX + 0x4],EDX
// 004183e9: MOV EDX,dword ptr [EAX + 0x8]
// 004183ec: MOV dword ptr [EBX + 0x8],EDX
// 004183ef: MOV EAX,0x1
// 004183f4: ADD ESP,0xc
// 004183f7: POP EBX
// 004183f8: RET
