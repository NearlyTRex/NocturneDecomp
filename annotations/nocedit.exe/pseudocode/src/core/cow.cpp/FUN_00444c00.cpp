// Name: core_cow.cpp_FUN_00444c00
// Address: 00444c00
// Address Range: [[00444c00, 00444c4e]]
// Convention: unknown
// Signature: undefined core_cow.cpp_FUN_00444c00()
// Function calls:
//   core_skeleton.cpp_CDeformableModelInstance_FUN_0059fb00

#include "nocturne.h"

/* Signature: undefined1 actors_enemy_cow.cpp_FUN_00444c00(undefined4 param_1, undefined4 param_2)
    */

undefined4 core_cow_cpp_FUN_00444c00(void)

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
// 00444c00: PUSH EBX
//   Label: core_cow.cpp_FUN_00444c00
// 00444c01: SUB ESP,0xc
// 00444c04: MOV EDX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00444c08: MOV EBX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 00444c0c: MOV ECX,dword ptr [EDX + 0xbebc]
// 00444c12: PUSH ECX
// 00444c13: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x10] (DATA)
// 00444c17: PUSH EAX
// 00444c18: LEA EAX,[EDX + 0x158]
// 00444c1e: PUSH EAX
// 00444c1f: CALL core_skeleton.cpp_CDeformableModelInstance_FUN_0059fb00
//   XREF to: 0059fb00 (UNCONDITIONAL_CALL)
// 00444c24: ADD ESP,0xc
// 00444c27: CMP EBX,EAX
// 00444c29: JNZ 0x00444c35
//   XREF to: 00444c35 (CONDITIONAL_JUMP)
// 00444c2b: MOV EAX,0x1
// 00444c30: ADD ESP,0xc
// 00444c33: POP EBX
// 00444c34: RET
// 00444c35: MOV EDX,dword ptr [EAX]
//   Label: LAB_00444c35
// 00444c37: MOV dword ptr [EBX],EDX
// 00444c39: MOV EDX,dword ptr [EAX + 0x4]
// 00444c3c: MOV dword ptr [EBX + 0x4],EDX
// 00444c3f: MOV EDX,dword ptr [EAX + 0x8]
// 00444c42: MOV dword ptr [EBX + 0x8],EDX
// 00444c45: MOV EAX,0x1
// 00444c4a: ADD ESP,0xc
// 00444c4d: POP EBX
// 00444c4e: RET
