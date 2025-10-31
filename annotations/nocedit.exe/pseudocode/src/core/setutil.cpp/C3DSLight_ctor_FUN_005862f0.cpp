// Name: core_setutil.cpp_C3DSLight_ctor_FUN_005862f0
// Address: 005862f0
// Address Range: [[005862f0, 00586301]]
// Convention: __cdecl
// Signature: C3DSLight * core_setutil.cpp_C3DSLight_ctor_FUN_005862f0(C3DSLight * this_ptr)
// Cross-references:
//   core_setedit.cpp_CDemonSet_importS3D_FUN_00578d80 (00578d80) at 00579cd8 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_DementedCameraEditor_FUN_0057e7c0 (0057e7c0) at 0057f72b [UNCONDITIONAL_CALL]
// Function calls:
//   core_setutil.cpp_C3DSLight_reset_FUN_005879b0

#include "nocturne.h"

C3DSLight * __cdecl core_setutil_cpp_C3DSLight_ctor_FUN_005862f0(C3DSLight *this_ptr)

{
  core_setutil_cpp_C3DSLight_reset_FUN_005879b0(this_ptr);
  return this_ptr;
}


// Assembly code:
// 005862f0: PUSH EBX
//   Label: core_setutil.cpp_C3DSLight_ctor_FUN_005862f0
// 005862f1: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 005862f5: PUSH EBX
// 005862f6: CALL core_setutil.cpp_C3DSLight_reset_FUN_005879b0
//   XREF to: 005879b0 (UNCONDITIONAL_CALL)
// 005862fb: ADD ESP,0x4
// 005862fe: MOV EAX,EBX
// 00586300: POP EBX
// 00586301: RET
