// Name: core_fire.cpp_CStake_process_FUN_004c0210
// Address: 004c0210
// Address Range: [[004c0210, 004c0231]]
// Convention: __cdecl
// Signature: void core_fire.cpp_CStake_process_FUN_004c0210(CStake * this_ptr)
// Cross-references:
//   core_fire.cpp_CFireEffect_process_FUN_004c6ec0 (004c6ec0) at 004c6f57 [UNCONDITIONAL_CALL]
// Globals:
//   CGame* g_CGamePtr = 02d81a9c
//   undefined4 g_CGameInstance.delta_time_float
// Function calls:
//   core_box.cpp_CBox_processPhysics_FUN_0041e350

#include "nocturne.h"

void __cdecl core_fire_cpp_CStake_process_FUN_004c0210(CStake *this_ptr)

{
  core_box_cpp_CBox_processPhysics_FUN_0041e350(&this_ptr->box,g_CGamePtr->delta_time_float);
  return;
}


// Assembly code:
// 004c0210: MOV EAX,[0x0067b654]
//   Label: core_fire.cpp_CStake_process_FUN_004c0210
//   XREF to: 0067b654 (READ)
// 004c0215: SUB ESP,0x4
// 004c0218: FLD float ptr [EAX + 0x264]
//   XREF to: 02d81d00 (READ)
// 004c021e: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 004c0222: ADD EAX,0x4
// 004c0225: FSTP float ptr [ESP]
//   XREF to: Stack[-0x4] (DATA)
// 004c0228: PUSH EAX
// 004c0229: CALL core_box.cpp_CBox_processPhysics_FUN_0041e350
//   XREF to: 0041e350 (UNCONDITIONAL_CALL)
// 004c022e: ADD ESP,0x8
// 004c0231: RET
