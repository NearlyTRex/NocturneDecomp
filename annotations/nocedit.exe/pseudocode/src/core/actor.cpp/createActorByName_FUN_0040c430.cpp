// Name: core_actor.cpp_createActorByName_FUN_0040c430
// Address: 0040c430
// Address Range: [[0040c430, 0040c4cd]]
// Convention: __cdecl
// Signature: CDemonActor * core_actor.cpp_createActorByName_FUN_0040c430(char * class_name)
// Cross-references:
//   core_baron.cpp_FUN_00413f20 (00413f20) at 00413f7c [UNCONDITIONAL_CALL]
//   core_game.cpp_CGame_processCheatCodes_FUN_004ddaf0 (004ddaf0) at 004de56e [UNCONDITIONAL_CALL]
//   core_game.cpp_giveHeroWeapon_FUN_004dd870 (004dd870) at 004dd879 [UNCONDITIONAL_CALL]
//   core_hero.cpp_CHeroPlaceholder_createHero_FUN_004f3d80 (004f3d80) at 004f3da6 [UNCONDITIONAL_CALL]
//   core_hero.cpp_CHero_FUN_004f2a30 (004f2a30) at 004f2a51 [UNCONDITIONAL_CALL]
//   core_inv.cpp_CInventory_addItem_FUN_004fd600 (004fd600) at 004fe5ac [UNCONDITIONAL_CALL]
//   core_inv.cpp_CInventory_initialize_FUN_004fd190 (004fd190) at 004fd1ea [UNCONDITIONAL_CALL]
//   core_inv.cpp_CInventory_load_FUN_004ff400 (004ff400) at 004ff6ac [UNCONDITIONAL_CALL]
//   core_mimic.cpp_CMimic_setup_FUN_0051f3e0 (0051f3e0) at 0051f5e1 [UNCONDITIONAL_CALL]
//   core_mission.cpp_CDemonMission_readMissionFile_FUN_00522eb0 (00522eb0) at 00523446 [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_DuplicateActorCheckMaybe_FUN_0053bd80 (0053bd80) at 0053be1d [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_FUN_0053b9f0 (0053b9f0) at 0053ba9b [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_FUN_0053d8b0 (0053d8b0) at 0053d9e0 [UNCONDITIONAL_CALL]
//   core_passngr.cpp_FUN_00545d30 (00545d30) at 00545df9 [UNCONDITIONAL_CALL]
//   core_scat.cpp_FUN_00557150 (00557150) at 00557170 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_core_actor_cpp_0061420a
//   TerminatedCString s_Can_t_create_actor_of_un_0061421c
//   TerminatedCString s_core_actor_cpp_00614249
//   TerminatedCString s_Can_t_create_instance_of_0061425b
//   TerminatedCString s_core_actor_cpp_00614285
//   TerminatedCString s_Not_enough_memory_to_cre_00614297
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_actor.cpp_getActorClassByName_FUN_0040c3c0
//   core_main.c_displayErrorAndQuit_FUN_00506f10

#include "nocturne.h"

CDemonActor * __cdecl core_actor_cpp_createActorByName_FUN_0040c430(char *class_name)

{
  CDemonActorType *pCVar1;
  CDemonActor *pCVar2;
  
  pCVar1 = core_actor_cpp_getActorClassByName_FUN_0040c3c0(class_name);
  if (pCVar1 == (CDemonActorType *)0x0) {
    g_CurrentFilename = "..\\core\\actor.cpp";
    g_CurrentLineNumber = 0xa3b;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Can't create actor of unknown class type: %s",class_name);
  }
  if (pCVar1->factory_func == (CDemonActorFactoryFunction *)0x0) {
    g_CurrentFilename = "..\\core\\actor.cpp";
    g_CurrentLineNumber = 0xa41;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Can't create instance of abstract type %s",class_name);
  }
  pCVar2 = (*pCVar1->factory_func)();
  if (pCVar2 != (CDemonActor *)0x0) {
    return pCVar2;
  }
  g_CurrentFilename = "..\\core\\actor.cpp";
  g_CurrentLineNumber = 0xa4a;
  core_main_c_displayErrorAndQuit_FUN_00506f10("Not enough memory to create %s",class_name);
  return (CDemonActor *)0x0;
}


