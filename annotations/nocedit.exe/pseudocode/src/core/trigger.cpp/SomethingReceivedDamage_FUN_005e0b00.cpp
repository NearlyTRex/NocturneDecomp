// Name: core_trigger.cpp_SomethingReceivedDamage_FUN_005e0b00
// Address: 005e0b00
// Address Range: [[005e0b00, 005e0b76]]
// Convention: unknown
// Signature: undefined core_trigger.cpp_SomethingReceivedDamage_FUN_005e0b00()
// Cross-references:
//   core_actor.cpp_CDemonActor_processMeleeHit_FUN_0040a210 (0040a210) at 0040ab67 [UNCONDITIONAL_CALL]
//   core_crossbow.cpp_CCrossbow_FUN_00448f20 (00448f20) at 004492a8 [UNCONDITIONAL_CALL]
//   core_gun.cpp_FUN_004f0350 (004f0350) at 004f0a9d [UNCONDITIONAL_CALL]
//   core_lightgun.cpp_FUN_00505c70 (00505c70) at 00506231 [UNCONDITIONAL_CALL]
//   core_set.cpp_CDemonSet_FUN_0056b810 (0056b810) at 0056bc47 [UNCONDITIONAL_CALL]
//   core_tommygun.cpp_FUN_005ddb30 (005ddb30) at 005de2b6 [UNCONDITIONAL_CALL]
//   core_turret.cpp_FUN_005e3750 (005e3750) at 005e3bc4 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_s_received_g_damage_hitp_006557a7
//   CConsole* g_CConsolePtr = 0083b1a4
//   CConsole g_ConsolePtr
// Function calls:
//   engine_console.cpp_CConsole_printf_FUN_00441890

#include "nocturne.h"

/* Signature: undefined1 actors_other_trigger.cpp_SomethingReceivedDamage(undefined4 param_1,
   undefined4 param_2) */

void core_trigger_cpp_SomethingReceivedDamage_FUN_005e0b00
               (undefined4 param_1,undefined4 param_2,undefined4 unaff_EBX,undefined4 param_4,
               int param_5,float param_6)

{
  float fVar1;
  
  if ((*(int *)(param_5 + 0x174) == 7) && (*(float *)(param_5 + 0x36c) <= 0.0)) {
    fVar1 = *(float *)(param_5 + 0x2f8) - param_6;
    *(float *)(param_5 + 0x2f8) = fVar1;
    if (fVar1 < 0.0) {
      *(undefined4 *)(param_5 + 0x2f8) = 0;
    }
    engine_console_cpp_CConsole_printf_FUN_00441890
              (g_CConsolePtr,"%s received %g damage, hitpoints %g\n",param_5,(double)param_6,
               (double)*(float *)(param_5 + 0x2f8),unaff_EBX);
    *(undefined4 *)(param_5 + 0x36c) = 0x3f800000;
  }
  return;
}


// Assembly code:
// 005e0b00: PUSH EBX
//   Label: core_trigger.cpp_SomethingReceivedDamage_FUN_005e0b00
// 005e0b01: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 005e0b05: CMP dword ptr [EBX + 0x174],0x7
// 005e0b0c: JNZ 0x005e0b75
//   XREF to: 005e0b75 (CONDITIONAL_JUMP)
// 005e0b0e: FLD float ptr [EBX + 0x36c]
// 005e0b14: FLDZ
// 005e0b16: FCOMPP
// 005e0b18: FNSTSW AX
// 005e0b1a: SAHF
// 005e0b1b: JC 0x005e0b75
//   XREF to: 005e0b75 (CONDITIONAL_JUMP)
// 005e0b1d: FLD float ptr [EBX + 0x2f8]
// 005e0b23: FSUB float ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 005e0b27: FST float ptr [EBX + 0x2f8]
// 005e0b2d: FLDZ
// 005e0b2f: FCOMPP
// 005e0b31: FNSTSW AX
// 005e0b33: SAHF
// 005e0b34: JBE 0x005e0b40
//   XREF to: 005e0b40 (CONDITIONAL_JUMP)
// 005e0b36: MOV dword ptr [EBX + 0x2f8],0x0
// 005e0b40: SUB ESP,0x8
//   Label: LAB_005e0b40
// 005e0b43: FLD float ptr [EBX + 0x2f8]
// 005e0b49: FSTP double ptr [ESP]
//   XREF to: Stack[-0xc] (DATA)
// 005e0b4c: FLD float ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 005e0b50: SUB ESP,0x8
// 005e0b53: FSTP double ptr [ESP]
//   XREF to: Stack[-0x14] (DATA)
// 005e0b56: PUSH EBX
// 005e0b57: PUSH 0x6557a7
//   XREF to: 006557a7 (DATA)
// 005e0b5c: MOV ECX,dword ptr [0x0066e8e0]
//   XREF to: 0083b1a4 (PARAM)
//   XREF to: 0066e8e0 (READ)
// 005e0b62: PUSH ECX
//   XREF to: 0083b1a4 (DATA)
// 005e0b63: CALL engine_console.cpp_CConsole_printf_FUN_00441890
//   XREF to: 00441890 (UNCONDITIONAL_CALL)
// 005e0b68: ADD ESP,0x1c
// 005e0b6b: MOV dword ptr [EBX + 0x36c],0x3f800000
// 005e0b75: POP EBX
//   Label: LAB_005e0b75
// 005e0b76: RET
