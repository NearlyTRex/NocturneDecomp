// Name: core_event.cpp_CEventList_evaluateCondition_FUN_004adca0
// Address: 004adca0
// Address Range: [[004adca0, 004adcfa]]
// Convention: __cdecl
// Signature: int core_event.cpp_CEventList_evaluateCondition_FUN_004adca0(CEventList * this_ptr, char * condition_expression)
// Cross-references:
//   core_anvil.cpp_CAnvil_process_FUN_00411d90 (00411d90) at 00411da6 [UNCONDITIONAL_CALL]
//   core_armour.cpp_CArmour_process_FUN_00412260 (00412260) at 0041233a [UNCONDITIONAL_CALL]
//   core_baron.cpp_CBaron_process_FUN_00412e80 (00412e80) at 00412eae [UNCONDITIONAL_CALL]
//   core_batman.cpp_CBatman_process_FUN_00416870 (00416870) at 00416ef6 [UNCONDITIONAL_CALL]
//   core_biggs.cpp_CBiggs_FUN_00418700 (00418700) at 00418901 [UNCONDITIONAL_CALL]
//   core_bodypart.cpp_CBodyPart_process_FUN_00419be0 (00419be0) at 00419d8e [UNCONDITIONAL_CALL]
//   core_boneguy.cpp_FUN_0041bf90 (0041bf90) at 0041bfb3 [UNCONDITIONAL_CALL]
//   core_bugs.cpp_FUN_004250f0 (004250f0) at 00425149 [UNCONDITIONAL_CALL]
//   core_conveyor.cpp_FUN_00441df0 (00441df0) at 00441e09 [UNCONDITIONAL_CALL]
//   core_curtain.cpp_FUN_0044a920 (0044a920) at 0044a96e [UNCONDITIONAL_CALL]
//   core_door.cpp_CDoor_process_FUN_004800c0 (004800c0) at 00480128 [UNCONDITIONAL_CALL]
//   core_dracbrid.cpp_FUN_00484410 (00484410) at 00485047 [UNCONDITIONAL_CALL]
//   core_emitter.cpp_FUN_004a8070 (004a8070) at 004a80b2 [UNCONDITIONAL_CALL]
//   core_enemy.cpp_CEnemy_FUN_004a9b00 (004a9b00) at 004a9b9f [UNCONDITIONAL_CALL]
//   core_enemy.cpp_CEnemy_FUN_004a9fd0 (004a9fd0) at 004a9fef [UNCONDITIONAL_CALL]
//   core_event.cpp_CEventList_FUN_004aacc0 (004aacc0) at 004acdc2 [UNCONDITIONAL_CALL]
//   core_event.cpp_FUN_004b1890 (004b1890) at 004b18ab [UNCONDITIONAL_CALL]
//   core_flame.cpp_FUN_004c9c00 (004c9c00) at 004c9c3a [UNCONDITIONAL_CALL]
//   core_flamecan.cpp_FUN_004cb390 (004cb390) at 004cb3a6 [UNCONDITIONAL_CALL]
//   core_game.cpp_CGame_processCheatCodes_FUN_004ddaf0 (004ddaf0) at 004ddb1b [UNCONDITIONAL_CALL]
//   core_glass.cpp_CGlass_checkBreakableCondition_FUN_004eb3a0 (004eb3a0) at 004eb3b1 [UNCONDITIONAL_CALL]
//   core_glass.cpp_CGlass_process_FUN_004e98e0 (004e98e0) at 004e9908 [UNCONDITIONAL_CALL]
//   core_grave.cpp_FUN_004ee5c0 (004ee5c0) at 004ee608 [UNCONDITIONAL_CALL]
//   core_hiram.cpp_FUN_004f4550 (004f4550) at 004f45fa [UNCONDITIONAL_CALL]
//   core_hostage.cpp_RelatedToRescuedTownsfolk_FUN_004f4bd0 (004f4bd0) at 004f5fca [UNCONDITIONAL_CALL]
//   core_hpriest.cpp_FUN_004f7c00 (004f7c00) at 004f7c20 [UNCONDITIONAL_CALL]
//   core_litecone.cpp_FUN_00506bc0 (00506bc0) at 00506c07 [UNCONDITIONAL_CALL]
//   core_mimic.cpp_CMimic_setup2_FUN_0051f780 (0051f780) at 0051f883 [UNCONDITIONAL_CALL]
//   core_mission.cpp_CDemonMission_buildActiveSetActorList_FUN_00524120 (00524120) at 0052421f [UNCONDITIONAL_CALL]
//   core_mobster.cpp_FUN_00525840 (00525840) at 00525ab8 [UNCONDITIONAL_CALL]
//   core_moloch.cpp_CMoloch_process_FUN_00528d20 (00528d20) at 00529382 [UNCONDITIONAL_CALL]
//   core_passngr.cpp_FUN_00545ef0 (00545ef0) at 00545f49 [UNCONDITIONAL_CALL]
//   core_pendulum.cpp_FUN_0054a180 (0054a180) at 0054a262 [UNCONDITIONAL_CALL]
//   core_platfrm.cpp_FUN_0054cc30 (0054cc30) at 0054d0c2 [UNCONDITIONAL_CALL]
//   core_platfrm.cpp_FUN_0054d9b0 (0054d9b0) at 0054da2c [UNCONDITIONAL_CALL]
//   core_script.cpp_CScript_step_FUN_0055a810 (0055a810) at 0055be6f [UNCONDITIONAL_CALL]
//   core_set.cpp_CDemonSet_process_FUN_0056f940 (0056f940) at 0056fa07 [UNCONDITIONAL_CALL]
//   core_simbox.cpp_CSimBox_process_FUN_00588f20 (00588f20) at 00588f51 [UNCONDITIONAL_CALL]
//   core_smiley.cpp_FUN_005a2800 (005a2800) at 005a2df3 [UNCONDITIONAL_CALL]
//   core_spike.cpp_FUN_005b8410 (005b8410) at 005b843c [UNCONDITIONAL_CALL]
//   core_stranger.cpp_CStranger_FUN_005bb960 (005bb960) at 005bb97e [UNCONDITIONAL_CALL]
//   core_stranger.cpp_CStranger_FUN_005c67c0 (005c67c0) at 005c67cc [UNCONDITIONAL_CALL]
//   core_succubus.cpp_CSuccubus_process_FUN_005c6e90 (005c6e90) at 005c72a5 [UNCONDITIONAL_CALL]
//   core_turret.cpp_CTurret_process_FUN_005e2430 (005e2430) at 005e248d [UNCONDITIONAL_CALL]
//   core_vampboss.cpp_CVampireBoss_process_FUN_005e5970 (005e5970) at 005e6b2c [UNCONDITIONAL_CALL]
//   core_wateract.cpp_CWaterActor_process_FUN_005eb100 (005eb100) at 005eb1a2 [UNCONDITIONAL_CALL]
//   core_weather.cpp_CWeather_SomethingWithLightingThunder_FUN_005eeaf0 (005eeaf0) at 005eed06 [UNCONDITIONAL_CALL]
//   core_zombie.cpp_CZombie_process_FUN_005f9470 (005f9470) at 005fa4b9 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_none_006252ae
//   TerminatedCString s_s_006252b3
//   CConsole* g_CConsolePtr = 0083b1a4
//   CConsole g_ConsolePtr
//   undefined4 DAT_02d0a45c
//   undefined1 DAT_02d0a460
// Function calls:
//   core_event.cpp_CEventList_FUN_004add80
//   crt_string.c_stricmp_FUN_005fe7f0
//   engine_console.cpp_CConsole_printf_FUN_00441890

