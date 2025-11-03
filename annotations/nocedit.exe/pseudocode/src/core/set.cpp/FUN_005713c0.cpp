// Name: core_set.cpp_FUN_005713c0
// Address: 005713c0
// Address Range: [[005713c0, 00571408]]
// Convention: unknown
// Signature: undefined core_set.cpp_FUN_005713c0()
// Globals:
//   CFireEffect* g_CFireEffectPtr = 02d12db0
//   CGore* g_CGorePtr = 02d83364
//   CFireEffect g_CFireEffectInstance
//   CGore g_CGoreInstance
// Function calls:
//   core_fire.cpp_CFireEffect_renderDecals_FUN_004c74a0
//   core_gore.cpp_FUN_004ed830
//   core_set.cpp_CDemonSet_FUN_0056aca0
//   core_set.cpp_CDemonSet_FUN_0056fbd0

#include "nocturne.h"

void core_set_cpp_FUN_005713c0(void)

{
  CDemonSet *in_stack_00000004;
  CDemonSet *in_stack_00000008;
  
  core_set_cpp_CDemonSet_FUN_0056fbd0(in_stack_00000004);
  core_set_cpp_CDemonSet_FUN_0056aca0(in_stack_00000008);
  core_gore_cpp_FUN_004ed830(g_CGorePtr);
  core_fire_cpp_CFireEffect_renderDecals_FUN_004c74a0(g_CFireEffectPtr,1,0);
  return;
}


// Assembly code:
// 005713c0: PUSH EBX
//   Label: core_set.cpp_FUN_005713c0
// 005713c1: PUSH ESI
// 005713c2: PUSH 0x10
// 005713c4: MOV EDX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 005713c8: PUSH EDX
// 005713c9: CALL core_set.cpp_CDemonSet_FUN_0056fbd0
//   XREF to: 0056fbd0 (UNCONDITIONAL_CALL)
// 005713ce: ADD ESP,0x8
// 005713d1: PUSH 0x1
// 005713d3: MOV ECX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 005713d7: PUSH ECX
// 005713d8: CALL core_set.cpp_CDemonSet_FUN_0056aca0
//   XREF to: 0056aca0 (UNCONDITIONAL_CALL)
// 005713dd: ADD ESP,0x8
// 005713e0: PUSH 0x0
// 005713e2: PUSH 0x1
// 005713e4: MOV EBX,dword ptr [0x0067b9a0]
//   XREF to: 0067b9a0 (READ)
//   XREF to: 02d83364 (PARAM)
// 005713ea: PUSH EBX
//   XREF to: 02d83364 (DATA)
// 005713eb: CALL core_gore.cpp_FUN_004ed830
//   XREF to: 004ed830 (UNCONDITIONAL_CALL)
// 005713f0: ADD ESP,0xc
// 005713f3: PUSH 0x0
// 005713f5: PUSH 0x1
// 005713f7: MOV ESI,dword ptr [0x0067a3d0]
//   XREF to: 0067a3d0 (READ)
// 005713fd: PUSH ESI
//   XREF to: 02d12db0 (DATA)
// 005713fe: CALL core_fire.cpp_CFireEffect_renderDecals_FUN_004c74a0
//   XREF to: 004c74a0 (UNCONDITIONAL_CALL)
// 00571403: ADD ESP,0xc
// 00571406: POP ESI
// 00571407: POP EBX
// 00571408: RET
