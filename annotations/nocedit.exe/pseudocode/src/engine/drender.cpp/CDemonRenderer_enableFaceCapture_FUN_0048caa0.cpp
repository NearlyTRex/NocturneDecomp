// Name: engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_0048caa0
// Address: 0048caa0
// Address Range: [[0048caa0, 0048cab0]]
// Convention: __cdecl
// Signature: void engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_0048caa0(CDemonRenderer * this_ptr, int enabled)
// Cross-references:
//   core_bodypart.cpp_FUN_00419340 (00419340) at 0041940e [UNCONDITIONAL_CALL]
//   core_cloth.cpp_FUN_0043bae0 (0043bae0) at 0043bcfc [UNCONDITIONAL_CALL]
//   core_dcube.cpp_CDemonCube_rotateVertices_FUN_00457650 (00457650) at 00457687 [UNCONDITIONAL_CALL]
//   core_dmodel.cpp_CKeyFramedModel_submitToRenderer_FUN_00477980 (00477980) at 00477a70 [UNCONDITIONAL_CALL]
//   core_dpart.cpp_CDemonPart_renderFaces_FUN_004828b0 (004828b0) at 00482966 [UNCONDITIONAL_CALL]
//   core_morph.cpp_CMorphModel_rotatePoints_FUN_0052af70 (0052af70) at 0052b144 [UNCONDITIONAL_CALL]
//   core_morph.cpp_FUN_0052b160 (0052b160) at 0052b261 [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_PrepareMissionMaybe_FUN_005390f0 (005390f0) at 0053a395 [UNCONDITIONAL_CALL]
//   core_set.cpp_CDemonSet_FUN_0056aca0 (0056aca0) at 0056ad98 [UNCONDITIONAL_CALL]
//   core_set.cpp_CDemonSet_FUN_0056be80 (0056be80) at 0056c0f3 [UNCONDITIONAL_CALL]
//   core_set.cpp_CDemonSet_FUN_0056c990 (0056c990) at 0056cb5a [UNCONDITIONAL_CALL]
//   core_set.cpp_CDemonSet_FUN_0056cd60 (0056cd60) at 0056ce7a [UNCONDITIONAL_CALL]
//   core_set.cpp_CDemonSet_FUN_0056cf00 (0056cf00) at 0056d047 [UNCONDITIONAL_CALL]
//   core_set.cpp_CDemonSet_rotateVertices_FUN_0056e7c0 (0056e7c0) at 0056e881 [UNCONDITIONAL_CALL]
//   core_setdir.cpp_CZThumb_calculateActorVisibility_FUN_00574ba0 (00574ba0) at 00574d6a [UNCONDITIONAL_CALL]
//   core_setedit.cpp_CDemonSet_FUN_00581aa0 (00581aa0) at 00581cb6 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_CDemonSet_FUN_00583170 (00583170) at 0058341d [UNCONDITIONAL_CALL]
//   core_skeleton.cpp_CDeformableModel_renderParts_FUN_0059abf0 (0059abf0) at 0059af03 [UNCONDITIONAL_CALL]
//   core_skeleton.cpp_CDeformableModel_renderWireframe_FUN_0059b5a0 (0059b5a0) at 0059b5c3 [UNCONDITIONAL_CALL]
// Globals:
//   uint g_VertexProcessingEnabled = 0x1

#include "nocturne.h"

void __cdecl
engine_drender_cpp_CDemonRenderer_enableFaceCapture_FUN_0048caa0
          (CDemonRenderer *this_ptr,int enabled)

{
  g_VertexProcessingEnabled = enabled;
  this_ptr->face_capture_enabled = enabled;
  return;
}


// Assembly code:
// 0048caa0: MOV EAX,dword ptr [ESP + 0x8]
//   Label: engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_0048caa0
//   XREF to: Stack[0x8] (READ)
// 0048caa4: MOV EDX,dword ptr [ESP + 0x4]
//   XREF to: Stack[0x4] (READ)
// 0048caa8: MOV [0x006793bc],EAX
//   XREF to: 006793bc (WRITE)
// 0048caad: MOV dword ptr [EDX + 0x10],EAX
// 0048cab0: RET