#include "nocturne.h"

int __cdecl
core_event_cpp_CEventList_evaluateCondition_FUN_004adca0
          (CEventList *this_ptr,char *condition_expression)

{
  int iVar1;
  
  if ((condition_expression == (char *)0x0) || (*condition_expression == '\0')) {
    iVar1 = 0;
  }
  else {
    iVar1 = crt_string_c_stricmp_FUN_005fe7f0(condition_expression,"none");
    if (iVar1 != 0) {
      DAT_02d0a45c = 0;
      iVar1 = core_event_cpp_CEventList_FUN_004add80((CEventList *)condition_expression);
      if (iVar1 < 0) {
        engine_console_cpp_CConsole_printf_FUN_00441890(g_CConsolePtr,"%s\n");
        return 0;
      }
    }
  }
  return iVar1;
}


// Assembly code:
// 004adca0: PUSH EBX
//   Label: core_event.cpp_CEventList_evaluateCondition_FUN_004adca0
// 004adca1: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 004adca5: TEST EBX,EBX
// 004adca7: JZ 0x004adcae
//   XREF to: 004adcae (CONDITIONAL_JUMP)
// 004adca9: CMP byte ptr [EBX],0x0
// 004adcac: JNZ 0x004adcb2
//   XREF to: 004adcb2 (CONDITIONAL_JUMP)
// 004adcae: XOR EAX,EAX
//   Label: LAB_004adcae
// 004adcb0: POP EBX
//   Label: LAB_004adcb0
// 004adcb1: RET
// 004adcb2: PUSH 0x6252ae
//   Label: LAB_004adcb2
//   XREF to: 006252ae (DATA)
// 004adcb7: PUSH EBX
// 004adcb8: CALL crt_string.c_stricmp_FUN_005fe7f0
//   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)
// 004adcbd: ADD ESP,0x8
// 004adcc0: TEST EAX,EAX
// 004adcc2: JZ 0x004adcb0
//   XREF to: 004adcb0 (CONDITIONAL_JUMP)
// 004adcc4: PUSH EBX
// 004adcc5: MOV ECX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 004adcc9: XOR EDX,EDX
// 004adccb: PUSH ECX
// 004adccc: MOV dword ptr [0x02d0a45c],EDX
//   XREF to: 02d0a45c (WRITE)
// 004adcd2: CALL core_event.cpp_CEventList_FUN_004add80
//   XREF to: 004add80 (UNCONDITIONAL_CALL)
// 004adcd7: ADD ESP,0x8
// 004adcda: TEST EAX,EAX
// 004adcdc: JGE 0x004adcb0
//   XREF to: 004adcb0 (CONDITIONAL_JUMP)
// 004adcde: PUSH 0x2d0a460
//   XREF to: 02d0a460 (DATA)
// 004adce3: PUSH 0x6252b3
//   XREF to: 006252b3 (DATA)
// 004adce8: MOV EBX,dword ptr [0x0066e8e0]
//   XREF to: 0083b1a4 (PARAM)
//   XREF to: 0066e8e0 (READ)
// 004adcee: PUSH EBX
//   XREF to: 0083b1a4 (DATA)
// 004adcef: CALL engine_console.cpp_CConsole_printf_FUN_00441890
//   XREF to: 00441890 (UNCONDITIONAL_CALL)
// 004adcf4: ADD ESP,0xc
// 004adcf7: XOR EAX,EAX
// 004adcf9: POP EBX
// 004adcfa: RET
