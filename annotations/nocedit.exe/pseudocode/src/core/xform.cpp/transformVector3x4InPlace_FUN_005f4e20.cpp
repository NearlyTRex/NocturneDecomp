// Name: core_xform.cpp_transformVector3x4InPlace_FUN_005f4e20
// Address: 005f4e20
// Address Range: [[005f4e20, 005f4ea3]]
// Convention: __cdecl
// Signature: CVector3f * core_xform.cpp_transformVector3x4InPlace_FUN_005f4e20(CVector3f * input_output_vector, CMatrix3x4f * matrix)
// Cross-references:
//   core_bugs.cpp_FUN_004268e0 (004268e0) at 00426ff4 [UNCONDITIONAL_CALL]
//   core_gabriela.cpp_CarryLights_FUN_004d7120 (004d7120) at 004d7212 [UNCONDITIONAL_CALL]
//   core_skeleton.cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0059ff20 (0059ff20) at 005a00df [UNCONDITIONAL_CALL]
//   core_stranger.cpp_CStranger_FUN_005c07b0 (005c07b0) at 005c128e [UNCONDITIONAL_CALL]

#include "nocturne.h"

CVector3f * __cdecl
core_xform_cpp_transformVector3x4InPlace_FUN_005f4e20
          (CVector3f *input_output_vector,CMatrix3x4f *matrix)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  BADSPACEBASE *in_ESP;
  CVector3f local_c;
  
  fVar1 = matrix->m[1].x;
  fVar2 = input_output_vector->x;
  fVar3 = matrix->m[1].w;
  fVar4 = matrix->m[1].y;
  fVar5 = matrix->m[1].z;
  fVar6 = input_output_vector->y;
  fVar7 = matrix->m[2].x;
  fVar8 = input_output_vector->x;
  fVar9 = matrix->m[2].w;
  fVar10 = matrix->m[2].y;
  fVar11 = matrix->m[2].z;
  if (input_output_vector == &local_c) {
    return input_output_vector;
  }
  input_output_vector->x =
       input_output_vector->z * matrix->m[0].y +
       input_output_vector->x * matrix->m[0].w + input_output_vector->y * matrix->m[0].x +
       matrix->m[0].z;
  input_output_vector->y =
       input_output_vector->z * fVar4 + fVar2 * fVar3 + input_output_vector->y * fVar1 + fVar5;
  input_output_vector->z = input_output_vector->z * fVar10 + fVar8 * fVar9 + fVar6 * fVar7 + fVar11;
  return input_output_vector;
}


// Assembly code:
// 005f4e20: SUB ESP,0xc
//   Label: core_xform.cpp_transformVector3x4InPlace_FUN_005f4e20
// 005f4e23: MOV EDX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 005f4e27: MOV EAX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 005f4e2b: FLD float ptr [EDX + 0x4]
// 005f4e2e: FMUL float ptr [EAX + 0x4]
// 005f4e31: FLD float ptr [EDX]
// 005f4e33: FMUL float ptr [EAX]
// 005f4e35: FADDP
// 005f4e37: FLD float ptr [EDX + 0x8]
// 005f4e3a: FMUL float ptr [EAX + 0x8]
// 005f4e3d: FADDP
// 005f4e3f: FADD float ptr [EAX + 0xc]
// 005f4e42: FSTP float ptr [ESP]
//   XREF to: Stack[-0xc] (DATA)
// 005f4e45: FLD float ptr [EDX + 0x4]
// 005f4e48: FMUL float ptr [EAX + 0x14]
// 005f4e4b: FLD float ptr [EDX]
// 005f4e4d: FMUL float ptr [EAX + 0x10]
// 005f4e50: FADDP
// 005f4e52: FLD float ptr [EDX + 0x8]
// 005f4e55: FMUL float ptr [EAX + 0x18]
// 005f4e58: FADDP
// 005f4e5a: FADD float ptr [EAX + 0x1c]
// 005f4e5d: FSTP float ptr [ESP + 0x4]
//   XREF to: Stack[-0x8] (WRITE)
// 005f4e61: FLD float ptr [EDX + 0x4]
// 005f4e64: FMUL float ptr [EAX + 0x24]
// 005f4e67: FLD float ptr [EDX]
// 005f4e69: FMUL float ptr [EAX + 0x20]
// 005f4e6c: FADDP
// 005f4e6e: FLD float ptr [EDX + 0x8]
// 005f4e71: FMUL float ptr [EAX + 0x28]
// 005f4e74: FADDP
// 005f4e76: MOV ECX,EDX
// 005f4e78: FADD float ptr [EAX + 0x2c]
// 005f4e7b: MOV EAX,ESP
// 005f4e7d: FSTP float ptr [ESP + 0x8]
//   XREF to: Stack[-0x4] (WRITE)
// 005f4e81: CMP EDX,EAX
// 005f4e83: JNZ 0x005f4e8b
//   XREF to: 005f4e8b (CONDITIONAL_JUMP)
// 005f4e85: MOV EAX,ECX
// 005f4e87: ADD ESP,0xc
// 005f4e8a: RET
// 005f4e8b: MOV EAX,dword ptr [ESP]
//   Label: LAB_005f4e8b
//   XREF to: Stack[-0xc] (DATA)
// 005f4e8e: MOV dword ptr [EDX],EAX
// 005f4e90: MOV EAX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x8] (READ)
// 005f4e94: MOV dword ptr [EDX + 0x4],EAX
// 005f4e97: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x4] (READ)
// 005f4e9b: MOV dword ptr [EDX + 0x8],EAX
// 005f4e9e: MOV EAX,ECX
// 005f4ea0: ADD ESP,0xc
// 005f4ea3: RET
