// Name: core_setutil.cpp_C3DSCamera_dtor_FUN_00585340
// Address: 00585340
// Address Range: [[00585340, 00585351]]
// Convention: __cdecl
// Signature: C3DSCamera * core_setutil.cpp_C3DSCamera_dtor_FUN_00585340(C3DSCamera * this_ptr)
// Cross-references:
//   core_setedit.cpp_DementedCameraEditor_FUN_0057e7c0 (0057e7c0) at 0057fa2e [UNCONDITIONAL_CALL]
// Function calls:
//   core_setutil.cpp_C3DSCamera_free_FUN_00585360

#include "nocturne.h"

C3DSCamera * __cdecl core_setutil_cpp_C3DSCamera_dtor_FUN_00585340(C3DSCamera *this_ptr)

{
  core_setutil_cpp_C3DSCamera_free_FUN_00585360(this_ptr);
  return this_ptr;
}


// Assembly code:
// 00585340: PUSH EBX
//   Label: core_setutil.cpp_C3DSCamera_dtor_FUN_00585340
// 00585341: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 00585345: PUSH EBX
// 00585346: CALL core_setutil.cpp_C3DSCamera_free_FUN_00585360
//   XREF to: 00585360 (UNCONDITIONAL_CALL)
// 0058534b: ADD ESP,0x4
// 0058534e: MOV EAX,EBX
// 00585350: POP EBX
// 00585351: RET
