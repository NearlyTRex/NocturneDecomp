// Name: core_fire.cpp_CExplosion_process_FUN_004c3ac0
// Address: 004c3ac0
// Address Range: [[004c3ac0, 004c3b04]]
// Convention: __cdecl
// Signature: void core_fire.cpp_CExplosion_process_FUN_004c3ac0(CExplosion * this_ptr)
// Cross-references:
//   core_fire.cpp_CFireEffect_process_FUN_004c6ec0 (004c6ec0) at 004c704c [UNCONDITIONAL_CALL]
// Globals:
//   CGame* g_CGamePtr = 02d81a9c
//   undefined4 g_CGameInstance.delta_time_float

#include "nocturne.h"

void __cdecl core_fire_cpp_CExplosion_process_FUN_004c3ac0(CExplosion *this_ptr)

{
  float fVar1;
  
  if ((0.0 < *(float *)(this_ptr->field0_0x0 + 0xc)) &&
     (fVar1 = *(float *)(this_ptr->field0_0x0 + 0xc) - g_CGamePtr->delta_time_float,
     *(float *)(this_ptr->field0_0x0 + 0xc) = fVar1, fVar1 < 0.0)) {
    this_ptr->field0_0x0[0xc] = '\0';
    this_ptr->field0_0x0[0xd] = '\0';
    this_ptr->field0_0x0[0xe] = '\0';
    this_ptr->field0_0x0[0xf] = '\0';
    return;
  }
  return;
}


// Assembly code:
// 004c3ac0: PUSH EBP
//   Label: core_fire.cpp_CExplosion_process_FUN_004c3ac0
// 004c3ac1: MOV EBP,ESP
// 004c3ac3: SUB ESP,0x8
// 004c3ac6: AND ESP,0xfffffff8
// 004c3ac9: MOV EDX,dword ptr [EBP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 004c3acc: FLDZ
// 004c3ace: FLD float ptr [EDX + 0xc]
// 004c3ad1: FSTP double ptr [ESP]
//   XREF to: Stack[-0x10] (DATA)
// 004c3ad4: FCOMP double ptr [ESP]
//   XREF to: Stack[-0x10] (DATA)
// 004c3ad7: FNSTSW AX
// 004c3ad9: SAHF
// 004c3ada: JNC 0x004c3af6
//   XREF to: 004c3af6 (CONDITIONAL_JUMP)
// 004c3adc: MOV EAX,[0x0067b654]
//   XREF to: 0067b654 (READ)
// 004c3ae1: FLD float ptr [EAX + 0x264]
//   XREF to: 02d81d00 (READ)
// 004c3ae7: FSUBR double ptr [ESP]
//   XREF to: Stack[-0x10] (DATA)
// 004c3aea: FST float ptr [EDX + 0xc]
// 004c3aed: FLDZ
// 004c3aef: FCOMPP
// 004c3af1: FNSTSW AX
// 004c3af3: SAHF
// 004c3af4: JA 0x004c3afa
//   XREF to: 004c3afa (CONDITIONAL_JUMP)
// 004c3af6: MOV ESP,EBP
//   Label: LAB_004c3af6
// 004c3af8: POP EBP
// 004c3af9: RET
// 004c3afa: MOV dword ptr [EDX + 0xc],0x0
//   Label: LAB_004c3afa
// 004c3b01: MOV ESP,EBP
// 004c3b03: POP EBP
// 004c3b04: RET
