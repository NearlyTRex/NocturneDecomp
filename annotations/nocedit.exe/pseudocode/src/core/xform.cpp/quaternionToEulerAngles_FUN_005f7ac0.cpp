// Name: core_xform.cpp_quaternionToEulerAngles_FUN_005f7ac0
// Address: 005f7ac0
// Address Range: [[005f7ac0, 005f7aee]]
// Convention: __cdecl
// Signature: CVector3f * core_xform.cpp_quaternionToEulerAngles_FUN_005f7ac0(CVector3f * euler_out, CQuaternion4f * quat_ptr)
// Cross-references:
//   core_boneguy.cpp_FUN_0041bf90 (0041bf90) at 0041c169 [UNCONDITIONAL_CALL]
//   core_course.cpp_CCourse_showEditorMenu_FUN_00443040 (00443040) at 00443565 [UNCONDITIONAL_CALL]
//   core_platfrm.cpp_FUN_0054cab0 (0054cab0) at 0054cbae [UNCONDITIONAL_CALL]
//   core_platfrm.cpp_FUN_0054d720 (0054d720) at 0054d8a8 [UNCONDITIONAL_CALL]
//   core_platfrm.cpp_FUN_0054ea00 (0054ea00) at 0054ee28 [UNCONDITIONAL_CALL]
//   core_stranger.cpp_CStranger_FUN_005bf720 (005bf720) at 005bf77f [UNCONDITIONAL_CALL]
//   core_turret.cpp_CTurret_process_FUN_005e2430 (005e2430) at 005e281f [UNCONDITIONAL_CALL]
// Function calls:
//   core_xform.cpp_matrixToEulerAngles_FUN_005f5690
//   core_xform.cpp_quaternionToMatrix3x3_FUN_005f7280

#include "nocturne.h"

CVector3f * __cdecl
core_xform_cpp_quaternionToEulerAngles_FUN_005f7ac0(CVector3f *euler_out,CQuaternion4f *quat_ptr)

{
  BADSPACEBASE *in_ESP;
  CVector3f aCStack_30 [3];
  
  core_xform_cpp_quaternionToMatrix3x3_FUN_005f7280((CMatrix3x3f *)&stack0xffffffcc,quat_ptr);
  core_xform_cpp_matrixToEulerAngles_FUN_005f5690(aCStack_30,(CMatrix3x3f *)euler_out);
  return euler_out;
}


// Assembly code:
// 005f7ac0: PUSH EBX
//   Label: core_xform.cpp_quaternionToEulerAngles_FUN_005f7ac0
// 005f7ac1: SUB ESP,0x30
// 005f7ac4: MOV EBX,dword ptr [ESP + 0x38]
//   XREF to: Stack[0x4] (READ)
// 005f7ac8: MOV EDX,dword ptr [ESP + 0x3c]
//   XREF to: Stack[0x8] (READ)
// 005f7acc: PUSH EDX
// 005f7acd: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x34] (DATA)
// 005f7ad1: PUSH EAX
// 005f7ad2: CALL core_xform.cpp_quaternionToMatrix3x3_FUN_005f7280
//   XREF to: 005f7280 (UNCONDITIONAL_CALL)
// 005f7ad7: ADD ESP,0x8
// 005f7ada: PUSH EBX
// 005f7adb: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x34] (DATA)
// 005f7adf: PUSH EAX
// 005f7ae0: CALL core_xform.cpp_matrixToEulerAngles_FUN_005f5690
//   XREF to: 005f5690 (UNCONDITIONAL_CALL)
// 005f7ae5: ADD ESP,0x8
// 005f7ae8: MOV EAX,EBX
// 005f7aea: ADD ESP,0x30
// 005f7aed: POP EBX
// 005f7aee: RET
