// Name: core_dcamera.cpp_CDemonCamera_setSceneCamera_FUN_0044c3e0
// Address: 0044c3e0
// Address Range: [[0044c3e0, 0044c401]]
// Convention: __cdecl
// Signature: void core_dcamera.cpp_CDemonCamera_setSceneCamera_FUN_0044c3e0(CDemonCamera * this_ptr, int skip_clear_buffers)
// Cross-references:
//   core_dcamera.cpp_CDemonCamera_beginScene_FUN_0044c430 (0044c430) at 0044c577 [UNCONDITIONAL_CALL]
//   core_dlight.cpp_CDemonLight_beginScene_FUN_00472a80 (00472a80) at 00472aa5 [UNCONDITIONAL_CALL]
// Globals:
//   CDemonCamera* g_CurrentSceneCamera
//   CDemonCamera* g_SkipClearBuffersSceneCamera

#include "nocturne.h"

void __cdecl
core_dcamera_cpp_CDemonCamera_setSceneCamera_FUN_0044c3e0
          (CDemonCamera *this_ptr,int skip_clear_buffers)

{
  g_CurrentSceneCamera = this_ptr;
  if (skip_clear_buffers != 0) {
    g_SkipClearBuffersSceneCamera = this_ptr;
    return;
  }
  g_SkipClearBuffersSceneCamera = (CDemonCamera *)0x0;
  return;
}


// Assembly code:
// 0044c3e0: MOV EDX,dword ptr [ESP + 0x4]
//   Label: core_dcamera.cpp_CDemonCamera_setSceneCamera_FUN_0044c3e0
//   XREF to: Stack[0x4] (READ)
// 0044c3e4: MOV ECX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x8] (READ)
// 0044c3e8: MOV dword ptr [0x00823a74],EDX
//   XREF to: 00823a74 (WRITE)
// 0044c3ee: TEST ECX,ECX
// 0044c3f0: JZ 0x0044c3f9
//   XREF to: 0044c3f9 (CONDITIONAL_JUMP)
// 0044c3f2: MOV dword ptr [0x00902f70],EDX
//   XREF to: 00902f70 (WRITE)
// 0044c3f8: RET
// 0044c3f9: XOR EDX,EDX
//   Label: LAB_0044c3f9
// 0044c3fb: MOV dword ptr [0x00902f70],EDX
//   XREF to: 00902f70 (WRITE)
// 0044c401: RET
