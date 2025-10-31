// Name: core_xform.cpp_quaternionToMatrix3x4_FUN_005f73e0
// Address: 005f73e0
// Address Range: [[005f73e0, 005f7418]]
// Convention: __cdecl
// Signature: CMatrix3x4f * core_xform.cpp_quaternionToMatrix3x4_FUN_005f73e0(CMatrix3x4f * matrix_out, CQuaternion4f * quat_ptr)
// Cross-references:
//   core_course.cpp_CCourse_FUN_00442710 (00442710) at 00442753 [UNCONDITIONAL_CALL]
//   core_skeleton.cpp_CDeformableModelInstance_FUN_0059ff20 (0059ff20) at 005a00ba [UNCONDITIONAL_CALL]
// Function calls:
//   core_xform.cpp_clearTranslation_FUN_005f5370
//   core_xform.cpp_quaternionToMatrix3x3_FUN_005f7280

#include "nocturne.h"

CMatrix3x4f * __cdecl
core_xform_cpp_quaternionToMatrix3x4_FUN_005f73e0(CMatrix3x4f *matrix_out,CQuaternion4f *quat_ptr)

{
  int iVar1;
  BADSPACEBASE *in_ESP;
  CMatrix3x4f *unaff_ESI;
  float *pfVar2;
  CMatrix3x4f *pCVar3;
  byte bVar4;
  float afStack_34 [11];
  
  bVar4 = 0;
  core_xform_cpp_quaternionToMatrix3x3_FUN_005f7280((CMatrix3x3f *)&stack0xffffffc8,matrix_out->m);
  core_xform_cpp_clearTranslation_FUN_005f5370((CMatrix3x4f *)afStack_34);
  pfVar2 = afStack_34;
  pCVar3 = unaff_ESI;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    pCVar3->m[0].w = *pfVar2;
    pfVar2 = pfVar2 + (uint)bVar4 * -2 + 1;
    pCVar3 = (CMatrix3x4f *)((int)pCVar3 + ((uint)bVar4 * -2 + 1) * 4);
  }
  return unaff_ESI;
}


// Assembly code:
// 005f73e0: PUSH EBX
//   Label: core_xform.cpp_quaternionToMatrix3x4_FUN_005f73e0
// 005f73e1: PUSH EDI
// 005f73e2: SUB ESP,0x30
// 005f73e5: MOV EBX,ESI
// 005f73e7: MOV EDX,dword ptr [ESP + 0x3c]
//   XREF to: Stack[0x4] (READ)
// 005f73eb: PUSH EDX
// 005f73ec: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x38] (DATA)
// 005f73f0: PUSH EAX
// 005f73f1: CALL core_xform.cpp_quaternionToMatrix3x3_FUN_005f7280
//   XREF to: 005f7280 (UNCONDITIONAL_CALL)
// 005f73f6: ADD ESP,0x8
// 005f73f9: MOV EAX,ESP
// 005f73fb: PUSH EAX
// 005f73fc: MOV EDI,ESI
// 005f73fe: LEA ESI,[ESP + 0x4]
//   XREF to: Stack[-0x38] (DATA)
// 005f7402: CALL core_xform.cpp_clearTranslation_FUN_005f5370
//   XREF to: 005f5370 (UNCONDITIONAL_CALL)
// 005f7407: MOV ECX,0xc
// 005f740c: ADD ESP,0x4
// 005f740f: MOVSD.REP ES:EDI,ESI
// 005f7411: MOV EAX,EBX
// 005f7413: ADD ESP,0x30
// 005f7416: POP EDI
// 005f7417: POP EBX
// 005f7418: RET
