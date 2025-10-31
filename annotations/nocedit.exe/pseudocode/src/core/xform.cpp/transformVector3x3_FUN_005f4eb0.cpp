// Name: core_xform.cpp_transformVector3x3_FUN_005f4eb0
// Address: 005f4eb0
// Address Range: [[005f4eb0, 005f4f04]]
// Convention: __cdecl
// Signature: CVector3f * core_xform.cpp_transformVector3x3_FUN_005f4eb0(CMatrix3x3f * matrix, CVector3f * output_vector, CVector3f * input_vector)

#include "nocturne.h"

CVector3f * __cdecl
core_xform_cpp_transformVector3x3_FUN_005f4eb0
          (CMatrix3x3f *matrix,CVector3f *output_vector,CVector3f *input_vector)

{
  output_vector->x =
       input_vector->z * matrix->m[0].z +
       input_vector->x * matrix->m[0].x + input_vector->y * matrix->m[0].y;
  output_vector->y =
       input_vector->z * matrix->m[2].x +
       input_vector->x * matrix->m[1].y + input_vector->y * matrix->m[1].z;
  output_vector->z =
       input_vector->z * matrix[1].m[0].y +
       input_vector->x * matrix->m[2].z + input_vector->y * matrix[1].m[0].x;
  return output_vector;
}


// Assembly code:
// 005f4eb0: MOV EAX,dword ptr [ESP + 0x4]
//   Label: core_xform.cpp_transformVector3x3_FUN_005f4eb0
//   XREF to: Stack[0x4] (READ)
// 005f4eb4: MOV ECX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x8] (READ)
// 005f4eb8: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0xc] (READ)
// 005f4ebc: FLD float ptr [EDX + 0x4]
// 005f4ebf: FMUL float ptr [EAX + 0x4]
// 005f4ec2: FLD float ptr [EDX]
// 005f4ec4: FMUL float ptr [EAX]
// 005f4ec6: FADDP
// 005f4ec8: FLD float ptr [EDX + 0x8]
// 005f4ecb: FMUL float ptr [EAX + 0x8]
// 005f4ece: FADDP
// 005f4ed0: FSTP float ptr [ECX]
// 005f4ed2: FLD float ptr [EDX + 0x4]
// 005f4ed5: FMUL float ptr [EAX + 0x14]
// 005f4ed8: FLD float ptr [EDX]
// 005f4eda: FMUL float ptr [EAX + 0x10]
// 005f4edd: FADDP
// 005f4edf: FLD float ptr [EDX + 0x8]
// 005f4ee2: FMUL float ptr [EAX + 0x18]
// 005f4ee5: FADDP
// 005f4ee7: FSTP float ptr [ECX + 0x4]
// 005f4eea: FLD float ptr [EDX + 0x4]
// 005f4eed: FMUL float ptr [EAX + 0x24]
// 005f4ef0: FLD float ptr [EDX]
// 005f4ef2: FMUL float ptr [EAX + 0x20]
// 005f4ef5: FADDP
// 005f4ef7: FLD float ptr [EDX + 0x8]
// 005f4efa: FMUL float ptr [EAX + 0x28]
// 005f4efd: FADDP
// 005f4eff: MOV EAX,ECX
// 005f4f01: FSTP float ptr [ECX + 0x8]
// 005f4f04: RET