// Assembly code:
// 0040c430: PUSH EBX
//   Label: core_actor.cpp_createActorByName_FUN_0040c430
// 0040c431: PUSH ESI
// 0040c432: PUSH EBP
// 0040c433: MOV ESI,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 0040c437: PUSH ESI
// 0040c438: CALL core_actor.cpp_getActorClassByName_FUN_0040c3c0
//   XREF to: 0040c3c0 (UNCONDITIONAL_CALL)
// 0040c43d: ADD ESP,0x4
// 0040c440: MOV EBX,EAX
// 0040c442: TEST EAX,EAX
// 0040c444: JZ 0x0040c47e
//   XREF to: 0040c47e (CONDITIONAL_JUMP)
// 0040c446: CMP dword ptr [EBX + 0x2c],0x0
//   Label: LAB_0040c446
// 0040c44a: JNZ 0x0040c46f
//   XREF to: 0040c46f (CONDITIONAL_JUMP)
// 0040c44c: PUSH ESI
// 0040c44d: MOV EBP,0x614249
//   XREF to: 00614249 (DATA)
// 0040c452: MOV EAX,0xa41
// 0040c457: PUSH 0x61425b
//   XREF to: 0061425b (DATA)
// 0040c45c: MOV dword ptr [0x02f0ca48],EBP
//   XREF to: 02f0ca48 (WRITE)
// 0040c462: MOV [0x02f0ca4c],EAX
//   XREF to: 02f0ca4c (WRITE)
// 0040c467: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0040c46c: ADD ESP,0x8
// 0040c46f: CALL dword ptr [EBX + 0x2c]
//   Label: LAB_0040c46f
// 0040c472: MOV EBX,EAX
// 0040c474: TEST EAX,EAX
// 0040c476: JZ 0x0040c4a4
//   XREF to: 0040c4a4 (CONDITIONAL_JUMP)
// 0040c478: MOV EAX,EBX
// 0040c47a: POP EBP
// 0040c47b: POP ESI
// 0040c47c: POP EBX
// 0040c47d: RET
//   Label: LAB_0040c47d
// 0040c47e: PUSH ESI
//   Label: LAB_0040c47e
// 0040c47f: MOV EDX,0x61420a
//   XREF to: 0061420a (PARAM)
// 0040c484: MOV ECX,0xa3b
// 0040c489: PUSH 0x61421c
//   XREF to: 0061421c (DATA)
// 0040c48e: MOV dword ptr [0x02f0ca48],EDX
//   XREF to: 02f0ca48 (WRITE)
// 0040c494: MOV dword ptr [0x02f0ca4c],ECX
//   XREF to: 02f0ca4c (WRITE)
// 0040c49a: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0040c49f: ADD ESP,0x8
// 0040c4a2: JMP 0x0040c446
//   XREF to: 0040c446 (UNCONDITIONAL_JUMP)
// 0040c4a4: PUSH ESI
//   Label: LAB_0040c4a4
// 0040c4a5: MOV EDX,0x614285
//   XREF to: 00614285 (PARAM)
// 0040c4aa: MOV ECX,0xa4a
// 0040c4af: PUSH 0x614297
//   XREF to: 00614297 (DATA)
// 0040c4b4: MOV dword ptr [0x02f0ca48],EDX
//   XREF to: 02f0ca48 (WRITE)
// 0040c4ba: MOV dword ptr [0x02f0ca4c],ECX
//   XREF to: 02f0ca4c (WRITE)
// 0040c4c0: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0040c4c5: ADD ESP,0x8
// 0040c4c8: MOV EAX,EBX
// 0040c4ca: POP EBP
// 0040c4cb: POP ESI
// 0040c4cc: POP EBX
// 0040c4cd: RET
