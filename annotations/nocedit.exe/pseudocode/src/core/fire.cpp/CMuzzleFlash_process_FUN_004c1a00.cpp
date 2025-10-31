// Name: core_fire.cpp_CMuzzleFlash_process_FUN_004c1a00
// Address: 004c1a00
// Address Range: [[004c1a00, 004c1a2f]]
// Convention: __cdecl
// Signature: void core_fire.cpp_CMuzzleFlash_process_FUN_004c1a00(CMuzzleFlash * this_ptr)
// Cross-references:
//   core_fire.cpp_CFireEffect_process_FUN_004c6ec0 (004c6ec0) at 004c6f2c [UNCONDITIONAL_CALL]
// Globals:
//   CFireEffect* g_CFireEffectPtr = 02d12db0
//   CFireEffect g_CFireEffectInstance
// Function calls:
//   core_fire.cpp_CFireEffect_FUN_004c7620

#include "nocturne.h"

void __cdecl core_fire_cpp_CMuzzleFlash_process_FUN_004c1a00(CMuzzleFlash *this_ptr)

{
  int iVar1;
  
  iVar1 = *(int *)this_ptr->field0_0x0 + -1;
  *(int *)this_ptr->field0_0x0 = iVar1;
  if (iVar1 < 0) {
    this_ptr->field0_0x0[0] = '\0';
    this_ptr->field0_0x0[1] = '\0';
    this_ptr->field0_0x0[2] = '\0';
    this_ptr->field0_0x0[3] = '\0';
    return;
  }
  if (iVar1 != 1) {
    return;
  }
  core_fire_cpp_CFireEffect_FUN_004c7620(g_CFireEffectPtr);
  return;
}


// Assembly code:
// 004c1a00: MOV EAX,dword ptr [ESP + 0x4]
//   Label: core_fire.cpp_CMuzzleFlash_process_FUN_004c1a00
//   XREF to: Stack[0x4] (READ)
// 004c1a04: MOV EDX,dword ptr [EAX]
// 004c1a06: DEC EDX
// 004c1a07: MOV dword ptr [EAX],EDX
// 004c1a09: TEST EDX,EDX
// 004c1a0b: JL 0x004c1a13
//   XREF to: 004c1a13 (CONDITIONAL_JUMP)
// 004c1a0d: CMP EDX,0x1
// 004c1a10: JZ 0x004c1a1a
//   XREF to: 004c1a1a (CONDITIONAL_JUMP)
// 004c1a12: RET
// 004c1a13: MOV dword ptr [EAX],0x0
//   Label: LAB_004c1a13
// 004c1a19: RET
// 004c1a1a: PUSH ESI
//   Label: LAB_004c1a1a
// 004c1a1b: ADD EAX,0x4
// 004c1a1e: PUSH EAX
// 004c1a1f: MOV ESI,dword ptr [0x0067a3d0]
//   XREF to: 0067a3d0 (READ)
// 004c1a25: PUSH ESI
//   XREF to: 02d12db0 (DATA)
// 004c1a26: CALL core_fire.cpp_CFireEffect_FUN_004c7620
//   XREF to: 004c7620 (UNCONDITIONAL_CALL)
// 004c1a2b: ADD ESP,0x8
// 004c1a2e: POP ESI
// 004c1a2f: RET
