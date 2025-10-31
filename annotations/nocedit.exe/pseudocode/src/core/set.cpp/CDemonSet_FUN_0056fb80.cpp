// Name: core_set.cpp_CDemonSet_FUN_0056fb80
// Address: 0056fb80
// Address Range: [[0056fb80, 0056fb94]]
// Convention: __cdecl
// Signature: void core_set.cpp_CDemonSet_FUN_0056fb80(CDemonSet * this_ptr)
// Cross-references:
//   core_game.cpp_CGame_FUN_004e07a0 (004e07a0) at 004e07a8 [UNCONDITIONAL_CALL]
// Globals:
//   CWater* g_CWaterPtr = 03f875e0
//   CWater g_CWaterInstance
// Function calls:
//   core_dlight.cpp_captureLightTextures_FUN_00474a90
//   core_water.cpp_CWater_captureTextures_FUN_005e9e40

#include "nocturne.h"

void __cdecl core_set_cpp_CDemonSet_FUN_0056fb80(CDemonSet *this_ptr)

{
  core_dlight_cpp_captureLightTextures_FUN_00474a90();
  core_water_cpp_CWater_captureTextures_FUN_005e9e40(g_CWaterPtr);
  return;
}


// Assembly code:
// 0056fb80: CALL core_dlight.cpp_captureLightTextures_FUN_00474a90
//   Label: core_set.cpp_CDemonSet_FUN_0056fb80
//   XREF to: 00474a90 (UNCONDITIONAL_CALL)
// 0056fb85: MOV EDX,dword ptr [0x006844f0]
//   XREF to: 03f875e0 (PARAM)
//   XREF to: 006844f0 (READ)
// 0056fb8b: PUSH EDX
//   XREF to: 03f875e0 (DATA)
// 0056fb8c: CALL core_water.cpp_CWater_captureTextures_FUN_005e9e40
//   XREF to: 005e9e40 (UNCONDITIONAL_CALL)
// 0056fb91: ADD ESP,0x4
// 0056fb94: RET
