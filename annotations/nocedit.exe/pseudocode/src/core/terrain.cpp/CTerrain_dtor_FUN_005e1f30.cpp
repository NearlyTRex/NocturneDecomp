// Name: core_terrain.cpp_CTerrain_dtor_FUN_005e1f30
// Address: 005e1f30
// Address Range: [[005e1f30, 005e1f47]]
// Convention: __cdecl
// Signature: CTerrain * core_terrain.cpp_CTerrain_dtor_FUN_005e1f30(CTerrain * this_ptr)
// Cross-references:
//   core_set.cpp_CDemonSet_clear_FUN_005693c0 (005693c0) at 005693f8 [UNCONDITIONAL_CALL]
//   core_set.cpp_CDemonSet_load_FUN_00569410 (00569410) at 00569f60 [UNCONDITIONAL_CALL]
// Globals:
//   CGround* g_CGroundPtr = 02db8668
//   CGround g_CGroundInstance
//   undefined4 g_CTerrainInstance.initialized
// Function calls:
//   core_ground.cpp_CGround_free_FUN_004eefb0

#include "nocturne.h"

CTerrain * __cdecl core_terrain_cpp_CTerrain_dtor_FUN_005e1f30(CTerrain *this_ptr)

{
  CTerrain *extraout_EAX;
  
  core_ground_cpp_CGround_free_FUN_004eefb0(g_CGroundPtr);
  g_CTerrainInstance.initialized = 0;
  return extraout_EAX;
}


// Assembly code:
// 005e1f30: MOV EDX,dword ptr [0x0067cbc8]
//   Label: core_terrain.cpp_CTerrain_dtor_FUN_005e1f30
//   XREF to: 02db8668 (PARAM)
//   XREF to: 0067cbc8 (READ)
// 005e1f36: PUSH EDX
//   XREF to: 02db8668 (DATA)
// 005e1f37: CALL core_ground.cpp_CGround_free_FUN_004eefb0
//   XREF to: 004eefb0 (UNCONDITIONAL_CALL)
// 005e1f3c: XOR ECX,ECX
// 005e1f3e: ADD ESP,0x4
// 005e1f41: MOV dword ptr [0x03f874a0],ECX
//   XREF to: 03f874a0 (WRITE)
// 005e1f47: RET
