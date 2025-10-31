// Name: core_xform.cpp_clearTranslation_FUN_005f5370
// Address: 005f5370
// Address Range: [[005f5370, 005f5387]]
// Convention: __cdecl
// Signature: void core_xform.cpp_clearTranslation_FUN_005f5370(CMatrix3x4f * matrix)
// Cross-references:
//   core_skeledit.cpp_FUN_0058aeb0 (0058aeb0) at 0058aef3 [UNCONDITIONAL_CALL]
//   core_tentacle.cpp_CTentacle_process_FUN_005db050 (005db050) at 005db3c0 [UNCONDITIONAL_CALL]
//   core_xform.cpp_quaternionToMatrix3x4_FUN_005f73e0 (005f73e0) at 005f7402 [UNCONDITIONAL_CALL]

#include "nocturne.h"

void __cdecl core_xform_cpp_clearTranslation_FUN_005f5370(CMatrix3x4f *matrix)

{
  matrix->m[2].z = 0.0;
  matrix->m[1].z = matrix->m[2].z;
  matrix->m[0].z = matrix->m[1].z;
  return;
}


// Assembly code:
// 005f5370: MOV EAX,dword ptr [ESP + 0x4]
//   Label: core_xform.cpp_clearTranslation_FUN_005f5370
//   XREF to: Stack[0x4] (READ)
// 005f5374: MOV dword ptr [EAX + 0x2c],0x0
// 005f537b: MOV EDX,dword ptr [EAX + 0x2c]
// 005f537e: MOV dword ptr [EAX + 0x1c],EDX
// 005f5381: MOV EDX,dword ptr [EAX + 0x1c]
// 005f5384: MOV dword ptr [EAX + 0xc],EDX
// 005f5387: RET
