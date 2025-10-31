// Name: core_fire.cpp_CLightningBolt_process_FUN_004c56e0
// Address: 004c56e0
// Address Range: [[004c56e0, 004c5717]]
// Convention: __cdecl
// Signature: void core_fire.cpp_CLightningBolt_process_FUN_004c56e0(CLightningBolt * this_ptr)
// Cross-references:
//   core_fire.cpp_CFireEffect_process_FUN_004c6ec0 (004c6ec0) at 004c70d3 [UNCONDITIONAL_CALL]
// Globals:
//   CGame* g_CGamePtr = 02d81a9c
//   undefined4 g_CGameInstance.delta_time_float

#include "nocturne.h"

void __cdecl core_fire_cpp_CLightningBolt_process_FUN_004c56e0(CLightningBolt *this_ptr)

{
  if ((0.0 < *(float *)(this_ptr->field0_0x0 + 0x14)) &&
     (*(float *)(this_ptr->field0_0x0 + 0x14) =
           *(float *)(this_ptr->field0_0x0 + 0x14) - g_CGamePtr->delta_time_float,
     *(float *)(this_ptr->field0_0x0 + 0x14) < 0.0)) {
    this_ptr->field0_0x0[0x14] = '\0';
    this_ptr->field0_0x0[0x15] = '\0';
    this_ptr->field0_0x0[0x16] = '\0';
    this_ptr->field0_0x0[0x17] = '\0';
    return;
  }
  return;
}


// Assembly code:
// 004c56e0: MOV EDX,dword ptr [ESP + 0x4]
//   Label: core_fire.cpp_CLightningBolt_process_FUN_004c56e0
//   XREF to: Stack[0x4] (READ)
// 004c56e4: FLD float ptr [EDX + 0x14]
// 004c56e7: FLDZ
// 004c56e9: FCOMPP
// 004c56eb: FNSTSW AX
// 004c56ed: SAHF
// 004c56ee: JNC 0x004c570f
//   XREF to: 004c570f (CONDITIONAL_JUMP)
// 004c56f0: MOV ECX,dword ptr [0x0067b654]
//   XREF to: 0067b654 (READ)
// 004c56f6: LEA EAX,[EDX + 0x14]
// 004c56f9: FLD float ptr [ECX + 0x264]
//   XREF to: 02d81d00 (READ)
// 004c56ff: FSUBR float ptr [EAX]
// 004c5701: FSTP float ptr [EAX]
// 004c5703: FLD float ptr [EDX + 0x14]
// 004c5706: FLDZ
// 004c5708: FCOMPP
// 004c570a: FNSTSW AX
// 004c570c: SAHF
// 004c570d: JA 0x004c5710
//   XREF to: 004c5710 (CONDITIONAL_JUMP)
// 004c570f: RET
//   Label: LAB_004c570f
// 004c5710: MOV dword ptr [EDX + 0x14],0x0
//   Label: LAB_004c5710
// 004c5717: RET
