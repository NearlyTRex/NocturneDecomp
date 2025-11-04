// Name: core_xform.cpp_setIdentityQuaternion_FUN_005f7620
// Address: 005f7620
// Address Range: [[005f7620, 005f763f]]
// Convention: __cdecl
// Signature: void core_xform.cpp_setIdentityQuaternion_FUN_005f7620(CQuaternion4f * quaternion)
// Cross-references:
//   core_skeleton.cpp_CDeformableModelInstance_resetToRestPose_FUN_0059df80 (0059df80) at 0059dfb1 [UNCONDITIONAL_CALL]

#include "nocturne.h"

void __cdecl core_xform_cpp_setIdentityQuaternion_FUN_005f7620(CQuaternion4f *quaternion)

{
  quaternion->x = 0.0;
  quaternion->y = 0.0;
  quaternion->z = 0.0;
  quaternion->w = 1.0;
  return;
}


// Assembly code:
// 005f7620: MOV EAX,dword ptr [ESP + 0x4]
//   Label: core_xform.cpp_setIdentityQuaternion_FUN_005f7620
//   XREF to: Stack[0x4] (READ)
// 005f7624: MOV dword ptr [EAX + 0x4],0x0
// 005f762b: MOV dword ptr [EAX + 0x8],0x0
// 005f7632: MOV dword ptr [EAX + 0xc],0x0
// 005f7639: MOV dword ptr [EAX],0x3f800000
// 005f763f: RET
