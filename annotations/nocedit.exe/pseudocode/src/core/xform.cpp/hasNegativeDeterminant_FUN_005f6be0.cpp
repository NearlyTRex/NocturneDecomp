// Name: core_xform.cpp_hasNegativeDeterminant_FUN_005f6be0
// Address: 005f6be0
// Address Range: [[005f6be0, 005f6c39]]
// Convention: __cdecl
// Signature: int core_xform.cpp_hasNegativeDeterminant_FUN_005f6be0(CMatrix3x4f * matrix)
// Cross-references:
//   core_skeledit.cpp_CBoneStructure_readBONframe_FUN_0058aa10 (0058aa10) at 0058ab34 [UNCONDITIONAL_CALL]

#include "nocturne.h"

int __cdecl core_xform_cpp_hasNegativeDeterminant_FUN_005f6be0(CMatrix3x4f *matrix)

{
  return (uint)(matrix->m[0].w * (matrix->m[1].x * matrix->m[2].y - matrix->m[1].y * matrix->m[2].x)
                + matrix->m[0].x *
                  (matrix->m[1].y * matrix->m[2].w - matrix->m[1].w * matrix->m[2].y) +
                matrix->m[0].y * (matrix->m[1].w * matrix->m[2].x - matrix->m[2].w * matrix->m[1].x)
               < 0.0);
}


// Assembly code:
// 005f6be0: SUB ESP,0xc
//   Label: core_xform.cpp_hasNegativeDeterminant_FUN_005f6be0
// 005f6be3: MOV EAX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 005f6be7: FLD float ptr [EAX + 0x14]
// 005f6bea: FMUL float ptr [EAX + 0x28]
// 005f6bed: FLD float ptr [EAX + 0x18]
// 005f6bf0: FMUL float ptr [EAX + 0x20]
// 005f6bf3: FLD float ptr [EAX + 0x10]
// 005f6bf6: FMUL float ptr [EAX + 0x24]
// 005f6bf9: FLD float ptr [EAX + 0x18]
// 005f6bfc: FMUL float ptr [EAX + 0x24]
// 005f6bff: FLD float ptr [EAX + 0x10]
// 005f6c02: FMUL float ptr [EAX + 0x28]
// 005f6c05: FLD float ptr [EAX + 0x4]
// 005f6c08: FXCH
// 005f6c0a: FSUBP ST4,ST0
// 005f6c0c: FMULP ST3
// 005f6c0e: FSUBP ST3,ST0
// 005f6c10: FLD float ptr [EAX]
// 005f6c12: FMULP ST3
// 005f6c14: FLD float ptr [EAX + 0x20]
// 005f6c17: FMUL float ptr [EAX + 0x14]
// 005f6c1a: FXCH ST3
// 005f6c1c: FADDP ST2,ST0
// 005f6c1e: FSUBRP ST2,ST0
// 005f6c20: FLD float ptr [EAX + 0x8]
// 005f6c23: FMULP ST2
// 005f6c25: FADDP
// 005f6c27: FLDZ
// 005f6c29: FCOMPP
// 005f6c2b: FNSTSW AX
// 005f6c2d: SAHF
// 005f6c2e: SETA AL
// 005f6c31: AND EAX,0xff
// 005f6c36: ADD ESP,0xc
// 005f6c39: RET
