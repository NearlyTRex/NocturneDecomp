// Name: core_werewolf.cpp_CWerewolf_FUN_005f1df0
// Address: 005f1df0
// Address Range: [[005f1df0, 005f1e3e]]
// Convention: __cdecl
// Signature: int core_werewolf.cpp_CWerewolf_FUN_005f1df0(CWerewolf * this_ptr)
// Function calls:
//   core_skeleton.cpp_CDeformableModelInstance_FUN_0059fb00

#include "nocturne.h"

int __cdecl core_werewolf_cpp_CWerewolf_FUN_005f1df0(CWerewolf *this_ptr)

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
// 005f1df0: PUSH EBX
//   Label: core_werewolf.cpp_CWerewolf_FUN_005f1df0
// 005f1df1: SUB ESP,0xc
// 005f1df4: MOV EDX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005f1df8: MOV EBX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005f1dfc: MOV ECX,dword ptr [EDX + 0xbec0]
// 005f1e02: PUSH ECX
// 005f1e03: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x10] (DATA)
// 005f1e07: PUSH EAX
// 005f1e08: LEA EAX,[EDX + 0x158]
// 005f1e0e: PUSH EAX
// 005f1e0f: CALL core_skeleton.cpp_CDeformableModelInstance_FUN_0059fb00
//   XREF to: 0059fb00 (UNCONDITIONAL_CALL)
// 005f1e14: ADD ESP,0xc
// 005f1e17: CMP EBX,EAX
// 005f1e19: JNZ 0x005f1e25
//   XREF to: 005f1e25 (CONDITIONAL_JUMP)
// 005f1e1b: MOV EAX,0x1
// 005f1e20: ADD ESP,0xc
// 005f1e23: POP EBX
// 005f1e24: RET
// 005f1e25: MOV EDX,dword ptr [EAX]
//   Label: LAB_005f1e25
// 005f1e27: MOV dword ptr [EBX],EDX
// 005f1e29: MOV EDX,dword ptr [EAX + 0x4]
// 005f1e2c: MOV dword ptr [EBX + 0x4],EDX
// 005f1e2f: MOV EDX,dword ptr [EAX + 0x8]
// 005f1e32: MOV dword ptr [EBX + 0x8],EDX
// 005f1e35: MOV EAX,0x1
// 005f1e3a: ADD ESP,0xc
// 005f1e3d: POP EBX
// 005f1e3e: RET
