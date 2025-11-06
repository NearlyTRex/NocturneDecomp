// Name: engine_drender.cpp_CDemonRenderer_getAlphaMask_FUN_0048ce00
// Address: 0048ce00
// Address Range: [[0048ce00, 0048ce0a]]
// Convention: __cdecl
// Signature: int engine_drender.cpp_CDemonRenderer_getAlphaMask_FUN_0048ce00(CDemonRenderer * this_ptr)
// Cross-references:
//   core_batman.cpp_CBatman_renderOpaque_FUN_004173b0 (004173b0) at 004173c6 [UNCONDITIONAL_CALL]
//   core_charactr.cpp_CCharacter_renderOpaque_FUN_0042a2c0 (0042a2c0) at 0042a2d0 [UNCONDITIONAL_CALL]
//   core_dcamera.cpp_CDemonCamera_screenToWorldWithAlpha_FUN_0044d600 (0044d600) at 0044d62c [UNCONDITIONAL_CALL]
//   core_dcamera.cpp_CDemonCamera_transformVectorWithAlpha_FUN_0044dbd0 (0044dbd0) at 0044dc65 [UNCONDITIONAL_CALL]
//   core_dcamera.cpp_CDemonCamera_worldToScreenWithFrustumCull_FUN_0044d7d0 (0044d7d0) at 0044d7e7 [UNCONDITIONAL_CALL]
//   core_dracbrid.cpp_CDraculaBride_renderOpaque_FUN_00485be0 (00485be0) at 00485bf6 [UNCONDITIONAL_CALL]
//   core_moloch.cpp_CMoloch_renderOpaque_FUN_00529750 (00529750) at 0052975f [UNCONDITIONAL_CALL]
//   core_set.cpp_CDemonSet_FUN_0056d140 (0056d140) at 0056d16b [UNCONDITIONAL_CALL]
//   core_succubus.cpp_CSuccubus_renderOpaque_FUN_005c7590 (005c7590) at 005c75a0 [UNCONDITIONAL_CALL]

#include "nocturne.h"

int __cdecl engine_drender_cpp_CDemonRenderer_getAlphaMask_FUN_0048ce00(CDemonRenderer *this_ptr)

{
  return this_ptr->alpha_mask >> 0x18;
}


// Assembly code:
// 0048ce00: MOV EAX,dword ptr [ESP + 0x4]
//   Label: engine_drender.cpp_CDemonRenderer_getAlphaMask_FUN_0048ce00
//   XREF to: Stack[0x4] (READ)
// 0048ce04: MOV EAX,dword ptr [EAX + 0x14]
// 0048ce07: SAR EAX,0x18
// 0048ce0a: RET
