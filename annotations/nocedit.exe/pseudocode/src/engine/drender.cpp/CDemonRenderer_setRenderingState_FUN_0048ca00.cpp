// Name: engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0048ca00
// Address: 0048ca00
// Address Range: [[0048ca00, 0048ca40]]
// Convention: __cdecl
// Signature: void engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0048ca00(CDemonRenderer * this_ptr, int state_flag)
// Cross-references:
//   core_box.cpp_CBoundingBox3D_render_FUN_004210b0 (004210b0) at 00421146 [UNCONDITIONAL_CALL]
//   core_chain.cpp_FUN_004308f0 (004308f0) at 00430989 [UNCONDITIONAL_CALL]
//   core_cloth.cpp_FUN_0043bae0 (0043bae0) at 0043bceb [UNCONDITIONAL_CALL]
//   core_curtain.cpp_FUN_0044b060 (0044b060) at 0044b170 [UNCONDITIONAL_CALL]
//   core_dcamera.cpp_CDemonCamera_testBoxOcclusion_FUN_004544f0 (004544f0) at 0045456c [UNCONDITIONAL_CALL]
//   core_dcube.cpp_CDemonCube_rotateVertices_FUN_00457650 (00457650) at 0045769b [UNCONDITIONAL_CALL]
//   core_dlight.cpp_CDemonLight_renderCoronaGeometry_FUN_004736c0 (004736c0) at 0047381a [UNCONDITIONAL_CALL]
//   core_dlight.cpp_CDemonLight_testLightVolumeVisibility_FUN_00476a60 (00476a60) at 00476a92 [UNCONDITIONAL_CALL]
//   core_dmodel.cpp_CKeyFramedModel_submitToRenderer_FUN_00477980 (00477980) at 00477a89 [UNCONDITIONAL_CALL]
//   core_dpart.cpp_CDemonPart_renderFaces_FUN_004828b0 (004828b0) at 004828c4 [UNCONDITIONAL_CALL]
//   core_dtrace.cpp_CDemonRaytrace_renderGridCube_FUN_00496e70 (00496e70) at 00497261 [UNCONDITIONAL_CALL]
//   core_fire.cpp_CLaserBeam_FUN_004c25c0 (004c25c0) at 004c2827 [UNCONDITIONAL_CALL]
//   core_ground.cpp_CGround_render_FUN_004efc90 (004efc90) at 004efd01 [UNCONDITIONAL_CALL]
//   core_mirror.cpp_renderMirrorQuad_FUN_00522670 (00522670) at 0052278a [UNCONDITIONAL_CALL]
//   core_morph.cpp_FUN_0052b160 (0052b160) at 0052b185 [UNCONDITIONAL_CALL]
//   core_setdir.cpp_CZThumb_calculateActorVisibility_FUN_00574ba0 (00574ba0) at 00574dca [UNCONDITIONAL_CALL]
//   core_setutil.cpp_C3DSLight_renderVolumetricSphere_FUN_00587b50 (00587b50) at 00587d57 [UNCONDITIONAL_CALL]
//   core_skeleton.cpp_CDeformableModel_FUN_0059abf0 (0059abf0) at 0059aecc [UNCONDITIONAL_CALL]
//   core_wateract.cpp_CWaterActor_FUN_005eb280 (005eb280) at 005eb458 [UNCONDITIONAL_CALL]
//   engine_drender.cpp_CDemonRenderer_processCapturedFaces_FUN_0048da80 (0048da80) at 0048daf6 [UNCONDITIONAL_CALL]
//   shape_meshlod.cpp_FUN_0051e990 (0051e990) at 0051ea0c [UNCONDITIONAL_CALL]
// Function calls:
//   engine_drender.cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_0048c9f0
//   engine_prim.c_setCullingMode_FUN_00551b90

#include "nocturne.h"

void __cdecl
engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_0048ca00
          (CDemonRenderer *this_ptr,int state_flag)

{
  int in_stack_0000000c;
  int culling_mode;
  
  if (state_flag == 0) {
    culling_mode = 0;
  }
  else if (this_ptr->advanced_culling_enabled == 0) {
    culling_mode = 1;
  }
  else {
    culling_mode = 2;
  }
  engine_prim_c_setCullingMode_FUN_00551b90(culling_mode);
  engine_drender_cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_0048c9f0
            ((CDemonRenderer *)state_flag,(uint)(in_stack_0000000c == 0));
  return;
}


// Assembly code:
// 0048ca00: PUSH ESI
//   Label: engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0048ca00
// 0048ca01: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 0048ca05: TEST EDX,EDX
// 0048ca07: JZ 0x0048ca3e
//   XREF to: 0048ca3e (CONDITIONAL_JUMP)
// 0048ca09: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 0048ca0d: CMP dword ptr [EAX + 0x18],0x0
// 0048ca11: JZ 0x0048ca3a
//   XREF to: 0048ca3a (CONDITIONAL_JUMP)
// 0048ca13: PUSH 0x2
// 0048ca15: CALL engine_prim.c_setCullingMode_FUN_00551b90
//   Label: LAB_0048ca15
//   XREF to: 00551b90 (UNCONDITIONAL_CALL)
// 0048ca1a: ADD ESP,0x4
// 0048ca1d: CMP dword ptr [ESP + 0xc],0x0
//   XREF to: Stack[0x8] (READ)
// 0048ca22: SETZ AL
// 0048ca25: AND EAX,0xff
// 0048ca2a: PUSH EAX
// 0048ca2b: MOV ESI,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 0048ca2f: PUSH ESI
// 0048ca30: CALL engine_drender.cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_0048c9f0
//   XREF to: 0048c9f0 (UNCONDITIONAL_CALL)
// 0048ca35: ADD ESP,0x8
// 0048ca38: POP ESI
// 0048ca39: RET
// 0048ca3a: PUSH 0x1
//   Label: LAB_0048ca3a
// 0048ca3c: JMP 0x0048ca15
//   XREF to: 0048ca15 (UNCONDITIONAL_JUMP)
// 0048ca3e: PUSH EDX
//   Label: LAB_0048ca3e
// 0048ca3f: JMP 0x0048ca15
//   XREF to: 0048ca15 (UNCONDITIONAL_JUMP)
