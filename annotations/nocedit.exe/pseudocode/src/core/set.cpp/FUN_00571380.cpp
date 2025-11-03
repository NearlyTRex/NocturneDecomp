// Name: core_set.cpp_FUN_00571380
// Address: 00571380
// Address Range: [[00571380, 005713b0]]
// Convention: unknown
// Signature: undefined core_set.cpp_FUN_00571380()
// Globals:
//   CFireEffect* g_CFireEffectPtr = 02d12db0
//   CGore* g_CGorePtr = 02d83364
//   CFireEffect g_CFireEffectInstance
//   CGore g_CGoreInstance
// Function calls:
//   core_fire.cpp_CFireEffect_renderDecals_FUN_004c74a0
//   core_gore.cpp_FUN_004ed830

#include "nocturne.h"

void core_set_cpp_FUN_00571380(void)

{
  int in_stack_0000000c;
  
  core_gore_cpp_FUN_004ed830(g_CGorePtr);
  core_fire_cpp_CFireEffect_renderDecals_FUN_004c74a0(g_CFireEffectPtr,0,in_stack_0000000c);
  return;
}


// Assembly code:
// 00571380: PUSH EBX
//   Label: core_set.cpp_FUN_00571380
// 00571381: PUSH ESI
// 00571382: MOV EDX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 00571386: PUSH EDX
// 00571387: PUSH 0x0
// 00571389: MOV ECX,dword ptr [0x0067b9a0]
//   XREF to: 0067b9a0 (READ)
//   XREF to: 02d83364 (PARAM)
// 0057138f: PUSH ECX
//   XREF to: 02d83364 (DATA)
// 00571390: CALL core_gore.cpp_FUN_004ed830
//   XREF to: 004ed830 (UNCONDITIONAL_CALL)
// 00571395: ADD ESP,0xc
// 00571398: MOV EBX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 0057139c: PUSH EBX
// 0057139d: PUSH 0x0
// 0057139f: MOV ESI,dword ptr [0x0067a3d0]
//   XREF to: 0067a3d0 (READ)
// 005713a5: PUSH ESI
//   XREF to: 02d12db0 (DATA)
// 005713a6: CALL core_fire.cpp_CFireEffect_renderDecals_FUN_004c74a0
//   XREF to: 004c74a0 (UNCONDITIONAL_CALL)
// 005713ab: ADD ESP,0xc
// 005713ae: POP ESI
// 005713af: POP EBX
// 005713b0: RET
