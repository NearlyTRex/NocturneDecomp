// Name: core_xform.cpp_setIdentityMatrix3x4_FUN_005f5100
// Address: 005f5100
// Address Range: [[005f5100, 005f5157]]
// Convention: __cdecl
// Signature: void core_xform.cpp_setIdentityMatrix3x4_FUN_005f5100(CMatrix3x4f * matrix)
// Cross-references:
//   core_gabriela.cpp_CarryLights_FUN_004d7120 (004d7120) at 004d74ce [UNCONDITIONAL_CALL]
//   core_mirror.cpp_setupMirrorReflection_FUN_005214c0 (005214c0) at 00521884 [UNCONDITIONAL_CALL]
//   core_stranger.cpp_CStranger_FUN_005c07b0 (005c07b0) at 005c15cc [UNCONDITIONAL_CALL]

#include "nocturne.h"

void __cdecl core_xform_cpp_setIdentityMatrix3x4_FUN_005f5100(CMatrix3x4f *matrix)

{
  matrix->m[0].x = 0.0;
  matrix->m[0].y = 0.0;
  matrix->m[0].z = 0.0;
  matrix->m[1].w = 0.0;
  matrix->m[1].x = 1.0;
  matrix->m[1].y = 0.0;
  matrix->m[1].z = 0.0;
  matrix->m[2].w = 0.0;
  matrix->m[2].x = 0.0;
  matrix->m[2].y = 1.0;
  matrix->m[2].z = 0.0;
  matrix->m[0].w = 1.0;
  return;
}


// Assembly code:
// 005f5100: MOV EAX,dword ptr [ESP + 0x4]
//   Label: core_xform.cpp_setIdentityMatrix3x4_FUN_005f5100
//   XREF to: Stack[0x4] (READ)
// 005f5104: MOV dword ptr [EAX + 0x4],0x0
// 005f510b: MOV dword ptr [EAX + 0x8],0x0
// 005f5112: MOV dword ptr [EAX + 0xc],0x0
// 005f5119: MOV dword ptr [EAX + 0x10],0x0
// 005f5120: MOV dword ptr [EAX + 0x14],0x3f800000
// 005f5127: MOV dword ptr [EAX + 0x18],0x0
// 005f512e: MOV dword ptr [EAX + 0x1c],0x0
// 005f5135: MOV dword ptr [EAX + 0x20],0x0
// 005f513c: MOV dword ptr [EAX + 0x24],0x0
// 005f5143: MOV dword ptr [EAX + 0x28],0x3f800000
// 005f514a: MOV dword ptr [EAX + 0x2c],0x0
// 005f5151: MOV dword ptr [EAX],0x3f800000
// 005f5157: RET
