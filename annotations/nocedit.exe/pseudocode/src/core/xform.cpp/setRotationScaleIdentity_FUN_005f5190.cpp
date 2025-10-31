// Name: core_xform.cpp_setRotationScaleIdentity_FUN_005f5190
// Address: 005f5190
// Address Range: [[005f5190, 005f51d2]]
// Convention: __cdecl
// Signature: void core_xform.cpp_setRotationScaleIdentity_FUN_005f5190(CMatrix3x4f * matrix)
// Cross-references:
//   core_skeledit.cpp_FUN_0058aeb0 (0058aeb0) at 0058aefc [UNCONDITIONAL_CALL]
//   core_skeleton.cpp_CDeformableModelInstance_FUN_0059f820 (0059f820) at 0059f933 [UNCONDITIONAL_CALL]

#include "nocturne.h"

void __cdecl core_xform_cpp_setRotationScaleIdentity_FUN_005f5190(CMatrix3x4f *matrix)

{
  matrix->m[0].x = 0.0;
  matrix->m[0].y = 0.0;
  matrix->m[1].w = 0.0;
  matrix->m[1].x = 1.0;
  matrix->m[1].y = 0.0;
  matrix->m[2].w = 0.0;
  matrix->m[2].x = 0.0;
  matrix->m[2].y = 1.0;
  matrix->m[0].w = 1.0;
  return;
}


// Assembly code:
// 005f5190: MOV EAX,dword ptr [ESP + 0x4]
//   Label: core_xform.cpp_setRotationScaleIdentity_FUN_005f5190
//   XREF to: Stack[0x4] (READ)
// 005f5194: MOV dword ptr [EAX + 0x4],0x0
// 005f519b: MOV dword ptr [EAX + 0x8],0x0
// 005f51a2: MOV dword ptr [EAX + 0x10],0x0
// 005f51a9: MOV dword ptr [EAX + 0x14],0x3f800000
// 005f51b0: MOV dword ptr [EAX + 0x18],0x0
// 005f51b7: MOV dword ptr [EAX + 0x20],0x0
// 005f51be: MOV dword ptr [EAX + 0x24],0x0
// 005f51c5: MOV dword ptr [EAX + 0x28],0x3f800000
// 005f51cc: MOV dword ptr [EAX],0x3f800000
// 005f51d2: RET
