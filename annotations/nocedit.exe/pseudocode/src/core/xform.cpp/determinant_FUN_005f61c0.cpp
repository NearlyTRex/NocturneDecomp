// Name: core_xform.cpp_determinant_FUN_005f61c0
// Address: 005f61c0
// Address Range: [[005f61c0, 005f620a]]
// Convention: __cdecl
// Signature: double core_xform.cpp_determinant_FUN_005f61c0(CMatrix3x4f * matrix)
// Cross-references:
//   core_skeledit.cpp_CBoneStructure_fixupMatrices_FUN_0058adb0 (0058adb0) at 0058ade9 [UNCONDITIONAL_CALL]
//   core_xform.cpp_inverse_FUN_005f6210 (005f6210) at 005f6229 [UNCONDITIONAL_CALL]

#include "nocturne.h"

double __cdecl core_xform_cpp_determinant_FUN_005f61c0(CMatrix3x4f *matrix)

{
  return (double)((matrix->m[1].w * matrix->m[2].x - matrix->m[1].x * matrix->m[2].w) *
                  matrix->m[0].y +
                 ((matrix->m[1].x * matrix->m[2].y - matrix->m[1].y * matrix->m[2].x) *
                  matrix->m[0].w -
                 (matrix->m[1].w * matrix->m[2].y - matrix->m[1].y * matrix->m[2].w) *
                 matrix->m[0].x));
}


// Assembly code:
// 005f61c0: SUB ESP,0x8
//   Label: core_xform.cpp_determinant_FUN_005f61c0
// 005f61c3: MOV EAX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 005f61c7: FLD float ptr [EAX + 0x10]
// 005f61ca: FMUL float ptr [EAX + 0x28]
// 005f61cd: FLD float ptr [EAX + 0x18]
// 005f61d0: FMUL float ptr [EAX + 0x20]
// 005f61d3: FSUBP
// 005f61d5: FMUL float ptr [EAX + 0x4]
// 005f61d8: FLD float ptr [EAX + 0x14]
// 005f61db: FMUL float ptr [EAX + 0x28]
// 005f61de: FLD float ptr [EAX + 0x18]
// 005f61e1: FMUL float ptr [EAX + 0x24]
// 005f61e4: FSUBP
// 005f61e6: FMUL float ptr [EAX]
// 005f61e8: FSUBRP
// 005f61ea: FLD float ptr [EAX + 0x10]
// 005f61ed: FMUL float ptr [EAX + 0x24]
// 005f61f0: FLD float ptr [EAX + 0x14]
// 005f61f3: FMUL float ptr [EAX + 0x20]
// 005f61f6: FSUBP
// 005f61f8: FMUL float ptr [EAX + 0x8]
// 005f61fb: FADDP
// 005f61fd: FSTP double ptr [ESP]
//   XREF to: Stack[-0x8] (DATA)
// 005f6200: MOV EAX,dword ptr [ESP]
//   XREF to: Stack[-0x8] (DATA)
// 005f6203: MOV EDX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x4] (READ)
// 005f6207: ADD ESP,0x8
// 005f620a: RET
