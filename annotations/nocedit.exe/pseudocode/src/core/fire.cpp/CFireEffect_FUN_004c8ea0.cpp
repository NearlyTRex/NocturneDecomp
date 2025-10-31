// Name: core_fire.cpp_CFireEffect_FUN_004c8ea0
// Address: 004c8ea0
// Address Range: [[004c8ea0, 004c8ee3]]
// Convention: __cdecl
// Signature: void core_fire.cpp_CFireEffect_FUN_004c8ea0(CFireEffect * this_ptr)
// Cross-references:
//   core_baron.cpp_FUN_004136b0 (004136b0) at 00413796 [UNCONDITIONAL_CALL]
//   core_fire.cpp_CFireEffect_FUN_004c8c10 (004c8c10) at 004c8c79 [UNCONDITIONAL_CALL]
// Globals:
//   undefined4 DAT_02d6c6a0
//   CCrater[20] g_CFireEffectCraters
// Function calls:
//   core_fire.cpp_CCrater_FUN_004c4200

#include "nocturne.h"

void __cdecl core_fire_cpp_CFireEffect_FUN_004c8ea0(CFireEffect *this_ptr)

{
  core_fire_cpp_CCrater_FUN_004c4200(g_CFireEffectCraters + DAT_02d6c6a0);
  DAT_02d6c6a0 = DAT_02d6c6a0 + 1;
  if (DAT_02d6c6a0 < 0x14) {
    return;
  }
  DAT_02d6c6a0 = 0;
  return;
}


// Assembly code:
// 004c8ea0: PUSH dword ptr [ESP + 0xc]
//   Label: core_fire.cpp_CFireEffect_FUN_004c8ea0
//   XREF to: Stack[0xc] (READ)
// 004c8ea4: MOV EAX,[0x02d6c6a0]
//   XREF to: 02d6c6a0 (READ)
// 004c8ea9: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 004c8ead: SHL EAX,0x4
// 004c8eb0: PUSH EDX
// 004c8eb1: MOV EDX,EAX
// 004c8eb3: SHL EAX,0x3
// 004c8eb6: SUB EAX,EDX
// 004c8eb8: ADD EAX,0x2d6c6a4
//   XREF to: 02d6c6a4 (DATA)
// 004c8ebd: PUSH EAX
// 004c8ebe: CALL core_fire.cpp_CCrater_FUN_004c4200
//   XREF to: 004c4200 (UNCONDITIONAL_CALL)
// 004c8ec3: MOV ECX,dword ptr [0x02d6c6a0]
//   XREF to: 02d6c6a0 (READ)
// 004c8ec9: INC ECX
// 004c8eca: ADD ESP,0xc
// 004c8ecd: MOV dword ptr [0x02d6c6a0],ECX
//   XREF to: 02d6c6a0 (WRITE)
// 004c8ed3: CMP ECX,0x14
// 004c8ed6: JGE 0x004c8ed9
//   XREF to: 004c8ed9 (CONDITIONAL_JUMP)
// 004c8ed8: RET
// 004c8ed9: PUSH ESI
//   Label: LAB_004c8ed9
// 004c8eda: XOR ESI,ESI
// 004c8edc: MOV dword ptr [0x02d6c6a0],ESI
//   XREF to: 02d6c6a0 (WRITE)
// 004c8ee2: POP ESI
// 004c8ee3: RET
