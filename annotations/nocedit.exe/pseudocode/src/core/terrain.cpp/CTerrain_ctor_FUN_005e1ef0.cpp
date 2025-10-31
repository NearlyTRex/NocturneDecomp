// Name: core_terrain.cpp_CTerrain_ctor_FUN_005e1ef0
// Address: 005e1ef0
// Address Range: [[005e1ef0, 005e1f2a]]
// Convention: __cdecl
// Signature: CTerrain * core_terrain.cpp_CTerrain_ctor_FUN_005e1ef0(CTerrain * this_ptr)
// Cross-references:
//   core_set.cpp_CDemonSet_load_FUN_00569410 (00569410) at 0056975e [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_junk_jnk_00656590
//   CGround* g_CGroundPtr = 02db8668
//   CGround g_CGroundInstance
//   undefined4 g_CTerrainInstance.initialized
// Function calls:
//   core_ground.cpp_CGround_init_FUN_004eef00
//   core_ground.cpp_CGround_load_FUN_004ef030

#include "nocturne.h"

CTerrain * __cdecl core_terrain_cpp_CTerrain_ctor_FUN_005e1ef0(CTerrain *this_ptr)

{
  CGround *this_ptr_00;
  CTerrain *pCVar1;
  
  this_ptr_00 = g_CGroundPtr;
  this_ptr->animation_counter = 0;
  core_ground_cpp_CGround_init_FUN_004eef00(this_ptr_00);
  pCVar1 = (CTerrain *)core_ground_cpp_CGround_load_FUN_004ef030(g_CGroundPtr,"junk.jnk");
  g_CTerrainInstance.initialized = 1;
  return pCVar1;
}


// Assembly code:
// 005e1ef0: PUSH EBX
//   Label: core_terrain.cpp_CTerrain_ctor_FUN_005e1ef0
// 005e1ef1: MOV EDX,dword ptr [0x0067cbc8]
//   XREF to: 02db8668 (PARAM)
//   XREF to: 0067cbc8 (READ)
// 005e1ef7: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 005e1efb: PUSH EDX
//   XREF to: 02db8668 (DATA)
// 005e1efc: MOV dword ptr [EAX],0x0
// 005e1f02: CALL core_ground.cpp_CGround_init_FUN_004eef00
//   XREF to: 004eef00 (UNCONDITIONAL_CALL)
// 005e1f07: ADD ESP,0x4
// 005e1f0a: PUSH 0x656590
//   XREF to: 00656590 (DATA)
// 005e1f0f: MOV ECX,dword ptr [0x0067cbc8]
//   XREF to: 02db8668 (PARAM)
//   XREF to: 0067cbc8 (READ)
// 005e1f15: PUSH ECX
//   XREF to: 02db8668 (DATA)
// 005e1f16: MOV EBX,0x1
// 005e1f1b: CALL core_ground.cpp_CGround_load_FUN_004ef030
//   XREF to: 004ef030 (UNCONDITIONAL_CALL)
// 005e1f20: ADD ESP,0x8
// 005e1f23: MOV dword ptr [0x03f874a0],EBX
//   XREF to: 03f874a0 (WRITE)
// 005e1f29: POP EBX
// 005e1f2a: RET
