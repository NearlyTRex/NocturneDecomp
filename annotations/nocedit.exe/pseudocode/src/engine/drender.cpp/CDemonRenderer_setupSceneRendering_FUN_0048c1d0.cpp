// Name: engine_drender.cpp_CDemonRenderer_setupSceneRendering_FUN_0048c1d0
// Address: 0048c1d0
// Address Range: [[0048c1d0, 0048c1f8]]
// Convention: __cdecl
// Signature: void engine_drender.cpp_CDemonRenderer_setupSceneRendering_FUN_0048c1d0(CDemonRenderer * this_ptr)
// Cross-references:
//   core_course.cpp_FUN_00443bc0 (00443bc0) at 00443cdf [UNCONDITIONAL_CALL]
//   core_dmodel.cpp_CKeyFramedModel_showEditorMenu_FUN_0047cbc0 (0047cbc0) at 0047cd6b [UNCONDITIONAL_CALL]
//   core_inv.cpp_CInventory_renderItemModel_FUN_004fee00 (004fee00) at 004feffb [UNCONDITIONAL_CALL]
//   core_level.cpp_CLevelLoader_update_FUN_00504160 (00504160) at 0050420d [UNCONDITIONAL_CALL]
//   core_moon.cpp_CMoon_renderJoystickCalibration_FUN_0052a2c0 (0052a2c0) at 0052a30a [UNCONDITIONAL_CALL]
//   core_moon.cpp_CMoon_render_FUN_00529ed0 (00529ed0) at 00529f1f [UNCONDITIONAL_CALL]
//   core_set.cpp_CDemonSet_FUN_0056c990 (0056c990) at 0056ccd4 [UNCONDITIONAL_CALL]
//   core_set.cpp_FUN_00570af0 (00570af0) at 00570b28 [UNCONDITIONAL_CALL]
//   core_setdir.cpp_CZThumb_pushRenderingContext_FUN_00574e70 (00574e70) at 00574ee3 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_SomethingMemoryConstructorMaybe_FUN_00580310 (00580310) at 0058041b [UNCONDITIONAL_CALL]
//   shape_spotview.cpp_CSpotView_FUN_005b9a20 (005b9a20) at 005b9ae6 [UNCONDITIONAL_CALL]
// Function calls:
//   core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
//   engine_drender.cpp_CDemonRenderer_setupCameraAndProjection_FUN_0048c200

#include "nocturne.h"

void __cdecl
engine_drender_cpp_CDemonRenderer_setupSceneRendering_FUN_0048c1d0(CDemonRenderer *this_ptr)

{
  BADSPACEBASE *in_ESP;
  CDemonRenderer *in_stack_00000008;
  CVector3f *in_stack_ffffffdc;
  
  core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
            ((CMatrix3x3f *)&stack0xffffffd8,(CVector3f *)in_stack_00000008);
  engine_drender_cpp_CDemonRenderer_setupCameraAndProjection_FUN_0048c200
            (in_stack_00000008,(CMatrix3x3f *)&stack0xffffffdc,in_stack_ffffffdc);
  return;
}


// Assembly code:
// 0048c1d0: SUB ESP,0x28
//   Label: engine_drender.cpp_CDemonRenderer_setupSceneRendering_FUN_0048c1d0
// 0048c1d3: MOV EDX,dword ptr [ESP + 0x30]
//   XREF to: Stack[0x8] (READ)
// 0048c1d7: PUSH EDX
// 0048c1d8: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x28] (DATA)
// 0048c1dc: PUSH EAX
// 0048c1dd: CALL core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
//   XREF to: 00471d30 (UNCONDITIONAL_CALL)
// 0048c1e2: ADD ESP,0x8
// 0048c1e5: MOV EAX,ESP
// 0048c1e7: PUSH EAX
// 0048c1e8: MOV ECX,dword ptr [ESP + 0x30]
//   XREF to: Stack[0x4] (READ)
// 0048c1ec: PUSH ECX
// 0048c1ed: CALL engine_drender.cpp_CDemonRenderer_setupCameraAndProjection_FUN_0048c200
//   XREF to: 0048c200 (UNCONDITIONAL_CALL)
// 0048c1f2: ADD ESP,0x8
// 0048c1f5: ADD ESP,0x28
// 0048c1f8: RET
