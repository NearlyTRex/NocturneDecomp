// Name: core_fire.cpp_CFireEffect_FUN_004c7620
// Address: 004c7620
// Address Range: [[004c7620, 004c7640]]
// Convention: __cdecl
// Signature: void core_fire.cpp_CFireEffect_FUN_004c7620(CFireEffect * this_ptr)
// Cross-references:
//   core_fire.cpp_CMuzzleFlash_process_FUN_004c1a00 (004c1a00) at 004c1a26 [UNCONDITIONAL_CALL]
// Globals:
//   CFireEffect* g_CFireEffectPtr = 02d12db0
//   CFireEffect g_CFireEffectInstance
// Function calls:
//   core_fire.cpp_CFireEffect_FUN_004c7b20

#include "nocturne.h"

void __cdecl core_fire_cpp_CFireEffect_FUN_004c7620(CFireEffect *this_ptr)

{
  core_fire_cpp_CFireEffect_FUN_004c7b20(g_CFireEffectPtr);
  return;
}


// Assembly code:
// 004c7620: PUSH 0xffff
//   Label: core_fire.cpp_CFireEffect_FUN_004c7620
// 004c7625: PUSH 0x0
// 004c7627: MOV EDX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 004c762b: PUSH 0x3f19999a
// 004c7630: PUSH EDX
// 004c7631: MOV ECX,dword ptr [0x0067a3d0]
//   XREF to: 02d12db0 (PARAM)
//   XREF to: 0067a3d0 (READ)
// 004c7637: PUSH ECX
//   XREF to: 02d12db0 (DATA)
// 004c7638: CALL core_fire.cpp_CFireEffect_FUN_004c7b20
//   XREF to: 004c7b20 (UNCONDITIONAL_CALL)
// 004c763d: ADD ESP,0x14
// 004c7640: RET
