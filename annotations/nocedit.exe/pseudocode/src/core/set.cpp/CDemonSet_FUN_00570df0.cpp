// Name: core_set.cpp_CDemonSet_FUN_00570df0
// Address: 00570df0
// Address Range: [[00570df0, 00570e1f]]
// Convention: __cdecl
// Signature: void core_set.cpp_CDemonSet_FUN_00570df0(CDemonSet * this_ptr, SMRGLHeaderPrimitive * primitive)
// Cross-references:
//   core_dcamera.cpp_CDemonCamera_testBoxOcclusion_FUN_004544f0 (004544f0) at 004546e3 [UNCONDITIONAL_CALL]
//   core_dlight.cpp_CDemonLight_testLightVolumeVisibility_FUN_00476a60 (00476a60) at 00476b4a [UNCONDITIONAL_CALL]
// Globals:
//   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
//   CDemonRenderer g_CDemonRendererInstance
//   undefined4 DAT_02c6d590
// Function calls:
//   core_mirror.cpp_renderReflectedPrimitive_FUN_005225a0
//   engine_drender.cpp_CDemonRenderer_renderTexturedBasic_FUN_0048ab50

#include "nocturne.h"

void __cdecl
core_set_cpp_CDemonSet_FUN_00570df0(CDemonSet *this_ptr,SMRGLHeaderPrimitive *primitive)

{
  if (g_CDemonRendererPtr->advanced_culling_enabled != 0) {
    core_mirror_cpp_renderReflectedPrimitive_FUN_005225a0(this_ptr->active_mirror,primitive);
    return;
  }
  engine_drender_cpp_CDemonRenderer_renderTexturedBasic_FUN_0048ab50(g_CDemonRendererPtr,primitive);
  return;
}


// Assembly code:
// 00570df0: MOV ECX,dword ptr [ESP + 0x8]
//   Label: core_set.cpp_CDemonSet_FUN_00570df0
//   XREF to: Stack[0x8] (READ)
// 00570df4: MOV EAX,[0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 00570df9: MOV EDX,dword ptr [EAX + 0x18]
//   XREF to: 02c6d590 (READ)
// 00570dfc: TEST EDX,EDX
// 00570dfe: JZ 0x00570e15
//   XREF to: 00570e15 (CONDITIONAL_JUMP)
// 00570e00: MOV EAX,dword ptr [ESP + 0x4]
//   XREF to: Stack[0x4] (READ)
// 00570e04: PUSH ECX
// 00570e05: MOV EDX,dword ptr [EAX + 0x161650]
// 00570e0b: PUSH EDX
// 00570e0c: CALL core_mirror.cpp_renderReflectedPrimitive_FUN_005225a0
//   XREF to: 005225a0 (UNCONDITIONAL_CALL)
// 00570e11: ADD ESP,0x8
// 00570e14: RET
// 00570e15: PUSH ECX
//   Label: LAB_00570e15
// 00570e16: PUSH EAX
//   XREF to: 02c6d578 (DATA)
// 00570e17: CALL engine_drender.cpp_CDemonRenderer_renderTexturedBasic_FUN_0048ab50
//   XREF to: 0048ab50 (UNCONDITIONAL_CALL)
// 00570e1c: ADD ESP,0x8
// 00570e1f: RET
