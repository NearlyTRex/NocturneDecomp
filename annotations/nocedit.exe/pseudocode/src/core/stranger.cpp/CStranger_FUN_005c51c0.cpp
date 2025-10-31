// Name: core_stranger.cpp_CStranger_FUN_005c51c0
// Address: 005c51c0
// Address Range: [[005c51c0, 005c5225]]
// Convention: unknown
// Signature: undefined core_stranger.cpp_CStranger_FUN_005c51c0()
// Cross-references:
//   core_stranger.cpp_CStranger_FUN_005c3150 (005c3150) at 005c322c [UNCONDITIONAL_CALL]
//   core_stranger.cpp_CStranger_FUN_005c5270 (005c5270) at 005c585b [UNCONDITIONAL_CALL]
// Function calls:
//   core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
//   core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_00471fd0

#include "nocturne.h"

/* Signature: undefined1 actors_hero_stranger.cpp_CStranger_FUN_005c51c0(undefined4 param_1,
   undefined4 param_2) */

CVector3f * core_stranger_cpp_CStranger_FUN_005c51c0(void)

{
  BADSPACEBASE *in_ESP;
  int in_stack_00000004;
  CVector3f *in_stack_00000008;
  CMatrix3x3f CStack_44;
  CVector3f local_20;
  float local_10;
  float local_c;
  
  local_20.x = *(float *)(in_stack_00000004 + 0x1fbf0);
  local_20.z = 0.0;
  local_20.y = 0.0;
  core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
            ((CMatrix3x3f *)&stack0xffffffb8,&local_20);
  local_10 = 0.0;
  local_c = 0.0;
  core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0
            (&CStack_44,in_stack_00000008,(CVector3f *)&local_10);
  return in_stack_00000008;
}


// Assembly code:
// 005c51c0: PUSH EBX
//   Label: core_stranger.cpp_CStranger_FUN_005c51c0
// 005c51c1: PUSH ESI
// 005c51c2: SUB ESP,0x40
// 005c51c5: MOV EBX,dword ptr [ESP + 0x50]
//   XREF to: Stack[0x8] (READ)
// 005c51c9: MOV EAX,dword ptr [ESP + 0x4c]
//   XREF to: Stack[0x4] (READ)
// 005c51cd: MOV EAX,dword ptr [EAX + 0x1fbf0]
// 005c51d3: MOV dword ptr [ESP + 0x28],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 005c51d7: LEA EAX,[ESP + 0x28]
//   XREF to: Stack[-0x20] (DATA)
// 005c51db: PUSH EAX
// 005c51dc: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x48] (DATA)
// 005c51e0: XOR EDX,EDX
// 005c51e2: PUSH EAX
// 005c51e3: MOV dword ptr [ESP + 0x38],EDX
//   XREF to: Stack[-0x18] (WRITE)
// 005c51e7: MOV dword ptr [ESP + 0x34],EDX
//   XREF to: Stack[-0x1c] (WRITE)
// 005c51eb: CALL core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
//   XREF to: 00471d30 (UNCONDITIONAL_CALL)
// 005c51f0: ADD ESP,0x8
// 005c51f3: MOV EAX,dword ptr [ESP + 0x4c]
//   XREF to: Stack[0x4] (READ)
// 005c51f7: MOV EAX,dword ptr [EAX + 0x1fbe4]
// 005c51fd: MOV dword ptr [ESP + 0x3c],EAX
//   XREF to: Stack[-0xc] (WRITE)
// 005c5201: LEA EAX,[ESP + 0x34]
//   XREF to: Stack[-0x14] (DATA)
// 005c5205: PUSH EAX
// 005c5206: PUSH EBX
// 005c5207: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x48] (DATA)
// 005c520b: XOR ESI,ESI
// 005c520d: PUSH EAX
// 005c520e: MOV dword ptr [ESP + 0x40],ESI
//   XREF to: Stack[-0x14] (WRITE)
// 005c5212: MOV dword ptr [ESP + 0x44],ESI
//   XREF to: Stack[-0x10] (WRITE)
// 005c5216: CALL core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_00471fd0
//   XREF to: 00471fd0 (UNCONDITIONAL_CALL)
// 005c521b: ADD ESP,0xc
// 005c521e: MOV EAX,EBX
// 005c5220: ADD ESP,0x40
// 005c5223: POP ESI
// 005c5224: POP EBX
// 005c5225: RET
