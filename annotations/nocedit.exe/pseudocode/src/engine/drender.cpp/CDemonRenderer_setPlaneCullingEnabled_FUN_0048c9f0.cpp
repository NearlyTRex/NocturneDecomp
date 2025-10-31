// Name: engine_drender.cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_0048c9f0
// Address: 0048c9f0
// Address Range: [[0048c9f0, 0048c9fb]]
// Convention: __cdecl
// Signature: void engine_drender.cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_0048c9f0(CDemonRenderer * this_ptr, int enabled)
// Cross-references:
//   core_box.cpp_CBoundingBox3D_render_FUN_004210b0 (004210b0) at 00421135 [UNCONDITIONAL_CALL]
//   core_dmodel.cpp_CKeyFramedModel_submitToRenderer_FUN_00477980 (00477980) at 00477a99 [UNCONDITIONAL_CALL]
//   core_dpart.cpp_CDemonPart_renderFaces_FUN_004828b0 (004828b0) at 004828d5 [UNCONDITIONAL_CALL]
//   core_manpuz.cpp_FUN_00509d50 (00509d50) at 0050a161 [UNCONDITIONAL_CALL]
//   core_path.cpp_FUN_00547fc0 (00547fc0) at 005480c1 [UNCONDITIONAL_CALL]
//   core_trigger.cpp_CTrigger_FUN_005e00d0 (005e00d0) at 005e0569 [UNCONDITIONAL_CALL]
//   engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0048ca00 (0048ca00) at 0048ca30 [UNCONDITIONAL_CALL]

#include "nocturne.h"

void __cdecl
engine_drender_cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_0048c9f0
          (CDemonRenderer *this_ptr,int enabled)

{
  this_ptr->plane_culling_enabled = enabled;
  return;
}


// Assembly code:
// 0048c9f0: MOV EDX,dword ptr [ESP + 0x4]
//   Label: engine_drender.cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_0048c9f0
//   XREF to: Stack[0x4] (READ)
// 0048c9f4: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x8] (READ)
// 0048c9f8: MOV dword ptr [EDX + 0xc],EAX
// 0048c9fb: RET
