// Name: core_xform.cpp_quaternionToEulerAnglesZYX_FUN_005f7af0
// Address: 005f7af0
// Address Range: [[005f7af0, 005f7b1e]]
// Convention: __cdecl
// Signature: CVector3f * core_xform.cpp_quaternionToEulerAnglesZYX_FUN_005f7af0(CVector3f * euler_out, CQuaternion4f * quat_ptr)
// Function calls:
//   core_xform.cpp_matrixToEulerAnglesZYX_FUN_005f5bd0
//   core_xform.cpp_quaternionToMatrix3x3_FUN_005f7280

#include "nocturne.h"

CVector3f * __cdecl
core_xform_cpp_quaternionToEulerAnglesZYX_FUN_005f7af0(CVector3f *euler_out,CQuaternion4f *quat_ptr)

{
  BADSPACEBASE *in_ESP;
  CVector3f aCStack_30 [3];
  
  core_xform_cpp_quaternionToMatrix3x3_FUN_005f7280((CMatrix3x3f *)&stack0xffffffcc,quat_ptr);
  core_xform_cpp_matrixToEulerAnglesZYX_FUN_005f5bd0(aCStack_30,(CMatrix3x3f *)euler_out);
  return euler_out;
}


// Assembly code:
// 005f7af0: PUSH EBX
//   Label: core_xform.cpp_quaternionToEulerAnglesZYX_FUN_005f7af0
// 005f7af1: SUB ESP,0x30
// 005f7af4: MOV EBX,dword ptr [ESP + 0x38]
//   XREF to: Stack[0x4] (READ)
// 005f7af8: MOV EDX,dword ptr [ESP + 0x3c]
//   XREF to: Stack[0x8] (READ)
// 005f7afc: PUSH EDX
// 005f7afd: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x34] (DATA)
// 005f7b01: PUSH EAX
// 005f7b02: CALL core_xform.cpp_quaternionToMatrix3x3_FUN_005f7280
//   XREF to: 005f7280 (UNCONDITIONAL_CALL)
// 005f7b07: ADD ESP,0x8
// 005f7b0a: PUSH EBX
// 005f7b0b: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x34] (DATA)
// 005f7b0f: PUSH EAX
// 005f7b10: CALL core_xform.cpp_matrixToEulerAnglesZYX_FUN_005f5bd0
//   XREF to: 005f5bd0 (UNCONDITIONAL_CALL)
// 005f7b15: ADD ESP,0x8
// 005f7b18: MOV EAX,EBX
// 005f7b1a: ADD ESP,0x30
// 005f7b1d: POP EBX
// 005f7b1e: RET
