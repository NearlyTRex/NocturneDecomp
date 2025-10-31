// Name: core_script.cpp_FUN_00567d00
// Address: 00567d00
// Address Range: [[00567d00, 00567d25]]
// Convention: unknown
// Signature: undefined core_script.cpp_FUN_00567d00()
// Function calls:
//   core_actor.cpp_CVector_ctor_FUN_00410340

#include "nocturne.h"

CVector3f * core_script_cpp_FUN_00567d00(void)

{
  CVector3f *in_stack_00000004;
  float in_stack_0000000c;
  float in_stack_00000010;
  float in_stack_00000014;
  
  core_actor_cpp_CVector_ctor_FUN_00410340(in_stack_00000004);
  in_stack_00000004->x = in_stack_0000000c;
  in_stack_00000004->z = in_stack_00000010;
  in_stack_00000004->y = in_stack_00000014;
  return in_stack_00000004;
}


// Assembly code:
// 00567d00: PUSH EBX
//   Label: core_script.cpp_FUN_00567d00
// 00567d01: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 00567d05: PUSH EBX
// 00567d06: CALL core_actor.cpp_CVector_ctor_FUN_00410340
//   XREF to: 00410340 (UNCONDITIONAL_CALL)
// 00567d0b: ADD ESP,0x4
// 00567d0e: MOV EAX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 00567d12: MOV dword ptr [EBX],EAX
// 00567d14: MOV EAX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0xc] (READ)
// 00567d18: MOV dword ptr [EBX + 0x8],EAX
// 00567d1b: MOV EAX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x10] (READ)
// 00567d1f: MOV dword ptr [EBX + 0x4],EAX
// 00567d22: MOV EAX,EBX
// 00567d24: POP EBX
// 00567d25: RET
