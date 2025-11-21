// Name: engine_drender.cpp_CDemonRenderer_setProjectionScale_FUN_0048c650
// Address: 0048c650
// Address Range: [[0048c650, 0048c66b]]
// Convention: __cdecl
// Signature: void engine_drender.cpp_CDemonRenderer_setProjectionScale_FUN_0048c650(CDemonRenderer * this_ptr, float field_of_view)
// Cross-references:
//   core_dcamera.cpp_CDemonCamera_beginScene_FUN_0044c430 (0044c430) at 0044c627 [UNCONDITIONAL_CALL]
//   core_dlight.cpp_CDemonLight_beginScene_FUN_00472a80 (00472a80) at 00472b2a [UNCONDITIONAL_CALL]
//   core_dmodel.cpp_CKeyFramedModel_showEditorMenu_FUN_0047cbc0 (0047cbc0) at 0047cd7d [UNCONDITIONAL_CALL]
//   core_inv.cpp_CInventory_renderItemModel_FUN_004fee00 (004fee00) at 004fefe8 [UNCONDITIONAL_CALL]
//   core_level.cpp_CLevelLoader_update_FUN_00504160 (00504160) at 005041f4 [UNCONDITIONAL_CALL]
//   core_mirror.cpp_setupMirrorCamera_FUN_00521480 (00521480) at 005214a2 [UNCONDITIONAL_CALL]
//   core_moon.cpp_CMoon_renderJoystickCalibration_FUN_0052a2c0 (0052a2c0) at 0052a2f1 [UNCONDITIONAL_CALL]
//   core_moon.cpp_CMoon_render_FUN_00529ed0 (00529ed0) at 00529f0b [UNCONDITIONAL_CALL]
//   core_set.cpp_CDemonSet_FUN_0056c990 (0056c990) at 0056ccc1 [UNCONDITIONAL_CALL]
//   core_set.cpp_FUN_00570af0 (00570af0) at 00570b14 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_SomethingMemoryConstructorMaybe_FUN_00580310 (00580310) at 00580407 [UNCONDITIONAL_CALL]
//   core_stairs.cpp_FUN_005b9a20 (005b9a20) at 005b9a35 [UNCONDITIONAL_CALL]
// Globals:
//   double g_ProjectionDivisor = 18
//   double g_ProjectionMultiplier = 65536
//   int g_ProjectionScale = 0x10000
// Function calls:
//   crt_math.c_round_FUN_005fe6b0

#include "nocturne.h"

void __cdecl
engine_drender_cpp_CDemonRenderer_setProjectionScale_FUN_0048c650
          (CDemonRenderer *this_ptr,float field_of_view)

{
  undefined4 in_EAX;
  undefined4 in_EDX;
  float10 fVar1;
  
  fVar1 = ((float10)g_ProjectionDivisor / (float10)field_of_view) * (float10)g_ProjectionMultiplier;
  crt_math_c_round_FUN_005fe6b0((double)CONCAT44(in_EDX,in_EAX));
  g_ProjectionScale = (int)ROUND(fVar1);
  return;
}


// Assembly code:
// 0048c650: FLD float ptr [ESP + 0x8]
//   Label: engine_drender.cpp_CDemonRenderer_setProjectionScale_FUN_0048c650
//   XREF to: Stack[0x8] (READ)
// 0048c654: FDIVR double ptr [0x00622035]
//   XREF to: 00622035 (READ)
// 0048c65a: FMUL double ptr [0x0062203d]
//   XREF to: 0062203d (READ)
// 0048c660: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 0048c665: FISTP dword ptr [0x006793c0]
//   XREF to: 006793c0 (WRITE)
// 0048c66b: RET
