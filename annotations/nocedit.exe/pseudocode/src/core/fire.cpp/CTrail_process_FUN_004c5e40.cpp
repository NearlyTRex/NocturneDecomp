// Name: core_fire.cpp_CTrail_process_FUN_004c5e40
// Address: 004c5e40
// Address Range: [[004c5e40, 004c5e8a]]
// Convention: __cdecl
// Signature: void core_fire.cpp_CTrail_process_FUN_004c5e40(CTrail * this_ptr)
// Cross-references:
//   core_fire.cpp_CFireEffect_process_FUN_004c6ec0 (004c6ec0) at 004c70ee [UNCONDITIONAL_CALL]
// Globals:
//   CGame* g_CGamePtr = 02d81a9c
//   undefined4 g_CGameInstance.delta_time_float

#include "nocturne.h"

void __cdecl core_fire_cpp_CTrail_process_FUN_004c5e40(CTrail *this_ptr)

{
  if (0.0 < *(float *)(this_ptr->field0_0x0 + 0x10)) {
    *(float *)(this_ptr->field0_0x0 + 0x10) =
         *(float *)(this_ptr->field0_0x0 + 0x10) - g_CGamePtr->delta_time_float;
    if (0.0 <= *(float *)(this_ptr->field0_0x0 + 0x10)) {
      *(float *)(this_ptr->field0_0x0 + 0x14) =
           (1.0 - (*(float *)(this_ptr->field0_0x0 + 0x18) - *(float *)(this_ptr->field0_0x0 + 0x10)
                  ) / *(float *)(this_ptr->field0_0x0 + 0x18)) *
           *(float *)(this_ptr->field0_0x0 + 0x1c);
      return;
    }
    this_ptr->field0_0x0[0x10] = '\0';
    this_ptr->field0_0x0[0x11] = '\0';
    this_ptr->field0_0x0[0x12] = '\0';
    this_ptr->field0_0x0[0x13] = '\0';
  }
  return;
}


// Assembly code:
// 004c5e40: MOV EDX,dword ptr [ESP + 0x4]
//   Label: core_fire.cpp_CTrail_process_FUN_004c5e40
//   XREF to: Stack[0x4] (READ)
// 004c5e44: FLD float ptr [EDX + 0x10]
// 004c5e47: FLDZ
// 004c5e49: FCOMPP
// 004c5e4b: FNSTSW AX
// 004c5e4d: SAHF
// 004c5e4e: JNC 0x004c5e76
//   XREF to: 004c5e76 (CONDITIONAL_JUMP)
// 004c5e50: MOV ECX,dword ptr [0x0067b654]
//   XREF to: 0067b654 (READ)
// 004c5e56: LEA EAX,[EDX + 0x10]
// 004c5e59: FLD float ptr [ECX + 0x264]
//   XREF to: 02d81d00 (READ)
// 004c5e5f: FSUBR float ptr [EAX]
// 004c5e61: FSTP float ptr [EAX]
// 004c5e63: FLD float ptr [EDX + 0x10]
// 004c5e66: FLDZ
// 004c5e68: FCOMPP
// 004c5e6a: FNSTSW AX
// 004c5e6c: SAHF
// 004c5e6d: JBE 0x004c5e77
//   XREF to: 004c5e77 (CONDITIONAL_JUMP)
// 004c5e6f: MOV dword ptr [EDX + 0x10],0x0
// 004c5e76: RET
//   Label: LAB_004c5e76
// 004c5e77: FLD float ptr [EDX + 0x18]
//   Label: LAB_004c5e77
// 004c5e7a: FSUB float ptr [EDX + 0x10]
// 004c5e7d: FDIV float ptr [EDX + 0x18]
// 004c5e80: FLD1
// 004c5e82: FSUBRP
// 004c5e84: FMUL float ptr [EDX + 0x1c]
// 004c5e87: FSTP float ptr [EDX + 0x14]
// 004c5e8a: RET
