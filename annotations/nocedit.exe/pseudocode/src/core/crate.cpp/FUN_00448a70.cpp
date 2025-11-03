// Name: core_crate.cpp_FUN_00448a70
// Address: 00448a70
// Address Range: [[00448a70, 00448b1b]]
// Convention: unknown
// Signature: undefined core_crate.cpp_FUN_00448a70()
// Cross-references:
//   core_actor.cpp_CDemonActor_processMeleeHit_FUN_0040a210 (0040a210) at 0040abaa [UNCONDITIONAL_CALL]
//   core_gun.cpp_FUN_004f0350 (004f0350) at 004f0abe [UNCONDITIONAL_CALL]
//   core_tommygun.cpp_FUN_005ddb30 (005ddb30) at 005de2d7 [UNCONDITIONAL_CALL]
//   core_turret.cpp_FUN_005e3750 (005e3750) at 005e3c2a [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_s_exploding_00619b2e
//   CConsole* g_CConsolePtr = 0083b1a4
//   CFireEffect* g_CFireEffectPtr = 02d12db0
//   CDemonMission* g_CDemonMissionPtr = 02f33740
//   CConsole g_ConsolePtr
//   CFireEffect g_CFireEffectInstance
//   CDemonMission g_CDemonMissionInstance
// Function calls:
//   core_fire.cpp_CFireEffect_FUN_004c8c10
//   core_mission.cpp_CDemonMission_markActorToDelete_FUN_005240a0
//   engine_console.cpp_CConsole_printf_FUN_00441890

#include "nocturne.h"

/* Signature: undefined1 actors_other_crate.cpp_FUN_00448a70(undefined4 param_1) */

void core_crate_cpp_FUN_00448a70(void)

{
  BADSPACEBASE *in_ESP;
  int in_stack_00000004;
  float fStack_24;
  float fStack_18;
  undefined4 uStack_10;
  float fStack_c;
  undefined4 uStack_8;
  
  if (*(int *)(in_stack_00000004 + 0x70) != 1) {
    return;
  }
  engine_console_cpp_CConsole_printf_FUN_00441890
            (g_CConsolePtr,"%s exploding!\n",in_stack_00000004);
  (**(code **)(*(int *)(in_stack_00000004 + 0x154) + 0x14))();
  if (&uStack_10 != (undefined4 *)(in_stack_00000004 + 0x20)) {
    uStack_10 = *(undefined4 *)(in_stack_00000004 + 0x20);
    fStack_c = *(float *)(in_stack_00000004 + 0x24);
    uStack_8 = *(undefined4 *)(in_stack_00000004 + 0x28);
  }
  fStack_c = (fStack_18 - fStack_24) + fStack_c;
  core_fire_cpp_CFireEffect_FUN_004c8c10(g_CFireEffectPtr);
  core_mission_cpp_CDemonMission_markActorToDelete_FUN_005240a0(g_CDemonMissionPtr);
  *(undefined4 *)(in_stack_00000004 + 0x70) = 2;
  return;
}


// Assembly code:
// 00448a70: PUSH EBX
//   Label: core_crate.cpp_FUN_00448a70
// 00448a71: SUB ESP,0x24
// 00448a74: MOV EBX,dword ptr [ESP + 0x2c]
//   XREF to: Stack[0x4] (READ)
// 00448a78: CMP dword ptr [EBX + 0x70],0x1
// 00448a7c: JZ 0x00448a83
//   XREF to: 00448a83 (CONDITIONAL_JUMP)
// 00448a7e: ADD ESP,0x24
// 00448a81: POP EBX
// 00448a82: RET
// 00448a83: PUSH EBX
//   Label: LAB_00448a83
// 00448a84: PUSH 0x619b2e
//   XREF to: 00619b2e (DATA)
// 00448a89: MOV ECX,dword ptr [0x0066e8e0]
//   XREF to: 0083b1a4 (PARAM)
//   XREF to: 0066e8e0 (READ)
// 00448a8f: PUSH ECX
//   XREF to: 0083b1a4 (DATA)
// 00448a90: CALL engine_console.cpp_CConsole_printf_FUN_00441890
//   XREF to: 00441890 (UNCONDITIONAL_CALL)
// 00448a95: ADD ESP,0xc
// 00448a98: MOV EAX,ESP
// 00448a9a: PUSH EAX
// 00448a9b: MOV EDX,dword ptr [EBX + 0x154]
// 00448aa1: PUSH EBX
// 00448aa2: CALL dword ptr [EDX + 0x14]
// 00448aa5: LEA EAX,[ESP + 0x20]
// 00448aa9: LEA EDX,[EBX + 0x20]
// 00448aac: ADD ESP,0x8
// 00448aaf: CMP EAX,EDX
// 00448ab1: JZ 0x00448ac7
//   XREF to: 00448ac7 (CONDITIONAL_JUMP)
// 00448ab3: MOV EAX,dword ptr [EDX]
// 00448ab5: MOV dword ptr [ESP + 0x18],EAX
// 00448ab9: MOV EAX,dword ptr [EDX + 0x4]
// 00448abc: MOV dword ptr [ESP + 0x1c],EAX
// 00448ac0: MOV EAX,dword ptr [EDX + 0x8]
// 00448ac3: MOV dword ptr [ESP + 0x20],EAX
// 00448ac7: PUSH EDI
//   Label: LAB_00448ac7
// 00448ac8: PUSH ESI
// 00448ac9: PUSH 0x40800000
// 00448ace: FLD float ptr [ESP + 0x1c]
// 00448ad2: PUSH 0x44bb8000
// 00448ad7: LEA EAX,[ESP + 0x28]
// 00448adb: MOV ESI,dword ptr [0x0067a3d0]
//   XREF to: 0067a3d0 (READ)
// 00448ae1: PUSH 0x42000000
// 00448ae6: FSUB float ptr [ESP + 0x18]
// 00448aea: PUSH EAX
// 00448aeb: FADD float ptr [ESP + 0x34]
// 00448aef: PUSH ESI
//   XREF to: 02d12db0 (DATA)
// 00448af0: FSTP float ptr [ESP + 0x38]
// 00448af4: CALL core_fire.cpp_CFireEffect_FUN_004c8c10
//   XREF to: 004c8c10 (UNCONDITIONAL_CALL)
// 00448af9: ADD ESP,0x14
// 00448afc: PUSH 0x1
// 00448afe: PUSH EBX
// 00448aff: MOV EDI,dword ptr [0x0067d550]
//   XREF to: 0067d550 (READ)
// 00448b05: PUSH EDI
//   XREF to: 02f33740 (DATA)
// 00448b06: CALL core_mission.cpp_CDemonMission_markActorToDelete_FUN_005240a0
//   XREF to: 005240a0 (UNCONDITIONAL_CALL)
// 00448b0b: ADD ESP,0xc
// 00448b0e: MOV dword ptr [EBX + 0x70],0x2
// 00448b15: POP ESI
// 00448b16: POP EDI
// 00448b17: ADD ESP,0x24
// 00448b1a: POP EBX
// 00448b1b: RET
