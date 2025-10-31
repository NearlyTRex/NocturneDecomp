// Name: core_xform.cpp_invertAndGetTranslation_FUN_005f6140
// Address: 005f6140
// Address Range: [[005f6140, 005f6180]]
// Convention: __cdecl
// Signature: CVector3f * core_xform.cpp_invertAndGetTranslation_FUN_005f6140(CVector3f * output_vector, CMatrix3x4f * input_matrix)
// Cross-references:
//   core_skeledit.cpp_DefinitelyRelatedToEditorMode_FUN_005968b0 (005968b0) at 00598099 [UNCONDITIONAL_CALL]
// Function calls:
//   core_xform.cpp_getTranslation_FUN_005f6110
//   core_xform.cpp_inverse_FUN_005f6210

#include "nocturne.h"

CVector3f * __cdecl
core_xform_cpp_invertAndGetTranslation_FUN_005f6140
          (CVector3f *output_vector,CMatrix3x4f *input_matrix)

{
  int iVar1;
  BADSPACEBASE *in_ESP;
  undefined4 *puVar2;
  undefined4 *puVar3;
  byte bVar4;
  CMatrix3x4f *in_stack_ffffff94;
  undefined4 auStack_68 [11];
  undefined4 local_3c;
  CVector3f aCStack_38 [3];
  
  bVar4 = 0;
  core_xform_cpp_inverse_FUN_005f6210((CMatrix3x4f *)output_vector,in_stack_ffffff94);
  puVar2 = auStack_68;
  puVar3 = &local_3c;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
    puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
  }
  core_xform_cpp_getTranslation_FUN_005f6110(aCStack_38,input_matrix);
  return (CVector3f *)input_matrix;
}


// Assembly code:
// 005f6140: PUSH EBX
//   Label: core_xform.cpp_invertAndGetTranslation_FUN_005f6140
// 005f6141: PUSH ESI
// 005f6142: PUSH EDI
// 005f6143: SUB ESP,0x60
// 005f6146: MOV EBX,dword ptr [ESP + 0x74]
//   XREF to: Stack[0x8] (READ)
// 005f614a: MOV EDX,dword ptr [ESP + 0x70]
//   XREF to: Stack[0x4] (READ)
// 005f614e: PUSH EDX
// 005f614f: LEA ESI,[ESP + 0x4]
//   XREF to: Stack[-0x6c] (DATA)
// 005f6153: LEA EDI,[ESP + 0x34]
//   XREF to: Stack[-0x3c] (DATA)
// 005f6157: CALL core_xform.cpp_inverse_FUN_005f6210
//   XREF to: 005f6210 (UNCONDITIONAL_CALL)
// 005f615c: MOV ECX,0xc
// 005f6161: LEA ESI,[ESP + 0x4]
//   XREF to: Stack[-0x6c] (DATA)
// 005f6165: ADD ESP,0x4
// 005f6168: MOVSD.REP ES:EDI,ESI
// 005f616a: PUSH EBX
// 005f616b: LEA ESI,[ESP + 0x34]
//   XREF to: Stack[-0x3c] (DATA)
// 005f616f: PUSH ESI
// 005f6170: CALL core_xform.cpp_getTranslation_FUN_005f6110
//   XREF to: 005f6110 (UNCONDITIONAL_CALL)
// 005f6175: ADD ESP,0x8
// 005f6178: MOV EAX,EBX
// 005f617a: ADD ESP,0x60
// 005f617d: POP EDI
// 005f617e: POP ESI
// 005f617f: POP EBX
// 005f6180: RET
